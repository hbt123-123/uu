// rea decompile_all
// name: FUN_1006ae18c
// address: 0x1006ae18c
// body: available
// range: 0x1006ae18c-0x1006ae3f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ae3f0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ae18c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_38 [5];
  
  lVar1 = 0;
  local_38[4] = *(ulong *)PTR____stack_chk_guard_1009954a0;
  do {
    *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  lVar1 = 0;
  uVar2 = 0;
  *(ulong *)(param_1 + 0x18) = (ulong)*(uint *)(param_1 + 0x18);
  local_38[0] = 0;
  local_38[1] = (ulong)*(uint *)(param_2 + 0x1c) << 0x20;
  local_38[2] = *(undefined8 *)(param_2 + 0x20);
  local_38[3] = (ulong)*(uint *)(param_2 + 0x28);
  do {
    uVar4 = *(ulong *)(param_1 + lVar1);
    uVar3 = uVar4 + uVar2 + *(long *)((long)local_38 + lVar1);
    if (uVar3 != uVar4) {
      uVar2 = (ulong)(uVar3 < uVar4);
    }
    *(ulong *)(param_1 + lVar1) = uVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  lVar1 = 0;
  uVar2 = 0;
  local_38[1] = (ulong)*(uint *)(param_2 + 0x2c) << 0x20;
  local_38[2] = *(undefined8 *)(param_2 + 0x30);
  local_38[3] = 0;
  do {
    uVar4 = *(ulong *)(param_1 + lVar1);
    uVar3 = uVar4 + uVar2 + *(long *)((long)local_38 + lVar1);
    if (uVar3 != uVar4) {
      uVar2 = (ulong)(uVar3 < uVar4);
    }
    *(ulong *)(param_1 + lVar1) = uVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  lVar1 = 0;
  uVar2 = 0;
  local_38[0] = *(ulong *)(param_2 + 0x18) >> 0x20 | *(ulong *)(param_2 + 0x20) << 0x20;
  local_38[1] = *(ulong *)(param_2 + 0x20) >> 0x20 | *(ulong *)(param_2 + 0x28) << 0x20;
  local_38[2] = *(ulong *)(param_2 + 0x28) >> 0x20 | *(ulong *)(param_2 + 0x30) << 0x20;
  local_38[3] = *(ulong *)(param_2 + 0x30) >> 0x20;
  do {
    uVar3 = *(long *)((long)local_38 + lVar1) + uVar2;
    if (uVar3 != 0) {
      uVar2 = (ulong)(*(ulong *)(param_1 + lVar1) < uVar3);
    }
    *(ulong *)(param_1 + lVar1) = *(ulong *)(param_1 + lVar1) - uVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  lVar1 = 0;
  uVar3 = 0;
  local_38[0] = *(ulong *)(param_2 + 0x28) >> 0x20 | *(ulong *)(param_2 + 0x30) << 0x20;
  local_38[1] = *(ulong *)(param_2 + 0x30) >> 0x20;
  local_38[2] = 0;
  local_38[3] = 0;
  do {
    uVar4 = *(long *)((long)local_38 + lVar1) + uVar3;
    if (uVar4 != 0) {
      uVar3 = (ulong)(*(ulong *)(param_1 + lVar1) < uVar4);
    }
    *(ulong *)(param_1 + lVar1) = *(ulong *)(param_1 + lVar1) - uVar4;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x20);
  if (uVar3 + uVar2 == 0) {
    uVar2 = 4;
LAB_1006ae38c:
    uVar2 = uVar2 - 1;
    if (((uint)uVar2 >> 7 & 1) != 0) goto LAB_1006ae3b0;
    uVar3 = *(ulong *)(param_1 + (uVar2 & 0x7f) * 8);
    if ((ulong)(&DAT_1009e7108)[uVar2 & 0x7f] <= uVar3) goto code_r0x0001006ae3ac;
  }
  else {
    lVar1 = -(uVar3 + uVar2);
    do {
      lVar5 = 0;
      uVar2 = 0;
      do {
        uVar4 = *(ulong *)(param_1 + lVar5);
        uVar3 = uVar4 + uVar2 + *(long *)((long)&DAT_1009e7108 + lVar5);
        if (uVar3 != uVar4) {
          uVar2 = (ulong)(uVar3 < uVar4);
        }
        *(ulong *)(param_1 + lVar5) = uVar3;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x20);
      lVar1 = uVar2 + (long)(int)lVar1;
    } while ((int)lVar1 < 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38[4]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0001006ae3ac:
  if ((ulong)(&DAT_1009e7108)[uVar2 & 0x7f] < uVar3) {
LAB_1006ae3b0:
    lVar1 = 0;
    uVar2 = 0;
    do {
      uVar3 = *(long *)((long)&DAT_1009e7108 + lVar1) + uVar2;
      if (uVar3 != 0) {
        uVar2 = (ulong)(*(ulong *)(param_1 + lVar1) < uVar3);
      }
      *(ulong *)(param_1 + lVar1) = *(ulong *)(param_1 + lVar1) - uVar3;
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x20);
    uVar2 = 4;
  }
  goto LAB_1006ae38c;
}

