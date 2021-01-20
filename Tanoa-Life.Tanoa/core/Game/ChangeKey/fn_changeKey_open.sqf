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

if (count g_vehicles == 0) exitWith
{
	["Vous n'avez aucun véhicule de sorti."] call AdenisClient_fnc_error;
	closeDialog 0;
};

createDialog "RscDisplayChangeKey";

_display = findDisplay 16300;

_control = _display displayCtrl 16303;
lbClear _control;
{
	if (alive _x) then {
		_info = _x getVariable "info";
		if(_info select 0 isEqualTo getPlayerUID player) then {
			if (count _info >= 5) then {
				_index = _control lbAdd (_info select 4);
			} else {
				_index = _control lbAdd (getText (configFile >> "CfgVehicles" >> typeOf _x >> "displayName"));
			};
			_control lbSetData [_index, str (_info select 2)];
		};
	};
} forEach g_vehicles;

_control lbSetCurSel 0;