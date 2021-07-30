/* Copyright 2019 John M Daly <jmdaly@gmail.com>
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
#include "rgb.h"

#ifdef RGB_MATRIX_ENABLE
// clang-format off
led_config_t g_led_config = {
    /* Key Matrix to LED Index */
    {
        /* Row 0..3 */
        { 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, },
        { 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, },
        { 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, },
        { 55, 54, 53, NO_LED, 52, NO_LED, 51, NO_LED, 50, 49, NO_LED, 48, },
    },
    /* LED Index to Physical Position */
    {
        /* Underglow */
        {50, 55}, {30, 55}, {10, 55}, {10, 10}, {55, 10}, {95, 10}, {135, 10}, {190, 10}, {224, 10}, {200, 55}, {170, 51}, {140, 55},
        /* Matrix */
        {0, 0}, {20, 0}, {40, 0}, {60, 0}, {80, 0}, {100, 0}, {120, 0}, {140, 0}, {160, 0}, {180, 0}, {200, 0}, {220, 0},
        {220, 21}, {200, 21}, {180, 21}, {160, 21}, {140, 21}, {120, 21}, {100, 21}, {80, 21}, {60, 21}, {40, 21}, {20, 21}, {0, 21},
        {0, 42}, {20, 42}, {40, 42}, {60, 42}, {80, 42}, {100, 42}, {120, 42}, {140, 42}, {160, 42}, {180, 42}, {200, 42}, {220, 42},
        {220, 63}, {180, 63}, {160, 63}, {120, 63}, {80, 63}, {40, 63}, {20, 63}, {0, 63},
    },
    /* LED Index to Flag */
    {
        /* Underglow */
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        /* Matrix */
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4,
    }
};
/* clang-format on */
#endif /* RGB_MATRIX_ENABLE */
