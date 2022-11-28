#pragma bank 255

// Background: Intro03

#include "gbs_types.h"
#include "data/bg_intro03_tileset.h"
#include "data/bg_intro03_tilemap.h"

BANKREF(bg_intro03)

const struct background_t bg_intro03 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro03_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro03_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
