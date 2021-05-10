class cfgPatches {
	class Config_NATO_RUS_Massi_en {
		name = "Weapon config overwrite en";
		author = "ilias";
		url = "https://github.com/ilias-7565/ArmaEssentials";

		requiredVersion = 1.60;
		requiredAddons[] = {
			"A3_Data_F_Loadorder"
				,"A3_Data_F_Curator_Loadorder"
				,"A3_Data_F_Kart_Loadorder"
				,"A3_Data_F_Bootcamp_Loadorder"
				,"A3_Data_F_Heli_Loadorder"
				,"A3_Data_F_Mark_Loadorder"
				,"A3_Data_F_Exp_A_Loadorder"		//?
				,"A3_Data_F_Exp_B_Loadorder"		//3Den Editor
				,"A3_Data_F_Mod_Loadorder"
				,"A3_Data_F_Exp_Loadorder"		//Apex
				,"A3_Data_F_Jets_Loadorder"
				,"A3_Data_F_Argo_Loadorder"
				,"A3_Data_F_Patrol_Loadorder"
				,"A3_Data_F_Orange_Loadorder"
				,"A3_Data_F_Tacops_Loadorder"
				,"A3_Data_F_Tank_Loadorder"
				,"A3_Data_F_Destroyer_Loadorder"
				,"A3_Data_F_Sams_Loadorder"
				,"A3_Data_F_Warlords_Loadorder"
				,"A3_Data_F_Enoch_Loadorder"
			,"cba_main"		//Loadorder
				// ,"cba_main_a3"
				// ,"CBA_Extended_EventHandlers"
				// ,"cba_xeh_a3"
				// ,"cba_jam_finish"
				// ,"cba_ee"
				// ,"cba_ui_helper"
			// ,"asdg_jointrails"
				// ,"asdg_jointmuzzles"
			,"ace_common"
				// ,"ace_smallarms"
				
			// ,"CUP_Weapons_LoadOrder"
				// ,"CUP_WaterVehicles_LoadOrder"
				// ,"CUP_AirVehicles_LoadOrder"
				// ,"CUP_TrackedVehicles_LoadOrder"
				// ,"CUP_WheeledVehicles_LoadOrder"
			,"mas_weapons"
		};
		units[] = {};
		weapons[] = {
			"srifle_mas_m107"
			//,"srifle_mas_m110"
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CowsSlot;
class PointerSlot;
class SlotInfo;
class MuzzleSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;
class asdg_OpticRail;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762MG;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticSideMount;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_9MM_SMG;
class asdg_MuzzleSlot_545R;
class asdg_MuzzleSlot_762R;
class asdg_MuzzleSlot_338;
class CUP_PicatinnyUnderMount;
class CfgWeapons {

	class Rifle;
		class Rifle_Base_F: Rifle {
			// scope = 0;
			// discreteDistance[] = {100, 200, 300, 400, 500, 600};
			// discreteDistanceInitIndex = 1;
			// weaponInfoType = "RscWeaponZeroing";
			// recoil = "recoil_default";
			// deployedPivot = "bipod";
			// class GunParticles
			// {
			// 	class FirstEffect
			// 	{
			// 		effectName = "RifleAssaultCloud";
			// 		positionName = "Usti hlavne";
			// 		directionName = "Konec hlavne";
			// 	};
			// };
			class WeaponSlotsInfo;
		};
		// class MainWeapon_en: Rifle_Base_F {
		// 	scope=0;
		// 	class WeaponSlotsInfo: WeaponSlotsInfo {
		// 		scope=0;
		// 	};
		// };
		// class UGL_F;

	class arifle_MX_Base_F: Rifle_Base_F {
			class WeaponSlotsInfo;
		};

		class arifle_MX_F: arifle_MX_Base_F {
			class WeaponSlotsInfo;
		};
		class arifle_MX_GL_F: arifle_MX_Base_F {
			class WeaponSlotsInfo;
		};
		class EBR_base_F;
		class srifle_EBR_F: EBR_base_F {
			class WeaponSlotsInfo;
		};
		class Rifle_Long_Base_F;
		class LMG_Mk200_F: Rifle_Long_Base_F {
			class WeaponSlotsInfo;
		};
		class LRR_base_F;
		class srifle_LRR_F: LRR_base_F {
			class WeaponSlotsInfo;
		};
		class GM6_base_F;
		class srifle_GM6_F: GM6_base_F {
			class WeaponSlotsInfo;
		};
		class SMG_02_base_F;
		class SMG_02_F: SMG_02_base_F {
			class WeaponSlotsInfo;
		};
		class pdw2000_base_F;
		class hgun_PDW2000_F: pdw2000_base_F {
			class WeaponSlotsInfo;
		};
	
	class srifle_mas_m107: srifle_GM6_F {
		author="massi & authors in credits";
		_generalMacro="srifle_mas_m107";
		DLC="NATO_Rus_Weapons";
		scope=1;
		scopeArsenal=2;
		baseWeapon="srifle_mas_m107";
		displayname="M107/M82 12.7 $str_yes_en @str_yes_en";
		model="\mas_us_rifle\mas_m107";
		handanim[]={
			"OFP2_ManSkeleton",
			"\mas_us_rifle\Anim\Handanim_m107.rtm"
		};
		reloadAction="GestureReloadEBR";
		magazines[]={
			"5Rnd_mas_127x99_Stanag"		//10rnd
			,"5Rnd_mas_127x99_dem_Stanag"
			,"5Rnd_mas_127x99_T_Stanag"
			,"greenmag_ammo_127x99_basic_1Rnd"
		};
		picture="\mas_us_rifle\ui\gear_m107_x_ca.paa";
		descriptionshort="Sniper Rifle<br />Caliber: 12.7x99 mm";
		maxZeroing=2300;
		hasBipod=0;
		class Library {
			libtextdesc="The M107 is a recoil-operated, semi-automatic anti-materiel rifle developed by the American Barrett Firearms Manufacturing company. A heavy SASR (Special Application Scoped Rifle), it is used by many units and armies around the world. It is also called the Light Fifty for its .50 BMG (12.7Ã—99mm NATO) chambering. The weapon is found in two variants, the original M82A1 (and A3) and the bullpup M82A2. It has been adopted for service by a number of armed forces and special forces.";
		};
		class Single: Mode_SemiAuto {
			dispersion=0.00034999999;
			soundContinuous=0;
			reloadTime=0.40000001;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			sounds[]={
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",
					0.39810699,
					1,
					40
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",
					0.39810699,
					1,
					40
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType {
				begin1[]=
				{
					"\mas_us_rifle\sounds\m107_s1",
					7.9432802,
					1,
					2200
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\m107_s2",
					7.9432802,
					1,
					2200
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				class SoundTails {
					class TailForest {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails {
					class TailForest {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees {
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass=100;		//1 = 0.04kg ("ACE 3")
			class MuzzleSlot: MuzzleSlot {
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				compatibleItems[]=
				{
					"muzzle_snds_B",
					"muzzle_mas_snds_SV",
					"muzzle_mas_snds_SVc"
				};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913 {
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot {
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				iconScale=0.2;
			};
		};
	};

	class srifle_mas_mk17s;
	// class srifle_mas_m110: srifle_mas_mk17s {
	// 	author="massi & authors in credits";
	// 	_generalMacro="srifle_mas_m110";
	// 	DLC="NATO_Rus_Weapons";
	// 	scopeArsenal=2;
	// 	baseWeapon="srifle_mas_m110";
	// 	displayname="M110";
	// 	model="\mas_nw_rifle\mas_m110";
	// 	picture="\mas_nw_rifle\ui\gear_m110_x_ca.paa";
	// 	descriptionshort="Marksman Rifle<br />Caliber: 7.62x51 mm";
	// 	hiddenSelections[]={};
	// 	hiddenSelectionsTextures[]={};
	// 	class Library {
	// 		libtextdesc="The M110 Semi Automatic Sniper System M110 SASS is an American semi automatic sniper rifle that is chambered for the 7.62Ã—51mm NATO round, developed by US firearm manufacturer Knight Armament Company. The M110 Semi Automatic Sniper System is intended to replace the M24 Sniper Weapon System used by snipers, spotters, designated marksman, or squad advanced marksmen in the United States Army.";
	// 	};
	// 	modes[]={
	// 		"Single",
	// 		"single_close_optics1",
	// 		"single_medium_optics1",
	// 		"single_far_optics1"
	// 	};
	// };

};
