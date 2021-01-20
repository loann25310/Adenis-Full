/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

if ((goggles _target) isEqualTo "G_Bandanna_blk") then
{
	if (["G_Bandanna_blk", true] call AdenisClient_fnc_handleItem) then
	{
		player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
		_target remoteExec ["removeGoggles", _target];
	} else {
		["Vous n'avez pas assez de place dans votre inventaire."] call AdenisClient_fnc_error;
	};
} else {
	["La cible n'est pas bâillonnée."] call AdenisClient_fnc_error;
};
