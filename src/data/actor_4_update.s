.module actor_4_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_4_update = 255
.globl ___bank_actor_4_update

_actor_4_update::
        VM_RESERVE              4

1$:
        ; Variable L0 = (VAR_MENUMAIN-1)*4+3
        VM_RPN
            .R_REF      VAR_MENUMAIN
            .R_INT16    1
            .R_OPERATOR .SUB
            .R_INT16    4
            .R_OPERATOR .MUL
            .R_INT16    3
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_S36A0_LOCAL_0, .ARG0
        VM_POP                  1

        ; Variable Set To Value
        VM_SET_CONST            VAR_TEMP_1, 17

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Position To Variables
        VM_RPN
            .R_REF      VAR_S36A0_LOCAL_0
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_REF      VAR_TEMP_1
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
