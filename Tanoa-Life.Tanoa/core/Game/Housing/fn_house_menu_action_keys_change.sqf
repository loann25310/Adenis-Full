/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_target setVariable ["house_tenants", [], true];
["<t color='#FF8000'>Serrures</t> changées."] call AdenisClient_fnc_info;
[_target] remoteExecCall ["AdenisClient_fnc_house_menu_action_keys_change_update", -2];
