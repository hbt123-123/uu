// rea decompile_all
// name: FUN_1006ad04c
// address: 0x1006ad04c
// body: available
// range: 0x1006ad04c-0x1006ad25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ad258 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ad04c(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                  char *param_5)

{
  char cVar1;
  long lVar2;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  cVar1 = *param_5;
  lVar2 = (long)cVar1;
  FUN_1006acfd8(auStack_a8,param_3,param_1,param_5 + 8,lVar2);
  FUN_1006af210(auStack_88,auStack_a8,auStack_a8,lVar2);
  (**(code **)(param_5 + 0xc0))(auStack_a8,auStack_88);
  FUN_1006af210(auStack_88,param_1,auStack_a8,(long)*param_5);
  (**(code **)(param_5 + 0xc0))(param_1,auStack_88);
  FUN_1006af210(auStack_88,param_3,auStack_a8,(long)*param_5);
  (**(code **)(param_5 + 0xc0))(param_3,auStack_88);
  FUN_1006acfd8(param_4,param_4,param_2,param_5 + 8,lVar2);
  FUN_1006af210(auStack_88,param_4,param_4,(long)*param_5);
  (**(code **)(param_5 + 0xc0))(auStack_a8,auStack_88);
  FUN_1006acfd8(auStack_a8,auStack_a8,param_1,param_5 + 8,lVar2);
  FUN_1006acfd8(auStack_a8,auStack_a8,param_3,param_5 + 8,lVar2);
  FUN_1006acfd8(param_3,param_3,param_1,param_5 + 8,lVar2);
  FUN_1006af210(auStack_88,param_2,param_3,(long)*param_5);
  (**(code **)(param_5 + 0xc0))(param_2,auStack_88);
  FUN_1006acfd8(param_3,param_1,auStack_a8,param_5 + 8,lVar2);
  FUN_1006af210(auStack_88,param_4,param_3,(long)*param_5);
  (**(code **)(param_5 + 0xc0))(param_4,auStack_88);
  FUN_1006acfd8(param_4,param_4,param_2,param_5 + 8,lVar2);
  if ('\0' < cVar1) {
    _memcpy(param_3,auStack_a8,(long)(int)cVar1 << 3);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

