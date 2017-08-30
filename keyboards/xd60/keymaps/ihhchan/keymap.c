#include "xd60.h"
#include "action_layer.h"

#define _____ KC_NO
#define __^__ KC_TRNS

// Layer enumerations
enum {
  _WL = 0, // Windows Base layer
  _ML = 1, // Mac OS Base layer
  _FL = 2, // Universal Function layer
  _CL = 3, // Universal Control layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Windows Base Layer
  [_WL] = KEYMAP(
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,            KC_EQL,   KC_BSPC,  _____,    \
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,            KC_RBRC,            KC_BSLS,  \
    MO(_FL),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            _____,              KC_ENT,   \
    KC_LSFT,  _____,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   RSFT_T(KC_SLSH),    _____,    KC_UP,    TT(_CL),  \
    KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 MO(_FL),  KC_RCTL             KC_LEFT,  KC_DOWN,  KC_RIGHT  ),

  // Mac OS Base layer
  [_ML] = KEYMAP(
    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,              __^__,    __^__,    _____,    \
    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,              __^__,              __^__,    \
    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,              _____,              __^__,    \
    __^__,    _____,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,    __^__,              _____,    __^__,    __^__,    \
    __^__,    __^__,    __^__,                                  __^__,                                  __^__,    __^__,              __^__,    __^__,    __^__     ),

  // Universal Function layer
  [_FL] = KEYMAP(
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,             KC_F12,   KC_DEL,   _____,    \
    __^__,    _____,    KC_UP,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    KC_PSCR,  _____,              _____,              _____,    \
    __^__,    KC_LEFT,  KC_DOWN,  KC_RIGHT, _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,              _____,              __^__,    \
    __^__,    _____,    _____,    KC_APP,   _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,              _____,    KC_PGUP,  _____,    \
    __^__,    __^__,    __^__,                                  _____,                                  __^__,    __^__,              KC_HOME,  KC_PGDN,  KC_END    ),

  // Universal Control layer
  [_CL] = KEYMAP(
    KC_PWR,   _____,    KC_MSTP,  KC_MPLY,  KC_MPRV,  KC_MNXT,  _____,    KC_P7,    KC_P8,    KC_P9,    KC_PSLS,  _____,              _____,    _____,    _____,    \
    _____,    _____,    KC_VOLD,  KC_VOLU,  KC_MUTE,  _____,    _____,    KC_P4,    KC_P5,    KC_P6,    KC_PAST,  BL_DEC,             BL_INC,             RGB_TOG,  \
    TG(_ML),  _____,    RGB_VAI,  RGB_SAI,  RGB_HUI,  _____,    _____,    KC_P1,    KC_P2,    KC_P3,    KC_PMNS,  _____,              _____,              BL_TOGG,  \
    KC_CAPS,  _____,    RGB_HUD,  RGB_SAD,  RGB_VAD,  _____,    _____,    KC_P0,    KC_PDOT,  KC_PENT,  KC_PPLS,  _____,              _____,    __^__,    TG(_CL),  \
    _____,    _____,    _____,                                  RGB_MOD,                                _____,    _____,              __^__,    __^__,    __^__     )
};
