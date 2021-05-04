//#include "\userconfig\edn_fortification\edn_fortification_config.hpp"

// ### def

addMissionEventHandler ["EachFrame", {

missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_KEY",48]; // By default 48 = "B"
// Define any combination only "true" or "false" below
// if you want to use shift, ctrl or alt in your shortcut then set them to true
missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_SHIFT",false];
missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_CTRL",true];
missionNamespace getVariable ["EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_ALT",false];

// --Fortification Open Construction Menu
missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_KEY",36]; // By default 36 = "J"
// Define any combination only "true" or "false" below
// if you want to use shift, ctrl or alt in your shortcut then set them to true
missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_SHIFT",false];
missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_CTRL",false];
missionNamespace getVariable ["EDN_FORTIFICATION_TURNLEFT_ALT",false];

// --Fortification Open Construction Menu
missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_KEY",38]; // By default 38 = "L"
// Define any combination only "true" or "false" below
// if you want to use shift, ctrl or alt in your shortcut then set them to true
missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_SHIFT",false];
missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_CTRL",false];
missionNamespace getVariable ["EDN_FORTIFICATION_TURNRIGHT_ALT",false];

// --Fortification Open Construction Menu
missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_KEY",37]; // By default 37 = "K"
// Define any combination only "true" or "false" below
// if you want to use shift, ctrl or alt in your shortcut then set them to true
missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_SHIFT",false];
missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_CTRL",false];
missionNamespace getVariable ["EDN_FORTIFICATION_MINUSDISTANCE_ALT",false];

// --Fortification Open Construction Menu
missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_KEY",23]; // By default 23 = "I"
// Define any combination only "true" or "false" below
// if you want to use shift, ctrl or alt in your shortcut then set them to true
missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_SHIFT",false];
missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_CTRL",false];
missionNamespace getVariable ["EDN_FORTIFICATION_PLUSDISTANCE_ALT",false];

removeMissionEventHandler _thisEventHandler;
}];

if (isDedicated) exitWith {};
if (!(isnil "edn_fortification_keydown")) exitwith {};

edn_fortification_zeus_array = [];

edn_fortification_array = [
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
];

edn_fortification_categorieId = 0;
edn_fortification_classnameId = 0;
EDN_Fortification_alignToGround = false;
edn_fortification_inventoryHolder = objNull;

//Get Data from Userconfig
EDN_FORTIFICATION_KEYBINDINGS = [
[EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_KEY,EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_SHIFT,EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_CTRL,EDN_FORTIFICATION_OPENCONSTRUCTIONMENU_ALT],
[EDN_FORTIFICATION_TURNLEFT_KEY,EDN_FORTIFICATION_TURNLEFT_SHIFT,EDN_FORTIFICATION_TURNLEFT_CTRL,EDN_FORTIFICATION_TURNLEFT_ALT],
[EDN_FORTIFICATION_TURNRIGHT_KEY,EDN_FORTIFICATION_TURNRIGHT_SHIFT,EDN_FORTIFICATION_TURNRIGHT_CTRL,EDN_FORTIFICATION_TURNRIGHT_ALT],
[EDN_FORTIFICATION_MINUSDISTANCE_KEY,EDN_FORTIFICATION_MINUSDISTANCE_SHIFT,EDN_FORTIFICATION_MINUSDISTANCE_CTRL,EDN_FORTIFICATION_MINUSDISTANCE_ALT],
[EDN_FORTIFICATION_PLUSDISTANCE_KEY,EDN_FORTIFICATION_PLUSDISTANCE_SHIFT,EDN_FORTIFICATION_PLUSDISTANCE_CTRL,EDN_FORTIFICATION_PLUSDISTANCE_ALT]
];

waituntil {!(IsNull (findDisplay 46))};

edn_fortification_keydown = (findDisplay 46) displayAddEventHandler ["KeyDown","_this call edn_fnc_keyCheck"];
