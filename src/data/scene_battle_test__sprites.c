#pragma bank 255

// Scene: Battle (test)
// Sprites

#include "gbs_types.h"
#include "data/sprite_star.h"
#include "data/sprite_empty.h"
#include "data/sprite_battleuidebug.h"

BANKREF(scene_battle_test__sprites)

const far_ptr_t scene_battle_test__sprites[] = {
    TO_FAR_PTR_T(sprite_star),
    TO_FAR_PTR_T(sprite_empty),
    TO_FAR_PTR_T(sprite_battleuidebug)
};
