#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 150
#endif

// Mouse Settings: Smoothing out mouse movement on keypress
#ifndef MOUSEKEY_INTERVAL
    #undef MOUSEKEY_INTERVAL
    #define MOUSEKEY_INTERVAL 16
#endif
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

#ifdef COMBO_ENABLE
    #undef COMBO_COUNT
    #undef COMBO_TERM
    #define COMBO_COUNT 5
    #define COMBO_TERM 60
#endif

// // Disable RBG on Suspend
// #define RGB_DISABLE_WHEN_USB_SUSPENDED
// #define RGBLIGHT_SLEEP true
