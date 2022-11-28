#pragma bank 255

// Background: Room08

#include "gbs_types.h"
#include "data/bg_room08_tileset.h"
#include "data/bg_room08_tilemap.h"

BANKREF(bg_room08)

const struct background_t bg_room08 = {
    .width = 250,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room08_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room08_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
