#pragma bank 255

// Background: Room07

#include "gbs_types.h"
#include "data/bg_room07_tileset.h"
#include "data/bg_room07_tilemap.h"

BANKREF(bg_room07)

const struct background_t bg_room07 = {
    .width = 120,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room07_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room07_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
