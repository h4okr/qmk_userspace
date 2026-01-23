#pragma once

#define ___X___ KC_TRNS

//#define 


/**
 *     bool process_record_user(uint16_t keycode, keyrecord_t* record) {
 *       if (!aokb_common_process_keys(keycode, record)) { return false; }
 *       // Your macros ...
 *
 *       return true;
 *     }
 */
bool aokb_common_process_keys(uint16_t keycode, keyrecord_t *record);