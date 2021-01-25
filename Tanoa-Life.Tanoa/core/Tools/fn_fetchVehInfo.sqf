/*
	Tanoa-Life RPG
	Code written by Lyeed

	PARAMETERS
	0   : className (String)

	RETURN - Array
	0  : picture (CfgVehicles)
	1  : displayName (CfgVehicles)
	2  : vehicleClass (CfgVehicles)
	3  : maxSpeed (CfgVehicles)
	4  : armor (CfgVehicles)
	5  : transportSoldier (CfgVehicles)
	6  : enginePower (CfgVehicles)
	7  : fuelCapacity (CfgVehicles)
	8  : realname (ADENIS_VEHICLES)
	9  : buy price (ADENIS_VEHICLES)
	10 : virtual inventory (ADENIS_VEHICLES)
	11 : side (ADENIS_VEHICLES)
	12 : insurance (ADENIS_VEHICLES)
	13 : licenses (ADENIS_VEHICLES)
	14 : fuel type (ADENIS_VEHICLES)
	15 : rank (ADENIS_VEHICLES)
	16 : colors (ADENIS_VEHICLES)
	17 : garage price (ADENIS_VEHICLES_INFO)
	18 : assurance price (ADENIS_VEHICLES_INFO)
	19 : sell price (ADENIS_VEHICLES_INFO)
	20 : import price (ADENIS_VEHICLES_INFO)
	21 : steal price (ADENIS_VEHICLES_INFO)
	22 : disableOwnerInfos (ADENIS_VEHICLES)
	23 : disableLockpick (ADENIS_VEHICLES)
	24 : impound price (ADENIS_VEHICLES_INFO)
*/
private["_class", "_configFile", "_missionConfigFile_Vehicles", "_missionConfigFile_VehiclesInfo"];
_class = [_this, 0, "", [""]] call BIS_fnc_param;

if (_class isEqualTo "") exitWith {[]};

_configFile = configFile >> "CfgVehicles" >> _class;
if (!isClass(_configFile)) exitWith
{
	diag_log format["ERROR: Vehicle [%1] not defined in CfgVehicles", _class];
	systemChat format["ERROR: Vehicle [%1] not defined in CfgVehicles", _class];
	[]
};

_missionConfigFile_Vehicles = missionConfigFile >> "ADENIS_VEHICLES" >> _class;
_missionConfigFile_VehiclesInfo = missionConfigFile >> "ADENIS_VEHICLES_INFO";
if (!isClass(_missionConfigFile_Vehicles)) exitWith
{
	diag_log format["ERROR: Vehicle [%1] not defined in ADENIS_VEHICLES", _class];
	systemChat format["ERROR: Vehicle [%1] not defined in ADENIS_VEHICLES", _class];
	[]
};

[
	getText(_configFile >> "picture"),
	getText(_configFile >> "displayName"),
	getText(_configFile >> "vehicleClass"),
	getNumber(_configFile >> "maxSpeed"),
	getNumber(_configFile >> "armor"),
	getNumber(_configFile >> "transportSoldier"),
	getNumber(_configFile >> "enginePower"),
	getNumber(_missionConfigFile_Vehicles >> "fuelCapacity"),
	getText(_missionConfigFile_Vehicles >> "realname"),
	getNumber(_missionConfigFile_Vehicles >> "buyPrice"),
	getNumber(_missionConfigFile_Vehicles >> "inventory"),
	getText(_missionConfigFile_Vehicles >> "side"),
	getNumber(_missionConfigFile_Vehicles >> "insurance"),
	getArray(_missionConfigFile_Vehicles >> "licenses"),
	getText(_missionConfigFile_Vehicles >> "fuel"),
	getNumber(_missionConfigFile_Vehicles >> "rank"),
	getArray(_missionConfigFile_Vehicles >> "colors"),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "garage_percentage")),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "insurance_percentage")),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "sell_percentage")),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "transfert_percentage")),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "steal_percentage")),
	getNumber(_missionConfigFile_Vehicles >> "disableOwnerInfos"),
	getNumber(_missionConfigFile_Vehicles >> "disableLockpick"),
	round(getNumber(_missionConfigFile_Vehicles >> "buyPrice") * getNumber(_missionConfigFile_VehiclesInfo >> "impound_percentage"))
];
