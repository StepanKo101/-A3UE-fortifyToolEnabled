// Left unused. It was WAY easier to just hardcode the presets in the presetPicker function, and I don't want to add the extra complexity of parsing the preset class for now. If we want to add more presets in the future, we can always add them to the presetPicker function.

class ACEX_Fortify_Presets
{
    /*class FTE_testPreset
    {
        displayName = "test preset";
        objects[] = {
            {"Land_Razorwire_F", 15},
            {"Land_LampShabby_F", 75},
            {"Land_PierLadder_F", 15},
            {"Campfire_burning_F", 5},
            {"Land_Mound01_8m_F", 25},
            {"Land_SlumWall_01_s_2m_F", 10},
            {"Land_Plank_01_4m_F", 5}};
    };*/

    class Utility_Preset
    {
        displayName = "Utility Preset";
        objects[] = {
            {"Land_LampShabby_F", 15},
            {"Land_Plank_01_4m_F", 5},
            {"Land_PierLadder_F", 15},
            {"Land_Obstacle_Ramp_F", 10},
            {"Land_PlasticCase_01_small_gray_F", 10},
            {"Land_PlasticCase_01_medium_gray_F", 15}};
    };

    class Defense_Preset
    {
        displayName = "Defense Preset";
        objects[] = {
            {"Land_SlumWall_01_s_2m_F", 5},
            {"Land_SlumWall_01_s_4m_F", 10},
            {"Land_Barricade_01_10m_F", 30},
            {"Land_Mound01_8m_F", 30},
            {"Land_Razorwire_F", 15}};
    };

    class Watercross_Preset
    { // testing purposes
        displayName = "Watercross Preset";
        objects[] = {
            {"Land_PierWooden_03_F", 5},
            {"Land_PierWooden_02_barrel_F", 5},
            {"Land_PierWooden_02_ladder_F", 5},
            {"Land_PierWooden_02_16m_F", 5},
            {"Land_PierWooden_01_16m_F", 5},
            {"Land_nav_pier_m_F", 5}};
    };
};
