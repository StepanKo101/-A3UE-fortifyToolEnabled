/*
    Adds vegetation and planters
*/

class CfgPatches
{
    class CupDecorVegetation
    {
        name = "Fortify Tool Enabled - CUP Decor Vegetation";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main", "CUP_Core"}; 
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};
#include "cup_decor_vegetation.hpp"
