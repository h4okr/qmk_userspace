#include QMK_KEYBOARD_H

enum aokb_layers{
  // main "AUEL"
	_AUEL,            // 1
	_AUEL_MAC,        // 2 
	_AUEL_AZERTY,     // 3
  _AUEL_MIRROR,     // 4
  // main modifications
  _AUEL_DEV,        // 5
  _AUEL_DEV_MIRROR, // 6
  //_GAME_COMPAT,     // 31!
  // modifier layers
  _MOD,             // 7
  _MOD_AZ,          // 8
  _CTRL_AUEL,       // 9
  _CTRL_AUEL_MIRROR,// 10
  _CTRL_AZ,         // 11
  _CTRL_MAC,        // 12
  _ALT,             // 13
  _ALT_MIRROR,      // 14
  _ALT_DEV,         // 15
  _ALT_DEV_MIRROR,  // 16
  _ALT_AZ,          // 17
  //_GAMING,          // 18
  // functions and special characters
  _DIACRITIC,       // 19
	_NUM_PAD,         // 20 
  _NUM,             // 21
  _NUM_MIRROR,      // 22
  _FN,              // 23
	_CONFIG,          // 24
	_MOVE,            // 25
  _MOVE_MIRROR,     // 26
  _POINTER,         // 27
	_MOVE_MAC,        // 28
  _LOCK,            // 29
  _DBL_MIRROR       // 30
};

uint32_t layer_state_set_user(uint32_t state) {
  state = update_tri_layer_state(state, _CTRL_AUEL, _ALT, _DIACRITIC);
  state = update_tri_layer_state(state, _MOVE, _FN, _POINTER);
  return state;
}