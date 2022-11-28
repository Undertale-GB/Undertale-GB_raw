#pragma bank 255

// Scene: Room_02
// Triggers

#include "gbs_types.h"
#include "data/trigger_2_interact.h"
#include "data/trigger_3_interact.h"

BANKREF(scene_room_02_triggers)

const struct trigger_t scene_room_02_triggers[] = {
    {
        // Trigger 1,
        .x = 14,
        .y = 33,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_2_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 14,
        .y = 7,
        .width = 4,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_3_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
