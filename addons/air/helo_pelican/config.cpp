#include "script_component.hpp"

class HitGlass1;
class HitPoints;
class Exhausts;
class RotorLibHelicopterProperties;

#include "CfgVehicles.inc"

class CfgPatches
{
  class SUBADDON
  {
    addonRootClass = QUOTE(ADDON);
    name = COMPONENT_NAME;
    units[] = { CLASSES_VEHICLES };
    weapons[] = { };
    magazines[] = { };
    ammo[] = { };
    requiredVersion = REQUIRED_VERSION;
    requiredAddons[] = {
      "OPTRE_Vehicles_Pelican"
      , "Splits_Vehicles_Air_Pelican"
    };
    VERSION_CONFIG;
  };
};
