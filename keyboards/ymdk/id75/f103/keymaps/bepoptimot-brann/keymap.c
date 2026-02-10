#include QMK_KEYBOARD_H
#include "features/custom_shift_keys.h"

// Layers
enum {
    _BEPOPTIMOT,
    _VARIATION,
    _FUNCTION,
    _CONFIG,
    _EMUL_AZERTY,
    _EMUL_AZERTY_VARIATION
};

// Layers control
#define BEPOPTI   DF(_BEPOPTIMOT)
#define AZERTY    DF(_EMUL_AZERTY)
#define FUNC      MO(_FUNCTION)
#define CONFIG    MO(_CONFIG)
#define VARIAT    MO(_VARIATION)

#define BP_DLR  KC_GRV
#define BP_DQUO KC_1
#define BP_LDAQ KC_2
#define BP_RDAQ KC_3
#define BP_LPRN KC_4
#define BP_RPRN KC_5
#define BP_AT   KC_6
#define BP_PLUS KC_7
#define BP_MINS KC_8
#define BP_SLSH KC_9
#define BP_ASTR KC_0
#define BP_EQL  KC_MINS
#define BP_PERC KC_EQL
#define BP_B    KC_Q
#define BP_EACU KC_W
#define BP_P    KC_E
#define BP_O    KC_R
#define BP_EGRV KC_T
#define BP_DCIR KC_Y
#define BP_V    KC_U
#define BP_D    KC_I
#define BP_L    KC_O
#define BP_J    KC_P
#define BP_Z    KC_LBRC
#define BP_W    KC_RBRC
#define BP_A    KC_A
#define BP_U    KC_S
#define BP_I    KC_D
#define BP_E    KC_F
#define BP_COMM KC_G
#define BP_C    KC_H
#define BP_T    KC_J
#define BP_S    KC_K
#define BP_R    KC_L
#define BP_N    KC_SCLN
#define BP_M    KC_QUOT
#define BP_CCED KC_BSLS
#define BP_ECIR KC_NUBS
#define BP_AGRV KC_Z
#define BP_Y    KC_X
#define BP_X    KC_C
#define BP_DOT  KC_V
#define BP_K    KC_B
#define BP_QUOT KC_N
#define BP_Q    KC_M
#define BP_G    KC_COMM
#define BP_H    KC_DOT
#define BP_F    KC_SLSH
#define BP_HASH S(BP_DLR)
#define BP_1    S(BP_DQUO)
#define BP_2    S(BP_LDAQ)
#define BP_3    S(BP_RDAQ)
#define BP_4    S(BP_LPRN)
#define BP_5    S(BP_RPRN)
#define BP_6    S(BP_AT)
#define BP_7    S(BP_PLUS)
#define BP_8    S(BP_MINS)
#define BP_9    S(BP_SLSH)
#define BP_0    S(BP_ASTR)
#define BP_DEG  S(BP_EQL)
#define BP_GRV  S(BP_PERC)
#define BP_EXLM S(BP_DCIR)
#define BP_SCLN S(BP_COMM)
#define BP_COLN S(BP_DOT)
#define BP_QUES S(BP_QUOT)
#define BP_NBSP S(KC_SPC)
#define BP_NDSH ALGR(BP_DLR)
#define BP_MDSH ALGR(BP_DQUO)
#define BP_LABK ALGR(BP_LDAQ)
#define BP_RABK ALGR(BP_RDAQ)
#define BP_LBRC ALGR(BP_LPRN)
#define BP_RBRC ALGR(BP_RPRN)
#define BP_CIRC ALGR(BP_AT)
#define BP_PLMN ALGR(BP_PLUS)
#define BP_MMNS ALGR(BP_MINS)
#define BP_DIV  ALGR(BP_SLSH)
#define BP_MUL  ALGR(BP_ASTR)
#define BP_NEQL ALGR(BP_EQL)
#define BP_PERM ALGR(BP_PERC)
#define BP_PIPE ALGR(BP_B)
#define BP_ACUT ALGR(BP_EACU)
#define BP_AMPR ALGR(BP_P)
#define BP_OE   ALGR(BP_O)
#define BP_DGRV ALGR(BP_EGRV)
#define BP_IEXL ALGR(BP_DCIR)
#define BP_CARN ALGR(BP_V)
#define BP_ETH  ALGR(BP_D)
#define BP_DSLS ALGR(BP_L)
#define BP_IJ   ALGR(BP_J)
#define BP_SCHW ALGR(BP_Z)
#define BP_BREV ALGR(BP_W)
#define BP_AE   ALGR(BP_A)
#define BP_UGRV ALGR(BP_U)
#define BP_DIAE ALGR(BP_I)
#define BP_EURO ALGR(BP_E)
#define BP_COPY ALGR(BP_C)
#define BP_THRN ALGR(BP_T)
#define BP_SS   ALGR(BP_S)
#define BP_REGD ALGR(BP_R)
#define BP_DTIL ALGR(BP_N)
#define BP_MACR ALGR(BP_M)
#define BP_CEDL ALGR(BP_CCED)
#define BP_BSLS ALGR(BP_AGRV)
#define BP_LCBR ALGR(BP_Y)
#define BP_RCBR ALGR(BP_X)
#define BP_ELLP ALGR(BP_DOT)
#define BP_TILD ALGR(BP_K)
#define BP_IQUE ALGR(BP_QUES)
#define BP_RNGA ALGR(BP_Q)
#define BP_DGRK ALGR(BP_G)
#define BP_DAGG ALGR(BP_H)
#define BP_OGON ALGR(BP_F)
#define BP_UNDS ALGR(KC_SPC)
#define BP_PARA S(ALGR(BP_DLR))
#define BP_DLQU S(ALGR(BP_DQUO))
#define BP_LDQU S(ALGR(BP_LDAQ))
#define BP_RDQU S(ALGR(BP_RDAQ))
#define BP_LEQL S(ALGR(BP_LPRN))
#define BP_GEQL S(ALGR(BP_RPRN))
#define BP_NOT  S(ALGR(BP_PLUS))
#define BP_QRTR S(ALGR(BP_MINS))
#define BP_HALF S(ALGR(BP_SLSH))
#define BP_TQTR S(ALGR(BP_ASTR))
#define BP_PRIM S(ALGR(BP_EQL))
#define BP_DPRM S(ALGR(BP_PERC))
#define BP_BRKP S(ALGR(BP_B))
#define BP_DACU S(ALGR(BP_EACU))
#define BP_SECT S(ALGR(BP_P))
#define BP_DOTA S(ALGR(BP_I))
#define BP_CURR S(ALGR(BP_E))
#define BP_HORN S(ALGR(BP_COMM))
#define BP_LNGS S(ALGR(BP_C))
#define BP_TM   S(ALGR(BP_R))
#define BP_MORD S(ALGR(BP_M))
#define BP_DCMM S(ALGR(BP_CCED))
#define BP_LSQU S(ALGR(BP_Y))
#define BP_RSQU S(ALGR(BP_X))
#define BP_MDDT S(ALGR(BP_DOT))
#define BP_KEYB S(ALGR(BP_K))
#define BP_HOKA S(ALGR(BP_QUOT))
#define BP_DOTB S(ALGR(BP_Q))
#define BP_DDAG S(ALGR(BP_H))
#define BP_FORD S(ALGR(BP_F))
#define BP_NNBS S(ALGR(KC_SPC))

