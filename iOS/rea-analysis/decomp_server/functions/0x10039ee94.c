// rea decompile_all
// name: FUN_10039ee94
// address: 0x10039ee94
// body: available
// range: 0x10039ee94-0x10039ef2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039ef2c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10039ee94(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_3c = 0;
  puVar2 = &local_3c;
  lVar1 = 0;
  _SCDynamicStoreCopyComputerName(0,puVar2);
  if (lVar1 == 0) {
    lVar1 = 0;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

