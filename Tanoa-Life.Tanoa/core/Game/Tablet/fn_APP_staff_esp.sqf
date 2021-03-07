/*
	Tanoa-Life RPG
	Code written by Dieter
*/
private["_config"];

_config = ("getText(_x >> 'uid') isEqualTo (getPlayerUID player)" configClasses (missionConfigFile >> "ADENIS_STAFF" >> "members")) select 0;
if (isNil "_config") exitWith {};
if (g_firstCombatActive) exitWith {};

g_staff_esp = true;

while {g_staff_esp && !g_firstCombatActive} do
{
	_eventHandler = addMissionEventHandler ["Draw3D",

	{
		{
			if (!(isNull _x) && (isPlayer _x) && (_x != player) && ((_x getVariable ["realname", ""]) != "") && ((player distance _x) <= 100)) then
			{
				drawIcon3D [
					"",
					[side _x, false] call BIS_fnc_sideColor,
					_x modelToWorld [0, 0.1, 2.1],
					0,
					0,
					0,
					_x getVariable "realname",
					2,
					0.04,
					"PuristaMedium",
					"center",
					false
				];
			};
		} forEach allPlayers;
	}];

	_currentPlayerCount = count allPlayers;
	waitUntil {((_currentPlayerCount != (count allPlayers)) || !g_staff_esp)};

	removeMissionEventHandler ["Draw3D", _eventHandler];

	uiSleep 1;
};

g_staff_markers = false;
