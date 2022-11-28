#pragma bank 255

// Scene: Room_09
// Triggers

#include "gbs_types.h"
#include "data/trigger_16_interact.h"

BANKREF(scene_room_09_triggers)

const struct trigger_t scene_room_09_triggers[] = {
    {
        // Trigger 1,
        .x = 14,
        .y = 23,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_16_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
