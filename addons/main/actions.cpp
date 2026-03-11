class CfgVehicles
{
    class Man;
    class CAManBase : Man
    {
        class ACE_SelfActions
        {
            class AntistasiFortify
            {
                displayName = "Antistasi Fortify";
                condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";

                //Money converting classes
                class tokenConverter25
                {
                    displayName = "Convert $25";
                    statement = "[_player, 25] remoteExec ['FTE_fnc_budgetConverter']";
                };

                class tokenConverter50
                {
                    displayName = "Convert $50";
                    statement = "[_player, 50] remoteExec ['FTE_fnc_budgetConverter']";
                };

                class tokenConverter100
                {
                    displayName = "Convert $100";
                    statement = "[_player, 100] remoteExec ['FTE_fnc_budgetConverter']";
                };

                //Preset activating classes
                class UtilPresetAdder
                {
                    displayName = "Activate Utility Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 1] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };

                class DefencePresetAdder
                {
                    displayName = "Activate Defense Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 2] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };

                /*class WaterPresetAdder
                {
                    displayName = "Activate Watercross Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 3] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };*/
            };
        };
    };
};
