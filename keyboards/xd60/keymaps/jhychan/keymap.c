#include "xd60.h"
#include "action_layer.h"

#define _____ KC_NO
#define __v__ KC_TRNS

// Layer enumerations
enum {
  _WL = 0, // Windows Base layer
  _ML = 1, // Mac OS Base layer
  _FL = 2, // Universal Function layer
  _CL = 3, // Universal Control layer
  _PL = 4  // Mouse/Pointer Layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Windows Base Layer
  [_WL] = KEYMAP(
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,  TT(_CL),  \
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_BSPC,  \
    KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  _____,              KC_ENT,   \
    KC_LSFT,  _____,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  _____,    KC_RSFT,  _____,    \
    KC_LGUI,  MO(_FL),  KC_LALT,                                KC_SPC,                                 KC_RGUI,  MO(_FL),  _____,    KC_RALT,  TG(_ML)   ),

  // Mac OS Base layer
  [_ML] = KEYMAP(
    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    \
    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,              __v__,    \
    KC_LGUI,  __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    _____,              __v__,    \
    __v__,    _____,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    __v__,    _____,    __v__,    _____,    \
    KC_LCTL,  __v__,    __v__,                                  __v__,                                  KC_RCTL,  __v__,    _____,    __v__,    __v__     ),

  // Universal Function layer
  [_FL] = KEYMAP(
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   __v__,    __v__,    \
    __v__,    _____,    _____,    KC_UP,    _____,    _____,    _____,    _____,    KC_UP,    _____,    KC_PSCR,  _____,    _____,              KC_DEL,   \
    __v__,    _____,    KC_LEFT,  KC_DOWN,  KC_RIGHT, _____,    _____,    KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_HOME,  KC_PGUP,  _____,              __v__,    \
    __v__,    _____,    _____,    KC_APP,   _____,    _____,    _____,    _____,    _____,    _____,    KC_END,   KC_PGDN,  _____,    __v__,    _____,    \
    __v__,    __v__,    __v__,                                  _____,                                  __v__,    __v__,    _____,    __v__,    __v__     ),

  // Universal Control layer
  [_CL] = KEYMAP(
    KC_WAKE,  KC_SLEP,  KC_PWR,   _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    TG(_CL),  \
    _____,    _____,    KC_F14,   KC_VOLU,  KC_F15,   _____,    _____,    _____,    BL_INC,   KC_MSTP,  KC_MPLY,  KC_MPRV,  KC_MNXT,            _____,    \
    _____,    _____,    _____,    KC_VOLD,  KC_MUTE,  _____,    _____,    _____,    BL_DEC,   _____,    KC_MRWD,  KC_MFFD,  _____,              _____,    \
    KC_CAPS,  _____,    _____,    RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_TOG,  RGB_VAI,  RGB_SAI,  RGB_HUI,  _____,    _____,    _____,    KC_CAPS,  _____,    \
    _____,    _____,    _____,                                  RGB_MOD,                                _____,    _____,    _____,    _____,    TG(_PL)   ),

  // Mouse/Pointer Layer
  [_PL] = KEYMAP(
    _____,    KC_ACL0,  KC_ACL1,  KC_ACL2,  _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    \
    _____,    _____,    KC_BTN2,  KC_WH_U,  KC_BTN1,  _____,    _____,    KC_BTN1,  KC_MS_U,  KC_BTN2,  _____,    _____,    _____,              _____,    \
    _____,    _____,    KC_WH_L,  KC_WH_D,  KC_WH_R,  _____,    _____,    KC_MS_L,  KC_MS_D,  KC_MS_R,  _____,    _____,    _____,              _____,    \
    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    _____,    \
    _____,    _____,    _____,                                  _____,                                  _____,    _____,    _____,    _____,    __v__     )
};


/* NO TAP DANCE FOR NOW
[_WBL] = KEYMAP(
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   _____,    KC_BSLS,  \
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,            KC_BSPC,  \
    TD(4),    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  _____,              KC_ENT,   \
    KC_LSPO,  _____,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  _____,    KC_RSPC,  _____,    \
    KC_LGUI,  TD(0),    TD(2),                                  KC_SPC,                                 TD(3),    TD(1),    _____,    KC_RGUI,  TT(_CL)   ),

void _td_fl_lgui_finished (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 1) register_code(KC_LGUI);
  layer_on(_FL);
}

void _td_fl_lgui_reset (qk_tap_dance_state_t *state, void *user_data) {
  layer_off(_FL);
  if (state->count > 1) unregister_code(KC_LGUI);
}

void _td_fl_rgui_finished (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 1) register_code(KC_RGUI);
  layer_on(_FL);
}

void _td_fl_rgui_reset (qk_tap_dance_state_t *state, void *user_data) {
  layer_off(_FL);
  if (state->count > 1) unregister_code(KC_RGUI);
}

void _td_lalt_fl_finished (qk_tap_dance_state_t *state, void *user_data) {
  register_code(KC_LALT);
  if (state->count > 1) layer_on(_FL);
}

void _td_lalt_fl_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 1) layer_off(_FL);
  unregister_code(KC_LALT);
}

void _td_ralt_fl_finished (qk_tap_dance_state_t *state, void *user_data) {
  register_code(KC_RALT);
  if (state->count > 1) layer_on(_FL);
}

void _td_ralt_fl_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 1) layer_off(_FL);
  unregister_code(KC_RALT);
}

void _td_lctl_lsft_finished (qk_tap_dance_state_t *state, void *user_data) {
  register_code(KC_LCTL);
  if (state->count > 1) register_code(KC_LSFT);
}

void _td_lctl_lsft_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count > 1) unregister_code(KC_LSFT);
  unregister_code(KC_LCTL);
}

//Tap Dance
enum {
  TD_FL_LGUI = 0,
  TD_FL_RGUI = 1,
  TD_LALT_FL = 2,
  TD_RALT_FL = 3,
  TD_LCTL_LSFT = 4
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_FL_LGUI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, _td_fl_lgui_finished, _td_fl_lgui_reset),
  [TD_FL_RGUI] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, _td_fl_rgui_finished, _td_fl_rgui_reset),
  [TD_LALT_FL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, _td_lalt_fl_finished, _td_lalt_fl_reset),
  [TD_RALT_FL] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, _td_ralt_fl_finished, _td_ralt_fl_reset),
  [TD_LCTL_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, _td_lctl_lsft_finished, _td_lctl_lsft_reset)
};

*/