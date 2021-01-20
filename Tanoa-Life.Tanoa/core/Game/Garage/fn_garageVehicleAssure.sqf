/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_index", "_data", "_vehicleInfo", "_price", "_sel"];

_sel = lbCurSel 2802;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule."] call AdenisClient_fnc_error;
};

_index = lbValue[2802, _sel];
if (_index isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de véhicule."] call AdenisClient_fnc_error;
};

_data = g_garage_vehicles select _index;
if ((_data select 2) isEqualTo 1) exitWith {
	["Ce véhicule est déjà assuré."] call AdenisClient_fnc_error;
};

_vehicleInfo = [_data select 0] call AdenisClient_fnc_fetchVehInfo;
if ((_vehicleInfo select 12) isEqualTo 0) exitWith {
	["Vous ne pouvez pas assurer ce type de véhicule."] call AdenisClient_fnc_error;
};

_price = _vehicleInfo select 18;
if (_price isEqualTo 0) exitWith {
	["Ce véhicule n'a pas de prix d'assurance."] call AdenisClient_fnc_error;
};
if (_price > g_atm) exitWith {
	[format["Il vous faut <t color='#ff8c8c'>%1$</t> pour assurer ce véhicule.", [_price] call AdenisClient_fnc_numberText]] call AdenisClient_fnc_error;
};

[(_data select 1), 1] remoteExec ["AdenisServer_fnc_vehicle_update_insurrance", 2];
[false, _price, format["Assurance véhicule (%1)", (_data select 5)]] call AdenisClient_fnc_handleATM;
[format["Vous avez assuré votre véhicule pour <t color='#8cff9b'>%1</t>$.", [_price] call AdenisClient_fnc_numberText], "buy"] call AdenisClient_fnc_info;
(g_garage_vehicles select _index) set [2, 1];

waitUntil
{
	closeDialog 0;
	!dialog
};

[g_garage_vehicles] call AdenisClient_fnc_garageOpen;
