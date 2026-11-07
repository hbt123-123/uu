// rea decompile_all
// name: SentryEvent::isMetricKitEvent
// address: 0x1007b191c
// body: available
// range: 0x1007b191c-0x1007b1ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b1ac0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryEvent::isMetricKitEvent(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  cfstringStruct *local_68;
  cfstringStruct *pcStack_60;
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::exceptions(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::exceptions(param_1);
    IVar1 = objc_stub::count(IVar1);
    if (IVar1 == 1) {
      local_68 = &cf_mx_disk_write_exception;
      pcStack_60 = &cf_mx_cpu_exception;
      local_58 = &cf_mx_hang_diagnostic;
      pcStack_50 = &cf_MXCrashDiagnostic;
      IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_68,4);
      IVar2 = objc_stub::exceptions(param_1);
      IVar2 = objc_stub::objectAtIndexedSubscript_(IVar2,0);
      IVar3 = objc_stub::mechanism(IVar2);
      if (IVar3 == 0) {
        bVar4 = 0;
      }
      else {
        IVar2 = objc_stub::mechanism(IVar2);
        IVar2 = objc_stub::type(IVar2);
        IVar1 = objc_stub::containsObject_(IVar1,IVar2);
        bVar4 = (bool)IVar1;
      }
      goto LAB_1007b1a8c;
    }
  }
  bVar4 = 0;
LAB_1007b1a8c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar4;
}

