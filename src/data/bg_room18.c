#pragma bank 255

// Background: Room18

#include "gbs_types.h"
#include "data/bg_room18_tileset.h"
#include "data/bg_room18_tilemap.h"

BANKREF(bg_room18)

const struct background_t bg_room18 = {
    .width = 64,
    .height = 30,
    .tileset = TO_FAR_PTR_T(bg_room18_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room18_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
