/*
	File: init.sqf
	Author: torndeco
	Modified by Lyeed

	Description:
	Initializes extDB, loads Protocol + options if any + Locks extDB

	Parameters:
		0: STRING Database name as in extdb-conf.ini
		1: STRING Protocol to enable
		2: STRING Optional Protocol Options
*/

params [
	["_database", "", [""]],
	["_protocol", "", [""]],
	["_options", "", [""]]
];

// Possible Options
//TEXT = Wraps Text Datatypes (not VARCHAR) with "<insert result>"
//TEXT2 = Wraps Text Datatypes (not VARCHAR) with '<insert result>'
//NULL = Convert NULL Value to objNull, otherwise it is "" by default.
// examples
//   private _options = "TEXT";
//   private _options = "TEXT-NULL";
//   private _options = "TEXT2";
//   private _options = "TEXT2-NULL";

private _return = false;

if ( isNil {uiNamespace getVariable "extDB_SQL_CUSTOM_ID"}) then
{
	// extDB3 Version Check
	private _result = "extDB3" callExtension "9:VERSION";
	diag_log format ["extDB3: Version: %1", _result];
	if (_result isEqualTo "") exitWith {diag_log "extDB3: Failed to Load Extension"; false};
	if ((parseNumber _result) < 1.026) exitWith {diag_log "Error: extDB3 version 1.026 or Higher Required";};

	// extDB3 Connect to Database
	_result = call compile ("extDB3" callExtension format ["9:ADD_DATABASE:%1", _database]);
	if (_result select 0 isEqualTo 0) exitWith {diag_log format ["extDB3: Error Failed to Connect to Database: %1", _result]; false};
	diag_log "extDB3: Connected to Database";

	_result = call compile ("extDB3" callExtension format ["9:ADD_DATABASE_PROTOCOL:%1:%3:%3:%2", _database, _options, _protocol]);
	if ((_result select 0) isEqualTo 0) exitWith {diag_log format ["extDB3: Error Database Setup: %1", _result]; false};

	diag_log "extDB3: Initalized SQL_CUSTOM Protocol";

	// extDB3 Lock
	"extDB3" callExtension "9:LOCK";
	diag_log "extDB3: Locked";
	_return = true;
}
else
{
	diag_log "extDB3: Already Setup";
	_return = true;
};

_return;
