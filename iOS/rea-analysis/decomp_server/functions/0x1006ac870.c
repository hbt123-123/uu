// rea decompile_all
// name: FUN_1006ac870
// address: 0x1006ac870
// body: available
// range: 0x1006ac870-0x1006acc3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006acc34 to 0x1007de254 _bzero (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006acc38 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ac870(void *param_1,void *param_2,long *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  size_t sVar11;
  ulong uVar12;
  ulong local_f0 [4];
  ulong local_d0 [4];
  ulong local_b0 [4];
  ulong local_90 [4];
  long local_70;
  
  uVar4 = (uint)param_4;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (0 < (int)uVar4) {
    uVar7 = 0;
    uVar5 = 0;
    uVar12 = (ulong)(int)uVar4;
    do {
      uVar5 = *(ulong *)((long)param_2 + uVar7) | uVar5;
      uVar7 = uVar7 + 8;
    } while ((-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3) != uVar7);
    sVar11 = uVar12 * 8;
    if (uVar5 == 0) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
        _bzero(param_1,sVar11);
        return;
      }
      goto LAB_1006acc38;
    }
    _memcpy(local_90,param_2,sVar11);
    _memcpy(local_b0,param_3,sVar11);
    _bzero(local_d0,sVar11);
    local_d0[0] = 1;
    _bzero(local_f0,sVar11);
    puVar1 = local_b0 + uVar12;
    puVar2 = local_90 + uVar12;
    uVar7 = uVar12;
    while (uVar7 = uVar7 - 1, ((uint)uVar7 >> 7 & 1) == 0) {
      uVar5 = local_90[uVar7 & 0x7f];
      uVar8 = local_b0[uVar7 & 0x7f];
      if (uVar5 != uVar8) {
        if (((byte)local_90[0] & 1) == 0) {
          uVar7 = 0;
          puVar3 = puVar2;
          do {
            puVar3 = puVar3 + -1;
            uVar5 = *puVar3;
            *puVar3 = uVar7 | uVar5 >> 1;
            uVar7 = uVar5 << 0x3f;
          } while (local_90 < puVar3);
          puVar3 = local_d0;
        }
        else if (((byte)local_b0[0] & 1) == 0) {
          uVar7 = 0;
          puVar3 = puVar1;
          do {
            puVar3 = puVar3 + -1;
            uVar5 = *puVar3;
            *puVar3 = uVar7 | uVar5 >> 1;
            uVar7 = uVar5 << 0x3f;
          } while (local_b0 < puVar3);
          puVar3 = local_f0;
        }
        else if (uVar8 < uVar5) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            uVar8 = *(ulong *)((long)local_90 + lVar6);
            uVar5 = *(long *)((long)local_b0 + lVar6) + uVar7;
            if (uVar5 != 0) {
              uVar7 = (ulong)(uVar8 < uVar5);
            }
            *(ulong *)((long)local_90 + lVar6) = uVar8 - uVar5;
            lVar6 = lVar6 + 8;
          } while (sVar11 - lVar6 != 0);
          uVar7 = 0;
          puVar3 = puVar2;
          do {
            puVar3 = puVar3 + -1;
            uVar5 = *puVar3;
            *puVar3 = uVar7 | uVar5 >> 1;
            uVar7 = uVar5 << 0x3f;
            uVar5 = uVar12 - 1;
          } while (local_90 < puVar3);
          do {
            if (((uint)uVar5 >> 7 & 1) != 0) goto LAB_1006aca78;
            uVar7 = uVar5 & 0x7f;
            if (local_f0[uVar7] < local_d0[uVar7]) goto LAB_1006aca78;
            uVar5 = uVar5 - 1;
          } while (local_f0[uVar7] <= local_d0[uVar7]);
          uVar7 = 0;
          puVar3 = local_d0;
          plVar9 = param_3;
          uVar5 = uVar12;
          do {
            uVar10 = *puVar3;
            uVar8 = uVar10 + uVar7 + *plVar9;
            if (uVar8 != uVar10) {
              uVar7 = (ulong)(uVar8 < uVar10);
            }
            *puVar3 = uVar8;
            uVar5 = uVar5 - 1;
            puVar3 = puVar3 + 1;
            plVar9 = plVar9 + 1;
          } while (uVar5 != 0);
LAB_1006aca78:
          lVar6 = 0;
          uVar7 = 0;
          do {
            puVar3 = local_d0;
            uVar5 = *(long *)((long)local_f0 + lVar6) + uVar7;
            if (uVar5 != 0) {
              uVar7 = (ulong)(*(ulong *)((long)puVar3 + lVar6) < uVar5);
            }
            *(ulong *)((long)puVar3 + lVar6) = *(ulong *)((long)puVar3 + lVar6) - uVar5;
            lVar6 = lVar6 + 8;
          } while (sVar11 - lVar6 != 0);
        }
        else {
          lVar6 = 0;
          uVar7 = 0;
          do {
            uVar8 = *(ulong *)((long)local_b0 + lVar6);
            uVar5 = *(long *)((long)local_90 + lVar6) + uVar7;
            if (uVar5 != 0) {
              uVar7 = (ulong)(uVar8 < uVar5);
            }
            *(ulong *)((long)local_b0 + lVar6) = uVar8 - uVar5;
            lVar6 = lVar6 + 8;
          } while (sVar11 - lVar6 != 0);
          uVar7 = 0;
          puVar3 = puVar1;
          do {
            puVar3 = puVar3 + -1;
            uVar5 = *puVar3;
            *puVar3 = uVar7 | uVar5 >> 1;
            uVar7 = uVar5 << 0x3f;
            uVar5 = uVar12 - 1;
          } while (local_b0 < puVar3);
          do {
            if (((uint)uVar5 >> 7 & 1) != 0) goto LAB_1006acb68;
            uVar7 = uVar5 & 0x7f;
            if (local_d0[uVar7] < local_f0[uVar7]) goto LAB_1006acb68;
            uVar5 = uVar5 - 1;
          } while (local_d0[uVar7] <= local_f0[uVar7]);
          uVar7 = 0;
          puVar3 = local_f0;
          plVar9 = param_3;
          uVar5 = uVar12;
          do {
            uVar10 = *puVar3;
            uVar8 = uVar10 + uVar7 + *plVar9;
            if (uVar8 != uVar10) {
              uVar7 = (ulong)(uVar8 < uVar10);
            }
            *puVar3 = uVar8;
            uVar5 = uVar5 - 1;
            puVar3 = puVar3 + 1;
            plVar9 = plVar9 + 1;
          } while (uVar5 != 0);
LAB_1006acb68:
          lVar6 = 0;
          uVar7 = 0;
          do {
            puVar3 = local_f0;
            uVar5 = *(long *)((long)local_d0 + lVar6) + uVar7;
            if (uVar5 != 0) {
              uVar7 = (ulong)(*(ulong *)((long)puVar3 + lVar6) < uVar5);
            }
            *(ulong *)((long)puVar3 + lVar6) = *(ulong *)((long)puVar3 + lVar6) - uVar5;
            lVar6 = lVar6 + 8;
          } while (sVar11 - lVar6 != 0);
        }
        FUN_1006af160(puVar3,param_3,param_4);
        uVar7 = uVar12;
      }
    }
    _memcpy(param_1,local_d0,sVar11);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
LAB_1006acc38:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

