.module script_input_6

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_input_6 = 255
.globl ___bank_script_input_6

_script_input_6::
        ; If Variable True
        VM_IF_CONST             .GT, VAR_INSUBMENU, 0, 1$, 0
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_MENUMAIN, 1, 3$, 0
        VM_JUMP                 4$
3$:
4$:

        VM_JUMP                 2$
1$:
2$:

        ; Stop Script
        VM_STOP
