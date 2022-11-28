#pragma bank 255

// Background: Room06

#include "gbs_types.h"
#include "data/bg_room06_tileset.h"
#include "data/bg_room06_tilemap.h"

BANKREF(bg_room06)

const struct background_t bg_room06 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room06_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room06_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
