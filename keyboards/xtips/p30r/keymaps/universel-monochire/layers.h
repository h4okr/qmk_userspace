#pragma once

#include QMK_KEYBOARD_H

enum mn_layers {
	_UNIV_1,
	_UNIV_2,
	_NUM,
	_FUNCTION,
	_MOVE
}

#define MN_2 		TT(_UNIV_2)
#define MN_MOVE TT(_MOVE)
#define MN_FUNC TG(_FUNCTION)
#define MN_NUM  TG(_NUM)