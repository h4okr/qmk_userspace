#include "simple_backlight.h"
#include "../keys/custom_keycodes.h"

bool aokb_simple_bl_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AO_BLU:
      if (record->event.pressed  && intensity < 1) {
        intensity += 0.01;
        return false;
      }
      break;
    case AO_BLD:
      if (record->event.pressed && intensity > 0) {
        intensity -= 0.01;
        return false;
      }
      break;
    case AO_BLON:
      if (record->event.pressed) {
        intensity = 0.05;
        return false;
      }
      break;
    case AO_BLOF:
      if (record->event.pressed) {
        intensity = 0;
        return false;
      }
      break;
  }
  return true;
}