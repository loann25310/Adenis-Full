/*
	Tanoa-Life RPG
	Code written by Lyeed
	Edited by Dieter
*/
private "_target";
_target = [_this, 3, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};

if (!("Adenis_Compresse" in (magazines player))) exitWith {
	["Vous n'avez pas de compresse."] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

player playAction "medic";
sleep 2;

if (!("Adenis_Compresse" in (magazines player))) exitWith {
	["Vous n'avez pas de compresse.'"] call AlysiaClient_fnc_error;
};

player removeMagazine "Adenis_Compresse";
if (_target isEqualTo player) then {
	[] call AlysiaClient_fnc_item_compresse_apply;
} else {
	[] remoteExecCall ["AlysiaClient_fnc_item_compresse_apply", _target];
};

g_action_inUse = false;
