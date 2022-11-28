#pragma bank 255
// SpriteSheet: Star

#include "gbs_types.h"
#include "data/sprite_star_tileset.h"

BANKREF(sprite_star)

#define SPRITE_0_STATE_DEFAULT 0

const metasprite_t sprite_star_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 0, 96 },
    {metasprite_end}
};

const metasprite_t sprite_star_metasprite_1[]  = {
    { 0, 8, 2, 0 }, { 0, -8, 2, 96 },
    {metasprite_end}
};

const metasprite_t * const sprite_star_metasprites[] = {
    sprite_star_metasprite_0,
    sprite_star_metasprite_1
};

const struct animation_t sprite_star_animations[] = {
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
    },
    {
        .start = 0,
        .end = 1
    }
};

const UWORD sprite_star_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_star = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_star_metasprites,
    .animations = sprite_star_animations,
    .animations_lookup = sprite_star_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_star_tileset),
    .cgb_tileset = { NULL, NULL }
};