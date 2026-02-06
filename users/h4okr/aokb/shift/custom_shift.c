#include "../keys/custom_keycodes.h"
#include "../keys/bepo.h"
#include "../keys/azerty.h"
#include "../keys/auel.h"

const custom_shift_key_t custom_shift_keys[] = {
  // Shifted keys
  // AUEL
  {AO_DQOT, BP_VQOT},
  {AO_INF,  BP_INFQ},
  {AO_SUP,  BP_SUPQ},
  {AO_POP,  BP_LSBC},
  {AO_PCL,  BP_RSBC},
  {AO_AROB, BP_PERC},
  {AO_PLUS, BP_MRGN},
  {AO_DASH, BP_NBDH},
  {AO_SLSH, BP_BSLS},
  {AO_ASTR, BP_MULT},
  {AO_EQL,  AO_EEQL},
  {AO_CIRC, BPD_TRM},
  {AO_EXLM, BP_ITBG},
  // ALT AUEL
  {AO_MNTE, BP_SCND},
  {AO_DTLD, BP_DMCR},
  {AO_LNOT, BP_BXLM},
  {AO_IRNY, BP_BQST},
  {AO_PERM, BP_SDQT},
  {AO_OBEL, BP_OBL2},
  {AO_DEGR, BP_EDQT},
  {AO_NEQL, AO_ENQL},
  {AO_PRGH, AO_PLCW},
  // Azerty
  {AZ_DQOT, AZ_QUOT},
  {AZ_INF,  AZ_INFQ},
  {AZ_SUP,  AZ_SUPQ},
  {AZ_POP,  AZ_LBRC},
  {AZ_PCL,  AZ_RBRC},
  {AZ_LPAR, AZ_LPAR},
  {AZ_RPAR, AZ_RPAR},
  {AZ_AROB, AZ_PERC},
  {AZ_SLSH, AZ_BSLS},
  {AZ_EQL,  AZ_DEQL},
  {AZ_DLR,  AZ_DIES},
  {AZ_QUOT, AZ_QUES},
  {AZ_COMM, AZ_SCLN},
  {AZ_DOT,  AZ_COLN},
  {AZ_NEQL, AZ_DNQL},
  {AZ_EGRV, AZ_UEGRV},
  {AZ_AGRV, AZ_UAGRV},
  {AZ_UGRV, AZ_UUGRV},
  {AZ_ECIR, AZ_UECIR},
  // Dev
  {DV_INF,  DV_INFQ},
  {DV_SUP,  DV_SUPQ},
  {DV_EQL,  DV_DEQL},
  {DV_NEQL, DV_DNQL},
  {DV_LNOT, BP_BXLM},
  {DV_APOS, BP_QUES},
  // Other
  {AO_NBSS, BP_NBSP},
  // Unshifted keys (invariant)
  {AO_LGLM, AO_LGLM},
  {AO_RGLM, AO_RGLM},
  {AO_ILCB, AO_ILCB},
  {AO_IRCB, AO_IRCB},
  {AO_GRK,  AO_GRK},
  {AO_LAT,  AO_LAT},
  {AO_UNDS, AO_UNDS},
  {AO_EXPO, AO_EXPO},
  {AO_INDC, AO_INDC},
  {AO_SCI,  AO_SCI},
  {KC_SPC,  KC_SPC},
  {AO_ILBR, AO_ILBR},
  {AO_IRBR, AO_IRBR},
  {AO_IINF, AO_IINF},
  {AO_ISUP, AO_ISUP},
  {AO_AMPS, AO_AMPS},
  {AO_PIPE, AO_PIPE},
  {AO_ILPR, AO_ILPR},
  {AO_IRPR, AO_IRPR},
  {DV_ARRF, DV_ARRF},
  {AZ_PLUS, AZ_PLUS},
  {AZ_DASH, AZ_DASH},
  {AZ_ASTR, AZ_ASTR},
  {AZ_AMPS, AZ_AMPS},
  {AZ_UNDS, AZ_UNDS},
  {AZ_CCED, AZ_CCED},
  {AZ_EACU, AZ_EACU},
  // game compat
  {GC_2, AO_INF},
  {GC_3, AO_SUP}
};

/*
uint8_t NUM_CUSTOM_SHIFT_KEYS =
    sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);
*/