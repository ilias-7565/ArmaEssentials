class cfgPatches {
	class Config_en {
		name = "Config overwrite en";
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
			// ,"mas_weapons"
		};
		units[] = {};
		weapons[] = {
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
			class WeaponSlotsInfo;
		};
		// class MainWeapon_en: Rifle_Base_F {
		// 	scope 0;
		// 	class WeaponSlotsInfo: WeaponSlotsInfo {
		// 		scope 0;
		// 	};
		// };
		// class UGL_F;

};

//#include "";
