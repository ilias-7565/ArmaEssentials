#include "script_component.hpp"
/*
Name: fn_createUnpack.sqf
Author: [W] Miller
Use: creates Children for Greenmag functions

Parameter(s):
	0:
		VEHICLE - player

	1:
		UNIT - player

	2:
		ARRAY - params

Returns: BOOL
*/

params ["_target", "_player", "_params"];

//get all ammopacks
private _ammopacks = [];

{
	if (_X isKindOf [QEGVAR(core,box), configFile >> "CfgWeapons"]) then {_ammopacks pushBackUnique _X};//each pack only once in the array
} forEach (items _player);

// Add children to the action
//set some vars to empty arrays
private _GMActions = [];

//Unpack
{
	private _childStatement =
	{
		params ["_target", "_player", "_params"];
		[_player, _params] call FUNC(unpack); //call unpack FNC
	};

	private _action =
	[
		format [
			"%1_%2",
			"unpackChild",
			(count _GMActions)
		],//name the action,
		format [
			" %1: %2",
			LLSTRING(unpack_name),
			(getText (configFile >> "CfgWeapons" >> _X >> "displayName"))
		],//set action string shown to player
		(getText (configFile >> "CfgWeapons" >> _X >> "picture")),//set the ammopack to unpack as icon
		_childStatement,
		{true},
		{},
		[_X]
	] call ace_interact_menu_fnc_createAction;
	_GMActions pushBack [_action, [], _player]; // New action, it's children, and the action's target
} forEach _ammopacks; //create action for each type of ammopack in player's inventory

//return children
_GMActions
