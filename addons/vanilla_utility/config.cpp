class CfgPatches
{
    class fte_vanillaUtility
    {
        name = "Fortify Tool Enabled - Vanilla";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main"}; 
        skipWhenAnyAddonPresent[] = {"CUP_Core"};

        units[] = {};
        weapons[] = {};
    };
};

#include "vanillaUtility.hpp"
