#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _MOVE
};

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    MOVE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT_pinkiesout(
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_EQL,                       KC_EQL,    KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSLS,
    KC_TAB,    KC_QUOT,   KC_COMM,   KC_DOT,    KC_P,      KC_Y,      KC_LBRC,                      KC_RBRC,   KC_F,      KC_G,      KC_C,      KC_R,      KC_L,      KC_SLSH,
    KC_LCTL,  KC_A,      KC_O,      KC_E,      KC_U,      KC_I,      KC_LBRC,                      KC_RBRC,   KC_D,      KC_H,      KC_T,      KC_N,      KC_S,      KC_MINS,
    KC_LSFT,   KC_SCLN,   KC_Q,      KC_J,      KC_K,      KC_X,      MO(MOVE),                       KC_BTN2,   KC_B,      KC_M,      KC_W,      KC_V,      KC_Z,      KC_EQL,
                          XXXXXXX,   KC_LWIN,   KC_GRV,  KC_BSPC,   KC_DEL,   KC_MPLY, KC_MUTE,  KC_ENT,    KC_SPC,    KC_LALT,   XXXXXXX,   XXXXXXX
),

[_MOVE] = LAYOUT_pinkiesout(
    XXXXXXX,       KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,         XXXXXXX,                      XXXXXXX,       KC_F6,         KC_F7,         KC_F8,         KC_F9,         KC_F10,        KC_F11,
    XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       KC_F12,
    XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,
    XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,
                                  XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX
)
};