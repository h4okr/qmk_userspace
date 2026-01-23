#pragma once

#include QMK_KEYBOARD_H
#include "../../../../../../users/h4okr/aokb/layers/aokb-dev.h"
#include "../../../../../../users/h4okr/aokb/layers/azerty.h"
#include "../../../../../../users/h4okr/aokb/layers/common_layers.h"

#define AO_DEV  DF(_AUEL_CODE)
#define AO_WRIT DF(_AUEL_WRITE)
#define AO_AZ   TG(_AZERTY)

#define AO_LCTL LM(_CTRL, MOD_LCTL)
#define AO_RCTL LM(_CTRL, MOD_RCTL)
#define AZ_LCTL LM(_CTRL_AZERTY, MOD_LCTL)
#define AZ_RCTL LM(_CTRL_AZERTY, MOD_RCTL)

#define AO_BLUE MO(_BLUE_CODE)
#define WR_BLUE MO(_BLUE_WRITE)
#define AZ_BLUE MO(_BLUE_AZERTY)

#define AO_GUI  LM(_MODS, MOD_LGUI)
#define AZ_GUI  LM(_MODS_AZERTY, MOD_LGUI)
#define AO_LALT LM(_MODS, MOD_LALT)
#define AZ_LALT LM(_MODS_AZERTY, MOD_LALT)

#define AO_NUM  MO(_NUM)
#define ADV_NUM TT(_NUM)

#define AO_FN   MO(_FUNCTION)
#define ADV_FN  TT(_FUNCTION)

#define AO_MOVE MO(_MOVE)
#define ADV_MOV TT(_MOVE)

#define AO_CFG  MO(_CONFIG)
#define AO_ADVM TG(_ADVANCED_MODS)
#define ADV_RAL MO(_IDE_SHORTCUTS)
