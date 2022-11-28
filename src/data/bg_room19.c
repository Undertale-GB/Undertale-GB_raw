#pragma bank 255

// Background: Room19

#include "gbs_types.h"
#include "data/bg_room19_tileset.h"
#include "data/bg_room19_tilemap.h"

BANKREF(bg_room19)

const struct background_t bg_room19 = {
    .width = 64,
    .height = 34,
    .tileset = TO_FAR_PTR_T(bg_room19_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room19_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
