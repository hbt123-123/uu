// rea decompile_all
// name: FUN_1006ae52c
// address: 0x1006ae52c
// body: available
// range: 0x1006ae52c-0x1006ae95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ae958 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ae52c(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_40 [5];
  long local_18;
  
  lVar3 = 0;
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  do {
    *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar4 = 0;
  local_40[0] = 0;
  local_40[1] = (ulong)*(uint *)(param_2 + 0x2c) << 0x20;
  local_40[3] = *(undefined8 *)(param_2 + 0x38);
  local_40[2] = *(undefined8 *)(param_2 + 0x30);
  do {
    uVar6 = *(ulong *)((long)local_40 + lVar3);
    uVar5 = uVar4 + uVar6 * 2;
    if (uVar5 != uVar6) {
      uVar4 = (ulong)(uVar5 < uVar6);
    }
    *(ulong *)((long)local_40 + lVar3) = uVar5;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar5 = 0;
  do {
    uVar7 = *(ulong *)(param_1 + lVar3);
    uVar6 = uVar7 + uVar5 + *(long *)((long)local_40 + lVar3);
    if (uVar6 != uVar7) {
      uVar5 = (ulong)(uVar6 < uVar7);
    }
    *(ulong *)(param_1 + lVar3) = uVar6;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar6 = 0;
  local_40[1] = *(ulong *)(param_2 + 0x30) << 0x20;
  local_40[2] = *(ulong *)(param_2 + 0x30) >> 0x20 | *(ulong *)(param_2 + 0x38) << 0x20;
  local_40[3] = *(ulong *)(param_2 + 0x38) >> 0x20;
  do {
    uVar8 = *(ulong *)((long)local_40 + lVar3);
    uVar7 = uVar6 + uVar8 * 2;
    if (uVar7 != uVar8) {
      uVar6 = (ulong)(uVar7 < uVar8);
    }
    *(ulong *)((long)local_40 + lVar3) = uVar7;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar7 = 0;
  do {
    uVar9 = *(ulong *)(param_1 + lVar3);
    uVar8 = uVar9 + uVar7 + *(long *)((long)local_40 + lVar3);
    if (uVar8 != uVar9) {
      uVar7 = (ulong)(uVar8 < uVar9);
    }
    *(ulong *)(param_1 + lVar3) = uVar8;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar8 = 0;
  local_40[0] = *(ulong *)(param_2 + 0x20);
  local_40[1] = (ulong)*(uint *)(param_2 + 0x28);
  local_40[2] = 0;
  local_40[3] = *(undefined8 *)(param_2 + 0x38);
  do {
    uVar10 = *(ulong *)(param_1 + lVar3);
    uVar9 = uVar10 + uVar8 + *(long *)((long)local_40 + lVar3);
    if (uVar9 != uVar10) {
      uVar8 = (ulong)(uVar9 < uVar10);
    }
    *(ulong *)(param_1 + lVar3) = uVar9;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar9 = 0;
  local_40[0] = *(ulong *)(param_2 + 0x20) >> 0x20 | *(ulong *)(param_2 + 0x28) << 0x20;
  local_40[1] = *(ulong *)(param_2 + 0x30) & 0xffffffff00000000 | *(ulong *)(param_2 + 0x28) >> 0x20
  ;
  local_40[2] = *(undefined8 *)(param_2 + 0x38);
  local_40[3] = *(ulong *)(param_2 + 0x30) >> 0x20 | *(ulong *)(param_2 + 0x20) << 0x20;
  do {
    uVar11 = *(ulong *)(param_1 + lVar3);
    uVar10 = uVar11 + uVar9 + *(long *)((long)local_40 + lVar3);
    if (uVar10 != uVar11) {
      uVar9 = (ulong)(uVar10 < uVar11);
    }
    *(ulong *)(param_1 + lVar3) = uVar10;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar10 = 0;
  local_40[0] = *(ulong *)(param_2 + 0x28) >> 0x20 | *(ulong *)(param_2 + 0x30) << 0x20;
  local_40[1] = *(ulong *)(param_2 + 0x30) >> 0x20;
  local_40[2] = 0;
  local_40[3] = (ulong)*(uint *)(param_2 + 0x20) | *(ulong *)(param_2 + 0x28) << 0x20;
  do {
    uVar11 = *(long *)((long)local_40 + lVar3) + uVar10;
    if (uVar11 != 0) {
      uVar10 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar11);
    }
    *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar11;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar11 = 0;
  local_40[1] = *(undefined8 *)(param_2 + 0x38);
  local_40[0] = *(ulong *)(param_2 + 0x30);
  local_40[2] = 0;
  local_40[3] = *(ulong *)(param_2 + 0x20) >> 0x20 | (ulong)*(uint *)(param_2 + 0x2c) << 0x20;
  do {
    uVar12 = *(long *)((long)local_40 + lVar3) + uVar11;
    if (uVar12 != 0) {
      uVar11 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar12);
    }
    *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar12;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar12 = 0;
  local_40[0] = *(ulong *)(param_2 + 0x30) >> 0x20 | *(ulong *)(param_2 + 0x38) << 0x20;
  local_40[1] = *(ulong *)(param_2 + 0x38) >> 0x20 | *(ulong *)(param_2 + 0x20) << 0x20;
  local_40[2] = *(ulong *)(param_2 + 0x20) >> 0x20 | *(long *)(param_2 + 0x28) << 0x20;
  local_40[3] = *(ulong *)(param_2 + 0x30) << 0x20;
  do {
    uVar13 = *(long *)((long)local_40 + lVar3) + uVar12;
    if (uVar13 != 0) {
      uVar12 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar13);
    }
    *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar13;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar13 = 0;
  local_40[0] = *(ulong *)(param_2 + 0x38);
  local_40[1] = (ulong)*(uint *)(param_2 + 0x24) << 0x20;
  local_40[2] = *(undefined8 *)(param_2 + 0x28);
  local_40[3] = (ulong)*(uint *)(param_2 + 0x34) << 0x20;
  do {
    uVar1 = *(long *)((long)local_40 + lVar3) + uVar13;
    if (uVar1 != 0) {
      uVar13 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar1);
    }
    *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar1;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  uVar13 = ((uVar5 + uVar4 + uVar6 + uVar7 + uVar8 + uVar9) - (uVar10 + uVar11 + uVar12)) - uVar13;
  if ((long)uVar13 < 0) {
    do {
      lVar3 = 0;
      uVar4 = 0;
      do {
        uVar6 = *(ulong *)(param_1 + lVar3);
        uVar5 = uVar6 + uVar4 + *(long *)((long)&DAT_1009e71d0 + lVar3);
        if (uVar5 != uVar6) {
          uVar4 = (ulong)(uVar5 < uVar6);
        }
        *(ulong *)(param_1 + lVar3) = uVar5;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0x20);
      uVar13 = uVar4 + (long)(int)uVar13;
    } while ((int)uVar13 < 0);
LAB_1006ae934:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_18) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  if ((int)uVar13 == 0) goto LAB_1006ae8c4;
  do {
    do {
      lVar3 = 0;
      uVar4 = 0;
      do {
        uVar5 = *(long *)((long)&DAT_1009e71d0 + lVar3) + uVar4;
        if (uVar5 != 0) {
          uVar4 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar5);
        }
        *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar5;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0x20);
      uVar2 = (int)uVar13 - (int)uVar4;
      uVar13 = (ulong)uVar2;
    } while (uVar2 != 0);
LAB_1006ae8c4:
    uVar4 = 3;
    do {
      if (((uint)uVar4 >> 7 & 1) != 0) break;
      uVar5 = uVar4 & 0x7f;
      uVar6 = *(ulong *)(param_1 + uVar5 * 8);
      if (uVar6 < (ulong)(&DAT_1009e71d0)[uVar5]) goto LAB_1006ae934;
      uVar4 = uVar4 - 1;
    } while (uVar6 <= (ulong)(&DAT_1009e71d0)[uVar5]);
  } while( true );
}

