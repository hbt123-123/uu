// rea decompile_all
// name: FUN_1003e6c30
// address: 0x1003e6c30
// body: available
// range: 0x1003e6c30-0x1003e6d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e6d0c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1003e6c30(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_3c = 0;
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x80000001008b4d40);
  puVar3 = &DAT_d000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(&DAT_d000000000000010,0x80000001008b4d60);
  _IOPMAssertionCreateWithName(uVar2,0xff,puVar3,&local_3c);
  iVar4 = (int)uVar2;
  iVar1 = iVar4;
  if (iVar4 == 0) {
    iVar1 = local_3c;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return (ulong)CONCAT14(iVar4 != 0,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

