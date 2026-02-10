#include "./gamecompat.h"
#include "custom_keycodes.h"

bool aokb_gamecompat_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case GC_2:
      if (record->event.pressed) {
        register_code16(KC_2);
      } else {
        unregister_code16(KC_2);
      }
      return false;
    case GC_3:
      if (record->event.pressed) {
        register_code16(KC_3);
      } else {
        unregister_code16(KC_3);
      }
      return false;
    case GC_ECIR:
      if (record->event.pressed) {
        register_code16(KC_NUBS);
      } else {
        unregister_code16(KC_NUBS);
      }
      return false;
    case GC_EXLM:
      if (record->event.pressed) {
        register_code16(KC_Y);
      } else {
        unregister_code16(KC_Y);
      }
      return false;
  }
  return true;
}