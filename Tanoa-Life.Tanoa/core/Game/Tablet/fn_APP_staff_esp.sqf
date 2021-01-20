/*
	Tanoa-Life RPG
	Code written by Dieter
*/
private["_config"];

_config = ("getText(_x >> 'uid') isEqualTo (getPlayerUID player)" configClasses (missionConfigFile >> "APOLIA_STAFF" >> "members")) select 0;
if (isNil "_config") exitWith {};

g_staff_esp = true;

while {g_staff_esp} do
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

private["_players", "_markers"];
_players = [];
_markers = [];
{
	if ((isPlayer _x) && (alive _x)) then {
		_players pushBack _x;
	};
} foreach (playableUnits);

{
	private["_marker"];
	_marker = createMarkerLocal [format["%1_admin_marker", (name _x)], (visiblePosition _x)];
	_marker setMarkerColorLocal ([side _x, true] call BIS_fnc_sideColor);
	_marker setMarkerShapeLocal "ICON";
	_marker setMarkerTypeLocal "Mil_dot";
	_marker setMarkerTextLocal format["%1", (_x getVariable["realname", (name _x)])];
	_markers pushBack [_marker, _x];
} forEach (_players);

g_staff_markers = false;
