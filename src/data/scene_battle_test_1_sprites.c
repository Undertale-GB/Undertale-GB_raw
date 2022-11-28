#pragma bank 255

// Scene: Battle Test 1
// Sprites

#include "gbs_types.h"
#include "data/sprite_battleuidebug.h"
#include "data/sprite_empty.h"

BANKREF(scene_battle_test_1_sprites)

const far_ptr_t scene_battle_test_1_sprites[] = {
    TO_FAR_PTR_T(sprite_battleuidebug),
    TO_FAR_PTR_T(sprite_empty)
};
