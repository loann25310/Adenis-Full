/*
	Tanoa-Life RPG
	Code written by Lyeed
*/

if (isServer) then
{
	[] call compile PreprocessFileLineNumbers "Tanoa-Server\fn_initServer.sqf";

	0 setFog 0;
	forceWeatherChange;
	999999 setFog 0;
};
