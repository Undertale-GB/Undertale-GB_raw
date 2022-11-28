#pragma bank 255

// Scene: Room_08
// Triggers

#include "gbs_types.h"
#include "data/trigger_14_interact.h"
#include "data/trigger_15_interact.h"

BANKREF(scene_room_08_triggers)

const struct trigger_t scene_room_08_triggers[] = {
    {
        // Trigger 1,
        .x = 0,
        .y = 10,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_14_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 249,
        .y = 10,
        .width = 1,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_15_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
