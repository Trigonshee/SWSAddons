class CfgVehicles
{
    class Land_CampingChair_V2_F;
    class SWS_Chair : Land_CampingChair_V2_F
    {
        displayName = QNAME(Chair);
        model = QPATHTOF(data\chair.p3d);
    };
    class Land_IRMaskingCover_01_F; // larger tent
    class Land_IRMaskingCover_02_F; // smaller tent
    class SWS_IRTent_Large : Land_IRMaskingCover_01_F
    {
        displayName = QNAME(IRTent (Large));
        ITEM_META(2);
        hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(data/irtent/ir_tent_large_olive_co.paa),
            QPATHTOF(data/irtent/ir_tent_large_sand_co.paa),
            QPATHTOF(data/irtent/ir_tent_large_snow_co.paa),
            QPATHTOF(data/irtent/ir_tent_large_urban_co.paa),
            QPATHTOF(data/irtent/ir_tent_large_tropic_co.paa)
		}; /* ------ Not ready yet ------
        class Attributes
        {
            class ObjectTextureSelector
            {
                displayName="Camo Type";
				tooltip="Type of camo to assign to the object. Match the surroundings.";
				property="ObjectTextureSelector";
				control="edit";
				expression="_this setObjectTextureGlobal [1,_value]";
				defaultValue="(getObjectTextures _this) param [1,'',['']]";
            };
        };*/
    };
};
