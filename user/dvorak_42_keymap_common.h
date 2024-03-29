#pragma once

#include QMK_KEYBOARD_H
 
// useful macros
#define __EMPTY_2__ KC_TRNS, KC_TRNS
#define __EMPTY_3__ KC_TRNS, KC_TRNS, KC_TRNS
#define __EMPTY_6__ KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

// BASE layer
// ==========

#define __BASE_L0__ KC_TRNS,         KC_TRNS,      KC_TRNS,             SCREEN_TAB_LEFT,   SCREEN_TAB_RIGHT,    MO(BROWSER_CONTROL)
#define __BASE_L1__ OSL(VSCODE),     KC_QUOTE,     KC_COMMA,            KC_DOT,            KC_P,                KC_Y
#define __BASE_L2__ OSL(SHELL_NAV),  KC_A,         KC_O,                KC_E,              KC_U,                KC_I
#define __BASE_L3__ OSM(MOD_LSFT),   KC_SEMICOLON, KC_Q,                KC_J,              KC_K,                KC_X

#define __BASE_R0__ OS_WS_LEFT,      OS_WS_1,      OS_WS_2,             OS_WS_3,           OS_WS_4,             OS_WS_RIGHT
#define __BASE_R1__ KC_F,            KC_G,         KC_C,                KC_R,              KC_L,                KC_TAB
#define __BASE_R2__ KC_D,            KC_H,         KC_T,                KC_N,              KC_S,                LCTL(KC_BSPC)
#define __BASE_R3__ KC_B,            KC_M,         KC_W,                KC_V,              KC_Z,                OSM(MOD_RSFT)

#define __BASE_L_2THUMB__ MO(COMBINED), MO(KEYNAV)
#define __BASE_R_2THUMB__ KC_ENTER,     KC_SPACE

// KEYNAV layer
// ============

#define __KEYNAV_L0__ KC_TRNS,       KC_TRNS,        KC_TRNS,      KC_OS_MODE_WIN10, KC_OS_MODE_LINUX, KC_OS_MODE_CHROMEOS
#define __KEYNAV_L1__ KC_ESC,        RCTL(KC_ENTER), RCTL(KC_K),   RCTL(KC_Z),       RCTL(KC_S),       RCTL(KC_N)          
#define __KEYNAV_L2__ KC_TRNS,       MO(KEYSEL),     OBS_READMODE, RSFT(KC_TAB),     KC_TAB,           RCTL(KC_F)         
#define __KEYNAV_L3__ KC_TRNS,       OBS_CMD,        OBS_QUICKSW,  OBS_CHECKBOX,     RCTL(KC_B),       KC_TRNS

#define __KEYNAV_R0__ KC_TRNS,       KC_TRNS,        KC_TRNS,      KC_TRNS,          KC_TRNS,          KC_TRNS
#define __KEYNAV_R1__ KC_TRNS,       KC_HOME,        KC_UP,        KC_END,           KC_PGUP,          KC_DELETE
#define __KEYNAV_R2__ LCTL(KC_LEFT), KC_LEFT,        KC_DOWN,      KC_RIGHT,         LCTL(KC_RIGHT),   KC_BSPC
#define __KEYNAV_R3__ KC_TRNS,       RCTL(KC_C),     RCTL(KC_X),   RCTL(KC_V),       KC_PGDN,          RCTL(KC_DELETE)

// KEYSEL layer
// ============


#define __KEYSEL_L1__ __EMPTY_6__
#define __KEYSEL_L2__ __EMPTY_6__
#define __KEYSEL_L3__ __EMPTY_6__

#define __KEYSEL_R1__ KC_TRNS,             RSFT(KC_HOME), RSFT(KC_UP),   RSFT(KC_END),   RSFT(KC_PGUP),        KC_TRNS
#define __KEYSEL_R2__ RSFT(RCTL(KC_LEFT)), RSFT(KC_LEFT), RSFT(KC_DOWN), RSFT(KC_RIGHT), RSFT(RCTL(KC_RIGHT)), KC_TRNS
#define __KEYSEL_R3__ KC_TRNS,             RCTL(KC_C),    RCTL(KC_X),    RCTL(KC_V),     RSFT(KC_PGDN),        KC_TRNS

// SHELL_NAV layer
// ===============

