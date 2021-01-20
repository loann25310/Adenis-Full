/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_sel", "_price", "_item"];

_sel = lbCurSel 38402;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné d'objet à acheter."] call AdenisClient_fnc_error;
};

_item = lbData[38402, _sel];
if (_item isEqualTo "") exitWith {
	["Impossible de récupérer les informations de l'objet sélectionné."] call AdenisClient_fnc_error;
};

_price = getNumber(missionConfigFile >> "ADENIS_ITEMS_ARMA" >> _item >> "buy_price");
if (_price > g_cash) exitWith {
	["Vous n'avez pas assez d'argent."] call AdenisClient_fnc_error;
};

if (g_shop_active) exitWith {
	["Vous êtes déjà en train d'effectuer une action."] call AdenisClient_fnc_error;
};

g_shop_active = true;

if ([_item, true, false] call AdenisClient_fnc_handleItem) then
{
	[false, _price] call AdenisClient_fnc_handleCash;
	playSound "buy";
	if (isClass(missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "board")) then
	{
		if (_item in getArray(missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "board" >> "history_items")) then
		{
			[(player getVariable "realname"), _item, playerSide] remoteExecCall ["AdenisServer_fnc_factionHistoryAdd", 2];
		};
	};
} else {
	["Achat <t color='#FF4000'>impossible</t>.<br/>Vous n'avez pas assez de place dans votre inventaire ou avez déjà un objet de ce type équipé."] call AdenisClient_fnc_error;
};

g_shop_active = false;
