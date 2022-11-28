#pragma bank 255

// Background: Room25

#include "gbs_types.h"
#include "data/bg_room25_tileset.h"
#include "data/bg_room25_tilemap.h"

BANKREF(bg_room25)

const struct background_t bg_room25 = {
    .width = 60,
    .height = 40,
    .tileset = TO_FAR_PTR_T(bg_room25_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room25_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
