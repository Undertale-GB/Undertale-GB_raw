#pragma bank 255

// Background: GameOver

#include "gbs_types.h"
#include "data/bg_gameover_tileset.h"
#include "data/bg_gameover_tilemap.h"

BANKREF(bg_gameover)

const struct background_t bg_gameover = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_gameover_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_gameover_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
