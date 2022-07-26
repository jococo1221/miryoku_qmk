// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once


// CUSTOM Mouse keys parmeters (I DON'T THINK THIS IS WORKING)
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
//#define MOUSEKEY_TIME_TO_MAX    64
#undef MOUSEKEY_WHEEL_MAX_SPEED 
#define MOUSEKEY_WHEEL_MAX_SPEED   	20
#undef MOUSEKEY_WHEEL_TIME_TO_MAX 
#define MOUSEKEY_WHEEL_TIME_TO_MAX 	20

//invert U_MOUSE and U_NAV
/*
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_MOUSE,KC_SPC),  LT(U_NAV,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP
*/

#define MIRYOKU_MAPPING(\
       K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,\
       K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,\
       K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,\
       N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39\
)\
LAYOUT_split_3x6_3(\
KC_NO, K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09,   CG_TOGG,\
KC_BTN1, K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19,   KC_NO,\
KC_BTN2, K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29,   KC_NO,\
                     K32,   K33,   K34,          K35,   K36,   K37\
)
