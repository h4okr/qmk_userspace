#pragma once
#include QMK_KEYBOARD_H
#include "bepo.h"

#define AO_DLR  KC_GRV
#define AO_Y    KC_X
#define AO_EACU KC_W
#define AO_EGRV KC_T
#define AO_EXLM S(KC_Y)
#define AO_A    KC_A
#define AO_U    KC_S
#define AO_E    KC_F
#define AO_L    KC_O
#define AO_APOS KC_N
#define AO_H    KC_DOT
#define AO_J    KC_P
#define AO_I    KC_D
#define AO_O    KC_R
#define AO_COMM KC_G
#define AO_X    KC_C
#define AO_N    KC_SCLN
#define AO_M    KC_QUOT
#define AO_K    KC_B
#define AO_W    KC_RBRC
#define AO_Z    KC_LBRC
#define AO_R    KC_L
#define AO_T    KC_J
#define AO_S    KC_K
#define AO_Q    KC_M
#define AO_P    KC_E
#define AO_F    KC_SLSH
#define AO_DOT  KC_V
#define AO_D    KC_I
#define AO_C    KC_H
#define AO_G    KC_COMM
#define AO_B    KC_Q
#define AO_V    KC_U

#define AO_MNTE RSA(KC_MINS)  // ′
#define AO_DTLD RALT(KC_SCLN) // dead ~
#define AO_NEQL RALT(KC_MINS) // ≠
#define AO_PIPE RALT(KC_Q)    // |
#define AO_AMPS RALT(KC_E)    // &
#define AO_ELLI RALT(KC_V)    // …
#define AO_EURO RALT(KC_F)    // €
#define AO_PERM RALT(KC_EQL)  // ‰
#define AO_DEGR S(KC_MINS)    // °
#define AO_DIVD RALT(KC_9)    // ÷
#define AO_UNDS RALT(KC_SPC)  // _
#define AO_OBEL RSA(AO_G)     // †
#define AO_LNOT RSA(KC_7)     // ¬
#define AO_EXPO RALT(KC_J)    // exponent
#define AO_PRGH RSA(KC_E)     // §
#define AO_GRAV S(KC_EQL)     // `
#define AO_CCED KC_BSLS       // ç
#define AO_ECIR KC_NUBS       // ê
#define AO_AGRV KC_Z          // à
#define AO_UGRV RALT(KC_S)    // ù
#define AO_AE   RALT(KC_A)    // æ
#define AO_OE   RALT(KC_R)    // œ
#define AO_DIES S(AO_DLR)     // #
#define AO_NBSS S(KC_SPC)      // short non-breaking space
#define AO_GRK  RALT(KC_COMM) // greek precursor
#define AO_LAT  RALT(KC_K)    // latin precursor
#define AO_SCI  RALT(KC_I)    // science precursor
#define AO_MDSH RALT(KC_1)    // —
#define AO_SCLN S(AO_COMM)
#define AO_CLN  S(AO_DOT)
#define AO_PLCW S(RALT(AO_DLR)) // ¶
#define AO_BSLS BP_BSLS
// Diacritical dead keys
#define AC_GRAV RALT(AO_EGRV)   // `
#define AC_ACUT RALT(KC_W)      // ´
#define AC_CORN RSA(KC_M)       // ̛
#define AC_BREV RALT(KC_L)      // ˘
#define AC_CEDI RALT(KC_H)      // ¸
#define AC_BDOT RALT(KC_DOT)    //  ̣
#define AC_ADOT RSA(KC_D)       // ˙
#define AC_CRCL RALT(KC_M)      // °
#define AC_BCOM RSA(KC_G)       // ,
#define AC_STRK RALT(KC_O)      // /
#define AC_HSTK RALT(KC_LBRC)   // -
#define AC_HTCK RALT(KC_U)      // ˇ
#define AC_HMCN RSA(KC_N)       //  ̉
#define AC_OGNK RALT(KC_SLSH)   // ˛
// Numbers
#define N_1 S(KC_1)
#define N_2 S(KC_2)
#define N_3 S(KC_3)
#define N_4 S(KC_4)
#define N_5 S(KC_5)
#define N_6 S(KC_6)
#define N_7 S(KC_7)
#define N_8 S(KC_8)
#define N_9 S(KC_9)
#define N_0 S(KC_0)

bool aokb_auel_common_process_keys(uint16_t keycode, keyrecord_t *record);
bool aokb_auel_dev_process_keys(uint16_t keycode, keyrecord_t *record);
bool aokb_auel_doc_process_keys(uint16_t keycode, keyrecord_t *record);