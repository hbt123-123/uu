// rea decompile_all
// name: FUN_1006b0844
// address: 0x1006b0844
// body: available
// range: 0x1006b0844-0x1006b092f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b092c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b0844(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  uint param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 local_260;
  uint local_25c;
  undefined1 auStack_258 [512];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_260 = 0xff;
  puVar1 = auStack_258;
  FUN_1006af64c(puVar1,&local_260,&local_25c,param_3,param_4);
  if (((puVar1 < (undefined1 *)0xffffffffffffff89) && (local_25c <= param_6)) &&
     (uVar2 = param_5, FUN_1006afe00(param_5,auStack_258,local_260), uVar2 < 0xffffffffffffff89)) {
    FUN_1006b0040(param_1,param_2,puVar1 + param_3,param_4 - (long)puVar1,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

