/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_item", "_ret"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {0};

_ret = 0;
if (isClass(missionConfigFile >> "ADENIS_ITEMS" >> _item)) then
{
	if (isClass(missionConfigFile >> "ADENIS_ITEMS" >> _item >> "market")) then {
		_ret = ([_item] call AlysiaClient_fnc_market_getPrice) * 2;
	} else {
		_ret = getNumber(missionConfigFile >> "ADENIS_ITEMS" >> _item >> "price_buy");
		if (_ret isEqualTo 0) then {systemChat format["[ERROR] Item price %1 not defined in ADENIS_ITEMS or isEqualTo 0", _item]};
	};
} else {
	systemChat format["[ERROR] Item %1 not defined in ADENIS_ITEMS", _item];
};

_ret;
