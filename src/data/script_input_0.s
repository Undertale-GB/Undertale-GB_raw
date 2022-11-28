.module script_input_0

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_input_0 = 255
.globl ___bank_script_input_0

_script_input_0::
        ; Advanced Menu
        VM_OVERLAY_MOVE_TO      20, 13, .OVERLAY_SPEED_INSTANT
        VM_LOAD_TEXT            0
        .asciz "\001\1\003\003\002Item\003\003\003Stat\003\003\004Cell"
        VM_OVERLAY_CLEAR        0, 0, 9, 5, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      11, 13, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_CHOICE               .SCRIPT_ARG_INDIRECT_0_VARIABLE, .UI_MENU_CANCEL_B, 3
            .MENUITEM           1, 1, 0, 0, 3, 2
            .MENUITEM           1, 2, 0, 0, 1, 3
            .MENUITEM           1, 3, 0, 0, 2, 1
        VM_OVERLAY_MOVE_TO      20, 13, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_SPEED_INSTANT

        ; If Variable .EQ Value
        VM_PUSH_VALUE_IND       .SCRIPT_ARG_INDIRECT_0_VARIABLE
        VM_IF_CONST             .EQ, .ARG0, 1, 1$, 1
        VM_JUMP                 2$
1$:
        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "temp"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

2$:

        ; Stop Script
        VM_STOP
