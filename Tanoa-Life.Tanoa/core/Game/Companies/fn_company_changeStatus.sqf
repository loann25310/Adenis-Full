/*
	Tanoa-Life RPG
	Code written by Loann
*/
private["_object","_info","_marker","_status"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
if (_object isEqualTo objNull) exitWith {};

_info = _object getVariable ["company_info", []];
if (count _info == 0) exitWith {};

_marker = format ["Marker_Entreprise_%1", _info select 3];
_status = _object getVariable ["status_entreprise", false];

_status = !_status;

if (_status) then {
	_marker setMarkerColor "ColorGreen";
} else {
	_marker setMarkerColor "ColorWhite";
};

_object setVariable ["status_entreprise", _status, true];