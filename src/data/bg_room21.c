#pragma bank 255

// Background: Room21

#include "gbs_types.h"
#include "data/bg_room21_tileset.h"
#include "data/bg_room21_tilemap.h"

BANKREF(bg_room21)

const struct background_t bg_room21 = {
    .width = 40,
    .height = 44,
    .tileset = TO_FAR_PTR_T(bg_room21_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room21_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
