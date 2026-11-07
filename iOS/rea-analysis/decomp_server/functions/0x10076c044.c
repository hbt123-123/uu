// rea decompile_all
// name: FUN_10076c044
// address: 0x10076c044
// body: available
// range: 0x10076c044-0x10076c14f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076c14c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076c044(long param_1)

{
  int iVar1;
  undefined1 auStack_22c [500];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100788f14();
  if (*(char *)(param_1 + 10) == '\0') {
    FUN_10074bf8c(auStack_22c);
    ___strlcpy_chk(&DAT_100b2d4f0,auStack_22c,500,500);
    FUN_100736b68(param_1,auStack_22c);
    FUN_100775cbc();
  }
  else {
    FUN_100735d98(param_1,&DAT_100b2d4f0);
  }
  if (DAT_100b2d4d8 != (code *)0x0 || DAT_100b2d4e0 != (code *)0x0) {
    FUN_10074c328(&DAT_100b2d4f0,auStack_22c);
    iVar1 = (int)auStack_22c;
    FUN_10074a914();
    if (iVar1 != 0) {
      if (DAT_100b2d4d8 != (code *)0x0) {
        (*DAT_100b2d4d8)(auStack_22c);
      }
      if (DAT_100b2d4e0 != (code *)0x0) {
        (*DAT_100b2d4e0)(auStack_22c);
      }
    }
  }
  if (DAT_100b2d4e8 != (code *)0x0) {
    (*DAT_100b2d4e8)();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

