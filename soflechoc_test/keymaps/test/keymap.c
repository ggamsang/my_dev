#include QMK_KEYBOARD_H

// 각 열의 색상 설정 (H, S, V 값)
void set_column_color(void) {
    rgblight_sethsv_at(HSV_RED, 0);  // 첫 번째 열
    rgblight_sethsv_at(HSV_RED, 1);
    rgblight_sethsv_at(HSV_RED, 2);

    rgblight_sethsv_at(HSV_GREEN, 3);  // 두 번째 열
    rgblight_sethsv_at(HSV_GREEN, 4);
    rgblight_sethsv_at(HSV_GREEN, 5);

    rgblight_sethsv_at(HSV_BLUE, 6);  // 세 번째 열
    rgblight_sethsv_at(HSV_BLUE, 7);
    rgblight_sethsv_at(HSV_BLUE, 8);

    // 필요한 만큼 열을 추가로 설정
}

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    rgblight_enable();  // RGB 조명 활성화
    set_column_color();  // 초기 색상 설정
}
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LCTL | LGUI | LCMD | LALT | /Enter  /       \Space \  | RALT | RCMD | RGUI | RCTL |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

LAYOUT(
    KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_GRV,
    KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,   KC_MPLY,KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                      KC_LCTL, KC_LGUI, KC_LCMD, KC_LALT, KC_ENT,    KC_SPC, KC_RALT,  KC_RCMD,  KC_RGUI, KC_RCTL
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif
