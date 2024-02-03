class XtdGearModels
{
  class CfgVehicles
  {
    class SWS_BaseGearModel;

    class SWS_Bag_LR : SWS_BaseGearModel
    {
      label = QNAME(LR Bags);
      options[] = {"Variant"};
      class Variant
      {
        values[] = { "Standard", "RTO" };

        class Standard {};
        class RTO {};
      };
    };
  };
};
