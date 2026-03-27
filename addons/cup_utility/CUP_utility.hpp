/*
    These are loaded instead of vanilla presets if CUP core is present.
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
                class UtilPresetAdder
                {
                    displayName = "$STR_FTE_Utility_Preset_CUP";
                    condition = "[_player, 'ACE_Fortify'] call BIS_fnc_hasItem";
                    exceptions[] = {};
                    statement = "[_player, 3] remoteExec ['FTE_fnc_presetPicker', 2]"; // 3 is used to differentiate CUP presets from vanilla ones in the presetPicker function.
                    icon = "";
                };
            };
        };
    };
};
