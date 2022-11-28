#pragma bank 255

// Scene: Room_07
// Triggers

#include "gbs_types.h"
#include "data/trigger_12_interact.h"
#include "data/trigger_13_interact.h"

BANKREF(scene_room_07_triggers)

const struct trigger_t scene_room_07_triggers[] = {
    {
        // Trigger 1,
        .x = 14,
        .y = 23,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_12_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 119,
        .y = 10,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_13_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
