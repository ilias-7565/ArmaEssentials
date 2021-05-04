/*
Modified by Sean Crowe
please see orginal work @ forums.bistudio.com/topic/188980-advanced-towing

To get a full list of changes please contant me on the biforums under the username S.Crowe

The MIT License (MIT)

Copyright (c) 2016 Seth Duda

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

params ["_vehicle"];
	private ["_centerOfMass","_bbr","_p1","_p2","_rearCorner","_rearCorner2","_frontCorner","_frontCorner2"];
	private ["_maxWidth","_widthOffset","_maxLength","_lengthOffset","_widthFactor","_lengthFactor"];

	// Correct width and length factor for air
	_widthFactor = 0.75;
	_lengthFactor = 0.75;
	if(_vehicle isKindOf "Air") then {
		_widthFactor = 0.3;
	};
	if(_vehicle isKindOf "Helicopter") then {
		_widthFactor = 0.2;
		_lengthFactor = 0.45;
	};

	_centerOfMass = getCenterOfMass _vehicle;
	_bbr = boundingBoxReal _vehicle;
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_widthOffset = ((_maxWidth / 2) - abs ( _centerOfMass select 0 )) * _widthFactor;
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_lengthOffset = ((_maxLength / 2) - abs (_centerOfMass select 1 )) * _lengthFactor;
	_rearCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
	_rearCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) - _lengthOffset, _centerOfMass select 2];
	_frontCorner = [(_centerOfMass select 0) + _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];
	_frontCorner2 = [(_centerOfMass select 0) - _widthOffset, (_centerOfMass select 1) + _lengthOffset, _centerOfMass select 2];

	if(missionNamespace getVariable ["SA_TOW_DEBUG_ENABLED", false]) then {
		if(isNil "sa_tow_debug_arrow_1") then {
			sa_tow_debug_arrow_1 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
			sa_tow_debug_arrow_2 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
			sa_tow_debug_arrow_3 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
			sa_tow_debug_arrow_4 = "Sign_Arrow_F" createVehicleLocal [0,0,0];
		};
		sa_tow_debug_arrow_1 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _rearCorner);
		sa_tow_debug_arrow_2 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _rearCorner2);
		sa_tow_debug_arrow_3 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _frontCorner);
		sa_tow_debug_arrow_4 setPosASL  AGLtoASL (_vehicle modelToWorldVisual _frontCorner2);
	};

	[_rearCorner,_rearCorner2,_frontCorner,_frontCorner2];