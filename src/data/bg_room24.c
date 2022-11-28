#pragma bank 255

// Background: Room24

#include "gbs_types.h"
#include "data/bg_room24_tileset.h"
#include "data/bg_room24_tilemap.h"

BANKREF(bg_room24)

const struct background_t bg_room24 = {
    .width = 40,
    .height = 44,
    .tileset = TO_FAR_PTR_T(bg_room24_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room24_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