#define BP_PRGH RSA(KC_E)   // §
#define BP_PDMC RSA(KC_GRV) // ¶
#define BP_SQUO RALT(BP_COMM)  // '
#define INFEQUAL RSA(KC_4)  // ⩽
#define SUPEQUAL RSA(KC_5)  // ⩾
#define BP_IQUM RALT(BP_QUOT)
#define BP_ELLI RALT(KC_V)  // …
#define BP_MULT RALT(KC_0)  // ×
#define BP_INF RALT(KC_2) // <
#define BP_SUP RALT(KC_3) // >

// AZERTY definitions
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

enum custom_keycodes {
  FIRST = SAFE_RANGE,
  AZ_DQOT,
  AZ_GRAV,
  AZ_INF,
  AZ_INFQ,
  AZ_SUP,
  AZ_SUPQ,
  AZ_LPAR,
  AZ_RPAR,
  AZ_AROB,
  AZ_PLUS,
  AZ_DASH,
  AZ_MDSH,
  AZ_SLSH,
  AZ_ASTR,
  AZ_EQL,
  AZ_DEQL,
  AZ_NEQL,
  AZ_DLR,
  AZ_QUOT,
  AZ_COMM,
  AZ_DOT,
  AZ_AMPS,
  AZ_UNDS,
  AZ_EGRV,
  AZ_EACU,
  AZ_AGRV,
  AZ_UGRV,
  AZ_CCED,
  AZ_ECIR,
  AZ_ELLI
};

