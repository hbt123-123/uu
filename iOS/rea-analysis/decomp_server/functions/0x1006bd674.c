// rea decompile_all
// name: FUN_1006bd674
// address: 0x1006bd674
// body: available
// range: 0x1006bd674-0x1006bdb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006bda80 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bd674(int *param_1,int *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,ushort *param_7,long param_8,uint param_9,int param_10,
                  uint param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  uint uVar16;
  long lVar18;
  ulong uVar19;
  short *psVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  uint *puVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  uint uVar33;
  undefined1 auStack_2d2 [106];
  undefined1 auStack_268 [512];
  long local_68;
  ulong uVar17;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_4 == param_5) {
    *param_1 = 0;
    uVar14 = 2 < param_4 || param_10 == 0;
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
      return;
    }
    goto LAB_1006bda80;
  }
  if (param_11 < 4) {
    if (param_10 != 0) {
      if ((param_5 < 1000) && (*param_1 == 2)) {
LAB_1006bdab4:
        uVar14 = 3;
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
          return;
        }
        goto LAB_1006bda80;
      }
      if ((((ulong)(10 - param_11) << ((ulong)param_9 & 0x3f)) >> 3 <= param_5) &&
         (param_5 >> ((ulong)(param_9 - 1) & 0x3f) <= param_4)) goto LAB_1006bda8c;
LAB_1006bda60:
      *param_1 = 0;
      uVar14 = 0;
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
        return;
      }
      goto LAB_1006bda80;
    }
  }
  else {
    uVar33 = (uint)param_3;
    if (param_10 == 0) {
      uVar21 = 0xffffffffffffffff;
      if (*param_1 != 0) goto LAB_1006bd8ac;
LAB_1006bd8d4:
      uVar17 = 0xffffffffffffffff;
    }
    else {
      param_9 = 8 - param_9;
      uVar16 = 1;
      if (1 < uVar33 + 1) {
        uVar16 = uVar33 + 1;
      }
      uVar17 = (ulong)uVar16;
      if (uVar33 + 1 < 4) {
        uVar19 = 0;
        uVar21 = 0;
LAB_1006bd864:
        lVar18 = uVar17 - uVar19;
        psVar20 = (short *)(param_8 + uVar19 * 2);
        piVar23 = param_2 + uVar19;
        do {
          sVar8 = *psVar20;
          if (sVar8 == -1) {
            sVar8 = 1;
          }
          uVar21 = uVar21 + (uint)(*(int *)(&DAT_10084f780 +
                                           (ulong)(uint)((int)sVar8 << (ulong)(param_9 & 0x1f)) * 4)
                                  * *piVar23);
          lVar18 = lVar18 + -1;
          psVar20 = psVar20 + 1;
          piVar23 = piVar23 + 1;
        } while (lVar18 != 0);
      }
      else {
        lVar18 = 0;
        lVar25 = 0;
        lVar27 = 0;
        lVar30 = 0;
        uVar19 = uVar17 & 0xfffffffc;
        psVar20 = (short *)(param_8 + 4);
        uVar21 = uVar19;
        piVar23 = param_2 + 2;
        do {
          sVar8 = psVar20[-2];
          sVar9 = psVar20[-1];
          sVar5 = *psVar20;
          sVar6 = psVar20[1];
          if (sVar8 == -1) {
            sVar8 = 1;
          }
          if (sVar9 == -1) {
            sVar9 = 1;
          }
          if (sVar5 == -1) {
            sVar5 = 1;
          }
          if (sVar6 == -1) {
            sVar6 = 1;
          }
          lVar18 = lVar18 + (ulong)(uint)(*(int *)(&DAT_10084f780 +
                                                  (ulong)(uint)((int)sVar8 <<
                                                               (ulong)(param_9 & 0x1f)) * 4) *
                                         piVar23[-2]);
          lVar25 = lVar25 + (ulong)(uint)(*(int *)(&DAT_10084f780 +
                                                  (ulong)(uint)((int)sVar9 <<
                                                               (ulong)(param_9 & 0x1f)) * 4) *
                                         piVar23[-1]);
          lVar27 = lVar27 + (ulong)(uint)(*(int *)(&DAT_10084f780 +
                                                  (ulong)(uint)((int)sVar5 <<
                                                               (ulong)(param_9 & 0x1f)) * 4) *
                                         *piVar23);
          lVar30 = lVar30 + (ulong)(uint)(*(int *)(&DAT_10084f780 +
                                                  (ulong)(uint)((int)sVar6 <<
                                                               (ulong)(param_9 & 0x1f)) * 4) *
                                         piVar23[1]);
          psVar20 = psVar20 + 4;
          uVar21 = uVar21 - 4;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
        uVar21 = lVar30 + lVar27 + lVar25 + lVar18;
        if (uVar19 != uVar17) goto LAB_1006bd864;
      }
      uVar21 = uVar21 >> 8;
      if (*param_1 == 0) goto LAB_1006bd8d4;
LAB_1006bd8ac:
      uVar7 = *param_7;
      lVar18 = (long)(1 << (ulong)(uVar7 - 1 & 0x1f));
      if (uVar7 == 0) {
        lVar18 = 1;
      }
      if (param_7[1] < uVar33) goto LAB_1006bd8d4;
      uVar17 = 0;
      uVar19 = (ulong)(uVar33 + 1);
      puVar28 = (uint *)(param_7 + lVar18 * 2);
      piVar23 = param_2;
      do {
        puVar28 = puVar28 + 2;
        if (*piVar23 != 0) {
          iVar24 = (*puVar28 >> 0x10) + 1;
          uVar16 = iVar24 * 0x100 -
                   (iVar24 * 0x1000000 + (*puVar28 + (1 << (ulong)(uVar7 & 0x1f))) * -0x100 >>
                   (ulong)(uVar7 & 0x1f));
          if ((uint)uVar7 * 0x100 + 0x100 <= uVar16) goto LAB_1006bd8d4;
          uVar17 = uVar17 + uVar16 * *piVar23;
        }
        uVar19 = uVar19 - 1;
        piVar23 = piVar23 + 1;
      } while (uVar19 != 0);
      uVar17 = uVar17 >> 8;
    }
    FUN_1006b1df0(param_6,param_5,param_3);
    puVar15 = auStack_2d2;
    FUN_1006b1e58(puVar15,param_6,param_2,param_5,param_3);
    if (puVar15 < (undefined1 *)0xffffffffffffff89) {
      puVar15 = auStack_268;
      FUN_1006b1af4(puVar15,0x200,auStack_2d2,param_3,param_6);
    }
    uVar16 = 1;
    if (1 < uVar33 + 1) {
      uVar16 = uVar33 + 1;
    }
    uVar19 = (ulong)uVar16;
    if (uVar33 + 1 < 4) {
      uVar22 = 0;
      uVar33 = 0;
LAB_1006bda18:
      lVar18 = uVar19 - uVar22;
      piVar23 = param_2 + uVar22;
      do {
        iVar24 = *piVar23;
        uVar19 = 0;
        if (param_5 != 0) {
          uVar19 = (uint)(iVar24 << 8) / param_5;
        }
        if ((uint)(iVar24 << 8) < param_5 && iVar24 != 0) {
          uVar19 = 1;
        }
        uVar33 = uVar33 + *(int *)(&DAT_10084f780 + uVar19 * 4) * iVar24;
        lVar18 = lVar18 + -1;
        piVar23 = piVar23 + 1;
      } while (lVar18 != 0);
    }
    else {
      iVar24 = 0;
      iVar26 = 0;
      iVar29 = 0;
      iVar31 = 0;
      uVar22 = uVar19 & 0xfffffffc;
      piVar23 = param_2 + 2;
      uVar32 = uVar22;
      do {
        iVar1 = piVar23[-2];
        iVar3 = piVar23[-1];
        iVar2 = *piVar23;
        iVar4 = piVar23[1];
        uVar10 = 0;
        if (param_5 != 0) {
          uVar10 = (uint)(iVar1 << 8) / param_5;
        }
        uVar11 = 0;
        if (param_5 != 0) {
          uVar11 = (uint)(iVar3 << 8) / param_5;
        }
        uVar12 = 0;
        if (param_5 != 0) {
          uVar12 = (uint)(iVar2 << 8) / param_5;
        }
        if ((uint)(iVar1 << 8) < param_5 && iVar1 != 0) {
          uVar10 = 1;
        }
        if ((uint)(iVar3 << 8) < param_5 && iVar3 != 0) {
          uVar11 = 1;
        }
        if ((uint)(iVar2 << 8) < param_5 && iVar2 != 0) {
          uVar12 = 1;
        }
        uVar13 = 0;
        if (param_5 != 0) {
          uVar13 = (uint)(iVar4 << 8) / param_5;
        }
        if ((uint)(iVar4 << 8) < param_5 && iVar4 != 0) {
          uVar13 = 1;
        }
        iVar24 = iVar24 + *(int *)(&DAT_10084f780 + uVar10 * 4) * iVar1;
        iVar26 = iVar26 + *(int *)(&DAT_10084f780 + uVar11 * 4) * iVar3;
        iVar29 = iVar29 + *(int *)(&DAT_10084f780 + uVar12 * 4) * iVar2;
        iVar31 = iVar31 + *(int *)(&DAT_10084f780 + uVar13 * 4) * iVar4;
        uVar32 = uVar32 - 4;
        piVar23 = piVar23 + 4;
      } while (uVar32 != 0);
      uVar33 = iVar31 + iVar29 + iVar26 + iVar24;
      if (uVar22 != uVar19) goto LAB_1006bda18;
    }
    uVar19 = (ulong)(uVar33 >> 8) + (long)puVar15 * 8;
    if ((uVar21 <= uVar17) && (uVar21 <= uVar19)) goto LAB_1006bda60;
    if (uVar17 <= uVar19) goto LAB_1006bdab4;
  }
LAB_1006bda8c:
  *param_1 = 1;
  uVar14 = 2;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
LAB_1006bda80:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar14);
}

