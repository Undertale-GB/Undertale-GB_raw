#pragma bank 255

// Scene: Room_01
// Triggers

#include "gbs_types.h"
#include "data/trigger_0_interact.h"
#include "data/trigger_1_interact.h"

BANKREF(scene_room_01_triggers)

const struct trigger_t scene_room_01_triggers[] = {
    {
        // Trigger 1,
        .x = 60,
        .y = 10,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 27,
        .y = 8,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_1_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
