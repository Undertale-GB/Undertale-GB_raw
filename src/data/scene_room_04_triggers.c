#pragma bank 255

// Scene: Room_04
// Triggers

#include "gbs_types.h"
#include "data/trigger_6_interact.h"
#include "data/trigger_7_interact.h"

BANKREF(scene_room_04_triggers)

const struct trigger_t scene_room_04_triggers[] = {
    {
        // Trigger 1,
        .x = 14,
        .y = 23,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_6_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 12,
        .y = 6,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_7_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
