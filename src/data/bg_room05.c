#pragma bank 255

// Background: Room05

#include "gbs_types.h"
#include "data/bg_room05_tileset.h"
#include "data/bg_room05_tilemap.h"

BANKREF(bg_room05)

const struct background_t bg_room05 = {
    .width = 74,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room05_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room05_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
