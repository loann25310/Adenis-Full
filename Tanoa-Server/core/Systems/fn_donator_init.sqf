/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
diag_log "[DONATORS] Loading ...";

_donators = ["SELECT uid,LEVEL_donator FROM players WHERE LEVEL_donator != '0';", 2] call ExtDB3_fnc_async;
_donatorsList = [];

{
	_donatorsList pushBack (_x select 0);
	missionNamespace setVariable [format ["donator_level_%1", _x select 0], _x select 1, true];
} forEach _donators;

missionNamespace setVariable ["donators_list", _donatorsList, true];

diag_log "[DONATORS] Ready";
