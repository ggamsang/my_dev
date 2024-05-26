#pragma once

#define MASTER_LEFT
#define EE_HANDS
#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 58  // 사용된 LED 수에 따라 설정
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef BACKLIGHT_ENABLE
#    define BACKLIGHT_LEVELS 5
#    define BACKLIGHT_PIN B7  // 백라이트 핀을 정의합니다.
#endif


#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif
