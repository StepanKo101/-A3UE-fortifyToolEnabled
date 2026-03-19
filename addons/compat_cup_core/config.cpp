/*
    These presets are used instead of vanilla ones in case CUP core is present.
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

        units[] = {};
        weapons[] = {};
    };
};
#include "CUP_Presets.hpp"
