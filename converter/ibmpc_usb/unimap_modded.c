
/*
Copyright 2016 Jun Wako <wakojun@gmail.com>

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
#include "unimap.h"


#define AC_FN0 ACTION_LAYER_TAP_KEY(1, KC_APPLICATION)

#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
    //
    // Useful mapping for AT 84 key Model F:
    //
    //  CapsLock == LeftGUI (Windows/Command)
    //  SysReq == VolUp
    //  PrtSc == VolDn
    //  Keypad- == F11
    //  Keypad+ == F12
    //  Keypad keys 1 - 9 are fixed as cursor keys because MacOS doesn't support NumLock
    //
    UNIMAP(
              F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,
    ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           VOLU,SLCK,PAUS,         VOLD,VOLU,MUTE,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,     INS, HOME,PGUP,    NLCK,PSLS,VOLD,F11,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     BSLS,     DEL, END, PGDN,    HOME,UP,  PGUP,F12,
    LGUI,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     NUHS,ENT,                         LEFT,P5,  RGHT,PCMM,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RO,  RSFT,          UP,           END, DOWN,PGDN,PENT,
    LCTL,LGUI,LALT,MHEN,          SPC,           HENK,KANA,RALT,RGUI,FN0, RCTL,     LEFT,DOWN,RGHT,         INS, DEL, PEQL
    ),
    UNIMAP(
              TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    GRV,      F13, F14, F15, F16, F17, F18, F19, F20, F21, F22, F23, F24,           EJCT,MSEL,BTLD,         TRNS,TRNS,TRNS,
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,      MPRV,MPLY,MNXT,    WSCH,WHOM,WBAK,TRNS,
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  INS,      TRNS,     MRWD,MSTP,MFFD,    WFWD,WSTP,WREF,TRNS,
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,LEFT,RGHT,     TRNS,TRNS,                        WFAV,MAIL,CALC,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,END, PGDN,DOWN,     TRNS,TRNS,          PGUP,         MYCM,BRTI,BRTD,TRNS,
    TRNS,TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     HOME,PGDN,END,          TRNS,TRNS,TRNS
    ),
};

