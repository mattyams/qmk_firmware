/*
Copyright 2022 mattyams (mattyams666@gmail.com)

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
#include "rev1.h"

#ifdef RGB_MATRIX_ENABLE
// clang-format off
led_config_t g_led_config = {
    /* Key Matrix to LED Index */
    {
        /* Row 0..4 */
        {  0,  1,  2,  3,  4,  5, NO_LED, },
        { NO_LED, NO_LED, 10,  9,  8,  7,  6, },
        { 11, 12, 13, 14, 15, 16, 17, },
        { 22, NO_LED, 21, NO_LED, 20, 19, 18, },
        { 23, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 24, },
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 25, },
    },
    /* LED Index to Physical Position */
    {
        /* Matrix */
        {0, 0}, {20, 0}, {40, 0}, {60, 0}, {80, 0}, {100, 0},
        {123, 21}, {103, 21}, {83, 21}, {63, 21}, {43, 21},
        {5, 42}, {25, 42}, {45, 42}, {65, 42}, {85, 42}, {105, 42}, {125, 42},
        {126, 63}, {80, 63}, {0, 0}, {0, 0}, {0, 0},
        {47, 63},{0, 0},
        {0, 0},
        /* Underglow */
        {50, 55}, {30, 55}, {10, 55}, {10, 10}, {55, 10}, {95, 10},
        {135, 10}, {190, 10}, {224, 10}, {200, 55}, {170, 51}, {140, 55},
        {122, 4}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0},
    },
    /* LED Index to Flag */
    {
        /* Matrix */
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4,
        4, 4,
        4,
        /* Underglow */
        2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2,
    }
};
/* clang-format on */
#endif /* RGB_MATRIX_ENABLE */
