#pragma bank 255

// Background: IntroTemplate

#include "gbs_types.h"
#include "data/bg_introtemplate_tileset.h"
#include "data/bg_introtemplate_tilemap.h"

BANKREF(bg_introtemplate)

const struct background_t bg_introtemplate = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_introtemplate_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_introtemplate_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
