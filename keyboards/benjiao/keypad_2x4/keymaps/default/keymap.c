#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_benjiao_2x4(
        KC_A,    KC_B,    KC_C,    KC_PSCR,
        KC_E,    KC_F,    KC_G,    KC_H
    )
};
