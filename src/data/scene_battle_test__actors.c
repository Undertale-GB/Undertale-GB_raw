#pragma bank 255

// Scene: Battle (test)
// Actors

#include "gbs_types.h"
#include "data/sprite_star.h"
#include "data/actor_1_update.h"
#include "data/sprite_empty.h"
#include "data/sprite_battleuidebug.h"

BANKREF(scene_battle_test__actors)

const struct actor_t scene_battle_test__actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 296 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_star),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_1_update),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 0 * 16,
            .y = 136 * 16
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
        .anim_tick = 15,
        .pinned = TRUE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .reserve_tiles = 0
    },
    {
        // Actor 3,
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
        .pinned = TRUE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .reserve_tiles = 0
    }
};
