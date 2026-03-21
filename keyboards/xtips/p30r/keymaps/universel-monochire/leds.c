#include QMK_KEYBOARD_H
#include "./layers.h"

bool rgb_matrix_indicators_user(void) {
  if (IS_LAYER_ON(_UNIV_1)) { 
    rgb_matrix_set_color_all(RGB_CYAN);
  }
  if (IS_LAYER_ON(_UNIV_2)) { 
    rgb_matrix_set_color_all(RGB_BLUE);
  }
  if (IS_LAYER_ON(_NUM)) { 
    rgb_matrix_set_color_all(RGB_GREEN);
  }
  if (IS_LAYER_ON(_FUNCTION)) { 
    rgb_matrix_set_color_all(RGB_CHARTREUSE);
  }
  if (IS_LAYER_ON(_MOVE)) { 
    rgb_matrix_set_color_all(RGB_CORAL);
  }
  if (IS_LAYER_ON(_CONFIG)) { 
    rgb_matrix_set_color_all(RGB_PURPLE);
  }
  return true;
}