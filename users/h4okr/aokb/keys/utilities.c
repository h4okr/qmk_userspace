#include "utilities.h"
#include "custom_keycodes.h"

bool aokb_utilities_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    // Redefinitions of CUT, COPY, PASTE, WPASTE
    case AO_CUT:
      if (record->event.pressed) {
        register_code16(KC_LCTL);
        register_code16(KC_C);
        unregister_code16(KC_C);
        unregister_code16(KC_LCTL);
      }
      return false;
    case AO_COPY:
      if (record->event.pressed) {
        register_code16(KC_LCTL);
        register_code16(KC_H);
        unregister_code16(KC_H);
        unregister_code16(KC_LCTL);
      }
      return false;
    case AO_PSTE:
      if (record->event.pressed) {
        register_code16(KC_LCTL);
        register_code16(KC_U);
        unregister_code16(KC_U);
        unregister_code16(KC_LCTL);
      }
      return false;
    case DL_LINE:
      if (record->event.pressed) {
        register_code16(MV_LNST);
        unregister_code16(MV_LNST);
        register_code16(KC_LSFT);
        register_code16(MV_LNEN);
        unregister_code16(MV_LNEN);
        unregister_code16(KC_LSFT);
        register_code16(KC_BSPC);
        unregister_code16(KC_BSPC);
        return false;
      }
      break;
    case SL_WORD:
      if (record->event.pressed) {
        register_code16(MV_WDST);
        unregister_code16(MV_WDST);
        register_code16(KC_LSFT);
        register_code16(MV_WDEN);
        unregister_code16(MV_WDEN);
        unregister_code16(KC_LSFT);
        return false;
      }
      break;
  }
  return true;
}

bool aokb_ide_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch(keycode) {
    case IDE_MNU:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_V)));
        return false;
      }
      break;
    case IDE_SOL:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_L)));
        return false;
      }
      break;
    case IDE_TYP:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_J))));
        return false;
      }
      break;
    case IDE_SRD:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_B)SS_TAP(X_K)));
        return false;
      }
      break;
    case IDE_XPD:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_QUOT)SS_TAP(X_O)));
        return false;
      }
      break;
    case IDE_CMT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F)SS_TAP(X_H)));
        return false;
      }
      break;
    case IDE_UNC:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F)SS_TAP(X_S)));
        return false;
      }
      break;
    case IDE_MPL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_F12)));
        return false;
      }
      break;
    case IDE_SUP:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_HOME)));
        return false;
      }
      break;
  }
  return true;
}