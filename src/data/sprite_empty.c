#pragma bank 255
// SpriteSheet: Empty

#include "gbs_types.h"
#include "data/sprite_empty_tileset.h"

BANKREF(sprite_empty)

#define SPRITE_4_STATE_DEFAULT 0

const metasprite_t sprite_empty_metasprite_0[]  = {
    {metasprite_end}
};

const metasprite_t * const sprite_empty_metasprites[] = {
    sprite_empty_metasprite_0
};

const struct animation_t sprite_empty_animations[] = {
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

const UWORD sprite_empty_animations_lookup[] = {
    SPRITE_4_STATE_DEFAULT
};

const struct spritesheet_t sprite_empty = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_empty_metasprites,
    .animations = sprite_empty_animations,
    .animations_lookup = sprite_empty_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_empty_tileset),
    .cgb_tileset = { NULL, NULL }
};
