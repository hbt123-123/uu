// rea decompile_all
// name: FUN_100049b0c
// address: 0x100049b0c
// body: available
// range: 0x100049b0c-0x100049c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100049c18 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100049b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1009954a0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_6,param_7);
  uVar1 = 0;
  FUN_10004af78(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_11,uVar1);
  FUN_100003310(param_1,param_2,param_3,param_4,param_5 & 1,param_6,param_8,param_9,param_10);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar2) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0,0x2713);
}

