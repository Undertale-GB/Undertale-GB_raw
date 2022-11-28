.module scene_room_01_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -4

___bank_scene_room_01_init = 255
.globl ___bank_scene_room_01_init

_scene_room_01_init::
        VM_LOCK

        VM_RESERVE              4

        ; Music Stop
        VM_MUSIC_STOP

        ; Actor Activate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_ACTIVATE       .LOCAL_ACTOR

        ; Call Script: Add Menu to Overworld
        VM_PUSH_CONST           VAR_S2_LOCAL_0 ; Variable V0
        VM_CALL_FAR             ___bank_script_add_menu_to_overworl, _script_add_menu_to_overworl

        ; Variable Set To Value
        VM_SET_CONST            VAR_CURRENT_HP, 20

        ; Variable Set To Value
        VM_SET_CONST            VAR_MAX_HP, 20

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
