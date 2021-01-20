/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_door"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

_door = [_target] call AdenisClient_fnc_nearestDoor;
if (_door isEqualTo 0) exitWith {
	["Vous n'êtes près d'aucune porte."] call AdenisClient_fnc_error;
};

[player, "knock", 8] call AdenisClient_fnc_globalSay3d;
