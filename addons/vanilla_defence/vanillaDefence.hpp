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
                class DefencePresetAdder
                {
                    displayName = "$STR_FTE_Defence_Preset";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 2] remoteExec ['FTE_fnc_presetPicker', 2]";
                    icon = "";
                };

            };
        };
    };
};
