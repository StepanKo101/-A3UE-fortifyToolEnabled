class CfgPatches
{
    class fte_main
    {
        name = "Simple Fortifications & Decorations - Main";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"A3A_core", "ace_common"}; 

        units[] = {};
        weapons[] = {};
    };
};

#include "converting.hpp"
#include "functions.hpp"

// asks the game to run preInit.sqf when game starts
class Extended_PreInit_EventHandlers {
    class FTE_Main {
        init = "call compile preprocessFileLineNumbers '\z\fte\addons\main\preInit.sqf'";
    };
};
