#pragma bank 255

// Background: Room12

#include "gbs_types.h"
#include "data/bg_room12_tileset.h"
#include "data/bg_room12_tilemap.h"

BANKREF(bg_room12)

const struct background_t bg_room12 = {
    .width = 48,
    .height = 24,
    .tileset = TO_FAR_PTR_T(bg_room12_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room12_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
