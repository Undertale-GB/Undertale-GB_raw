.module script_add_menu_to_overworl

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_add_menu_to_overworl = 255
.globl ___bank_script_add_menu_to_overworl

_script_add_menu_to_overworl::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_0, _script_input_0
        VM_INPUT_ATTACH         128, ^/(1 | .OVERRIDE_DEFAULT)/

        VM_RET_FAR_N            1
