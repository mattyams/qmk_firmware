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
        {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, },
        { 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, },
        { 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, },
        { 43, 42, 41, NO_LED, 40, NO_LED, 39, NO_LED, 38, 37, NO_LED, 36, },
    },
    /* LED Index to Physical Position */
    {
        /* Matrix */
        {0, 0}, {20, 0}, {40, 0}, {60, 0}, {80, 0}, {100, 0}, {120, 0}, {140, 0}, {160, 0}, {180, 0}, {200, 0}, {220, 0},
        {223, 21}, {203, 21}, {183, 21}, {163, 21}, {143, 21}, {123, 21}, {103, 21}, {83, 21}, {63, 21}, {43, 21}, {23, 21}, {3, 21},
        {5, 42}, {25, 42}, {45, 42}, {65, 42}, {85, 42}, {105, 42}, {125, 42}, {145, 42}, {165, 42}, {185, 42}, {205, 42}, {225, 42},
        {221, 63}, {187, 63}, {164, 63}, {126, 63}, {80, 63}, {47, 63}, {25, 63}, {3, 63},
        /* Underglow */
        {50, 55}, {30, 55}, {10, 55}, {10, 10}, {55, 10}, {95, 10},
        {135, 10}, {190, 10}, {224, 10}, {200, 55}, {170, 51}, {140, 55},
    },
    /* LED Index to Flag */
    {
        /* Matrix */
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4,
        /* Underglow */
        2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2,
    }
};
/* clang-format on */
#endif /* RGB_MATRIX_ENABLE */
