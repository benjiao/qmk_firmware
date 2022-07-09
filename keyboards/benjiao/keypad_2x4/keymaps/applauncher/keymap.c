#include QMK_KEYBOARD_H

enum custom_keycodes {
    APP1 = SAFE_RANGE,
    APP2,
    APP3,
    APP4,
    APP5,
    APP6,
    APP7,
    PARTIAL_PSCR
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        case APP1:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("1"));
                return true;
            } else {}
            break;

        case APP2:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("2"));
                return true;
            } else {}
            break;

        case APP3:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("3"));
                return true;
            } else {}
            break;

        case APP4:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("4"));
                return true;
            } else {}
            break;

        case APP5:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("5"));
                return true;
            } else {}
            break;

        case APP6:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("6"));
                return true;
            } else {}
            break;

        case APP7:
            if (record->event.pressed) {
                SEND_STRING(SS_LGUI("7"));
                return true;
            } else {

            }
            break;

        case PARTIAL_PSCR:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_PSCREEN)));
                return true;
            } else {}
            break;

    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_benjiao_2x4(
        APP1,    APP2,    APP3,    APP4,
        APP5,    APP6,    APP7,    PARTIAL_PSCR
    )
};
