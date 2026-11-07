// rea decompile_all
// name: FUN_10053345c
// address: 0x10053345c
// body: available
// range: 0x10053345c-0x100533633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100533630 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053345c(long param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long unaff_x21;
  ulong uVar5;
  ulong local_b0;
  undefined6 uStack_a8;
  undefined2 local_a2;
  undefined6 uStack_a0;
  undefined1 local_48 [4];
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_48[0] = (undefined1)param_1;
      local_48[1] = (undefined1)((ulong)param_1 >> 8);
      local_48[2] = (undefined1)((ulong)param_1 >> 0x10);
      local_48[3] = (undefined1)((ulong)param_1 >> 0x18);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x38);
      local_40 = (undefined1)param_2;
      local_3f = (undefined1)(param_2 >> 8);
      local_3e = (undefined1)(param_2 >> 0x10);
      local_3d = (undefined1)(param_2 >> 0x18);
      local_3c = (undefined1)(param_2 >> 0x20);
      uVar5 = param_2 >> 0x30 & 0xff;
      local_3b = (undefined1)(param_2 >> 0x28);
      if (uVar5 != 0) {
        local_b0 = 0;
        FUN_10052a52c(param_3,&uStack_a8);
        (*param_4)(local_48,local_48 + uVar5,&local_b0,uVar5);
        if (unaff_x21 == 0) {
          FUN_1004f9924(&uStack_a8);
        }
        else {
          FUN_1004f9924(&uStack_a8);
        }
      }
      goto LAB_100533600;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100533630);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) {
      uStack_a0 = 0;
      uStack_a8 = 0;
      local_a2 = 0;
      FUN_100536094(local_48,&uStack_a8,&uStack_a8,param_3,param_4);
      goto LAB_100533600;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_100536dd0(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3,param_4);
LAB_100533600:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

