/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_target", "_door", "_state"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_lockpick = [_this, 1, false, [false]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

_door = [_target] call AdenisClient_fnc_nearestDoor;
if (_door isEqualTo 0) exitWith {
	["Vous n'êtes près d'aucune porte."] call AdenisClient_fnc_error;
};

_state = _target getVariable [format["bis_disabled_Door_%1", _door], 0];
if ((_state isEqualTo 0) && !_lockpick) then
{
	if ((_target animationPhase format["door_%1_rot", _door]) isEqualTo 0) then
	{
		_target setVariable [format["bis_disabled_Door_%1", _door], 1, true];
		systemChat "<MENU BATIMENT> Porte verrouillée";
	} else {
		["La porte doit être fermée pour pouvoir être vérrouillée."] call AdenisClient_fnc_error;
	};
} else {
	private "_action";
	if (_lockpick) then
	{
		if ("Alysia_Lockpick" in (magazines player)) then
		{
			_action = ["Crochetage de serrure", 6, _target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AdenisClient_fnc_showProgress;
			if (_action) then
			{
				if(_target getVariable ["alarmeOn", true]) then {
					_target setVariable ["alarmeOn", false, true];
					[format ["Urgent ! Une alarme a été déclenché en %1 !", mapGridPosition _target], "000000", true] remoteExecCall ["AdenisClient_fnc_phone_message_receive", west];
				};

				player removeMagazine "Alysia_Lockpick";
				if (random(100) <= 40) then {
					["Crochetage <t color='#3ADF00'>réussi</t> !<br/>La porte n'est maintenant plus vérrouillée."] call AdenisClient_fnc_info;
				} else {
					["Crochetage <t color='#FF0000'>raté</t> !"] call AdenisClient_fnc_info;
					_action = false;
				};
			};
		} else {
			["Vous n'avez pas de kit de crochetage."] call AdenisClient_fnc_error;
			_action = false;
		};
	} else {
		_action = true;
	};

	if (_action) then
	{
		_target setVariable [format["bis_disabled_Door_%1", _door], 0, true];
		systemChat "<MENU BATIMENT> Porte déverrouillée";
	};
};
