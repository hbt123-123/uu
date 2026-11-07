// rea decompile_all
// name: FUN_1006d5694
// address: 0x1006d5694
// body: available
// range: 0x1006d5694-0x1006d5ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d5694(ulong param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined2 uVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  long local_68;
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar14 = puVar4 + -1;
  lVar34 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0x18);
  iVar32 = *param_3;
  iVar33 = param_3[1];
  puVar15 = *(ulong **)(param_1 + 0xb0);
  puVar7 = (ulong *)*puVar15;
  uVar8 = puVar15[1];
  puVar15 = (ulong *)(uVar8 + (uint)puVar15[3]);
  puVar5 = (ulong *)(lVar34 + (ulong)uVar9);
  puVar16 = param_4;
  if ((int)puVar7 + ((int)param_4 - (int)puVar5) == (int)puVar15) {
    puVar16 = (ulong *)((long)param_4 + 1);
  }
  if (puVar16 < puVar14) {
    uVar3 = uVar9 + ((int)uVar8 - (int)puVar7);
    puVar13 = puVar4 + -4;
    lVar31 = uVar8 - uVar3;
    do {
      uVar1 = (((int)puVar16 - (int)lVar34) - iVar32) + 1;
      piVar20 = (int *)(uVar8 + (uVar1 - uVar3));
      if (uVar9 <= uVar1) {
        piVar20 = (int *)(lVar34 + (ulong)uVar1);
      }
      if ((uVar1 - uVar9 < 0xfffffffd) &&
         (puVar23 = (ulong *)((long)puVar16 + 1), *piVar20 == *(int *)puVar23)) {
        puVar18 = puVar7;
        if (uVar9 <= uVar1) {
          puVar18 = puVar4;
        }
        lVar26 = (long)puVar16 + 5;
        FUN_1006c7460(lVar26,piVar20 + 1,puVar4,puVar18,puVar5);
        uVar12 = lVar26 + 4;
        uVar17 = (long)puVar23 - (long)param_4;
        puVar18 = (ulong *)param_2[3];
        puVar16 = puVar23;
joined_r0x0001006d57e8:
        iVar2 = 1;
        iVar11 = iVar32;
joined_r0x0001006d5994:
        iVar32 = iVar11;
        uVar10 = (undefined2)uVar17;
        iVar11 = iVar33;
        if (puVar13 < puVar16) {
          puVar22 = puVar18;
          puVar23 = param_4;
          if (param_4 <= puVar13) {
            puVar22 = (ulong *)((long)puVar18 + ((long)puVar13 - (long)param_4));
            uVar21 = *param_4;
            puVar18[1] = param_4[1];
            *puVar18 = uVar21;
            uVar21 = param_4[2];
            puVar18[3] = param_4[3];
            puVar18[2] = uVar21;
            puVar23 = puVar13;
            if (0x20 < (long)puVar13 - (long)param_4) {
              puVar18 = puVar18 + 4;
              puVar24 = param_4 + 6;
              do {
                uVar21 = puVar24[-2];
                puVar18[1] = puVar24[-1];
                *puVar18 = uVar21;
                uVar21 = *puVar24;
                puVar18[3] = puVar24[1];
                puVar18[2] = uVar21;
                puVar18 = puVar18 + 4;
                puVar24 = puVar24 + 4;
              } while (puVar18 < puVar22);
            }
          }
          if (puVar23 < puVar16) {
            uVar21 = (long)puVar16 - (long)puVar23;
            if ((7 < uVar21) && (0x3f < (ulong)((long)puVar22 - (long)puVar23))) {
              if (uVar21 < 0x40) {
                uVar25 = 0;
              }
              else {
                uVar25 = uVar21 & 0xffffffffffffffc0;
                puVar18 = puVar22 + 4;
                puVar24 = puVar23 + 4;
                uVar27 = uVar25;
                do {
                  uVar35 = puVar24[-4];
                  uVar37 = puVar24[-1];
                  uVar36 = puVar24[-2];
                  uVar39 = puVar24[1];
                  uVar38 = *puVar24;
                  uVar41 = puVar24[3];
                  uVar40 = puVar24[2];
                  puVar18[-3] = puVar24[-3];
                  puVar18[-4] = uVar35;
                  puVar18[-1] = uVar37;
                  puVar18[-2] = uVar36;
                  puVar18[1] = uVar39;
                  *puVar18 = uVar38;
                  puVar18[3] = uVar41;
                  puVar18[2] = uVar40;
                  uVar27 = uVar27 - 0x40;
                  puVar18 = puVar18 + 8;
                  puVar24 = puVar24 + 8;
                } while (uVar27 != 0);
                if (uVar21 == uVar25) goto LAB_1006d5aa4;
                if ((uVar21 & 0x38) == 0) {
                  puVar23 = (ulong *)((long)puVar23 + uVar25);
                  puVar22 = (ulong *)((long)puVar22 + uVar25);
                  goto LAB_1006d5a94;
                }
              }
              uVar27 = uVar21 & 0xfffffffffffffff8;
              lVar26 = uVar25 - uVar27;
              puVar19 = (undefined8 *)((long)puVar22 + uVar25);
              puVar29 = (undefined8 *)((long)puVar23 + uVar25);
              do {
                *puVar19 = *puVar29;
                lVar26 = lVar26 + 8;
                puVar19 = puVar19 + 1;
                puVar29 = puVar29 + 1;
              } while (lVar26 != 0);
              puVar22 = (ulong *)((long)puVar22 + uVar27);
              puVar23 = (ulong *)((long)puVar23 + uVar27);
              if (uVar21 == uVar27) goto LAB_1006d5aa4;
            }
LAB_1006d5a94:
            do {
              puVar18 = (ulong *)((long)puVar23 + 1);
              *(char *)puVar22 = (char)*puVar23;
              puVar22 = (ulong *)((long)puVar22 + 1);
              puVar23 = puVar18;
            } while (puVar18 != puVar16);
          }
LAB_1006d5aa4:
          param_2[3] = param_2[3] + uVar17;
          piVar20 = (int *)param_2[1];
          if (uVar17 < 0x10000) {
            *(undefined2 *)(piVar20 + 1) = uVar10;
            *piVar20 = iVar2;
            goto joined_r0x0001006d5b10;
          }
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar20 - *param_2) >> 3);
          *(undefined2 *)(piVar20 + 1) = uVar10;
          *piVar20 = iVar2;
          if (uVar12 - 3 < 0x10000) goto LAB_1006d5ae0;
LAB_1006d5b14:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar20 - *param_2) >> 3);
          *(short *)((long)piVar20 + 6) = (short)uVar12 + 0xfffd;
          piVar20 = piVar20 + 2;
          param_2[1] = (long)piVar20;
          param_4 = (ulong *)((long)puVar16 + uVar12);
        }
        else {
          uVar21 = *param_4;
          puVar18[1] = param_4[1];
          *puVar18 = uVar21;
          lVar26 = param_2[3];
          if (0x10 < uVar17) {
            uVar21 = param_4[2];
            *(ulong *)(lVar26 + 0x18) = param_4[3];
            *(ulong *)(lVar26 + 0x10) = uVar21;
            uVar21 = param_4[4];
            *(ulong *)(lVar26 + 0x28) = param_4[5];
            *(ulong *)(lVar26 + 0x20) = uVar21;
            if (0x30 < (long)uVar17) {
              puVar23 = (ulong *)(lVar26 + 0x30);
              puVar18 = param_4 + 8;
              do {
                uVar21 = puVar18[-2];
                puVar23[1] = puVar18[-1];
                *puVar23 = uVar21;
                uVar21 = *puVar18;
                puVar23[3] = puVar18[1];
                puVar23[2] = uVar21;
                puVar23 = puVar23 + 4;
                puVar18 = puVar18 + 4;
              } while (puVar23 < (ulong *)(lVar26 + uVar17));
            }
            goto LAB_1006d5aa4;
          }
          param_2[3] = lVar26 + uVar17;
          piVar20 = (int *)param_2[1];
          *(undefined2 *)(piVar20 + 1) = uVar10;
          *piVar20 = iVar2;
joined_r0x0001006d5b10:
          if (0xffff < uVar12 - 3) goto LAB_1006d5b14;
LAB_1006d5ae0:
          *(short *)((long)piVar20 + 6) = (short)uVar12 + 0xfffd;
          piVar20 = piVar20 + 2;
          param_2[1] = (long)piVar20;
          param_4 = (ulong *)((long)puVar16 + uVar12);
        }
        for (; iVar33 = iVar11, puVar16 = param_4, param_4 <= puVar14;
            param_4 = (ulong *)((long)param_4 + uVar12 + 4)) {
          uVar1 = ((int)param_4 - (int)lVar34) - iVar33;
          lVar26 = lVar31;
          if (uVar9 <= uVar1) {
            lVar26 = lVar34;
          }
          if ((0xfffffffc < uVar1 - uVar9) ||
             (piVar6 = (int *)(lVar26 + (ulong)uVar1), *piVar6 != (int)*param_4)) break;
          puVar16 = puVar7;
          if (uVar9 <= uVar1) {
            puVar16 = puVar4;
          }
          puVar23 = (ulong *)((long)param_4 + 4);
          puVar18 = (ulong *)(piVar6 + 1);
          puVar22 = (ulong *)((long)puVar23 + ((long)puVar16 - (long)puVar18));
          if (puVar4 <= puVar22) {
            puVar22 = puVar4;
          }
          puVar24 = puVar23;
          puVar28 = puVar18;
          if (puVar23 < (ulong *)((long)puVar22 - 7U)) {
            if (*puVar18 == *puVar23) {
              lVar30 = 0;
              puVar24 = (ulong *)((long)param_4 + 0xc);
              puVar28 = (ulong *)(lVar26 + (ulong)uVar1 + 0xc);
              do {
                if ((ulong *)((long)puVar22 - 7U) <= puVar24) goto LAB_1006d5c38;
                uVar12 = *puVar28;
                uVar17 = *puVar24;
                lVar30 = lVar30 + 8;
                puVar24 = puVar24 + 1;
                puVar28 = puVar28 + 1;
              } while (uVar12 == uVar17);
              uVar17 = uVar17 ^ uVar12;
              uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar30 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
            else {
              uVar12 = *puVar23 ^ *puVar18;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar18 + uVar12) == puVar16) goto LAB_1006d5d08;
joined_r0x0001006d5c9c:
            if (puVar13 < param_4) goto LAB_1006d5ca0;
LAB_1006d5ddc:
            puVar16 = (ulong *)param_2[3];
            uVar17 = *param_4;
            puVar16[1] = param_4[1];
            *puVar16 = uVar17;
            piVar20 = (int *)param_2[1];
            *(undefined2 *)(piVar20 + 1) = 0;
            *piVar20 = 1;
          }
          else {
LAB_1006d5c38:
            if (puVar24 < (ulong *)((long)puVar22 - 3U)) {
              if ((int)*puVar28 == (int)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
                puVar28 = (ulong *)((long)puVar28 + 4);
              }
              if (puVar24 < (ulong *)((long)puVar22 - 1U)) {
LAB_1006d5cc4:
                if ((short)*puVar28 == (short)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 2);
                  puVar28 = (ulong *)((long)puVar28 + 2);
                }
              }
            }
            else if (puVar24 < (ulong *)((long)puVar22 - 1U)) goto LAB_1006d5cc4;
            if ((puVar24 < puVar22) && ((char)*puVar28 == (char)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
            uVar12 = (long)puVar24 - (long)puVar23;
            if ((ulong *)((long)puVar18 + uVar12) != puVar16) goto joined_r0x0001006d5c9c;
LAB_1006d5d08:
            puVar23 = (ulong *)((long)puVar23 + uVar12);
            puVar18 = puVar23;
            puVar16 = puVar5;
            if (puVar23 < (ulong *)((long)puVar4 - 7U)) {
              if (*puVar5 == *puVar23) {
                lVar26 = 0;
                puVar18 = (ulong *)((long)param_4 + uVar12 + 0xc);
                puVar16 = (ulong *)((ulong)uVar9 + lVar34);
                do {
                  puVar16 = puVar16 + 1;
                  if ((ulong *)((long)puVar4 - 7U) <= puVar18) goto LAB_1006d5d7c;
                  uVar17 = *puVar18;
                  lVar26 = lVar26 + 8;
                  puVar18 = puVar18 + 1;
                } while (*puVar16 == uVar17);
                uVar17 = uVar17 ^ *puVar16;
                uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar12 = lVar26 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) + uVar12;
                goto joined_r0x0001006d5c9c;
              }
              uVar17 = *puVar23 ^ *puVar5;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar12 = ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) + uVar12;
            }
            else {
LAB_1006d5d7c:
              if (puVar18 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar16 == (int)*puVar18) {
                  puVar18 = (ulong *)((long)puVar18 + 4);
                  puVar16 = (ulong *)((long)puVar16 + 4);
                }
              }
              if (puVar18 < (ulong *)((long)puVar4 - 1U)) {
                if ((short)*puVar16 == (short)*puVar18) {
                  puVar18 = (ulong *)((long)puVar18 + 2);
                  puVar16 = (ulong *)((long)puVar16 + 2);
                }
              }
              if ((puVar18 < puVar4) && ((char)*puVar16 == (char)*puVar18)) {
                puVar18 = (ulong *)((long)puVar18 + 1);
              }
              uVar12 = (long)puVar18 + (uVar12 - (long)puVar23);
            }
            if (param_4 <= puVar13) goto LAB_1006d5ddc;
