#include "script_component.hpp"

#include "XtdGearModels.inc"
#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    ammo[] = { };
    magazines[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "DMNS_Supplies_F_Bags" // $PBOPREFIX$: dmns_units.pbo
      , "sws_main"
      , "sws_aceax"
    };
    VERSION_CONFIG;
  };
};
