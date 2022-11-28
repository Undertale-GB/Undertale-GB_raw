#pragma bank 255

// Scene: GameOver

#include "gbs_types.h"
#include "data/bg_gameover.h"
#include "data/scene_gameover_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_empty.h"
#include "data/scene_gameover_init.h"

BANKREF(scene_gameover)

const struct scene_t scene_gameover = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_gameover),
    .collisions = TO_FAR_PTR_T(scene_gameover_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_empty),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_gameover_init)
};
