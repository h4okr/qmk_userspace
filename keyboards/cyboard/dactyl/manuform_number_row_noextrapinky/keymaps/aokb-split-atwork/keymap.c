// ATTENTION fichier récupéré de mon ancienne configuration, inutilisable tel quel.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_AUEL] = LAYOUT_manuform_num_noextrapinky(
        KC_ESC, AO_DQOT,DV_INF, DV_SUP, AO_POP, AO_PCL,                         AO_AROB,AO_PLUS,AO_DASH,AO_SLSH,AO_ASTR,DV_EQL,
        KC_TAB, AO_Y,   AO_CIRC,AO_EACU,AO_EGRV,AO_EXLM,                        AO_X,   AO_N,   AO_M,   AO_K,   AO_W,   AO_Z,
        AO_LALT,AO_A,   AO_U,   AO_E,   AO_L,   AO_APOS,                        AO_R,   AO_T,   AO_S,   AO_Q,   AO_P,   AO_F,
        AO_LCTL,AO_H,   AO_J,   AO_I,   AO_O,   AO_COMM,                        AO_DOT, AO_D,   AO_C,   AO_G,   AO_B,   AO_V,
                        AO_GUI, AO_DLR,   AO_NUM, KC_LSFT,KC_SPC,     KC_SPC, AO_MOVE,AO_ALT,   AO_AOFN,KC_ENT,
                                          AO_ALT, _______,AO_FN,      AO_NUM, AO_ENT, KC_RSFT
    ),

    [_AOFN] = LAYOUT_manuform_num_noextrapinky(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        VS_EXPD,VS_SURR,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        VS_SOLS,VS_TYPS,_______,VS_COMM,_______,DV_ARRF,
        _______,_______,_______,_______,_______,_______,                        VS_MENU,VS_UNCO,_______,VS_IMPL,VS_SPCL,DV_ARRF,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),

    [_NUM] = LAYOUT_manuform_num_noextrapinky(
        _______,N_1,    N_2,    N_3,    N_4,    N_5,                            AO_X,   AO_D,   AO_E,   AO_F,   KC_PAST,AO_Y,
        _______,N_6,    N_7,    N_8,    N_9,    N_0,                            AO_C,   KC_P7,  KC_P8,  KC_P9,  KC_PSLS,KC_6,
        _______,KC_PSLS,KC_PAST,KC_PMNS,KC_PPLS,KC_NUM,                         AO_B,   KC_P4,  KC_P5,  KC_P6,  KC_PMNS,KC_F9,
        _______,_______,AO_SCLN,AO_DOT, AO_CLN, _______,                        AO_A,   KC_P1,  KC_P2,  KC_P3,  KC_PPLS,KC_EQL,
                        KC_CALC,AO_DIES,  ___X___,_______,_______,    _______,_______,KC_PDOT,  KC_P0, KC_PENT,
                                          _______,_______,_______,    ___X___,_______,_______
    ),

    [_DIACRITIC] = LAYOUT_manuform_num_noextrapinky(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,AC_HTCK,_______,AC_ACUT,AC_GRAV,AC_CORN,                        _______,_______,_______,_______,_______,_______,
        _______,AC_OGNK,AC_BREV,AC_HSTK,AC_STRK,AC_HMCN,                        _______,AO_LAR2,AO_RAR2,AO_UARR,AO_DARR,DV_ARRF,
        _______,AC_CEDI,AC_BDOT,AC_ADOT,AC_CRCL,AC_BCOM,                        _______,_______,AC_CEDI,_______,_______,_______,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,___X___,_______,    _______,_______,___X___
    ),

    [_ALT] = LAYOUT_manuform_num_noextrapinky(
        _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,                        AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,DV_NEQL,
        _______,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,DV_LNOT,                        AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
        _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,                        AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
        _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,                         AO_ELLI,AO_UNDS,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
                        AO_LARR,AO_PRGH,  _______,_______,AO_UNDS,    AO_UNDS,_______,_______,  AO_RARR,_______,
                                          _______,___X___,_______,    _______,_______,___X___
    ),

    [_ALT_WRITE] = LAYOUT_manuform_num_noextrapinky(
        _______,AO_MNTE,AO_LGLM,AO_RGLM,AO_ILCB,AO_IRCB,                        AO_PERM,AO_OBEL,AO_MDSH,AO_DIVD,AO_DEGR,AO_NEQL,
        _______,AO_GRK, AO_ECIR,AO_DTLD,AO_GRAV,AO_LNOT,                        AO_DBBS,AO_ILBR,AO_IRBR,AO_IINF,AO_ISUP,AO_SLSH,
        _______,AO_AGRV,AO_UGRV,AO_EURO,AO_LAT, AO_IRNY,                        AO_AMPS,AO_PIPE,AO_DLR, AO_ILCB,AO_IRCB,BP_BSLS,
        _______,AO_AE,  AO_EXPO,AO_INDC,AO_OE,  AO_SCI,                         AO_ELLI,AO_SLSH,AO_CCED,AO_ILPR,AO_IRPR,AO_ARR1,
                        AO_LARR,AO_PRGH,  _______,AO_UNDS,_______,    _______,AO_UNDS,_______,  AO_RARR,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),

    [_FN] = LAYOUT_manuform_num_noextrapinky(
        F_PROCS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,                          KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,
        _______,_______,_______,MS_BTN3,MS_BTN2,MS_BTN1,                        MS_WHLD,MS_UP,  MS_WHLU,_______,AO_BLU, AO_BLON,
        _______,KC_VOLU,KC_MUTE,KC_WBAK,KC_WFWD,KC_APP,                         MS_LEFT,MS_DOWN,MS_RGHT,_______,AO_BLD, AO_BLOF,
        _______,KC_VOLD,KC_MPRV,KC_MPLY,KC_MNXT,KC_F12,                         AO_CLN, AO_NBSS,_______,_______,_______,_______,
                        KC_PSCR,_______,  _______,_______,AO_NBSS,    AO_NBSS,_______,_______,  ___X___,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),

    [_CONFIG] = LAYOUT_manuform_num_noextrapinky(
        QK_BOOT,KC_PAUS,KC_SCRL,RECSTOP,RECORD2,REPLAY2,                        REPLAY, RECORD, RECSTOP,KC_SCRL,KC_PAUS,QK_BOOT,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,DEVMODE,_______,_______,_______,_______,
                        DF_AUEL,_______,  _______,_______,_______,    _______,_______,_______,  _______,DF_AUEL,
                                          _______,_______,_______,    _______,___X___,QK_LOCK
    ),
        
    [_CTRL_AUEL] = LAYOUT_manuform_num_noextrapinky(
        _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
        _______,AO_EGRV,_______,AO_Z,   AO_Y,   _______,                        AO_J,   _______,_______,_______,_______,AO_EACU,
        _______,_______,_______,AO_S,   _______,AO_F,                           _______,_______,AO_E,   _______,_______,AO_APOS,
        _______,_______,AO_X,   AO_C,   AO_V,   _______,                        _______,_______,AO_I,   _______,_______,AO_O,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),

    [_MOD] = LAYOUT_manuform_num_noextrapinky(
        _______,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                           KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,
        _______,_______,_______,_______,_______,KC_EQL,                         _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,AO_V,   _______,                        _______,_______,_______,_______,_______,AO_O,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),
        
    [_AUEL_WRITE] = LAYOUT_manuform_num_noextrapinky(
        _______,_______,AO_INF, AO_SUP, _______,_______,                        _______,_______,_______,_______,_______,AO_EQL,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                        _______,_______,  _______,_______,_______,    _______,_______,WR_ALT,   _______,_______,
                                          WR_ALT, _______,_______,    _______,_______,_______
    ),

    [_MOVE] = LAYOUT_manuform_num_noextrapinky(
        _______,_______,_______,_______,_______,_______,                        F_CLOSE,AO_CUT, AO_COPY,MV_LNUP,MV_LNDN,S_PASTE,
        _______,_______,_______,_______,_______,_______,                        DL_LINE,KC_BSPC,KC_DEL, KC_PGUP,KC_PGDN,AO_PSTE,
        _______,_______,_______,_______,_______,_______,                        KC_INS, KC_LEFT,KC_RGHT,KC_UP,  KC_DOWN,MS_WHLU,
        _______,_______,_______,_______,_______,_______,                        SL_WORD,MV_WDST,MV_WDEN,MV_LNST,MV_LNEN,MS_WHLD,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,_______,_______,    _______,_______,_______
    )
};

/*
    
    [] = LAYOUT_manuform_num_noextrapinky(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                        _______,_______,  _______,_______,_______,    _______,_______,_______,  _______,_______,
                                          _______,_______,_______,    _______,_______,_______
    ),
*/
