#pragma bank 255

// Background: Room04

#include "gbs_types.h"
#include "data/bg_room04_tileset.h"
#include "data/bg_room04_tilemap.h"

BANKREF(bg_room04)

const struct background_t bg_room04 = {
    .width = 32,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room04_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room04_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
