#pragma once
#include QMK_KEYBOARD_H

#define BP_LPAR KC_4        // (
#define BP_RPAR KC_5        // )
#define BP_LCBR RALT(KC_X)  // {
#define BP_RCBR RALT(KC_C)  // }
#define BP_LSBC RALT(KC_4)  // [
#define BP_RSBC RALT(KC_5)  // ]
#define BPD_TRM RALT(KC_D)  // ¨
#define BP_NBDH RSA(KC_B)   // ‑ non-breaking
#define BP_NBSP RSA(KC_SPC) // long non-breaking space
#define BP_DQOT KC_1        // "
#define BP_VQOT RALT(KC_G)  // '
#define BP_INF  RALT(KC_2)  // <
#define BP_INFQ RSA(KC_4)   // ⩽
#define BP_SUP  RALT(KC_3)  // >
#define BP_SUPQ RSA(KC_5)   // ⩾
#define BP_AROB KC_6        // @
#define BP_PERC KC_EQL      // %
#define BP_DASH KC_8        // -
#define BP_DMCR RALT(KC_QUOT) // ¯
#define BP_BSLS RALT(KC_Z)  // backslash
#define BP_MULT RALT(KC_0)  // ×
#define BP_MRGN RALT(KC_7)  // ±
#define BP_OBL2 RSA(AO_H)   // ‡
#define BP_PDMC RSA(KC_GRV) // ¶
#define BP_SCND RSA(KC_EQL) // ″ (maj of ′)
#define BP_SDQT RSA(KC_2)   // “
#define BP_EDQT RSA(KC_3)   // ”
#define BP_BXLM RALT(KC_Y)  // ¡
#define BP_BQST RALT(KC_N)  // ¿
#define BP_EQL  KC_MINS     // =
#define BP_IRNY S(KC_N)
#define BP_ASTR KC_0
#define BP_SLSH KC_9
#define BP_PLUS KC_7
#define BP_CIRC KC_Y
#define BP_QUES S(KC_N)


#define GREEK   SS_RALT(SS_TAP(X_COMM))
#define LATIN   SS_RALT(SS_TAP(X_K))
#define SCI     SS_RALT(SS_TAP(X_I))
#define STRIKE  SS_RALT(SS_TAP(X_O))