#define CLASSES_VEHICLES "SWS_D77Sx_Pelican"

#define LOCK_LASER 4 // LaserLock targets only https://community.bistudio.com/wiki/Arma_3:_Targeting_config_reference#showAllTargets



class CfgVehicles
{
  class OPTRE_Pelican_F;
  class SWS_D77Sx_Pelican_Base : OPTRE_Pelican_F
  {
    ITEM_META(0);
    displayName = QNAME(D77Sx Pelican Base);
    side = 1;
    faction = "SWS_UNSC";
    crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
    typicalCargo[] = { "OPTRE_UNSC_Airforce_Soldier_Airman" };

    //--- Appearance
    icon = "optre_vehicles\pelican\data\icon.paa";
    picture = "optre_vehicles\pelican\data\icon2.paa"; // TODO: Replace
    // TODO: editorPreview = ".jpg"
    model = "splits\splits_vehicles\pelican\d77_tc_pelican_19th.p3d";
    hiddenSelections[] = { "camo1", "camo2", "camo3" };
    hiddenSelectionsTextures[] = {};

    //--- Pilot & Crew Details
    preciseGetInOut = 1; // Model center; TODO: see if we can use a memory point
    transportSoldier = 10;
    cargoIsCoDriver[] = { FALSE, FALSE };
    cargoProxyIndexes[] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }; // TODO: actual proxy values

    //--- Animations (Driver)
    driverAction = "Splits_Pilot_Pelican";
    driverInAction = "Splits_Pilot_Pelican";
    driverLeftHandAnimName = "Stick_Pilot";
    driverRightHandAnimName = "Lever_Pilot";
    driverLeftLegAnimNam = "Pedals_1_Left_2";
    driverRightLegAnimName = "Pedals_1_Right_2";

    //--- Animations (Others)
    getInAction = "Pilot_Heli_Light_02_Enter";
		getOutAction = "Pilot_Heli_Light_02_Exit";
    cargoGetInAction[] = { "GetInHeli_Transport_01Cargo" };
    cargoGetOutAction[] =
		{
			"GetOutMedium",
			"GetOutHighHemtt"
		};
    cargoAction[] = {
			"passenger_generic02_foldhands"
      , "passenger_generic01_leanleft"
      , "passenger_mantisrear"
      , "passenger_generic01_leanright"
      , "passenger_apc_generic01"
      , "passenger_apc_generic02"
      , "passenger_apc_generic03"
      , "passenger_apc_generic04"
      , "passenger_generic01_leanright"
      , "passenger_generic02_foldhands"
		};

    //--- Vehicle Properties
    getInRadius = 1.0;
    gearRetracting = TRUE; // Whether vehicle has a retractable landing gear
    gearUpTime = 3.33;
    gearDownTime = 3.33;
    maximumLoad = 2e5;
    wheelSteeringSensitivity = 0.7;

    //--- Flight profile
    altFullForce = 8e5; // Between this and altNoForce, thrust becomes less effective
    altNoForce = 8e5; // arbitarily high to simulate non-atmospheric flight
    maxSpeed = 700;
    maxFordingDepth = 10; // How far underwater the vehicle can go before taking damage.
    mainBladeRadius = 0; // Collision detection
    maxXRotSpeed = 0.5;
    maxYRotSpeed = 4.5;
    liftForceCoef = 1.25;
    bodyFrictionCoef = 2;
    cyclicForwardForceCoef = 3.5; // Multiplier of dive force
    backRotoForceCoef = 2.25;
    //--- Advanced Flight Model
    numberPhysicalWheels = 3;
    class RotorLibHelicopterProperties : RotorLibHelicopterProperties
    {
      // TODO: maybe Advanced Flight Model properties; for now don't worry about it.
      rtdConfig="splits\splits_vehicles\pelican\rtd_pelican_01.xml";
      autoHoverCorrection[] = { 3.2, 0,0 };
			defaultCollective = 0.505;
			retreatBladeStallWarningSpeed=83;
			maxTorque = 4800;//3300
			stressDamagePerSec = 0.00;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
    };

    //--- Tech
    accuracy = 0.02; // How easily an AI can recognize what the vehicle is
    receiveRemoteTarget = TRUE;
    reportOwnPosition = TRUE;
    reportRemoteTargets = TRUE;
    weaponLockSystem = 31;

    //--- Legacy Sensor Properties
    irTargetSize = 2;
    irScanRangeMin = 200;
		irScanRangeMax = 1e5;
    laserScanner = TRUE;

    //--- Defenses
    armor = 240;

    class HitPoints : HitPoints
    {
      class HitGlass1
      {
        armor = 5.25;
        explosiveShielding = TRUE;
        passThrough = 0.05;
        name = "glass1";
        visual = "glass1";
      };

      class HitGlass2 : HitGlass1 { name ="glass2"; visual = "glass2"; };
      class HitGlass3 : HitGlass1 { name ="glass3"; visual = "glass3"; };
      class HitGlass4 : HitGlass1 { name ="glass4"; visual = "glass4"; };
      class HitGlass5 : HitGlass1 { name ="glass5"; visual = "glass5"; };
      class HitGlass6 : HitGlass1 { name ="glass6"; visual = "glass6"; };
    };

    class Exhausts : Exhausts
    {
      class Exhaust1;
      class Exhaust9 : Exhaust1 { position = "exhaust9"; direction = "exhaust9_dir"; };
      class Exhaust9 : Exhaust1 { position = "exhaust10"; direction = "exhaust10_dir"; };
      class Exhaust9 : Exhaust1 { position = "exhaust11"; direction = "exhaust11_dir"; };
      class Exhaust9 : Exhaust1 { position = "exhaust12"; direction = "exhaust12_dir"; };
    };
  };

  class SWS_D77Sx_Pelican : SWS_D77Sx_Pelican_Base
  {
    SCOPE(2);
    displayName = QNAME(D77Sx Pelican);
    hiddenSelectionsTextures[] = { "Splits\Splits_Vehicles\Pelican\data\H2_General\body_co.paa", "Splits\Splits_Vehicles\Pelican\data\H2_General\wings_and_gear_co.paa", "Splits\Splits_Vehicles\Pelican\data\H2_General\weaponry_co.paa" };
  };
};
