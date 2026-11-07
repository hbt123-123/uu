// rea decompile_all
// name: FUN_1006e0678
// address: 0x1006e0678
// body: available
// range: 0x1006e0678-0x1006e0b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006e0678(long *param_1,ulong param_2,long *param_3,int *param_4,undefined1 *param_5,
                  long param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar21;
  
  UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)(param_2 + 0xd0);
  if (*(uint *)(param_2 + 0x1c) < *(uint *)(param_2 + 0x18)) {
    lVar6 = 1;
  }
  else {
    lVar6 = (ulong)(*(long *)(param_2 + 0xb0) != 0) << 1;
  }
  uVar3 = *(uint *)(param_2 + 200);
  FUN_1006b8148(UNRECOVERED_JUMPTABLE,lVar6);
  puVar1 = param_5 + param_6;
  uVar12 = param_1[1];
  uVar16 = param_1[2];
  if (uVar12 < uVar16 && 0 < param_6) {
    puVar22 = (undefined8 *)(puVar1 + -0x20);
    do {
      puVar15 = (ulong *)(*param_1 + uVar12 * 0xc);
      uVar20 = *puVar15;
      uVar18 = uVar20 >> 0x20;
      uVar23 = (uint)puVar15[1];
      uVar17 = (uint)(uVar20 >> 0x20);
      uVar11 = (uint)((long)puVar1 - (long)param_5);
      if (uVar11 < uVar23 + uVar17) {
        uVar21 = 0;
        if (uVar3 <= uVar11 - uVar17) {
          uVar21 = uVar20;
        }
        uVar5 = uVar11 - uVar17;
        if (uVar11 < uVar17 || uVar11 - uVar17 == 0) {
          uVar21 = 0;
          uVar5 = uVar23;
        }
        uVar23 = uVar5;
        if (uVar11 != 0) {
          uVar20 = (long)puVar1 - (long)param_5 & 0xffffffff;
          puVar7 = (uint *)(*param_1 + uVar12 * 0xc + 8);
          while (uVar12 = uVar12 + 1, uVar12 - uVar16 != 1) {
            uVar11 = puVar7[-1];
            uVar4 = uVar20 - uVar11;
            if (uVar20 < uVar11 || uVar4 == 0) {
              puVar7[-1] = uVar11 - (int)uVar20;
              break;
            }
            puVar7[-1] = 0;
            uVar11 = *puVar7;
            uVar20 = uVar4 - uVar11;
            if (uVar4 < uVar11) {
              uVar11 = uVar11 - (int)uVar4;
              *puVar7 = uVar11;
              if (uVar11 < uVar3) {
                if (uVar12 < uVar16) {
                  puVar7[2] = puVar7[2] + uVar11;
                }
                param_1[1] = uVar12;
              }
              break;
            }
            *puVar7 = 0;
            param_1[1] = uVar12;
            puVar7 = puVar7 + 3;
            if (uVar20 == 0) break;
          }
        }
      }
      else {
        param_1[1] = uVar12 + 1;
        uVar21 = uVar20;
      }
      iVar19 = (int)uVar21;
      if (iVar19 == 0) break;
      uVar11 = (int)param_5 - *(int *)(param_2 + 8);
      if (*(int *)(param_2 + 0x24) + 0x400U < uVar11) {
        uVar17 = (uVar11 - *(int *)(param_2 + 0x24)) - 0x400;
        if (0x1ff < uVar17) {
          uVar17 = 0x200;
        }
        *(uint *)(param_2 + 0x24) = uVar11 - uVar17;
      }
      if (*(int *)(param_2 + 0xd0) == 2) {
        FUN_1006be260(param_2,param_5,0);
      }
      else if (*(int *)(param_2 + 0xd0) == 1) {
        FUN_1006c76a4(param_2,param_5,0);
      }
      uVar12 = param_2;
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,uVar18);
      *(undefined8 *)(param_4 + 1) = *(undefined8 *)param_4;
      *param_4 = iVar19;
      puVar2 = (undefined8 *)(param_5 + uVar18);
      puVar8 = (undefined8 *)((long)puVar2 - uVar12);
      puVar13 = (undefined8 *)param_3[3];
      if (puVar22 < puVar2) {
        puVar9 = puVar8;
        puVar14 = puVar13;
        if (puVar8 <= puVar22) {
          puVar14 = (undefined8 *)((long)puVar13 + ((long)puVar22 - (long)puVar8));
          uVar24 = *puVar8;
          puVar13[1] = puVar8[1];
          *puVar13 = uVar24;
          uVar24 = puVar8[2];
          puVar13[3] = puVar8[3];
          puVar13[2] = uVar24;
          puVar9 = puVar22;
          if (0x20 < (long)puVar22 - (long)puVar8) {
            puVar13 = puVar13 + 4;
            puVar8 = (undefined8 *)(param_5 + (uVar18 - uVar12) + 0x30);
            do {
              uVar24 = puVar8[-2];
              puVar13[1] = puVar8[-1];
              *puVar13 = uVar24;
              uVar24 = *puVar8;
              puVar13[3] = puVar8[1];
              puVar13[2] = uVar24;
              puVar13 = puVar13 + 4;
              puVar8 = puVar8 + 4;
            } while (puVar13 < puVar14);
          }
        }
        if (puVar9 < puVar2) {
          uVar16 = (long)puVar2 - (long)puVar9;
          if ((7 < uVar16) && (0x3f < (ulong)((long)puVar14 - (long)puVar9))) {
            if (uVar16 < 0x40) {
              uVar20 = 0;
            }
            else {
              uVar20 = uVar16 & 0xffffffffffffffc0;
              puVar13 = puVar14 + 4;
              puVar8 = puVar9 + 4;
              uVar18 = uVar20;
              do {
                uVar24 = puVar8[-4];
                uVar26 = puVar8[-1];
                uVar25 = puVar8[-2];
                uVar28 = puVar8[1];
                uVar27 = *puVar8;
                uVar30 = puVar8[3];
                uVar29 = puVar8[2];
                puVar13[-3] = puVar8[-3];
                puVar13[-4] = uVar24;
                puVar13[-1] = uVar26;
                puVar13[-2] = uVar25;
                puVar13[1] = uVar28;
                *puVar13 = uVar27;
                puVar13[3] = uVar30;
                puVar13[2] = uVar29;
                uVar18 = uVar18 - 0x40;
                puVar13 = puVar13 + 8;
                puVar8 = puVar8 + 8;
              } while (uVar18 != 0);
              if (uVar16 == uVar20) goto LAB_1006e0a74;
              if ((uVar16 & 0x38) == 0) {
                puVar9 = (undefined8 *)((long)puVar9 + uVar20);
                puVar14 = (undefined8 *)((long)puVar14 + uVar20);
                goto LAB_1006e0a64;
              }
            }
            uVar18 = uVar16 & 0xfffffffffffffff8;
            lVar6 = uVar20 - uVar18;
            puVar13 = (undefined8 *)((long)puVar9 + uVar20);
            puVar8 = (undefined8 *)((long)puVar14 + uVar20);
            do {
              *puVar8 = *puVar13;
              lVar6 = lVar6 + 8;
              puVar13 = puVar13 + 1;
              puVar8 = puVar8 + 1;
            } while (lVar6 != 0);
            puVar14 = (undefined8 *)((long)puVar14 + uVar18);
            puVar9 = (undefined8 *)((long)puVar9 + uVar18);
            if (uVar16 == uVar18) goto LAB_1006e0a74;
          }
LAB_1006e0a64:
          do {
            puVar13 = (undefined8 *)((long)puVar9 + 1);
            *(undefined1 *)puVar14 = *(undefined1 *)puVar9;
            puVar14 = (undefined8 *)((long)puVar14 + 1);
            puVar9 = puVar13;
          } while (puVar13 != puVar2);
        }
LAB_1006e0a74:
        param_3[3] = param_3[3] + uVar12;
        piVar10 = (int *)param_3[1];
        if (0xffff < uVar12) {
          *(undefined4 *)(param_3 + 9) = 1;
          *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar10 - *param_3) >> 3);
        }
      }
      else {
        uVar24 = *puVar8;
        puVar13[1] = puVar8[1];
        *puVar13 = uVar24;
        lVar6 = param_3[3];
        if (0x10 < uVar12) {
          uVar24 = puVar8[2];
          *(undefined8 *)(lVar6 + 0x18) = puVar8[3];
          *(undefined8 *)(lVar6 + 0x10) = uVar24;
          uVar24 = puVar8[4];
          *(undefined8 *)(lVar6 + 0x28) = puVar8[5];
          *(undefined8 *)(lVar6 + 0x20) = uVar24;
          if (0x30 < (long)uVar12) {
            puVar13 = (undefined8 *)(lVar6 + 0x30);
            puVar8 = (undefined8 *)(param_5 + (uVar18 - uVar12) + 0x40);
            do {
              uVar24 = puVar8[-2];
              puVar13[1] = puVar8[-1];
              *puVar13 = uVar24;
              uVar24 = *puVar8;
              puVar13[3] = puVar8[1];
              puVar13[2] = uVar24;
              puVar13 = puVar13 + 4;
              puVar8 = puVar8 + 4;
            } while (puVar13 < (undefined8 *)(lVar6 + uVar12));
          }
          goto LAB_1006e0a74;
        }
        param_3[3] = lVar6 + uVar12;
        piVar10 = (int *)param_3[1];
      }
      uVar16 = (ulong)uVar23 + 0xfffffffd;
      *(short *)(piVar10 + 1) = (short)uVar12;
      *piVar10 = iVar19 + 3;
      if ((uVar16 & 0xffff0000) != 0) {
        *(undefined4 *)(param_3 + 9) = 2;
        *(int *)((long)param_3 + 0x4c) = (int)((ulong)((long)piVar10 - *param_3) >> 3);
      }
      *(short *)((long)piVar10 + 6) = (short)uVar16;
      param_3[1] = (long)(piVar10 + 2);
      param_5 = (undefined1 *)((long)puVar2 + (ulong)uVar23);
      uVar12 = param_1[1];
      uVar16 = param_1[2];
      if ((uVar16 <= uVar12) || (puVar1 <= param_5)) break;
    } while( true );
  }
  uVar3 = (int)param_5 - *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x24) + 0x400U < uVar3) {
    uVar23 = (uVar3 - *(int *)(param_2 + 0x24)) - 0x400;
    if (0x1ff < uVar23) {
      uVar23 = 0x200;
    }
    *(uint *)(param_2 + 0x24) = uVar3 - uVar23;
  }
  if (*(int *)(param_2 + 0xd0) == 2) {
    FUN_1006be260(param_2,param_5,0);
  }
  else if (*(int *)(param_2 + 0xd0) == 1) {
    FUN_1006c76a4(param_2,param_5,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006e0b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,(long)puVar1 - (long)param_5);
  return;
}

