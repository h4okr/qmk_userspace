#include QMK_KEYBOARD_H
#include "./layers.h"
#include "../../../../../../users/h4okr/aokb/keydef.h"
#include "../../../../../../users/h4okr/aokb/keys/auel.h"
#include "../../../../../../users/h4okr/aokb/keys/azerty.h"
#include "../../../../../../users/h4okr/aokb/keys/gamecompat.h"
#include "../../../../../../users/h4okr/aokb/keys/mac.h"
#include "../../../../../../users/h4okr/aokb/keys/bepo.h"
#include "../../../../../../users/h4okr/aokb/keys/custom_keycodes.h"
#include "../../../../../../users/h4okr/aokb/keys/utilities.h"
#include "../../../../../../users/h4okr/aokb/light/simple_backlight.c"
#include "../../../../../../users/h4okr/aokb/shift/custom_shift.c"

float intensity = 0.05;

bool rgb_matrix_indicators_user(void) {
  uint8_t current_layer = get_highest_layer(layer_state);
  // functions and special characters
  switch (current_layer) {
    case _AUEL:
      rgb_matrix_set_color_all(0x00, 0xb2/intensity_divider, 0x20/intensity_divider); // ao
      break;
    case _AUEL_MAC:
      rgb_matrix_set_color_all(0x10/intensity_divider, 0x10/intensity_divider, 0x10/intensity_divider); // white
      break;
    case _AUEL_AZERTY:
      rgb_matrix_set_color_all(0x00, 0x45/intensity_divider, 0xb5/intensity_divider); // medium blue
      break;
    case _AUEL_DEV:
      rgb_matrix_set_color_all(0x00, 0x56/intensity_divider, 0x0e/intensity_divider); // dim ao
      break;
    case _GAMING:
      rgb_matrix_set_color_all(0x2f/intensity_divider, 0x00, 0xbc/intensity_divider); // blue-violet
      break;
    case _GAME_COMPAT:
      rgb_matrix_set_color_all(0x20/intensity_divider, 0x00, 0xe0/intensity_divider); // bluer-violet
      break;
    //case _MOVE_GAMING:
    case _MOVE:
    case _MOVE_MAC:
    //case _MOVE_LEFT:
      rgb_matrix_set_color_all(0xe5/intensity_divider, 0x40/intensity_divider, 0x00); // orange
      break;
    case _CTRL_AUEL:
    case _CTRL_AZ:
    case _CTRL_MAC:
      rgb_matrix_set_color_all(0xbb/intensity_divider, 0x00, 0x00); // red
      break;
    case _ALT:
    case _ALT_DEV:
    case _ALT_AZ:
      rgb_matrix_set_color_all(0x00, 0x00, 0xbb/intensity_divider); // blue
      break;
    case _DIACRITIC:
      rgb_matrix_set_color_all(0xbc/intensity_divider, 0x00, 0x9a/intensity_divider); // purple
      break;
    case _NUM:
      rgb_matrix_set_color_all(0x00, 0xbb/intensity_divider, 0x00); // green
      break;
    case _FN:
      rgb_matrix_set_color_all(0xff/intensity_divider, 0xfa/intensity_divider, 0x00); // yellow
      break;
    case _MOD:
    case _MOD_AZ:
      rgb_matrix_set_color_all(0x00, 0xb0/intensity_divider, 0xbc/intensity_divider); // light blue
      break;
      /*
    case _CONFIG:
      rgb_matrix_set_color_all(0xbc/intensity_divider, 0x00, 0x7d/intensity_divider); // pink
      break;*/
    case _POINTER:
      rgb_matrix_set_color_all(0xec/intensity_divider, 0x20/intensity_divider, 0x00); // red-orange
      break;
    default:
      break;
  }
  return false;
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
  if (!aokb_simple_bl_process_keys(keycode, record)) { return false; }

  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_AUEL_WRITE] = LAYOUT_ortho_5x12( // Done
    KC_ESC, AO_DQOT,AO_INF, AO_SUP, AO_POP, AO_PCL,   AO_AROB,AO_PLUS,AO_DASH,AO_SLSH,AO_ASTR,AO_EQL,
    AO_DLR, AO_Y,   AO_CIRC,AO_EACU,AO_EGRV,AO_EXLM,  AO_X,   AO_N,   AO_M,   AO_K,   AO_W,   AO_Z,
    KC_TAB, AO_A,   AO_U,   AO_E,   AO_L,   AO_APOS,  AO_R,   AO_T,   AO_S,   AO_Q,   AO_P,   AO_F,
    AO_LALT,AO_H,   AO_J,   AO_I,   AO_O,   AO_COMM,  AO_DOT, AO_D,   AO_C,   AO_G,   AO_B,   AO_V,
    AO_LCTL,AO_ALT, AO_GUI, AO_NUM, KC_LSFT,KC_SPC,   KC_SPC, AO_MOVE,AO_ALT, KC_ENT, AO_RCTL,AO_FN
  ),
  [_MODS] = LAYOUT_ortho_5x12(
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,_______,_______,_______,_______,KC_EQL,   _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,AO_V,   _______,  _______,_______,_______,_______,_______,AO_O,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_AUEL_DEV] = LAYOUT_ortho_5x12( // Done
    _______,_______,DV_INF, DV_SUP, _______,_______,  _______,_______,_______,_______,_______,DV_EQL,
    _______,_______,_______,_______,_______,DV_LNOT,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,DV_ALT, _______,_______,_______,_______,  _______,_______,DV_ALT, _______,_______,_______
  ),
  [_GAMING] = LAYOUT_ortho_5x12( // Done
    ___X___,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    KC_GRV, KC_T,   KC_Q,   KC_W,   KC_E,   KC_R,     KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,
    ___X___,KC_G,   KC_A,   KC_S,   KC_D,   KC_F,     KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_RBRC,
    ___X___,KC_B,   KC_Z,   KC_X,   KC_C,   KC_V,     KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_QUOT,
    ___X___,KC_EQL, KC_NUBS,KC_NUHS,___X___,___X___,  ___X___,_______,_______,___X___,_______,_______
  ),
  [_GAME_COMPAT] = LAYOUT_ortho_5x12( // Done
    _______,_______,GC_2,   GC_3,   _______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,GC_ECIR,_______,_______,GC_EXLM,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,KC_NUBS,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_FN] = LAYOUT_ortho_5x12( // Done
    QK_BOOT,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,    KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
    _______,_______,_______,_______,_______,KC_PAUS,  DF_AUEL,_______,DF_MAC, _______,_______,DF_AZ,
    _______,KC_VOLU,KC_MUTE,KC_WBAK,KC_WFWD,KC_APP,   KC_BRIU,_______,_______,_______,RM_ON,  BL_UP,
    _______,KC_VOLD,KC_MPRV,KC_MPLY,KC_MNXT,KC_F12,   KC_BRID,DEVMODE,TG_GCMP,GAMING, RM_OFF, BL_DOWN,
    _______,_______,KC_PSCR,_______,_______,AO_NBSS,  AO_NBSS,_______,_______,_______,_______,___X___
  ),
  [_MOVE] = LAYOUT_ortho_5x12( // Done
    _______,_______,_______,_______,_______,_______,  F_CLOSE,AO_CUT, AO_COPY,MV_LNUP,MV_LNDN,S_PASTE,
    _______,_______,_______,_______,_______,_______,  DL_LINE,KC_BSPC,KC_DEL, KC_PGUP,KC_PGDN,AO_PSTE,
    _______,_______,_______,_______,_______,_______,  KC_INS, KC_LEFT,KC_RGHT,KC_UP,  KC_DOWN,MS_WHLU,
    _______,_______,_______,_______,_______,_______,  SL_WORD,MV_WDST,MV_WDEN,MV_LNST,MV_LNEN,MS_WHLD,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_POINTER] = LAYOUT_ortho_5x12( // Done
    _______,MS_ACL0,MS_ACL1,MS_ACL2,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,MS_WHLL,MS_WHLR,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,MS_BTN2,MS_BTN1,_______,  _______,_______,MS_BTN1,MS_UP,  MS_BTN2,MS_WHLU,
    _______,KC_LCTL,AO_CUT, AO_COPY,AO_PSTE,S_PASTE,  _______,_______,MS_LEFT,MS_DOWN,MS_RGHT,MS_WHLD,
    _______,_______,_______,_______,AO_PNTR,_______,  _______,___X___,_______,_______,_______,___X___
  ),
  [_MOVE_MAC] = LAYOUT_ortho_5x12( // Done
    _______,_______,_______,_______,_______,_______,  M_CLOSE,KC_CUT, KC_COPY,MV_LNUP,MM_LNDN,KC_PSTE,
    _______,_______,_______,_______,_______,_______,  MM_DLLN,KC_BSPC,KC_DEL, KC_PGUP,KC_PGDN,_______,
    _______,_______,_______,_______,_______,_______,  KC_INS, KC_LEFT,KC_RGHT,KC_UP,  KC_DOWN,MS_WHLU,
    _______,_______,_______,_______,_______,_______,  MM_SLWD,MM_WDST,MM_WDEN,MM_LNST,MM_LNEN,MS_WHLD,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_CTRL_AUEL] = LAYOUT_ortho_5x12( // Done
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,AO_EGRV,_______,AO_Z,   AO_Y,   _______,  AO_J,   _______,_______,_______,_______,AO_EACU,
    _______,_______,_______,AO_S,   _______,AO_F,     _______,_______,AO_E,   _______,_______,AO_APOS,
    _______,_______,AO_X,   AO_C,   AO_V,   _______,  _______,_______,AO_I,   _______,_______,AO_O,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_CTRL_MAC] = LAYOUT_ortho_5x12( // Done
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,AO_EGRV,_______,KC_LBRC,M_REDO, _______,  AO_J,   _______,_______,_______,_______,AO_EACU,
    _______,_______,_______,AO_S,   _______,AO_F,     _______,_______,AO_E,   _______,_______,AO_APOS,
    _______,_______,AO_X,   AO_C,   AO_V,   _______,  _______,_______,AO_I,   _______,_______,AO_O,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_CTRL_AZ] = LAYOUT_ortho_5x12(
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,AZ_EGRV,_______,KC_Z,   KC_Y,   _______,  KC_J,   _______,_______,_______,_______,AZ_EACU,
    _______,_______,_______,KC_S,   _______,KC_F,     _______,_______,KC_E,   _______,_______,AZ_APOS,
    _______,_______,KC_X,   KC_C,   KC_V,   _______,  _______,_______,KC_I,   _______,_______,KC_O,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_MOD_AZ] = LAYOUT_ortho_5x12(
    _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
    _______,_______,_______,_______,_______,KC_EQL,   _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,KC_V,   _______,  _______,_______,_______,_______,_______,KC_O,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_ALT] = LAYOUT_ortho_5x12(
    _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,  AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,AO_NEQL,
    AO_PRGH,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,AO_LNOT,  AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
    _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,  AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
    _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,   AO_ELLI,AO_SLSH,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
    _______,_______,_______,_______,___X___,AO_UNDS,  AO_UNDS,_______,___X___,_______,_______,_______
  ),
  [_ALT_DEV] = LAYOUT_ortho_5x12(
    _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,  AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,DV_NEQL,
    AO_PRGH,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,AO_LNOT,  AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
    _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,  AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
    _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,   AO_ELLI,AO_SLSH,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
    _______,_______,_______,_______,___X___,AO_UNDS,  AO_UNDS,_______,___X___,_______,_______,_______
  ),
  [_ALT_AZ] = LAYOUT_ortho_5x12(
    _______,_______,_______,_______,AZ_LCBR,AZ_RCBR,  _______,_______,_______,_______,AZ_DEGR,_______,
    _______,_______,AZ_ECIR,AZ_DTLD,AZ_GRAV,_______,  _______,AZ_LBRC,AZ_RBRC,AZ_INF, AZ_SUP, AZ_SLSH,
    _______,AZ_AGRV,AZ_UGRV,AZ_EURO,_______,_______,  AZ_AMPS,AZ_PIPE,AZ_DLR, AZ_LCBR,AZ_RCBR,AZ_BSLS,
    _______,_______,_______,_______,_______,_______,  AZ_ELLI,AZ_SLSH,AZ_CCED,AZ_LPAR,AZ_RPAR,_______,
    _______,_______,_______,_______,___X___,AZ_UNDS,  AZ_UNDS,_______,___X___,_______,_______,_______
  ),
  [_DIACRITIC] = LAYOUT_ortho_5x12( // Done
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,AC_HTCK,_______,AC_ACUT,AC_GRAV,AC_CORN,  _______,_______,_______,_______,_______,_______,
    _______,AC_OGNK,AC_BREV,AC_HSTK,AC_STRK,AC_HMCN,  _______,_______,_______,_______,_______,_______,
    _______,AC_CEDI,AC_BDOT,AC_ADOT,AC_CRCL,AC_BCOM,  _______,_______,AC_CEDI,_______,_______,_______,
    ___X___,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_NUM] = LAYOUT_ortho_5x12( // Done
    KC_NUM, N_1,    N_2,    N_3,    N_4,    N_5,      AO_X,   AO_D,   AO_E,   AO_F,   KC_PAST,AO_Y,
    AO_DIES,N_6,    N_7,    N_8,    N_9,    N_0,      AO_C,   KC_P7,  KC_P8,  KC_P9,  KC_PSLS,KC_6,
    _______,KC_PSLS,KC_PAST,KC_PMNS,KC_PPLS,_______,  AO_B,   KC_P4,  KC_P5,  KC_P6,  KC_PMNS,KC_F9,
    _______,_______,AO_SCLN,AO_DOT, AO_CLN, _______,  AO_A,   KC_P1,  KC_P2,  KC_P3,  KC_PPLS,KC_EQL,
    _______,_______,KC_CALC,___X___,AO_PNTR,_______,  _______,_______,KC_P0,  KC_PENT,KC_PDOT,AO_DOT
  ),
  [_AUEL_MAC] = LAYOUT_ortho_5x12( // Done
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,_______,_______,_______,
    MC_CTL, _______,KC_LCTL,_______,_______,_______,  _______,MC_MOVE,_______,_______,MC_CTL, _______
  ),
  [_AUEL_AZERTY] = LAYOUT_ortho_5x12( // Done
    _______,AZ_DQOT,AZ_INF, AZ_SUP, AZ_POP, AZ_PCL,   AZ_AROB,AZ_PLUS,AZ_DASH,AZ_SLSH,AZ_ASTR,AZ_EQL,
    AZ_DLR, KC_Y,   KC_LBRC,AZ_EACU,AZ_EGRV,KC_SLSH,  KC_X,   KC_N,   KC_SCLN,KC_K,   KC_Z,   KC_W,
    _______,KC_Q,   KC_U,   KC_E,   KC_L,   AZ_QUOT,  KC_R,   KC_T,   KC_S,   KC_A,   KC_P,   KC_F,
    _______,KC_H,   KC_J,   KC_I,   KC_O,   AZ_COMM,  AZ_DOT, KC_D,   KC_C,   KC_G,   KC_B,   KC_V,
    AZ_LCTL,AZ_LALT,AZ_GUI, _______,AZ_ALT, _______,  _______,_______,AZ_ALT, _______,AZ_RCTL,_______
  )
};