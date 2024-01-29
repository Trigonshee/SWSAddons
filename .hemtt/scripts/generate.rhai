// if i was sane I'd do this in a real language, yet here we are

// Template compiler stuff
fn parse(TEMPLATE_DATA, statement) {
  let terminator = "%>";
  let terminatorIndex = statement.index_of(terminator);

  if terminatorIndex == -1 {
    return statement;
  };

  let fields = statement.split(terminatorIndex);
  let unparsed = fields[0];
  let rest = fields[1].sub_string(terminator.len);

  eval(unparsed) + rest;
};

fn concat(a,b) { a + b };

fn compile(template, config) {
  template.split("<%=").map(parse.curry(config)).reduce(concat);
};

// Begin building config stuff
let helmet_addon = HEMTT_RFS.join("addons").join("helmet");
let helmet_template = helmet_addon
  .join("subcomponent.template")
  .join("_helmet.template")
  .open_file()
  .read();

let config_path = helmet_addon.join("script_configs").join("o_maid.rhai");

let baseConfig = eval(config_path.open_file().read());

fn stringLiteral(val) { `"${val}"`};

fn makeClassName(config) {
  `${config.variationShort}_${config.variant}` + switch [config.withGhillie, config.withVacCollar] {
    [true, true] => "_Gh_Vac",
    [true, false] => "_Gh",
    [false, true] => "_Vac",
    _ => ""
  };
};

fn makeDisplayName(config) {
  `${config.variation} Helmet - ${config.variant}` + switch [config.withGhillie, config.withVacCollar] {
    [true, true] => " (Ghillie/Vac)",
    [true, false] => " (Ghillie)",
    [false, true] => " (Vac)",
    _ => ""
  };
};

fn compileConfig(config) {
  config.variationShort = config.variation.get(0);
  config.className = makeClassName(config);
  config.displayName = makeDisplayName(config);
  config;
};

fn compileVariations(baseConfig) {
  [
    #{ withGhillie: false, withVacCollar: false },
    #{ withGhillie: false, withVacCollar: true },
    #{ withGhillie: true, withVacCollar: false },
    #{ withGhillie: true, withVacCollar: true },
  ].map(|subtype| baseConfig + subtype).map(compileConfig);
};

fn join(arr, separator) {
  let last = arr.pop();
  arr.map(|val| val + separator).reduce(|acc,el| acc + el) + last;
};

fn templateMakeName(template) {
  let name = template.file_name();
  name.replace(".template", "");
  name;
};

let outputDirName = config_path.file_name();
outputDirName.replace(".rhai","");
let outdir = helmet_addon.join(outputDirName).create();

let templates = helmet_addon.join("subcomponent.template").list();
let partialTemplates = templates.drain(|template| template.file_name().starts_with("_"));
let variationConfigs = compileVariations(baseConfig);
baseConfig.classNames = variationConfigs.reduce(|acc,el| acc + [`SWS_Helmet_${el.className}`, `SWS_Helmet_${el.className}_dp`], []);
let mixins = partialTemplates.reduce(|acc, template| {
  let fileName = templateMakeName(template);
  let result = variationConfigs.map(compile.curry(template.open_file().read())).reduce(concat);
  acc[fileName] = result;
  acc;
}, #{});

baseConfig.MIXINS = mixins;
for template in templates {
  let out = outdir.join(templateMakeName(template));
  let res = compile(template.open_file().read(), baseConfig);
  out.create_file().write(res);
};
