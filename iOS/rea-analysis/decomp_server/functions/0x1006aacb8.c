// rea decompile_all
// name: FUN_1006aacb8
// address: 0x1006aacb8
// body: available
// range: 0x1006aacb8-0x1006aad97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aad94 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aacb8(ulong *param_1,ulong param_2,char *param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *local_78 [2];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_78[0] = auStack_48;
  local_78[1] = auStack_68;
  FUN_1006aaffc(param_2,auStack_48,auStack_68,param_3);
  FUN_1006ab0c8(param_1,param_3 + 0x48,local_78[param_2 ^ 1],0,
                (int)(short)(*(short *)(param_3 + 2) + 1),param_3);
  if ((char)(*param_3 << 1) < 1) {
    bVar1 = false;
  }
  else {
    uVar2 = 0;
    lVar3 = (long)(int)(char)(*param_3 << 1);
    do {
      uVar2 = *param_1 | uVar2;
      lVar3 = lVar3 + -1;
      param_1 = param_1 + 1;
    } while (lVar3 != 0);
    bVar1 = uVar2 != 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}

