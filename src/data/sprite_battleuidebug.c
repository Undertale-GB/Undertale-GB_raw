#pragma bank 255
// SpriteSheet: BattleUIDebug

#include "gbs_types.h"
#include "data/sprite_battleuidebug_tileset.h"

BANKREF(sprite_battleuidebug)

#define SPRITE_5_STATE_DEFAULT 0

const metasprite_t sprite_battleuidebug_metasprite_0[]  = {
    { 0, 16, 0, 0 }, { 0, -8, 2, 0 }, { 0, -8, 2, 0 }, { 0, -8, 0, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_battleuidebug_metasprites[] = {
    sprite_battleuidebug_metasprite_0
};

const struct animation_t sprite_battleuidebug_animations[] = {
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

const UWORD sprite_battleuidebug_animations_lookup[] = {
    SPRITE_5_STATE_DEFAULT
};

const struct spritesheet_t sprite_battleuidebug = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_battleuidebug_metasprites,
    .animations = sprite_battleuidebug_animations,
    .animations_lookup = sprite_battleuidebug_animations_lookup,
    .bounds = {
        .left = -8,
        .bottom = 7,
        .right = 23,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_battleuidebug_tileset),
    .cgb_tileset = { NULL, NULL }
};
