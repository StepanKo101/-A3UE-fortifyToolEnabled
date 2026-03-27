/*
    Adds universal decor from vanilla arma 3.
*/

class CfgPatches
{
    class VanillaDecorModern
    {
        name = "Fortify Tool Enabled - Vanilla Modern Decor";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main"}; 
        skipWhenAnyAddonPresent[] = {"WW2_Core_c_WW2_Core_c"};
        //skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};
#include "vanilla_decor_modern.hpp"
