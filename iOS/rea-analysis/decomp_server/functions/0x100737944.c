// rea decompile_all
// name: FUN_100737944
// address: 0x100737944
// body: available
// range: 0x100737944-0x100737a47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100737a44 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int local_854;
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [1024];
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = auStack_850;
  FUN_10074b22c(puVar1,param_3,auStack_438,0x400);
  if ((int)puVar1 != 0) {
    FUN_1007a52a8(*(undefined8 *)(param_1 + 0x88),param_2);
    local_854 = 0x400;
    FUN_10074b130(auStack_850,10,auStack_838,&local_854);
    while (0 < local_854) {
      auStack_838[local_854 - 1] = 0;
      FUN_1007a4e8c(*(undefined8 *)(param_1 + 0x88),0,auStack_838,0xffffffff);
      local_854 = 0x400;
      FUN_10074b130(auStack_850,10,auStack_838,&local_854);
    }
    FUN_1007a5380(*(undefined8 *)(param_1 + 0x88));
    FUN_10074b2d4(auStack_850);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

