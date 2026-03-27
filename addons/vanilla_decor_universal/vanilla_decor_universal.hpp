/*
    These are Vanilla ArmA decor presets.
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
                    
                    class OutdoorStuff
                    {
                        displayName = "$STR_FTE_Preset_Outdoor";
                        statement = "[_player, 4] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class IndoorStuff
                    {
                        displayName = "$STR_FTE_Preset_Indoor";
                        statement = "[_player, 5] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class ConstructionSite1
                    {
                        displayName = "$STR_FTE_Preset_Construction1";
                        statement = "[_player, 6] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class ConstructionSite2
                    {
                        displayName = "$STR_FTE_Preset_Construction2";
                        statement = "[_player, 7] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class Food
                    {
                        displayName = "$STR_FTE_Preset_Food";
                        statement = "[_player, 8] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class Sport
                    {
                        displayName = "$STR_FTE_Preset_Sport";
                        statement = "[_player, 9] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class MiscSmall
                    {
                        displayName = "$STR_FTE_Preset_MiscSmall";
                        statement = "[_player, 10] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                };
            };
        };
    };
};
