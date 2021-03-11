/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_station", "_fuel", "_config_fuel", "_config_station"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_fuel = [_this, 1, "", [""]] call BIS_fnc_param;

if (_fuel isEqualTo "") exitWith {0};

_config_station = missionConfigFile >> "ADENIS_FUEL_STATION" >> typeof(_station);
if (!isClass(_config_station)) exitWith {0};

_config_fuel = missionConfigFile >> "ADENIS_FUEL" >> _fuel;
if (!isClass(_config_fuel)) exitWith {0};

(_station getVariable [_fuel, 300]);
