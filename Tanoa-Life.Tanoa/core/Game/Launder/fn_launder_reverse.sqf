/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_money", "_receive", "_action"];
_money = ["illegal_money"] call AdenisClient_fnc_itemCount;

if (_money isEqualTo 0) exitWith {
	["Vous n'avez pas d'argent sale."] call AdenisClient_fnc_error;
};

_receive = round(_money * 0.5);
_action =
[
	format
	[
		"Vous avez <t color='#8cff9b'>%1</t>$ d'argent sale.<br/>Transférer l'argent à la banque permettra de débloquer <t color='#8cff9b'>%2</t>$ dans le compte de votre faction.",
		[_money] call AdenisClient_fnc_numberText,
		[_receive] call AdenisClient_fnc_numberText
	],
	"Transfert d'argent sale",
	"Valider",
	"Annuler"
] call BIS_fnc_guiMessage;
if (_action) then
{
	closeDialog 0;
	if ([false, "illegal_money", _money] call AdenisClient_fnc_handleInv) then
	{
		[format["<t color='#8cff9b'>%1</t>$ ont été transféré sur le compte de votre faction."], "buy"] call AdenisClient_fnc_info;
		[playerSide, true, _receive, (getPlayerUID player)] remoteExecCall ["AdenisServer_fnc_factionBankHandle", 2];
	} else {
		["Impossible de trouver l'argent sale dans votre inventaire."] call AdenisClient_fnc_error;
	};
};
