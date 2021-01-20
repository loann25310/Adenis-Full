/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_item", "_config"];

if (isNull g_interaction_target) exitWith {
	["Cible invalide."] call AdenisClient_fnc_error;
};
if ((speed g_interaction_target) > 0) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule qui se déplace."] call AdenisClient_fnc_error;
};
if (isEngineOn g_interaction_target) exitWith {
	["Vous ne pouvez pas faire le plein d'un véhicule ayant le moteur allumé."] call AdenisClient_fnc_error;
};

_item = lbData[69002, lbCurSel 69002];
if (_item isEqualTo "") exitWith {
	["Vous n'avez pas choisi de jerrican."] call AdenisClient_fnc_error;
};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(["Jerrycan", 5, g_interaction_target, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AdenisClient_fnc_showProgress)) exitWith {};

if (!(_item in (magazines player))) exitWith {
	["Vous devez garder le jerrycan sur vous durant toute l'action."] call AdenisClient_fnc_error;
};

_config = (format["getText(_x >> 'item_jerrycan') isEqualTo '%1'", _item] configClasses (missionConfigFile >> "ADENIS_FUEL")) select 0;
if (isNil "_config") exitWith {
	[format["Impossible de trouver le fuel correspondant à l'item [%1]", _item]] call AdenisClient_fnc_error;
};

player removeMagazine _item;
["Alysia_jerrycan_empty", true] call AdenisClient_fnc_handleItem;
[true, g_interaction_target, 20, (configName _config)] call AdenisClient_fnc_handleFuel;
