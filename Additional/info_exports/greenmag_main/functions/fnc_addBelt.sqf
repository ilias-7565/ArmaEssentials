#include "script_component.hpp"
/*
 * Author: [W] Miller
 * add a Belt to the Fallback array if it is not supported - call on Server!
 *
 * Arguments:
 * 0: Array of classnames <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [["rhsusf_100Rnd_762x51","rhsusf_100Rnd_556x45_M200_soft_pouch"]] call greenmag_main_fnc_addBelt;
 *
 * Public: [Yes]
 */
params ["_beltsToAdd"];

GVAR(FallbackBelts) append _beltsToAdd;
publicVariable QGVAR(FallbackBelts);
