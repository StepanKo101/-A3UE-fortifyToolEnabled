class CfgPatches
{
    class fte_Main
    {
        name = "Fortify Tool Enabled - Main";
        author = "StepanKo101";
        url = "";
        
        requiredVersion = 0.50;
        requiredAddons[] = {};
        
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class FTE // TAG
    {
        class Main // Category  
        {
            class Test // Function
            {
                file = "z\fte\addons\main\functions\test.sqf";
                preInit = 0;
                postInit = 1;
            };

            class UtilPresetLauncher 
            {
                file = "z\fte\addons\main\functions\utilPreset.sqf";
                preInit = 0;
                postInit = 0;
            };

            class DefensePresetLauncher 
            {
                file = "z\fte\addons\main\functions\defensePreset.sqf";
                preInit = 0;
                postInit = 0;
            };

            class WaterPresetLauncher 
            {
                file = "z\fte\addons\main\functions\waterPreset.sqf";
                preInit = 0;
                postInit = 0;
            };

        };
    };
};

class ACEX_Fortify_Presets {
    class FTE_testPreset {
        displayName = "test preset";
        objects[] = {
            {"Land_Razorwire_F", 15},
            {"Land_LampShabby_F", 75},
            {"Land_PierLadder_F", 15},
            {"Campfire_burning_F", 5},
            {"Land_Mound01_8m_F", 25},
            {"Land_SlumWall_01_s_2m_F", 10},
            {"Land_Plank_01_4m_F", 5}
        };
    };
    
    class Utility_Preset {
        displayName = "Utility Preset";
        objects[] = {
            {"Land_LampShabby_F", 15},
            {"Land_Plank_01_4m_F", 5},
            {"Land_PierLadder_F", 15},
            {"Land_Obstacle_Ramp_F", 10},
            {"Land_PlasticCase_01_small_gray_F", 10},
            {"Land_PlasticCase_01_medium_gray_F", 15}
        };
    };
    
    class Defense_Preset {
        displayName = "Defense Preset";
        objects[] = {
            {"Land_SlumWall_01_s_2m_F", 5},
            {"Land_SlumWall_01_s_4m_F", 10},
            {"Land_Barricade_01_10m_F", 30},
            {"Land_Mound01_8m_F", 30},
            {"Land_Razorwire_F", 15}
        };
    };
    
    class Watercross_Preset { // testing purposes
        displayName = "Watercross Preset";
        objects[] = {
            {"Land_PierWooden_03_F", 5},
            {"Land_PierWooden_02_barrel_F", 5},
            {"Land_PierWooden_02_ladder_F", 5},
            {"Land_PierWooden_02_16m_F", 5},
            {"Land_PierWooden_01_16m_F", 5},
            {"Land_nav_pier_m_F", 5}
        };
    };
};

class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class AntistasiFortify {
                displayName = "Antistasi Fortify";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                
            class UtilPresetAdder {
                displayName = "Activate Utility Preset";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                exceptions[] = {};
                statement = "[_player] remoteExec ['FTE_fnc_UtilPresetLauncher']";
                icon = "";
            };

            class DefencePresetAdder {
                displayName = "Activate Defense Preset";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                exceptions[] = {};
                statement = "[_player] remoteExec ['FTE_fnc_DefensePresetLauncher']";
                icon = "\z\dance.paa";
            };

            class WaterPresetAdder {
                displayName = "Activate Watercross Preset";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                exceptions[] = {};
                statement = "[_player] remoteExec ['FTE_fnc_WaterPresetLauncher']";
                icon = "\z\dance.paa";
            };
        };
    };
    };
};
