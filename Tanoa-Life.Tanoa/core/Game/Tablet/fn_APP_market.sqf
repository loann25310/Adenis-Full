/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_display", "_list", "_event_ctrl", "_res","_onlyEntreprise"];
_onlyEntreprise = [_this, 0, false, [false]] call BIS_fnc_param;

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8803;
lbClear _list;

if (_onlyEntreprise) then {
	{
		_item = configName _x;
		_index = _list lbAdd ([_item] call AlysiaClient_fnc_itemGetName);
		_list lbSetData [_index, _item];
		_list lbSetPicture [_index, ([_item] call AlysiaClient_fnc_itemGetImage)];
	} foreach ("isClass(_x >> 'market') && (getNumber(_x >> 'entrepriseItem') isEqualTo 1)" configClasses (missionConfigFile >> "ADENIS_ITEMS"));
} else {
	{
		_item = configName _x;
		_index = _list lbAdd ([_item] call AlysiaClient_fnc_itemGetName);
		_list lbSetData [_index, _item];
		_list lbSetPicture [_index, ([_item] call AlysiaClient_fnc_itemGetImage)];
	} foreach ("isClass(_x >> 'market') && (getNumber(_x >> 'entrepriseItem') isEqualTo 0)" configClasses (missionConfigFile >> "ADENIS_ITEMS"));
};
lbSort [_list, "ASC"];

_list lbSetCurSel (missionNamespace getVariable ["market_sync_id", 0]);

_event_ctrl = _display displayCtrl 8810;

while {(g_app isEqualTo "MARKET") || (g_app isEqualTo "MARKET_ENTREPRISE")} do
{
	_res = gServer_market_event_next - serverTime;
	if (_res <= 0) then {_res = 0};

	_event_ctrl ctrlSetStructuredText parseText format
	[
		"<t align='center'>%1</t>",
		if (_res > 0) then {[_res, "M:SS"] call CBA_fnc_formatElapsedTime} else {"En cours"}
	];

	uiSleep 1;
};
