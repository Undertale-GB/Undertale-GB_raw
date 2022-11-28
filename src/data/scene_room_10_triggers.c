#pragma bank 255

// Scene: Room_10
// Triggers

#include "gbs_types.h"
#include "data/trigger_17_interact.h"
#include "data/trigger_18_interact.h"

BANKREF(scene_room_10_triggers)

const struct trigger_t scene_room_10_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 10,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_17_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 14,
        .y = 6,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_18_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
