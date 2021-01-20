/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_obj", "_price"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

if (!(['company_money_tranfer'] call AdenisClient_fnc_hasLicense)) exitWith {
	["Vous n'avez pas le licence requise pour effectuer cette action."] call AdenisClient_fnc_error;
};

if (isNull g_company) exitWith {
	["Vous n'avez pas d'entreprise."] call AdenisClient_fnc_error;
};

if (_target getVariable ["inUse", false]) exitWith {
	["Quelqu'un est en train d'utiliser le distributeur."] call AdenisClient_fnc_error;
};

_obj = player getVariable ["wallet_obj", objNull];
if (!isNull(_obj)) exitWith {
	["Vous avez déjà une valise de billets."] call AdenisClient_fnc_error;
};

if (getNumber(missionConfigFile >> "ADENIS_ATM" >> typeOf(_target) >> "company_money_get") isEqualTo 0) exitWith {
	["Vous ne pouvez pas récupérer de valise de billets à partir de ce distributeur."] call AdenisClient_fnc_error;
};

_price = 50000;
if ((g_company getVariable ["company_bank", 0]) < _price) exitWith {
	["Solde du compte de l'entreprise insuffisant."] call AdenisClient_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AdenisClient_fnc_error;
};

g_action_inUse = true;
playSound "buy";
[g_company, false, _price, (player getVariable "realname"), "Activité professionnelle"] remoteExec ["AdenisServer_fnc_company_bank_handle", 2];

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
uiSleep(random(2) + 0.50);

[] spawn AdenisClient_fnc_moneyBagHandle;
g_action_inUse = false;
