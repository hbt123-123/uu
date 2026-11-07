// rea decompile_all
// name: FUN_1007523e8
// address: 0x1007523e8
// body: available
// range: 0x1007523e8-0x100752523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100752520 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007523e8(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar2 = objc_stub::state(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::copyProfilingData(IVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  FUN_10075115c(lVar3,*(undefined8 *)(param_1 + 0x20),IVar2,*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  IVar2 = *(ID *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (lVar3 == 0) {
    IVar4 = objc_stub::scope(IVar2);
    objc_stub::captureTransaction_withScope_(IVar2,uVar1,IVar4);
  }
  else {
    IVar4 = objc_stub::scope(IVar2);
    local_50 = lVar3;
    IVar5 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
    objc_stub::captureTransaction_withScope_additionalEnvelopeItems_(IVar2,uVar1,IVar4,IVar5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

