// rea decompile_all
// name: FUN_1006cc710
// address: 0x1006cc710
// body: available
// range: 0x1006cc710-0x1006cdaeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006cc710(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5,int param_6)

{
  long lVar1;
  ulong *puVar2;
  uint *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  uint *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  uint uVar35;
  int *piVar36;
  ulong *puVar37;
  uint uVar38;
  uint uVar39;
  ulong *puVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  
  lVar44 = *(long *)(param_1 + 0x30);
  iVar25 = *(int *)(param_1 + 0xc0);
  uVar7 = *(uint *)(param_1 + 0xcc);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  lVar34 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)((long)param_4 + param_5);
  iVar33 = (int)lVar34;
  iVar41 = (int)puVar2 - iVar33;
  uVar18 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar43 = *(uint *)(param_1 + 0x18);
  uVar5 = iVar41 - uVar18;
  if (iVar41 - *(uint *)(param_1 + 0x1c) <= uVar18 || *(int *)(param_1 + 0x20) != 0) {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  uVar35 = uVar43;
  if (uVar43 <= uVar5) {
    uVar35 = uVar5;
  }
  puVar30 = puVar2 + -1;
  uVar42 = *param_3;
  uVar38 = param_3[1];
  if (uVar5 < uVar43) {
    if (param_4 < puVar30) {
      lVar19 = *(long *)(param_1 + 0x10);
      puVar3 = (uint *)(lVar34 + (ulong)uVar35);
      puVar4 = (ulong *)(lVar19 + (ulong)uVar35);
      lVar1 = lVar34 + 2;
      uVar12 = (ulong)(0x40 - iVar25);
      uVar43 = 0x20 - iVar25;
      puVar11 = puVar2 + -4;
      puVar14 = param_4;
      do {
        if (param_6 < 7) {
          if (param_6 == 5) {
            uVar10 = *puVar14;
            uVar13 = 0xbb000000;
            goto LAB_1006cc8ac;
          }
          if (param_6 == 6) {
            uVar10 = *puVar14;
            uVar13 = 0xbf9b0000;
            goto LAB_1006cc8ac;
          }
LAB_1006cc878:
          uVar10 = (ulong)((uint)*puVar14 * -0x61c8864f >> (ulong)(uVar43 & 0x1f));
        }
        else {
          if (param_6 == 7) {
            uVar10 = *puVar14;
            uVar13 = 0xbfa56300;
          }
          else {
            if (param_6 != 8) goto LAB_1006cc878;
            uVar10 = *puVar14;
            uVar13 = 0xb7a56463;
          }
LAB_1006cc8ac:
          uVar10 = uVar10 * (uVar13 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f);
        }
        uVar18 = *(uint *)(lVar44 + uVar10 * 4);
        lVar17 = lVar19;
        if (uVar35 <= uVar18) {
          lVar17 = lVar34;
        }
        uVar13 = (long)puVar14 - lVar34;
        iVar25 = (int)uVar13;
        uVar39 = (iVar25 - uVar42) + 1;
        lVar27 = lVar19;
        if (uVar35 <= uVar39) {
          lVar27 = lVar34;
        }
        *(int *)(lVar44 + uVar10 * 4) = iVar25;
        if ((uVar5 < uVar39) && (2 < (uVar35 - 1) - uVar39)) {
          puVar40 = (ulong *)((long)puVar14 + 1);
          if (*(uint *)(lVar27 + (ulong)uVar39) != *(uint *)puVar40) goto LAB_1006cc974;
          puVar20 = puVar4;
          if (uVar35 <= uVar39) {
            puVar20 = puVar2;
          }
          lVar17 = (long)puVar14 + 5;
          FUN_1006c7460(lVar17,(uint *)(lVar27 + (ulong)uVar39) + 1,puVar2,puVar20,puVar3);
          uVar10 = (long)puVar40 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          if (puVar11 < puVar40) {
            puVar20 = param_4;
            puVar23 = puVar14;
            if (param_4 <= puVar11) {
              puVar23 = (ulong *)((long)puVar14 + ((long)puVar11 - (long)param_4));
              uVar22 = *param_4;
              puVar14[1] = param_4[1];
              *puVar14 = uVar22;
              uVar22 = param_4[2];
              puVar14[3] = param_4[3];
              puVar14[2] = uVar22;
              puVar20 = puVar11;
              if (0x20 < (long)puVar11 - (long)param_4) {
                puVar14 = puVar14 + 4;
                puVar37 = param_4 + 6;
                do {
                  uVar22 = puVar37[-2];
                  puVar14[1] = puVar37[-1];
                  *puVar14 = uVar22;
                  uVar22 = *puVar37;
                  puVar14[3] = puVar37[1];
                  puVar14[2] = uVar22;
                  puVar14 = puVar14 + 4;
                  puVar37 = puVar37 + 4;
                } while (puVar14 < puVar23);
              }
            }
            if (puVar20 < puVar40) {
              uVar22 = (long)puVar40 - (long)puVar20;
              if ((7 < uVar22) && (0x3f < (ulong)((long)puVar23 - (long)puVar20))) {
                if (uVar22 < 0x40) {
                  uVar26 = 0;
                }
                else {
                  uVar26 = uVar22 & 0xffffffffffffffc0;
                  puVar14 = puVar23 + 4;
                  puVar37 = puVar20 + 4;
                  uVar28 = uVar26;
                  do {
                    uVar32 = puVar37[-4];
                    uVar45 = puVar37[-1];
                    uVar29 = puVar37[-2];
                    uVar47 = puVar37[1];
                    uVar46 = *puVar37;
                    uVar49 = puVar37[3];
                    uVar48 = puVar37[2];
                    puVar14[-3] = puVar37[-3];
                    puVar14[-4] = uVar32;
                    puVar14[-1] = uVar45;
                    puVar14[-2] = uVar29;
                    puVar14[1] = uVar47;
                    *puVar14 = uVar46;
                    puVar14[3] = uVar49;
                    puVar14[2] = uVar48;
                    uVar28 = uVar28 - 0x40;
                    puVar14 = puVar14 + 8;
                    puVar37 = puVar37 + 8;
                  } while (uVar28 != 0);
                  if (uVar22 == uVar26) goto LAB_1006ccd9c;
                  if ((uVar22 & 0x38) == 0) {
                    puVar20 = (ulong *)((long)puVar20 + uVar26);
                    puVar23 = (ulong *)((long)puVar23 + uVar26);
                    goto LAB_1006ccd8c;
                  }
                }
                uVar28 = uVar22 & 0xfffffffffffffff8;
                lVar27 = uVar26 - uVar28;
                puVar15 = (undefined8 *)((long)puVar23 + uVar26);
                puVar31 = (undefined8 *)((long)puVar20 + uVar26);
                do {
                  *puVar15 = *puVar31;
                  lVar27 = lVar27 + 8;
                  puVar15 = puVar15 + 1;
                  puVar31 = puVar31 + 1;
                } while (lVar27 != 0);
                puVar23 = (ulong *)((long)puVar23 + uVar28);
                puVar20 = (ulong *)((long)puVar20 + uVar28);
                if (uVar22 == uVar28) goto LAB_1006ccd9c;
              }
LAB_1006ccd8c:
              do {
                puVar14 = (ulong *)((long)puVar20 + 1);
                *(char *)puVar23 = (char)*puVar20;
                puVar23 = (ulong *)((long)puVar23 + 1);
                puVar20 = puVar14;
              } while (puVar14 != puVar40);
            }
LAB_1006ccd9c:
            param_2[3] = param_2[3] + uVar10;
            puVar16 = (undefined4 *)param_2[1];
            if (0xffff < uVar10) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)puVar16 - *param_2) >> 3);
            }
          }
          else {
            uVar22 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar22;
            lVar27 = param_2[3];
            if (0x10 < uVar10) {
              uVar22 = param_4[2];
              *(ulong *)(lVar27 + 0x18) = param_4[3];
              *(ulong *)(lVar27 + 0x10) = uVar22;
              uVar22 = param_4[4];
              *(ulong *)(lVar27 + 0x28) = param_4[5];
              *(ulong *)(lVar27 + 0x20) = uVar22;
              if (0x30 < (long)uVar10) {
                puVar14 = (ulong *)(lVar27 + 0x30);
                puVar20 = param_4 + 8;
                do {
                  uVar22 = puVar20[-2];
                  puVar14[1] = puVar20[-1];
                  *puVar14 = uVar22;
                  uVar22 = *puVar20;
                  puVar14[3] = puVar20[1];
                  puVar14[2] = uVar22;
                  puVar14 = puVar14 + 4;
                  puVar20 = puVar20 + 4;
                } while (puVar14 < (ulong *)(lVar27 + uVar10));
              }
              goto LAB_1006ccd9c;
            }
            param_2[3] = lVar27 + uVar10;
            puVar16 = (undefined4 *)param_2[1];
          }
          *(short *)(puVar16 + 1) = (short)uVar10;
          *puVar16 = 1;
          if (0xffff < lVar17 + 1U) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)puVar16 - *param_2) >> 3);
          }
          *(short *)((long)puVar16 + 6) = (short)(lVar17 + 1U);
          piVar36 = puVar16 + 2;
          param_2[1] = (long)piVar36;
          param_4 = (ulong *)((long)puVar40 + lVar17 + 4);
          puVar14 = param_4;
          uVar18 = uVar42;
          if (puVar30 < param_4) goto LAB_1006cc82c;
