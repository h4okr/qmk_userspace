#include QMK_KEYBOARD_H
#include "./custom_keycodes.h"

#define S_PASTE G(KC_U)
// 2.C.1 Movements
#define MV_WDST C(KC_LEFT) // move to word start
#define MM_WDST A(KC_LEFT) // Mac move to word start
#define MV_WDEN C(KC_RGHT) // move to word end
#define MM_WDEN A(KC_RGHT) // Mac move to word end
#define MV_LNST KC_HOME // move to line start
#define MM_LNST G(KC_LEFT) // Mac move to line start
#define MV_LNEN KC_END  // move to line end
#define MM_LNEN G(KC_RGHT)  // Mac move to line end
#define MV_LNUP A(KC_UP) // move line up
#define MM_LNUP G(S(KC_UP)) // Mac  move line up
#define MV_LNDN A(KC_DOWN) // move line down
#define MM_LNDN G(S(KC_DOWN)) // Mac move line down
// 2.C.2 Commands
#define F_CLOSE A(KC_F4) // close app
#define F_PROCS C(S(KC_ESC)) // see processes
#define RECORD  DM_REC1
#define RECORD2 DM_REC2
#define RECSTOP DM_RSTP
#define REPLAY  DM_PLY1
#define REPLAY2 DM_PLY2

bool aokb_utilities_process_keys(uint16_t keycode, keyrecord_t *record);
bool aokb_ide_process_keys(uint16_t keycode, keyrecord_t *record);