/*
Copyright 2021 mattyams

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

enum arisutea_layers {
  _QWERTY,
  _FN,
  _ADJUST
};

// Tap Dance Declarations
enum {
    TD_LALT_LGUI = 0,
    TD_RALT_RGUI
};

// Windows Lock Macro
enum custom_keycodes {
    WIN_LOCK = SAFE_RANGE,
};

#define FN MO(_FN)
#define ADJUST MO(_ADJUST)
#define LALT_LG TD(TD_LALT_LGUI)
#define RALT_RG TD(TD_RALT_RGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_END,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_DEL,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,
    KC_LCTL,          LALT_LG,          KC_SPC,  FN,               KC_SPC,           RALT_RG,                   KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_PGUP,
    _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______,  KC_PSCR, _______, _______, _______,          KC_PGDN,
    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, WIN_LOCK, _______, _______, _______,                   _______,
    _______, _______, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______,  _______, _______,          _______,
    _______,          ADJUST,           _______, _______,          _______,          _______,                    _______, _______, _______
  ),

  [_ADJUST] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY,                   _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLU,
    _______,          _______,          _______, _______,          _______,          _______,                   KC_MPRV, KC_VOLD, KC_MNXT
  )
};

// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for L-Alt, twice for L-GUI
    [TD_LALT_LGUI] = ACTION_TAP_DANCE_DOUBLE(KC_LALT, KC_LGUI),
    // Tap once for R-Alt, twice for R-GUI
    [TD_RALT_RGUI] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_RGUI)
};

// WinLock Macro Definition
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case WIN_LOCK:
        if (record->event.pressed) {
            // When WIN_LOCK is pressed
            SEND_STRING(SS_LGUI("l"));
        } else {
            // When WIN_LOCK is released
        }
        break;
    }
    return true;
};

void matrix_init_user(void) {
  // set Layer LED to output and low
  setPinOutput(F4);
  writePinLow(F4);
  // set CapsLock LED to output and low
  setPinOutput(F5);
  writePinLow(F5);
  // set NumLock LED to output and low
  setPinOutput(F6);
  writePinLow(F6);
}

// Function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state)
{
    if (get_highest_layer(state) == 1) {
    writePinHigh(F4);
	} else {
		writePinLow(F4);
    }
    return state;
}

// Function for CapsLock and NumLock
void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
    writePinHigh(F6);
  } else {
    writePinLow(F6);
  }
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(F5);
  } else {
    writePinLow(F5);
  }
}
