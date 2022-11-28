.module script_input_4

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_input_4 = 255
.globl ___bank_script_input_4

_script_input_4::
        ; If Variable True
        VM_IF_CONST             .GT, VAR_INSUBMENU, 0, 1$, 0
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_MENUMAIN
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_MENUMAIN, .ARG0
        VM_POP                  1

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_MENUMAIN, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Variable Set To True
        VM_SET_CONST            VAR_MENUMAIN, 1

4$:

        VM_JUMP                 2$
1$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_MENUSUB
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_MENUSUB, .ARG0
        VM_POP                  1

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_MENUSUB, 0, 5$, 0
        VM_JUMP                 6$
5$:
        ; Variable Set To True
        VM_SET_CONST            VAR_MENUSUB, 1

6$:

2$:

        ; Stop Script
        VM_STOP
