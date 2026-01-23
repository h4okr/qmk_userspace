#include QMK_KEYBOARD_H
#include "auel.h"
#include "bepo.h"
#include "utilities.h"
#include "custom_keycodes.h"

bool aokb_auel_common_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // custom shift keys
    case AO_DQOT:
      if (record->event.pressed) {
        register_code16(BP_DQOT);
      } else {
        unregister_code16(BP_DQOT);
      }
      return false;
    case AO_INF:
    case AO_IINF:
      if (record->event.pressed) {
        register_code16(BP_INF);
      } else {
        unregister_code16(BP_INF);
      }
      return false;
    case AO_SUP:
    case AO_ISUP:
      if (record->event.pressed) {
        register_code16(BP_SUP);
      } else {
        unregister_code16(BP_SUP);
      }
      return false;
    case AO_POP:
    case AO_ILPR:
      if (record->event.pressed) {
        register_code16(BP_LPAR);
      } else {
        unregister_code16(BP_LPAR);
      }
      return false;
    case AO_PCL:
    case AO_IRPR:
      if (record->event.pressed) {
        register_code16(BP_RPAR);
      } else {
        unregister_code16(BP_RPAR);
      }
      return false;
    case AO_CIRC:
      if (record->event.pressed) {
        register_code16(BP_CIRC);
      } else {
        unregister_code16(BP_CIRC);
      }
      return false;
    case AO_AROB:
      if (record->event.pressed) {
        register_code16(BP_AROB);
      } else {
        unregister_code16(BP_AROB);
      }
      return false;
    case AO_PLUS:
      if (record->event.pressed) {
        register_code16(BP_PLUS);
      } else {
        unregister_code16(BP_PLUS);
      }
      return false;
    case AO_DASH:
      if (record->event.pressed) {
        register_code16(BP_DASH);
      } else {
        unregister_code16(BP_DASH);
      }
      return false;
    case AO_SLSH:
      if (record->event.pressed) {
        register_code16(BP_SLSH);
      } else {
        unregister_code16(BP_SLSH);
      }
      return false;
    case AO_ASTR:
      if (record->event.pressed) {
        register_code16(BP_ASTR);
      } else {
        unregister_code16(BP_ASTR);
      }
      return false;
    case AO_EQL:
      if (record->event.pressed) {
        register_code16(BP_EQL);
      } else {
        unregister_code16(BP_EQL);
      }
      return false;
    case AO_ILCB:
      if (record->event.pressed) {
        register_code16(BP_LCBR);
      } else {
        unregister_code16(BP_LCBR);
      }
      return false;
    case AO_IRCB:
      if (record->event.pressed) {
        register_code16(BP_RCBR);
      } else {
        unregister_code16(BP_RCBR);
      }
      return false;
    case AO_ILBR:
      if (record->event.pressed) {
        register_code16(BP_LSBC);
      } else {
        unregister_code16(BP_LSBC);
      }
      return false;
    case AO_IRBR:
      if (record->event.pressed) {
        register_code16(BP_RSBC);
      } else {
        unregister_code16(BP_RSBC);
      }
      return false;
    // sendstring keys
    case AO_LGLM:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_2) SS_LSFT(SS_TAP(X_SPC)));
        return false;
      }
      break;
    case AO_RGLM:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_SPC)) SS_TAP(X_3));
        return false;
      }
      break;
    case AO_IRNY:
      if (record->event.pressed) {
        // SEND_STRING(LATIN SS_LSFT(SS_TAP(X_N)));
        register_code16(AO_LAT);
        unregister_code16(AO_LAT);
        register_code16(BP_IRNY);
        unregister_code16(BP_IRNY);
        return false;
      }
      break;
    case AO_LARR:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_TAP(X_T));
        return false;
      }
      break;
    case AO_LAR2:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_LSFT(SS_TAP(X_T)));
        return false;
      }
      break;
    case AO_RARR:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_TAP(X_Y));
        return false;
      }
      break;
    case AO_RAR2:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_LSFT(SS_TAP(X_Y)));
        return false;
      }
      break;
    case AO_UARR:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_TAP(X_P));
        return false;
      }
      break;
    case AO_DARR:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_LSFT(SS_TAP(X_P)));
        return false;
      }
      break;
    case AO_ARR1:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_TAP(X_MINS));
        return false;
      }
      break;
    case AO_ARR2:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_LSFT(SS_TAP(X_MINS)));
        return false;
      }
      break;
    case AO_INDC:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_J)) SS_RALT(SS_TAP(X_J)));
        return false;
      }
      break;
    case BP_ITBG:
      if (record->event.pressed) {
        register_code16(AO_LAT);
        unregister_code16(AO_LAT);
        register_code16(AO_EXLM);
        unregister_code16(AO_EXLM);
        return false;
      }
      break;
    case AO_DBBS:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_Z)SS_TAP(X_Z)));
        return false;
      }
      break;
  }
  return true;
}

bool aokb_auel_dev_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // custom shift keys
    case DV_EQL:
      if (record->event.pressed) {
        register_code16(BP_EQL);
      } else {
        unregister_code16(BP_EQL);
      }
      return false;
    case DV_INF:
      if (record->event.pressed) {
        register_code16(BP_INF);
      } else {
        unregister_code16(BP_INF);
      }
      return false;
    case DV_SUP:
      if (record->event.pressed) {
        register_code16(BP_SUP);
      } else {
        unregister_code16(BP_SUP);
      }
      return false;
    case DV_APOS:
      if (record->event.pressed) {
        register_code16(BP_VQOT);
      } else {
        unregister_code16(BP_VQOT);
      }
      return false;
    // sendstring keys
    case DV_DEQL:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_MINS)SS_TAP(X_MINS)SS_TAP(X_MINS));
      }
      return false;
    case DV_INFQ:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_2))SS_TAP(X_MINS));
        return false;
      }
      break;
    case DV_SUPQ:
      if (record->event.pressed) {
        SEND_STRING(SS_RALT(SS_TAP(X_3))SS_TAP(X_MINS));
        return false;
      }
      break;
    case DV_NEQL:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_Y))SS_TAP(X_MINS));
        return false;
      }
      break;
    case DV_DNQL:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_Y))SS_TAP(X_MINS)SS_TAP(X_MINS));
        return false;
      }
      break;
    case DV_ARRF:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_SPC)SS_TAP(X_MINS)SS_RALT(SS_TAP(X_3))SS_TAP(X_SPC));
        return false;
      }
      break;
    case DV_LNOT:
      if (record->event.pressed) {
        register_code16(MV_WDST);
        unregister_code16(MV_WDST);
        SEND_STRING(SS_LSFT(SS_TAP(X_Y)));
        register_code16(MV_WDEN);
        unregister_code16(MV_WDEN);
        return false;
      }
      break;
  }

  return true;
}

bool aokb_auel_doc_process_keys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AO_EEQL:
      if (record->event.pressed) {
        SEND_STRING(SCI SS_RALT(SS_TAP(X_MINS)));
        return false;
      }
      break;
    case AO_ENQL:
      if (record->event.pressed) {
        SEND_STRING(STRIKE SCI SS_RALT(SS_TAP(X_MINS)));
        return false;
      }
      break;
    case BP_NEQL:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_Y)) SS_TAP(X_MINS));
        return false;
      }
      break;
  }

  return true;
}
