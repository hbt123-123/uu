// rea decompile_all
// name: FUN_1000c1f74
// address: 0x1000c1f74
// body: available
// range: 0x1000c1f74-0x1000c204f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c204c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000c1f74(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_2 != 0) {
    local_30 = 0;
    _GetEventParameter(param_1,0x2d2d2d2d,0x686b6964,0,8,0,&local_30);
    iVar1 = (int)param_1;
    __s6Darwin5noErrs5Int32Vvg();
    if ((int)param_1 == iVar1) {
      if ((int)local_30 == 0x5053484b && local_30._4_4_ == 1) {
        _swift_retain(param_2);
        uVar2 = 0x6e6f62726163;
        FUN_1000bf8cc(0x6e6f62726163,0xe600000000000000);
        __s6Darwin5noErrs5Int32Vvg();
        _swift_release(param_2);
        goto LAB_1000c2024;
      }
    }
  }
  uVar2 = 0xffffd96e;
LAB_1000c2024:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}

