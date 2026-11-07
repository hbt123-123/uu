// rea decompile_all
// name: FUN_1006b184c
// address: 0x1006b184c
// body: available
// range: 0x1006b184c-0x1006b1a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b1a64 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b184c(undefined2 *param_1,short *param_2,int param_3,uint param_4,byte *param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  uint local_42c [257];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar5 = 1 << (ulong)(param_4 & 0x1f);
  uVar12 = (ulong)uVar5;
  uVar3 = uVar5 >> 1;
  if (param_4 == 0) {
    uVar3 = 1;
  }
  if (param_6 >> ((ulong)param_4 & 0x3f) == 0) {
    uVar10 = 0xffffffffffffffd4;
  }
  else {
    uVar6 = uVar5 - 1;
    *param_1 = (short)param_4;
    param_1[1] = (short)param_3;
    local_42c[0] = 0;
    uVar1 = param_3 + 1;
    uVar15 = uVar6;
    if (param_3 != -1) {
      lVar16 = 0;
      uVar18 = 0;
      uVar2 = param_3 + 2;
      if (uVar2 < 3) {
        uVar2 = 2;
      }
      do {
        while (param_2[lVar16] != -1) {
          uVar18 = uVar18 + (int)param_2[lVar16];
          local_42c[lVar16 + 1] = uVar18;
          lVar16 = lVar16 + 1;
          if ((ulong)uVar2 - 1 == lVar16) goto LAB_1006b191c;
        }
        uVar18 = uVar18 + 1;
        param_5[uVar15] = (byte)lVar16;
        uVar15 = uVar15 - 1;
        local_42c[lVar16 + 1] = uVar18;
        lVar16 = lVar16 + 1;
      } while ((ulong)uVar2 - 1 != lVar16);
    }
LAB_1006b191c:
    uVar19 = 0;
    uVar20 = 0;
    local_42c[uVar1] = uVar5 + 1;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar13 = (ulong)uVar1;
    do {
      sVar4 = param_2[uVar19];
      if (0 < sVar4) {
        iVar14 = 0;
        do {
          param_5[uVar20] = (byte)uVar19;
          do {
            uVar1 = (uVar5 >> 3) + (uVar5 >> 1) + 3 + (int)uVar20 & uVar6;
            uVar20 = (ulong)uVar1;
          } while (uVar15 < uVar1);
          iVar14 = iVar14 + 1;
        } while (iVar14 != sVar4);
      }
      uVar19 = uVar19 + 1;
      uVar17 = uVar12;
    } while (uVar19 != uVar13);
    do {
      uVar1 = local_42c[*param_5];
      local_42c[*param_5] = uVar1 + 1;
      param_1[(ulong)uVar1 + 2] = (short)uVar17;
      uVar12 = uVar12 - 1;
      param_5 = param_5 + 1;
      uVar17 = (ulong)((int)uVar17 + 1);
    } while (uVar12 != 0);
    iVar14 = 0;
    iVar7 = param_4 * 0x10000 - uVar5;
    piVar9 = (int *)(param_1 + (ulong)uVar3 * 2);
    do {
      piVar11 = piVar9 + 2;
      sVar4 = *param_2;
      if (sVar4 == -1 || sVar4 == 1) {
        piVar9[1] = iVar14 + -1;
        *piVar11 = iVar7;
        iVar14 = iVar14 + 1;
      }
      else if (sVar4 == 0) {
        *piVar11 = iVar7 + 0x10000;
      }
      else {
        iVar8 = (int)sVar4;
        uVar3 = param_4 - ((uint)LZCOUNT(iVar8 + -1) ^ 0x1f);
        piVar9[1] = iVar14 - iVar8;
        *piVar11 = uVar3 * 0x10000 - (iVar8 << (ulong)(uVar3 & 0x1f));
        iVar14 = iVar14 + iVar8;
      }
      uVar13 = uVar13 - 1;
      param_2 = param_2 + 1;
      piVar9 = piVar11;
    } while (uVar13 != 0);
    uVar10 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar10);
  }
  return;
}

