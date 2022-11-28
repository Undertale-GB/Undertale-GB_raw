.module scene_battle_test_2_p_hit1

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_gameover, _scene_gameover

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_scene_battle_test_2_p_hit1 = 255
.globl ___bank_scene_battle_test_2_p_hit1

_scene_battle_test_2_p_hit1::
        VM_RESERVE              4

        ; If Parameter 0 Equals 2
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 2, 1$, 0
        VM_JUMP                 2$
1$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_CURRENT_HP
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_CURRENT_HP, .ARG0
        VM_POP                  1

        ; Call Script: Refresh Battle UI
        VM_PUSH_CONST           VAR_ROUND_NO_ ; Variable V6
        VM_CALL_FAR             ___bank_script_refresh_battle_ui, _script_refresh_battle_ui

        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_CURRENT_HP, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_gameover

4$:

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
