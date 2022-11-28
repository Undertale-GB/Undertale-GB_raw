.module scene_battle_test__init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -4

___bank_scene_battle_test__init = 255
.globl ___bank_scene_battle_test__init

_scene_battle_test__init::
        VM_LOCK

        VM_RESERVE              4

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Stop Update Script
        VM_ACTOR_TERMINATE_UPDATE .LOCAL_ACTOR

        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Call Script: Enter Battle
        VM_PUSH_CONST           VAR_PROGRESS ; Variable V1
        VM_PUSH_CONST           VAR_GAMESTATE ; Variable V0
        VM_CALL_FAR             ___bank_script_enter_battle, _script_enter_battle

        ; Call Script: Refresh Battle UI
        VM_PUSH_CONST           VAR_PROGRESS ; Variable V6
        VM_CALL_FAR             ___bank_script_refresh_battle_ui, _script_refresh_battle_ui

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_IN              1

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\004\013*But nobody"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\004\014 came..."
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Call Script: Speech Bubble Test
        VM_CALL_FAR             ___bank_script_speech_bubble_test, _script_speech_bubble_test

        ; Input Script Attach
        VM_CONTEXT_PREPARE      2, ___bank_script_input_2, _script_input_2
        VM_INPUT_ATTACH         64, ^/(2 | .OVERRIDE_DEFAULT)/

        ; Stop Script
        VM_STOP
