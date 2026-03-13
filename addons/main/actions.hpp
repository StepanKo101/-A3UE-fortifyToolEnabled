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

                //Money converting classes
                class tokenConverter25
                {
                    displayName = "$STR_FTE_Convert_25";
                    statement = "[_player, 25] remoteExec ['FTE_fnc_budgetConverter', player]";
                };

                class tokenConverter50
                {
                    displayName = "$STR_FTE_Convert_50";
                    statement = "[_player, 50] remoteExec ['FTE_fnc_budgetConverter', player]";
                };

                class tokenConverter100
                {
                    displayName = "$STR_FTE_Convert_100";
                    statement = "[_player, 100] remoteExec ['FTE_fnc_budgetConverter', player]";
                };

                //Preset activating classes
                class UtilPresetAdder
                {
                    displayName = "$STR_FTE_Utility_Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 1] remoteExec ['FTE_fnc_presetPicker', 2]"; 
                    icon = "";
                };

                class DefencePresetAdder
                {
                    displayName = "$STR_FTE_Defense_Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 2] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };
            };
        };
    };
};
