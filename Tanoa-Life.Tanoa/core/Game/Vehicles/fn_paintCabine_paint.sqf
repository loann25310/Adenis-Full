/*
	Tanoa-Life RPG
	Code written by Loann
*/
private ["_target","_dialog","_list","_info","_config","_require","_item"];

if (g_interaction_target isEqualTo objNull) exitWith {};
_dialog = findDisplay 15600;

if (isNull _dialog) exitWith {};

_list = _dialog displayCtrl 15601;
_info = _dialog displayCtrl 15602;
_config = missionConfigFile >> "ADENIS_PAINTS" >> "Colors" >> (_list lbData (lbCurSel _list));

if (g_cash < (getNumber(_config >> "price"))) exitWith {
	["Vous n'avez pas assez d'argent sur vous."] call AlysiaClient_fnc_error;
};
closeDialog 0;

if (!isNull (_config >> "require" >> "items_virtual")) then {
	_require = getArray(_config >> "require" >> "items_virtual");
	{
		_item = _x # 0;
		if (!([false, _item, _x # 1] call AlysiaClient_fnc_handleInv)) exitWith {
			["Vous n'avez pas tous les items nécessaires !"] call AlysiaClient_fnc_error;
		};
	} forEach _require;
};

playSound "buy";
[false, getNumber(_config >> "price")] call AlysiaClient_fnc_handleCash;


[player, g_interaction_target, (_list lbData (lbCurSel _list))] remoteExec ["AlysiaServer_fnc_paintCabine_paint", 2];
