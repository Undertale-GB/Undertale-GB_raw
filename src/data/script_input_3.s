.module script_input_3

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_battle_test_2, _scene_battle_test_2

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_script_input_3 = 255
.globl ___bank_script_input_3

_script_input_3::
        VM_RESERVE              4

        ; Variable Increment By 1
        VM_RPN
            .R_REF      VAR_ROUND_NO_
            .R_INT8     1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ROUND_NO_, .ARG0
        VM_POP                  1

        ; Variable Increment By 1
        VM_RPN
            .R_REF      VAR_NEXTLINE
            .R_INT8     1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_NEXTLINE, .ARG0
        VM_POP                  1

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1152
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1408
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_battle_test_2

        ; Stop Script
        VM_STOP
