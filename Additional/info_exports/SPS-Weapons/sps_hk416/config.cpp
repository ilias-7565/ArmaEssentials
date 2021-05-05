class CfgPatches
{
	class SPS_weapons_hk416
	{
		addonRootClass="A3_Weapons_F";
		author="SPS Team";
		authors[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-HK416";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"cba_jr",
			"SPS_Weapons",
			"ace_smallarms",
			"ace_ballistics"
		};
		requiredVersion=1.78;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"SPS_hk416_14_5_afg_ral8000_F",
			"SPS_hk416_14_5_afg_black_F",
			"SPS_hk416_14_5_afg_fde_F",
			"SPS_hk416_16_5_afg_ral8000_F",
			"SPS_hk416_16_5_afg_black_F",
			"SPS_hk416_16_5_afg_fde_F",
			"SPS_hk416_11_afg_ral8000_F",
			"SPS_hk416_11_afg_black_F",
			"SPS_hk416_11_afg_fde_F",
			"SPS_hk416_14_5_vfg_ral8000_F",
			"SPS_hk416_14_5_vfg_black_F",
			"SPS_hk416_14_5_vfg_fde_F",
			"SPS_hk416_16_5_vfg_ral8000_F",
			"SPS_hk416_16_5_vfg_black_F",
			"SPS_hk416_16_5_vfg_fde_F",
			"SPS_hk416_11_vfg_ral8000_F",
			"SPS_hk416_11_vfg_black_F",
			"SPS_hk416_11_vfg_fde_F",
			"SPS_hk416_20_afg_ral8000_F",
			"SPS_hk416_20_afg_black_F",
			"SPS_hk416_20_afg_fde_F",
			"SPS_hk416_20_vfg_ral8000_F",
			"SPS_hk416_20_vfg_black_F",
			"SPS_hk416_20_vfg_fde_F",
			"SPS_hk416_11_glm_black_f",
			"SPS_hk416_11_glm_FDE_f",
			"SPS_hk416_11_glm_RAL8000_f",
			"SPS_hk416_14_5_glm_black_f",
			"SPS_hk416_14_5_glm_FDE_f",
			"SPS_hk416_14_5_glm_RAL8000_f",
			"SPS_hk416_16_5_glm_black_f",
			"SPS_hk416_16_5_glm_FDE_f",
			"SPS_hk416_16_5_glm_RAL8000_f"
		};
		magazines[]=
		{
			"SPS_P_60Rnd_556x45_Surefire_Tracer_Red_mag",
			"SPS_P_60Rnd_556x45_Surefire_Tracer_Dim_mag",
			"SPS_P_60Rnd_556x45_Surefire_Mk318_mag",
			"SPS_P_60Rnd_556x45_Surefire_Mk262_mag",
			"SPS_P_60Rnd_556x45_Surefire_M995_AP_mag",
			"SPS_P_60Rnd_556x45_Surefire_mag",
			"sps_30Rnd_556x45_Stanag",
			"sps_30Rnd_556x45_Stanag_M995_AP_mag",
			"sps_30Rnd_556x45_Stanag_Mk262_mag",
			"sps_30Rnd_556x45_Stanag_Mk318_mag",
			"sps_30Rnd_556x45_Stanag_Mk318_mag",
			"sps_30Rnd_556x45_Stanag_Tracer_Dim",
			"sps_30Rnd_556x45_Stanag_Tracer_Red"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_556;
class asdg_UnderSlot;
class SPS;
class ACE_ATragMX_Presets
{
	class sps_HK416_20_AtragMX
	{
		preset[]=
		{
			"HK416 20 M855",
			922.09998,
			100,
			0.075228997,
			-0.0013009401,
			7.1100001,
			0,
			2,
			10,
			120,
			0,
			0,
			4.0180001,
			5.6999998,
			17.780001,
			0.30199999,
			1,
			"ASM",
			
			{
				{-15,895},
				{0,901},
				{10,909},
				{15,914},
				{25,928},
				{30,937},
				{35,950}
			},
			
			{
				{0,0.30599999},
				{670,0.29800001},
				{880,0.29100001},
				{1000,0.289},
				{1150,0.28799999},
				{1340,0.28799999},
				{1410,0.28799999}
			}
		};
	};
	class sps_HK416_20_Mk262_AtragMX
	{
		preset[]=
		{
			"HK416 20 Mk262",
			838,
			100,
			0.084394999,
			-0.00111805,
			7.1100001,
			0,
			2,
			10,
			120,
			0,
			0,
			4.9899998,
			5.6999998,
			17.780001,
			0.361,
			1,
			"ASM",
			
			{
				{-15,811},
				{0,818},
				{10,825},
				{15,830},
				{25,844},
				{30,853},
				{35,864}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
	class sps_HK416_20_Mk318_AtragMX
	{
		preset[]=
		{
			"HK416 20 Mk318",
			950.29999,
			100,
			0.073219001,
			-0.0012588,
			7.1100001,
			0,
			2,
			10,
			120,
			0,
			0,
			4.0180001,
			5.6999998,
			17.780001,
			0.30700001,
			1,
			"ASM",
			
			{
				{-15,923},
				{0,930},
				{10,937},
				{15,942},
				{25,956},
				{30,965},
				{35,976}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
	class sps_HK416_20_M995_AtragMX
	{
		preset[]=
		{
			"HK416 20 M995",
			880,
			100,
			0.080215,
			-0.00126182,
			7.1100001,
			0,
			2,
			10,
			120,
			0,
			0,
			4.5359998,
			5.6999998,
			17.780001,
			0.31,
			1,
			"ASM",
			
			{
				{-15,853},
				{0,860},
				{10,867},
				{15,872},
				{25,886},
				{30,895},
				{35,906}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
};
class CfgMagazineWells
{
	class STANAG_556x45
	{
		SPS_Magazines[]=
		{
			"SPS_P_60Rnd_556x45_Surefire_Tracer_Red_mag",
			"SPS_P_60Rnd_556x45_Surefire_Tracer_Dim_mag",
			"SPS_P_60Rnd_556x45_Surefire_Mk318_mag",
			"SPS_P_60Rnd_556x45_Surefire_Mk262_mag",
			"SPS_P_60Rnd_556x45_Surefire_M995_AP_mag",
			"SPS_P_60Rnd_556x45_Surefire_mag",
			"sps_30Rnd_556x45_Stanag",
			"sps_30Rnd_556x45_Stanag_M995_AP_mag",
			"sps_30Rnd_556x45_Stanag_Mk262_mag",
			"sps_30Rnd_556x45_Stanag_Mk318_mag",
			"sps_30Rnd_556x45_Stanag_Mk318_mag",
			"sps_30Rnd_556x45_Stanag_Tracer_Dim",
			"sps_30Rnd_556x45_Stanag_Tracer_Red"
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class GunParticles: GunParticles
		{
			class SecondEffect;
		};
		class WeaponSlotsInfo;
		class Single;
		class FullAuto;
		class fullauto_medium;
		class single_medium_optics1;
		class single_medium_optics2;
	};
	class SPS_hk416_base_f: arifle_SPAR_01_base_F
	{
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
			"30Rnd_556x45_Stanag_Tracer_Red"
		};
		magazineWell[]=
		{
			"STANAG_556x45"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
		};
		ACE_clearJamAction="GestureReloadSPAR_01";
		ACE_checkTemperatureAction="Gear";
		ACE_overheating_mrbs=15000;
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_ironsightbaseangle=0.057300001;
		magazineReloadSwitchPhase=0.38;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium"
		};
		reloadAction="GestureReloadSPAR_01";
		recoil="recoil_spar";
		maxZeroing=1000;
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=2;
		allowedSlots[]={901};
		selectionFireAnim="zasleh";
		class Single: Single
		{
			reloadTime=0.075000003;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.075000003;
		};
		class sps_glm: UGL_F
		{
			displayName="HK GLM";
			descriptionShort="40mm Grenade Launcher Module";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350"
			};
			discreteDistanceInitIndex=2;
			reloadAction="GestureReloadSPARUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
				1,
				1,
				10
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"CBA_40mm_M203",
				"CBA_40mm_EGLM"
			};
		};
	};
	class SPS_hk416_11_vfg_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00061498501;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00061498501;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00061498501;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00061498501;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.00061498501;
		};
		ACE_barrelLength=279.39999;
		ACE_barrelTwist=177.8;
		dexterity=1.7;
		displayName="HK416A5 11 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_VFG5.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\VerticalGrip_low_CO.paa",
			""
		};
		inertia=0.28999999;
		initSpeed=-0.89099997;
		model="x\SPS\Weapons\SPS_hk416\HK416_11.p3d";
		picture="x\SPS\Weapons\SPS_hk416\ui\11VFG_black_ca.paa";
		scope=2;
		maxZeroing=800;
		uiPicture="x\SPS\Weapons\SPS_hk416\ui\11VFG_black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=69;
		};
	};
	class SPS_hk416_11_vfg_ral8000_f: SPS_hk416_11_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11VFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11VFG_ral8000_ca.paa";
	};
	class SPS_hk416_11_vfg_fde_f: SPS_hk416_11_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11VFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11VFG_fde_ca.paa";
	};
	class SPS_hk416_11_afg_black_f: SPS_hk416_11_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_AFG3.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11AFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11AFG_black_ca.paa";
	};
	class SPS_hk416_11_afg_ral8000_f: SPS_hk416_11_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11AFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11AFG_ral8000_ca.paa";
	};
	class SPS_hk416_11_afg_fde_f: SPS_hk416_11_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11AFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11AFG_fde_ca.paa";
	};
	class SPS_hk416_14_5_vfg_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.000574985;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.000574985;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.000574985;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.000574985;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.000574985;
		};
		scope=2;
		displayName="HK416A5 14.5 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_VFG5.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\VerticalGrip_low_CO.paa"
		};
		model="x\SPS\Weapons\SPS_hk416\hk416_14_5.p3d";
		picture="x\SPS\Weapons\SPS_hk416\ui\14VFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14VFG_black_ca.paa";
		maxZeroing=1000;
		initSpeed=-0.92400002;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=77;
		};
		inertia=0.37;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		dexterity=1.6;
		class ItemInfo
		{
			priority=1;
		};
	};
	class SPS_hk416_14_5_vfg_ral8000_f: SPS_hk416_14_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14VFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14VFG_ral8000_ca.paa";
	};
	class SPS_hk416_14_5_vfg_fde_f: SPS_hk416_14_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14VFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14VFG_fde_ca.paa";
	};
	class SPS_hk416_14_5_afg_black_f: SPS_hk416_14_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_AFG3.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14AFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14AFG_black_ca.paa";
	};
	class SPS_hk416_14_5_afg_ral8000_f: SPS_hk416_14_5_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14AFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14AFG_ral8000_ca.paa";
	};
	class SPS_hk416_14_5_afg_fde_f: SPS_hk416_14_5_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14AFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14AFG_fde_ca.paa";
	};
	class SPS_hk416_16_5_vfg_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00052;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00052;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00052;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00052;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.00052;
		};
		scope=2;
		displayName="HK416A5 16.5 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_VFG5.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16VFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16VFG_black_ca.paa";
		initSpeed=-0.97799999;
		model="x\SPS\Weapons\SPS_hk416\HK416_16_5.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=81;
		};
		maxZeroing=1200;
		inertia=0.4145;
		dexterity=1.55;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		class ItemInfo
		{
			priority=1;
		};
	};
	class SPS_hk416_16_5_vfg_ral8000_f: SPS_hk416_16_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16VFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16VFG_ral8000_ca.paa";
	};
	class SPS_hk416_16_5_vfg_fde_f: SPS_hk416_16_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16VFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16VFG_fde_ca.paa";
	};
	class SPS_hk416_16_5_afg_black_f: SPS_hk416_16_5_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_AFG3.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16AFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16AFG_black_ca.paa";
	};
	class SPS_hk416_16_5_afg_ral8000_f: SPS_hk416_16_5_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16AFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16AFG_ral8000_ca.paa";
	};
	class SPS_hk416_16_5_afg_fde_f: SPS_hk416_16_5_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16AFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16AFG_fde_ca.paa";
	};
	class SPS_hk416_20_vfg_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00038000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00038000001;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00038000001;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00038000001;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.00038000001;
		};
		scope=2;
		displayName="HK416A5 20 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_VFG5.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20VFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20VFG_black_ca.paa";
		initSpeed=-1.011;
		model="x\SPS\Weapons\SPS_hk416\HK416_20.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
		};
		maxZeroing=1400;
		inertia=0.46000001;
		dexterity=1.45;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=508.60001;
		class ItemInfo
		{
			priority=1;
		};
	};
	class SPS_hk416_20_vfg_ral8000_f: SPS_hk416_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 20 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20VFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20VFG_ral8000_ca.paa";
	};
	class SPS_hk416_20_vfg_fde_f: SPS_hk416_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 20 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20VFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20VFG_fde_ca.paa";
	};
	class SPS_hk416_20_afg_black_f: SPS_hk416_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 20 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_AFG3.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20AFG_black_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20AFG_black_ca.paa";
	};
	class SPS_hk416_20_afg_ral8000_f: SPS_hk416_20_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 20 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20AFG_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20AFG_ral8000_ca.paa";
	};
	class SPS_hk416_20_afg_fde_f: SPS_hk416_20_afg_black_f
	{
		author="SPS Team";
		displayName="HK416A5 20 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\20AFG_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\20AFG_fde_ca.paa";
	};
	class SPS_hk416_11_glm_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00061498501;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00061498501;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00061498501;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00061498501;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.00061498501;
		};
		ACE_barrelLength=279.39999;
		ACE_barrelTwist=177.8;
		dexterity=1.6;
		displayName="HK416A5 11 Barrel GLM Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_GLM2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		inertia=0.38999999;
		initSpeed=-0.89099997;
		model="x\SPS\Weapons\SPS_hk416\HK416_11GL.p3d";
		picture="x\SPS\Weapons\SPS_hk416\ui\11GLM_black_ca.paa";
		muzzles[]=
		{
			"this",
			"sps_glm"
		};
		scope=2;
		maxZeroing=800;
		uiPicture="x\SPS\Weapons\SPS_hk416\ui\11GLM_black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=89;
		};
	};
	class SPS_hk416_11_glm_ral8000_f: SPS_hk416_11_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel GLM RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11GLM_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11GLM_ral8000_ca.paa";
	};
	class SPS_hk416_11_glm_fde_f: SPS_hk416_11_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 11 Barrel GLM FDE";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_11_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\11GLM_FDE_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\11GLM_FDE_ca.paa";
	};
	class SPS_hk416_14_5_glm_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.000574985;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.000574985;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.000574985;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.000574985;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.000574985;
		};
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
		dexterity=1.5;
		displayName="HK416A5 14.5 Barrel GLM Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_GLM2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		inertia=0.47;
		initSpeed=-0.92400002;
		model="x\SPS\Weapons\SPS_hk416\HK416_14_5GL.p3d";
		picture="x\SPS\Weapons\SPS_hk416\ui\14GLM_black_ca.paa";
		muzzles[]=
		{
			"this",
			"sps_glm"
		};
		scope=2;
		maxZeroing=1000;
		uiPicture="x\SPS\Weapons\SPS_hk416\ui\14GLM_black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=97;
		};
	};
	class SPS_hk416_14_5_glm_ral8000_f: SPS_hk416_14_5_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel GLM RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14GLM_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14GLM_ral8000_ca.paa";
	};
	class SPS_hk416_14_5_glm_fde_f: SPS_hk416_14_5_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 14.5 Barrel GLM FDE";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14GLM_FDE_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14GLM_FDE_ca.paa";
	};
	class SPS_hk416_16_5_glm_black_f: SPS_hk416_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00052;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00052;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00052;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00052;
		};
		class single_medium_optics2: single_medium_optics2
		{
			dispersion=0.00052;
		};
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
		dexterity=1.45;
		displayName="HK416A5 16.5 Barrel GLM Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk416\data\rtm\HK416_GLM2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Black\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		inertia=0.51450002;
		initSpeed=-0.97799999;
		model="x\SPS\Weapons\SPS_hk416\HK416_16_5GL.p3d";
		picture="x\SPS\Weapons\SPS_hk416\ui\16GLM_black_ca.paa";
		muzzles[]=
		{
			"this",
			"sps_glm"
		};
		scope=2;
		maxZeroing=1200;
		uiPicture="x\SPS\Weapons\SPS_hk416\ui\16GLM_black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class SPS_hk416_16_5_glm_ral8000_f: SPS_hk416_16_5_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel GLM RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\14GLM_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\14GLM_ral8000_ca.paa";
	};
	class SPS_hk416_16_5_glm_fde_f: SPS_hk416_16_5_glm_black_f
	{
		author="SPS Team";
		displayName="HK416A5 16.5 Barrel GLM FDE";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"MagazineSF60",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp416",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BarrelGroup_16_5_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_hk416\Data\40mmCase_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\40mmRound_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Frame_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\FrontClamp_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Moveables_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\Swingplate_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\T1Body_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\DarkEarth\SpuhrMount_low_CO.paa",
			"x\SPS\Weapons\sps_hk416\Data\Barrel_GLM_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk416\ui\16GLM_FDE_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk416\ui\16GLM_FDE_ca.paa";
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
	class ACE_30Rnd_556x45_Stanag_Mk262_mag;
	class ACE_30Rnd_556x45_Stanag_Mk318_mag;
	class ACE_30Rnd_556x45_Stanag_Tracer_Dim;
	class 30Rnd_556x45_Stanag_Tracer_Red;
	class SPS_P_60Rnd_556x45_Surefire_mag: 30Rnd_556x45_Stanag
	{
		scope=2;
		author="SPS Team";
		count=60;
		descriptionShort="Caliber : 556.45mm NATO<br />Rounds : 60";
		displayName="5.56mm 60Rnd Mag";
		lastRoundsTracer=5;
		mass=14;
		tracersEvery=5;
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class SPS_P_60Rnd_556x45_Surefire_M995_AP_mag: ACE_30Rnd_556x45_Stanag_M995_AP_mag
	{
		count=60;
		descriptionShort="Caliber : 5.56x45mm NATO (M995)<br />Rounds : 60";
		displayName="5.56mm 60Rnd Mag (M995 AP)";
		lastRoundsTracer=5;
		mass=14;
		tracersEvery=5;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class SPS_P_60Rnd_556x45_Surefire_Mk262_mag: ACE_30Rnd_556x45_Stanag_Mk262_mag
	{
		count=60;
		descriptionShort="Caliber : 5.56x45mm NATO (Mk262)<br />Rounds : 60";
		displayName="5.56mm 60Rnd Mag (Mk262)";
		lastRoundsTracer=5;
		mass=14;
		tracersEvery=5;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class SPS_P_60Rnd_556x45_Surefire_Mk318_mag: ACE_30Rnd_556x45_Stanag_Mk318_mag
	{
		count=60;
		descriptionShort="Caliber : 5.56x45mm NATO (Mk318)<br /> Rounds : 60";
		displayName="5.56mm 60Rnd Mag (Mk318)";
		lastRoundsTracer=5;
		mass=14;
		tracersEvery=5;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class SPS_P_60Rnd_556x45_Surefire_Tracer_Dim_mag: ACE_30Rnd_556x45_Stanag_Tracer_Dim
	{
		count=60;
		descriptionShort="Caliber : 5.56x45mm NATO Tracer (IR-DIM)<br />Rounds : 60";
		displayName="5.56mm 60Rnd Tracer Mag (IR-DIM)";
		displayNameShort="5.56mm Tracer (IR-DIM)";
		lastRoundsTracer=5;
		mass=14;
		tracersEvery=5;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class SPS_P_60Rnd_556x45_Surefire_Tracer_Red_mag: 30Rnd_556x45_Stanag_Tracer_Red
	{
		count=60;
		descriptionShort="Caliber : 556.45mm NATO Tracer (Red)<br />Rounds : 60";
		displayName="5.56mm 60Rnd Tracer Mag (Red)";
		displayNameShort="5.56mm Tracer Red";
		lastRoundsTracer=0;
		mass=14;
		tracersEvery=1;
		scope=2;
		author="SPS Team";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_sf60.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"MagazineSF60"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\RAL8000\MagazineSF60_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm NATO";
		displayName="HK 5.56mm 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag_M995_AP_mag: ACE_30Rnd_556x45_Stanag_M995_AP_mag
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm (M995)";
		displayName="HK 5.56mm (M995) 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag_Mk262_mag: ACE_30Rnd_556x45_Stanag_Mk262_mag
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm (Mk262)";
		displayName="HK 5.56mm (Mk262) 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag_Mk318_mag: ACE_30Rnd_556x45_Stanag_Mk318_mag
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm (Mk318)";
		displayName="HK 5.56mm (Mk318) 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag_Tracer_Dim: ACE_30Rnd_556x45_Stanag_Tracer_Dim
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm (IRDIM)";
		displayName="HK 5.56mm (IRDIM) 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
	class sps_30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag_Tracer_Red
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK 556x45mm Tracer (Red)";
		displayName="HK 5.56mm Tracer (Red) 30Rnd Mag STANAG";
		modelSpecial="x\SPS\Weapons\sps_hk416\sps_556_stanag";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Magazine"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk416\Data\Black\Magazine_low_CO.paa"
		};
	};
};
