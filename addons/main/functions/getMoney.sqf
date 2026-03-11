/*
_playerMoney = player getVariable "moneyX"; // save player money
_module = createVehicle ["acex_fortify_setupModule", position player, [], 0, "NONE"]; // spawn module
systemChat format ["Fortify module created at %1", position player];
systemChat format ["Player money: %1", _playerMoney];

[west, -250, false] call ace_fortify_fnc_updateBudget

[independent, 0, ]
*/
