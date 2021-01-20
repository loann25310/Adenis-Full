/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

diag_log "[BOURSE] Saving";

{
	_ressource = configName _x;

	[
		format
		[
			"UPDATE ressources SET price='%1' WHERE name='%2'",
			[_ressource] call AdenisClient_fnc_market_getPrice,
			_ressource
		], 1
	] call ExtDB3_fnc_async;
} foreach ("isClass(_x >> 'market')" configClasses (missionConfigFile >> "ADENIS_ITEMS"));

diag_log "[BOURSE] Saved";
