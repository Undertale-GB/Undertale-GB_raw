.module scene_battle_test_2_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -4
.LOCAL_ACTOR = -4
.LOCAL_TMP2_WAIT_ARGS = -4

___bank_scene_battle_test_2_init = 255
.globl ___bank_scene_battle_test_2_init

_scene_battle_test_2_init::
        VM_LOCK

        VM_RESERVE              4

        ; Variable Set To Value
        VM_SET_CONST            VAR_S37A37_COUNTER, 200

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 60
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Variable Set To False
        VM_SET_CONST            VAR_S37A37_COUNTER, 0

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 2
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 3
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP2_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP2_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Call Script: Refresh Battle UI
        VM_PUSH_CONST           VAR_ROUND_NO_ ; Variable V6
        VM_CALL_FAR             ___bank_script_refresh_battle_ui, _script_refresh_battle_ui

        ; Stop Script
        VM_STOP
