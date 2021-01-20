/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_display", "_sel", "_price", "_marker"];

disableSerialization;
_display = findDisplay 21000;
if (isNull _display) exitWith {};

_sel = lbCurSel 21001;
if (_sel isEqualTo -1) exitWith {};

_marker = lbData[21001, _sel];
if (_marker isEqualTo "") exitWith {};

_price = lbValue[21001, _sel];
if (g_cash < _price) exitWith {
	["Vous n'avez pas assez d'argent"] call AdenisClient_fnc_error;
};

[false, _price] call AdenisClient_fnc_handleCash;
[format["Vous avez acheté les coordonnées de <t color='#74DF00'>%1</t> pour <t color='#8cff9b'>%2</t>$", (markerText _marker), ([_price] call AdenisClient_fnc_numberText)], "buy"] call AdenisClient_fnc_info;
[_marker] call AdenisClient_fnc_dynamicMarkers_reveal;
[] call AdenisClient_fnc_shop_dynamicMarkers_update_list;
