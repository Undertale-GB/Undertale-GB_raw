#pragma bank 255

// Background: BattleMockup

#include "gbs_types.h"
#include "data/bg_battlemockup_tileset.h"
#include "data/bg_battlemockup_tilemap.h"

BANKREF(bg_battlemockup)

const struct background_t bg_battlemockup = {
    .width = 40,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_battlemockup_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_battlemockup_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
