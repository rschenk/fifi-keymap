/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    // Fifi has a different LED config than standard crkbd
    #undef RGBLED_NUM
    #undef RGBLED_SPLIT
    #define RGBLED_NUM 12
    #define RGBLED_SPLIT { 6, 6 }
    #define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4, 5, 11, 10, 9, 8, 7, 6 }
    // .-----------.    .------------.
    // |  2  1  0  |    |  6   7  8  |
    // |           |    |            |
    // |  3  4  5  |    | 11  10  9  |
    // '-----------'    '------------'

    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_LIMIT_VAL 255
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
