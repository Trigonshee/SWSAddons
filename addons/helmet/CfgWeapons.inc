class CfgWeapons
{
  class OPTRE_UNSC_CH252D_Helmet_Base;
  class SWS_Helmet_Base : OPTRE_UNSC_CH252D_Helmet_Base
  {
    ITEM_META(0);
    displayName = "-";
    descriptionShort = "Project: SCARLET experimental headgear.";
    optreVarietys/*[sic]*/[] = {"_dp", ""}; // Used to determine the different pieces for polarized or not.

    hiddenSelections[] = {
      "camo"
      , "camo2"
      , "H_Ghillie"
      , "camo4"
      , "H_Ghillie"
      , "H_VacCollar"
      , "H_Neck"
    };
    hiddenSelectionsMaterials[] = {};
    hiddenSelectionsTextures[] = {};
    class ItemInfo : ItemInfo
    {
      hiddenSelections[] = {
        "camo"
        , "camo2"
        , "H_Ghillie"
        , "camo4"
        , "H_Ghillie"
        , "H_VacCollar"
        , "H_Neck"
      };
      hiddenSelectionsMaterials[] = {};
      hiddenSelectionsTextures[] = {};
    };
  };
};
