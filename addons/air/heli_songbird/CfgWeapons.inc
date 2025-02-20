class CfgWeapons
{
  class M134_minigun;
  class M134_MELB: M134_minigun
  {
    ballisticsComputer = "8";
    cursor="EmptyCursor";
    cursorAim="mg";
    displayName = "Sx1337-H";
    class LowROF: LowROF
    {
      dispersion = 0.0045;
      recoil = "recoil_empty";
    };
  };
  class M260_MELB;
  class SWS_TalonLauncher: M260_MELB
  {
    displayName = "Sx260 Talon HEDP";
    ballisticsComputer = "8";
    showAimCursorInternal = 1;
    cursor="EmptyCursor";
    cursorAim="rocket";
    magazines[] =
    {
    "Pylon_Talon_3x_MELB",
    "Pylon_Talon_4x_MELB"
    };
    class Burst1: Burst1
    {
      displayName = "Single";
      dispersion = 0.01;
    };
    class Burst2: Burst2
    {
      displayName = "Burst";
      dispersion = 0.01;
    };
  };
  class SWS_RakeLauncher: SWS_TalonLauncher
    {
      displayName = "Sx260 Rake HE";
      magazines[] =
		  {
			"Pylon_Rake_3x_MELB",
      "Pylon_Rake_4x_MELB",
			"Pylon_Rake_12x_MELB"
		  };
  };
};