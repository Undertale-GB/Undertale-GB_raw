#pragma bank 255

// Background: Battle2 Test

#include "gbs_types.h"
#include "data/bg_battle2_test_tileset.h"
#include "data/bg_battle2_test_tilemap.h"

BANKREF(bg_battle2_test)

const struct background_t bg_battle2_test = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_battle2_test_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_battle2_test_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
