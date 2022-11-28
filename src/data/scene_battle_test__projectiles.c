#pragma bank 255

// Scene: Battle (test)
// Projectiles

#include "gbs_types.h"
#include "data/sprite_star.h"

BANKREF(scene_battle_test__projectiles)

const struct projectile_def_t scene_battle_test__projectiles[] = {
    {
        // Projectile 0,
        .sprite = TO_FAR_PTR_T(sprite_star),
        .move_speed = 16,
        .life_time = 120,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_1 | COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .anim_tick = 15,
        .animations = {
            {
                .start = 0,
                .end = 1
            },
            {
                .start = 0,
                .end = 1
            },
            {
                .start = 0,
                .end = 1
            },
            {
                .start = 0,
                .end = 1
            }
        },
        .initial_offset = 0
    }
};
