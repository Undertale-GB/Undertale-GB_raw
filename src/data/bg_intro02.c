#pragma bank 255

// Background: Intro02

#include "gbs_types.h"
#include "data/bg_intro02_tileset.h"
#include "data/bg_intro02_tilemap.h"

BANKREF(bg_intro02)

const struct background_t bg_intro02 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro02_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro02_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
