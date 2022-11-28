#pragma bank 255

// Scene: Battle Test 1

#include "gbs_types.h"
#include "data/bg_battle1_test.h"
#include "data/scene_battle_test_1_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_battle_test_1_actors.h"
#include "data/scene_battle_test_1_sprites.h"
#include "data/scene_battle_test_1_init.h"

BANKREF(scene_battle_test_1)

const struct scene_t scene_battle_test_1 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_battle1_test),
    .collisions = TO_FAR_PTR_T(scene_battle_test_1_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player),
    .n_actors = 2,
    .n_triggers = 0,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_battle_test_1_actors),
    .sprites = TO_FAR_PTR_T(scene_battle_test_1_sprites),
    .script_init = TO_FAR_PTR_T(scene_battle_test_1_init)
};
