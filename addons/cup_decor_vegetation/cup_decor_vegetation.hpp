/*
    These are CUP vegetation decor.
*/

class CfgVehicles
{
    class Man;
    class CAManBase : Man
    {
        class ACE_SelfActions
        {
            class AntistasiFortify
            {
                displayName = "$STR_FTE_Fortify_Main";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                //Preset activating classes
                class DecorationOptions
                {
                    displayName = "$STR_FTE_Decorations_Button";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    
                    class Planters
                    {
                        displayName = "$STR_FTE_Preset_CUP_Planters";
                        statement = "[_player, 14] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class Bushes
                    {
                        displayName = "$STR_FTE_Preset_CUP_Bushes";
                        statement = "[_player, 15] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class SmallPlants
                    {
                        displayName = "$STR_FTE_Preset_CUP_SmallPlants";
                        statement = "[_player, 16] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class Trees
                    {
                        displayName = "$STR_FTE_Preset_CUP_Trees";
                        statement = "[_player, 17] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                };
            };
        };
    };
};
