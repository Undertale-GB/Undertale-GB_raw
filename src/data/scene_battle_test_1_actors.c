#pragma bank 255

// Scene: Battle Test 1
// Actors

#include "gbs_types.h"
#include "data/sprite_battleuidebug.h"
#include "data/actor_4_update.h"
#include "data/sprite_empty.h"
#include "data/actor_5_update.h"

BANKREF(scene_battle_test_1_actors)

const struct actor_t scene_battle_test_1_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 24 * 16,
            .y = 136 * 16
        },
        .bounds = {
            .left = -8,
            .bottom = 7,
            .right = 23,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_battleuidebug),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_4_update),
        .reserve_tiles = 0
    },
    {
        // UI Controller,
        .pos = {
            .x = 144 * 16,
            .y = 0 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_empty),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_5_update),
        .reserve_tiles = 0
    }
};
