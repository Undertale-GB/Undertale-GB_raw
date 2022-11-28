#pragma bank 255
// SpriteSheet: Flowey

#include "gbs_types.h"
#include "data/sprite_flowey_tileset.h"

BANKREF(sprite_flowey)

#define SPRITE_2_STATE_DEFAULT 0

const metasprite_t sprite_flowey_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_flowey_metasprites[] = {
    sprite_flowey_metasprite_0
};

const struct animation_t sprite_flowey_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD sprite_flowey_animations_lookup[] = {
    SPRITE_2_STATE_DEFAULT
};

const struct spritesheet_t sprite_flowey = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_flowey_metasprites,
    .animations = sprite_flowey_animations,
    .animations_lookup = sprite_flowey_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_flowey_tileset),
    .cgb_tileset = { NULL, NULL }
};
