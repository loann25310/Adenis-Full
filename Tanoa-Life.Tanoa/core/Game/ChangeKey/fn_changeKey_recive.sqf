/*
	Tanoa-Life RPG
	Code written by Loann
*/
_vehicle = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (!(_vehicle in g_vehicles)) then {
	g_vehicles pushBack _vehicle;
};

["Quelqu'un vous a légué ses clefs"] call AdenisClient_fnc_info;