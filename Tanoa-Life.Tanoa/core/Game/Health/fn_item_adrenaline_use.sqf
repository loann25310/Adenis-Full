/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 3, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide"] call AdenisClient_fnc_error;
};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AdenisClient_fnc_error;
};

if (!("SkylineItems_Adrenaline" in (magazines player))) exitWith {
	["Vous n'avez pas d'adrenaline."] call AdenisClient_fnc_error;
};

g_action_inUse = true;

player playAction "medic";
sleep 2;

if (!("SkylineItems_Adrenaline" in (magazines player))) exitWith {
	["Vous n'avez pas d'adrenaline.'"] call AdenisClient_fnc_error;
};

player removeMagazine "SkylineItems_Adrenaline";
if (_target isEqualTo player) then {
	[] call AdenisClient_fnc_item_adrenaline_apply;
} else {
	[] remoteExecCall ["AdenisClient_fnc_item_adrenaline_apply", _target];
};

g_action_inUse = false;
