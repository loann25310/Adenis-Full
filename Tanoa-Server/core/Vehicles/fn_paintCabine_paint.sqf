/*
	Tanoa-Life RPG
	Code written by Loann
*/
private ["_sender","_target","_paint","_config","_color","_plate"];
_sender = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_target = [_this, 1, objNull, [objNull]] call BIS_fnc_param;
_paint = [_this, 2, "", [""]] call BIS_fnc_param;

diag_log _sender;
diag_log _target;
diag_log _paint;

if (_sender isEqualTo objNull) exitWith {};
if (_target isEqualTo objNull) exitWith {};
if (_paint isEqualTo "") exitWith {};
if (_target getVariable ["painting", false]) exitWith {
	["La cabine de peinture est déjà en cours d'utilisation !"] remoteExec ["AlysiaClient_fnc_error", _sender];
};

_config = missionConfigFile >> "ADENIS_PAINTS" >> "Colors" >> _paint;
_target setVariable ["painting", true, true];

[_config,_target] spawn {
	private ["_wait","_each","_target","_config"];
	_config = _this # 0;
	_target = _this # 1;
	_each = floor (getNumber(_config >> "time") / 6.327);
	for "_i" from 0 to _each do {
		if(_target isEqualTo objNull)exitWith{};
		[_target, "spraypaint", 70] call AlysiaClient_fnc_globalSay3d;
		sleep 6.327;
	};
};

// Lock
_target enableSimulationGlobal false;
[_target, 2] remoteExecCall ["lock", _target, false];

[format ["La cabine de peinture commence la peinture du vehicle. La peinture sera terminé dans %1 secondes.", getNumber(_config >> "time")]] remoteExec ["AlysiaClient_fnc_info", _sender];

sleep (getNumber(_config >> "time"));


if (_target isEqualTo objNull) exitWith {
	["Le véhicule n'existe plus !"] remoteExec ["AlysiaClient_fnc_error", _sender];
};

if (isArray(_config >> "color")) then {
	_color = getArray(_config >> "color");
	_target setObjectTextureGlobal [0,
		format [
			"#(rgb,8,8,3)color(%1,%2,%3,1)",
			(_color # 0) / 255,
			(_color # 1) / 255,
			(_color # 2) / 255
		]
	];
} else {
	_target setObjectTextureGlobal [0, getText(_config >> "color")];
};

if (getNumber(_config >> "saveDB") isEqualTo 1) then {
	_plate = (_target getVariable ["info", []]) # 2;
	[format["UPDATE vehicles SET paint='%1' WHERE plate='%2'", _paint, _plate], 1] call ExtDB3_fnc_async;
};

// Unlock
_target enableSimulationGlobal true;
[_target, 0] remoteExecCall ["lock", _target, false];

_target setVariable ["painting", false, true];
["La cabine de peinture a terminé de repeindre le véhicule."] remoteExec ["AlysiaClient_fnc_info", _sender];