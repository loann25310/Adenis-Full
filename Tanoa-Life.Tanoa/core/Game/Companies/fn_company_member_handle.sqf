/*
	Tanoa-Life RPG
	Code written by Lyeed
*/
private["_company", "_type", "_uid", "_handle", "_name", "_uids", "_names","_perms"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, true, [true]] call BIS_fnc_param;
_uid = [_this, 2, "", [""]] call BIS_fnc_param;
_name = [_this, 3, "", [""]] call BIS_fnc_param;
_handle = false;
_perms = [];

if (isNull _company) exitWith {false};

_members = _company getVariable "company_members";
if (isNil "_members") exitWith {false};

_uids = _members select 0;
_names = _members select 1;
if ((count _members) isEqualTo 3) then {
	_perms = _members select 2;
};

_index = _uids find _uid;
if (_type) then
{
	if ((_index isEqualTo -1) && (_name != "")) then
	{
		_uids pushBack _uid;
		_names pushBack _name;
		if ((count _members) isEqualTo 3) then {
			_perms pushBack 0;
		}else{
			{
				_perms pushBack 0;
			} forEach _members;
		};
		_handle = true;
	};
} else {
	if (_index != -1) then
	{
		_uids deleteAt _index;
		_names deleteAt _index;
		if ((count _members) isEqualTo 3) then {
			_perms deleteAt _index;
		};
		_handle = true;
	};
};

if (_handle) then
{
	_company setVariable ["company_members", [_uids, _names, _perms], true];
};

_handle;
