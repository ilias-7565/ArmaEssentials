private ["_dataArrayFactory", "_dataArrayExtra"];

_dataArrayFactory = [];
_dataArrayExtra = [];

{
	private["_fromFactory", "_type", "_position", "_dir"];

	_fromFactory = _x getVariable["R3F_Created", false];
	
	if (_fromFactory) then
	{
		private ["_array"];
		_array = [] call AdvLog_fnc_saveObjectFormat;
		
		if (_array != false) then
		{
		
			_dataArrayFactory pushBack _array;
		};
	}
	else
	{
		private["_fromExtra"];
		
		_fromExtra = _x getVariable["AdvLog_Save", false];
		
		if (_fromExtra != false) then
		{
			private _array = [] call AdvLog_fnc_saveObjectFormat;
		
			if (_array != false) then
			{
			
				_dataArrayExtra pushBack _array;
			};
		};
	};
	
} forEach entities [[], ["Logic", "Man"], true];;

profileNamespace setVariable ["AdvLog_" + missionName, _dataArrayFactory, false];
profileNamespace setVariable ["AdvLog_Extra_" + missionName, _dataArrayExtra, false];
saveProfileNamespace;