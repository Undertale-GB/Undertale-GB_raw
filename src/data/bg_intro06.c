#pragma bank 255

// Background: Intro06

#include "gbs_types.h"
#include "data/bg_intro06_tileset.h"
#include "data/bg_intro06_tilemap.h"

BANKREF(bg_intro06)

const struct background_t bg_intro06 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro06_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro06_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
