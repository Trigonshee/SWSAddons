class XtdGearModels
{
  class CfgVehicles
  {
    class SWS_BaseGearModel;

    class SWS_Bag_LR : SWS_BaseGearModel
    {
      label = QNAME(LR Bags);
      options[] = { "Variant", "Customization" };
      class Variant
      {
        values[] = { "Standard", "RTO" };

        class Standard {};
        class RTO {};
      };

      class Customization
      {
        values[] = { "None", "Hound" };
        class None {};
        class Hound
        {
          description = "Hound's customized version.";
        };
      };
    };
  };
};
