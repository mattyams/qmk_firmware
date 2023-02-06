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

#pragma once

/* #include "config_common.h" */

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA666
#define MANUFACTURER    3x6 keebs
#define PRODUCT_ID      0x0100
#define DEVICE_VER      0x0001
#define PRODUCT         Arisutea STM32

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { A13, A10, C13, C14, C15 }
#define MATRIX_COL_PINS { A9, A8, B15, B14, B13, B12, B9, B8, B7, B6, B5, B4, B3, A15, A14 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define LED_NUM_LOCK_PIN B11
#define LED_CAPS_LOCK_PIN B10
#define LED_SCROLL_LOCK_PIN B2

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
