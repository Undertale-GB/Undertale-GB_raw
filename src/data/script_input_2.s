.module script_input_2

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_CAMERA_MOVE_ARGS = -4
.LOCAL_ACTOR = -4

___bank_script_input_2 = 255
.globl ___bank_script_input_2

_script_input_2::
        VM_RESERVE              4

        ; Input Script Remove
        VM_INPUT_DETACH         64

        ; Variable Set To Value
        VM_SET_CONST            VAR_GAMESTATE, 2

        ; Camera Move To
        VM_SET_CONST            .LOCAL_TMP0_CAMERA_MOVE_ARGS, 240
        VM_SET_CONST            ^/(.LOCAL_TMP0_CAMERA_MOVE_ARGS + 1)/, 72
        VM_CAMERA_SET_POS       .LOCAL_TMP0_CAMERA_MOVE_ARGS

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            2
        .dw VAR_CURRENT_HP, VAR_MAX_HP
        .asciz "\003\027\020HP%d/%d"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 0

        ; Actor Set Position
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3712
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1536
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        ; Actor Activate
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_ACTOR_ACTIVATE       .LOCAL_ACTOR

        ; Stop Script
        VM_STOP
