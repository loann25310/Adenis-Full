/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

[] call AdenisClient_fnc_stripDownPlayer;

if ((player getVariable ["arrested", false]) && !(isNull g_arrest_Prison)) then {
	player forceAddUniform getText(missionConfigFile >> "ADENIS_PRISONS" >> typeof(g_arrest_Prison) >> "uniform");
} else {

	_config = missionConfigFile >> "ADENIS_FACTIONS" >> str(playerSide) >> "Loadout";

	_uniform = getText(_config >> "uniform");
	if (_uniform != "") then {player forceAddUniform _uniform};

	_headGear = getText(_config >> "headgear");
	if (_headGear != "") then {player addHeadgear _headGear};

	_vest = getText(_config >> "vest");
	if (_vest != "") then {player addVest _vest};

	_backpack = getText(_config >> "backpack");
	if (_backpack != "") then {player addVest _backpack};

	if (player canAdd "ItemMap") then
	{
		player addItem "ItemMap";
		player assignItem "ItemMap";
	};

	{
		[_x, true] call AdenisClient_fnc_handleItem;
	} forEach getArray(_config >> "items");
};
