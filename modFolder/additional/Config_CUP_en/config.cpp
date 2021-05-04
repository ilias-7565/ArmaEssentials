class cfgPatches {
	class Config_CUP_en {
		name = "Weapon config overwrite en";
		author = "ilias";
		url = "https://github.com/ilias-7565/ArmaEssentials";

		requiredVersion = 1.60;
		requiredAddons[] = {
			"A3_Functions_F"
			,"A3_Data_F"
			,"A3_Data_exp_F"
			,"A3_Weapons_F"
			,"A3_Weapons_exp_F"
			,"cba_jr"
			,"CUP_Weapons_HK416"
		};
		units[] = {};
		weapons[] = {
			"CUP_arifle_HK417_20"
			,"CUP_arifle_HK417_20_Wood"
			,"CUP_arifle_HK417_20_Desert"
			,"CUP_arifle_HK417_12"
			,"CUP_arifle_HK417_12_Wood"
			,"CUP_arifle_HK417_12_Desert"
			,"CUP_arifle_HK417_12_M203"
			,"CUP_arifle_HK417_12_M203_Wood"
			,"CUP_arifle_HK417_12_M203_Desert"
		};
	};
};

class CUP_PicatinnyUnderMount;
class CowsSlot;
class PointerSlot;
class CfgWeapons {
	class CUP_arifle_HK417_Base;
	class CUP_arifle_HK417_20: CUP_arifle_HK417_Base {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 20in 7.62";
		model="\CUP\Weapons\CUP_Weapons_HK416\CUP_hk417.p3d";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		ACE_barrelTwist=279.39999;
		ACE_barrelLength=508;
		AGM_Bipod=1;
		ace_railHeightAboveBore=4.5999999;
		initSpeed=789;
		mass = 118.5;		//1 = 0.04kg ("ACE 3")
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_HK416\data\anims\AR_HK417.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tigg_rails_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.55882353,0.33000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.31176472,0.38};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.10588235,0.38};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
		magazines[]=
		{
			"20Rnd_762x51_Mag"
			,"ace_20Rnd_762x51_mag_tracer"
			,"ace_20Rnd_762x51_mag_tracer_dim"
			,"ace_20Rnd_762x51_m993_ap_mag"
			,"ace_20Rnd_762x51_mag_sd"
			,"CUP_20Rnd_762x51_HK417_Camo_Wood",
			"CUP_20Rnd_762x51_HK417_Camo_Desert",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_TE1_Red_Tracer_762x51_HK417",
			"CUP_20Rnd_TE1_Green_Tracer_762x51_HK417",
			"CUP_20Rnd_TE1_Yellow_Tracer_762x51_HK417"
			,"20Rnd_mas_762x51_Stanag"
			,"20Rnd_mas_762x51sd_Stanag"
			,"20Rnd_mas_762x51_T_Stanag"
		};
	};
	class CUP_arifle_HK417_20_Wood: CUP_arifle_HK417_20 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 20in 7.62 (Woodland)";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_wood_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_wood_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tigg_rails_olive_co.paa"
		};
	};
	class CUP_arifle_HK417_20_Desert: CUP_arifle_HK417_20 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 20in 7.62 (Desert)";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_desert_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_desert_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tigg_rails_coyote_co.paa"
		};
	};
	class CUP_arifle_HK417_12: CUP_arifle_HK417_20 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 13in 7.62";
		model="\CUP\Weapons\CUP_Weapons_HK416\CUP_hk417_cqb.p3d";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		ACE_barrelTwist=279.39999;
		ACE_barrelLength=304.79999;
		ace_railHeightAboveBore=4.6999998;
		initSpeed=709;
		mass = 105.5;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_HK416\data\anims\AR_HK417_VFG2.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_black_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: CUP_PicatinnyUnderMount
			{
				iconPosition[]={0.27000001,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinPoint="Top";
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.55882353,0.33000001};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinPoint="Bottom";
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.31176472,0.34999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinPoint="Center";
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.10588235,0.37};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinPoint="Right";
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};
	class CUP_arifle_HK417_12_Wood: CUP_arifle_HK417_12 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 13in 7.62 (Woodland)";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_wood_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_wood_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_olive_co.paa"
		};
	};
	class CUP_arifle_HK417_12_Desert: CUP_arifle_HK417_12 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_desert_x_ca.paa";
		displayName="HK417A2 13in 7.62 (Desert)";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_desert_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_coyote_co.paa"
		};
	};
	class CUP_arifle_HK417_12_M203: CUP_arifle_HK417_12 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 13in M203 7.62";
		descriptionShort="$STR_CUP_dss_hk417_gl";
		model="\CUP\Weapons\CUP_Weapons_HK416\CUP_hk417_cqb_m203.p3d";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_m203_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		mass = 130.5;
		muzzles[]=
		{
			"this",
			"M203"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_HK416\data\anims\AR_HK417_M203.rtm"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo_GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_black_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\m203_co.paa"
		};
	};
	class CUP_arifle_HK417_12_M203_Wood: CUP_arifle_HK417_12_M203 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 13in M203 7.62 (Woodland)";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_m203_wood_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo_GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_wood_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_olive_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\m203_camo_wood_co.paa"
		};
	};
	class CUP_arifle_HK417_12_M203_Desert: CUP_arifle_HK417_12_M203 {
		author="$STR_CUP_AUTHOR_STRING";
		scope=2;
		displayName="HK417A2 13in M203 7.62 (Desert)";
		picture="\CUP\Weapons\CUP_Weapons_HK416\data\ui\gear_hk417_cqb_m203_desert_x_ca.paa";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo_GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\CUP\Weapons\CUP_Weapons_HK416\data\new_hk417_camo_desert_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\tacticool_coyote_co.paa",
			"\CUP\Weapons\CUP_Weapons_HK416\data\m203_camo_desert_co.paa"
		};
	};
};