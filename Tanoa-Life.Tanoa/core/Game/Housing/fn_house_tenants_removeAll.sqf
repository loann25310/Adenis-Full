/*
	Tanoa-Life RPG
	Code written by Loann
*/
private["_houses", "_uid", "_side"];
_house = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if(_house isEqualTo objNull) exitWith {};

if (!([false, "serrure", 1] call AlysiaClient_fnc_handleInv)) exitWith {
	["Vous n'avez pas de nouvelle serrure sur vous."] call AlysiaClient_fnc_error;
};

_house setVariable ["house_tenants", [], true];

[_house, {
	if (_this in g_houses) then {
		private["_tmp"];
		_tmp = [];
		{
			if (!(_x isEqualTo _this)) then {
				_tmp pushBack _x;
			}
		} forEach g_houses;
		g_houses = _tmp;
	};
}] remoteExec ["call", -2];