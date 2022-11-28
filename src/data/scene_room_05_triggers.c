#pragma bank 255

// Scene: Room_05
// Triggers

#include "gbs_types.h"
#include "data/trigger_8_interact.h"
#include "data/trigger_9_interact.h"

BANKREF(scene_room_05_triggers)

const struct trigger_t scene_room_05_triggers[] = {
    {
        // Trigger 1,
        .x = 12,
        .y = 23,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_8_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 73,
        .y = 14,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_9_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
