/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if (g_interaction_trade_active) exitWith {};
if (isNull g_interaction_target) exitWith {};

g_interaction_trade_active = true;

["Echange <t color='#FE9A2E'>proposé</t>."] call AdenisClient_fnc_info;

[
	player,
	g_interaction_trade_inventory,
	g_interaction_trade_keys_vehicles,
	g_interaction_trade_money,
	g_interaction_trade_keys_buildings
] remoteExec ["AdenisClient_fnc_interactionMenu_action_trade_receive", g_interaction_target];

if ((g_interaction_trade_money > 10000) || ((["illegal_money", g_interaction_trade_inventory] call AdenisClient_fnc_index) != -1)) then
{
	[] call AdenisDB_fnc_query_update_usual;
};

g_interaction_trade_inventory = [];
g_interaction_trade_keys_vehicles = [];
g_interaction_trade_keys_buildings = [];
g_interaction_trade_money = 0;

closeDialog 0;
