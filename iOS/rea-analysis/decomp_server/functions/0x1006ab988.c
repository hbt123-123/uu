// rea decompile_all
// name: FUN_1006ab988
// address: 0x1006ab988
// body: available
// range: 0x1006ab988-0x1006aba3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aba38 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006ab988(ulong *param_1,long *param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_38 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 < 1) {
    cVar1 = '\0';
  }
  else {
    uVar2 = 0;
    lVar3 = (long)param_3;
    puVar4 = auStack_38;
    lVar6 = lVar3;
    do {
      uVar5 = *param_2 + uVar2;
      if (uVar5 != 0) {
        uVar2 = (ulong)(*param_1 < uVar5);
      }
      *puVar4 = *param_1 - uVar5;
      lVar6 = lVar6 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    } while (lVar6 != 0);
    uVar5 = 0;
    puVar4 = auStack_38;
    do {
      uVar5 = *puVar4 | uVar5;
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar3 != 0);
    cVar1 = (uVar5 != 0) + (char)uVar2 * -2;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return (int)cVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

