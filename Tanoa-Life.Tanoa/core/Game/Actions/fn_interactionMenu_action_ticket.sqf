/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private "_target";
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};

g_interaction_target = _target;
createDialog "RscDisplayPlayerTicket";

while {!(isNull (findDisplay 17000))} do
{
	if (isNull _target) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>Cible invalide."] call AdenisClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["is_coma", false]) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>La cible est dans le coma."] call AdenisClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["is_coma", false]) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>Vous êtes dans le coma."] call AdenisClient_fnc_info;
		closeDialog 0;
	};
	if ((player distance _target) > ((((boundingBox _target) select 1) select 0) + 2.5)) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>Vous êtes trop loin de la cible."] call AdenisClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["restrained", false]) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>Vous êtes menotté."] call AdenisClient_fnc_info;
		closeDialog 0;
	};
	if (player getVariable ["surrender", false]) exitWith
	{
		["Demande de paiement <t color='#FFBF00'>interrompue</t>.<br/>Vous avez les mains sur la tête."] call AdenisClient_fnc_info;
		closeDialog 0;
	};

	uiSleep 0.5;
};
