.module script_refresh_battle_ui

.include "vm.i"
.include "data/game_globals.i"

.globl _text_ff_joypad, _text_draw_speed, _text_out_speed, _text_in_speed

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_refresh_battle_ui = 255
.globl ___bank_script_refresh_battle_ui

_script_refresh_battle_ui::
        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 0
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, 0

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            2
        .dw VAR_CURRENT_HP, VAR_MAX_HP
        .asciz "\003\003\020HP%d/%d   "
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 1
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, 0

        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 0
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, -3

        ; If Variable .EQ Value
        VM_PUSH_VALUE_IND       .SCRIPT_ARG_INDIRECT_0_VARIABLE
        VM_IF_CONST             .EQ, .ARG0, 1, 1$, 1
        VM_JUMP                 2$
1$:
        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\016\004\002\002Sorry,"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\016\005\002\002it's a"
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

        ; Background Text
        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_BKG

        VM_LOAD_TEXT            0
        .asciz "\003\015\006\002\002{WIP..."
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_NONMODAL, .UI_WAIT_TEXT

        VM_SWITCH_TEXT_LAYER .TEXT_LAYER_WIN

2$:

        ; Text Set Animation Speed
        VM_SET_CONST_INT8       _text_ff_joypad, 1
        VM_SET_CONST_INT8       _text_draw_speed, 1
        VM_SET_CONST_INT8       _text_out_speed, 0
        VM_SET_CONST_INT8       _text_in_speed, 0

        VM_RET_FAR_N            1
