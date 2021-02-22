/*
	Tanoa-Life RPG
	Code written by Loann
*/
private ["_target","_dialog","_list","_paints","_index"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

closeDialog 0;
if (_target isEqualTo objNull) exitWith {};
if (_target getVariable ["painting", false]) exitWith {
	["La cabine de peinture est déjà en cours d'utilisation !"] call AlysiaClient_fnc_error;
};

g_interaction_target = _target;

createDialog "RscDisplayCabinPeinture";

_dialog = findDisplay 15600;

_list = _dialog displayCtrl 15601;
_paints = "true" configClasses (missionConfigFile >> "ADENIS_PAINTS" >> "Colors");

{
	_index = _list lbAdd (getText (_x >> "displayName"));
	_list lbSetData [_index, configName _x];
} forEach _paints;

_list lbSetCurSel 0;