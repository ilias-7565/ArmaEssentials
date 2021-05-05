// This is the sqf that is responsible for the ALiVE Persistence. -Snakedoctor

if (R3F_LOG_mutex_local_lock) then
{
	hintC STR_R3F_LOG_mutex_action_en_cours;
}
else
{

	// Added by Crowe - make creating most costly objects take longer to place

					_object = R3F_LOG_player_moves_object;
					
					private _time = [] call AdvLog_fnc_buildTime;

					if (_time > 10) then
					{
								player setVariable ["R3F_animation", true];

								_handler = [{player playActionNow "MedicOther";}, 7, []] call CBA_fnc_addPerFrameHandler;

								[_time, [_handler],

									{
										if (!isNull(missionNamespace getVariable ["ALIVE_sys_logistics", objNull])) then
										{
												[ALIVE_sys_logistics,"updateObject",[R3F_LOG_player_moves_object]] call ALIVE_fnc_logistics;
										};
										R3F_LOG_player_moves_object = objNull;
										(_this select 0) call CBA_fnc_removePerFrameHandler;
										player switchMove "";
										player setVariable ["R3F_animation", false];

									},
									{
										(_this select 0) call CBA_fnc_removePerFrameHandler;
										player switchMove "";
										hint "Cancelled";
										player setVariable ["R3F_animation", false];
									}, format ["Building %1", getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "displayName")]] call ace_common_fnc_progressBar;

					}
					else
					{
						if (!isNull (missionNamespace getVariable ["ALIVE_sys_logistics", objNull])) then
						{
								[ALIVE_sys_logistics,"updateObject",[R3F_LOG_player_moves_object]] call ALIVE_fnc_logistics;
						};

						R3F_LOG_player_moves_object = objNull;
					};

					//Done player playActionNow "MedicOther";




};
