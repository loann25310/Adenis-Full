/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_object";
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

g_interaction_target = _object;

createDialog "RscDisplayBasicLaunder";

((findDisplay 72000) displayCtrl 72001) ctrlSetText ([["illegal_money"] call AdenisClient_fnc_itemCount] call AdenisClient_fnc_powerRemove);
