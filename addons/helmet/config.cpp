#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches
{
  class ADDON
  {
    name = QUOTE(COMPONENT);
    units[] = { };
    weapons[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {"OPTRE_UNSC_Units_Army"};
    author = QUOTE(AUTHOR);
    VERSION_CONFIG;
  };
};
