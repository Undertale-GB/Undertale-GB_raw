#pragma bank 255

// Background: Room13

#include "gbs_types.h"
#include "data/bg_room13_tileset.h"
#include "data/bg_room13_tilemap.h"

BANKREF(bg_room13)

const struct background_t bg_room13 = {
    .width = 58,
    .height = 76,
    .tileset = TO_FAR_PTR_T(bg_room13_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room13_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
