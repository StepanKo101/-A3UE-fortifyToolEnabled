/*
    Changes utility preset from vanilla to one augmented with cup objects.
*/

class CfgPatches
{
    class fte_compat_cupcore
    {
        name = "Fortify Tool Enabled - CUP Core Compatibility";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main", "CUP_Core"}; 
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};
#include "CUP_utility.hpp"
