#pragma bank 255

// Background: Intro07

#include "gbs_types.h"
#include "data/bg_intro07_tileset.h"
#include "data/bg_intro07_tilemap.h"

BANKREF(bg_intro07)

const struct background_t bg_intro07 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro07_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro07_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
