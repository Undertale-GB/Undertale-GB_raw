#pragma bank 255

// Background: LoadMenu

#include "gbs_types.h"
#include "data/bg_loadmenu_tileset.h"
#include "data/bg_loadmenu_tilemap.h"

BANKREF(bg_loadmenu)

const struct background_t bg_loadmenu = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_loadmenu_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_loadmenu_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
