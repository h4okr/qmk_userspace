#include QMK_KEYBOARD_H
#include "./layers.h"
#include "../../../../../../users/h4okr/aokb/keydef.h"
#include "../../../../../../users/h4okr/aokb/keys/auel.h"
#include "../../../../../../users/h4okr/aokb/keys/azerty.h"
#include "../../../../../../users/h4okr/aokb/keys/bepo.h"
#include "../../../../../../users/h4okr/aokb/keys/custom_keycodes.h"
#include "../../../../../../users/h4okr/aokb/keys/utilities.h"
#include "../../../../../../users/h4okr/aokb/shift/custom_shift.c"

#define AO_MPLS RIGHT_POINTER_DEFAULT_DPI_FORWARD
#define AO_MMNS RIGHT_POINTER_DEFAULT_DPI_REVERSE

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _CTRL, _BLUE_WRITE, _DIACRITIC);
  return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  /*
  if (!aokb_common_process_keys(keycode, record)) { return false; }
  */
  if (!aokb_utilities_process_keys(keycode, record)) { return false; }
  if (!aokb_auel_common_process_keys(keycode, record)) { return false; }
  if (!aokb_auel_dev_process_keys(keycode, record)) { return false; }
  if (!aokb_auel_doc_process_keys(keycode, record)) { return false; }
  if (!aokb_azerty_process_keys(keycode, record)) { return false; }
  if (!aokb_ide_process_keys(keycode, record)) { return false; }
  //if (!aokb_simple_bl_process_keys(keycode, record)) { return false; }

  return true;
}

