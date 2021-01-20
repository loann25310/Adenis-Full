/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_object", "_display", "_reasons"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

g_interaction_target = _object;

createDialog "RscDisplayCompanyLaunder";

disableSerialization;
_display = findDisplay 70000;

(_display displayCtrl 70002) ctrlSetText ([["illegal_money"] call AdenisClient_fnc_itemCount] call AdenisClient_fnc_powerRemove);
(_display displayCtrl 70007) buttonSetAction "[g_interaction_target] spawn AdenisClient_fnc_company_launder_action;";

_reasons = _display displayCtrl 70001;
_reasons lbAdd "Demande de paiement";
_reasons lbAdd "Activité professionnelle";
_reasons lbSetCurSel 0;
