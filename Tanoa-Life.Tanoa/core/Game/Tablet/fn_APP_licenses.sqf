/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_display", "_list"];

disableSerialization;
_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8600;
lbClear _list;
{
	_list lbAdd ([_x] call AdenisClient_fnc_licenseGetName);
} forEach ([] call AdenisClient_fnc_getLicenses);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucune";
};

_list lbSetCurSel -1;
