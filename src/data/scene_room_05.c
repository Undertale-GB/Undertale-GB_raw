#pragma bank 255

// Scene: Room_05

#include "gbs_types.h"
#include "data/bg_room05.h"
#include "data/scene_room_05_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_room_05_triggers.h"
#include "data/scene_room_05_init.h"

BANKREF(scene_room_05)

const struct scene_t scene_room_05 = {
    .width = 74,
    .height = 24,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_room05),
    .collisions = TO_FAR_PTR_T(scene_room_05_collisions),
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
    .triggers = TO_FAR_PTR_T(scene_room_05_triggers),
    .script_init = TO_FAR_PTR_T(scene_room_05_init)
};
