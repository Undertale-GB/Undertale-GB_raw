.module script_enter_battle

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -4
.SCRIPT_ARG_INDIRECT_1_VARIABLE = -5
.LOCAL_TMP0_VALUE_TMP = -1
.LOCAL_TMP1_VALUE_TMP = -1

___bank_script_enter_battle = 255
.globl ___bank_script_enter_battle

_script_enter_battle::
        VM_RESERVE              1

        ; Variable Set To True
        VM_SET_CONST            .LOCAL_TMP0_VALUE_TMP, 1
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_0_VARIABLE, .LOCAL_TMP0_VALUE_TMP

        ; Variable Set To False
        VM_SET_CONST            .LOCAL_TMP1_VALUE_TMP, 0
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_1_VARIABLE, .LOCAL_TMP1_VALUE_TMP

        VM_RESERVE              -1
        VM_RET_FAR_N            2