#define __SHELL_NAV_L0__ __EMPTY_6__
#define __SHELL_NAV_L1__ TO(BASE),           KC_TRNS,           SHELL_PGREP,       SHELL_PLESS,       SHELL_LESS,       SH_EXIT
#define __SHELL_NAV_L2__ OSL(SHELL_SCREEN),  KC_TRNS,           SHELL_CDPRE,       SHELL_LSLTR,       SHELL_LS,         SHELL_LSLA
#define __SHELL_NAV_L3__ KC_TRNS,            SHELL_SCREEN_LIST, SHELL_SCREENRD,    SHELL_SCREEN_NEW,  SHELL_TAILF,      KC_TRNS

#define __SHELL_NAV_R0__ SCREEN_NEW_TAB,     SCREEN_TAB_LEFT,   SCREEN_TAB_RIGHT,  SCREEN_NUMBER,     SCREEN_RENAME,    SCREEN_WINDOWS
#define __SHELL_NAV_R1__ SH_CLOSE,           KC_HOME,           KC_UP,             KC_END,            SH_CLEARSCR,      SH_DEL_PATH
#define __SHELL_NAV_R2__ SH_WORD_LEFT,       KC_LEFT,           KC_DOWN,           KC_RIGHT,          SH_WORD_RIGHT,    SH_DEL_WORD
#define __SHELL_NAV_R3__ SH_DEL_TO_START,    SH_RECALL,         SH_SEARCH,         SH_PASTE,          SH_DEL_TO_END,    SH_STOP

// SHELL_SCREEN layer
// ==================
#define __SHELL_SCREEN_L1__ TO(BASE),        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS
#define __SHELL_SCREEN_L2__ TO(BASE),        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          SCREEN_DETACH
#define __SHELL_SCREEN_L3__ KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS

#define __SHELL_SCREEN_R1__ KC_TRNS,         SCREEN_7, SCREEN_8, SCREEN_9, SCREEN_RENAME,    KC_TRNS
#define __SHELL_SCREEN_R2__ SCREEN_TAB_LEFT, SCREEN_4, SCREEN_5, SCREEN_6, SCREEN_TAB_RIGHT, SCREEN_COPY_MODE                              
#define __SHELL_SCREEN_R3__ KC_TRNS,         SCREEN_1, SCREEN_2, SCREEN_3, SCREEN_NUMBER,    SCREEN_PASTE
#define __SHELL_SCREEN_R4_3__ KC_TRNS, KC_TRNS, SCREEN_0
#define __SHELL_SCREEN_R4_2__ KC_TRNS, SCREEN_0

// VSCODE layer
// ============

#define __VSCODE_L1__ TO(BASE),        VS_GO_TO_TOP,    VS_FIND_FILES, VS_CMT_BLOCK,      VS_CMT_LINE, VS_RECENT
#define __VSCODE_L2__ KC_TRNS,         KC_TRNS,         KC_TRNS,       KC_TRNS,           KC_TRNS,     VS_SEL_BRACKET
#define __VSCODE_L3__ KC_TRNS,         VS_GO_TO_BOTTOM, KC_TRNS,       KC_TRNS,           KC_TRNS,     KC_TRNS

#define __VSCODE_R1__ VS_COPYLINEDOWN, VS_REFERENCES,   VS_DEFINITION, VS_IMPLEMENTATION, VS_LINE,     VS_BRACKET
#define __VSCODE_R2__ VS_CLOSETAB,     VS_TABLEFT,      VS_TABRIGHT,   VS_SYMBOLEDITOR,   VS_FILE,     VS_BACK
#define __VSCODE_R3__ VS_BM_CLEARALL,  VS_BM_PREV,      VS_BM_NEXT,    VS_GROUP_1,        VS_GROUP_2,  VS_BM_TOGGLE

#define __VSCODE_R4_3__ VS_DEL_LINE, VS_BM_LIST, VS_COMMANDS
#define __VSCODE_R4_2__ VS_DEL_LINE, VS_COMMANDS

// COMBINED layer
// ==============

#define __COMBINED_L1__ KC_TILD,   KC_EXLM,  KC_AT,     KC_HASH,   KC_DLR,      KC_PERC
#define __COMBINED_L2__ KC_GRAVE,  KC_LPRN,  KC_RPRN,   KC_LBRC,   KC_RBRC,     KC_UNDS
#define __COMBINED_L3__ KC_CIRC,   KC_COLN,  KC_DQUO,   KC_LCBR,   KC_RCBR,     KC_AMPR

#define __COMBINED_R1__ KC_PLUS,   KC_7,     KC_8,      KC_9,      KC_ASTR,     KC_PIPE
#define __COMBINED_R2__ KC_MINUS,  KC_4,     KC_5,      KC_6,      KC_SLSH,     KC_BSLS
#define __COMBINED_R3__ KC_EQUAL,  KC_1,     KC_2,      KC_3,      KC_QUES,     KC_DOT

