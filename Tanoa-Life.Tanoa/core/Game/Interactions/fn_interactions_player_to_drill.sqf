/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

[
	_target,
	"player_to_drill",
	[
		[
			"power",
			"Allumer",
			"[g_interaction_target] spawn AdenisClient_fnc_drill_activate;",
			"!(g_interaction_target getVariable ['active',false])"
		],
		[
			"power",
			"Eteindre",
			"[g_interaction_target] call AdenisClient_fnc_drill_desactivate;",
			"(g_interaction_target getVariable ['active',false])"
		],
		[
			"take",
			"Récupérer",
			"[g_interaction_target] spawn AdenisClient_fnc_drill_take;",
			"!(g_interaction_target getVariable ['active',false])"
		]
	],
	"Foreuse",
	"Alysia_Client_Texture\Data\interactions\background.jpg",
	true,
	false
] spawn AdenisClient_fnc_interactions_create;
