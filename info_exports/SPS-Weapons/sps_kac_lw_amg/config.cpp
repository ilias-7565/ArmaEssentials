class CfgPatches
{
	class sps_weapons_kac_lwamg
	{
		addonRootClass="A3_Weapons_F";
		author="SPS Team";
		authors[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-KAC-LW-AMG";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_jr",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"A3_Weapons_F_Acc",
			"ace_smallarms",
			"ace_ballistics",
			"ace_overheating",
			"sps_weapons_kac_lamg",
			"SPS_weapons_hk417"
		};
		requiredVersion=1.78;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"SPS_KAC_LWAMG_Tan_F",
			"SPS_KAC_LWAMG_Black_F"
		};
		magazines[]=
		{
			"SPS_KAC_LWAMG_100rnd_Box",
			"SPS_KAC_LWAMG_100rnd_Box_T",
			"SPS_KAC_LWAMG_100rnd_Box_M",
			"SPS_KAC_LWAMG_100rnd_Box_M80A1",
			"SPS_KAC_LWAMG_100rnd_Box_M62A1",
			"SPS_KAC_LWAMG_100rnd_Box_M80A1M62A1",
			"SPS_KAC_LWAMG_100rnd_Box_IRDIM",
			"ACE_LWAMG_SpareBarrel"
		};
	};
};
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_762;
class asdg_UnderSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class UnderBarrelSlot;
class CfgMagazineWells
{
	class LWAMG_762x51
	{
		SPS_Magazines[]=
		{
			"SPS_KAC_LWAMG_100rnd_Box",
			"SPS_KAC_LWAMG_100rnd_Box_T",
			"SPS_KAC_LWAMG_100rnd_Box_M",
			"SPS_KAC_LWAMG_100rnd_Box_M80A1",
			"SPS_KAC_LWAMG_100rnd_Box_M62A1",
			"SPS_KAC_LWAMG_100rnd_Box_M80A1M62A1",
			"SPS_KAC_LWAMG_100rnd_Box_IRDIM"
		};
	};
};
class CfgRecoils
{
	class Default;
	class recoil_default;
	class recoil_lw_amg: recoil_default
	{
		kickBack[]={0.027000001,0.055};
		muzzleInner[]={0,0,0.1,0.1};
		muzzleOuter[]={0.12,0.80000001,0.15000001,0.33500001};
		permanent="0.1*0.4";
		temporary=0.0099999998;
	};
	class recoil_lw_amg_prone: recoil_default
	{
		kickBack[]={0.022,0.045000002};
		muzzleInner[]={0,0,0.1,0.1};
		muzzleOuter[]={0.11,0.72500002,0.15000001,0.33500001};
		permanent="0.1*0.4";
		temporary=0.0085000005;
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class GunParticles;
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
		class manual;
		class Burst;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		class ACE_Burst_far;
		class GunParticles: GunParticles
		{
			class FirstEffect;
			class AmmoBeltEject;
		};
	};
	class SPS_KAC_LWAMG_Tan_F: MMG_01_base_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LWAMG_Tan_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		magazines[]=
		{
			"SPS_KAC_LWAMG_100rnd_Box"
		};
		magazineWell[]=
		{
			"LWAMG_762x51"
		};
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
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
			mass=139;
		};
		ACE_barrelLength=508;
		ACE_barrelTwist=279.39999;
		ACE_clearJamAction="GestureReloadM200";
		ACE_checkTemperatureAction="Gear";
		ACE_overheating_mrbs=15000;
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_Overheating_allowSwapBarrel=1;
		ACE_Overheating_barrelClassname="ACE_LWAMG_SpareBarrel";
		ACE_ironsightbaseangle=0;
		descriptionShort="Light Weight Assault Machine Gun<br />Caliber: 7.62x51 mm";
		magazineReloadSwitchPhase=0.47999999;
		maxZeroing=1000;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0099999998;
		swayDecaySpeed=2;
		allowedSlots[]={};
		displayName="KAC LW-AMG (Tan)";
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		selectionFireAnim="zasleh";
		deployedPivot="bipod";
		dexterity=1.36;
		inertia=0.69;
		model="\x\SPS\Weapons\sps_kac_lw_amg\sps_kac_lwamg.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_kac_lw_amg\Data\RTM\LWAMG_v1_0.rtm"
		};
		hiddenSelections[]=
		{
			"Group1",
			"Group2",
			"Group3",
			"Group4"
		};
		hiddenSelectionsMaterials[]={};
		reloadAction="GestureReloadM200";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Reload_Mk200",
			1,
			1,
			10
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Tan\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Tan\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Tan\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Tan\Group2_low_CO.paa"
		};
		UIpicture="x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_Tan_CA.paa";
		picture="x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_Tan_CA.paa";
		reloadTime=0.1043478;
		recoil="recoil_lw_amg";
		recoilProne="recoil_lw_amg_prone";
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject1";
				positionName="ejectstart";
				directionName="ejectend";
			};
			class FirstEffect
			{
				effectName="RifleAssaultCloud";
				directionName="Konec hlavne";
				positionName="Usti hlavne";
			};
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"ACE_Burst_far"
		};
		class manual: manual
		{
			autoFire=1;
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=1;
			recoilProne="recoil_car_lsw";
		};
		class close: close
		{
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
		class short: short
		{
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
		class medium: medium
		{
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
		class far_optic1: far_optic1
		{
			burst=4;
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
		class far_optic2: far_optic2
		{
			burst=3;
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
		class ACE_Burst_far: ACE_Burst_far
		{
			burst="2 + round random 5";
			dispersion=0.00068200001;
			reloadTime=0.1043478;
			aiDispersionCoefX=1.2;
			aiDispersionCoefY=1.3;
			showToPlayer=0;
		};
	};
	class SPS_KAC_LWAMG_Black_F: SPS_KAC_LWAMG_Tan_F
	{
		author="SPS Team";
		baseWeapon="SPS_KAC_LWAMG_Black_F";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="KAC LW-AMG (Black)";
		hiddenSelections[]=
		{
			"Group1",
			"Group2",
			"Group3",
			"Group4"
		};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Black\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Black\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lw_amg\Data\Black\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_kac_lamg\Data\Black\Group2_low_CO.paa"
		};
		UIpicture="x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_Black_CA.paa";
		picture="x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_Black_CA.paa";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="bipod_02_F_blk";
				slot="UnderBarrelSlot";
			};
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 150Rnd_762x51_Box;
	class SPS_KAC_LWAMG_100rnd_Box: 150Rnd_762x51_Box
	{
		ACE_isBelt=1;
		ammo="B_762x51_Tracer_Red";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M80 Box";
		displaynameshort="M80";
		tracersEvery=0;
		mass=33.299999;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_MagBox_CA.paa";
		UiPicture="\x\SPS\Weapons\sps_kac_lw_amg\UI\LW_AMG_MagBox_CA.paa";
	};
	class SPS_KAC_LWAMG_100rnd_Box_T: SPS_KAC_LWAMG_100rnd_Box
	{
		ammo="B_762x51_Tracer_Red";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />Tracer<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M62 Box";
		displaynameshort="M62";
		tracersEvery=1;
	};
	class SPS_KAC_LWAMG_100rnd_Box_IRDIM: SPS_KAC_LWAMG_100rnd_Box_T
	{
		ammo="ACE_B_762x51_Tracer_Dim";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />IR Dim Tracer<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M276 Box";
		displaynameshort="M276 IRDIM";
		tracersEvery=1;
	};
	class SPS_KAC_LWAMG_100rnd_Box_M: SPS_KAC_LWAMG_100rnd_Box
	{
		ammo="B_762x51_Tracer_Red";
		author="SPS Team";
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />Mixed<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M80/M62 Box";
		displaynameshort="M80/M62";
		tracersEvery=5;
	};
	class SPS_KAC_LWAMG_100rnd_Box_M80A1: SPS_KAC_LWAMG_100rnd_Box
	{
		ammo="B_SPS_M80A1_EPR";
		author="SPS Team";
		initSpeed=869;
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />EPR<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M80A1 Box";
		displaynameshort="M80A1";
		tracersEvery=0;
	};
	class SPS_KAC_LWAMG_100rnd_Box_M62A1: SPS_KAC_LWAMG_100rnd_Box
	{
		ammo="B_SPS_M80A1_EPR";
		author="SPS Team";
		initSpeed=869;
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />EPR Tracer<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M62A1 Box";
		displaynameshort="M62A1";
		tracersEvery=1;
	};
	class SPS_KAC_LWAMG_100rnd_Box_M80A1M62A1: SPS_KAC_LWAMG_100rnd_Box
	{
		ammo="B_SPS_M80A1_EPR";
		author="SPS Team";
		initSpeed=869;
		scope=2;
		scopeCurator=2;
		count=100;
		descriptionShort="Caliber: 7.62x51 mm<br />EPR Mixed<br />Rounds: 100<br />Used in: KAC LW-AMG";
		displayName="100Rnd M80A1/M62A1 Box";
		displaynameshort="M80A1/M62A1";
		tracersEvery=1;
	};
	class ACE_SpareBarrel;
	class ACE_LWAMG_SpareBarrel: ACE_SpareBarrel
	{
		scope=2;
		author="SPS Team";
		scopeCurator=2;
		displayName="KAC LW-AMG Spare barrel";
		mass=23.700001;
	};
};
