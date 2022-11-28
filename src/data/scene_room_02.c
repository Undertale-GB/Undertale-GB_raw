#pragma bank 255

// Scene: Room_02

#include "gbs_types.h"
#include "data/bg_room02.h"
#include "data/scene_room_02_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_room_02_actors.h"
#include "data/scene_room_02_triggers.h"
#include "data/scene_room_02_sprites.h"
#include "data/scene_room_02_init.h"

BANKREF(scene_room_02)

const struct scene_t scene_room_02 = {
    .width = 32,
    .height = 34,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_room02),
    .collisions = TO_FAR_PTR_T(scene_room_02_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player),
    .n_actors = 1,
    .n_triggers = 2,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_room_02_actors),
    .triggers = TO_FAR_PTR_T(scene_room_02_triggers),
    .sprites = TO_FAR_PTR_T(scene_room_02_sprites),
    .script_init = TO_FAR_PTR_T(scene_room_02_init)
};
