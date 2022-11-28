#pragma bank 255

// Background: Room10

#include "gbs_types.h"
#include "data/bg_room10_tileset.h"
#include "data/bg_room10_tilemap.h"

BANKREF(bg_room10)

const struct background_t bg_room10 = {
    .width = 32,
    .height = 48,
    .tileset = TO_FAR_PTR_T(bg_room10_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room10_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
