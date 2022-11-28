#pragma bank 255

// Background: Room02

#include "gbs_types.h"
#include "data/bg_room02_tileset.h"
#include "data/bg_room02_tilemap.h"

BANKREF(bg_room02)

const struct background_t bg_room02 = {
    .width = 32,
    .height = 34,
    .tileset = TO_FAR_PTR_T(bg_room02_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room02_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
