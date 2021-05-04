

execVM "r3fAdvLog\R3F_LOG\init.sqf";

// Turn off ACE cargo


R3F_isACECargo = isClass (configFile >> "CfgPatches" >> "ace_cargo");

if (R3F_isACECargo) then
{
	[] spawn {



		/*if (isServer) then
		{
			["ace_cargo_enable", false, true, true] call ace_common_fnc_setSetting;
		};*/

		if (hasInterface) then
		{
			waitUntil {!(isNil "ace_cargo_enable")};
			sleep 2;
			ace_cargo_enable = false;
		};

	};
};

/*if (hasInterface) then
{
	_myaction = ["AdvLog_TearDown", "Tear Down at Cursor","\r3fAdvLog\data\drill_mini.paa",{[] call AdvLog_fnc_deleteFactoryObj;},{[] call AdvLog_fnc_hasTools},{}] call ace_interact_menu_fnc_createAction;

	[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToObject;


}*/
