/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_app", "_idcs", "_handle"];
_app = toUpper([_this, 0, "", [""]] call BIS_fnc_param);

if (_app isEqualTo "") exitWith {};
if (g_CTRL_inUse) exitWith {};

g_CTRL_inUse = true;
_idcs = getArray(missionConfigFile >> "RscDisplayTablet" >> "controls" >> format["%1_IDCS", _app]);
_handle = [g_CTRL_shown, _idcs, _app, g_app] spawn AdenisClient_fnc_tabletAppAnimation;
waitUntil {scriptDone _handle};

g_app = _app;
g_CTRL_shown = _idcs;
switch (_app) do
{
	case "MAIN": {[] call AdenisClient_fnc_APP_main};
	case "SERVER": {[] spawn AdenisClient_fnc_APP_server};
	case "HELP": {[] call AdenisClient_fnc_APP_help};
	case "SETTINGS": {[] spawn AdenisClient_fnc_APP_settings};
	case "SOLDE": {[] call AdenisClient_fnc_APP_solde};
	case "SOLDE_BILLS": {[] call AdenisClient_fnc_APP_solde_bills};
	case "VEHICLES": {[] spawn AdenisClient_fnc_APP_vehicles};
	case "STORE": {[] call AdenisClient_fnc_APP_store};
	case "STORE_APPLICATIONS": {[] call AdenisClient_fnc_APP_store_applications};
	case "STORE_LICENSES": {[] call AdenisClient_fnc_APP_store_licenses};
	case "STORE_FORFAIT": {[] call AdenisClient_fnc_APP_store_forfait};
	case "PHONE_CATEGORY": {[] call AdenisClient_fnc_APP_phone};
	case "PHONE_CONTACTS": {[] call AdenisClient_fnc_APP_phone_contacts};
	case "PHONE_CALL": {[] call AdenisClient_fnc_APP_phone_call};
	case "PHONE_CALLING": {[] call AdenisClient_fnc_APP_phone_calling};
	case "PHONE_CALLRECEIVING": {[] call AdenisClient_fnc_APP_phone_callreceiving};
	case "PHONE_MESSAGES_READ": {[] call AdenisClient_fnc_APP_phone_messages_read};
	case "PHONE_MESSAGES_SEND": {[] call AdenisClient_fnc_APP_phone_messages_send};
	case "PHONE_SETTINGS": {[] spawn AdenisClient_fnc_APP_phone_settings};
	case "PHONE_BLACKLIST": {[] call AdenisClient_fnc_APP_phone_blacklist};
	case "LICENSES": {[] call AdenisClient_fnc_APP_licenses};
	case "FACTION": {[] call AdenisClient_fnc_APP_faction};
	case "MARKET": {[] spawn AdenisClient_fnc_APP_market};
	case "STAFF": {[] call AdenisClient_fnc_APP_staff};
	case "FUEL": {[] spawn AdenisClient_fnc_APP_fuel};
	case "ANNOUNCES_WRITE": {[] call AdenisClient_fnc_APP_announces_write};
	case "ANNOUNCES_SHOW": {[] call AdenisClient_fnc_APP_announces_show};
	case "GOV": {[] call AdenisClient_fnc_APP_gov};
	case "GOV_TAXES": {[] call AdenisClient_fnc_APP_gov_taxes};
	case "DAB": {[] spawn AdenisClient_fnc_APP_dab};
	case "ANNUAIRE": {[] call AdenisClient_fnc_APP_annuaire};
	case "COMPANY": {[g_company] spawn AdenisClient_fnc_APP_company};
	case "COMPAGNIES": {[] spawn AdenisClient_fnc_APP_compagnies};
	case "COMPAGNIES_INFOLIST": {[] call AdenisClient_fnc_APP_compagnies_infolist};
};

g_CTRL_inUse = false;
