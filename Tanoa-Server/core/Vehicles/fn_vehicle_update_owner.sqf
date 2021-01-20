/*
	Tanoa-Life RPG
	Code written by Loann
*/
private["_plate", "_owner","_side"];
_plate = [_this, 0, -1, [-1]] call BIS_fnc_param;
_owner = [_this, 1, "", [""]] call BIS_fnc_param;
_side = [_this, 2, "", [""]] call BIS_fnc_param;

if ((_plate isEqualTo -1) || (_name isEqualTo "")) exitWith {};

[format["UPDATE vehicles SET pid='%1', side='%3' WHERE plate='%2'", _owner, _plate, _side], 1] call ExtDB3_fnc_async;