LAB_1006d5ca0:
            *(undefined2 *)(piVar20 + 1) = 0;
            *piVar20 = 1;
          }
          if (0xffff < uVar12 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar20 - *param_2) >> 3);
          }
          *(short *)((long)piVar20 + 6) = (short)(uVar12 + 1);
          piVar20 = piVar20 + 2;
          param_2[1] = (long)piVar20;
          iVar11 = iVar32;
          iVar32 = iVar33;
        }
      }
      else {
        local_68 = 999999999;
        uVar12 = param_1;
        FUN_1006ddb48(param_1,puVar16,puVar4,&local_68);
        if (3 < uVar12) {
          if (local_68 == 0) {
            uVar17 = (long)puVar16 - (long)param_4;
            puVar18 = (ulong *)param_2[3];
            goto joined_r0x0001006d57e8;
          }
          uVar17 = (long)puVar16 + (-local_68 - lVar34) + -0xfffffffe;
          lVar26 = lVar31;
          puVar23 = puVar15;
          if (uVar9 <= (uint)uVar17) {
            lVar26 = lVar34;
            puVar23 = puVar5;
          }
          if ((param_4 < puVar16) &&
             (uVar17 = uVar17 & 0xffffffff, puVar23 < (ulong *)(lVar26 + uVar17))) {
            puVar18 = (ulong *)(lVar26 + uVar17);
            do {
              puVar22 = (ulong *)((long)puVar16 + -1);
              puVar18 = (ulong *)((long)puVar18 + -1);
              if ((*(char *)puVar22 != *(char *)puVar18) ||
                 (uVar12 = uVar12 + 1, puVar16 = puVar22, puVar22 <= param_4)) break;
            } while (puVar23 < puVar18);
          }
          iVar2 = (int)local_68 + 1;
          uVar17 = (long)puVar16 - (long)param_4;
          puVar18 = (ulong *)param_2[3];
          iVar11 = (int)local_68 + -2;
          iVar33 = iVar32;
          goto joined_r0x0001006d5994;
        }
        puVar16 = (ulong *)((long)puVar16 + ((long)puVar16 - (long)param_4 >> 8) + 1);
      }
    } while (puVar16 < puVar14);
  }
  *param_3 = iVar32;
  param_3[1] = iVar33;
  return (long)puVar4 - (long)param_4;
}

