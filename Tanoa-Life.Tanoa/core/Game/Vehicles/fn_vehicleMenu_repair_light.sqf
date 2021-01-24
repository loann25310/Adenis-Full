/*
	Tanoa-Life RPG
	Code written by J1Mi
*/
private["_target"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

_light = ["#light_r", "#light_l"];
_useItem = false;
_error = true;
_time = 8;
_tool = "dam_thom_phare";
if (_tool in (magazines player)) then {
	_useItem = true;
	_error = false;
};

_lightL = _target getHitPointDamage (_light select 0);
_lightR = _target getHitPointDamage (_light select 1);

if (_lightR == 0 || _lightL == 0) exitWith {
	["Vos lumières sont déjà réparé"] call AlysiaClient_fnc_error;
};

if ((_tool != "") && !(_tool in (magazines player))) exitWith {
	[format["Vous n'avez pas l'outil requis (<t color='#8cff9b'>%1</t>) pour effectuer cette réparation", "Phare"]] call AlysiaClient_fnc_error;
};

if (!(["Réparation des lumières", _time, _target, "", "InBaseMoves_repairVehicleKnl"] call AlysiaClient_fnc_showProgress)) exitWith {};

if (_useItem) then
{
	if (_tool in (magazines player)) then {
		player removeMagazine _tool;
	} else {
		_error = true;
		["Vous devez garder les pièces de rechange sur vous pendant la réparation"] call AlysiaClient_fnc_error;
	};
};


if (!_error) then {
	{_target setHitPointDamage [_x, 0];} forEach _light;
	["Vous avez réparé les lumières"] call AlysiaClient_fnc_info;
};