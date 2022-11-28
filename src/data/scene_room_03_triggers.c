#pragma bank 255

// Scene: Room_03
// Triggers

#include "gbs_types.h"
#include "data/trigger_4_interact.h"
#include "data/trigger_5_interact.h"

BANKREF(scene_room_03_triggers)

const struct trigger_t scene_room_03_triggers[] = {
    {
        // Trigger 1,
        .x = 14,
        .y = 45,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_4_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 15,
        .y = 8,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_5_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
