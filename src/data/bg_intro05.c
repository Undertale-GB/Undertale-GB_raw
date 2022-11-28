#pragma bank 255

// Background: Intro05

#include "gbs_types.h"
#include "data/bg_intro05_tileset.h"
#include "data/bg_intro05_tilemap.h"

BANKREF(bg_intro05)

const struct background_t bg_intro05 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro05_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro05_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
