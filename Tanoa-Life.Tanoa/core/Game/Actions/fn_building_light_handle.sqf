/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

if (isNull (_target getVariable ["lightSource", ObjNull])) then
{
	["Lumières <t color='#FF8000'>ON</t></t>"] call AdenisClient_fnc_info;
	[_target, true] remoteExecCall ["AdenisClient_fnc_building_light_update", -2];
} else {
	["Lumières <t color='#FF8000'>OFF</t></t>"] call AdenisClient_fnc_info;
	[_target, false] remoteExecCall ["AdenisClient_fnc_building_light_update", -2];
};
