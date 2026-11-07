// rea decompile_all
// name: FUN_1000c4610
// address: 0x1000c4610
// body: available
// range: 0x1000c4610-0x1000c46e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c46e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c4610(void)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_40 = 0;
  lVar1 = 0;
  _SCDynamicStoreCopyConsoleUser(0,(long)&local_40 + 4,&local_40);
  if ((lVar1 != 0) && (_swift_dynamicCastObjCClass(lVar1,&_OBJC_CLASS___NSString), lVar1 != 0)) {
    local_38 = 0;
    local_30 = 0;
    __sSS10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo8NSStringC_SSSgztFZ();
    if (local_30 != 0) {
      _swift_bridgeObjectRelease(local_30);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

