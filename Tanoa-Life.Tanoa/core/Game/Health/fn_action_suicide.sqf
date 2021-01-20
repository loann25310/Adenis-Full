/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

g_coma_suicide = true;
g_coma_dead = true;
g_killer = player;
player setDamage 1;
[player] remoteExecCall ["AdenisServer_fnc_logSuicide", 2];
