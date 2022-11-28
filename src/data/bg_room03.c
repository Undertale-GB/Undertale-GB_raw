#pragma bank 255

// Background: Room03

#include "gbs_types.h"
#include "data/bg_room03_tileset.h"
#include "data/bg_room03_tilemap.h"

BANKREF(bg_room03)

const struct background_t bg_room03 = {
    .width = 32,
    .height = 46,
    .tileset = TO_FAR_PTR_T(bg_room03_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room03_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
