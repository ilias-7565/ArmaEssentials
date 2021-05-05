class CfgPatches
{
	class mas_weapons_nw
	{
		author="massi & authors in credits";
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Rifles_MX",
			"A3_Weapons_F_EBR",
			"mas_weapons",
			"mas_weapons_m4",
			"cba_jr",
			"asdg_jointrails_mas_weapons"
		};
		requiredversion=1.74;
		units[]=
		{
			"Box_mas_us_rifle_Wps_F"
		};
		weapons[]=
		{
			"arifle_mas_mk16",
			"arifle_mas_mk16_h",
			"arifle_mas_mk16_e",
			"arifle_mas_mk16_sd",
			"arifle_mas_mk16_gl",
			"arifle_mas_mk16_gl_h",
			"arifle_mas_mk16_gl_e",
			"arifle_mas_mk16_gl_sd",
			"arifle_mas_mk16_l",
			"arifle_mas_mk16_l_h",
			"arifle_mas_mk16_l_e",
			"arifle_mas_mk16_l_sd",
			"arifle_mas_mk16_l_gl",
			"arifle_mas_mk16_l_gl_h",
			"arifle_mas_mk16_l_gl_e",
			"arifle_mas_mk16_l_gl_sd",
			"arifle_mas_arx",
			"arifle_mas_arx_h",
			"arifle_mas_arx_e",
			"arifle_mas_arx_a",
			"arifle_mas_arx_sd",
			"arifle_mas_arx_gl",
			"arifle_mas_arx_gl_h",
			"arifle_mas_arx_gl_e",
			"arifle_mas_arx_gl_a",
			"arifle_mas_arx_gl_sd",
			"arifle_mas_arx_l",
			"arifle_mas_arx_l_h",
			"arifle_mas_arx_l_e",
			"arifle_mas_arx_l_a",
			"arifle_mas_arx_l_sd",
			"arifle_mas_arx_l_gl",
			"arifle_mas_arx_l_gl_h",
			"arifle_mas_arx_l_gl_e",
			"arifle_mas_arx_l_gl_a",
			"arifle_mas_arx_l_gl_sd",
			"arifle_mas_mk17",
			"arifle_mas_mk17_h",
			"arifle_mas_mk17_e",
			"arifle_mas_mk17_sd",
			"arifle_mas_mk17_gl",
			"arifle_mas_mk17_gl_h",
			"arifle_mas_mk17_gl_e",
			"arifle_mas_mk17_gl_sd",
			"srifle_mas_mk17s",
			"srifle_mas_mk17s_h",
			"srifle_mas_mk17s_sd",
			"srifle_mas_m110",
			"srifle_mas_m110_h",
			"srifle_mas_m110_sd"
		};
		magazines[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
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
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F;
	class UGL_F;
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_EBR_F;
	class srifle_mas_hk417: srifle_EBR_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_mas_mk16: arifle_mas_hk416
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk16";
		displayname="SCAR-LS";
		model="\mas_nw_rifle\mas_mk16";
		reloadAction="GestureReloadSMG_02";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\mas_nw_rifle\anim\Handanim_scar.rtm"
		};
		hiddenselections[]={};
		hiddenselectionstextures[]={};
		hiddenunderwaterselections[]={};
		hiddenunderwaterselectionstextures[]={};
		magazines[]=
		{
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45sd_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_UW_mag"
		};
		picture="\mas_nw_rifle\ui\gear_mk16_x_ca.paa";
		descriptionshort="Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc="The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56Ã—45mm NATO cartridge and the SCAR H, for heavy, fires 7.62Ã—51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.";
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\mk16_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\mk16_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\mk16_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSet="";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\mk16_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\mk16_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\mk16_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							1.5848932,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_mk16_h: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_h";
		displayName="SCAR-LS hamr";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_e: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_e";
		displayName="SCAR-LS holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_sd: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_sd";
		displayName="SCAR-LS SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl: arifle_mas_hk416_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_gl";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk16_gl";
		displayname="SCAR-LS EGLM";
		model="\mas_nw_rifle\mas_mk16_gl";
		reloadAction="GestureReloadSMG_02";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\mas_us_rifle\Anim\Handanim_hk416gl.rtm"
		};
		hiddenselections[]={};
		hiddenselectionstextures[]={};
		hiddenunderwaterselections[]={};
		hiddenunderwaterselectionstextures[]={};
		magazines[]=
		{
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45sd_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"20Rnd_556x45_UW_mag"
		};
		picture="\mas_nw_rifle\ui\gear_mk16gl_x_ca.paa";
		descriptionshort="Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc="The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56Ã—45mm NATO cartridge and the SCAR H, for heavy, fires 7.62Ã—51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.This version is equipped with EGLM 40mm granade launcher.";
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\mk16_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\mk16_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\mk16_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSet="";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\mk16_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\mk16_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\mk16_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							1.5848932,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName="EGLM";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
			weaponInfoType="RscWeaponZeroing";
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				compatibleitems[]={};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_mk16_gl_h: arifle_mas_mk16_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_gl_h";
		displayName="SCAR-LS EGLM hamr";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl_e: arifle_mas_mk16_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_gl_e";
		displayName="SCAR-LS EGLM holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_gl_sd: arifle_mas_mk16_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_gl_sd";
		displayName="SCAR-LS EGLM SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk16_l";
		displayname="SCAR-L";
		model="\mas_nw_rifle\mas_mk16_l";
		picture="\mas_nw_rifle\ui\gear_mk16l_x_ca.paa";
	};
	class arifle_mas_mk16_l_h: arifle_mas_mk16_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_h";
		displayName="SCAR-L RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_mk16_l_e: arifle_mas_mk16_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_e";
		displayName="SCAR-L holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_mk16_l_sd: arifle_mas_mk16_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_sd";
		displayName="SCAR-L SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_mk16_l_gl: arifle_mas_mk16_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_gl";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk16_l_gl";
		displayname="SCAR-L EGLM";
		model="\mas_nw_rifle\mas_mk16_l_gl";
		picture="\mas_nw_rifle\ui\gear_mk16lgl_x_ca.paa";
	};
	class arifle_mas_mk16_l_gl_h: arifle_mas_mk16_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_gl_h";
		displayName="SCAR-L EGLM RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_gl_e: arifle_mas_mk16_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_gl_e";
		displayName="SCAR-L EGLM holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk16_l_gl_sd: arifle_mas_mk16_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk16_l_gl_sd";
		displayName="SCAR-L EGLM SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_arx";
		displayname="ARX160 Tan";
		model="\mas_nw_rifle\mas_arx";
		picture="\mas_nw_rifle\ui\gear_arx_x_ca.paa";
		descriptionshort="Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc="The ARX160 is a modular assault rifle manufactured by. Developed for the Italian armed forces, the ARX160 was launched in 2008 as a commercial weapon system, complete with a companion single shot 40mm NATO low velocity grenade launcher, called GLX160, which can be underslung to the rifle or used with an ad hoc stock system as a stand alone weapon. The weapon unique features include ambidextrous safeties, magazine catches and charging handle, the ability to change which side spent casings are ejected, a quick change barrel which can be removed and replaced in seconds without tools, picatinny rails, and a foldable telescopic stock.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_arx_h: arifle_mas_arx
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_h";
		displayName="ARX160 Tan RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_e: arifle_mas_arx
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_e";
		displayName="ARX160 Tan holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_a: arifle_mas_arx
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_a";
		displayName="ARX160 Tan aimpoint";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_sd: arifle_mas_arx
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_sd";
		displayName="ARX160 Tan SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_gl: arifle_mas_mk16_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_gl";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_arx_gl";
		displayname="ARX160 Tan GLX";
		model="\mas_nw_rifle\mas_arx_gl";
		picture="\mas_nw_rifle\ui\gear_arxg_x_ca.paa";
		descriptionshort="Assault Rifle<br />Caliber: 5.56x45 mm";
		class Library
		{
			libtextdesc="The ARX160 is a modular assault rifle manufactured by. Developed for the Italian armed forces, the ARX160 was launched in 2008 as a commercial weapon system, complete with a companion single shot 40mm NATO low velocity grenade launcher, called GLX160, which can be underslung to the rifle or used with an ad hoc stock system as a stand alone weapon. The weapon unique features include ambidextrous safeties, magazine catches and charging handle, the ability to change which side spent casings are ejected, a quick change barrel which can be removed and replaced in seconds without tools, picatinny rails, and a foldable telescopic stock.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				compatibleitems[]={};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_arx_gl_h: arifle_mas_arx_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_gl_h";
		displayName="ARX160 Tan GLX RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_gl_e: arifle_mas_arx_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_gl_e";
		displayName="ARX160 Tan GLX holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_gl_a: arifle_mas_arx_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_gl_a";
		displayName="ARX160 Tan GLX aimpoint";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_gl_sd: arifle_mas_arx_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_gl_sd";
		displayName="ARX160 Tan GLX SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_l: arifle_mas_arx
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_arx_l";
		displayname="ARX160 Black";
		model="\mas_nw_rifle\mas_arx_l";
		picture="\mas_nw_rifle\ui\gear_arxl_x_ca.paa";
	};
	class arifle_mas_arx_l_h: arifle_mas_arx_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_h";
		displayName="ARX160 Black RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_arx_l_e: arifle_mas_arx_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_e";
		displayName="ARX160 Black holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_arx_l_a: arifle_mas_arx_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_a";
		displayName="ARX160 Black aimpoint";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_arx_l_sd: arifle_mas_arx_l
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_sd";
		displayName="ARX160 Black SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_arx_l_gl: arifle_mas_arx_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_gl";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_arx_l_gl";
		displayname="ARX160 Black GLX";
		model="\mas_nw_rifle\mas_arx_l_gl";
		picture="\mas_nw_rifle\ui\gear_arxlg_x_ca.paa";
	};
	class arifle_mas_arx_l_gl_h: arifle_mas_arx_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_gl_h";
		displayName="ARX160 Black GLX RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_l_gl_e: arifle_mas_arx_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_gl_e";
		displayName="ARX160 Black GLX holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_l_gl_a: arifle_mas_arx_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_gl_a";
		displayName="ARX160 Black GLX aimpoint";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_aim";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_arx_l_gl_sd: arifle_mas_arx_l_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_arx_l_gl_sd";
		displayName="ARX160 Black GLX SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_M";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17: arifle_mas_mk16
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk17";
		displayname="SCAR-H";
		model="\mas_nw_rifle\mas_mk17";
		reloadAction="GestureReloadSMG_02";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\mas_nw_rifle\anim\Handanim_scar.rtm"
		};
		hiddenselections[]={};
		hiddenselectionstextures[]={};
		hiddenunderwaterselections[]={};
		hiddenunderwaterselectionstextures[]={};
		magazines[]=
		{
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51sd_Stanag",
			"20Rnd_mas_762x51_T_Stanag",
			"20Rnd_762x51_Mag"
		};
		picture="\mas_nw_rifle\ui\gear_mk17_x_ca.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		descriptionshort="Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc="The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56Ã—45mm NATO cartridge and the SCAR H, for heavy, fires 7.62Ã—51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.";
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\MX_closure_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\hk417_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\hk417_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\hk417_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					0.316228,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				soundSet="";
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\mas_us_rifle\sounds\hk417_s1",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\mas_us_rifle\sounds\hk417_s2",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\mas_us_rifle\sounds\hk417_s3",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",
							1.5848932,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",
					0.79432797,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",
					0.79432797,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",
					0.79432797,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.096000001;
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_mk17_h: arifle_mas_mk17
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_h";
		displayName="SCAR-H hamr";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_mk17_e: arifle_mas_mk17
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_e";
		displayName="SCAR-H holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_sd: arifle_mas_mk17
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_sd";
		displayName="SCAR-H SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_hamr";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_mas_mk17_gl: arifle_mas_mk17
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_gl";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="arifle_mas_mk17_gl";
		displayname="SCAR-H EGLM";
		model="\mas_nw_rifle\mas_mk17_gl";
		reloadAction="GestureReloadSMG_02";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\mas_us_rifle\Anim\Handanim_hk416gl.rtm"
		};
		hiddenselections[]={};
		hiddenselectionstextures[]={};
		hiddenunderwaterselections[]={};
		hiddenunderwaterselectionstextures[]={};
		magazines[]=
		{
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51sd_Stanag",
			"20Rnd_mas_762x51_T_Stanag",
			"20Rnd_762x51_Mag"
		};
		picture="\mas_nw_rifle\ui\gear_mk17gl_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		descriptionshort="Assault Rifle<br />Caliber: 7.62x51 mm";
		class Library
		{
			libtextdesc="The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56Ã—45mm NATO cartridge and the SCAR H, for heavy, fires 7.62Ã—51mm NATO. Both are available in Long Barrel and Close Quarters Combat variants.This version is equipped with EGLM 40mm granade launcher.";
		};
		muzzles[]=
		{
			"this",
			"EGLMj"
		};
		class EGLMj: UGL_F
		{
			displayName="EGLM";
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
			weaponInfoType="RscWeaponZeroing";
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				compatibleitems[]={};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class arifle_mas_mk17_gl_h: arifle_mas_mk17_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_gl_h";
		displayName="SCAR-H EGLM RCO";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_gl_e: arifle_mas_mk17_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_gl_e";
		displayName="SCAR-H EGLM holo";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class arifle_mas_mk17_gl_sd: arifle_mas_mk17_gl
	{
		author="massi & authors in credits";
		_generalMacro="arifle_mas_mk17_gl_sd";
		displayName="SCAR-H EGLM SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_acog_eo";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
		};
	};
	class srifle_mas_mk17s: srifle_mas_hk417
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_mk17s";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="srifle_mas_mk17s";
		displayname="SCAR-H Mark";
		model="\mas_nw_rifle\mas_mk17_snp";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\mas_nw_rifle\anim\Handanim_scar.rtm"
		};
		reloadAction="GestureReloadSMG_02";
		magazines[]=
		{
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51sd_Stanag",
			"20Rnd_mas_762x51_T_Stanag",
			"20Rnd_762x51_Mag"
		};
		picture="\mas_nw_rifle\ui\gear_mk17s_x_ca.paa";
		descriptionshort="Marksman Rifle<br />Caliber: 7.62x51 mm";
		maxZeroing=1600;
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class Library
		{
			libtextdesc="The Special Operations Forces Combat Assault Rifle SCAR is a modular rifle made by FN Herstal FNH for the United States Special Operations Command SOCOM to satisfy the requirements of the SCAR competition.This family of rifles consist of two main types. The SCAR L, for light, is chambered in the 5.56Ã—45mm NATO cartridge and the SCAR H, for heavy, fires 7.62Ã—51mm NATO.This is the 20 inch barrel marksman version.";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPicture="\mas_us_rifle\ui\attachment_muzzle.paa";
				iconPosition[]={0,0.40000001};
				iconPinpoint="Center";
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPicture="\mas_us_rifle\ui\attachment_top2.paa";
				iconPosition[]={0.5,0.30000001};
				iconPinpoint="Bottom";
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPicture="\mas_us_rifle\ui\attachment_side.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPicture="\mas_us_rifle\ui\attachment_bipod.paa";
				iconPinpoint="Center";
				iconPosition[]={0.2,0.80000001};
				iconScale=0.2;
			};
			mass=80;
		};
	};
	class srifle_mas_mk17s_h: srifle_mas_mk17s
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_mk17s_h";
		displayName="SCAR-H Mark Scope";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_mas_mk17s_sd: srifle_mas_mk17s
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_mk17s_sd";
		displayName="SCAR-H Mark SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_mas_m110: srifle_mas_mk17s
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_m110";
		DLC="NATO_Rus_Weapons";
		scopeArsenal=2;
		baseWeapon="srifle_mas_m110";
		displayname="M110";
		model="\mas_nw_rifle\mas_m110";
		picture="\mas_nw_rifle\ui\gear_m110_x_ca.paa";
		descriptionshort="Marksman Rifle<br />Caliber: 7.62x51 mm";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class Library
		{
			libtextdesc="The M110 Semi Automatic Sniper System M110 SASS is an American semi automatic sniper rifle that is chambered for the 7.62Ã—51mm NATO round, developed by US firearm manufacturer Knight Armament Company. The M110 Semi Automatic Sniper System is intended to replace the M24 Sniper Weapon System used by snipers, spotters, designated marksman, or squad advanced marksmen in the United States Army.";
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
	};
	class srifle_mas_m110_h: srifle_mas_m110
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_m110_h";
		displayName="M110 Scope";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class srifle_mas_m110_sd: srifle_mas_m110
	{
		author="massi & authors in credits";
		_generalMacro="srifle_mas_m110_sd";
		displayName="M110 SD";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_mas_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_mas_snds_SM";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_mas_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class Box_NATO_Wps_F;
	class Box_mas_nw_rifle_Wps_F: Box_NATO_Wps_F
	{
		author="massi & authors in credits";
		_generalMacro="Box_mas_nw_rifle_Wps_F";
		DLC="NATO_Rus_Weapons";
		displayName="SCAR's Weapons/Ammo Box";
		model="\mas_us_rifle\mas_PeliWeaponBox_nato.p3d";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		maximumLoad=999999;
		transportMaxWeapons=50000;
		transportMaxMagazines=200000;
		transportMaxBackpacks=2000;
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine="30Rnd_mas_556x45_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45sd_Stanag
			{
				magazine="30Rnd_mas_556x45sd_Stanag";
				count=120;
			};
			class _xx_30Rnd_mas_556x45_T_Stanag
			{
				magazine="30Rnd_mas_556x45_T_Stanag";
				count=60;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine="30Rnd_556x45_Stanag";
				count=60;
			};
			class _xx_200Rnd_mas_556x45_Stanag
			{
				magazine="200Rnd_mas_556x45_Stanag";
				count=60;
			};
			class _xx_200Rnd_mas_556x45_T_Stanag
			{
				magazine="200Rnd_mas_556x45_T_Stanag";
				count=60;
			};
			class _xx_100Rnd_mas_762x51_Stanag
			{
				magazine="100Rnd_mas_762x51_Stanag";
				count=60;
			};
			class _xx_100Rnd_mas_762x51_T_Stanag
			{
				magazine="100Rnd_mas_762x51_T_Stanag";
				count=60;
			};
			class _xx_20Rnd_mas_762x51_Stanag
			{
				magazine="20Rnd_mas_762x51_Stanag";
				count=60;
			};
			class _xx_20Rnd_mas_762x51sd_Stanag
			{
				magazine="20Rnd_mas_762x51sd_Stanag";
				count=60;
			};
			class _xx_20Rnd_mas_762x51_T_Stanag
			{
				magazine="20Rnd_mas_762x51_T_Stanag";
				count=60;
			};
			class _xx_5Rnd_mas_762x51_Stanag
			{
				magazine="5Rnd_mas_762x51_Stanag";
				count=60;
			};
			class _xx_5Rnd_mas_762x51sd_Stanag
			{
				magazine="5Rnd_mas_762x51sd_Stanag";
				count=60;
			};
			class _xx_5Rnd_mas_762x51_T_Stanag
			{
				magazine="5Rnd_mas_762x51_T_Stanag";
				count=30;
			};
			class _xx_20Rnd_762x51_Mag
			{
				magazine="20Rnd_762x51_Mag";
				count=60;
			};
			class _xx_5Rnd_mas_127x99_Stanag
			{
				magazine="5Rnd_mas_127x99_Stanag";
				count=60;
			};
			class _xx_5Rnd_mas_127x99_dem_Stanag
			{
				magazine="5Rnd_mas_127x99_dem_Stanag";
				count=60;
			};
			class _xx_5Rnd_mas_127x99_T_Stanag
			{
				magazine="5Rnd_mas_127x99_T_Stanag";
				count=60;
			};
			class _xx_30Rnd_mas_9x21_Stanag
			{
				magazine="30Rnd_mas_9x21_Stanag";
				count=60;
			};
			class _xx_30Rnd_mas_9x21sd_Stanag
			{
				magazine="30Rnd_mas_9x21sd_Stanag";
				count=60;
			};
			class _xx_30Rnd_mas_9x21d_Stanag
			{
				magazine="30Rnd_mas_9x21d_Stanag";
				count=60;
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine="30Rnd_9x21_Mag";
				count=60;
			};
			class _xx_40Rnd_mas_46x30_Mag
			{
				magazine="40Rnd_mas_46x30_Mag";
				count=60;
			};
			class _xx_40Rnd_mas_46x30sd_Mag
			{
				magazine="40Rnd_mas_46x30sd_Mag";
				count=60;
			};
			class _xx_25Rnd_mas_9x19_Mag
			{
				magazine="25Rnd_mas_9x19_Mag";
				count=60;
			};
			class _xx_17Rnd_mas_9x21_Mag
			{
				magazine="17Rnd_mas_9x21_Mag";
				count=60;
			};
			class _xx_13Rnd_mas_9x21_Mag
			{
				magazine="13Rnd_mas_9x21_Mag";
				count=60;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine="16Rnd_9x21_Mag";
				count=60;
			};
			class _xx_15Rnd_mas_9x21_Mag
			{
				magazine="15Rnd_mas_9x21_Mag";
				count=60;
			};
			class _xx_15Rnd_mas_9x21sd_Mag
			{
				magazine="15Rnd_mas_9x21sd_Mag";
				count=60;
			};
			class _xx_12Rnd_mas_45acp_Mag
			{
				magazine="12Rnd_mas_45acp_Mag";
				count=60;
			};
			class _xx_12Rnd_mas_45acpsd_Mag
			{
				magazine="12Rnd_mas_45acpsd_Mag";
				count=60;
			};
			class _xx_10Rnd_mas_45acp_Mag
			{
				magazine="10Rnd_mas_45acp_Mag";
				count=60;
			};
			class _xx_8Rnd_mas_45acp_Mag
			{
				magazine="8Rnd_mas_45acp_Mag";
				count=60;
			};
			class _xx_7Rnd_mas_12Gauge_Slug
			{
				magazine="7Rnd_mas_12Gauge_Slug";
				count=30;
			};
			class _xx_7Rnd_mas_12Gauge_Pellets
			{
				magazine="7Rnd_mas_12Gauge_Pellets";
				count=30;
			};
			class _xx_20Rnd_556x45_UW_mag
			{
				magazine="20Rnd_556x45_UW_mag";
				count=60;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=40;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=16;
			};
			class _xx_mas_NLAW
			{
				magazine="mas_NLAW";
				count=16;
			};
			class _xx_mas_NLAW_HE
			{
				magazine="mas_NLAW_HE";
				count=16;
			};
			class _xx_mas_LAW
			{
				magazine="mas_LAW";
				count=16;
			};
			class _xx_mas_M136
			{
				magazine="mas_M136";
				count=16;
			};
			class _xx_mas_M136_HE
			{
				magazine="mas_M136_HE";
				count=16;
			};
			class _xx_mas_MAAWS
			{
				magazine="mas_MAAWS";
				count=16;
			};
			class _xx_mas_MAAWS_HE
			{
				magazine="mas_MAAWS_HE";
				count=16;
			};
			class _xx_mas_SMAW
			{
				magazine="mas_SMAW";
				count=16;
			};
			class _xx_mas_SMAW_HE
			{
				magazine="mas_SMAW_HE";
				count=16;
			};
			class _xx_mas_SMAW_NE
			{
				magazine="mas_SMAW_NE";
				count=16;
			};
			class _xx_mas_TitanS
			{
				magazine="mas_TitanS";
				count=16;
			};
			class _xx_mas_TitanS_HE
			{
				magazine="mas_TitanS_HE";
				count=16;
			};
			class _xx_mas_Stinger
			{
				magazine="mas_Stinger";
				count=16;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=8;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=20;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=20;
			};
			class _xx_B_IR_Grenade
			{
				magazine="B_IR_Grenade";
				count=20;
			};
			class _xx_I_IR_Grenade
			{
				magazine="I_IR_Grenade";
				count=20;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=5;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=5;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=5;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=5;
			};
			class _xx_SmokeShellPurple
			{
				magazine="SmokeShellPurple";
				count=5;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=5;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=5;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine="ATMine_Range_Mag";
				count=5;
			};
			class _xx_APERSMine_Range_Mag
			{
				magazine="APERSMine_Range_Mag";
				count=5;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=5;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=10;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine="APERSTripMine_Wire_Mag";
				count=5;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=5;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=5;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=5;
			};
			class _xx_Chemlight_green
			{
				magazine="Chemlight_green";
				count=10;
			};
			class _xx_Chemlight_red
			{
				magazine="Chemlight_red";
				count=10;
			};
			class _xx_Chemlight_yellow
			{
				magazine="Chemlight_yellow";
				count=10;
			};
			class _xx_Chemlight_blue
			{
				magazine="Chemlight_blue";
				count=10;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=12;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_mas_mk16
			{
				weapon="arifle_mas_mk16";
				count=2;
			};
			class _xx_arifle_mas_mk16_h
			{
				weapon="arifle_mas_mk16_h";
				count=1;
			};
			class _xx_arifle_mas_mk16_e
			{
				weapon="arifle_mas_mk16_e";
				count=1;
			};
			class _xx_arifle_mas_mk16_sd
			{
				weapon="arifle_mas_mk16_sd";
				count=1;
			};
			class _xx_arifle_mas_mk16_gl
			{
				weapon="arifle_mas_mk16_gl";
				count=2;
			};
			class _xx_arifle_mas_mk16_gl_h
			{
				weapon="arifle_mas_mk16_gl_h";
				count=1;
			};
			class _xx_arifle_mas_mk16_gl_e
			{
				weapon="arifle_mas_mk16_gl_e";
				count=1;
			};
			class _xx_arifle_mas_mk16_gl_sd
			{
				weapon="arifle_mas_mk16_gl_sd";
				count=1;
			};
			class _xx_arifle_mas_mk16_l
			{
				weapon="arifle_mas_mk16_l";
				count=2;
			};
			class _xx_arifle_mas_mk16_l_h
			{
				weapon="arifle_mas_mk16_l_h";
				count=1;
			};
			class _xx_arifle_mas_mk16_l_e
			{
				weapon="arifle_mas_mk16_l_e";
				count=1;
			};
			class _xx_arifle_mas_mk16_l_sd
			{
				weapon="arifle_mas_mk16_l_sd";
				count=1;
			};
			class _xx_arifle_mas_mk16_l_gl
			{
				weapon="arifle_mas_mk16_l_gl";
				count=2;
			};
			class _xx_arifle_mas_mk16_l_gl_h
			{
				weapon="arifle_mas_mk16_l_gl_h";
				count=1;
			};
			class _xx_arifle_mas_mk16_l_gl_e
			{
				weapon="arifle_mas_mk16_l_gl_e";
				count=1;
			};
			class _xx_arifle_mas_mk16_l_gl_sd
			{
				weapon="arifle_mas_mk16_l_gl_sd";
				count=1;
			};
			class _xx_arifle_mas_mk17
			{
				weapon="arifle_mas_mk17";
				count=2;
			};
			class _xx_arifle_mas_mk17_h
			{
				weapon="arifle_mas_mk17_h";
				count=1;
			};
			class _xx_arifle_mas_mk17_e
			{
				weapon="arifle_mas_mk17_e";
				count=1;
			};
			class _xx_arifle_mas_mk17_sd
			{
				weapon="arifle_mas_mk17_sd";
				count=1;
			};
			class _xx_arifle_mas_mk17_gl
			{
				weapon="arifle_mas_mk17_gl";
				count=2;
			};
			class _xx_arifle_mas_mk17_gl_h
			{
				weapon="arifle_mas_mk17_gl_h";
				count=1;
			};
			class _xx_arifle_mas_mk17_gl_e
			{
				weapon="arifle_mas_mk17_gl_e";
				count=1;
			};
			class _xx_arifle_mas_mk17_gl_sd
			{
				weapon="arifle_mas_mk17_gl_sd";
				count=1;
			};
			class _xx_arifle_mas_arx
			{
				weapon="arifle_mas_arx";
				count=2;
			};
			class _xx_arifle_mas_arx_h
			{
				weapon="arifle_mas_arx_h";
				count=1;
			};
			class _xx_arifle_mas_arx_e
			{
				weapon="arifle_mas_arx_e";
				count=1;
			};
			class _xx_arifle_mas_arx_a
			{
				weapon="arifle_mas_arx_a";
				count=1;
			};
			class _xx_arifle_mas_arx_sd
			{
				weapon="arifle_mas_arx_sd";
				count=1;
			};
			class _xx_arifle_mas_arx_gl
			{
				weapon="arifle_mas_arx_gl";
				count=2;
			};
			class _xx_arifle_mas_arx_gl_h
			{
				weapon="arifle_mas_arx_gl_h";
				count=1;
			};
			class _xx_arifle_mas_arx_gl_e
			{
				weapon="arifle_mas_arx_gl_e";
				count=1;
			};
			class _xx_arifle_mas_arx_gl_a
			{
				weapon="arifle_mas_arx_gl_a";
				count=1;
			};
			class _xx_arifle_mas_arx_gl_sd
			{
				weapon="arifle_mas_arx_gl_sd";
				count=1;
			};
			class _xx_arifle_mas_arx_l
			{
				weapon="arifle_mas_arx_l";
				count=2;
			};
			class _xx_arifle_mas_arx_l_h
			{
				weapon="arifle_mas_arx_l_h";
				count=1;
			};
			class _xx_arifle_mas_arx_l_e
			{
				weapon="arifle_mas_arx_l_e";
				count=1;
			};
			class _xx_arifle_mas_arx_l_a
			{
				weapon="arifle_mas_arx_l_a";
				count=1;
			};
			class _xx_arifle_mas_arx_l_sd
			{
				weapon="arifle_mas_arx_l_sd";
				count=1;
			};
			class _xx_arifle_mas_arx_l_gl
			{
				weapon="arifle_mas_arx_l_gl";
				count=2;
			};
			class _xx_arifle_mas_arx_l_gl_h
			{
				weapon="arifle_mas_arx_l_gl_h";
				count=1;
			};
			class _xx_arifle_mas_arx_l_gl_e
			{
				weapon="arifle_mas_arx_l_gl_e";
				count=1;
			};
			class _xx_arifle_mas_arx_l_gl_a
			{
				weapon="arifle_mas_arx_l_gl_a";
				count=1;
			};
			class _xx_arifle_mas_arx_l_gl_sd
			{
				weapon="arifle_mas_arx_l_gl_sd";
				count=1;
			};
			class _xx_srifle_mas_mk17s
			{
				weapon="srifle_mas_mk17s";
				count=2;
			};
			class _xx_srifle_mas_mk17s_h
			{
				weapon="srifle_mas_mk17s_h";
				count=1;
			};
			class _xx_srifle_mas_mk17s_sd
			{
				weapon="srifle_mas_mk17s_sd";
				count=1;
			};
			class _xx_srifle_mas_m110
			{
				weapon="srifle_mas_m110";
				count=2;
			};
			class _xx_srifle_mas_m110_h
			{
				weapon="srifle_mas_m110_h";
				count=1;
			};
			class _xx_srifle_mas_m110_sd
			{
				weapon="srifle_mas_m110_sd";
				count=1;
			};
			class _xx_hgun_mas_mp7p_F
			{
				weapon="hgun_mas_mp7p_F";
				count=4;
			};
			class _xx_hgun_mas_mp7p_F_sd
			{
				weapon="hgun_mas_mp7p_F_sd";
				count=4;
			};
			class _xx_hgun_mas_uzi_F
			{
				weapon="hgun_mas_uzi_F";
				count=4;
			};
			class _xx_hgun_mas_uzi_F_sd
			{
				weapon="hgun_mas_uzi_F_sd";
				count=4;
			};
			class _xx_hgun_mas_usp_F
			{
				weapon="hgun_mas_usp_F";
				count=4;
			};
			class _xx_hgun_mas_usp_l_F
			{
				weapon="hgun_mas_usp_l_F";
				count=4;
			};
			class _xx_hgun_mas_m23_F
			{
				weapon="hgun_mas_m23_F";
				count=4;
			};
			class _xx_hgun_mas_m23_l_F
			{
				weapon="hgun_mas_m23_l_F";
				count=4;
			};
			class _xx_hgun_mas_m9_F
			{
				weapon="hgun_mas_m9_F";
				count=4;
			};
			class _xx_hgun_mas_bhp_F
			{
				weapon="hgun_mas_bhp_F";
				count=4;
			};
			class _xx_hgun_mas_p226_F
			{
				weapon="hgun_mas_p226_F";
				count=4;
			};
			class _xx_hgun_mas_p226_F_sd
			{
				weapon="hgun_mas_p226_F_sd";
				count=4;
			};
			class _xx_hgun_mas_acp_F
			{
				weapon="hgun_mas_acp_F";
				count=4;
			};
			class _xx_hgun_mas_glock_F
			{
				weapon="hgun_mas_glock_F";
				count=4;
			};
			class _xx_hgun_mas_glocksf_F
			{
				weapon="hgun_mas_glocksf_F";
				count=4;
			};
			class _xx_hgun_P07_F
			{
				weapon="hgun_P07_F";
				count=4;
			};
			class _xx_hgun_P07_snds_F
			{
				weapon="hgun_P07_snds_F";
				count=4;
			};
			class _xx_launch_NLAW_F
			{
				weapon="launch_NLAW_F";
				count=4;
			};
			class _xx_mas_launch_NLAW_F
			{
				weapon="mas_launch_NLAW_F";
				count=4;
			};
			class _xx_mas_launch_LAW_F
			{
				weapon="mas_launch_LAW_F";
				count=4;
			};
			class _xx_mas_launch_M136_F
			{
				weapon="mas_launch_M136_F";
				count=4;
			};
			class _xx_mas_launch_MAAWS_F
			{
				weapon="mas_launch_MAAWS_F";
				count=4;
			};
			class _xx_mas_launch_SMAW_F
			{
				weapon="mas_launch_SMAW_F";
				count=4;
			};
			class _xx_mas_launch_TitanS_F
			{
				weapon="mas_launch_TitanS_F";
				count=4;
			};
			class _xx_mas_launch_stinger_F
			{
				weapon="mas_launch_stinger_F";
				count=4;
			};
			class _xx_launch_Titan_short_F
			{
				weapon="launch_Titan_short_F";
				count=4;
			};
			class _xx_launch_Titan_F
			{
				weapon="launch_Titan_F";
				count=4;
			};
			class _xx_arifle_SDAR_F
			{
				weapon="arifle_SDAR_F";
				count=10;
			};
			class _xx_arifle_mas_mp5sd_ds
			{
				weapon="arifle_mas_mp5sd_ds";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=5;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=5;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=20;
			};
			class _xx_acc_flashlight
			{
				name="acc_flashlight";
				count=10;
			};
			class _xx_acc_pointer_IR
			{
				name="acc_pointer_IR";
				count=20;
			};
			class _xx_acc_mas_flash_gun
			{
				name="acc_mas_flash_gun";
				count=20;
			};
			class _xx_acc_mas_pointer_gun_IR
			{
				name="acc_mas_pointer_gun_IR";
				count=20;
			};
			class _xx_acc_mas_pointer_IR
			{
				name="acc_mas_pointer_IR";
				count=20;
			};
			class _xx_acc_mas_pointer_IR_top
			{
				name="acc_mas_pointer_IR_top";
				count=20;
			};
			class _xx_acc_mas_pointer_IR_b
			{
				name="acc_mas_pointer_IR_b";
				count=20;
			};
			class _xx_acc_mas_pointer_IR_top_b
			{
				name="acc_mas_pointer_IR_top_b";
				count=20;
			};
			class _xx_acc_mas_pointer_IR2
			{
				name="acc_mas_pointer_IR2";
				count=20;
			};
			class _xx_acc_mas_pointer_IR2_top
			{
				name="acc_mas_pointer_IR2_top";
				count=20;
			};
			class _xx_acc_mas_pointer_IR2c
			{
				name="acc_mas_pointer_IR2c";
				count=20;
			};
			class _xx_acc_mas_pointer_IR2c_top
			{
				name="acc_mas_pointer_IR2c_top";
				count=20;
			};
			class _xx_muzzle_mas_snds_M
			{
				name="muzzle_mas_snds_M";
				count=10;
			};
			class _xx_muzzle_mas_snds_Mc
			{
				name="muzzle_mas_snds_Mc";
				count=10;
			};
			class _xx_muzzle_mas_snds_SM
			{
				name="muzzle_mas_snds_SM";
				count=10;
			};
			class _xx_muzzle_mas_snds_SMc
			{
				name="muzzle_mas_snds_SMc";
				count=10;
			};
			class _xx_muzzle_mas_snds_SH
			{
				name="muzzle_mas_snds_SH";
				count=10;
			};
			class _xx_muzzle_mas_snds_SHc
			{
				name="muzzle_mas_snds_SHc";
				count=10;
			};
			class _xx_muzzle_mas_snds_SV
			{
				name="muzzle_mas_snds_SV";
				count=10;
			};
			class _xx_muzzle_mas_snds_SVc
			{
				name="muzzle_mas_snds_SVc";
				count=10;
			};
			class _xx_muzzle_mas_snds_C
			{
				name="muzzle_mas_snds_C";
				count=20;
			};
			class _xx_muzzle_mas_snds_L
			{
				name="muzzle_mas_snds_L";
				count=20;
			};
			class _xx_muzzle_snds_B
			{
				name="muzzle_snds_B";
				count=10;
			};
			class _xx_muzzle_snds_H
			{
				name="muzzle_snds_H";
				count=10;
			};
			class _xx_muzzle_snds_M
			{
				name="muzzle_snds_M";
				count=10;
			};
			class _xx_muzzle_snds_L
			{
				name="muzzle_snds_L";
				count=10;
			};
			class _xx_muzzle_snds_H_MG
			{
				name="muzzle_snds_H_MG";
				count=10;
			};
			class _xx_optic_Hamr
			{
				name="optic_Hamr";
				count=10;
			};
			class _xx_optic_mas_Hamr_camo
			{
				name="optic_mas_Hamr_camo";
				count=10;
			};
			class _xx_optic_Arco
			{
				name="optic_Arco";
				count=10;
			};
			class _xx_optic_mas_Arco_blk
			{
				name="optic_mas_Arco_blk";
				count=10;
			};
			class _xx_optic_mas_Arco_camo
			{
				name="optic_mas_Arco_camo";
				count=10;
			};
			class _xx_optic_MRCO
			{
				name="optic_MRCO";
				count=10;
			};
			class _xx_optic_mas_MRCO_camo
			{
				name="optic_mas_MRCO_camo";
				count=10;
			};
			class _xx_optic_Holosight
			{
				name="optic_Holosight";
				count=10;
			};
			class _xx_optic_mas_Holosight_blk
			{
				name="optic_mas_Holosight_blk";
				count=10;
			};
			class _xx_optic_mas_Holosight_camo
			{
				name="optic_mas_Holosight_camo";
				count=10;
			};
			class _xx_optic_Aco
			{
				name="optic_Aco";
				count=10;
			};
			class _xx_optic_mas_Aco_camo
			{
				name="optic_mas_Aco_camo";
				count=10;
			};
			class _xx_optic_Aco_grn
			{
				name="optic_Aco_grn";
				count=10;
			};
			class _xx_optic_mas_ACO_grn_camo
			{
				name="optic_mas_ACO_grn_camo";
				count=10;
			};
			class _xx_optic_mas_aim
			{
				name="optic_mas_aim";
				count=10;
			};
			class _xx_optic_mas_aim_c
			{
				name="optic_mas_aim_c";
				count=10;
			};
			class _xx_optic_mas_acog
			{
				name="optic_mas_acog";
				count=10;
			};
			class _xx_optic_mas_acog_c
			{
				name="optic_mas_acog_c";
				count=10;
			};
			class _xx_optic_mas_acog_eo
			{
				name="optic_mas_acog_eo";
				count=10;
			};
			class _xx_optic_mas_acog_eo_c
			{
				name="optic_mas_acog_eo_c";
				count=10;
			};
			class _xx_optic_mas_acog_rd
			{
				name="optic_mas_acog_rd";
				count=10;
			};
			class _xx_optic_mas_acog_rd_c
			{
				name="optic_mas_acog_rd_c";
				count=10;
			};
			class _xx_optic_mas_zeiss
			{
				name="optic_mas_zeiss";
				count=10;
			};
			class _xx_optic_mas_zeiss_c
			{
				name="optic_mas_zeiss_c";
				count=10;
			};
			class _xx_optic_mas_zeiss_eo
			{
				name="optic_mas_zeiss_eo";
				count=10;
			};
			class _xx_optic_mas_zeiss_eo_c
			{
				name="optic_mas_zeiss_eo_c";
				count=10;
			};
			class _xx_optic_mas_DMS
			{
				name="optic_mas_DMS";
				count=10;
			};
			class _xx_optic_mas_DMS_c
			{
				name="optic_mas_DMS_c";
				count=10;
			};
			class _xx_optic_DMS
			{
				name="optic_DMS";
				count=10;
			};
			class _xx_optic_SOS
			{
				name="optic_SOS";
				count=10;
			};
			class _xx_optic_mas_LRPS
			{
				name="optic_mas_LRPS";
				count=10;
			};
			class _xx_optic_LRPS
			{
				name="optic_LRPS";
				count=10;
			};
			class _xx_optic_NVS
			{
				name="optic_NVS";
				count=10;
			};
			class _xx_optic_Nightstalker
			{
				name="optic_Nightstalker";
				count=10;
			};
			class _xx_optic_tws
			{
				name="optic_tws";
				count=10;
			};
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=10;
			};
			class _xx_optic_mas_term
			{
				name="optic_mas_term";
				count=10;
			};
			class _xx_optic_Holosight_smg
			{
				name="optic_Holosight_smg";
				count=10;
			};
			class _xx_optic_Aco_smg
			{
				name="optic_Aco_smg";
				count=10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name="optic_ACO_grn_smg";
				count=10;
			};
			class _xx_optic_MRD
			{
				name="optic_MRD";
				count=10;
			};
			class _xx_optic_mas_MRD
			{
				name="optic_mas_MRD";
				count=10;
			};
			class _xx_optic_Yorris
			{
				name="optic_Yorris";
				count=10;
			};
			class _xx_bipod_01_F_blk
			{
				name="bipod_01_F_blk";
				count=10;
			};
			class _xx_bipod_03_F_blk
			{
				name="bipod_03_F_blk";
				count=10;
			};
			class _xx_bipod_01_F_mtp
			{
				name="bipod_01_F_mtp";
				count=10;
			};
			class _xx_bipod_02_F_tan
			{
				name="bipod_02_F_tan";
				count=10;
			};
			class _xx_Rangefinder
			{
				name="Rangefinder";
				count=10;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=10;
			};
			class _xx_LaserDesignator
			{
				name="LaserDesignator";
				count=4;
			};
			class _xx_Rangefinder_mas_h
			{
				name="Rangefinder_mas_h";
				count=4;
			};
			class _xx_Laserdesignator_mas_h
			{
				name="Laserdesignator_mas_h";
				count=4;
			};
			class _xx_NVGoggles
			{
				name="NVGoggles";
				count=10;
			};
			class _xx_NVGoggles_mas_h
			{
				name="NVGoggles_mas_h";
				count=10;
			};
			class _xx_NVGoggles_mas_hr
			{
				name="NVGoggles_mas_hr";
				count=10;
			};
			class _xx_NVGoggles_mas_hv
			{
				name="NVGoggles_mas_hv";
				count=10;
			};
			class _xx_NVGoggles_mas_h18
			{
				name="NVGoggles_mas_h18";
				count=10;
			};
			class _xx_NVGoggles_mas_hr18
			{
				name="NVGoggles_mas_hr18";
				count=10;
			};
			class _xx_NVGoggles_mas_hv18
			{
				name="NVGoggles_mas_hv18";
				count=10;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=20;
			};
			class _xx_B_mas_Kitbag_rng
			{
				backpack="B_mas_Kitbag_rng";
				count=10;
			};
			class _xx_B_mas_AssaultPack_rng
			{
				backpack="B_mas_AssaultPack_rng";
				count=10;
			};
			class _xx_B_HMG_01_weapon_F
			{
				backpack="B_HMG_01_weapon_F";
				count=4;
			};
			class _xx_B_GMG_01_weapon_F
			{
				backpack="B_GMG_01_weapon_F";
				count=4;
			};
			class _xx_B_Mortar_01_weapon_F
			{
				backpack="B_Mortar_01_weapon_F";
				count=4;
			};
			class _xx_B_HMG_01_support_F
			{
				backpack="B_HMG_01_support_F";
				count=8;
			};
			class _xx_B_Mortar_01_support_F
			{
				backpack="B_Mortar_01_support_F";
				count=4;
			};
		};
	};
};
class cfgMods
{
	author="massi";
	timepacked="1578824335";
};
