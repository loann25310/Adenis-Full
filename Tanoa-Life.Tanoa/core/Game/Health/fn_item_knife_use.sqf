/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_unit";
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if ([
	format
	[
		"Vous êtes sur le point d'envoyer la personne en soin intensif.<br/><br/>Tout manquement au règlement sera <t color='#FF4000'>sévèrement</t> puni.",
		player getVariable "realname"
	],
	"Validation",
	"Continuer",
	"Annuler"
] call BIS_fnc_guiMessage) then {
	if (isNull _unit) exitWith {
		["Cible invalide."] call AdenisClient_fnc_error;
	};

	if ((player distance _unit) > 3) exitWith {
		["Vous êtes trop loin."] call AdenisClient_fnc_error;
	};

	if (g_action_inUse) exitWith {
		["Vous êtes déjà en train d'effectuer une action."] call AdenisClient_fnc_error;
	};

	if (!("SkylineItems_Couteau" in (magazines player))) exitWith {
		["Vous n'avez pas de couteau."] call AdenisClient_fnc_error;
	};

	if (g_firstCombatActive) exitWith {
		["Vous ne pouvez pas utiliser votre couteau alors que vous êtes en combat."] call AdenisClient_fnc_error;
	};

	if (_unit getVariable["is_coma", false]) then
	{
		if (["Utilisation du couteau", 8, _unit, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AdenisClient_fnc_showProgress) then
		{
			if ("SkylineItems_Couteau" in (magazines player)) then
			{
				if (_unit getVariable["is_coma", false]) then
				{
					[player, _unit] remoteExecCall ["AdenisServer_fnc_logDeath", 2];
					[player] remoteExecCall ["AdenisClient_fnc_item_knife_apply", _unit];
				} else {
					["La personne n'est pas dans le coma."] call AdenisClient_fnc_error;
				};
			} else {
				["Vous n'avez pas de couteau."] call AdenisClient_fnc_error;
			};
		};
	} else {
		["La cible n'est pas dans le coma."] call AdenisClient_fnc_error;
	};
};
