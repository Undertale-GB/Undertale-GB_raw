#pragma bank 255
// SpriteSheet: Heart

#include "gbs_types.h"
#include "data/sprite_heart_tileset.h"

BANKREF(sprite_heart)

#define SPRITE_3_STATE_DEFAULT 0

const metasprite_t sprite_heart_metasprite_0[]  = {
    { 0, 0, 0, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_heart_metasprites[] = {
    sprite_heart_metasprite_0
};

const struct animation_t sprite_heart_animations[] = {
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

const UWORD sprite_heart_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t sprite_heart = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_heart_metasprites,
    .animations = sprite_heart_animations,
    .animations_lookup = sprite_heart_animations_lookup,
    .bounds = {
        .left = 2,
        .bottom = 5,
        .right = 5,
        .top = 2
    },
    .tileset = TO_FAR_PTR_T(sprite_heart_tileset),
    .cgb_tileset = { NULL, NULL }
};
