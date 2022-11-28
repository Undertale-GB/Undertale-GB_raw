#pragma bank 255

// Scene: Room_08

#include "gbs_types.h"
#include "data/bg_room08.h"
#include "data/scene_room_08_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_room_08_triggers.h"
#include "data/scene_room_08_init.h"

BANKREF(scene_room_08)

const struct scene_t scene_room_08 = {
    .width = 250,
    .height = 24,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_room08),
    .collisions = TO_FAR_PTR_T(scene_room_08_collisions),
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
    .triggers = TO_FAR_PTR_T(scene_room_08_triggers),
    .script_init = TO_FAR_PTR_T(scene_room_08_init)
};
