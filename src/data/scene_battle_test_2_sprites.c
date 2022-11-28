#pragma bank 255

// Scene: Battle Test 2
// Sprites

#include "gbs_types.h"
#include "data/sprite_empty.h"
#include "data/sprite_star.h"

BANKREF(scene_battle_test_2_sprites)

const far_ptr_t scene_battle_test_2_sprites[] = {
    TO_FAR_PTR_T(sprite_empty),
    TO_FAR_PTR_T(sprite_star)
};
