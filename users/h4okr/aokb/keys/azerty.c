#include "azerty.h"
#include "custom_keycodes.h"

bool aokb_azerty_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // AZERTY
    // Custom shifted keys for azerty
    case AZ_DQOT:
      if (record->event.pressed) {
        register_code16(KC_3);
      } else {
        unregister_code16(KC_3);
      }
      return false;
    case AZ_INF:
      if (record->event.pressed) {
        register_code16(KC_NUBS);
      } else {
        unregister_code16(KC_NUBS);
      }
      return false;
    case AZ_SUP:
      if (record->event.pressed) {
        register_code16(S(KC_NUBS));
      } else {
        unregister_code16(S(KC_NUBS));
      }
      return false;
    case AZ_LPAR:
    case AZ_POP:
      if (record->event.pressed) {
        register_code16(KC_5);
      } else {
        unregister_code16(KC_5);
      }
      return false;
    case AZ_RPAR:
    case AZ_PCL:
      if (record->event.pressed) {
        register_code16(KC_MINS);
      } else {
        unregister_code16(KC_MINS);
      }
      return false;
    case AZ_AROB:
      if (record->event.pressed) {
        register_code16(AZ_TAROB);
      } else {
        unregister_code16(AZ_TAROB);
      }
      return false;
    case AZ_PLUS:
      if (record->event.pressed) {
        register_code16(S(KC_EQL));
      } else {
        unregister_code16(S(KC_EQL));
      }
      return false;
    case AZ_DASH:
      if (record->event.pressed) {
        register_code16(KC_6);
      } else {
        unregister_code16(KC_6);
      }
      return false;
    case AZ_SLSH:
      if (record->event.pressed) {
        register_code16(AZ_TSLSH);
      } else {
        unregister_code16(AZ_TSLSH);
      }
      return false;
    case AZ_ASTR:
      if (record->event.pressed) {
        register_code16(KC_NUHS);
      } else {
        unregister_code16(KC_NUHS);
      }
      return false;
    case AZ_EQL:
      if (record->event.pressed) {
        register_code16(KC_EQL);
      } else {
        unregister_code16(KC_EQL);
      }
      return false;
    case AZ_DLR:
      if (record->event.pressed) {
        register_code16(KC_RBRC);
      } else {
        unregister_code16(KC_RBRC);
      }
      return false;
    case AZ_APOS:
      if (record->event.pressed) {
        register_code16(KC_4);
      } else {
        unregister_code16(KC_4);
      }
      return false;
    case AZ_COMM:
      if (record->event.pressed) {
        register_code16(KC_M);
      } else {
        unregister_code16(KC_M);
      }
      return false;
    case AZ_DOT:
      if (record->event.pressed) {
        register_code16(S(KC_COMM));
      } else {
        unregister_code16(S(KC_COMM));
      }
      return false;
    case AZ_AMPS:
      if (record->event.pressed) {
        register_code16(KC_1);
      } else {
        unregister_code16(KC_1);
      }
      return false;
    case AZ_UNDS:
      if (record->event.pressed) {
        register_code16(KC_8);
      } else {
        unregister_code16(KC_8);
      }
      return false;
    case AZ_EGRV:
      if (record->event.pressed) {
        register_code16(KC_7);
      } else {
        unregister_code16(KC_7);
      }
      return false;
    case AZ_EACU:
      if (record->event.pressed) {
        register_code16(KC_2);
      } else {
        unregister_code16(KC_2);
      }
      return false;
    case AZ_AGRV:
      if (record->event.pressed) {
        register_code16(KC_0);
      } else {
        unregister_code16(KC_0);
      }
      return false;
    case AZ_UGRV:
      if (record->event.pressed) {
        register_code16(KC_QUOT);
      } else {
        unregister_code16(KC_QUOT);
      }
      return false;
    case AZ_CCED:
      if (record->event.pressed) {
        register_code16(KC_9);
      } else {
        unregister_code16(KC_9);
      }
      return false;
    case AZ_QUOT:
      if (record->event.pressed) {
        register_code16(KC_4);
      } else {
        unregister_code16(KC_4);
      }
      return false;
    // Azerty send string
    case AZ_GRAV:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_7))SS_TAP(X_SPC));
        return false;
      }
      break;
    case AZ_NEQL:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_SLSH)SS_TAP(X_EQL));
        return false;
      }
      break;
    case AZ_ECIR:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_LBRC)SS_TAP(X_E));
        return false;
      }
      break;
    case AZ_INFQ:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_NUBS)SS_TAP(X_EQL));
        return false;
      }
      break;
    case AZ_SUPQ:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_NUBS))SS_TAP(X_EQL));
        return false;
      }
      break;
    case AZ_DEQL:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_EQL)SS_TAP(X_EQL)SS_TAP(X_EQL));
        return false;
      }
      break;
    case AZ_DNQL:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_SLSH)SS_TAP(X_EQL)SS_TAP(X_EQL));
        return false;
      }
      break;
    case AZ_UEGRV:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_7))SS_LSFT(SS_TAP(X_E)));
        return false;
      }
      break;
    case AZ_UAGRV:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_7))SS_LSFT(SS_TAP(X_Q)));
        return false;
      }
      break;
    case AZ_UUGRV:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_7))SS_LSFT(SS_TAP(X_U)));
        return false;
      }
      break;
    case AZ_UECIR:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_LBRC)SS_LSFT(SS_TAP(X_E)));
        return false;
      }
      break;
    case AZ_ELLI:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_COMM)SS_TAP(X_COMM)SS_TAP(X_COMM)));
        return false;
      }
      break;
  }
  return true;
}