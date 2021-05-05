class CfgFunctions
{
	class sps
	{
		tag="sps";
		file="x\SPS\Weapons\sps_ai_axmc\functions";
		class core
		{
			file="x\SPS\Weapons\sps_ai_axmc\functions";
			class boltAction;
		};
	};
};
class CfgPatches
{
	class SPS_weapons_ai_axmc
	{
		addonRootClass="A3_Weapons_F";
		author[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-AI-AXMC";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Weapons_F_Mark",
			"cba_jr",
			"cba_events",
			"ace_smallarms",
			"A3_Anims_F_Config_Sdr",
			"ace_ballistics",
			"SPS_weapons_hk417"
		};
		requiredVersion=1.6799999;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"SPS_AI_AXMC338_27_PB_F",
			"SPS_AI_AXMC300_26_PB_F",
			"SPS_AI_AXMC308_26_PB_F",
			"SPS_AI_AXMC338_27_B_F",
			"SPS_AI_AXMC300_26_B_F",
			"SPS_AI_AXMC308_26_B_F",
			"SPS_AI_AXMC338_27_G_F",
			"SPS_AI_AXMC300_26_G_F",
			"SPS_AI_AXMC338_27_DE_F",
			"SPS_AI_AXMC300_26_DE_F",
			"SPS_AI_AXMC338_27_ES_F",
			"SPS_AI_AXMC300_26_ES_F",
			"muzzle_snds_SPS_AI_PB_H",
			"muzzle_snds_SPS_AI_B_H",
			"muzzle_snds_SPS_AI_G_H",
			"muzzle_snds_SPS_AI_ES_H",
			"muzzle_snds_SPS_AI_DE_H",
			"SPS_AI_AXMC308_26_G_F",
			"SPS_AI_AXMC308_26_DE_F",
			"SPS_AI_AXMC308_26_ES_F",
			"Zasleh2"
		};
		magazines[]=
		{
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Tracer_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_IR_Mag",
			"SPS_AI_AXMC_762x51mm_M80_Mag",
			"SPS_AI_AXMC_762x51_M993_AP_Mag",
			"SPS_AI_AXMC_762x51_Mk319_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_M118LR_Mag",
			"SPS_AI_AXMC_762x67_Mk248_Mod_0_Mag",
			"SPS_AI_AXMC_762x67_Mk248_Mod_1_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Tracer_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_IR_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_IR_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag",
			"SPS_AI_AXMC_338_300gr_HPBT_Mag",
			"SPS_AI_AXMC_338_API526_Mag",
			"SPS_AI_AXMC_338_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_IR",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_Tracer",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_IR"
		};
		ammo[]=
		{
			"B_SPS_762x51_Ball",
			"B_SPS_762x51_Ball_M118LR",
			"B_SPS_762x51_Ball_Mk316_Mod_0",
			"B_SPS_762x51_Ball_Mk319_Mod_0",
			"B_SPS_762x51_Ball_M993_AP",
			"B_SPS_762x67_Ball_Mk248_Mod_0",
			"B_SPS_762x67_Ball_Mk248_Mod_1",
			"B_SPS_762x67_Berger_Hybrid_OTM",
			"B_SPS_762x67_Berger_Hybrid_OTM_Tracer_Red",
			"B_SPS_762x67_Berger_Hybrid_OTM_IR",
			"B_SPS_338_250gr_Naturalis",
			"B_SPS_338_250gr_Naturalis_Tracer",
			"B_SPS_338_250gr_Naturalis_IR",
			"B_SPS_338_300gr_Scenar",
			"B_SPS_338_300gr_Scenar_Tracer",
			"B_SPS_338_300gr_Scenar_IR",
			"B_SPS_338_300gr_Berger_OTM",
			"B_SPS_338_300gr_Berger_OTM_Tracer",
			"B_SPS_338_300gr_Berger_OTM_IR",
			"B_SPS_762x51_185gr_Berger_JOTM",
			"B_SPS_762x51_185gr_Berger_JOTM_Tracer",
			"B_SPS_762x51_185gr_Berger_JOTM_IR",
			"B_SPS_338_Ball",
			"B_SPS_338_MK",
			"B_SPS_338_ball_API526"
		};
	};
	class SPS_AI_AXMC_Magazines
	{
		units[]={};
		magazines[]=
		{
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Tracer_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_IR_Mag",
			"SPS_AI_AXMC_762x51mm_M80_Mag",
			"SPS_AI_AXMC_762x51_M993_AP_Mag",
			"SPS_AI_AXMC_762x51_Mk319_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_M118LR_Mag",
			"SPS_AI_AXMC_762x67_Mk248_Mod_0_Mag",
			"SPS_AI_AXMC_762x67_Mk248_Mod_1_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Tracer_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_IR_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_IR_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag",
			"SPS_AI_AXMC_338_300gr_HPBT_Mag",
			"SPS_AI_AXMC_338_API526_Mag",
			"SPS_AI_AXMC_338_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_IR",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_Tracer",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_IR"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_Weapons_F_beta",
			"A3_Weapons_F_Acc",
			"ace_smallarms"
		};
		weapons[]={};
		ammo[]=
		{
			"B_SPS_762x67_Berger_Hybrid_OTM_Tracer_Red",
			"B_SPS_762x67_Berger_Hybrid_OTM_IR",
			"B_SPS_338_250gr_Naturalis",
			"B_SPS_338_250gr_Naturalis_Tracer",
			"B_SPS_338_250gr_Naturalis_IR",
			"B_SPS_338_300gr_Scenar",
			"B_SPS_338_300gr_Scenar_Tracer",
			"B_SPS_338_300gr_Scenar_IR",
			"B_SPS_762x67_Berger_Hybrid_OTM",
			"B_SPS_762x51_Ball",
			"B_SPS_762x51_Ball_M118LR",
			"B_SPS_762x51_Ball_Mk316_Mod_0",
			"B_SPS_762x51_Ball_Mk319_Mod_0",
			"B_SPS_762x51_Ball_M993_AP",
			"B_SPS_762x67_Ball_Mk248_Mod_0",
			"B_SPS_762x67_Ball_Mk248_Mod_1",
			"B_SPS_338_Ball",
			"B_SPS_338_MK",
			"B_SPS_338_ball_API526",
			"B_SPS_338_300gr_Berger_OTM",
			"B_SPS_338_300gr_Berger_OTM_Tracer",
			"B_SPS_338_300gr_Berger_OTM_IR",
			"B_SPS_762x51_185gr_Berger_JOTM",
			"B_SPS_762x51_185gr_Berger_JOTM_Tracer",
			"B_SPS_762x51_185gr_Berger_JOTM_IR"
		};
	};
};
class Mode_SemiAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_OpticRail1913_long;
class asdg_FrontSideRail;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_338: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_snds_SPS_AI_PB_H=1;
		muzzle_snds_SPS_AI_B_H=1;
		muzzle_snds_SPS_AI_G_H=1;
		muzzle_snds_SPS_AI_ES_H=1;
		muzzle_snds_SPS_AI_DE_H=1;
	};
};
class ACE_ATragMX_Presets
{
	class sps_AI_AXMC338_27_300BergerOTM_AtragMX
	{
		preset[]=
		{
			"AI338 300BeOTM",
			859,
			100,
			0.082000002,
			-0.00054500002,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			19.440001,
			8.585,
			23.75,
			0.82200003,
			1,
			"ICAO",
			
			{
				{-15,840},
				{0,847},
				{10,854},
				{15,859},
				{25,873},
				{30,882},
				{35,893}
			},
			
			{
				{0,0.82200003},
				{1300,0.82099998},
				{1500,0.81900001},
				{1770,0.81699997},
				{1880,0.815},
				{2000,0.81300002},
				{2110,0.81099999}
			}
		};
	};
	class sps_AI_AXMC338_27_300Scenar_AtragMX
	{
		preset[]=
		{
			"AI338 300Scen",
			859,
			100,
			0.084294997,
			-0.00055706,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			19.440001,
			8.585,
			23.75,
			0.759,
			1,
			"ICAO",
			
			{
				{-15,840},
				{0,847},
				{10,854},
				{15,859},
				{25,873},
				{30,882},
				{35,893}
			},
			
			{
				{0,0.73400003},
				{1300,0.72600001},
				{1500,0.72000003},
				{1770,0.708},
				{1880,0.70499998},
				{2000,0.70200002},
				{2110,0.69999999}
			}
		};
	};
	class sps_AI_AXMC338_27_250Naturalis_AtragMX
	{
		preset[]=
		{
			"AI338 250Nat",
			941,
			100,
			0.076135002,
			-0.00053639,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			16.200001,
			8.585,
			23.75,
			0.64499998,
			1,
			"ICAO",
			
			{
				{-15,922},
				{0,929},
				{10,936},
				{15,941},
				{25,955},
				{30,964},
				{35,975}
			},
			
			{
				{0,0.65600002},
				{1300,0.63999999},
				{1460,0.63599998},
				{1770,0.625},
				{1920,0.62099999},
				{2030,0.61900002},
				{2190,0.61799997}
			}
		};
	};
	class sps_AI_AXMC338_27_300MatchKing_AtragMX
	{
		preset[]=
		{
			"AI338 300MK HP",
			826,
			100,
			0.085588999,
			-0.00055706,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			19.440001,
			8.585,
			23.75,
			0.759,
			1,
			"ICAO",
			
			{
				{-15,809},
				{0,815},
				{10,822},
				{15,828},
				{25,841},
				{30,850},
				{35,861}
			},
			
			{
				{0,0.73400003},
				{1300,0.72600001},
				{1500,0.72000003},
				{1770,0.708},
				{1880,0.70499998},
				{2000,0.70200002},
				{2110,0.69999999}
			}
		};
	};
	class sps_AI_AXMC338_27_250API_AtragMX
	{
		preset[]=
		{
			"AI338 250AP",
			896,
			100,
			0.085588999,
			-0.00069219997,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			16.394125,
			8.585,
			23.75,
			0.57999998,
			1,
			"ICAO",
			
			{
				{-15,877},
				{0,884},
				{10,891},
				{15,896},
				{25,910},
				{30,919},
				{35,930}
			},
			
			{
				{0,0.58999997},
				{1180,0.57599998},
				{1320,0.57200003},
				{1570,0.56300002},
				{1690,0.56},
				{1860,0.55699998},
				{2050,0.55500001}
			}
		};
	};
	class sps_AI_AXMC338_27_250_AtragMX
	{
		preset[]=
		{
			"AI338 250",
			921,
			100,
			0.076135002,
			-0.00053639,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			16.200001,
			8.585,
			23.75,
			0.64499998,
			1,
			"ICAO",
			
			{
				{-15,902},
				{0,908},
				{10,916},
				{15,921},
				{25,934},
				{30,944},
				{35,955}
			},
			
			{
				{0,0.65600002},
				{1300,0.63999999},
				{1460,0.63599998},
				{1770,0.625},
				{1920,0.62099999},
				{2030,0.61900002},
				{2190,0.61799997}
			}
		};
	};
	class sps_AI_AXMC300_26_BergerOTM_AtragMX
	{
		preset[]=
		{
			"AI300 26 BeOTM",
			888,
			100,
			0.079816997,
			-0.00055261998,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			14.904,
			7.823,
			27.940001,
			0.71600002,
			1,
			"ICAO",
			
			{
				{-15,870},
				{0,876},
				{10,883},
				{15,888},
				{25,902},
				{30,911},
				{35,922}
			},
			
			{
				{0,0.72100002},
				{1400,0.708},
				{1570,0.70300001},
				{1860,0.69199997},
				{1990,0.68900001},
				{2140,0.68599999},
				{2220,0.685}
			}
		};
	};
	class sps_AI_AXMC300_26_Mk248_Mod1_AtragMX
	{
		preset[]=
		{
			"AI300 26 248M1",
			877,
			100,
			0.080513999,
			-0.00063026999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			14.256,
			7.823,
			27.940001,
			0.61900002,
			1,
			"ICAO",
			
			{
				{-15,875},
				{0,876},
				{10,877},
				{15,878},
				{25,881},
				{30,883},
				{35,885}
			},
			
			{
				{0,0.62300003},
				{1150,0.61400002},
				{1330,0.60900003},
				{1620,0.59799999},
				{1770,0.59500003},
				{1970,0.59200001},
				{2030,0.59100002}
			}
		};
	};
	class sps_AI_AXMC300_26_Mk248_Mod0_AtragMX
	{
		preset[]=
		{
			"AI300 26 248M0",
			934,
			100,
			0.075836003,
			-0.00072468002,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			12.312,
			7.823,
			27.940001,
			0.53899997,
			1,
			"ICAO",
			
			{
				{-15,930},
				{0,931},
				{10,933},
				{15,934},
				{25,937},
				{30,938},
				{35,940}
			},
			
			{
				{0,0.546},
				{1210,0.52899998},
				{1470,0.51999998},
				{1570,0.51800001},
				{1730,0.51499999},
				{1880,0.51300001},
				{1970,0.51300001}
			}
		};
	};
	class sps_AI_AXMC308_26_Berger_Juggernaut_OTM_AtragMX
	{
		preset[]=
		{
			"AI308 26 BeOTM",
			815,
			100,
			0.086414002,
			-0.00072499999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.9878,
			7.823,
			30.48,
			0.55199999,
			1,
			"ICAO",
			
			{
				{-15,811},
				{0,812},
				{10,814},
				{15,815},
				{25,818},
				{30,819},
				{35,822}
			},
			
			{
				{0,0.55199999},
				{830,0.56199998},
				{950,0.565},
				{1130,0.565},
				{1260,0.55500001},
				{1430,0.54500002},
				{1660,0.54000002}
			}
		};
	};
	class sps_AI_AXMC308_26_M80A1_AtragMX
	{
		preset[]=
		{
			"AI308 26 M80A1",
			950,
			100,
			0.072552003,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4802332,
			7.823,
			30.48,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,932},
				{0,938},
				{10,945},
				{15,951},
				{25,964},
				{30,973},
				{35,984}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_AI_AXMC308_26_M80_AtragMX
	{
		preset[]=
		{
			"AI308 26 M80",
			846.70001,
			100,
			0.083529003,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			9.4610004,
			7.823,
			30.48,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,828},
				{0,834},
				{10,841},
				{15,846.70001},
				{25,860},
				{30,869},
				{35,880}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_AI_AXMC308_26_M118LR_AtragMX
	{
		preset[]=
		{
			"AI308 26 M118L",
			794.59998,
			100,
			0.088714004,
			-0.00085156999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.823,
			30.48,
			0.48199999,
			1,
			"ICAO",
			
			{
				{-15,775},
				{0,782},
				{10,789},
				{15,794},
				{25,808},
				{30,817},
				{35,828}
			},
			
			{
				{0,0.48300001},
				{790,0.479},
				{920,0.47499999},
				{1130,0.465},
				{1230,0.46200001},
				{1420,0.46000001},
				{1630,0.45899999}
			}
		};
	};
	class sps_AI_AXMC308_26_Mk316_AtragMX
	{
		preset[]=
		{
			"AI308 26 Mk316",
			812,
			100,
			0.088714004,
			-0.00084311003,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.823,
			30.48,
			0.48300001,
			1,
			"ICAO",
			
			{
				{-15,808},
				{0,809},
				{10,810},
				{15,812},
				{25,814},
				{30,816},
				{35,818}
			},
			
			{
				{0,0.484},
				{830,0.479},
				{950,0.47499999},
				{1130,0.46700001},
				{1260,0.463},
				{1430,0.461},
				{1660,0.45899999}
			}
		};
	};
	class sps_AI_AXMC308_26_Mk319_AtragMX
	{
		preset[]=
		{
			"AI308 26 Mk319",
			938.29999,
			100,
			0.074413002,
			-0.00104515,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4239998,
			7.823,
			30.48,
			0.377,
			1,
			"ICAO",
			
			{
				{-15,936},
				{0,937},
				{10,938},
				{15,938},
				{25,940},
				{30,941},
				{35,942}
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
	class sps_AI_AXMC308_26_M993_AtragMX
	{
		preset[]=
		{
			"AI308 26 M993",
			961.40002,
			100,
			0.072113998,
			-0.0010938999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.2299995,
			7.823,
			30.48,
			0.359,
			1,
			"ICAO",
			
			{
				{-15,942},
				{0,949},
				{10,956},
				{15,961},
				{25,975},
				{30,984},
				{35,995}
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
class CfgMovesBasic
{
	class ManActions
	{
		CBA_GestureFireLRR="CBA_GestureFireLRR";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			CBA_GestureFireLRR[]=
			{
				"CBA_GestureFireLRR",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class States
	{
		class GestureReloadBase;
		class CBA_GestureFireLRR: GestureReloadBase
		{
			file="a3\anims_f\data\anim\sdr\gst\gesturefirelrr.rtm";
			speed=-1;
			mask="SPShandsWeaponReduced";
			rightHandIKCurve[]={0,1,0.079999998,0,0.92000002,0,1,1};
			enableOptics=1;
		};
	};
	class BlendAnims
	{
		SPShandsWeaponReduced[]=
		{
			"head",
			0.1,
			"neck1",
			0.1,
			"neck",
			0.1,
			"LeftShoulder",
			1,
			"LeftArm",
			1,
			"LeftArmRoll",
			1,
			"LeftForeArm",
			1,
			"LeftForeArmRoll",
			1,
			"LeftHand",
			1,
			"LeftHandRing",
			1,
			"LeftHandPinky1",
			1,
			"LeftHandPinky2",
			1,
			"LeftHandPinky3",
			1,
			"LeftHandRing1",
			1,
			"LeftHandRing2",
			1,
			"LeftHandRing3",
			1,
			"LeftHandMiddle1",
			1,
			"LeftHandMiddle2",
			1,
			"LeftHandMiddle3",
			1,
			"LeftHandIndex1",
			1,
			"LeftHandIndex2",
			1,
			"LeftHandIndex3",
			1,
			"LeftHandThumb1",
			1,
			"LeftHandThumb2",
			1,
			"LeftHandThumb3",
			1,
			"RightShoulder",
			1,
			"RightArm",
			1,
			"RightArmRoll",
			1,
			"RightForeArm",
			1,
			"RightForeArmRoll",
			1,
			"RightHand",
			1,
			"RightHandRing",
			1,
			"RightHandPinky1",
			1,
			"RightHandPinky2",
			1,
			"RightHandPinky3",
			1,
			"RightHandRing1",
			1,
			"RightHandRing2",
			1,
			"RightHandRing3",
			1,
			"RightHandMiddle1",
			1,
			"RightHandMiddle2",
			1,
			"RightHandMiddle3",
			1,
			"RightHandIndex1",
			1,
			"RightHandIndex2",
			1,
			"RightHandIndex3",
			1,
			"RightHandThumb1",
			1,
			"RightHandThumb2",
			1,
			"RightHandThumb3",
			1,
			"Spine",
			0.0175,
			"Spine1",
			0.0175,
			"Spine2",
			0.0175,
			"Spine3",
			0.0175
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class Eventhandlers;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
		class GunParticles;
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class GunParticles: GunParticles
		{
			class FirstEffect;
		};
		class WeaponSlotsInfo;
		class Single;
		class single_close_optics1;
		class single_medium_optics1;
		class single_far_optics1;
	};
	class SPS_AI_AXMC_base_F: DMR_05_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_338
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913_long
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
		};
		class EventHandlers: Eventhandlers
		{
			class sps_boltaction
			{
				fired="[_this select 0,_this select 1,_this select 2] call sps_fnc_boltAction";
			};
		};
		class CBA_weaponEvents
		{
			handAction="CBA_GestureFireLRR";
			sound="";
			soundLocation="RightHandMiddle1";
			onEmpty=0;
		};
		recoil="recoil_dmr_02";
		recoilProne="assaultRifleBase";
		hasBipod=1;
		deployedPivot="bipod";
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",
			0.50118703,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",
			1,
			1,
			10
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.707946,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.707946,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		ACE_clearJamAction="GestureReloadLRR";
		ACE_checkTemperatureAction="Gear";
		ACE_overheating_mrbs=10000;
		ACE_Overheating_Dispersion[]={0,9.9999997e-005,0.00030000001,0.00079999998};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_ironsightbaseangle=0;
		ACE_ScopeAdjust_Vertical[]={-0.1,10.1};
		ACE_ScopeAdjust_Horizontal[]={-5.0999999,5.0999999};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		reloadAction="GestureReloadLRR";
		maxRecoilSway=0.0080000004;
		swayDecaySpeed=2;
		allowedSlots[]={901};
		maxZeroing=1800;
		discreteDistance[]={200,200,300,400,500,600};
		discreteDistanceInitIndex=0;
		selectionFireAnim="zasleh";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\sps_ai_axmc\Data\RTM\ArmaRig_V6_1_AI_AXMC_V20.rtm"
		};
		cartridgePos="";
		cartridgeVel="";
		class Single: Single
		{
			reloadTime=0.80000001;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
		};
		magazineWell[]={};
	};
	class SPS_AI_AXMC338_27_PB_F: SPS_AI_AXMC_base_F
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.0001215;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.0001215;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.0001215;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.0001215;
		};
		magazines[]=
		{
			"SPS_AI_AXMC_338_300gr_Scenar_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag",
			"SPS_AI_AXMC_338_300gr_Scenar_IR_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag",
			"SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag",
			"SPS_AI_AXMC_338_300gr_HPBT_Mag",
			"SPS_AI_AXMC_338_API526_Mag",
			"SPS_AI_AXMC_338_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer",
			"SPS_AI_AXMC_338_300gr_Berger_Mag_IR"
		};
		scope=2;
		ACE_barrelLength=692.15002;
		ACE_barrelTwist=237.5;
		dexterity=1.3;
		displayName="AI AXMC .338 27 Barrel Pale Brown";
		descriptionShort="Sniper Rifle <br> Caliber: .338 Lapua Magnum";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"",
			"",
			""
		};
		inertia=0.97000003;
		initSpeed=-1.0369999;
		model="x\SPS\Weapons\sps_ai_axmc\AI_AXMC_27.p3d";
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_PB_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_PB_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=153;
		};
	};
	class SPS_AI_AXMC338_27_B_F: SPS_AI_AXMC338_27_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .338 27 Barrel Elite Midnight";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_B_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_B_ca.paa";
	};
	class SPS_AI_AXMC338_27_G_F: SPS_AI_AXMC338_27_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .338 27 Barrel Green";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_G_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_G_ca.paa";
	};
	class SPS_AI_AXMC338_27_DE_F: SPS_AI_AXMC338_27_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .338 27 Barrel Dark Earth";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_DE_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_DE_ca.paa";
	};
	class SPS_AI_AXMC338_27_ES_F: SPS_AI_AXMC338_27_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .338 27 Barrel Elite Sand";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_ES_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_ES_ca.paa";
	};
	class SPS_AI_AXMC300_26_PB_F: SPS_AI_AXMC_base_F
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00014544401;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00014544401;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00014544401;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00014544401;
		};
		magazines[]=
		{
			"SPS_AI_AXMC_762x67_Mk248_Mod_0_Mag",
			"SPS_AI_AXMC_762x67_Mk248_Mod_1_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Tracer_Mag",
			"SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_IR_Mag"
		};
		scope=2;
		ACE_barrelLength=667.75;
		ACE_barrelTwist=279.39999;
		dexterity=1.33;
		displayName="AI AXMC .300 26 Barrel Pale Brown";
		descriptionShort="Sniper Rifle <br> Caliber: .300 WinMag";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"",
			""
		};
		inertia=0.94;
		initSpeed=-1.033;
		model="x\SPS\Weapons\sps_ai_axmc\AI_AXMC_26.p3d";
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_PB_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_PB_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=151;
		};
	};
	class SPS_AI_AXMC300_26_B_F: SPS_AI_AXMC300_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .300 26 Barrel Elite Midnight";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_B_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_B_ca.paa";
	};
	class SPS_AI_AXMC300_26_G_F: SPS_AI_AXMC300_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .300 26 Barrel Green";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_G_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_G_ca.paa";
	};
	class SPS_AI_AXMC300_26_DE_F: SPS_AI_AXMC300_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .300 26 Barrel Dark Earth";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_DE_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_DE_ca.paa";
	};
	class SPS_AI_AXMC300_26_ES_F: SPS_AI_AXMC300_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .300 26 Barrel Elite Sand";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"",
			""
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_ES_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_ES_ca.paa";
	};
	class SPS_AI_AXMC308_26_PB_F: SPS_AI_AXMC_base_F
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00014544401;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00014544401;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00014544401;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00014544401;
		};
		magazines[]=
		{
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_Tracer_Mag",
			"SPS_AI_AXMC_762x51mm_M80A1_EPR_IR_Mag",
			"SPS_AI_AXMC_762x51mm_M80_Mag",
			"SPS_AI_AXMC_762x51_M993_AP_Mag",
			"SPS_AI_AXMC_762x51_Mk319_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag",
			"SPS_AI_AXMC_762x51_M118LR_Mag",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_Tracer",
			"SPS_AI_AXMC_762x51_Berger_JOTM_Mag_IR"
		};
		scope=2;
		ACE_barrelLength=667.75;
		ACE_barrelTwist=304.79999;
		dexterity=1.34;
		displayName="AI AXMC .308 26 Barrel Pale Brown";
		descriptionShort="Sniper Rifle <br> Caliber: .308 Winchester";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\PB\Group4_low_CO.paa"
		};
		inertia=0.93000001;
		initSpeed=-1.029;
		model="x\SPS\Weapons\sps_ai_axmc\AI_AXMC_26.p3d";
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_PB_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_PB_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=151;
		};
	};
	class SPS_AI_AXMC308_26_B_F: SPS_AI_AXMC308_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .308 26 Barrel Elite Midnight";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\B\Group4_low_CO.paa"
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_B_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_B_ca.paa";
	};
	class SPS_AI_AXMC308_26_G_F: SPS_AI_AXMC308_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .308 26 Barrel Green";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\G\Group4_low_CO.paa"
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_G_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_G_ca.paa";
	};
	class SPS_AI_AXMC308_26_DE_F: SPS_AI_AXMC308_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .308 26 Barrel Dark Earth";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\DE\Group4_low_CO.paa"
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_DE_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_DE_ca.paa";
	};
	class SPS_AI_AXMC308_26_ES_F: SPS_AI_AXMC308_26_PB_F
	{
		author="SPS Team";
		displayName="AI AXMC .308 26 Barrel Elite Sand";
		hiddenSelections[]=
		{
			"Barrel",
			"Group2",
			"Group3",
			"Group4",
			"Mag338",
			"Mag300",
			"Mag308",
			"MagInsert308"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group1_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group2_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group3_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"",
			"",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa",
			"x\SPS\Weapons\sps_ai_axmc\Data\ES\Group4_low_CO.paa"
		};
		picture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_ES_ca.paa";
		UIpicture="x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_ES_ca.paa";
	};
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class muzzle_snds_338_black;
	class Zasleh2: ItemCore
	{
		scope=2;
		model="A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class muzzle_snds_SPS_AI_PB_H: muzzle_snds_338_black
	{
		author="SPS Team";
		scope=2;
		displayName="AI Suppressor Pale Brown";
		Picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_PB.paa";
		UiPicture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_PB.paa";
		model="x\SPS\Weapons\sps_ai_axmc\Suppressor_PB.p3d";
	};
	class muzzle_snds_SPS_AI_B_H: muzzle_snds_SPS_AI_PB_H
	{
		author="SPS Team";
		scope=2;
		displayName="AI Suppressor Black";
		Picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_B.paa";
		UiPicture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_B.paa";
		model="x\SPS\Weapons\sps_ai_axmc\Suppressor_B.p3d";
	};
	class muzzle_snds_SPS_AI_ES_H: muzzle_snds_338_black
	{
		author="SPS Team";
		scope=2;
		displayName="AI Suppressor Elite Sand";
		Picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_ES.paa";
		UiPicture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_ES.paa";
		model="x\SPS\Weapons\sps_ai_axmc\Suppressor_ES.p3d";
	};
	class muzzle_snds_SPS_AI_G_H: muzzle_snds_338_black
	{
		author="SPS Team";
		scope=2;
		displayName="AI Suppressor Green";
		Picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_G.paa";
		UiPicture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_G.paa";
		model="x\SPS\Weapons\sps_ai_axmc\Suppressor_G.p3d";
	};
	class muzzle_snds_SPS_AI_DE_H: muzzle_snds_338_black
	{
		author="SPS Team";
		scope=2;
		displayName="AI Suppressor Dark Earth";
		Picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_DE.paa";
		UiPicture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\Suppressor_DE.paa";
		model="x\SPS\Weapons\sps_ai_axmc\Suppressor_DE.p3d";
	};
};
class CfgAmmo
{
	class BulletBase;
	class ACE_762x67_Ball_Berger_Hybrid_OTM;
	class B_338_Ball;
	class ACE_338_Ball;
	class B_762x51_Ball;
	class ACE_762x51_Ball_M118LR;
	class ACE_762x51_Ball_Mk316_Mod_0;
	class ACE_762x51_Ball_Mk319_Mod_0;
	class ACE_762x51_Ball_M993_AP;
	class ACE_762x67_Ball_Mk248_Mod_0;
	class ACE_762x67_Ball_Mk248_Mod_1;
	class ACE_338_Ball_API526;
	class B_SPS_762x51_Ball: B_762x51_Ball
	{
		ACE_muzzleVelocities[]={707.59998,807.59998,827.59998,840.59998,852.59998,861.59998};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002,700};
	};
	class B_SPS_762x51_Ball_M118LR: ACE_762x51_Ball_M118LR
	{
		ACE_muzzleVelocities[]={757.20001,787.20001,797.20001,801.20001,804.20001};
		ACE_barrelLengths[]={406.39999,508,609.59998,660.40002,700};
	};
	class B_SPS_762x51_Ball_Mk316_Mod_0: ACE_762x51_Ball_Mk316_Mod_0
	{
		ACE_muzzleVelocities[]={776.40002,791.40002,806.40002,811.40002,820.40002};
		ACE_barrelLengths[]={406.39999,508,609.59998,660.40002,700};
	};
	class B_SPS_762x51_Ball_Mk319_Mod_0: ACE_762x51_Ball_Mk319_Mod_0
	{
		ACE_muzzleVelocities[]={838.79999,892.79999,910.79999,944.79999};
		ACE_barrelLengths[]={330.20001,406.39999,508,700};
	};
	class B_SPS_762x51_Ball_M993_AP: ACE_762x51_Ball_M993_AP
	{
		ACE_muzzleVelocities[]={882.20001,917.20001,937.20001,975.20001};
		ACE_barrelLengths[]={330.20001,406.39999,508,700};
	};
	class B_SPS_762x67_Ball_Mk248_Mod_0: ACE_762x67_Ball_Mk248_Mod_0
	{
		ACE_muzzleVelocities[]={872.59998,907.59998,931.59998,950.59998};
		ACE_barrelLengths[]={508,609.59998,660.40002,700};
	};
	class B_SPS_762x67_Ball_Mk248_Mod_1: ACE_762x67_Ball_Mk248_Mod_1
	{
		ACE_muzzleVelocities[]={848.40002,868.40002,878.40002,886.40002};
		ACE_barrelLengths[]={508,609.59998,660.40002,700};
	};
	class B_SPS_762x67_Berger_Hybrid_OTM: ACE_762x67_Ball_Berger_Hybrid_OTM
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=3.2;
		ACE_muzzleVelocities[]={807.59998,860.59998,891.59998,915.59998};
		ACE_barrelLengths[]={508,609.59998,660.40002,700};
		ACE_muzzleVelocityVariationSD=0.23;
	};
	class B_SPS_762x67_Berger_Hybrid_OTM_Tracer_Red: B_SPS_762x67_Berger_Hybrid_OTM
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class B_SPS_762x67_Berger_Hybrid_OTM_IR: B_SPS_762x67_Berger_Hybrid_OTM_Tracer_Red
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
	class B_SPS_338_250gr_Naturalis: B_338_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=23;
		caliber=0.85000002;
		ACE_muzzleVelocityVariationSD=0.2;
		ACE_caliber=8.585;
		ACE_bulletLength=39.573002;
		ACE_bulletMass=16.200001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.322};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={907.59998,942.59998,952.59998};
		ACE_barrelLengths[]={508,660.40002,711.20001};
	};
	class B_SPS_338_250gr_Naturalis_Tracer: B_SPS_338_250gr_Naturalis
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
	};
	class B_SPS_338_250gr_Naturalis_IR: B_SPS_338_250gr_Naturalis
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
	};
	class B_SPS_338_300gr_Scenar: ACE_338_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		timeToLive=10;
		airFriction=-0.00055706;
		typicalSpeed=826;
		ACE_caliber=8.585;
		ACE_bulletLength=44.0182;
		ACE_bulletMass=19.440001;
		ACE_muzzleVelocityVariationSD=0.15000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.368};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={838.59998,858.59998,864.59998,868.59998};
		ACE_barrelLengths[]={508,609.59998,673.09998,711.20001};
		hit=24.5;
	};
	class B_SPS_338_300gr_Scenar_Tracer: B_SPS_338_300gr_Scenar
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
		timeToLive=10;
	};
	class B_SPS_338_300gr_Scenar_IR: B_SPS_338_300gr_Scenar
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
		timeToLive=10;
	};
	class B_SPS_338_300gr_Berger_OTM: B_SPS_338_300gr_Scenar
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		airFriction=-0.00054500002;
		ACE_ballisticCoefficients[]={0.421};
	};
	class B_SPS_338_300gr_Berger_OTM_Tracer: B_SPS_338_300gr_Berger_OTM
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
		timeToLive=10;
	};
	class B_SPS_338_300gr_Berger_OTM_IR: B_SPS_338_300gr_Berger_OTM_Tracer
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
		tracerScale=1.4;
		tracerStartTime=0.072999999;
		tracerEndTime=3.5999999;
		timeToLive=10;
	};
	class B_SPS_762x51_185gr_Berger_JOTM: B_SPS_762x51_Ball_Mk316_Mod_0
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		airFriction=-0.00072499999;
		ACE_dragModel=7;
		ACE_bulletMass=11.9878;
		ACE_ballisticCoefficients[]={0.28299999};
		ACE_muzzleVelocityVariationSD=0.25;
		ACE_muzzleVelocities[]={776.40002,791.40002,806.40002,815.40002,820.40002};
		ACE_barrelLengths[]={406.39999,508,609.59998,660.40002,700};
		ACE_standardAtmosphere="ICAO";
	};
	class B_SPS_762x51_185gr_Berger_JOTM_Tracer: B_SPS_762x51_185gr_Berger_JOTM
	{
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.5;
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class B_SPS_762x51_185gr_Berger_JOTM_IR: B_SPS_762x51_185gr_Berger_JOTM
	{
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.5;
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
	class B_SPS_338_Ball: B_338_Ball
	{
		ACE_muzzleVelocities[]={887.20001,922.20001,932.20001};
		ACE_barrelLengths[]={508,660.40002,711.20001};
	};
	class B_SPS_338_MK: ACE_338_Ball
	{
		ACE_muzzleVelocities[]={807.20001,827.20001,833.20001,837.20001};
		ACE_barrelLengths[]={508,609.59998,673.09998,711.20001};
	};
	class B_SPS_338_ball_API526: ACE_338_Ball_API526
	{
		ACE_muzzleVelocities[]={887.59998,902.59998,907.59998};
		ACE_barrelLengths[]={508,685.79999,711.20001};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class SPS_20Rnd_762x51mm_M80A1_EPR;
	class SPS_20Rnd_762x51mm_M80A1_EPR_Tracer;
	class SPS_20Rnd_762x51mm_M80A1_EPR_IR;
	class ACE_10Rnd_762x51_M993_AP_Mag;
	class ACE_10Rnd_762x51_Mk319_Mod_0_Mag;
	class ACE_10Rnd_762x51_Mk316_Mod_0_Mag;
	class ACE_10Rnd_762x51_M118LR_Mag;
	class ACE_20Rnd_762x67_Mk248_Mod_0_Mag;
	class ACE_20Rnd_762x67_Mk248_Mod_1_Mag;
	class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag;
	class 10Rnd_338_Mag;
	class ACE_10Rnd_338_API526_Mag;
	class ACE_10Rnd_338_300gr_HPBT_Mag;
	class SPS_AI_AXMC_762x51mm_M80A1_EPR_Mag: SPS_20Rnd_762x51mm_M80A1_EPR
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		count=10;
		mass=7;
		descriptionShort="Caliber: 7.62x51 mm NATO <br>Rounds: 10<br>Used in: AI AXMC 308";
		displayname="7.62mm 10Rnd Mag (M80A1 EPR)";
		displaynameshort="M80A1";
	};
	class SPS_AI_AXMC_762x51mm_M80A1_EPR_Tracer_Mag: SPS_20Rnd_762x51mm_M80A1_EPR_Tracer
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		count=10;
		mass=7;
		descriptionShort="Caliber: 7.62x51 mm NATO <br>Rounds: 10<br>Used in: AI AXMC 308";
		displayname="7.62mm 10Rnd Tracer Mag (M80A1 EPR)";
		displaynameshort="M80A1 T";
	};
	class SPS_AI_AXMC_762x51mm_M80A1_EPR_IR_Mag: SPS_20Rnd_762x51mm_M80A1_EPR_IR
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		count=10;
		mass=7;
		descriptionShort="Caliber: 7.62x51 mm NATO <br>Rounds: 10<br>Used in: AI AXMC 308";
		displayname="7.62mm 10Rnd IR DIM Mag (M80A1 EPR)";
		displaynameshort="M80A1 IR";
	};
	class SPS_AI_AXMC_762x51mm_M80_Mag: 20Rnd_762x51_Mag
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		count=10;
		mass=7;
		ammo="B_SPS_762x51_Ball";
		descriptionShort="Caliber: 7.62x51 mm NATO <br>Rounds: 10<br>Used in: AI AXMC 308";
		displayname="7.62mm 10Rnd Mag (M80)";
	};
	class SPS_AI_AXMC_762x51_M993_AP_Mag: ACE_10Rnd_762x51_M993_AP_Mag
	{
		author="SPS Team";
		scope=2;
		ammo="B_SPS_762x51_Ball_M993_AP";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
	};
	class SPS_AI_AXMC_762x51_Mk319_Mod_0_Mag: ACE_10Rnd_762x51_Mk319_Mod_0_Mag
	{
		author="SPS Team";
		scope=2;
		ammo="B_SPS_762x51_Ball_Mk319_Mod_0";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
	};
	class SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag: ACE_10Rnd_762x51_Mk316_Mod_0_Mag
	{
		author="SPS Team";
		scope=2;
		ammo="B_SPS_762x51_Ball_Mk316_Mod_0";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
	};
	class SPS_AI_AXMC_762x51_M118LR_Mag: ACE_10Rnd_762x51_M118LR_Mag
	{
		author="SPS Team";
		scope=2;
		ammo="B_SPS_762x51_Ball_M118LR";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
	};
	class SPS_AI_AXMC_762x67_Mk248_Mod_0_Mag: ACE_20Rnd_762x67_Mk248_Mod_0_Mag
	{
		author="SPS Team";
		displayName=".300WM 10Rnd Mag (Mk248 Mod 0)";
		displayNameShort=".300 Mk248M0";
		descriptionShort="Caliber: 7.62x67mm NATO (Mk248 Mod 0)<br>Rounds: 10";
		scope=2;
		ammo="B_SPS_762x67_Ball_Mk248_Mod_0";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_Mag_ca.paa";
		count=10;
		mass=10.5;
	};
	class SPS_AI_AXMC_762x67_Mk248_Mod_1_Mag: ACE_20Rnd_762x67_Mk248_Mod_1_Mag
	{
		author="SPS Team";
		displayName=".300WM 10Rnd Mag (Mk248 Mod 1)";
		displayNameShort=".300 Mk248M1";
		descriptionShort="Caliber: 7.62x67mm NATO (Mk248 Mod 1)<br>Rounds: 10";
		scope=2;
		ammo="B_SPS_762x67_Ball_Mk248_Mod_1";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_Mag_ca.paa";
		count=10;
		mass=10.5;
	};
	class SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag: ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag
	{
		author="SPS Team";
		displayName=".300WM 10Rnd Mag (Berger Hybrid OTM)";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_Mag_ca.paa";
		displayNameShort=".300 BH OTM";
		count=10;
		ammo="B_SPS_762x67_Berger_Hybrid_OTM";
		mass=10.5;
	};
	class SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Tracer_Mag: SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag
	{
		author="SPS Team";
		displayName=".300WM 10Rnd Mag Tracer (Berger Hybrid OTM)";
		displayNameShort=".300 BH OTM T";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_Mag_ca.paa";
		count=10;
		mass=10.5;
		tracersEvery=1;
		ammo="B_SPS_762x67_Berger_Hybrid_OTM_Tracer_Red";
	};
	class SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_IR_Mag: SPS_AI_AXMC_762x67_Berger_Hybrid_OTM_Mag
	{
		author="SPS Team";
		displayName=".300WM 10Rnd Mag IR DIM (Berger Hybrid OTM)";
		displayNameShort=".300 BH OTM IR";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_300_Mag_ca.paa";
		count=10;
		mass=10.5;
		tracersEvery=1;
		ammo="B_SPS_762x67_Berger_Hybrid_OTM_IR";
	};
	class SPS_AI_AXMC_338_Mag: 10Rnd_338_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 10Rnd Mag";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
		count=10;
		ammo="B_SPS_338_Ball";
		initSpeed=915;
		descriptionShort="Caliber: .338 Lapua Magnum<br>Rounds: 10<br>Used in: AI AXMC .338";
		mass=14;
	};
	class SPS_AI_AXMC_338_API526_Mag: ACE_10Rnd_338_API526_Mag
	{
		author="SPS Team";
		scope=2;
		ammo="B_SPS_338_ball_API526";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
	};
	class SPS_AI_AXMC_338_300gr_HPBT_Mag: ACE_10Rnd_338_300gr_HPBT_Mag
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
		displayName=".338 10Rnd Mag (300gr Sierra MatchKing HPBT)";
		displayNameShort=".338 HPBT";
		ammo="B_SPS_338_MK";
		descriptionShort="Caliber: 8.6x70mm (300gr Sierra MatchKing HPBT)<br>Rounds: 10";
	};
	class SPS_AI_AXMC_338_300gr_Scenar_Mag: SPS_AI_AXMC_338_300gr_HPBT_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr Scenar 10Rnd Mag";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
		count=10;
		ammo="B_SPS_338_300gr_Scenar";
		initSpeed=837;
		descriptionShort="Caliber: .338 Lapua Magnum<br>Rounds: 10<br>Used in: AI AXMC .338";
		displayNameShort=".338 Scenar";
		mass=14;
	};
	class SPS_AI_AXMC_338_300gr_Scenar_Tracer_Mag: SPS_AI_AXMC_338_300gr_Scenar_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr Scenar Tracer 10Rnd Mag";
		ammo="B_SPS_338_300gr_Scenar_Tracer";
		displayNameShort=".338 Scenar T";
		tracersEvery=1;
	};
	class SPS_AI_AXMC_338_300gr_Scenar_IR_Mag: SPS_AI_AXMC_338_300gr_Scenar_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr Scenar IR DIM 10Rnd Mag";
		ammo="B_SPS_338_300gr_Scenar_IR";
		displayNameShort=".338 Scenar IR";
		tracersEvery=1;
	};
	class SPS_AI_AXMC_338_250gr_Naturalis_Mag: SPS_AI_AXMC_338_300gr_Scenar_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 250gr Naturalis 10Rnd Mag";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
		count=10;
		ammo="B_SPS_338_250gr_Naturalis";
		initSpeed=915;
		descriptionShort="Caliber: .338 Lapua Magnum<br>Rounds: 10<br>Used in: AI AXMC .338";
		displayNameShort=".338 Naturalis";
		mass=14;
	};
	class SPS_AI_AXMC_338_250gr_Naturalis_Tracer_Mag: SPS_AI_AXMC_338_250gr_Naturalis_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 250gr Naturalis Tracer 10Rnd Mag";
		ammo="B_SPS_338_250gr_Naturalis_Tracer";
		tracersEvery=1;
		displayNameShort=".338 Naturalis T";
	};
	class SPS_AI_AXMC_338_250gr_Naturalis_IR_Mag: SPS_AI_AXMC_338_250gr_Naturalis_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 250gr Naturalis IR DIM 10Rnd Mag";
		ammo="B_SPS_338_250gr_Naturalis_IR";
		tracersEvery=1;
		displayNameShort=".338 Naturalis IR";
	};
	class SPS_AI_AXMC_338_300gr_Berger_Mag: SPS_AI_AXMC_338_300gr_Scenar_Mag
	{
		ammo="B_SPS_338_300gr_Berger_OTM";
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr BergerOTM 10Rnd Mag";
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_338_Mag_ca.paa";
		count=10;
		initSpeed=837;
		descriptionShort="Caliber: .338 Lapua Magnum<br>Rounds: 10<br>Used in: AI AXMC .338";
		displayNameShort=".338 Berger";
		mass=14;
	};
	class SPS_AI_AXMC_338_300gr_Berger_Mag_Tracer: SPS_AI_AXMC_338_300gr_Berger_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr BergerOTM Tracer 10Rnd Mag";
		ammo="B_SPS_338_300gr_Berger_OTM_Tracer";
		displayNameShort=".338 Berger T";
		tracersEvery=1;
	};
	class SPS_AI_AXMC_338_300gr_Berger_Mag_IR: SPS_AI_AXMC_338_300gr_Berger_Mag
	{
		author="SPS Team";
		scope=2;
		displayName=".338 LM 300gr BergerOTM IR DIM 10Rnd Mag";
		ammo="B_SPS_338_300gr_Berger_OTM_IR";
		displayNameShort=".338 Berger IR";
		tracersEvery=1;
	};
	class SPS_AI_AXMC_762x51_Berger_JOTM_Mag: SPS_AI_AXMC_762x51_Mk316_Mod_0_Mag
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
		ammo="B_SPS_762x51_185gr_Berger_JOTM";
		displayName="7.62mm 10Rnd Mag (Berger JOTM)";
		descriptionShort="Caliber: 7.62x51mm NATO (Berger JOTM)<br />Rounds: 10";
		displayNameShort="7.62mm Berger";
	};
	class SPS_AI_AXMC_762x51_Berger_JOTM_Mag_Tracer: SPS_AI_AXMC_762x51_Berger_JOTM_Mag
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
		ammo="B_SPS_762x51_185gr_Berger_JOTM_Tracer";
		displayName="7.62mm 10Rnd Mag (Berger JOTM) Tracer";
		descriptionShort="Caliber: 7.62x51mm NATO Tracer (Berger JOTM)<br />Rounds: 10";
		displayNameShort="7.62mm Berger T";
		tracersEvery=1;
	};
	class SPS_AI_AXMC_762x51_Berger_JOTM_Mag_IR: SPS_AI_AXMC_762x51_Berger_JOTM_Mag
	{
		author="SPS Team";
		scope=2;
		picture="\x\SPS\Weapons\sps_ai_axmc\Data\UI\AI_AXMC_308_Mag_ca.paa";
		mass=7;
		ammo="B_SPS_762x51_185gr_Berger_JOTM_IR";
		displayName="7.62mm 10Rnd Mag (Berger JOTM) IR DIM";
		descriptionShort="Caliber: 7.62x51mm NATO IR DIM (Berger JOTM)<br />Rounds: 10";
		displayNameShort="7.62mm Berger IR";
		tracersEvery=1;
	};
};
