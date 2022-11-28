#pragma bank 255

// Background: Room14

#include "gbs_types.h"
#include "data/bg_room14_tileset.h"
#include "data/bg_room14_tilemap.h"

BANKREF(bg_room14)

const struct background_t bg_room14 = {
    .width = 56,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room14_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room14_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
