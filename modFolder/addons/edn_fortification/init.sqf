
if (isDedicated) exitWith {};
if (!(isnil "edn_fortification_keydown")) exitwith {};

edn_fortification_zeus_array = [];

edn_fortification_array = missionNameSpace getVariable ["edn_fortification_array",[
	["Walls",
		["Land_BagFence_Long_F",[["edn_sandbag",3]]],
		["Land_BagFence_Short_F",[["edn_sandbag",2]]],
		["Land_BagFence_End_F",[["edn_sandbag",1]]],
		["Land_BagFence_Round_F",[["edn_sandbag",3]]],
		["Land_BagFence_Corner_F",[["edn_sandbag",2]]]
	],
	["Camping",
		["Land_Campfire_F",[["edn_Woodplank",2]]],
		["Land_CampingChair_V2_F",[["edn_Metalpipe",2]]],
		["Land_CampingTable_F",[["edn_Metalpipe",4],["edn_Steelplate",2]]],
		["Land_CampingTable_small_F",[["edn_Metalpipe",4],["edn_Steelplate",1]]]
	]
]];

edn_fortification_categorieId = 0;
edn_fortification_classnameId = 0;
EDN_Fortification_alignToGround = false;
edn_fortification_inventoryHolder = objNull;


// ## actions

// https://community.bistudio.com/wiki/DIK_KeyCodes

// ### CBA Keybinding

["EdnFortifications", "menu", ["Open actions menu", ""], {
    if (!dialog and (vehicle player == player)) then { [] call edn_fnc_openFortificationMenu; };
}, {
    //_this call mymod_fnc_keyUp
}, [48, [false, true, false], false, 0, false]] call CBA_fnc_addKeybind;

["EdnFortifications", "left", ["Turn left", ""], {
	[5] call edn_fnc_turnObject; _return = true;
}, {
    //_this call mymod_fnc_keyUp
}, [203, [false, false, false], true, 0, false]] call CBA_fnc_addKeybind;

["EdnFortifications", "right", ["Turn right", ""], {
	[-5] call edn_fnc_turnObject; _return = true;
}, {
    //_this call mymod_fnc_keyUp
}, [205, [false, false, false], true, 0, false]] call CBA_fnc_addKeybind;

["EdnFortifications", "front", ["Move front", ""], {
	[0.05] call edn_fnc_distanceObject; _return = true;
}, {
    //_this call mymod_fnc_keyUp
}, [200, [false, false, false], true, 0, false]] call CBA_fnc_addKeybind;

["EdnFortifications", "back", ["Move back", ""], {
	[-0.05] call edn_fnc_distanceObject; _return = true;
}, {
    //_this call mymod_fnc_keyUp
}, [208, [false, false, false], true, 0, false]] call CBA_fnc_addKeybind;

edn_fortification_keydown = 1;


// ### s_def . init.sqf (Addon)

//#include "\userconfig\edn_fortification\edn_fortification_config.hpp"

// addMissionEventHandler ["EachFrame", {

// EDN_FORTIFICATION_KEYBINDINGS = [
// 	[
// 		missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_KEY",48],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_SHIFT",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_CTRL",true],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_ALT",false]
// 	],[
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_KEY",36],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_SHIFT",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_CTRL",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_ALT",false]
// 	],[
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_KEY",38],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_SHIFT",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_CTRL",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_ALT",false]
// 	],[
// 		missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_KEY",37],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_SHIFT",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_CTRL",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_ALT",false]
// 	],[
// 		missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_KEY",23],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_SHIFT",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_CTRL",false],
// 		missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_ALT",false]
// 	]
// ];

// 	removeMissionEventHandler _thisEventHandler;
// }];

// waitUntil {!(IsNull (findDisplay 46))};

// edn_fortification_keydown = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call edn_fnc_keyCheck"];
