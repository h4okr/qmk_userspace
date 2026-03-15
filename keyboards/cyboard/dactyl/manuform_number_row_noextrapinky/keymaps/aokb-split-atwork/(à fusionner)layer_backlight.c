#include QMK_KEYBOARD_H
#include "../layerdef.h"

bool rgb_matrix_indicators_user(void) {
  uint8_t current_layer = get_highest_layer(layer_state);
  // functions and special characters
  switch (current_layer) {
    case _AUEL:
      rgb_matrix_set_color_all(0x00, 0xb2*intensity, 0x20*intensity); // ao
      break;
    case _AUEL_MAC:
      rgb_matrix_set_color_all(0x10*intensity, 0x10*intensity, 0x10*intensity); // white
      break;
    case _AUEL_AZERTY:
      rgb_matrix_set_color_all(0x00, 0x45*intensity, 0xb5*intensity); // medium blue
      break;
    case _AUEL_WRITE:
      rgb_matrix_set_color_all(0x00, 0x56*intensity, 0x0e*intensity); // dim ao
      break;
    case _MOVE:
    case _MOVE_MAC:
      rgb_matrix_set_color_all(0xe5*intensity, 0x40*intensity, 0x00); // orange
      break;
    case _CTRL_AUEL:
    case _CTRL_AZ:
    case _CTRL_MAC:
      rgb_matrix_set_color_all(0xbb*intensity, 0x00, 0x00); // red
      break;
    case _ALT:
    case _ALT_WRITE:
    case _ALT_AZ:
      rgb_matrix_set_color_all(0x00, 0x00, 0xbb*intensity); // blue
      break;
    case _DIACRITIC:
      rgb_matrix_set_color_all(0xbc*intensity, 0x00, 0x9a*intensity); // purple
      break;
    case _NUM:
      rgb_matrix_set_color_all(0x00, 0xbb*intensity, 0x00); // green
      break;
    case _FN:
      rgb_matrix_set_color_all(0xff*intensity, 0xfa*intensity, 0x00); // yellow
      break;
    case _MOD:
    case _MOD_AZ:
      rgb_matrix_set_color_all(0x00, 0xb0*intensity, 0xbc*intensity); // light blue
      break;
    case _CONFIG:
      rgb_matrix_set_color_all(0xbc*intensity, 0x00, 0x7d*intensity); // pink
      break;
    default:
      break;
  }
  return false;
}