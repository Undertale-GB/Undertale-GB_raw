.module scene_battle_test__p_hit1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -1

___bank_scene_battle_test__p_hit1 = 255
.globl ___bank_scene_battle_test__p_hit1

_scene_battle_test__p_hit1::
        VM_RESERVE              1

        ; If Parameter 0 Equals 2
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 2, 1$, 0
        VM_JUMP                 2$
1$:
        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_CURRENT_HP, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_CURRENT_HP
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_CURRENT_HP, .ARG0
        VM_POP                  1

        ; Call Script: Refresh Battle UI
        VM_PUSH_CONST           VAR_PROGRESS ; Variable V6
        VM_CALL_FAR             ___bank_script_refresh_battle_ui, _script_refresh_battle_ui

4$:

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
