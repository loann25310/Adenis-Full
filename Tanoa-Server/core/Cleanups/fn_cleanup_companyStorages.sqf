/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_targets","_delete"];
_targets =  [_this, 0, [], [[]]] call BIS_fnc_param;
_delete =  [_this, 1, true, [true]] call BIS_fnc_param;

if (_targets isEqualTo []) then
{
	_targets = gServer_companies;
};

{
	_storage = _x getVariable ["company_storage_out", objNull];
	if (!(isNull _storage)) then
	{
		_x setVariable ["company_inv_virtual", (_storage getVariable ["Trunk", []]), true];
		_x setVariable ["company_inv_arma", ([getWeaponCargo _storage, getMagazineCargo _storage, getItemCargo _storage, getBackpackCargo _storage]), true];
		if (_delete) then {
			deleteVehicle _storage;
		};
	};
} forEach _targets;
