#pragma bank 255

// Scene: Battle Test 2

#include "gbs_types.h"
#include "data/bg_battle2_test.h"
#include "data/scene_battle_test_2_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_heart.h"
#include "data/scene_battle_test_2_actors.h"
#include "data/scene_battle_test_2_sprites.h"
#include "data/scene_battle_test_2_projectiles.h"
#include "data/scene_battle_test_2_init.h"
#include "data/scene_battle_test_2_p_hit1.h"

BANKREF(scene_battle_test_2)

const struct scene_t scene_battle_test_2 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(bg_battle2_test),
    .collisions = TO_FAR_PTR_T(scene_battle_test_2_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_heart),
    .n_actors = 3,
    .n_triggers = 0,
    .n_sprites = 2,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_battle_test_2_actors),
    .sprites = TO_FAR_PTR_T(scene_battle_test_2_sprites),
    .projectiles = TO_FAR_PTR_T(scene_battle_test_2_projectiles),
    .script_init = TO_FAR_PTR_T(scene_battle_test_2_init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_battle_test_2_p_hit1)
};
