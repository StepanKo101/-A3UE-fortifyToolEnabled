/*
    Adds universal decor from vanilla arma 3.
*/

class CfgPatches
{
    class VanillaDecorUniversal
    {
        name = "Fortify Tool Enabled - Vanilla Universal Decor";
        author = "StepanKo101";
        url = "";

        requiredVersion = 0.50;
        requiredAddons[] = {"fte_main"}; 
        //skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};
#include "vanilla_decor_universal.hpp"
