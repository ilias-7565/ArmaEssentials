class CfgPatches
{
	class SPS_weapons_hk337
	{
		author="SPS Team";
		authors[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-HK337";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"cba_jr",
			"SPS_Weapons",
			"ace_smallarms",
			"SPS_weapons_hk416",
			"sps_hk_g3_pmag",
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
			"SPS_hk337_afg_black_F",
			"SPS_hk337_vfg_black_F",
			"SPS_hk337_afg_FDE_F",
			"SPS_hk337_vfg_FDE_F",
			"SPS_hk337_afg_RAL8000_F",
			"SPS_hk337_vfg_RAL8000_F"
		};
		ammo[]=
		{
			"sps_b_300_blk_147gr",
			"sps_b_300_blk_124gr",
			"sps_b_300_blk_230gr",
			"sps_b_300_blk_147gr",
			"sps_b_300_blk_124gr",
			"sps_b_300_blk_230gr"
		};
		magazines[]=
		{
			"SPS_HKG3PMAG_30Rnd_300BLK_147_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_147_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_147_S",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_S",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_S"
		};
	};
};
class CfgMagazineWells
{
	class STANAG_300Blackout
	{
		SPS_HK_Magazones[]=
		{
			"SPS_HKG3PMAG_30Rnd_300BLK_147_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_B",
			"SPS_HKG3PMAG_30Rnd_300BLK_147_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_T",
			"SPS_HKG3PMAG_30Rnd_300BLK_147_S",
			"SPS_HKG3PMAG_30Rnd_300BLK_124_S",
			"SPS_HKG3PMAG_30Rnd_300BLK_230_S"
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
class asdg_MuzzleSlot_762;
class asdg_UnderSlot;
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
	class SPS_hk337_base_f: arifle_SPAR_01_base_F
	{
		magazines[]=
		{
			"SPS_HKG3PMAG_30Rnd_300BLK_147_B"
		};
		magazineWell[]=
		{
			"STANAG_300Blackout"
		};
		recoil="recoil_MSBS65";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
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
			class UnderBarrelSlot
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
		maxZeroing=1000;
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=2;
		allowedSlots[]={901};
		selectionFireAnim="zasleh";
		class Single: Single
		{
			reloadTime=0.079999998;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.079999998;
		};
	};
	class SPS_hk337_vfg_black_f: SPS_hk337_base_f
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
		ACE_barrelLength=230;
		ACE_barrelTwist=177.8;
		dexterity=1.83;
		displayName="HK337 (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_hk337\Data\RTM\sps_HK337_VFG_V1.rtm"
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
			"x\SPS\Weapons\SPS_hk337\data\Black\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\VerticalGrip_low_CO.paa",
			""
		};
		inertia=0.30000001;
		initSpeed=-0.949;
		model="x\SPS\Weapons\sps_hk337\sps_HK337.p3d";
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_b_ca.paa";
		scope=2;
		scopeCurator=2;
		maxZeroing=800;
		uiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_b_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=64;
		};
	};
	class SPS_hk337_vfg_FDE_f: SPS_hk337_vfg_black_f
	{
		author="SPS Team";
		displayName="HK337 (VFG) FDE";
		scope=2;
		scopeCurator=2;
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
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\FDE\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\FDE\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_fde_ca.paa";
		uiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_fde_ca.paa";
	};
	class SPS_hk337_vfg_RAL8000_f: SPS_hk337_vfg_black_f
	{
		author="SPS Team";
		displayName="HK337 (VFG) RAL8000";
		scope=2;
		scopeCurator=2;
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
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\VerticalGrip_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_ral8000_ca.paa";
		uiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_vfg_ral8000_ca.paa";
	};
	class SPS_hk337_afg_black_f: SPS_hk337_vfg_black_f
	{
		author="SPS Team";
		displayName="HK337 (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_hk337\Data\RTM\sps_HK337_AFG_V1.rtm"
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
			"x\SPS\Weapons\SPS_hk337\data\Black\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\Black\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_b_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_b_ca.paa";
		scope=2;
		scopeCurator=2;
	};
	class SPS_hk337_afg_FDE_f: SPS_hk337_afg_black_f
	{
		author="SPS Team";
		displayName="HK337 (AFG) FDE";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_hk337\Data\RTM\sps_HK337_AFG_V1.rtm"
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
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\FDE\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\FDE\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_fde_ca.paa";
		scope=2;
		scopeCurator=2;
	};
	class SPS_hk337_afg_RAL8000_f: SPS_hk337_afg_black_f
	{
		author="SPS Team";
		displayName="HK337 (AFG) RAL8000";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_hk337\Data\RTM\sps_HK337_AFG_V1.rtm"
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
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\BarrelGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Addons_low_CO.paa",
			"",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk337\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk416\data\RAL8000\Stock_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk337\Data\ui\sps_337_afg_ral8000_ca.paa";
		scope=2;
		scopeCurator=2;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class SPS_HKG3PMAG_30Rnd_556x45_M856A1_B;
	class SPS_HKG3PMAG_30Rnd_300BLK_147_B: SPS_HKG3PMAG_30Rnd_556x45_M856A1_B
	{
		descriptionShort="HK G3 PMAG Mag Black<br />Caliber : .300 AAC Blackout 147gr<br />Rounds : 30";
		displayName=".300Blk 147gr 30Rnd HK G3 PMAG Mag Black";
		displayNameShort=".300 BLK 147";
		lastRoundsTracer=3;
		count=30;
		tracersEvery=0;
		scope=2;
		author="SPS Team";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Black\Mag_low_CO.paa"
		};
		initSpeed=633;
		ammo="sps_b_300_blk_147gr";
		mass=12.45;
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_147_T: SPS_HKG3PMAG_30Rnd_300BLK_147_B
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK G3 PMAG Mag Tan<br />Caliber : .300 AAC Blackout 147gr<br />Rounds : 30";
		displayName=".300Blk 147gr 30Rnd HK G3 PMAG Mag Tan";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\FDE\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\FDE_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_147_S: SPS_HKG3PMAG_30Rnd_300BLK_147_B
	{
		scope=2;
		author="SPS Team";
		descriptionShort="HK G3 PMAG Mag Sand<br />Caliber : .300 AAC Blackout 147gr<br />Rounds : 30";
		displayName=".300Blk 147gr 30Rnd HK G3 PMAG Mag Sand";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Sand\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\Sand_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_124_B: SPS_HKG3PMAG_30Rnd_300BLK_147_B
	{
		descriptionShort="HK G3 PMAG Mag Black<br />Caliber : .300 AAC Blackout 124gr<br />Rounds : 30";
		displayName=".300Blk 124gr 30Rnd HK G3 PMAG Mag Black";
		displayNameShort=".300 BLK 124";
		lastRoundsTracer=3;
		count=30;
		tracersEvery=0;
		scope=2;
		author="SPS Team";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Black\Mag_low_CO.paa"
		};
		initSpeed=660;
		ammo="sps_b_300_blk_124gr";
		mass=10.28;
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_124_T: SPS_HKG3PMAG_30Rnd_300BLK_124_B
	{
		descriptionShort="HK G3 PMAG Mag Tan<br />Caliber : .300 AAC Blackout 124gr<br />Rounds : 30";
		displayName=".300Blk 124gr 30Rnd HK G3 PMAG Mag Tan";
		scope=2;
		author="SPS Team";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\FDE\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\FDE_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_124_S: SPS_HKG3PMAG_30Rnd_300BLK_124_B
	{
		descriptionShort="HK G3 PMAG Mag Sand<br />Caliber : .300 AAC Blackout 124gr<br />Rounds : 30";
		displayName=".300Blk 124gr 30Rnd HK G3 PMAG Mag Sand";
		scope=2;
		author="SPS Team";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Sand\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\Sand_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_230_B: SPS_HKG3PMAG_30Rnd_300BLK_147_B
	{
		descriptionShort="HK G3 PMAG Mag Black<br />Caliber : .300 AAC Blackout 230gr<br />Rounds : 30";
		displayName=".300Blk 230gr 30Rnd HK G3 PMAG Mag Black";
		displayNameShort=".300 BLK 230";
		lastRoundsTracer=3;
		count=30;
		tracersEvery=0;
		scope=2;
		author="SPS Team";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Black\Mag_low_CO.paa"
		};
		initSpeed=660;
		ammo="sps_b_300_blk_230gr";
		mass=13.14;
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_230_T: SPS_HKG3PMAG_30Rnd_300BLK_230_B
	{
		descriptionShort="HK G3 PMAG Mag Tan<br />Caliber : .300 AAC Blackout 230gr<br />Rounds : 30";
		displayName=".300Blk 230gr 30Rnd HK G3 PMAG Mag Tan";
		scope=2;
		author="SPS Team";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\FDE\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\FDE_CA.paa";
	};
	class SPS_HKG3PMAG_30Rnd_300BLK_230_S: SPS_HKG3PMAG_30Rnd_300BLK_230_B
	{
		descriptionShort="HK G3 PMAG Mag Sand<br />Caliber : .300 AAC Blackout 230gr<br />Rounds : 30";
		displayName=".300Blk 230gr 30Rnd HK G3 PMAG Mag Sand";
		scope=2;
		author="SPS Team";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_hk_g3_pmag\Data\Sand\Mag_low_CO.paa"
		};
		picture="\x\SPS\Weapons\sps_hk_g3_pmag\UI\Sand_CA.paa";
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_762x51_Ball;
	class sps_b_300_blk_147gr: B_762x51_Ball
	{
		audibleFire=35;
		airFriction=-0.00103711;
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.15957;
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=9.5254402;
		ACE_ammoTempMuzzleVelocityShifts[]={-18.549999,-16.469999,-14.85,-12.12,-10.98,-8.8000002,-3.6400001,-0.13,4.96,10.17,15.19};
		ACE_ballisticCoefficients[]={0.204};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={601,605,633,645.5,652,653.5};
		ACE_barrelLengths[]={228.60001,254,406.39999,508,609.59998,660.40002};
		caliber=0.74000001;
		hit=12.4;
		typicalSpeed=570;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class sps_b_300_blk_124gr: B_762x51_Ball
	{
		audibleFire=35;
		airFriction=-0.001084;
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.15957;
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=8.0350599;
		ACE_ammoTempMuzzleVelocityShifts[]={-20.549999,-18.469999,-16.85,-14.12,-12.98,-10.8,-5.6399999,-0.52999997,3.96,12.17,18.190001};
		ACE_ballisticCoefficients[]={0.191};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={626.40002,632,660,673.09998,679.79999,681.5};
		ACE_barrelLengths[]={228.60001,254,406.39999,508,609.59998,660.40002};
		caliber=0.74000001;
		hit=11.8;
		typicalSpeed=591;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class sps_b_300_blk_230gr: B_762x51_Ball
	{
		audibleFire=25;
		visibleFire=2.5;
		airFriction=-0.00039999999;
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.15957;
		ACE_caliber=7.823;
		ACE_bulletLength=33.16;
		ACE_bulletMass=14.9037;
		ACE_ammoTempMuzzleVelocityShifts[]={-12.55,-11.47,-10.85,-9.1199999,-8.9799995,-6.8000002,-4.6399999,-0.52999997,3.96,8.1700001,14.19};
		ACE_ballisticCoefficients[]={0.37200001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={312.5,314,323,328.60001,331.89999,332.70001};
		ACE_barrelLengths[]={228.60001,254,406.39999,508,609.59998,660.40002};
		caliber=0.74000001;
		hit=8.3000002;
		typicalSpeed=308;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
