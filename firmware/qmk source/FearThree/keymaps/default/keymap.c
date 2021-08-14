/* Copyright 2021 Thomas Autiello
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H


// Defines names for use in layer keycodes and the keymap

enum layer_names {
    _BASE,
    _FN1,
    _FN2
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    PROG = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_LCTL,    LT(_FN1, KC_C),    LT(_FN2, KC_V)
    ),
    /* FN 1 */
    [_FN1] = LAYOUT(
        RESET, XXXXXXX,  RESET
    ),
    /* FN 2 */
    [_FN2] = LAYOUT(
        PROG, PROG,  XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case PROG:
            if (record->event.pressed) {
                // when keycode PROG is pressed
                SEND_STRING("Three keys is all a programmer needs!");
            } else {
                // when keycode PROG is released
            }
            break;
    }
    return true;
}
