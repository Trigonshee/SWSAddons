#define CLASSES_VEHICLES        \
  "SWS_V_Bag_S_PRC_810"         \
  , "SWS_V_Bag_S_PRC_810_RTO"   \
  , "SWS_V_Bag_S_PRC_810_Hard"  \
  , "SWS_V_Bag_S_PRC_810_Hard_RTO"

// Hardshell case
#define HS_BAG_HARD "camo"
// Soft fabric upper - presently unavailable
#define HS_BAG_SOFT "camo2"
// Radio pieces
#define HS_RADIO "camo3"
// Biofoam attachments
#define HS_MEDICAL "B_Medic"
#define HS_BASE HS_BAG_HARD, HS_BAG_SOFT, HS_RADIO, HS_MEDICAL

// Soft upper - presently unused
#define HS_VAR_SOFT "B_Bag"
// Hardshell upper - tied to radio
#define HS_VAR_RADIO "B_Radio"

class CfgVehicles
{
  class DMNS_Rucksack_Base_F;
  class SWS_V_Bag_S_PRC_810_Base : DMNS_Rucksack_Base_F
  {
    ITEM_META(0);
    displayName = "-";

    //--- TFAR Config
    tf_dialog = "mr6000l_radio_dialog";
    tf_range = 25000;
    tf_encryptionCode = "tf_west_radio_code";
    tf_subtype = "digital_lr";
    tf_hasLRRadio = TRUE;
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";

    maximumLoad = 400;
    mass = 40;

    hiddenSelections[] = {HS_BASE};
    hiddenSelectionsMaterials[] = {
      QPATHTOF(data\bag_s_prc_810\bag_hard.rvmat)
      , QPATHTOF(data\bag_s_prc_810\bag_soft.rvmat)
      , QPATHTOF(data\bag_s_prc_810\radio.rvmat)
      , QPATHTOF(data\bag_s_prc_810\biofoam.rvmat)
    };
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\bag_s_prc_810\bag_hard_co.paa)
      , QPATHTOF(data\bag_s_prc_810\bag_soft_medical_co.paa)
      , QPATHTOF(data\bag_s_prc_810\radio_co.paa)
      , QPATHTOF(data\bag_s_prc_810\biofoam_co.paa)
    };
  };

  class SWS_V_Bag_S_PRC_810 : SWS_V_Bag_S_PRC_810_Base
  {
    SCOPE(2);
    displayName = QNAME(S/PRC-810);
    hiddenSelections[] = {HS_BASE, HS_VAR_SOFT, HS_MEDICAL};
  };
  class SWS_V_Bag_S_PRC_810_RTO : SWS_V_Bag_S_PRC_810_Base
  {
    SCOPE(2);
    displayName = QNAME(S/PRC-810 - RTO);
    hiddenSelections[] = {HS_BASE, HS_VAR_SOFT};
  };
};

#undef HS_BAG_HARD
#undef HS_BAG_SOFT
#undef HS_RADIO
#undef HS_MEDICAL
#undef HS_BASE

#undef HS_VAR_SOFT
#undef HS_VAR_RADIO
