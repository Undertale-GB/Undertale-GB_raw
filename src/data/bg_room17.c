#pragma bank 255

// Background: Room17

#include "gbs_types.h"
#include "data/bg_room17_tileset.h"
#include "data/bg_room17_tilemap.h"

BANKREF(bg_room17)

const struct background_t bg_room17 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room17_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room17_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
