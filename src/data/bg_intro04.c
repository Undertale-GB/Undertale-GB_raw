#pragma bank 255

// Background: Intro04

#include "gbs_types.h"
#include "data/bg_intro04_tileset.h"
#include "data/bg_intro04_tilemap.h"

BANKREF(bg_intro04)

const struct background_t bg_intro04 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_intro04_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_intro04_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
