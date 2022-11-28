.module trigger_1_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_battle_test_1, _scene_battle_test_1

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_1_interact = 255
.globl ___bank_trigger_1_interact

_trigger_1_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Push Scene State
        VM_SCENE_PUSH

        ; Call Script: Enter Battle
        VM_PUSH_CONST           VAR_NEXTLINE ; Variable V1
        VM_PUSH_CONST           VAR_GAMESTATE ; Variable V0
        VM_CALL_FAR             ___bank_script_enter_battle, _script_enter_battle

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_battle_test_1

        ; Stop Script
        VM_STOP
