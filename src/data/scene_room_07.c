#pragma bank 255

// Scene: Room_07

#include "gbs_types.h"
#include "data/bg_room07.h"
#include "data/scene_room_07_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_room_07_triggers.h"
#include "data/scene_room_07_init.h"

BANKREF(scene_room_07)

const struct scene_t scene_room_07 = {
    .width = 120,
    .height = 24,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_room07),
    .collisions = TO_FAR_PTR_T(scene_room_07_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player),
    .n_actors = 0,
    .n_triggers = 2,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_room_07_triggers),
    .script_init = TO_FAR_PTR_T(scene_room_07_init)
};
