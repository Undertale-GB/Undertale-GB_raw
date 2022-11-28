#pragma bank 255

// Background: Room22

#include "gbs_types.h"
#include "data/bg_room22_tileset.h"
#include "data/bg_room22_tilemap.h"

BANKREF(bg_room22)

const struct background_t bg_room22 = {
    .width = 40,
    .height = 44,
    .tileset = TO_FAR_PTR_T(bg_room22_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room22_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
