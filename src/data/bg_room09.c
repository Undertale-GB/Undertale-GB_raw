#pragma bank 255

// Background: Room09

#include "gbs_types.h"
#include "data/bg_room09_tileset.h"
#include "data/bg_room09_tilemap.h"

BANKREF(bg_room09)

const struct background_t bg_room09 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room09_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room09_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
