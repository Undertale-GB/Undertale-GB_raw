#pragma bank 255

// Background: Room20

#include "gbs_types.h"
#include "data/bg_room20_tileset.h"
#include "data/bg_room20_tilemap.h"

BANKREF(bg_room20)

const struct background_t bg_room20 = {
    .width = 52,
    .height = 38,
    .tileset = TO_FAR_PTR_T(bg_room20_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room20_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
