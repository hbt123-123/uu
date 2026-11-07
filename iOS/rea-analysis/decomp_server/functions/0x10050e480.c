// rea decompile_all
// name: FUN_10050e480
// address: 0x10050e480
// body: available
// range: 0x10050e480-0x10050e5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10050e5b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050e480(long param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_46 = (undefined1)param_1;
      local_45 = (undefined1)((ulong)param_1 >> 8);
      local_44 = (undefined1)((ulong)param_1 >> 0x10);
      local_43 = (undefined1)((ulong)param_1 >> 0x18);
      local_42 = (undefined1)((ulong)param_1 >> 0x20);
      local_41 = (undefined1)((ulong)param_1 >> 0x28);
      local_40 = (undefined1)((ulong)param_1 >> 0x30);
      local_3f = (undefined1)((ulong)param_1 >> 0x38);
      local_3e = (undefined1)param_2;
      local_3d = (undefined1)(param_2 >> 8);
      local_3c = (undefined1)(param_2 >> 0x10);
      local_3b = (undefined1)(param_2 >> 0x18);
      local_3a = (undefined1)(param_2 >> 0x20);
      uVar5 = param_2 >> 0x30 & 0xff;
      local_39 = (undefined1)(param_2 >> 0x28);
      if (uVar5 != 0) {
        _memcpy((void *)*param_3,&local_46,uVar5);
        *param_3 = *param_3 + uVar5;
      }
      goto LAB_10050e584;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050e5b4);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) goto LAB_10050e584;
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_10050e5b8(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_10050e584:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

