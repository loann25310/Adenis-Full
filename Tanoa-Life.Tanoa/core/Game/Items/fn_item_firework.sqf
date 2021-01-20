/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if ((vehicle player) != player) exitWith {
	["Vous devez être à pied pour utiliser cet objet."] call AdenisClient_fnc_error;
};

if ([false, "firework", 1] call AdenisClient_fnc_handleInv) then {
	[getPos player, 'random','random'] remoteExec ["AdenisServer_fnc_fireworks", 2];
} else {
	["Impossible de récupérer l'objet de votre inventaire."] call AdenisClient_fnc_error;
};