// TODO move this to user
bool caps_word_press_user(uint16_t keycode) {
  switch (keycode) {
    // Keycodes that continue Caps Word, with shift applied.
    case KC_A ... KC_Z:
    case AO_H:
    case AO_N:
    case AO_M:
    case AO_W:
    case AO_Z:
    case AO_F:
    case AO_G:
      add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
      return true;
    case KC_SPC:
      add_weak_mods(MOD_BIT(KC_RALT));
      return true;

    // Keycodes that continue Caps Word, without shifting.
    case N_0:
    case N_1:
    case N_2:
    case N_3:
    case N_4:
    case N_5:
    case N_6:
    case N_7:
    case N_8:
    case N_9:
    case KC_P1 ... KC_P0:
    case KC_1:
    case KC_4:
    case KC_5:
    case KC_DEL:
    case KC_BSPC:
    case KC_UNDS:
    case KC_MINS:
      return true;

    default:
      return false;  // Deactivate Caps Word.
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_AUEL_WRITE] = LAYOUT_fun_full_bottom_row(
    QK_LOCK,KC_ESC, KC_ENT, _______,MS_BTN2,MS_BTN1,                                      MS_BTN1,MS_BTN2,AO_CFG, AO_LALT,RECORD, REPLAY,
    KC_PSCR,AO_DQOT,AO_INF, AO_SUP, AO_POP, AO_PCL,                                       AO_AROB,AO_PLUS,AO_DASH,AO_SLSH,AO_ASTR,AO_EQL,
    KC_TAB, AO_Y,   AO_CIRC,AO_EACU,AO_EGRV,AO_EXLM,                                      AO_X,   AO_N,   AO_M,   AO_K,   AO_W,   AO_Z,
    AO_LALT,AO_A,   AO_U,   AO_E,   AO_L,   AO_APOS,                                      AO_R,   AO_T,   AO_S,   AO_Q,   AO_P,   AO_F,
    AO_LCTL,AO_H,   AO_J,   AO_I,   AO_O,   AO_COMM,                                      AO_DOT, AO_D,   AO_C,   AO_G,   AO_B,   AO_V,
    KC_LEFT,KC_RGHT,AO_GUI, AO_DLR, KC_SPC,   KC_LSFT,KC_SPC, AO_FN,    KC_ENT, KC_SPC, AO_MOVE,  KC_SPC, AO_FN,  KC_ENT, AO_AO,  AO_LCTL,
                                              AO_NUM, AO_BLUE,KC_TAB,   AO_NUM, KC_RSFT,AO_BLUE
  ),
  [_AUEL_CODE] = LAYOUT_fun_full_bottom_row(
    QK_LOCK,KC_ESC, KC_ENT, _______,MS_BTN2,MS_BTN1,                                      MS_BTN1,MS_BTN2,AO_CFG, AO_LALT,RECORD, REPLAY,
    KC_PSCR,AO_DQOT,DV_INF, DV_SUP, AO_POP, AO_PCL,                                       AO_AROB,AO_PLUS,AO_DASH,AO_SLSH,AO_ASTR,DV_EQL,
    KC_TAB, AO_Y,   AO_CIRC,AO_EACU,AO_EGRV,DV_LNOT,                                      AO_X,   AO_N,   AO_M,   AO_K,   AO_W,   AO_Z,
    AO_LALT,AO_A,   AO_U,   AO_E,   AO_L,   AO_APOS,                                      AO_R,   AO_T,   AO_S,   AO_Q,   AO_P,   AO_F,
    AO_LCTL,AO_H,   AO_J,   AO_I,   AO_O,   AO_COMM,                                      AO_DOT, AO_D,   AO_C,   AO_G,   AO_B,   AO_V,
    KC_LEFT,KC_RGHT,AO_GUI, AO_DLR, KC_SPC,   KC_LSFT,KC_SPC, AO_FN,    KC_ENT, KC_SPC, AO_MOVE,  KC_SPC, AO_FN,  KC_ENT, AO_AO,  AO_LCTL,
                                              AO_NUM, DV_BLUE,KC_TAB,   AO_NUM, KC_RSFT,DV_BLUE
  ),
  [_AZERTY] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,AZ_DQOT,AZ_INF, AZ_SUP, AZ_POP, AZ_PCL,                                       AZ_AROB,AZ_PLUS,AZ_DASH,AZ_SLSH,AZ_ASTR,AZ_EQL,
    _______,KC_Y,   KC_LBRC,AZ_EACU,AZ_EGRV,KC_SLSH,                                      KC_X,   KC_N,   KC_SCLN,KC_K,   KC_Z,   KC_W,
    AZ_LALT,KC_Q,   KC_U,   KC_E,   KC_L,   AZ_QUOT,                                      KC_R,   KC_T,   KC_S,   KC_A,   KC_P,   KC_F,
    AZ_LCTL,KC_H,   KC_J,   KC_I,   KC_O,   AZ_COMM,                                      AZ_DOT, KC_D,   KC_C,   KC_G,   KC_B,   KC_V,
    _______,_______,AZ_GUI, AZ_DLR, _______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,AZ_RCTL,
                                              _______,AZ_BLUE,_______,  _______,_______,AZ_BLUE
  ),
  [_ADVANCED_MODS] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,ADV_FN,   _______,_______,ADV_MOV,  _______,ADV_FN, _______,_______,_______,
                                              ADV_NUM,_______,_______,  ADV_NUM,_______,_______
  ),
  [_DIACRITIC] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,AC_HTCK,_______,AC_ACUT,AC_GRAV,AC_CORN,                                      _______,_______,_______,_______,_______,_______,
    _______,AC_OGNK,AC_BREV,AC_HSTK,AC_STRK,AC_HMCN,                                      _______,_______,_______,_______,_______,_______,
    _______,AC_CEDI,AC_BDOT,AC_ADOT,AC_CRCL,AC_BCOM,                                      _______,_______,AC_CEDI,_______,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_CTRL] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,F_PROCS,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                         KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,AO_EGRV,_______,AO_Z,   AO_Y,   _______,                                      AO_J,   _______,_______,_______,_______,AO_EACU,
    _______,_______,_______,AO_S,   _______,AO_F,                                         _______,_______,AO_E,   _______,_______,AO_APOS,
    _______,_______,AO_X,   AO_C,   AO_V,   _______,                                      _______,_______,AO_I,   _______,_______,AO_O,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_CTRL_AZERTY] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                         KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,AZ_EGRV,_______,KC_Z,   KC_Y,   _______,                                      KC_J,   _______,_______,_______,_______,AZ_EACU,
    _______,_______,_______,KC_S,   _______,KC_F,                                         _______,_______,KC_E,   _______,_______,AZ_APOS,
    _______,_______,KC_X,   KC_C,   KC_V,   _______,                                      _______,_______,KC_I,   _______,_______,KC_O,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_MODS_AZERTY] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                         KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,_______,_______,_______,_______,KC_EQL,                                       _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,KC_V,   _______,                                      _______,_______,_______,_______,_______,KC_O,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_BLUE_CODE] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,                                      AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,DV_NEQL,
    _______,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,AO_LNOT,                                      AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
    _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,                                      AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
    _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,                                       AO_ELLI,AO_SLSH,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
    AO_LARR,AO_RARR,_______,AO_PRGH,AO_UNDS,  _______,AO_UNDS,_______,  _______,AO_UNDS,_______,  AO_UNDS,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_BLUE_WRITE] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,                                      AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,AO_NEQL,
    _______,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,AO_LNOT,                                      AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
    _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,                                      AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
    _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,                                       AO_ELLI,AO_SLSH,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
    AO_LARR,AO_RARR,_______,AO_PRGH,AO_UNDS,  _______,AO_UNDS,_______,  _______,AO_UNDS,_______,  AO_UNDS,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_BLUE_AZERTY] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,AZ_LCBR,AZ_RCBR,                                      _______,_______,_______,_______,AZ_DEGR,_______,
    _______,_______,AZ_ECIR,AZ_DTLD,AZ_GRAV,_______,                                      _______,AZ_LBRC,AZ_RBRC,AZ_INF, AZ_SUP, AZ_SLSH,
    _______,AZ_AGRV,AZ_UGRV,AZ_EURO,_______,_______,                                      AZ_AMPS,AZ_PIPE,AZ_DLR, AZ_LCBR,AZ_RCBR,AZ_BSLS,
    _______,_______,_______,_______,_______,_______,                                      AZ_ELLI,AZ_SLSH,AZ_CCED,AZ_LPAR,AZ_RPAR,_______,
    _______,_______,_______,_______,_______,  _______,AZ_UNDS,_______,  _______,AZ_UNDS,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_NUM] = LAYOUT_fun_full_bottom_row(
    KC_NUM, _______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,N_1,    N_2,    N_3,    N_4,    N_5,                                          AO_X,   AO_D,   AO_E,   AO_F,   KC_PAST,AO_Y,
    _______,N_6,    N_7,    N_8,    N_9,    N_0,                                          AO_C,   KC_P7,  KC_P8,  KC_P9,  KC_PSLS,KC_6,
    _______,KC_PSLS,KC_PAST,KC_PMNS,KC_PPLS,_______,                                      AO_B,   KC_P4,  KC_P5,  KC_P6,  KC_PMNS,KC_F9,
    _______,_______,AO_SCLN,AO_DOT, AO_CLN, _______,                                      AO_A,   KC_P1,  KC_P2,  KC_P3,  KC_PPLS,KC_EQL,
    KC_BSPC,KC_DEL, KC_CALC,AO_DIES,_______,  _______,_______,_______,  _______,_______,_______,  KC_P0,  KC_PDOT,KC_PENT,AO_DOT, _______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_MODS] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                         KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,_______,_______,_______,_______,KC_EQL,                                       _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,AO_V,   _______,                                      _______,_______,_______,_______,_______,AO_O,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_MOVE] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      F_CLOSE,AO_CUT, AO_COPY,MV_LNUP,MV_LNDN,S_PASTE,
    _______,_______,_______,_______,_______,_______,                                      DL_LINE,KC_BSPC,KC_DEL, KC_PGUP,KC_PGDN,AO_PSTE,
    _______,_______,_______,_______,_______,_______,                                      KC_INS, KC_LEFT,KC_RGHT,KC_UP,  KC_DOWN,MS_WHLU,
    _______,_______,_______,_______,_______,_______,                                      SL_WORD,MV_WDST,MV_WDEN,MV_LNST,MV_LNEN,MS_WHLD,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_CONFIG] = LAYOUT_fun_full_bottom_row(
    KC_SLEP,QK_BOOT,_______,_______,_______,_______,                                      AO_MPLS,AO_MMNS,_______,RECSTOP,RECORD2,REPLAY2,
    _______,_______,_______,_______,RM_HUED,RM_HUEU,                                      KC_BRIU,KC_BRID,_______,_______,_______,_______,
    _______,_______,_______,_______,RM_PREV,RM_NEXT,                                      _______,_______,_______,_______,_______,_______,
    _______,AO_ADVM,_______,_______,RM_OFF, RM_ON,                                        _______,AO_WRIT,_______,_______,_______,_______,
    _______,_______,_______,_______,RM_VALD,RM_VALU,                                      _______,AO_DEV, _______,_______,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_FUNCTION] = LAYOUT_fun_full_bottom_row(
    KC_SCRL,KC_PAUS,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                                        KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
    _______,_______,_______,_______,_______,KC_F12,                                       _______,_______,_______,_______,_______,_______,
    _______,KC_VOLU,KC_MUTE,KC_WBAK,KC_WFWD,AO_QUES,                                      _______,_______,_______,_______,_______,_______,
    _______,KC_VOLD,KC_MPRV,KC_MPLY,KC_MNXT,AO_SCLN,                                      AO_CLN, _______,_______,_______,_______,_______,
    _______,_______,KC_APP, _______,AO_NBSS,  _______,AO_NBSS,_______,  _______,AO_NBSS,_______,  AO_NBSS,_______,KC_APP, _______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
  [_IDE_SHORTCUTS] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      IDE_XPD,IDE_SRD,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      IDE_SOL,IDE_TYP,IDE_MPL,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      IDE_MNU,IDE_CMT,IDE_UNC,IDE_SUP,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  )
/*
  [1] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
*/
  
};

/* Empty layer

  [] = LAYOUT_fun_full_bottom_row(
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,                                      _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,
                                              _______,_______,_______,  _______,_______,_______
  ),
*/