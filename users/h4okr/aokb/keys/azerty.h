#pragma once
#include QMK_KEYBOARD_H

#define AZ_LBRC RALT(KC_5)
#define AZ_LCBR RALT(KC_4)
#define AZ_RBRC RALT(KC_MINS)
#define AZ_RCBR RALT(KC_EQL)
#define AZ_PERC S(KC_QUOT)
#define AZ_BSLS RALT(KC_8)
#define AZ_DIES RALT(KC_3)
#define AZ_QUES S(KC_M)
#define AZ_SCLN KC_COMM
#define AZ_COLN KC_DOT
#define AZ_DTLD RALT(KC_2)
#define AZ_PIPE RALT(KC_6)
#define AZ_DEGR S(KC_MINS)
#define AZ_EURO RALT(KC_E)
#define AZ_TAROB RALT(KC_0)
#define AZ_TSLSH S(KC_DOT)

bool aokb_azerty_process_keys(uint16_t keycode, keyrecord_t *record);