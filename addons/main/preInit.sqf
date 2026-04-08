// First user preset

[
    "FTE_EnableUserPreset1",      // Unique setting name
    "CHECKBOX",                   // Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER", "COLOR" or "TIME" <STRING>
    ["Enable User Preset #1", "When enabled, your custom preset #1 will appear in the fortify menu"],  // Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    ["Simple Fortifications & Decorations", "User Preset #1"],       // Category for the settings menu + optional sub-category <STRING, ARRAY>
    "",                        // Default value (false = unchecked)
    1,                            //  IsGlobal? 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <NUMBER>
    {},						      // Script to execute when setting is changed. (optional) <CODE>
	true                         // needs restart? 
] call CBA_fnc_addSetting;

[
    "FTE_UserPreset1Classes",
    "EDITBOX",
    ["Names & Prices for User Preset #1", "Put your classnames and prices here. Don't know how? Visit mod page's related discussion."],
    ["Simple Fortifications & Decorations", "User Preset #1"],
    "",
    1,
    {},
    false
] call CBA_fnc_addSetting;

// Second user preset

[
    "FTE_EnableUserPreset2",      // Unique setting name
    "CHECKBOX",                   // Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER", "COLOR" or "TIME" <STRING>
    ["Enable User Preset #2", "When enabled, your custom preset #2 will appear in the fortify menu"],  // Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    ["Simple Fortifications & Decorations", "User Preset #2"],       // Category for the settings menu + optional sub-category <STRING, ARRAY>
    "",                        // Default value (false = unchecked)
    1,                            //  IsGlobal? 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <NUMBER>
    {},						      // Script to execute when setting is changed. (optional) <CODE>
	true                         // needs restart? 
] call CBA_fnc_addSetting;

[
    "FTE_UserPreset2Classes",
    "EDITBOX",
    ["Names & Prices for User Preset #2", "Put your classnames and prices here. Don't know how? Visit mod page's related discussion."],
    ["Simple Fortifications & Decorations", "User Preset #2"],
    "",
    1,
    {},
    false
] call CBA_fnc_addSetting;

// Third user preset

[
    "FTE_EnableUserPreset3",      // Unique setting name
    "CHECKBOX",                   // Type of setting. Can be "CHECKBOX", "EDITBOX", "LIST", "SLIDER", "COLOR" or "TIME" <STRING>
    ["Enable User Preset #3", "When enabled, your custom preset #3 will appear in the fortify menu"],  // Display name or display name + tooltip (optional, default: same as setting name) <STRING, ARRAY>
    ["Simple Fortifications & Decorations", "User Preset #3"],       // Category for the settings menu + optional sub-category <STRING, ARRAY>
    "",                        // Default value (false = unchecked)
    1,                            //  IsGlobal? 1: all clients share the same setting, 2: setting can't be overwritten (optional, default: 0) <NUMBER>
    {},						      // Script to execute when setting is changed. (optional) <CODE>
	true                         // needs restart? 
] call CBA_fnc_addSetting;

[
    "FTE_UserPreset3Classes",
    "EDITBOX",
    ["Names & Prices for User Preset #3", "Put your classnames and prices here. Don't know how? Visit mod page's related discussion."],
    ["Simple Fortifications & Decorations", "User Preset #3"],
    "",
    1,
    {},
    false
] call CBA_fnc_addSetting;