LAB_1006cceb0:
          uVar13 = uVar13 & 0xffffffff;
          if (param_6 < 7) {
            if (param_6 == 5) {
              lVar17 = *(long *)(lVar1 + uVar13);
              uVar10 = 0xbb000000;
              goto LAB_1006ccf58;
            }
            if (param_6 == 6) {
              lVar17 = *(long *)(lVar1 + uVar13);
              uVar10 = 0xbf9b0000;
              goto LAB_1006ccf58;
            }
LAB_1006ccf04:
            *(int *)(lVar44 + (ulong)((uint)(*(int *)(lVar1 + uVar13) * -0x61c8864f) >>
                                     (ulong)(uVar43 & 0x1f)) * 4) = iVar25 + 2;
            uVar10 = (ulong)((uint)(*(int *)((long)param_4 - 2) * -0x61c8864f) >>
                            (ulong)(uVar43 & 0x1f));
          }
          else {
            if (param_6 == 7) {
              lVar17 = *(long *)(lVar1 + uVar13);
              uVar10 = 0xbfa56300;
            }
            else {
              if (param_6 != 8) goto LAB_1006ccf04;
              lVar17 = *(long *)(lVar1 + uVar13);
              uVar10 = 0xb7a56463;
            }
LAB_1006ccf58:
            *(int *)(lVar44 + (lVar17 * (uVar10 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f)) * 4) =
                 iVar25 + 2;
            uVar10 = *(long *)((long)param_4 - 2) * (uVar10 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f)
            ;
          }
          *(int *)(lVar44 + uVar10 * 4) = ((int)param_4 + -2) - iVar33;
          do {
            uVar39 = uVar38;
            uVar42 = uVar18;
            iVar25 = (int)param_4 - iVar33;
            uVar18 = iVar25 - uVar39;
            lVar17 = lVar19;
            if (uVar35 <= uVar18) {
              lVar17 = lVar34;
            }
            puVar14 = param_4;
            uVar38 = uVar39;
            if (((uVar18 <= uVar5) || ((uVar35 - 1) - uVar18 < 3)) ||
               (*(uint *)(lVar17 + (ulong)uVar18) != (uint)*param_4)) break;
            puVar14 = puVar4;
            if (uVar35 <= uVar18) {
              puVar14 = puVar2;
            }
            puVar21 = (uint *)((long)param_4 + 4);
            FUN_1006c7460(puVar21,(uint *)(lVar17 + (ulong)uVar18) + 1,puVar2,puVar14,puVar3);
            if (param_4 <= puVar11) {
              puVar14 = (ulong *)param_2[3];
              uVar10 = *param_4;
              puVar14[1] = param_4[1];
              *puVar14 = uVar10;
              piVar36 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar36 + 1) = 0;
            *piVar36 = 1;
            if (0xffff < (long)puVar21 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
            *(short *)((long)piVar36 + 6) = (short)((long)puVar21 + 1U);
            piVar36 = piVar36 + 2;
            param_2[1] = (long)piVar36;
            if (param_6 < 7) {
              if (param_6 == 5) {
                uVar10 = *param_4;
                uVar13 = 0xbb000000;
                goto LAB_1006ccf98;
              }
              if (param_6 == 6) {
                uVar10 = *param_4;
                uVar13 = 0xbf9b0000;
                goto LAB_1006ccf98;
              }
LAB_1006cd0d0:
              uVar10 = (ulong)((uint)*param_4 * -0x61c8864f >> (ulong)(uVar43 & 0x1f));
            }
            else {
              if (param_6 == 7) {
                uVar10 = *param_4;
                uVar13 = 0xbfa56300;
              }
              else {
                if (param_6 != 8) goto LAB_1006cd0d0;
                uVar10 = *param_4;
                uVar13 = 0xb7a56463;
              }
LAB_1006ccf98:
              uVar10 = uVar10 * (uVar13 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f);
            }
            *(int *)(lVar44 + uVar10 * 4) = iVar25;
            param_4 = (ulong *)((long)param_4 + (long)(puVar21 + 1));
            puVar14 = param_4;
            uVar38 = uVar42;
            uVar18 = uVar39;
            uVar42 = uVar39;
          } while (param_4 <= puVar30);
        }
        else {
LAB_1006cc974:
          if ((uVar18 < uVar5) ||
             (puVar21 = (uint *)(lVar17 + (ulong)uVar18), *puVar21 != (uint)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + (ulong)uVar7 + ((long)puVar14 - (long)param_4 >> 8))
            ;
          }
          else {
            puVar6 = (uint *)(lVar19 + (ulong)uVar5);
            puVar40 = puVar4;
            if (uVar35 <= uVar18) {
              puVar6 = puVar3;
              puVar40 = puVar2;
            }
            puVar9 = (uint *)((long)puVar14 + 4);
            FUN_1006c7460(puVar9,puVar21 + 1,puVar2,puVar40);
            puVar9 = puVar9 + 1;
            if ((puVar21 > puVar6 && param_4 <= puVar14) &&
                (puVar21 <= puVar6 || puVar14 != param_4)) {
              puVar21 = (uint *)(lVar17 + (ulong)uVar18);
              puVar40 = puVar14;
              do {
                puVar21 = (uint *)((long)puVar21 + -1);
                puVar14 = (ulong *)((long)puVar40 + -1);
                if (*(char *)puVar14 != *(char *)puVar21) {
                  uVar10 = (long)puVar40 - (long)param_4;
                  puVar20 = (ulong *)param_2[3];
                  puVar14 = puVar40;
                  goto joined_r0x0001006ccbac;
                }
                puVar9 = (uint *)((long)puVar9 + 1);
              } while ((puVar6 < puVar21) && (puVar40 = puVar14, param_4 < puVar14));
              uVar10 = (long)puVar14 - (long)param_4;
              puVar20 = (ulong *)param_2[3];
joined_r0x0001006ccbac:
              if (puVar14 <= puVar11) goto LAB_1006ccbb0;
LAB_1006cc9f0:
              puVar23 = puVar20;
              puVar40 = param_4;
              if (param_4 <= puVar11) {
                puVar23 = (ulong *)((long)puVar20 + ((long)puVar11 - (long)param_4));
                uVar22 = *param_4;
                puVar20[1] = param_4[1];
                *puVar20 = uVar22;
                uVar22 = param_4[2];
                puVar20[3] = param_4[3];
                puVar20[2] = uVar22;
                puVar40 = puVar11;
                if (0x20 < (long)puVar11 - (long)param_4) {
                  puVar20 = puVar20 + 4;
                  puVar37 = param_4 + 6;
                  do {
                    uVar22 = puVar37[-2];
                    puVar20[1] = puVar37[-1];
                    *puVar20 = uVar22;
                    uVar22 = *puVar37;
                    puVar20[3] = puVar37[1];
                    puVar20[2] = uVar22;
                    puVar20 = puVar20 + 4;
                    puVar37 = puVar37 + 4;
                  } while (puVar20 < puVar23);
                }
              }
              if (puVar40 < puVar14) {
                uVar22 = (long)puVar14 - (long)puVar40;
                if ((7 < uVar22) && (0x3f < (ulong)((long)puVar23 - (long)puVar40))) {
                  if (uVar22 < 0x40) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = uVar22 & 0xffffffffffffffc0;
                    puVar20 = puVar23 + 4;
                    puVar37 = puVar40 + 4;
                    uVar28 = uVar26;
                    do {
                      uVar32 = puVar37[-4];
                      uVar45 = puVar37[-1];
                      uVar29 = puVar37[-2];
                      uVar47 = puVar37[1];
                      uVar46 = *puVar37;
                      uVar49 = puVar37[3];
                      uVar48 = puVar37[2];
                      puVar20[-3] = puVar37[-3];
                      puVar20[-4] = uVar32;
                      puVar20[-1] = uVar45;
                      puVar20[-2] = uVar29;
                      puVar20[1] = uVar47;
                      *puVar20 = uVar46;
                      puVar20[3] = uVar49;
                      puVar20[2] = uVar48;
                      uVar28 = uVar28 - 0x40;
                      puVar20 = puVar20 + 8;
                      puVar37 = puVar37 + 8;
                    } while (uVar28 != 0);
                    if (uVar22 == uVar26) goto LAB_1006cce3c;
                    if ((uVar22 & 0x38) == 0) {
                      puVar40 = (ulong *)((long)puVar40 + uVar26);
                      puVar23 = (ulong *)((long)puVar23 + uVar26);
                      goto LAB_1006cce2c;
                    }
                  }
                  uVar28 = uVar22 & 0xfffffffffffffff8;
                  lVar17 = uVar26 - uVar28;
                  puVar15 = (undefined8 *)((long)puVar23 + uVar26);
                  puVar31 = (undefined8 *)((long)puVar40 + uVar26);
                  do {
                    *puVar15 = *puVar31;
                    lVar17 = lVar17 + 8;
                    puVar15 = puVar15 + 1;
                    puVar31 = puVar31 + 1;
                  } while (lVar17 != 0);
                  puVar23 = (ulong *)((long)puVar23 + uVar28);
                  puVar40 = (ulong *)((long)puVar40 + uVar28);
                  if (uVar22 == uVar28) goto LAB_1006cce3c;
                }
LAB_1006cce2c:
                do {
                  puVar20 = (ulong *)((long)puVar40 + 1);
                  *(char *)puVar23 = (char)*puVar40;
                  puVar23 = (ulong *)((long)puVar23 + 1);
                  puVar40 = puVar20;
                } while (puVar20 != puVar14);
              }
LAB_1006cce3c:
              param_2[3] = param_2[3] + uVar10;
              piVar36 = (int *)param_2[1];
              if (0xffff < uVar10) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
            }
            else {
              uVar10 = (long)puVar14 - (long)param_4;
              puVar20 = (ulong *)param_2[3];
              if (puVar11 < puVar14) goto LAB_1006cc9f0;
LAB_1006ccbb0:
              uVar22 = *param_4;
              puVar20[1] = param_4[1];
              *puVar20 = uVar22;
              lVar17 = param_2[3];
              if (0x10 < uVar10) {
                uVar22 = param_4[2];
                *(ulong *)(lVar17 + 0x18) = param_4[3];
                *(ulong *)(lVar17 + 0x10) = uVar22;
                uVar22 = param_4[4];
                *(ulong *)(lVar17 + 0x28) = param_4[5];
                *(ulong *)(lVar17 + 0x20) = uVar22;
                if (0x30 < (long)uVar10) {
                  puVar40 = (ulong *)(lVar17 + 0x30);
                  puVar20 = param_4 + 8;
                  do {
                    uVar22 = puVar20[-2];
                    puVar40[1] = puVar20[-1];
                    *puVar40 = uVar22;
                    uVar22 = *puVar20;
                    puVar40[3] = puVar20[1];
                    puVar40[2] = uVar22;
                    puVar40 = puVar40 + 4;
                    puVar20 = puVar20 + 4;
                  } while (puVar40 < (ulong *)(lVar17 + uVar10));
                }
                goto LAB_1006cce3c;
              }
              param_2[3] = lVar17 + uVar10;
              piVar36 = (int *)param_2[1];
            }
            uVar18 = iVar25 - uVar18;
            *(short *)(piVar36 + 1) = (short)uVar10;
            *piVar36 = uVar18 + 3;
            if (0xffff < (long)puVar9 - 3U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
            *(short *)((long)piVar36 + 6) = (short)((long)puVar9 - 3U);
            piVar36 = piVar36 + 2;
            param_2[1] = (long)piVar36;
            param_4 = (ulong *)((long)puVar14 + (long)puVar9);
            puVar14 = param_4;
            uVar38 = uVar42;
            uVar42 = uVar18;
            if (param_4 <= puVar30) goto LAB_1006cceb0;
          }
        }
