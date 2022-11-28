#pragma bank 255

// Background: Room15

#include "gbs_types.h"
#include "data/bg_room15_tileset.h"
#include "data/bg_room15_tilemap.h"

BANKREF(bg_room15)

const struct background_t bg_room15 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room15_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room15_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
