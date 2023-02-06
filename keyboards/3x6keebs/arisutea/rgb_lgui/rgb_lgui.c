/*
Copyright 2021 mattyams (mattyams666@gmail.com)

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
#include "rgb_lgui.h"

void led_set_kb(uint8_t usb_led) {
	// put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    // set Layer LED to output and low
    setPinOutput(F4);
    writePinLow(F4);
    // set CapsLock LED to output and low
    setPinOutput(F5);
    writePinLow(F5);
    // set NumLock LED to output and low
    setPinOutput(F6);
    writePinLow(F6);

led_set_user(usb_led);
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
