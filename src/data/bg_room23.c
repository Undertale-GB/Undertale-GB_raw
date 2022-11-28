#pragma bank 255

// Background: Room23

#include "gbs_types.h"
#include "data/bg_room23_tileset.h"
#include "data/bg_room23_tilemap.h"

BANKREF(bg_room23)

const struct background_t bg_room23 = {
    .width = 40,
    .height = 44,
    .tileset = TO_FAR_PTR_T(bg_room23_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room23_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
