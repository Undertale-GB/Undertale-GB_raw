.module script_speech_bubble_test

.include "vm.i"
.include "data/game_globals.i"

.globl _text_ff_joypad, _text_draw_speed, _text_out_speed, _text_in_speed

.area _CODE_255


___bank_script_speech_bubble_test = 255
.globl ___bank_script_speech_bubble_test

_script_speech_bubble_test::
        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 0
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, -3

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\015\004\002\002TEST  "
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\014\005\002\002{Bubble"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\015\006\002\002hehehe"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 1
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, 0

        VM_RET_FAR
