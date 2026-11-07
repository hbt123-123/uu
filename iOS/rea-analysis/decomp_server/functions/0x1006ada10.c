// rea decompile_all
// name: FUN_1006ada10
// address: 0x1006ada10
// body: available
// range: 0x1006ada10-0x1006adc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006adc14 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ada10(long param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_50 [7];
  long local_18;
  
  lVar1 = 0;
  local_50[3] = 0;
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_50[2] = 0;
  local_50[5] = 0;
  local_50[4] = 0;
  local_50[1] = 0;
  local_50[0] = 0;
  uVar2 = param_2[2];
  uVar6 = uVar2;
  do {
    uVar5 = *(ulong *)((long)param_2 + lVar1 + 0x18);
    uVar6 = uVar6 >> 0x20 | uVar5 << 0x20;
    uVar8 = local_50[3] + uVar6 * 0x80000001;
    *(ulong *)((long)local_50 + lVar1) = uVar8;
    uVar7 = local_50[2];
    if (uVar8 < uVar6) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (local_50[3] != 0) {
        uVar3 = (ulong)(uVar8 == uVar6);
      }
    }
    local_50[3] = uVar3 + ((uVar5 & 0xffffffff) >> 1);
    lVar1 = lVar1 + 8;
    uVar6 = uVar5;
  } while (lVar1 != 0x18);
  lVar1 = 0;
  uVar6 = 0;
  param_2[2] = uVar2 & 0xffffffff;
  local_50[2] = local_50[2] & 0xffffffff;
  do {
    uVar5 = *(ulong *)((long)param_2 + lVar1);
    uVar2 = uVar5 + uVar6 + *(long *)((long)local_50 + lVar1);
    if (uVar2 != uVar5) {
      uVar6 = (ulong)(uVar2 < uVar5);
    }
    *(ulong *)(param_1 + lVar1) = uVar2;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  uVar6 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar1 = 0x18;
  local_50[2] = uVar7;
  puVar4 = param_2;
  do {
    uVar2 = *(ulong *)((long)local_50 + lVar1);
    uVar7 = uVar7 >> 0x20 | uVar2 << 0x20;
    uVar5 = uVar6 + uVar7 * 0x80000001;
    *puVar4 = uVar5;
    if (uVar5 < uVar7) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = (ulong)(uVar5 == uVar7);
      }
    }
    uVar6 = uVar8 + ((uVar2 & 0xffffffff) >> 1);
    puVar4 = puVar4 + 1;
    lVar1 = lVar1 + 8;
    uVar7 = uVar2;
  } while (lVar1 != 0x30);
  lVar1 = 0;
  uVar2 = 0;
  param_2[3] = uVar6;
  do {
    uVar7 = *(ulong *)(param_1 + lVar1);
    uVar6 = uVar7 + uVar2 + *(long *)((long)param_2 + lVar1);
    if (uVar6 != uVar7) {
      uVar2 = (ulong)(uVar6 < uVar7);
    }
    *(ulong *)(param_1 + lVar1) = uVar6;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  uVar6 = 3;
  do {
    while( true ) {
      uVar6 = uVar6 - 1;
      if (((uint)uVar6 >> 7 & 1) != 0) goto LAB_1006adbf0;
      uVar7 = *(ulong *)(param_1 + (uVar6 & 0x7f) * 8);
      uVar2 = (&DAT_1009e6f78)[uVar6 & 0x7f];
      if (uVar2 > uVar7 || uVar7 == uVar2) break;
      lVar1 = 0;
      uVar6 = 0;
      do {
        uVar2 = *(long *)((long)&DAT_1009e6f78 + lVar1) + uVar6;
        if (uVar2 != 0) {
          uVar6 = (ulong)(*(ulong *)(param_1 + lVar1) < uVar2);
        }
        *(ulong *)(param_1 + lVar1) = *(ulong *)(param_1 + lVar1) - uVar2;
        lVar1 = lVar1 + 8;
      } while (lVar1 != 0x18);
      uVar6 = 3;
    }
  } while (uVar2 <= uVar7);
LAB_1006adbf0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

