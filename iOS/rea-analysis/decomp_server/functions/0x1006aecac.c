// rea decompile_all
// name: FUN_1006aecac
// address: 0x1006aecac
// body: available
// range: 0x1006aecac-0x1006aeea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aeea4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aecac(long param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong local_60 [9];
  long local_18;
  
  lVar3 = 0;
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_60[5] = 0;
  local_60[7] = 0;
  local_60[6] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_60[3] = 0;
  local_60[2] = 0;
  uVar4 = 0;
  do {
    uVar7 = *(ulong *)((long)param_2 + lVar3 + 0x20);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    local_60[4] = SUB168(auVar1 * ZEXT816(0x1000003d1),8);
    uVar7 = uVar7 * 0x1000003d1;
    if (CARRY8(uVar7,uVar4)) {
      local_60[4] = local_60[4] + 1;
    }
    *(ulong *)((long)local_60 + lVar3) = uVar7 + uVar4;
    lVar3 = lVar3 + 8;
    uVar4 = local_60[4];
  } while (lVar3 != 0x20);
  lVar3 = 0;
  uVar4 = 0;
  do {
    uVar6 = *(ulong *)((long)param_2 + lVar3);
    uVar7 = uVar6 + uVar4 + *(long *)((long)local_60 + lVar3);
    if (uVar7 != uVar6) {
      uVar4 = (ulong)(uVar7 < uVar6);
    }
    *(ulong *)(param_1 + lVar3) = uVar7;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar3 = 4;
  uVar7 = 0;
  plVar8 = param_2;
  do {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60[lVar3];
    uVar6 = SUB168(auVar2 * ZEXT816(0x1000003d1),8);
    uVar9 = local_60[lVar3] * 0x1000003d1;
    if (CARRY8(uVar9,uVar7)) {
      uVar6 = uVar6 + 1;
    }
    *plVar8 = uVar9 + uVar7;
    lVar3 = lVar3 + 1;
    uVar7 = uVar6;
    plVar8 = plVar8 + 1;
  } while (lVar3 != 8);
  lVar3 = 0;
  uVar7 = 0;
  param_2[4] = uVar6;
  do {
    uVar9 = *(ulong *)(param_1 + lVar3);
    uVar6 = uVar9 + uVar7 + *(long *)((long)param_2 + lVar3);
    if (uVar6 != uVar9) {
      uVar7 = (ulong)(uVar6 < uVar9);
    }
    *(ulong *)(param_1 + lVar3) = uVar6;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  for (lVar3 = uVar7 + uVar4; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar7 = *(long *)((long)&DAT_1009e7298 + lVar5) + uVar4;
      if (uVar7 != 0) {
        uVar4 = (ulong)(*(ulong *)(param_1 + lVar5) < uVar7);
      }
      *(ulong *)(param_1 + lVar5) = *(ulong *)(param_1 + lVar5) - uVar7;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x20);
  }
  uVar4 = 3;
  while( true ) {
    if (((uint)uVar4 >> 7 & 1) != 0) goto LAB_1006aee80;
    uVar7 = uVar4 & 0x7f;
    uVar6 = *(ulong *)(param_1 + uVar7 * 8);
    if ((ulong)(&DAT_1009e7298)[uVar7] < uVar6) break;
    uVar4 = uVar4 - 1;
    if (uVar6 < (ulong)(&DAT_1009e7298)[uVar7]) goto LAB_1006aee80;
  }
  lVar3 = 0;
  uVar4 = 0;
  do {
    uVar7 = *(long *)((long)&DAT_1009e7298 + lVar3) + uVar4;
    if (uVar7 != 0) {
      uVar4 = (ulong)(*(ulong *)(param_1 + lVar3) < uVar7);
    }
    *(ulong *)(param_1 + lVar3) = *(ulong *)(param_1 + lVar3) - uVar7;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
LAB_1006aee80:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

