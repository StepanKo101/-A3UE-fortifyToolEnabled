/*
	Vibe coding this shit
*/

// Only run on server
if (!isServer) exitWith {};

// Listen for placements
["acex_fortify_objectPlaced", {
    params ["_player", "_side", "_object"];   
    _object setVariable ["A3A_building", true, true];
    A3A_buildingsToSave pushBack _object;
}] call CBA_fnc_addEventHandler;

// Listen for deletions
["acex_fortify_objectDeleted", {
    params ["_player", "_side", "_object"];  
    A3A_buildingsToSave = A3A_buildingsToSave - [_object];
}] call CBA_fnc_addEventHandler;
