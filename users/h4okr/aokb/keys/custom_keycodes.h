#pragma once
#include QMK_KEYBOARD_H
#include "../../../../modules/h4okr/custom_shift_keys/custom_shift_keys.h"

enum custom_keycodes {
  // AUEL
  // keys
  AO_DQOT = SAFE_RANGE, // " '
  AO_INF, // >  »
  AO_SUP, // < « 
  AO_POP, // ( [
  AO_PCL, // ) ]
  AO_CIRC, // ^ ¨
  AO_AROB, // @ %
  AO_PLUS, // + ±
  AO_DASH, // - ‑
  AO_SLSH, // / antislash
  AO_ASTR, // * ×
  AO_EQL,  // = ≡
  // single symbols
  AO_IINF, // <
  AO_ISUP, // >
  AO_ILCB, // {
  AO_IRCB, // }
  AO_ILPR, // (
  AO_IRPR, // )
  AO_ILBR, // [
  AO_IRBR, // ]
  AO_LGLM, // «
  AO_RGLM, //  »
  AO_IRNY, // ⸮
  AO_EEQL, // ≡
  AO_ENQL, // ≢
  AO_LARR, // ←
  AO_LAR2, // ⇐
  AO_RARR, // →
  AO_RAR2, //
  AO_UARR, // ↑
  AO_DARR, // ↓
  AO_ARR1, // ↔
  AO_ARR2, // ⇔
  AO_INDC, // indice
  BP_ITBG, // ‽
  BP_NEQL, // ≠
  // Commands, movements
  SL_WORD, // select word
  MM_SLWD, // Mac Select word
  DL_LINE, // delete line
  MM_DLLN, // Mac delete line
  // AZERTY
  AZ_DQOT,
  AZ_INF,
  AZ_SUP,
  AZ_POP,
  AZ_PCL,
  AZ_AROB,
  AZ_PLUS,
  AZ_DASH,
  AZ_SLSH,
  AZ_ASTR,
  AZ_EQL,
  AZ_DLR,
  AZ_APOS,
  AZ_COMM,
  AZ_DOT,
  AZ_AMPS,
  AZ_UNDS,
  AZ_EGRV,
  AZ_EACU,
  AZ_AGRV,
  AZ_UGRV,
  AZ_CCED,
  AZ_ELLI,
  AZ_QUOT,
  AZ_LPAR,
  AZ_RPAR,
  // Shifted AZERTY send_string codes
  AZ_GRAV,
  AZ_NEQL,
  AZ_ECIR,
  AZ_INFQ, // <=
  AZ_SUPQ, // >=
  AZ_DEQL, // ===
  AZ_DNQL, // !==
  AZ_UEGRV, // È
  AZ_UAGRV, // À
  AZ_UUGRV, // Ù
  AZ_UECIR, // Ê
  // Dev
  DV_EQL,
  DV_INF,
  DV_SUP,
  // Dev send string codes
  DV_DEQL, // ===
  DV_INFQ, // <=
  DV_SUPQ, // >=
  DV_NEQL, // !=
  DV_DNQL, // !==
  DV_ARRF, // " => ",
  DV_LNOT, // add ! before word,
  DV_APOS,
  // Cut/copy/paste
  AO_CUT,
  AO_COPY,
  AO_PSTE,
  // Game compatibility
  GC_2,
  GC_3,
  GC_ECIR,
  GC_EXLM,
  // Special keys
  AO_LOCK,
  // Late additions
  AO_DBBS, // double backslash
  AO_BLU,
  AO_BLD,
  AO_BLOF,
  AO_BLON,
  // IDE Shortcuts
  IDE_CHG,
  IDE_MNU,
  IDE_SOL,
  IDE_TYP,
  IDE_SRD,
  IDE_XPD,
  IDE_CMT,
  IDE_UNC,
  IDE_MPL,
  IDE_SUP,
};
