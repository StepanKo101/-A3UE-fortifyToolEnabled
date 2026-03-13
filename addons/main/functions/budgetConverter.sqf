/*  
    Converts player money to fortify budget tokens based on predefined conversion rates.
     - $25 converts to 5 fortify tokens
     - $50 converts to 10 fortify tokens
     - $100 converts to 20 fortify tokens
    Tokens are added to the player's inventory, and the player's money is deducted accordingly.
    Can't convert back currently.
*/

params ["_player", "_amount"];

_playerMoney = _player getVariable "moneyX"; // save player money
_lang = language;

if (_playerMoney >= _amount) then {
    _player setVariable ["moneyX", _playerMoney - _amount]; // deduct money from player
    switch (_amount) do {
        case 25: {
            for "_i" from 1 to 5 do {_player addItem 'ACE_fortifyToken'}; // convert $25 to 5 fortify tokens
        };
        case 50: {
            for "_i" from 1 to 10 do {_player addItem 'ACE_fortifyToken'}; // convert $50 to 10 fortify tokens
        };
        case 100: {
            for "_i" from 1 to 20 do {_player addItem 'ACE_fortifyToken'}; // convert $100 to 20 fortify tokens
        };
        default {
            systemChat "Invalid amount for conversion.";
        };
    };
    [] spawn A3A_fnc_statistics; // update statistics
    if (_lang == "Russian") then {
        systemChat format ["Токены добавлены в инвентарь."];
    } else {
        systemChat format ["Tokens were added to inventory."];
    };
} else {
    if (_lang == "Russian") then {
        systemChat "Недостаточно денег.";
    } else {
        systemChat "Not enough money.";
    };
};
