/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_object";
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

_object attachTo [player, getArray(missionConfigFile >> "ADENIS_DYN_OBJECTS" >> typeOf(_object) >> "attachTo")];
