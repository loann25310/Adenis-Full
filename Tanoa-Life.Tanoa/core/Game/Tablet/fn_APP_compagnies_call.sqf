/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_handle", "_number", "_index"];

if (!([] call AdenisClient_fnc_hasPhone)) exitWith {
	["Vous n'avez pas de téléphone."] call AdenisClient_fnc_error;
};

_index = lbCurSel 13009;
if ((_index isEqualTo -1) || ((lbText[13009, _index]) isEqualTo "Aucun")) exitWith {
	["Vous n'avez pas sélectionné de numéro à appeler."] call AdenisClient_fnc_error;
};

_number = lbData[13009, _index];
if (_number isEqualTo "") exitWith {
	["Numéro à appeler inconnu."] call AdenisClient_fnc_error;
};

_handle = ["PHONE_CALL"] spawn AdenisClient_fnc_tabletApp;
waitUntil {(scriptDone _handle)};

uiNamespace setVariable ["phone_call_number", _number];
((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 8920) ctrlSetStructuredText parseText format["<t size='2.5' align='center'>%1</t>", _number];
