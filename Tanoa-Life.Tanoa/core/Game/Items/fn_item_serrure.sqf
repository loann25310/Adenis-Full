/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_owner_uid", "_owner_player", "_check"];

if ((vehicle player) != player) exitWith {["Vous devez être à pied."] call AdenisClient_fnc_info};

_target = cursorObject;
_check = switch (true) do
{
	case (isClass(missionConfigFile >> "ADENIS_HOUSES" >> typeOf(_target))): {true};
	default {false};
};
if (!_check) exitWith {
	["Vous n'êtes près d'aucun bâtiment."] call AdenisClient_fnc_error;
};

if ((player distance _target) > 30) exitWith {
	["Vous êtes trop loin du bâtiment."] call AdenisClient_fnc_error;
};

if (!(["company_construction"] call AdenisClient_fnc_hasLicense)) exitWith {
	["Vous ne savez pas utiliser cet objet"] call AdenisClient_fnc_error;
};

_owner_uid = (_target getVariable "house_owner") select 0;
if (isNil "_owner_uid") exitWith {
	["Ce bâtiment n'appartient à personne."] call AdenisClient_fnc_error;
};

_owner_player = [_owner_uid] call AdenisClient_fnc_getPlayerFromUID;
if ((isNull _owner_player) || ((player distance _owner_player) > 10)) exitWith {
	["Le propriétaire a besoin d'être à moins de 10 mètres de son bâtiment pour que vous puissiez changer les serrures."] call AdenisClient_fnc_error;
};

if (!(["Changement de serrure", 10, objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AdenisClient_fnc_showProgress)) exitWith {};

if ([false, "serrure", 1] call AdenisClient_fnc_handleInv) then {
	[_target] call AdenisClient_fnc_house_menu_action_keys_change;
};
