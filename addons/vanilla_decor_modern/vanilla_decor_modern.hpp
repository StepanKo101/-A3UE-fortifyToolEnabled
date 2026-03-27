/*
    These are modern decor items. They will be disabled if IFA loaded.
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
                    
                    class Electronics1
                    {
                        displayName = "$STR_FTE_Preset_Electronics1";
                        statement = "[_player, 11] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class Electronics2
                    {
                        displayName = "$STR_FTE_Preset_Electronics2";
                        statement = "[_player, 12] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                    
                    class MiscBig
                    {
                        displayName = "$STR_FTE_Preset_MiscBig";
                        statement = "[_player, 13] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    };
                };
            };
        };
    };
};
