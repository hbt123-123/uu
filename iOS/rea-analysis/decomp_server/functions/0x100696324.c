// rea decompile_all
// name: FUN_100696324
// address: 0x100696324
// body: available
// range: 0x100696324-0x100696417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100696414 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_100696324(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  long alStack_58 [3];
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = operator_new(0x30);
  FUN_100697608(alStack_58,param_2);
  *puVar1 = 6;
  *(undefined8 *)(puVar1 + 2) = param_1;
  if (local_40 == (long *)0x0) {
    *(undefined8 *)(puVar1 + 10) = 0;
  }
  else {
    if (local_40 == alStack_58) {
      *(undefined4 **)(puVar1 + 10) = puVar1 + 4;
      (**(code **)(*local_40 + 0x18))();
    }
    else {
      plVar2 = local_40;
      (**(code **)(*local_40 + 0x10))();
      *(long **)(puVar1 + 10) = plVar2;
    }
    if (local_40 == alStack_58) {
      lVar3 = 0x20;
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_1006963e4;
      lVar3 = 0x28;
    }
    (**(code **)(*local_40 + lVar3))();
  }
LAB_1006963e4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

