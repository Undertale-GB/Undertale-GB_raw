#pragma bank 255

// Background: Room16

#include "gbs_types.h"
#include "data/bg_room16_tileset.h"
#include "data/bg_room16_tilemap.h"

BANKREF(bg_room16)

const struct background_t bg_room16 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room16_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room16_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