const custom_shift_key_t custom_shift_keys[] = {
    {BP_EQL, BP_BSLS},
    {BP_PRGH, BP_PDMC},
    {BP_MULT, BP_DLQU}, // guillemet-virgule double inférieur
    {BP_INF, INFEQUAL},     // < → ⩽
    {BP_SUP, SUPEQUAL},     // > → ⩾
    {BP_LBRC, BP_LDQU}, // guillemet-virgule cdouble sup gauche
    {BP_RBRC, BP_RDQU}, // guillemet-virgule cdouble sup droit
    {BP_MDSH, BP_QRTR},
    {BP_MUL, BP_DEG},
  // AZERTY shifted/nevershifted keys
  {AZ_DQOT, AZ_QUOT},
  {AZ_INF, AZ_INFQ},
  {AZ_SUP, AZ_SUPQ},
  {AZ_LPAR, AZ_LBRC},
  {AZ_RPAR, AZ_RBRC},
  {AZ_AROB, AZ_PERC},
  {AZ_PLUS, AZ_PLUS},
  {AZ_DASH, AZ_MDSH},
  {AZ_SLSH, AZ_BSLS},
  {AZ_ASTR, AZ_ASTR},
  {AZ_EQL, AZ_DEQL},
  {AZ_DLR, AZ_DIES},
  {AZ_QUOT, AZ_QUES},
  {AZ_COMM, AZ_SCLN},
  {AZ_DOT, AZ_COLN},
  {AZ_AMPS, AZ_AMPS},
  {AZ_UNDS, AZ_UNDS},
  {AZ_EGRV, AZ_EGRV},
  {AZ_EACU, AZ_EACU},
  {AZ_AGRV, AZ_AGRV},
  {AZ_UGRV, AZ_UGRV},
  {AZ_CCED, AZ_CCED},
  {AZ_ECIR, AZ_ECIR},
};
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Custom shift keys
    if (!process_custom_shift_keys(keycode, record)) { return false; }

    switch (keycode) {
    case AZ_AGRV:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_0));
            return false;
        }
        break;
    case AZ_COMM:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_M));
            return false;
        }
        break;
    case AZ_DOT:
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_COMM)));
            return false;
        }
        break;
    case AZ_EGRV:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_7));
            return false;
        }
        break;
    case AZ_EACU:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_2));
            return false;
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BEPOPTIMOT] = LAYOUT_ortho_5x15(
    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_PGUP,FUNC,   KC_PAUS,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   BP_EQL,
    BP_PERC,BP_DLR, BP_J,   BP_O,   BP_EACU,BP_B,     KC_PGDN,CONFIG, KC_PSCR,  BP_F,   BP_D,   BP_L,   BP_QUOT,BP_Q,   BP_X,
    KC_TAB, BP_A,   BP_I,   BP_E,   BP_U,   BP_COMM,  KC_BSPC,KC_CAPS,KC_DEL,   BP_P,   BP_T,   BP_S,   BP_R,   BP_N,   BP_DCIR,
    KC_LSFT,BP_K,   BP_Y,   BP_EGRV,BP_DOT, BP_W,     KC_HOME,KC_UP,  KC_END,   BP_G,   BP_C,   BP_M,   BP_H,   BP_V,   BP_Z,
    KC_LCTL,KC_LALT,KC_LGUI,VARIAT, KC_SPC, KC_ENT,   KC_LEFT,KC_DOWN,KC_RGHT,  KC_ENT, KC_SPC, VARIAT, KC_RALT,KC_RCTL,KC_RSFT
  ),
  [_EMUL_AZERTY] = LAYOUT_ortho_5x15(
    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,     KC_PGUP,FUNC,   KC_PAUS,  KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_EQL,
    KC_MINS,KC_RBRC,KC_J,   KC_O,   AZ_EACU,KC_B,     KC_PGDN,CONFIG, KC_PSCR,  KC_F,   KC_D,   KC_L,   AZ_QUOT,KC_A,   KC_X,
    KC_TAB, KC_Q,   KC_I,   KC_E,   BP_U,   AZ_COMM,  KC_BSPC,KC_CAPS,KC_DEL,   KC_P,   KC_T,   KC_S,   KC_R,   KC_N,   KC_LBRC,
    KC_LSFT,KC_K,   KC_Y,   AZ_EGRV,AZ_DOT, KC_Z,     KC_HOME,KC_UP,  KC_END,   KC_G,   KC_C,   KC_SCLN,KC_H,   KC_V,   KC_W,
    KC_LCTL,KC_LALT,KC_LGUI,VARIAT, KC_SPC, KC_ENT,   KC_LEFT,KC_DOWN,KC_RGHT,  KC_ENT, KC_SPC, VARIAT, KC_RALT,KC_RCTL,KC_RSFT
  ),
  [_VARIATION] = LAYOUT_ortho_5x15(
    _______,BP_MULT,BP_INF, BP_SUP, BP_LBRC,BP_RBRC,  _______,_______,_______,  BP_CIRC,BP_PLMN,BP_MDSH,BP_DIV, BP_MUL, BP_NEQL,
    BP_PERM,BP_PRGH,BP_IJ,  BP_OE,  BP_DACU,BP_PIPE,  _______,_______,_______,  BP_OGON,BP_ETH, BP_DSLS,BP_IQUM,BP_RNGA,BP_RCBR,
    _______,BP_AGRV,BP_DIAE,BP_EURO,BP_UGRV,BP_SQUO,  _______,_______,_______,  BP_AMPR,BP_THRN,BP_SS,  BP_REGD,BP_DTIL,BP_IEXL,
    _______,BP_TILD,BP_LCBR,BP_DGRV,BP_ELLI,BP_BREV,  _______,_______,_______,  BP_DGRK,BP_CCED,BP_MACR,BP_DAGG,BP_CARN,BP_SCHW,
    _______,_______,KC_APP, _______,BP_UNDS,_______,  _______,_______,_______,  _______,BP_UNDS,_______,_______,_______,_______
  ),
  [_FUNCTION] = LAYOUT_ortho_5x15(
    _______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,    _______,_______,_______,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
    KC_F12, _______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______
  ),
  [_CONFIG] = LAYOUT_ortho_5x15(
    AZERTY,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,KC_VOLU,KC_VOLD,_______,_______,BEPOPTI,
    _______,_______,_______,_______,_______,_______,  _______,_______,KC_MPLY,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  KC_MPRV,KC_MUTE,KC_MNXT,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______,  _______,_______,_______,  _______,_______,_______,_______,_______,_______
  )
};
