// rea decompile_all
// name: FUN_1006aba3c
// address: 0x1006aba3c
// body: available
// range: 0x1006aba3c-0x1006abb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006abb04 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aba3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  short sVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_68 [32];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar5 = 0x40;
  do {
    sVar2 = *(short *)(param_5 + 2);
    iVar1 = sVar2 + 0x7e;
    if (-0x40 < sVar2) {
      iVar1 = sVar2 + 0x3f;
    }
    puVar3 = auStack_68;
    FUN_1006aabc4(puVar3,param_5 + 0x28,(iVar1 << 0x12) >> 0x18);
  } while ((((int)puVar3 != 0) &&
           (uVar4 = param_1, FUN_1006abb08(param_1,param_2,param_3,auStack_68,param_4,param_5),
           (int)uVar4 == 0)) && (lVar5 = lVar5 + -1, lVar5 != 0));
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

