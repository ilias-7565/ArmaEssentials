class CfgPatches
{
	class sps_hk_g3_pmag
	{
		addonRootClass="A3_Weapons_F";
		author="SPS Team";
		authors[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-HK-G3-PMAG";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"ace_smallarms",
			"ace_ballistics",
			"sps_weapons_kac_lamg"
		};
		requiredVersion=1.78;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]={};
		magazines[]=
		{
			"SPS_HKG3PMAG_30Rnd_556x45_B",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_S",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_B",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_S",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_B",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_S",
			"SPS_HKG3PMAG_30Rnd_556x45_B_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_S_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_B_M995",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_M995",
			"SPS_HKG3PMAG_30Rnd_556x45_S_M995"
		};
	};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		SFG_HK_Magazines[]=
		{
			"SPS_HKG3PMAG_30Rnd_556x45_B",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_S",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Red",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Green",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_B",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_M855A1_S",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_B",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_FDE",
			"SPS_HKG3PMAG_30Rnd_556x45_M856A1_S",
			"SPS_HKG3PMAG_30Rnd_556x45_B_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_S_IR",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Mk262",
			"SPS_HKG3PMAG_30Rnd_556x45_B_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_S_Mk318",
			"SPS_HKG3PMAG_30Rnd_556x45_B_M995",
			"SPS_HKG3PMAG_30Rnd_556x45_FDE_M995",
			"SPS_HKG3PMAG_30Rnd_556x45_S_M995"
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 30Rnd_556x45_Stanag;
	class SPS_HKG3PMAG_30Rnd_556x45_B: 30Rnd_556x45_Stanag
	{
		descriptionShort="HK G3 PMAG Mag Black<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black";
		displayNameShort="5.56mm";
		lastRoundsTracer=3;
		count=30;
		tracersEvery=0;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk_g3_pmag\HK_G3_PMAG.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Black\Mag_low_CO.paa"
		};
		initSpeed=909;
		model="\x\SPS\Weapons\sps_hk_g3_pmag\HK_G3_PMAG_black.p3d";
		ammo="B_556x45_Ball_Tracer_Red";
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\Black_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag FDE<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE";
		scope=2;
		author="SPS Team";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\FDE\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\FDE_CA.paa";
		model="\x\SPS\Weapons\sps_hk_g3_pmag\HK_G3_PMAG_FDE.p3d";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Sand<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand";
		scope=2;
		author="SPS Team";
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Sand\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\Sand_CA.paa";
		model="\x\SPS\Weapons\sps_hk_g3_pmag\HK_G3_PMAG_Sand.p3d";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_Red: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Black Tracers Red<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black Tracers Red";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_Red: SPS_HKG3PMAG_30Rnd_556x45_FDE
	{
		descriptionShort="HK G3 PMAG Mag FDE Tracers Red<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE Tracers Red";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_Red: SPS_HKG3PMAG_30Rnd_556x45_S
	{
		descriptionShort="HK G3 PMAG Mag Sand Tracers Red<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand Tracers Red";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_Green: SPS_HKG3PMAG_30Rnd_556x45_B_Red
	{
		descriptionShort="HK G3 PMAG Mag Black Tracers Green<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black Tracers Green";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_Green: SPS_HKG3PMAG_30Rnd_556x45_FDE_Red
	{
		descriptionShort="HK G3 PMAG Mag FDE Tracers Green<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE Tracers Green";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_Green: SPS_HKG3PMAG_30Rnd_556x45_S_Red
	{
		descriptionShort="HK G3 PMAG Mag Sand Tracers Green<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand Tracers Green";
		displayNameShort="5.56mm T";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M855A1_B: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Black M855A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black M855A1";
		displayNameShort="M855A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M855A1_FDE: SPS_HKG3PMAG_30Rnd_556x45_FDE
	{
		descriptionShort="HK G3 PMAG Mag FDE M855A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE M855A1";
		displayNameShort="M855A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M855A1_S: SPS_HKG3PMAG_30Rnd_556x45_S
	{
		descriptionShort="HK G3 PMAG Mag Sand M855A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand M855A1";
		displayNameShort="M855A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M856A1_B: SPS_HKG3PMAG_30Rnd_556x45_B_Red
	{
		descriptionShort="HK G3 PMAG Mag Black M856A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black M856A1";
		displayNameShort="M856A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M856A1_FDE: SPS_HKG3PMAG_30Rnd_556x45_FDE_Red
	{
		descriptionShort="HK G3 PMAG Mag FDE M856A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE M856A1";
		displayNameShort="M856A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_M856A1_S: SPS_HKG3PMAG_30Rnd_556x45_S_Red
	{
		descriptionShort="HK G3 PMAG Mag Sand M856A1<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand M856A1";
		displayNameShort="M856A1";
		scope=2;
		author="SPS Team";
		ammo="B_SPS_M855A1";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_IR: SPS_HKG3PMAG_30Rnd_556x45_B_Red
	{
		descriptionShort="HK G3 PMAG Mag Black IR Tracers<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black IR Tracers";
		displayNameShort="5.56mm IR-DIM";
		ammo="ACE_B_556x45_Ball_Tracer_Dim";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_IR: SPS_HKG3PMAG_30Rnd_556x45_FDE_Red
	{
		descriptionShort="HK G3 PMAG Mag FDE IR Tracers<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE IR Tracers";
		displayNameShort="5.56mm IR-DIM";
		ammo="ACE_B_556x45_Ball_Tracer_Dim";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_IR: SPS_HKG3PMAG_30Rnd_556x45_S_Red
	{
		descriptionShort="HK G3 PMAG Mag Sand IR Tracers<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand IR Tracers";
		displayNameShort="5.56mm IR-DIM";
		ammo="ACE_B_556x45_Ball_Tracer_Dim";
		tracersEvery=1;
		scope=2;
		author="SPS Team";
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_Mk262: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Black Mk262<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black Mk262";
		displayNameShort="Mk262";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk262";
		initSpeed=832;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk262: SPS_HKG3PMAG_30Rnd_556x45_FDE
	{
		descriptionShort="HK G3 PMAG Mag FDE Mk262<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE Mk262";
		displayNameShort="Mk262";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk262";
		initSpeed=832;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_Mk262: SPS_HKG3PMAG_30Rnd_556x45_S
	{
		descriptionShort="HK G3 PMAG Mag Sand Mk262<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand Mk262";
		displayNameShort="Mk262";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk262";
		initSpeed=832;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_Mk318: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Black Mk318<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black Mk318";
		displayNameShort="Mk318";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk318";
		initSpeed=923;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_Mk318: SPS_HKG3PMAG_30Rnd_556x45_FDE
	{
		descriptionShort="HK G3 PMAG Mag FDE Mk318<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE Mk318";
		displayNameShort="Mk318";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk318";
		initSpeed=923;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_Mk318: SPS_HKG3PMAG_30Rnd_556x45_S
	{
		descriptionShort="HK G3 PMAG Mag Sand Mk318<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand Mk318";
		displayNameShort="Mk318";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_Mk318";
		initSpeed=923;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_B_M995: SPS_HKG3PMAG_30Rnd_556x45_B
	{
		descriptionShort="HK G3 PMAG Mag Black M995AP<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Black M995AP";
		displayNameShort="M995AP";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_M995_AP";
		initSpeed=875;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_FDE_M995: SPS_HKG3PMAG_30Rnd_556x45_FDE
	{
		descriptionShort="HK G3 PMAG Mag FDE M995AP<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag FDE M995AP";
		displayNameShort="M995AP";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_M995_AP";
		initSpeed=875;
	};
	class SPS_HKG3PMAG_30Rnd_556x45_S_M995: SPS_HKG3PMAG_30Rnd_556x45_S
	{
		descriptionShort="HK G3 PMAG Mag Sand M995AP<br />Caliber : 556.45mm NATO<br />Rounds : 30";
		displayName="5.56mm 30Rnd HK G3 PMAG Mag Sand M995AP";
		displayNameShort="M995AP";
		scope=2;
		author="SPS Team";
		ammo="ACE_556x45_Ball_M995_AP";
		initSpeed=875;
	};
};
