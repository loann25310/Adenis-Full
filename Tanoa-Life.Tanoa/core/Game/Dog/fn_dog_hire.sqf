/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if (isNull g_dog) exitWith {
	["Impossible de trouver votre chien."] call AdenisClient_fnc_error;
};

deleteVehicle g_dog;
[player, "whistle", 15] call AdenisClient_fnc_globalSay3d;
