.module script_7

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_script_7 = 255
.globl ___bank_script_7

_script_7::
        ; Input Script Attach
        VM_CONTEXT_PREPARE      1, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         240, ^/(1 | .OVERRIDE_DEFAULT)/

        VM_RET_FAR
