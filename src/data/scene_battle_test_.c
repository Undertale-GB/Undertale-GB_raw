#pragma bank 255

// Scene: Battle (test)

#include "gbs_types.h"
#include "data/bg_battlemockup.h"
#include "data/scene_battle_test__collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_heart.h"
#include "data/scene_battle_test__actors.h"
#include "data/scene_battle_test__sprites.h"
#include "data/scene_battle_test__projectiles.h"
#include "data/scene_battle_test__init.h"
#include "data/scene_battle_test__p_hit1.h"

BANKREF(scene_battle_test_)

const struct scene_t scene_battle_test_ = {
    .width = 40,
    .height = 18,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(bg_battlemockup),
    .collisions = TO_FAR_PTR_T(scene_battle_test__collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_heart),
    .n_actors = 3,
    .n_triggers = 0,
    .n_sprites = 3,
    .n_projectiles = 1,
    .actors = TO_FAR_PTR_T(scene_battle_test__actors),
    .sprites = TO_FAR_PTR_T(scene_battle_test__sprites),
    .projectiles = TO_FAR_PTR_T(scene_battle_test__projectiles),
    .script_init = TO_FAR_PTR_T(scene_battle_test__init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_battle_test__p_hit1)
};
