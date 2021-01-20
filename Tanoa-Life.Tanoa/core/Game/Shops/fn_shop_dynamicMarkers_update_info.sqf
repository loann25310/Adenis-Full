/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_display", "_price", "_sel"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};
if ((_list lbText _sel) isEqualTo "Aucune") exitWith {};

disableSerialization;
_display = findDisplay 21000;
if (isNull _display) exitWith {};

_price = _list lbValue _sel;
(_display displayCtrl 21004) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#%2'>%1</t><t align='right'>$</t>",
	([_price] call AdenisClient_fnc_numberText),
	if (g_cash >= _price) then {"8cff9b"} else {"ff8c8c"}
];

if (g_cash < _price) then
{
	ctrlShow[21005, false];
	ctrlShow[21006, false];
	ctrlShow[21007, false];
	ctrlShow[21008, false];
	ctrlShow[21009, false];
} else {
	ctrlShow[21005, true];
	ctrlShow[21006, true];
	ctrlShow[21007, true];
	ctrlShow[21008, true];
	ctrlShow[21009, true];
};
