class CfgVehicle {
	class StaticMGWeapon;
	class AAA_System_01_Base_F;
	class OPTRE_FC_Tyrant: AAA_System_01_Base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.25;
        maxVerticalRotSpeed = 0.25;
        minElev = -10;
			};
		};
	};
	class OPTRE_FC_TyrantAA: AAA_System_01_Base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.25;
        maxVerticalRotSpeed = 0.25;
        minElev = 0;
			};
		};
	};
	class OPTRE_FC_T26_AA: StaticMGWeapon {
		radarTargetSize = 0.7;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
				maxVerticalRotSpeed = 0.25;
        minElev = 0;
			};
		};
	};
	class OPTRE_FC_T26_AI: StaticMGWeapon {
		radarTargetSize = 0.7;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
				maxVerticalRotSpeed = 0.25;
        minElev = -10;
			};
		};
	};
	class OPTRE_FC_T26_AT: StaticMGWeapon {
		radarTargetSize = 0.7;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
				maxVerticalRotSpeed = 0.25;
        minElev = -10;
			};
		};
	};
	class OPTRE_FC_T29B_NVar: AAA_System_01_Base_F {
		radarTargetSize = 0.8;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
				maxVerticalRotSpeed = 0.25;
        minElev = -25;
			};
		};
	};
	class OPTRE_FC_T56_AA: AAA_System_01_Base_F {
		displayName = "Type-56 Howler AA Turret";
		radarTargetSize = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
        maxVerticalRotSpeed = 0.25;
        minElev = 0;
			};
		};
	};
	class OPTRE_FC_T56_AAG: AAA_System_01_Base_F {
		displayName = "Type-56 Howler Turret";
		radarTargetSize = 1;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
        maxHorizontalRotSpeed = 0.667;
        maxVerticalRotSpeed = 0.25;
        minElev = -25;
			};
		};
	};
};

