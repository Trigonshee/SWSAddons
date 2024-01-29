#define COMPONENT helmet
#define COMPONENT_BEAUTIFIED Helmets
#include "\x\sws\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
  #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_HELMET
  #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\sws\addons\main\script_macros.hpp"

#define TEX_OPTRE_GHILLIE_WOODLAND QUOTE(PATHTO_OPTRE_ARMY##\data\ghillie_woodland_co.paa)
#define MAT_A3_GHILLIE "a3\characters_f\common\data\ghillie.rvmat"
