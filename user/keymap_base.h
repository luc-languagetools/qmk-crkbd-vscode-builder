#pragma once


// base layer - browser
// ====================

#define __BASE_L0__  MO(MOUSE),     KC_TRNS,      OSM(MOD_LGUI),   OSM(MOD_LALT),   OSM(MOD_LCTL),   KC_TRNS
#define __BASE_L1__  OSL(VSCODE),   KC_QUOTE,     KC_COMMA,        KC_DOT,          KC_P,            KC_Y
#define __BASE_L2__  MO(BROWSER),   KC_A,         KC_O,            KC_E,            KC_U,            KC_I
#define __BASE_L3__  OSL(SHELL),    KC_SEMICOLON, KC_Q,            KC_J,            KC_K,            KC_X

#define __BASE_R0__  CROS_WS_LEFT,  CROS_WS_1,    CROS_WS_2,       CROS_WS_3,       CROS_WS_4,       CROS_WS_RIGHT
#define __BASE_R1__  KC_F,          KC_G,         KC_C,            KC_R,            KC_L,            KC_TAB
#define __BASE_R2__  KC_D,          KC_H,         KC_T,            KC_N,            KC_S,            DEL_WORD
#define __BASE_R3__  KC_B,          KC_M,         KC_W,            KC_V,            KC_Z,            OSM(MOD_LSFT)

#define __BASE_L_2THUMB__  MO(SYMBOLS),    MO(KEYNAV)
#define __BASE_R_2THUMB__  KC_ENTER,       KC_SPACE
#define __BASE_L_3THUMB__  OSM(MOD_LCTL),  MO(SYMBOLS), MO(KEYNAV)
#define __BASE_R_3THUMB__  KC_ENTER,       KC_SPACE,    MO(DESKNAV)

