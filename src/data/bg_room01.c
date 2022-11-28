#pragma bank 255

// Background: Room01

#include "gbs_types.h"
#include "data/bg_room01_tileset.h"
#include "data/bg_room01_tilemap.h"

BANKREF(bg_room01)

const struct background_t bg_room01 = {
    .width = 68,
    .height = 22,
    .tileset = TO_FAR_PTR_T(bg_room01_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room01_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