#define __COMBINED_R4_3__ KC_TRNS, KC_TRNS, KC_0

// F-KEYS layer
// ============

#define __FKEYS_L1__ KC_TRNS,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS
#define __FKEYS_L2__ KC_F1,      KC_F2,         KC_F3,         KC_F4,         KC_F5,         KC_F6
#define __FKEYS_L3__ KC_TRNS,    OSM(MOD_LSFT), OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), KC_TRNS

#define __FKEYS_R1__ KC_TRNS,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS
#define __FKEYS_R2__ KC_F7,      KC_F8,         KC_F9,         KC_F10,        KC_F11,        KC_F12
#define __FKEYS_R3__ KC_TRNS,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS

#define __FKEYS_L4_3__ TO(BASE), KC_TRNS, KC_TRNS
#define __FKEYS_R4_3__ KC_TRNS,  KC_TRNS, TO(BASE)

// BROWSER_CONTROL layer
// =====================
// chrome OS keyboard shortcuts: https://support.google.com/chromebook/answer/183101?hl=en
// search key == windows key

#define __BROWSER_CONTROL_L1__ KC_TRNS, KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,       KC_TRNS
#define __BROWSER_CONTROL_L2__ KC_TRNS, KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,       KC_TRNS
#define __BROWSER_CONTROL_L3__ KC_TRNS, RCTL(LSFT(KC_TAB)), RCTL(KC_TAB), OS_WS_LEFT, OS_WS_RIGHT,   OS_WS_SHOW

#define __BROWSER_CONTROL_R1__ KC_TRNS, KC_TRNS,            KC_TRNS,      KC_TRNS,    KC_TRNS,       KC_TRNS
#define __BROWSER_CONTROL_R2__ KC_TRNS, BR_TAB_LEFT,        BR_TAB_RIGHT, KC_TRNS,    LALT(KC_LEFT), KC_TRNS
#define __BROWSER_CONTROL_R3__ KC_TRNS, RCTL(KC_1),         RCTL(KC_9),   LCTL(KC_L), KC_F5,         KC_TRNS

#define __BROWSER_CONTROL_R4_3__ BR_TAB_CLOSE, BR_TAB_NEW, KC_TRNS
#define __BROWSER_CONTROL_R4_2__ BR_TAB_CLOSE, BR_TAB_NEW

// SHORTCUTS layer
// ===============

#define __SHORTCUTS_L1__ MEH(KC_F14),    MEH(KC_F15),     MEH(KC_F16),      MEH(KC_F17),   MEH(KC_F18),   KC_OS_MODE_WIN10
#define __SHORTCUTS_L2__ MEH(KC_F20),    MEH(KC_F21),     MEH(KC_F22),      MEH(KC_F23),   MEH(KC_F24),   KC_OS_MODE_LINUX
#define __SHORTCUTS_L3__ MEH(KC_0),      OSM(MOD_LSFT),   OSM(MOD_LGUI),    OSM(MOD_LALT), OSM(MOD_LCTL), KC_OS_MODE_CHROMEOS

#define __SHORTCUTS_R1__ MEH(KC_F1),     MEH(KC_F2),      MEH(KC_F3),       MEH(KC_F4),    MEH(KC_F5),    MEH(KC_F6)
#define __SHORTCUTS_R2__ MEH(KC_F7),     OS_WS_1,         OS_WS_2,          OS_WS_3,       OS_WS_4,       MEH(KC_F13)
#define __SHORTCUTS_R3__ SCREEN_NEW_TAB, SCREEN_TAB_LEFT, SCREEN_TAB_RIGHT, SCREEN_NUMBER, SCREEN_RENAME, SCREEN_WINDOWS

#define __SHORTCUTS_L4_3__ OSL(FKEYS), TO(FKEYS),     KC_TRNS
#define __SHORTCUTS_R4_3__ TO(GAME),   TO(SHORTCUTS), TO(BASE)

// GAME layer
// ==========

#define __GAME_L1__ KC_TAB,    KC_TRNS, KC_Q,    KC_W,    KC_E,    KC_R
#define __GAME_L2__ KC_ENTER,  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F
#define __GAME_L3__ KC_TRNS,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define __GAME_R1__ KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ESC
#define __GAME_R2__ __EMPTY_6__
#define __GAME_R3__ __EMPTY_6__

#define __GAME_L4_3__  KC_LCTL,  KC_LALT, KC_SPACE
#define __GAME_R4_3__  KC_TRNS,  KC_TRNS, TO(BASE)