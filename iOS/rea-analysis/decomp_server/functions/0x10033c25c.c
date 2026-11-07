// rea decompile_all
// name: FUN_10033c25c
// address: 0x10033c25c
// body: available
// range: 0x10033c25c-0x10033c2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033c2c8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10033c25c(void)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long unaff_x20;
  uint local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_1c = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  _SCNetworkReachabilityGetFlags(uVar3,&local_1c);
  bVar2 = (int)uVar3 == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = (ulong)local_1c;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return uVar1 | (ulong)bVar2 << 0x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

