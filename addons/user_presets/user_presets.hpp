/*
    These are Vanilla ArmA presets.
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
                class UserPreset1
                {
                    displayName = "$STR_FTE_User_1";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem && FTE_EnableUserPreset1";
                    exceptions[] = {};
                    statement = "[_player, 18] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };

                class UserPreset2
                {
                    displayName = "$STR_FTE_User_2";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem && FTE_EnableUserPreset2";
                    exceptions[] = {};
                    statement = "[_player, 19] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };     

                class UserPreset3
                {
                    displayName = "$STR_FTE_User_3";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem && FTE_EnableUserPreset3";
                    exceptions[] = {};
                    statement = "[_player, 20] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };
            };
        };
    };
};
