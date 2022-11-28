#pragma bank 255

// Background: Room11

#include "gbs_types.h"
#include "data/bg_room11_tileset.h"
#include "data/bg_room11_tilemap.h"

BANKREF(bg_room11)

const struct background_t bg_room11 = {
    .width = 32,
    .height = 64,
    .tileset = TO_FAR_PTR_T(bg_room11_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room11_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