LAB_1006cc82c:
      } while (puVar14 < puVar30);
    }
    *param_3 = uVar42;
  }
  else {
    uVar5 = iVar41 - uVar18;
    if (iVar41 - uVar43 <= uVar18) {
      uVar5 = uVar43;
    }
    puVar4 = (ulong *)(lVar34 + (ulong)uVar5);
    puVar14 = param_4;
    if (puVar4 == param_4) {
      puVar14 = (ulong *)((long)param_4 + 1);
    }
    puVar11 = (ulong *)((long)puVar14 + 1);
    uVar18 = (int)puVar14 - (int)puVar4;
    uVar43 = uVar38;
    if (uVar38 <= uVar18) {
      uVar43 = 0;
    }
    uVar35 = 0;
    if (uVar38 <= uVar18) {
      uVar35 = uVar38;
    }
    uVar38 = uVar42;
    if (uVar42 <= uVar18) {
      uVar38 = uVar43;
    }
    uVar43 = 0;
    if (uVar42 <= uVar18) {
      uVar43 = uVar42;
    }
    if (puVar11 < puVar30) {
      lVar1 = lVar34 + 2;
      uVar12 = (ulong)(0x40 - iVar25);
      uVar18 = 0x20 - iVar25;
      puVar40 = (ulong *)((long)puVar2 - 7);
      puVar20 = puVar2 + -4;
      do {
        if (param_6 < 7) {
          if (param_6 == 5) {
            uVar10 = *puVar14;
            uVar28 = uVar10 * -0x30e4432345000000 >> (uVar12 & 0x3f);
            uVar22 = *puVar11;
            uVar13 = uVar22 * -0x30e4432345000000 >> (uVar12 & 0x3f);
          }
          else {
            if (param_6 == 6) {
              uVar10 = *puVar14;
              uVar13 = 0xbf9b0000;
              goto LAB_1006cd25c;
            }
LAB_1006cd20c:
            uVar10 = (ulong)(uint)*puVar14;
            uVar28 = (ulong)((uint)*puVar14 * -0x61c8864f >> (ulong)(uVar18 & 0x1f));
            uVar22 = (ulong)(uint)*puVar11;
            uVar13 = (ulong)((uint)*puVar11 * -0x61c8864f >> (ulong)(uVar18 & 0x1f));
          }
        }
        else {
          if (param_6 == 7) {
            uVar10 = *puVar14;
            uVar13 = 0xbfa56300;
LAB_1006cd25c:
            uVar28 = uVar10 * (uVar13 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f);
            uVar22 = *puVar11;
            uVar13 = uVar22 * (uVar13 | 0xcf1bbcdc00000000);
          }
          else {
            if (param_6 != 8) goto LAB_1006cd20c;
            uVar10 = *puVar14;
            uVar28 = uVar10 * -0x30e44323485a9b9d >> (uVar12 & 0x3f);
            uVar22 = *puVar11;
            uVar13 = uVar22 * -0x30e44323485a9b9d;
          }
          uVar13 = uVar13 >> (uVar12 & 0x3f);
        }
        uVar42 = *(uint *)(lVar44 + uVar28 * 4);
        uVar39 = *(uint *)(lVar44 + uVar13 * 4);
        uVar26 = (long)puVar14 - lVar34;
        iVar25 = (int)uVar26;
        *(int *)(lVar44 + uVar28 * 4) = iVar25;
        *(int *)(lVar44 + uVar13 * 4) = (int)puVar11 - iVar33;
        if ((uVar43 == 0) ||
           (piVar36 = (int *)((long)puVar14 + (2 - (ulong)uVar43)),
           *piVar36 != *(int *)((long)puVar14 + 2))) {
          if (((uVar5 < uVar42) &&
              (puVar23 = (ulong *)(lVar34 + (ulong)uVar42), puVar37 = puVar14,
              (uint)*puVar23 == (uint)uVar10)) ||
             ((uVar5 < uVar39 &&
              (puVar23 = (ulong *)(lVar34 + (ulong)uVar39), puVar37 = puVar11,
              (uint)*puVar23 == (uint)uVar22)))) {
            uVar42 = (int)puVar37 - (int)puVar23;
            iVar41 = uVar42 + 2;
            uVar10 = 0;
            if (puVar4 < puVar23 && param_4 < puVar37) {
              do {
                puVar11 = (ulong *)((long)puVar23 + -1);
                puVar14 = (ulong *)((long)puVar37 + -1);
                if ((*(char *)puVar14 != *(char *)puVar11) ||
                   (uVar10 = uVar10 + 1, puVar23 = puVar11, puVar37 = puVar14, puVar11 <= puVar4))
                break;
              } while (param_4 < puVar14);
            }
            puVar14 = (ulong *)((long)puVar37 + uVar10 + 4);
            puVar11 = (ulong *)((long)puVar23 + uVar10 + 4);
            uVar35 = uVar43;
            goto joined_r0x0001006cd4d0;
          }
          lVar19 = (ulong)(uVar7 + 1) + ((ulong)((long)puVar14 - (long)param_4) >> 7);
          puVar14 = (ulong *)((long)puVar14 + lVar19);
          puVar11 = (ulong *)((long)puVar11 + lVar19);
        }
        else {
          iVar41 = 0;
          uVar10 = (ulong)(*(char *)((long)puVar14 + 1) == *(char *)((long)piVar36 + -1));
          puVar37 = (ulong *)((long)puVar14 + (2 - uVar10));
          puVar23 = (ulong *)((long)piVar36 - uVar10);
          puVar14 = (ulong *)((long)puVar37 + uVar10 + 4);
          puVar11 = (ulong *)((long)puVar23 + uVar10 + 4);
          uVar42 = uVar43;
joined_r0x0001006cd4d0:
          uVar43 = uVar42;
          puVar24 = puVar14;
          if (puVar14 < puVar40) {
            if (*puVar11 != *puVar14) {
              uVar13 = *puVar14 ^ *puVar11;
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              puVar14 = (ulong *)param_2[3];
              goto joined_r0x0001006cd434;
            }
            lVar19 = 0;
            puVar24 = (ulong *)((long)puVar37 + uVar10 + 0xc);
            puVar11 = (ulong *)((long)puVar23 + uVar10 + 0xc);
            do {
              if (puVar40 <= puVar24) goto joined_r0x0001006cd4dc;
              uVar22 = *puVar11;
              uVar13 = *puVar24;
              lVar19 = lVar19 + 8;
              puVar24 = puVar24 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar22 == uVar13);
            uVar13 = uVar13 ^ uVar22;
            uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar13 = lVar19 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
            uVar22 = (long)puVar37 - (long)param_4;
            puVar14 = (ulong *)param_2[3];
            if (puVar20 < puVar37) goto LAB_1006cd564;
LAB_1006cd438:
            uVar28 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar28;
            lVar19 = param_2[3];
            if (0x10 < uVar22) {
              uVar28 = param_4[2];
              *(ulong *)(lVar19 + 0x18) = param_4[3];
              *(ulong *)(lVar19 + 0x10) = uVar28;
              uVar28 = param_4[4];
              *(ulong *)(lVar19 + 0x28) = param_4[5];
              *(ulong *)(lVar19 + 0x20) = uVar28;
              if (0x30 < (long)uVar22) {
                puVar14 = (ulong *)(lVar19 + 0x30);
                puVar11 = param_4 + 8;
                do {
                  uVar28 = puVar11[-2];
                  puVar14[1] = puVar11[-1];
                  *puVar14 = uVar28;
                  uVar28 = *puVar11;
                  puVar14[3] = puVar11[1];
                  puVar14[2] = uVar28;
                  puVar14 = puVar14 + 4;
                  puVar11 = puVar11 + 4;
                } while (puVar14 < (ulong *)(lVar19 + uVar22));
              }
              goto LAB_1006cd684;
            }
            param_2[3] = lVar19 + uVar22;
            piVar36 = (int *)param_2[1];
          }
          else {
joined_r0x0001006cd4dc:
            if (puVar24 < (ulong *)((long)puVar2 - 3U)) {
              if (*(uint *)puVar11 == *(uint *)puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 4);
                puVar11 = (ulong *)((long)puVar11 + 4);
              }
            }
            if (puVar24 < (ulong *)((long)puVar2 - 1U)) {
              if ((short)*puVar11 == (short)*puVar24) {
                puVar24 = (ulong *)((long)puVar24 + 2);
                puVar11 = (ulong *)((long)puVar11 + 2);
              }
            }
            if ((puVar24 < puVar2) && ((char)*puVar11 == (char)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
            uVar13 = (long)puVar24 - (long)puVar14;
            puVar14 = (ulong *)param_2[3];
joined_r0x0001006cd434:
            uVar22 = (long)puVar37 - (long)param_4;
            if (puVar37 <= puVar20) goto LAB_1006cd438;
LAB_1006cd564:
            puVar23 = puVar14;
            puVar11 = param_4;
            if (param_4 <= puVar20) {
              puVar23 = (ulong *)((long)puVar14 + ((long)puVar20 - (long)param_4));
              uVar28 = *param_4;
              puVar14[1] = param_4[1];
              *puVar14 = uVar28;
              uVar28 = param_4[2];
              puVar14[3] = param_4[3];
              puVar14[2] = uVar28;
              puVar11 = puVar20;
              if (0x20 < (long)puVar20 - (long)param_4) {
                puVar14 = puVar14 + 4;
                puVar24 = param_4 + 6;
                do {
                  uVar28 = puVar24[-2];
                  puVar14[1] = puVar24[-1];
                  *puVar14 = uVar28;
                  uVar28 = *puVar24;
                  puVar14[3] = puVar24[1];
                  puVar14[2] = uVar28;
                  puVar14 = puVar14 + 4;
                  puVar24 = puVar24 + 4;
                } while (puVar14 < puVar23);
              }
            }
            if (puVar11 < puVar37) {
              uVar28 = (long)puVar37 - (long)puVar11;
              if ((7 < uVar28) && (0x3f < (ulong)((long)puVar23 - (long)puVar11))) {
                if (uVar28 < 0x40) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = uVar28 & 0xffffffffffffffc0;
                  puVar14 = puVar23 + 4;
                  puVar24 = puVar11 + 4;
                  uVar32 = uVar29;
                  do {
                    uVar45 = puVar24[-4];
                    uVar47 = puVar24[-1];
                    uVar46 = puVar24[-2];
                    uVar49 = puVar24[1];
                    uVar48 = *puVar24;
                    uVar51 = puVar24[3];
                    uVar50 = puVar24[2];
                    puVar14[-3] = puVar24[-3];
                    puVar14[-4] = uVar45;
                    puVar14[-1] = uVar47;
                    puVar14[-2] = uVar46;
                    puVar14[1] = uVar49;
                    *puVar14 = uVar48;
                    puVar14[3] = uVar51;
                    puVar14[2] = uVar50;
                    uVar32 = uVar32 - 0x40;
                    puVar14 = puVar14 + 8;
                    puVar24 = puVar24 + 8;
                  } while (uVar32 != 0);
                  if (uVar28 == uVar29) goto LAB_1006cd684;
                  if ((uVar28 & 0x38) == 0) {
                    puVar11 = (ulong *)((long)puVar11 + uVar29);
                    puVar23 = (ulong *)((long)puVar23 + uVar29);
                    goto LAB_1006cd674;
                  }
                }
                uVar32 = uVar28 & 0xfffffffffffffff8;
                lVar19 = uVar29 - uVar32;
                puVar15 = (undefined8 *)((long)puVar23 + uVar29);
                puVar31 = (undefined8 *)((long)puVar11 + uVar29);
                do {
                  *puVar15 = *puVar31;
                  lVar19 = lVar19 + 8;
                  puVar15 = puVar15 + 1;
                  puVar31 = puVar31 + 1;
                } while (lVar19 != 0);
                puVar23 = (ulong *)((long)puVar23 + uVar32);
                puVar11 = (ulong *)((long)puVar11 + uVar32);
                if (uVar28 == uVar32) goto LAB_1006cd684;
              }
LAB_1006cd674:
              do {
                puVar14 = (ulong *)((long)puVar11 + 1);
                *(char *)puVar23 = (char)*puVar11;
                puVar23 = (ulong *)((long)puVar23 + 1);
                puVar11 = puVar14;
              } while (puVar14 != puVar37);
            }
LAB_1006cd684:
            param_2[3] = param_2[3] + uVar22;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar22) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
          }
          uVar28 = uVar10 + uVar13 + 1;
          *(short *)(piVar36 + 1) = (short)uVar22;
          *piVar36 = iVar41 + 1;
          if (0xffff < uVar28) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
          *(short *)((long)piVar36 + 6) = (short)uVar28;
          piVar36 = piVar36 + 2;
          param_2[1] = (long)piVar36;
          puVar14 = (ulong *)((long)puVar37 + uVar10 + uVar13 + 4);
          puVar11 = (ulong *)((long)puVar14 + 1);
          param_4 = puVar14;
          if (puVar14 <= puVar30) {
            iVar25 = iVar25 + 2;
            uVar26 = uVar26 & 0xffffffff;
            if (param_6 < 7) {
              if (param_6 == 5) {
                lVar19 = *(long *)(lVar1 + uVar26);
                uVar10 = 0xbb000000;
              }
              else {
                if (param_6 != 6) {
LAB_1006cd778:
                  *(int *)(lVar44 + (ulong)((uint)(*(int *)(lVar1 + uVar26) * -0x61c8864f) >>
                                           (ulong)(uVar18 & 0x1f)) * 4) = iVar25;
                  *(int *)(lVar44 + (ulong)((uint)(*(int *)((long)puVar14 - 2U) * -0x61c8864f) >>
                                           (ulong)(uVar18 & 0x1f)) * 4) =
                       (int)(int *)((long)puVar14 - 2U) - iVar33;
                  goto joined_r0x0001006cd770;
                }
                lVar19 = *(long *)(lVar1 + uVar26);
                uVar10 = 0xbf9b0000;
              }
LAB_1006cd7d0:
              *(int *)(lVar44 + (lVar19 * (uVar10 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f)) * 4) =
                   iVar25;
              *(int *)(lVar44 + (*(long *)((long)puVar14 - 2U) * (uVar10 | 0xcf1bbcdc00000000) >>
                                (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar14 - 2U) - iVar33;
            }
            else {
              if (param_6 == 7) {
                lVar19 = *(long *)(lVar1 + uVar26);
                uVar10 = 0xbfa56300;
                goto LAB_1006cd7d0;
              }
              if (param_6 != 8) goto LAB_1006cd778;
              *(int *)(lVar44 + ((ulong)(*(long *)(lVar1 + uVar26) * -0x30e44323485a9b9d) >>
                                (uVar12 & 0x3f)) * 4) = iVar25;
              *(int *)(lVar44 + ((ulong)(*(long *)((long)puVar14 - 2U) * -0x30e44323485a9b9d) >>
                                (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar14 - 2U) - iVar33;
            }
joined_r0x0001006cd770:
            if (uVar35 != 0) {
              uVar42 = (uint)*puVar14;
              uVar10 = (ulong)uVar35;
              uVar39 = uVar35;
              if (uVar42 == *(uint *)((long)puVar14 - uVar10)) {
                do {
                  uVar35 = uVar43;
                  uVar43 = uVar39;
                  puVar11 = (ulong *)((long)puVar14 + 4);
                  puVar23 = (ulong *)((long)puVar11 + -uVar10);
                  iVar25 = (int)puVar14;
                  puVar37 = puVar11;
                  if (puVar11 < puVar40) {
                    if (*puVar23 != *puVar11) {
                      uVar10 = *puVar11 ^ *puVar23;
                      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar10 & 0x5555555555555555) << 1;
                      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 |
                               (uVar10 & 0x3333333333333333) << 2;
                      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar10 & 0xffff0000ffff) << 0x10;
                      uVar10 = (ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3;
                      goto joined_r0x0001006cd954;
                    }
                    lVar19 = 0;
                    puVar37 = (ulong *)((long)puVar14 + 0xc);
                    puVar23 = (ulong *)((long)puVar14 + 0xc + -uVar10);
                    do {
                      if (puVar40 <= puVar37) goto joined_r0x0001006cd8a4;
                      uVar13 = *puVar23;
                      uVar10 = *puVar37;
                      lVar19 = lVar19 + 8;
                      puVar37 = puVar37 + 1;
                      puVar23 = puVar23 + 1;
                    } while (uVar13 == uVar10);
                    uVar10 = uVar10 ^ uVar13;
                    uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1
                    ;
                    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2
                    ;
                    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar10 & 0xffff0000ffff) << 0x10;
                    uVar10 = lVar19 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
                    if (param_6 < 7) goto LAB_1006cd924;
LAB_1006cd958:
                    if (param_6 == 7) {
                      uVar13 = *puVar14;
                      uVar22 = 0xbfa56300;
                      goto LAB_1006cd9bc;
                    }
                    if (param_6 == 8) {
                      *(int *)(lVar44 + (*puVar14 * -0x30e44323485a9b9d >> (uVar12 & 0x3f)) * 4) =
                           iVar25 - iVar33;
                    }
                    else {
LAB_1006cd988:
                      *(int *)(lVar44 + (ulong)(uVar42 * -0x61c8864f >> (ulong)(uVar18 & 0x1f)) * 4)
                           = iVar25 - iVar33;
                    }
                  }
                  else {
joined_r0x0001006cd8a4:
                    if (puVar37 < (ulong *)((long)puVar2 - 3U)) {
                      if (*(uint *)puVar23 == *(uint *)puVar37) {
                        puVar37 = (ulong *)((long)puVar37 + 4);
                        puVar23 = (ulong *)((long)puVar23 + 4);
                      }
                    }
                    if (puVar37 < (ulong *)((long)puVar2 - 1U)) {
                      if ((short)*puVar23 == (short)*puVar37) {
                        puVar37 = (ulong *)((long)puVar37 + 2);
                        puVar23 = (ulong *)((long)puVar23 + 2);
                      }
                    }
                    if ((puVar37 < puVar2) && ((char)*puVar23 == (char)*puVar37)) {
                      puVar37 = (ulong *)((long)puVar37 + 1);
                    }
                    uVar10 = (long)puVar37 - (long)puVar11;
joined_r0x0001006cd954:
                    if (6 < param_6) goto LAB_1006cd958;
LAB_1006cd924:
                    if (param_6 != 5) {
                      if (param_6 == 6) {
                        uVar13 = *puVar14;
                        uVar22 = 0xbf9b0000;
                        goto LAB_1006cd9bc;
                      }
                      goto LAB_1006cd988;
                    }
                    uVar13 = *puVar14;
                    uVar22 = 0xbb000000;
LAB_1006cd9bc:
                    *(int *)(lVar44 + (uVar13 * (uVar22 | 0xcf1bbcdc00000000) >> (uVar12 & 0x3f)) *
                                      4) = iVar25 - iVar33;
                  }
                  if (puVar14 <= puVar20) {
                    puVar11 = (ulong *)param_2[3];
                    uVar13 = *puVar14;
                    puVar11[1] = puVar14[1];
                    *puVar11 = uVar13;
                    piVar36 = (int *)param_2[1];
                  }
                  *(undefined2 *)(piVar36 + 1) = 0;
                  *piVar36 = 1;
                  uVar8 = (undefined2)(uVar10 + 1);
                  if (uVar10 + 1 < 0x10000) {
                    *(undefined2 *)((long)piVar36 + 6) = uVar8;
                    param_2[1] = (long)(piVar36 + 2);
                  }
                  else {
                    *(undefined4 *)(param_2 + 9) = 2;
                    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
                    *(undefined2 *)((long)piVar36 + 6) = uVar8;
                    param_2[1] = (long)(piVar36 + 2);
                  }
                  puVar14 = (ulong *)((long)puVar14 + uVar10 + 4);
                  if ((uVar35 == 0) || (piVar36 = piVar36 + 2, puVar30 < puVar14)) break;
                  uVar42 = (uint)*puVar14;
                  uVar10 = (ulong)uVar35;
                  uVar39 = uVar35;
                } while (uVar42 == *(uint *)((long)puVar14 - uVar10));
                puVar11 = (ulong *)((long)puVar14 + 1);
                param_4 = puVar14;
              }
            }
          }
        }
      } while (puVar11 < puVar30);
    }
    uVar7 = uVar38;
    if (uVar43 != 0) {
      uVar7 = uVar43;
    }
    *param_3 = uVar7;
    if (uVar35 != 0) {
      uVar38 = uVar35;
    }
  }
  param_3[1] = uVar38;
  return (long)puVar2 - (long)param_4;
}

