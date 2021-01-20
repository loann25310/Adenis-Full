/*
	Tanoa-Life RPG
	Code written by Loann
*/
private["_display","_info","_index","_control"];

if (!(isNil "gServer_soonReboot")) exitWith
{
	["<t align='center'>Veuillez attendre le <t color='#B40404'>redémarrage</t> du serveur pour échanger un véhicule."] call AdenisClient_fnc_error;
	closeDialog 0;
};

_display = findDisplay 16300;
_control = _display displayCtrl 16303;

_index = lbCurSel _control;
_finded = false;
_plate = parseNumber (_control lbData _index);
_vehicle = objNull;
{
	_tmp = _x getVariable ["info", []];

	if(count _tmp > 0) then {
		if (_tmp select 2 isEqualTo _plate) then {
			_finded = true;
			_vehicle = _x;
		};
	};
} forEach vehicles;

if (!_finded) exitWith {
	["<t color='#FF0000'>ERREUR</t>"] call AdenisClient_fnc_error;
	closeDialog 0;
};
closeDialog 0;
_info = _vehicle getVariable "info";


_vehicle setVariable ["info", [(getPlayerUID g_interaction_target), (g_interaction_target getVariable ["realname", profileName]), (_info select 2), (_info select 3), (_info select 4)], true];
_index = g_vehicles find _vehicle;
g_vehicles deleteAt _index;

[_vehicle] remoteExecCall ["AdenisClient_fnc_changeKey_recive", g_interaction_target];
["Vous avez légué vos clefs"] call AdenisClient_fnc_info;
[_plate, (getPlayerUID g_interaction_target), str (side g_interaction_target)] remoteExecCall ["AdenisServer_fnc_vehicle_update_owner", 2];