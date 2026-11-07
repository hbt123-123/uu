// rea decompile_all
// name: FUN_1007aecec
// address: 0x1007aecec
// body: available
// range: 0x1007aecec-0x1007aeea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007aeea4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007aecec(long param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 local_d0;
  int local_c8;
  byte *local_c0;
  undefined1 auStack_ac [100];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = param_1;
  FUN_1007ae524(param_1,0x28);
  if (((int)lVar2 != 0) && (lVar2 = param_1, FUN_1007ae8ec(), (int)lVar2 != 0)) {
    uVar7 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    iVar1 = (int)*(undefined8 *)(uVar7 + 0x18);
    FUN_1007afbd8();
    if (iVar1 != 0) {
      uVar7 = *(ulong *)((*(ulong *)(param_1 + 0x20) & 0x7ffffffffff8) + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      puVar8 = *(uint **)(uVar7 + 0x30);
      if ((((puVar8 != (uint *)0x0) &&
           (puVar3 = puVar8, FUN_1007ae524(puVar8,0x28), (int)puVar3 != 0)) && (puVar8[1] != 0)) &&
         (puVar8[1] != 1)) {
        lVar2 = (long)puVar8 + (ulong)*puVar8 + 8;
        uVar10 = 1;
        while ((lVar4 = lVar2, FUN_1007ae6e0(lVar2,&local_d0,0x20), (int)lVar4 != 0 &&
               (lVar4 = lVar2, FUN_1007ae524(lVar2,*puVar8), (int)lVar4 != 0))) {
          uVar5 = local_d0;
          FUN_1007ae524(local_d0,4);
          if (((int)uVar5 == 0) ||
             ((iVar1 = local_c8, FUN_1007afbd8(), pbVar9 = local_c0, iVar1 == 0 ||
              ((byte *)0xffffffffffffff9b < local_c0)))) break;
          pbVar6 = local_c0;
          FUN_1007ae5bc(local_c0,auStack_ac,100);
          if (((int)pbVar6 == 0) ||
             ((*(uint *)(&DAT_100850d40 + (ulong)*pbVar9 * 4) & 7) == 0 || (int)pbVar6 < 1)) break;
          uVar7 = (ulong)pbVar6 & 0xffffffff;
          while ((*(uint *)(&DAT_100850d40 + (ulong)*pbVar9 * 4) & 7) != 0 || *pbVar9 != 0) {
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_1007aed98;
          }
          lVar2 = lVar2 + (ulong)*puVar8;
          uVar10 = uVar10 + 1;
          if (puVar8[1] <= uVar10) break;
        }
      }
    }
  }
LAB_1007aed98:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

