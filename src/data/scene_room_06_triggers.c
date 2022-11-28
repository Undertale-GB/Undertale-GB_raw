#pragma bank 255

// Scene: Room_06
// Triggers

#include "gbs_types.h"
#include "data/trigger_10_interact.h"
#include "data/trigger_11_interact.h"

BANKREF(scene_room_06_triggers)

const struct trigger_t scene_room_06_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 14,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_10_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 14,
        .y = 6,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_11_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
