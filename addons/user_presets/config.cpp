/*
    Changes utility preset from vanilla to one augmented with cup objects.
*/

class CfgPatches
{
    class fte_user_presets
    {
        name = "Fortify Tool Enabled - User Defined Presets";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main"}; 
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};
#include "user_presets.hpp"
