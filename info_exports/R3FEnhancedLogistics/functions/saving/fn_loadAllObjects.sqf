private _dataArray = profileNamespace getVariable ["AdvLog_" + missionName, false];

if (_dataArray != false) then
{

	{
		private _object = [_x] call AdvLog_fnc_loadObject;

		if (!(isNull _object)) then
		{
			_object setVariable ["R3F_LOG_CF_depuis_factory", true, true];
		};
	}
	forEach _dataArray;
};

_dataArray = profileNamespace getVariable ["AdvLog_Extra_" + missionName, false];

if (_dataArray != false) then
{

	{
		private _object = [_x] call AdvLog_fnc_loadObject;

		if (!(isNull _object)) then
		{
			_object setVariable ["AdvLog_Save", true, true];
		};
	}
	forEach _dataArray;
};