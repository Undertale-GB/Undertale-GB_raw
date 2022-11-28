#pragma bank 255

// Background: Intro01

#include "gbs_types.h"
#include "data/bg_intro01_tileset.h"
#include "data/bg_intro01_tilemap.h"

BANKREF(bg_intro01)

const struct background_t bg_intro01 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro01_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro01_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
