/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_player", "_sel"];

_sel = lbCurSel 8732;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de civil."] call AdenisClient_fnc_error;
};

_player = call compile (lbData[8732, _sel]);
if (isNil "_player") exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};
if (isNull _player) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

[player] remoteExec ["AdenisClient_fnc_APP_faction_leader_office_invitePropose", _player];

[
	format
	[
		"Vous avez proposé à %1 de rejoindre <t color='#01DF3A'>%2</t>",
		_player getVariable "realname",
		[playerSide] call AdenisClient_fnc_sideToStr
	]
] call AdenisClient_fnc_info;
