// rea decompile_all
// name: FUN_1006c568c
// address: 0x1006c568c
// body: available
// range: 0x1006c568c-0x1006c745f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006c568c(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5,int param_6)

{
  bool bVar1;
  ulong *puVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  int *piVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  char *pcVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  int *piVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong uVar39;
  long lVar40;
  undefined8 *puVar41;
  uint uVar42;
  int iVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  
  lVar46 = *(long *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0xbc);
  lVar19 = *(long *)(param_1 + 0x40);
  lVar44 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)((long)param_4 + param_5);
  iVar43 = (int)lVar44;
  iVar8 = (int)puVar2 - iVar43;
  puVar14 = puVar2 + -1;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar16 = *(uint *)(param_1 + 0x18);
  uVar4 = iVar8 - uVar7;
  if (iVar8 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  uVar18 = uVar16;
  if (uVar16 <= uVar4) {
    uVar18 = uVar4;
  }
  uVar42 = *param_3;
  uVar17 = param_3[1];
  if (uVar4 < uVar16) {
    if (param_4 < puVar14) {
      puVar23 = (ulong *)(lVar44 + (ulong)uVar18);
      lVar32 = *(long *)(param_1 + 0x10);
      puVar12 = (ulong *)(lVar32 + (ulong)uVar4);
      puVar13 = (ulong *)(lVar32 + (ulong)uVar18);
      uVar33 = (ulong)(0x40 - iVar6);
      uVar16 = 0x20 - iVar6;
      uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar28 = puVar2 + -4;
      puVar21 = param_4;
      do {
        if (param_6 < 7) {
          if (param_6 == 5) {
            uVar20 = *puVar21;
            uVar29 = 0xbb000000;
            goto LAB_1006c5840;
          }
          if (param_6 == 6) {
            uVar20 = *puVar21;
            uVar29 = 0xbf9b0000;
            goto LAB_1006c5840;
          }
LAB_1006c5808:
          uVar29 = (ulong)((uint)((int)*puVar21 * -0x61c8864f) >> (ulong)(uVar16 & 0x1f));
          uVar20 = *puVar21;
        }
        else {
          if (param_6 == 7) {
            uVar20 = *puVar21;
            uVar29 = 0xbfa56300;
          }
          else {
            if (param_6 != 8) goto LAB_1006c5808;
            uVar20 = *puVar21;
            uVar29 = 0xb7a56463;
          }
LAB_1006c5840:
          uVar29 = uVar20 * (uVar29 | 0xcf1bbcdc00000000) >> (uVar33 & 0x3f);
        }
        uVar7 = *(uint *)(lVar19 + uVar29 * 4);
        lVar31 = lVar32;
        if (uVar18 <= uVar7) {
          lVar31 = lVar44;
        }
        uVar37 = uVar20 * -0x30e44323485a9b9d >> (uVar27 & 0x3f);
        uVar26 = *(uint *)(lVar46 + uVar37 * 4);
        lVar40 = lVar32;
        if (uVar18 <= uVar26) {
          lVar40 = lVar44;
        }
        iVar8 = (int)puVar21 - iVar43;
        iVar6 = iVar8 + 1;
        uVar9 = iVar6 - uVar42;
        lVar5 = lVar32;
        if (uVar18 <= uVar9) {
          lVar5 = lVar44;
        }
        *(int *)(lVar46 + uVar37 * 4) = iVar8;
        *(int *)(lVar19 + uVar29 * 4) = iVar8;
        if ((uVar4 < uVar9) && (2 < (uVar18 - 1) - uVar9)) {
          puVar38 = (ulong *)((long)puVar21 + 1);
          if (*(int *)(lVar5 + (ulong)uVar9) != *(int *)puVar38) goto LAB_1006c594c;
          puVar35 = puVar13;
          if (uVar18 <= uVar9) {
            puVar35 = puVar2;
          }
          lVar31 = (long)puVar21 + 5;
          FUN_1006c7460(lVar31,(int *)(lVar5 + (ulong)uVar9) + 1,puVar2,puVar35,puVar23);
          uVar20 = (long)puVar38 - (long)param_4;
          puVar21 = (ulong *)param_2[3];
          if (puVar28 < puVar38) {
            puVar35 = param_4;
            puVar30 = puVar21;
            if (param_4 <= puVar28) {
              puVar30 = (ulong *)((long)puVar21 + ((long)puVar28 - (long)param_4));
              uVar29 = *param_4;
              puVar21[1] = param_4[1];
              *puVar21 = uVar29;
              uVar29 = param_4[2];
              puVar21[3] = param_4[3];
              puVar21[2] = uVar29;
              puVar35 = puVar28;
              if (0x20 < (long)puVar28 - (long)param_4) {
                puVar21 = puVar21 + 4;
                puVar10 = param_4 + 6;
                do {
                  uVar29 = puVar10[-2];
                  puVar21[1] = puVar10[-1];
                  *puVar21 = uVar29;
                  uVar29 = *puVar10;
                  puVar21[3] = puVar10[1];
                  puVar21[2] = uVar29;
                  puVar21 = puVar21 + 4;
                  puVar10 = puVar10 + 4;
                } while (puVar21 < puVar30);
              }
            }
            if (puVar35 < puVar38) {
              uVar29 = (long)puVar38 - (long)puVar35;
              if ((7 < uVar29) && (0x3f < (ulong)((long)puVar30 - (long)puVar35))) {
                if (uVar29 < 0x40) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = uVar29 & 0xffffffffffffffc0;
                  puVar21 = puVar30 + 4;
                  puVar10 = puVar35 + 4;
                  uVar37 = uVar39;
                  do {
                    uVar15 = puVar10[-4];
                    uVar45 = puVar10[-1];
                    uVar22 = puVar10[-2];
                    uVar48 = puVar10[1];
                    uVar47 = *puVar10;
                    uVar50 = puVar10[3];
                    uVar49 = puVar10[2];
                    puVar21[-3] = puVar10[-3];
                    puVar21[-4] = uVar15;
                    puVar21[-1] = uVar45;
                    puVar21[-2] = uVar22;
                    puVar21[1] = uVar48;
                    *puVar21 = uVar47;
                    puVar21[3] = uVar50;
                    puVar21[2] = uVar49;
                    uVar37 = uVar37 - 0x40;
                    puVar21 = puVar21 + 8;
                    puVar10 = puVar10 + 8;
                  } while (uVar37 != 0);
                  if (uVar29 == uVar39) goto LAB_1006c60b4;
                  if ((uVar29 & 0x38) == 0) {
                    puVar35 = (ulong *)((long)puVar35 + uVar39);
                    puVar30 = (ulong *)((long)puVar30 + uVar39);
                    goto LAB_1006c60a4;
                  }
                }
                uVar37 = uVar29 & 0xfffffffffffffff8;
                lVar40 = uVar39 - uVar37;
                puVar25 = (undefined8 *)((long)puVar30 + uVar39);
                puVar41 = (undefined8 *)((long)puVar35 + uVar39);
                do {
                  *puVar25 = *puVar41;
                  lVar40 = lVar40 + 8;
                  puVar25 = puVar25 + 1;
                  puVar41 = puVar41 + 1;
                } while (lVar40 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar37);
                puVar35 = (ulong *)((long)puVar35 + uVar37);
                if (uVar29 == uVar37) goto LAB_1006c60b4;
              }
LAB_1006c60a4:
              do {
                puVar21 = (ulong *)((long)puVar35 + 1);
                *(char *)puVar30 = (char)*puVar35;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar35 = puVar21;
              } while (puVar21 != puVar38);
            }
LAB_1006c60b4:
            param_2[3] = param_2[3] + uVar20;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar20) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
          }
          else {
            uVar29 = *param_4;
            puVar21[1] = param_4[1];
            *puVar21 = uVar29;
            lVar40 = param_2[3];
            if (0x10 < uVar20) {
              uVar29 = param_4[2];
              *(ulong *)(lVar40 + 0x18) = param_4[3];
              *(ulong *)(lVar40 + 0x10) = uVar29;
              uVar29 = param_4[4];
              *(ulong *)(lVar40 + 0x28) = param_4[5];
              *(ulong *)(lVar40 + 0x20) = uVar29;
              if (0x30 < (long)uVar20) {
                puVar21 = (ulong *)(lVar40 + 0x30);
                puVar35 = param_4 + 8;
                do {
                  uVar29 = puVar35[-2];
                  puVar21[1] = puVar35[-1];
                  *puVar21 = uVar29;
                  uVar29 = *puVar35;
                  puVar21[3] = puVar35[1];
                  puVar21[2] = uVar29;
                  puVar21 = puVar21 + 4;
                  puVar35 = puVar35 + 4;
                } while (puVar21 < (ulong *)(lVar40 + uVar20));
              }
              goto LAB_1006c60b4;
            }
            param_2[3] = lVar40 + uVar20;
            piVar36 = (int *)param_2[1];
          }
          puVar10 = (ulong *)(lVar31 + 4);
          uVar29 = lVar31 + 1;
          *(short *)(piVar36 + 1) = (short)uVar20;
          *piVar36 = 1;
joined_r0x0001006c61b4:
          if (uVar29 >> 0x10 != 0) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
          *(short *)((long)piVar36 + 6) = (short)uVar29;
          piVar36 = piVar36 + 2;
          param_2[1] = (long)piVar36;
          param_4 = (ulong *)((long)puVar38 + (long)puVar10);
          puVar21 = param_4;
          if (param_4 <= puVar14) {
            uVar7 = iVar8 + 2;
            lVar31 = *(long *)(lVar44 + (ulong)uVar7);
            uVar20 = lVar31 * -0x30e44323485a9b9d;
            *(uint *)(lVar46 + (uVar20 >> (uVar27 & 0x3f)) * 4) = uVar7;
            *(int *)(lVar46 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar27 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar43;
            if (param_6 < 7) {
              if (param_6 == 5) {
                uVar20 = 0xbb000000;
LAB_1006c62e0:
                uVar20 = uVar20 | 0xcf1bbcdc00000000;
                *(uint *)(lVar19 + (lVar31 * uVar20 >> (uVar33 & 0x3f)) * 4) = uVar7;
                lVar31 = *(long *)((long)param_4 - 1);
                goto LAB_1006c6300;
              }
              if (param_6 == 6) {
                uVar20 = 0xbf9b0000;
                goto LAB_1006c62e0;
              }
LAB_1006c62a0:
              *(uint *)(lVar19 + (ulong)((uint)(*(int *)(lVar44 + (ulong)uVar7) * -0x61c8864f) >>
                                        (ulong)(uVar16 & 0x1f)) * 4) = uVar7;
              uVar20 = (ulong)((uint)(*(int *)((long)param_4 - 1) * -0x61c8864f) >>
                              (ulong)(uVar16 & 0x1f));
            }
            else {
              if (param_6 == 7) {
                uVar20 = 0xbfa56300;
                goto LAB_1006c62e0;
              }
              if (param_6 != 8) goto LAB_1006c62a0;
              *(uint *)(lVar19 + (uVar20 >> (uVar33 & 0x3f)) * 4) = uVar7;
              lVar31 = *(long *)((long)param_4 - 1);
              uVar20 = 0xcf1bbcdcb7a56463;
LAB_1006c6300:
              uVar20 = lVar31 * uVar20 >> (uVar33 & 0x3f);
            }
            *(int *)(lVar19 + uVar20 * 4) = ((int)param_4 + -1) - iVar43;
            do {
              uVar26 = uVar17;
              iVar6 = (int)param_4 - iVar43;
              uVar7 = iVar6 - uVar26;
              lVar31 = lVar32;
              if (uVar18 <= uVar7) {
                lVar31 = lVar44;
              }
              puVar21 = param_4;
              uVar17 = uVar26;
              if (((uVar7 <= uVar4) || ((uVar18 - 1) - uVar7 < 3)) ||
                 (*(int *)(lVar31 + (ulong)uVar7) != (int)*param_4)) break;
              puVar21 = puVar13;
              if (uVar18 <= uVar7) {
                puVar21 = puVar2;
              }
              piVar11 = (int *)((long)param_4 + 4);
              FUN_1006c7460(piVar11,(int *)(lVar31 + (ulong)uVar7) + 1,puVar2,puVar21,puVar23);
              if (param_4 <= puVar28) {
                puVar21 = (ulong *)param_2[3];
                uVar20 = *param_4;
                puVar21[1] = param_4[1];
                *puVar21 = uVar20;
                piVar36 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar36 + 1) = 0;
              *piVar36 = 1;
              if (0xffff < (long)piVar11 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
              *(short *)((long)piVar36 + 6) = (short)((long)piVar11 + 1U);
              piVar36 = piVar36 + 2;
              param_2[1] = (long)piVar36;
              if (param_6 < 7) {
                if (param_6 == 5) {
                  uVar20 = *param_4;
                  uVar29 = 0xbb000000;
                  goto LAB_1006c6320;
                }
                if (param_6 == 6) {
                  uVar20 = *param_4;
                  uVar29 = 0xbf9b0000;
                  goto LAB_1006c6320;
                }
LAB_1006c6484:
                uVar29 = (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar16 & 0x1f));
                uVar20 = *param_4;
              }
              else {
                if (param_6 == 7) {
                  uVar20 = *param_4;
                  uVar29 = 0xbfa56300;
                }
                else {
                  if (param_6 != 8) goto LAB_1006c6484;
                  uVar20 = *param_4;
                  uVar29 = 0xb7a56463;
                }
LAB_1006c6320:
                uVar29 = uVar20 * (uVar29 | 0xcf1bbcdc00000000) >> (uVar33 & 0x3f);
              }
              *(int *)(lVar19 + uVar29 * 4) = iVar6;
              *(int *)(lVar46 + (uVar20 * -0x30e44323485a9b9d >> (uVar27 & 0x3f)) * 4) = iVar6;
              param_4 = (ulong *)((long)param_4 + (long)(piVar11 + 1));
              puVar21 = param_4;
              uVar17 = uVar42;
              uVar42 = uVar26;
            } while (param_4 <= puVar14);
          }
        }
        else {
LAB_1006c594c:
          if ((uVar4 < uVar26) && (puVar38 = (ulong *)(lVar40 + (ulong)uVar26), *puVar38 == uVar20))
          {
            puVar35 = puVar12;
            puVar30 = puVar13;
            if (uVar18 <= uVar26) {
              puVar35 = puVar23;
              puVar30 = puVar2;
            }
            puVar10 = puVar21 + 1;
            FUN_1006c7460(puVar10,puVar38 + 1,puVar2,puVar30);
            puVar10 = puVar10 + 1;
            if ((puVar38 > puVar35 && param_4 <= puVar21) &&
                (puVar38 <= puVar35 || puVar21 != param_4)) {
              puVar38 = (ulong *)(lVar40 + (ulong)uVar26);
              do {
                puVar38 = (ulong *)((long)puVar38 + -1);
                puVar30 = (ulong *)((long)puVar21 + -1);
                if ((*(char *)puVar30 != *(char *)puVar38) ||
                   (puVar10 = (ulong *)((long)puVar10 + 1), puVar21 = puVar30, puVar38 <= puVar35))
                break;
              } while (param_4 < puVar30);
              uVar20 = (long)puVar21 - (long)param_4;
              puVar38 = (ulong *)param_2[3];
              if (puVar21 <= puVar28) goto LAB_1006c59d8;
LAB_1006c5d34:
              puVar30 = puVar38;
              puVar35 = param_4;
              if (param_4 <= puVar28) {
                puVar30 = (ulong *)((long)puVar38 + ((long)puVar28 - (long)param_4));
                uVar29 = *param_4;
                puVar38[1] = param_4[1];
                *puVar38 = uVar29;
                uVar29 = param_4[2];
                puVar38[3] = param_4[3];
                puVar38[2] = uVar29;
                puVar35 = puVar28;
                if (0x20 < (long)puVar28 - (long)param_4) {
                  puVar38 = puVar38 + 4;
                  puVar34 = param_4 + 6;
                  do {
                    uVar29 = puVar34[-2];
                    puVar38[1] = puVar34[-1];
                    *puVar38 = uVar29;
                    uVar29 = *puVar34;
                    puVar38[3] = puVar34[1];
                    puVar38[2] = uVar29;
                    puVar38 = puVar38 + 4;
                    puVar34 = puVar34 + 4;
                  } while (puVar38 < puVar30);
                }
              }
              if (puVar35 < puVar21) {
                uVar29 = (long)puVar21 - (long)puVar35;
                if ((7 < uVar29) && (0x3f < (ulong)((long)puVar30 - (long)puVar35))) {
                  if (uVar29 < 0x40) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = uVar29 & 0xffffffffffffffc0;
                    puVar38 = puVar30 + 4;
                    puVar34 = puVar35 + 4;
                    uVar37 = uVar39;
                    do {
                      uVar15 = puVar34[-4];
                      uVar45 = puVar34[-1];
                      uVar22 = puVar34[-2];
                      uVar48 = puVar34[1];
                      uVar47 = *puVar34;
                      uVar50 = puVar34[3];
                      uVar49 = puVar34[2];
                      puVar38[-3] = puVar34[-3];
                      puVar38[-4] = uVar15;
                      puVar38[-1] = uVar45;
                      puVar38[-2] = uVar22;
                      puVar38[1] = uVar48;
                      *puVar38 = uVar47;
                      puVar38[3] = uVar50;
                      puVar38[2] = uVar49;
                      uVar37 = uVar37 - 0x40;
                      puVar38 = puVar38 + 8;
                      puVar34 = puVar34 + 8;
                    } while (uVar37 != 0);
                    if (uVar29 == uVar39) goto LAB_1006c6120;
                    if ((uVar29 & 0x38) == 0) {
                      puVar35 = (ulong *)((long)puVar35 + uVar39);
                      puVar30 = (ulong *)((long)puVar30 + uVar39);
                      goto LAB_1006c6110;
                    }
                  }
                  uVar37 = uVar29 & 0xfffffffffffffff8;
                  lVar31 = uVar39 - uVar37;
                  puVar25 = (undefined8 *)((long)puVar30 + uVar39);
                  puVar41 = (undefined8 *)((long)puVar35 + uVar39);
                  do {
                    *puVar25 = *puVar41;
                    lVar31 = lVar31 + 8;
                    puVar25 = puVar25 + 1;
                    puVar41 = puVar41 + 1;
                  } while (lVar31 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar37);
                  puVar35 = (ulong *)((long)puVar35 + uVar37);
                  if (uVar29 == uVar37) goto LAB_1006c6120;
                }
LAB_1006c6110:
                do {
                  puVar38 = (ulong *)((long)puVar35 + 1);
                  *(char *)puVar30 = (char)*puVar35;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar35 = puVar38;
                } while (puVar38 != puVar21);
              }
            }
            else {
              uVar20 = (long)puVar21 - (long)param_4;
              puVar38 = (ulong *)param_2[3];
              if (puVar28 < puVar21) goto LAB_1006c5d34;
LAB_1006c59d8:
              uVar29 = *param_4;
              puVar38[1] = param_4[1];
              *puVar38 = uVar29;
              lVar31 = param_2[3];
              if (uVar20 < 0x11) {
                param_2[3] = lVar31 + uVar20;
                piVar36 = (int *)param_2[1];
                uVar26 = iVar8 - uVar26;
                puVar38 = puVar21;
                goto LAB_1006c6198;
              }
              uVar29 = param_4[2];
              *(ulong *)(lVar31 + 0x18) = param_4[3];
              *(ulong *)(lVar31 + 0x10) = uVar29;
              uVar29 = param_4[4];
              *(ulong *)(lVar31 + 0x28) = param_4[5];
              *(ulong *)(lVar31 + 0x20) = uVar29;
              if (0x30 < (long)uVar20) {
                puVar38 = (ulong *)(lVar31 + 0x30);
                puVar35 = param_4 + 8;
                do {
                  uVar29 = puVar35[-2];
                  puVar38[1] = puVar35[-1];
                  *puVar38 = uVar29;
                  uVar29 = *puVar35;
                  puVar38[3] = puVar35[1];
                  puVar38[2] = uVar29;
                  puVar38 = puVar38 + 4;
                  puVar35 = puVar35 + 4;
                } while (puVar38 < (ulong *)(lVar31 + uVar20));
              }
            }
LAB_1006c6120:
            param_2[3] = param_2[3] + uVar20;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar20) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
            uVar26 = iVar8 - uVar26;
            puVar38 = puVar21;
LAB_1006c6198:
            uVar29 = (long)puVar10 - 3;
            *(short *)(piVar36 + 1) = (short)uVar20;
            *piVar36 = uVar26 + 3;
            uVar17 = uVar42;
            uVar42 = uVar26;
            goto joined_r0x0001006c61b4;
          }
          if ((uVar4 < uVar7) &&
             (puVar35 = (ulong *)(lVar31 + (ulong)uVar7), (int)*puVar35 == (int)*puVar21)) {
            puVar38 = (ulong *)((long)puVar21 + 1);
            uVar20 = *puVar38;
            uVar29 = uVar20 * -0x30e44323485a9b9d >> (uVar27 & 0x3f);
            uVar17 = *(uint *)(lVar46 + uVar29 * 4);
            lVar40 = lVar32;
            if (uVar18 <= uVar17) {
              lVar40 = lVar44;
            }
            *(int *)(lVar46 + uVar29 * 4) = iVar6;
            if ((uVar4 < uVar17) &&
               (puVar30 = (ulong *)(lVar40 + (ulong)uVar17), *puVar30 == uVar20)) {
              puVar35 = puVar12;
              puVar10 = puVar13;
              if (uVar18 <= uVar17) {
                puVar35 = puVar23;
                puVar10 = puVar2;
              }
              lVar31 = (long)puVar21 + 9;
              FUN_1006c7460(lVar31,puVar30 + 1,puVar2,puVar10);
              puVar10 = (ulong *)(lVar31 + 8);
              uVar26 = iVar6 - uVar17;
              if ((puVar30 > puVar35 && param_4 <= puVar38) &&
                  (puVar30 <= puVar35 || puVar38 != param_4)) {
                puVar30 = (ulong *)(lVar40 + (ulong)uVar17);
                while (puVar38 = puVar21, puVar30 = (ulong *)((long)puVar30 + -1),
                      (char)*puVar38 == *(char *)puVar30) {
                  puVar10 = (ulong *)((long)puVar10 + 1);
                  if ((puVar30 <= puVar35) ||
                     (puVar21 = (ulong *)((long)puVar38 + -1), puVar38 <= param_4))
                  goto LAB_1006c5de0;
                }
                puVar38 = (ulong *)((long)puVar38 + 1);
              }
            }
            else {
              puVar30 = puVar12;
              puVar38 = puVar13;
              if (uVar18 <= uVar7) {
                puVar30 = puVar23;
                puVar38 = puVar2;
              }
              piVar36 = (int *)((long)puVar21 + 4);
              FUN_1006c7460(piVar36,(int *)((long)puVar35 + 4),puVar2,puVar38);
              puVar10 = (ulong *)(piVar36 + 1);
              uVar26 = iVar8 - uVar7;
              puVar38 = puVar21;
              if ((puVar35 > puVar30 && param_4 <= puVar21) &&
                  (puVar35 <= puVar30 || puVar21 != param_4)) {
                puVar35 = (ulong *)(lVar31 + (ulong)uVar7);
                do {
                  puVar35 = (ulong *)((long)puVar35 + -1);
                  puVar34 = (ulong *)((long)puVar21 + -1);
                  puVar38 = puVar21;
                  if ((*(char *)puVar34 != *(char *)puVar35) ||
                     (puVar10 = (ulong *)((long)puVar10 + 1), puVar38 = puVar34, puVar35 <= puVar30)
                     ) break;
                  puVar21 = puVar34;
                } while (param_4 < puVar34);
              }
            }
LAB_1006c5de0:
            uVar20 = (long)puVar38 - (long)param_4;
            puVar21 = (ulong *)param_2[3];
            if (puVar28 < puVar38) {
              puVar30 = puVar21;
              puVar35 = param_4;
              if (param_4 <= puVar28) {
                puVar30 = (ulong *)((long)puVar21 + ((long)puVar28 - (long)param_4));
                uVar29 = *param_4;
                puVar21[1] = param_4[1];
                *puVar21 = uVar29;
                uVar29 = param_4[2];
                puVar21[3] = param_4[3];
                puVar21[2] = uVar29;
                puVar35 = puVar28;
                if (0x20 < (long)puVar28 - (long)param_4) {
                  puVar21 = puVar21 + 4;
                  puVar34 = param_4 + 6;
                  do {
                    uVar29 = puVar34[-2];
                    puVar21[1] = puVar34[-1];
                    *puVar21 = uVar29;
                    uVar29 = *puVar34;
                    puVar21[3] = puVar34[1];
                    puVar21[2] = uVar29;
                    puVar21 = puVar21 + 4;
                    puVar34 = puVar34 + 4;
                  } while (puVar21 < puVar30);
                }
              }
              if (puVar35 < puVar38) {
                uVar29 = (long)puVar38 - (long)puVar35;
                if ((7 < uVar29) && (0x3f < (ulong)((long)puVar30 - (long)puVar35))) {
                  if (uVar29 < 0x40) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = uVar29 & 0xffffffffffffffc0;
                    puVar21 = puVar30 + 4;
                    puVar34 = puVar35 + 4;
                    uVar37 = uVar39;
                    do {
                      uVar15 = puVar34[-4];
                      uVar45 = puVar34[-1];
                      uVar22 = puVar34[-2];
                      uVar48 = puVar34[1];
                      uVar47 = *puVar34;
                      uVar50 = puVar34[3];
                      uVar49 = puVar34[2];
                      puVar21[-3] = puVar34[-3];
                      puVar21[-4] = uVar15;
                      puVar21[-1] = uVar45;
                      puVar21[-2] = uVar22;
                      puVar21[1] = uVar48;
                      *puVar21 = uVar47;
                      puVar21[3] = uVar50;
                      puVar21[2] = uVar49;
                      uVar37 = uVar37 - 0x40;
                      puVar21 = puVar21 + 8;
                      puVar34 = puVar34 + 8;
                    } while (uVar37 != 0);
                    if (uVar29 == uVar39) goto LAB_1006c616c;
                    if ((uVar29 & 0x38) == 0) {
                      puVar35 = (ulong *)((long)puVar35 + uVar39);
                      puVar30 = (ulong *)((long)puVar30 + uVar39);
                      goto LAB_1006c615c;
                    }
                  }
                  uVar37 = uVar29 & 0xfffffffffffffff8;
                  lVar31 = uVar39 - uVar37;
                  puVar25 = (undefined8 *)((long)puVar30 + uVar39);
                  puVar41 = (undefined8 *)((long)puVar35 + uVar39);
                  do {
                    *puVar25 = *puVar41;
                    lVar31 = lVar31 + 8;
                    puVar25 = puVar25 + 1;
                    puVar41 = puVar41 + 1;
                  } while (lVar31 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar37);
                  puVar35 = (ulong *)((long)puVar35 + uVar37);
                  if (uVar29 == uVar37) goto LAB_1006c616c;
                }
LAB_1006c615c:
                do {
                  puVar21 = (ulong *)((long)puVar35 + 1);
                  *(char *)puVar30 = (char)*puVar35;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar35 = puVar21;
                } while (puVar21 != puVar38);
              }
LAB_1006c616c:
              param_2[3] = param_2[3] + uVar20;
              piVar36 = (int *)param_2[1];
              if (0xffff < uVar20) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
            }
            else {
              uVar29 = *param_4;
              puVar21[1] = param_4[1];
              *puVar21 = uVar29;
              lVar31 = param_2[3];
              if (0x10 < uVar20) {
                uVar29 = param_4[2];
                *(ulong *)(lVar31 + 0x18) = param_4[3];
                *(ulong *)(lVar31 + 0x10) = uVar29;
                uVar29 = param_4[4];
                *(ulong *)(lVar31 + 0x28) = param_4[5];
                *(ulong *)(lVar31 + 0x20) = uVar29;
                if (0x30 < (long)uVar20) {
                  puVar21 = (ulong *)(lVar31 + 0x30);
                  puVar35 = param_4 + 8;
                  do {
                    uVar29 = puVar35[-2];
                    puVar21[1] = puVar35[-1];
                    *puVar21 = uVar29;
                    uVar29 = *puVar35;
                    puVar21[3] = puVar35[1];
                    puVar21[2] = uVar29;
                    puVar21 = puVar21 + 4;
                    puVar35 = puVar35 + 4;
                  } while (puVar21 < (ulong *)(lVar31 + uVar20));
                }
                goto LAB_1006c616c;
              }
              param_2[3] = lVar31 + uVar20;
              piVar36 = (int *)param_2[1];
            }
            goto LAB_1006c6198;
          }
          puVar21 = (ulong *)((long)puVar21 + ((long)puVar21 - (long)param_4 >> 8) + 1);
        }
      } while (puVar21 < puVar14);
    }
    *param_3 = uVar42;
  }
  else {
    uVar4 = iVar8 - uVar7;
    if (iVar8 - uVar16 <= uVar7) {
      uVar4 = uVar16;
    }
    pcVar3 = (char *)(lVar44 + (ulong)uVar4);
    puVar23 = param_4;
    if ((int)param_4 == (int)pcVar3) {
      puVar23 = (ulong *)((long)param_4 + 1);
    }
    uVar7 = (int)puVar23 - (int)pcVar3;
    uVar16 = uVar17;
    if (uVar17 <= uVar7) {
      uVar16 = 0;
    }
    uVar18 = 0;
    if (uVar17 <= uVar7) {
      uVar18 = uVar17;
    }
    uVar27 = (ulong)uVar18;
    uVar17 = uVar42;
    if (uVar42 <= uVar7) {
      uVar17 = uVar16;
    }
    uVar16 = 0;
    if (uVar42 <= uVar7) {
      uVar16 = uVar42;
    }
    uVar33 = (ulong)uVar16;
    if (puVar23 < puVar14) {
      uVar20 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar29 = (ulong)(0x40 - iVar6);
      uVar7 = 0x20 - iVar6;
      puVar12 = (ulong *)((long)puVar2 - 7);
      puVar13 = (ulong *)((long)puVar2 - 3);
      puVar21 = (ulong *)((long)puVar2 - 1);
      puVar28 = puVar2 + -4;
      lVar32 = lVar44 + -1;
      do {
        uVar37 = *puVar23;
        if (param_6 < 7) {
          uVar39 = 0xcf1bbcdcbb000000;
          if (param_6 == 5) {
LAB_1006c6600:
            uVar39 = uVar37 * uVar39 >> (uVar29 & 0x3f);
          }
          else {
            if (param_6 == 6) {
              uVar39 = 0xbf9b0000;
              goto LAB_1006c65f4;
            }
LAB_1006c65d8:
            uVar39 = (ulong)((uint)((int)uVar37 * -0x61c8864f) >> (ulong)(uVar7 & 0x1f));
          }
        }
        else {
          if (param_6 == 7) {
            uVar39 = 0xbfa56300;
LAB_1006c65f4:
            uVar39 = uVar39 | 0xcf1bbcdc00000000;
            goto LAB_1006c6600;
          }
          if (param_6 != 8) goto LAB_1006c65d8;
          uVar39 = uVar37 * -0x30e44323485a9b9d >> (uVar29 & 0x3f);
        }
        uVar15 = uVar37 * -0x30e44323485a9b9d >> (uVar20 & 0x3f);
        iVar6 = (int)puVar23 - iVar43;
        uVar16 = *(uint *)(lVar46 + uVar15 * 4);
        uVar22 = (ulong)uVar16;
        uVar18 = *(uint *)(lVar19 + uVar39 * 4);
        uVar45 = (ulong)uVar18;
        *(int *)(lVar19 + uVar39 * 4) = iVar6;
        *(int *)(lVar46 + uVar15 * 4) = iVar6;
        puVar38 = (ulong *)((long)puVar23 + 1);
        if (((int)uVar33 == 0) ||
           (*(int *)((long)puVar38 - (uVar33 & 0xffffffff)) != *(int *)puVar38)) {
          if ((uVar4 < uVar16) && (puVar35 = (ulong *)(lVar44 + uVar22), *puVar35 == uVar37)) {
            puVar38 = puVar23 + 1;
            puVar30 = puVar35 + 1;
            puVar10 = puVar38;
            if (puVar38 < puVar12) {
              if (*puVar30 == *puVar38) {
                lVar31 = 0;
                puVar10 = puVar23 + 2;
                puVar30 = (ulong *)(lVar44 + 0x10 + uVar22);
                do {
                  if (puVar12 <= puVar10) goto joined_r0x0001006c6a5c;
                  uVar27 = *puVar30;
                  uVar37 = *puVar10;
                  lVar31 = lVar31 + 8;
                  puVar10 = puVar10 + 1;
                  puVar30 = puVar30 + 1;
                } while (uVar27 == uVar37);
                uVar37 = uVar37 ^ uVar27;
                uVar27 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                lVar31 = lVar31 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + 8;
              }
              else {
                uVar27 = *puVar38 ^ *puVar30;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                lVar31 = ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + 8;
              }
            }
            else {
joined_r0x0001006c6a5c:
              if (puVar10 < puVar13) {
                if ((int)*puVar30 == (int)*puVar10) {
                  puVar10 = (ulong *)((long)puVar10 + 4);
                  puVar30 = (ulong *)((long)puVar30 + 4);
                }
              }
              if (puVar10 < puVar21) {
                if ((short)*puVar30 == (short)*puVar10) {
                  puVar10 = (ulong *)((long)puVar10 + 2);
                  puVar30 = (ulong *)((long)puVar30 + 2);
                }
              }
              if ((puVar10 < puVar2) && ((char)*puVar30 == (char)*puVar10)) {
                puVar10 = (ulong *)((long)puVar10 + 1);
              }
              lVar31 = (long)puVar10 + (8 - (long)puVar38);
            }
            uVar37 = (long)puVar23 - (long)puVar35;
            if (param_4 < puVar23) {
              pcVar24 = (char *)(lVar32 + uVar22);
              puVar23 = (ulong *)((long)puVar23 + -1);
              do {
                if ((char)*puVar23 != *pcVar24) {
                  uVar27 = ((long)puVar23 + 1) - (long)param_4;
                  puVar35 = (ulong *)param_2[3];
                  puVar38 = (ulong *)((long)puVar23 + 1);
                  goto joined_r0x0001006c6d74;
                }
                lVar31 = lVar31 + 1;
                puVar38 = (ulong *)((long)puVar23 + -1);
              } while ((pcVar3 < pcVar24) &&
                      (pcVar24 = pcVar24 + -1, bVar1 = param_4 < puVar23, puVar23 = puVar38, bVar1))
              ;
LAB_1006c6cc8:
              uVar27 = ((long)puVar38 + 1) - (long)param_4;
              puVar35 = (ulong *)param_2[3];
              puVar38 = (ulong *)((long)puVar38 + 1);
            }
            else {
LAB_1006c6ce4:
              uVar27 = (long)puVar23 - (long)param_4;
              puVar35 = (ulong *)param_2[3];
              puVar38 = puVar23;
            }
joined_r0x0001006c6d74:
            if (puVar28 < puVar38) {
              puVar30 = puVar35;
              puVar23 = param_4;
              if (param_4 <= puVar28) {
                puVar30 = (ulong *)((long)puVar35 + ((long)puVar28 - (long)param_4));
                uVar39 = *param_4;
                puVar35[1] = param_4[1];
                *puVar35 = uVar39;
                uVar39 = param_4[2];
                puVar35[3] = param_4[3];
                puVar35[2] = uVar39;
                puVar23 = puVar28;
                if (0x20 < (long)puVar28 - (long)param_4) {
                  puVar35 = puVar35 + 4;
                  puVar10 = param_4 + 6;
                  do {
                    uVar39 = puVar10[-2];
                    puVar35[1] = puVar10[-1];
                    *puVar35 = uVar39;
                    uVar39 = *puVar10;
                    puVar35[3] = puVar10[1];
                    puVar35[2] = uVar39;
                    puVar35 = puVar35 + 4;
                    puVar10 = puVar10 + 4;
                  } while (puVar35 < puVar30);
                }
              }
              if (puVar23 < puVar38) {
                uVar39 = (long)puVar38 - (long)puVar23;
                if ((7 < uVar39) && (0x3f < (ulong)((long)puVar30 - (long)puVar23))) {
                  if (uVar39 < 0x40) {
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = uVar39 & 0xffffffffffffffc0;
                    puVar35 = puVar30 + 4;
                    puVar10 = puVar23 + 4;
                    uVar15 = uVar22;
                    do {
                      uVar45 = puVar10[-4];
                      uVar48 = puVar10[-1];
                      uVar47 = puVar10[-2];
                      uVar50 = puVar10[1];
                      uVar49 = *puVar10;
                      uVar52 = puVar10[3];
                      uVar51 = puVar10[2];
                      puVar35[-3] = puVar10[-3];
                      puVar35[-4] = uVar45;
                      puVar35[-1] = uVar48;
                      puVar35[-2] = uVar47;
                      puVar35[1] = uVar50;
                      *puVar35 = uVar49;
                      puVar35[3] = uVar52;
                      puVar35[2] = uVar51;
                      uVar15 = uVar15 - 0x40;
                      puVar35 = puVar35 + 8;
                      puVar10 = puVar10 + 8;
                    } while (uVar15 != 0);
                    if (uVar39 == uVar22) goto LAB_1006c73b8;
                    if ((uVar39 & 0x38) == 0) {
                      puVar23 = (ulong *)((long)puVar23 + uVar22);
                      puVar30 = (ulong *)((long)puVar30 + uVar22);
                      goto LAB_1006c73a8;
                    }
                  }
                  uVar15 = uVar39 & 0xfffffffffffffff8;
                  lVar40 = uVar22 - uVar15;
                  puVar25 = (undefined8 *)((long)puVar30 + uVar22);
                  puVar41 = (undefined8 *)((long)puVar23 + uVar22);
                  do {
                    *puVar25 = *puVar41;
                    lVar40 = lVar40 + 8;
                    puVar25 = puVar25 + 1;
                    puVar41 = puVar41 + 1;
                  } while (lVar40 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar15);
                  puVar23 = (ulong *)((long)puVar23 + uVar15);
                  if (uVar39 == uVar15) goto LAB_1006c73b8;
                }
LAB_1006c73a8:
                do {
                  puVar35 = (ulong *)((long)puVar23 + 1);
                  *(char *)puVar30 = (char)*puVar23;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar23 = puVar35;
                } while (puVar35 != puVar38);
              }
LAB_1006c73b8:
              param_2[3] = param_2[3] + uVar27;
              piVar36 = (int *)param_2[1];
              if (0xffff < uVar27) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
            }
            else {
              uVar39 = *param_4;
              puVar35[1] = param_4[1];
              *puVar35 = uVar39;
              lVar40 = param_2[3];
              if (0x10 < uVar27) {
                uVar39 = param_4[2];
                *(ulong *)(lVar40 + 0x18) = param_4[3];
                *(ulong *)(lVar40 + 0x10) = uVar39;
                uVar39 = param_4[4];
                *(ulong *)(lVar40 + 0x28) = param_4[5];
                *(ulong *)(lVar40 + 0x20) = uVar39;
                if (0x30 < (long)uVar27) {
                  puVar23 = (ulong *)(lVar40 + 0x30);
                  puVar35 = param_4 + 8;
                  do {
                    uVar39 = puVar35[-2];
                    puVar23[1] = puVar35[-1];
                    *puVar23 = uVar39;
                    uVar39 = *puVar35;
                    puVar23[3] = puVar35[1];
                    puVar23[2] = uVar39;
                    puVar23 = puVar23 + 4;
                    puVar35 = puVar35 + 4;
                  } while (puVar23 < (ulong *)(lVar40 + uVar27));
                }
                goto LAB_1006c73b8;
              }
              param_2[3] = lVar40 + uVar27;
              piVar36 = (int *)param_2[1];
            }
            uVar39 = lVar31 - 3;
            *(short *)(piVar36 + 1) = (short)uVar27;
            *piVar36 = (int)uVar37 + 3;
            uVar27 = uVar33;
            if (0xffff < uVar39) goto LAB_1006c7024;
            goto LAB_1006c7038;
          }
          if ((uVar4 < uVar18) && (piVar36 = (int *)(lVar44 + uVar45), *piVar36 == (int)*puVar23)) {
            uVar37 = *puVar38;
            uVar27 = uVar37 * -0x30e44323485a9b9d >> (uVar20 & 0x3f);
            uVar16 = *(uint *)(lVar46 + uVar27 * 4);
            uVar39 = (ulong)uVar16;
            *(int *)(lVar46 + uVar27 * 4) = iVar6 + 1;
            if ((uVar16 <= uVar4) || (puVar35 = (ulong *)(lVar44 + uVar39), *puVar35 != uVar37)) {
              puVar38 = (ulong *)((long)puVar23 + 4);
              puVar35 = (ulong *)(piVar36 + 1);
              puVar30 = puVar38;
              if (puVar38 < puVar12) {
                if (*puVar35 == *puVar38) {
                  lVar31 = 0;
                  puVar30 = (ulong *)((long)puVar23 + 0xc);
                  puVar35 = (ulong *)(lVar44 + 0xc + uVar45);
                  do {
                    if (puVar12 <= puVar30) goto joined_r0x0001006c6afc;
                    uVar27 = *puVar35;
                    uVar37 = *puVar30;
                    lVar31 = lVar31 + 8;
                    puVar30 = puVar30 + 1;
                    puVar35 = puVar35 + 1;
                  } while (uVar27 == uVar37);
                  uVar37 = uVar37 ^ uVar27;
                  uVar27 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                  uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                  uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10
                  ;
                  uVar27 = lVar31 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
                }
                else {
                  uVar27 = *puVar38 ^ *puVar35;
                  uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                  uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                  uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                  uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10
                  ;
                  uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
                }
                lVar31 = uVar27 + 4;
              }
              else {
joined_r0x0001006c6afc:
                if (puVar30 < puVar13) {
                  if ((int)*puVar35 == (int)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar35 = (ulong *)((long)puVar35 + 4);
                  }
                }
                if (puVar30 < puVar21) {
                  if ((short)*puVar35 == (short)*puVar30) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar35 = (ulong *)((long)puVar35 + 2);
                  }
                }
                if ((puVar30 < puVar2) && ((char)*puVar35 == (char)*puVar30)) {
                  puVar30 = (ulong *)((long)puVar30 + 1);
                }
                lVar31 = (long)puVar30 + (4 - (long)puVar38);
              }
              uVar37 = (long)puVar23 - (long)piVar36;
              if (puVar23 <= param_4) goto LAB_1006c6ce4;
              pcVar24 = (char *)(lVar32 + uVar45);
              puVar23 = (ulong *)((long)puVar23 + -1);
              do {
                if ((char)*puVar23 != *pcVar24) {
                  uVar27 = ((long)puVar23 + 1) - (long)param_4;
                  puVar35 = (ulong *)param_2[3];
                  puVar38 = (ulong *)((long)puVar23 + 1);
                  goto joined_r0x0001006c6d74;
                }
                lVar31 = lVar31 + 1;
                puVar38 = (ulong *)((long)puVar23 + -1);
              } while ((pcVar3 < pcVar24) &&
                      (pcVar24 = pcVar24 + -1, bVar1 = param_4 < puVar23, puVar23 = puVar38, bVar1))
              ;
              goto LAB_1006c6cc8;
            }
            puVar30 = (ulong *)((long)puVar23 + 9);
            puVar10 = puVar35 + 1;
            puVar34 = puVar30;
            if (puVar30 < puVar12) {
              if (*puVar10 == *puVar30) {
                lVar31 = 0;
                puVar34 = (ulong *)((long)puVar23 + 0x11);
                puVar10 = (ulong *)(lVar44 + 0x10 + uVar39);
                do {
                  if (puVar12 <= puVar34) goto joined_r0x0001006c6d98;
                  uVar37 = *puVar10;
                  uVar27 = *puVar34;
                  lVar31 = lVar31 + 8;
                  puVar34 = puVar34 + 1;
                  puVar10 = puVar10 + 1;
                } while (uVar37 == uVar27);
                uVar27 = uVar27 ^ uVar37;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar27 = lVar31 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
              }
              else {
                uVar27 = *puVar30 ^ *puVar10;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
              }
            }
            else {
joined_r0x0001006c6d98:
              if (puVar34 < puVar13) {
                if ((int)*puVar10 == (int)*puVar34) {
                  puVar34 = (ulong *)((long)puVar34 + 4);
                  puVar10 = (ulong *)((long)puVar10 + 4);
                }
              }
              if (puVar34 < puVar21) {
                if ((short)*puVar10 == (short)*puVar34) {
                  puVar34 = (ulong *)((long)puVar34 + 2);
                  puVar10 = (ulong *)((long)puVar10 + 2);
                }
              }
              if ((puVar34 < puVar2) && ((char)*puVar10 == (char)*puVar34)) {
                puVar34 = (ulong *)((long)puVar34 + 1);
              }
              uVar27 = (long)puVar34 - (long)puVar30;
            }
            uVar37 = (long)puVar38 - (long)puVar35;
            lVar31 = uVar27 + 8;
            if (param_4 < puVar38) {
              pcVar24 = (char *)(lVar32 + uVar39);
              do {
                puVar38 = puVar23;
                if ((char)*puVar38 != *pcVar24) {
                  uVar27 = ((long)puVar38 + 1) - (long)param_4;
                  puVar35 = (ulong *)param_2[3];
                  puVar38 = (ulong *)((long)puVar38 + 1);
                  goto joined_r0x0001006c6d74;
                }
                lVar31 = lVar31 + 1;
              } while ((pcVar3 < pcVar24) &&
                      (pcVar24 = pcVar24 + -1, puVar23 = (ulong *)((long)puVar38 + -1),
                      param_4 < puVar38));
              uVar27 = (long)puVar38 - (long)param_4;
              puVar35 = (ulong *)param_2[3];
            }
            else {
              uVar27 = (long)puVar38 - (long)param_4;
              puVar35 = (ulong *)param_2[3];
            }
            goto joined_r0x0001006c6d74;
          }
          puVar23 = (ulong *)((long)puVar23 + ((long)puVar23 - (long)param_4 >> 8) + 1);
        }
        else {
          puVar35 = (ulong *)((long)puVar23 + 5);
          lVar31 = -(uVar33 & 0xffffffff);
          puVar30 = (ulong *)((long)puVar35 + lVar31);
          puVar10 = puVar35;
          if (puVar35 < puVar12) {
            if (*puVar30 == *puVar35) {
              lVar40 = 0;
              puVar10 = (ulong *)((long)puVar23 + 0xd);
              puVar30 = (ulong *)((long)puVar23 + 0xd + lVar31);
              do {
                if (puVar12 <= puVar10) goto LAB_1006c683c;
                uVar39 = *puVar30;
                uVar37 = *puVar10;
                lVar40 = lVar40 + 8;
                puVar10 = puVar10 + 1;
                puVar30 = puVar30 + 1;
              } while (uVar39 == uVar37);
              uVar37 = uVar37 ^ uVar39;
              uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar39 = lVar40 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3);
              puVar23 = (ulong *)param_2[3];
            }
            else {
              uVar37 = *puVar35 ^ *puVar30;
              uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
              uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
              uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
              uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
              uVar39 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
              puVar23 = (ulong *)param_2[3];
            }
            uVar37 = (long)puVar38 - (long)param_4;
            if (puVar28 < puVar38) goto LAB_1006c689c;
LAB_1006c6970:
            uVar15 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar15;
            lVar31 = param_2[3];
            if (0x10 < uVar37) {
              uVar15 = param_4[2];
              *(ulong *)(lVar31 + 0x18) = param_4[3];
              *(ulong *)(lVar31 + 0x10) = uVar15;
              uVar15 = param_4[4];
              *(ulong *)(lVar31 + 0x28) = param_4[5];
              *(ulong *)(lVar31 + 0x20) = uVar15;
              if (0x30 < (long)uVar37) {
                puVar23 = (ulong *)(lVar31 + 0x30);
                puVar35 = param_4 + 8;
                do {
                  uVar15 = puVar35[-2];
                  puVar23[1] = puVar35[-1];
                  *puVar23 = uVar15;
                  uVar15 = *puVar35;
                  puVar23[3] = puVar35[1];
                  puVar23[2] = uVar15;
                  puVar23 = puVar23 + 4;
                  puVar35 = puVar35 + 4;
                } while (puVar23 < (ulong *)(lVar31 + uVar37));
              }
              goto LAB_1006c6fd8;
            }
            param_2[3] = lVar31 + uVar37;
            piVar36 = (int *)param_2[1];
          }
          else {
LAB_1006c683c:
            if (puVar10 < puVar13) {
              if ((int)*puVar30 == (int)*puVar10) {
                puVar10 = (ulong *)((long)puVar10 + 4);
                puVar30 = (ulong *)((long)puVar30 + 4);
              }
            }
            if (puVar10 < puVar21) {
              if (*(short *)puVar30 == *(short *)puVar10) {
                puVar10 = (ulong *)((long)puVar10 + 2);
                puVar30 = (ulong *)((long)puVar30 + 2);
              }
            }
            if ((puVar10 < puVar2) && ((char)*puVar30 == (char)*puVar10)) {
              puVar10 = (ulong *)((long)puVar10 + 1);
            }
            uVar39 = (long)puVar10 - (long)puVar35;
            uVar37 = (long)puVar38 - (long)param_4;
            puVar23 = (ulong *)param_2[3];
            if (puVar38 <= puVar28) goto LAB_1006c6970;
LAB_1006c689c:
            puVar30 = puVar23;
            puVar35 = param_4;
            if (param_4 <= puVar28) {
              puVar30 = (ulong *)((long)puVar23 + ((long)puVar28 - (long)param_4));
              uVar15 = *param_4;
              puVar23[1] = param_4[1];
              *puVar23 = uVar15;
              uVar15 = param_4[2];
              puVar23[3] = param_4[3];
              puVar23[2] = uVar15;
              puVar35 = puVar28;
              if (0x20 < (long)puVar28 - (long)param_4) {
                puVar23 = puVar23 + 4;
                puVar10 = param_4 + 6;
                do {
                  uVar15 = puVar10[-2];
                  puVar23[1] = puVar10[-1];
                  *puVar23 = uVar15;
                  uVar15 = *puVar10;
                  puVar23[3] = puVar10[1];
                  puVar23[2] = uVar15;
                  puVar23 = puVar23 + 4;
                  puVar10 = puVar10 + 4;
                } while (puVar23 < puVar30);
              }
            }
            if (puVar35 < puVar38) {
              uVar15 = (long)puVar38 - (long)puVar35;
              if ((7 < uVar15) && (0x3f < (ulong)((long)puVar30 - (long)puVar35))) {
                if (uVar15 < 0x40) {
                  uVar45 = 0;
                }
                else {
                  uVar45 = uVar15 & 0xffffffffffffffc0;
                  puVar23 = puVar30 + 4;
                  puVar10 = puVar35 + 4;
                  uVar22 = uVar45;
                  do {
                    uVar47 = puVar10[-4];
                    uVar49 = puVar10[-1];
                    uVar48 = puVar10[-2];
                    uVar51 = puVar10[1];
                    uVar50 = *puVar10;
                    uVar53 = puVar10[3];
                    uVar52 = puVar10[2];
                    puVar23[-3] = puVar10[-3];
                    puVar23[-4] = uVar47;
                    puVar23[-1] = uVar49;
                    puVar23[-2] = uVar48;
                    puVar23[1] = uVar51;
                    *puVar23 = uVar50;
                    puVar23[3] = uVar53;
                    puVar23[2] = uVar52;
                    uVar22 = uVar22 - 0x40;
                    puVar23 = puVar23 + 8;
                    puVar10 = puVar10 + 8;
                  } while (uVar22 != 0);
                  if (uVar15 == uVar45) goto LAB_1006c6fd8;
                  if ((uVar15 & 0x38) == 0) {
                    puVar35 = (ulong *)((long)puVar35 + uVar45);
                    puVar30 = (ulong *)((long)puVar30 + uVar45);
                    goto LAB_1006c6fc8;
                  }
                }
                uVar22 = uVar15 & 0xfffffffffffffff8;
                lVar31 = uVar45 - uVar22;
                puVar25 = (undefined8 *)((long)puVar30 + uVar45);
                puVar41 = (undefined8 *)((long)puVar35 + uVar45);
                do {
                  *puVar25 = *puVar41;
                  lVar31 = lVar31 + 8;
                  puVar25 = puVar25 + 1;
                  puVar41 = puVar41 + 1;
                } while (lVar31 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar22);
                puVar35 = (ulong *)((long)puVar35 + uVar22);
                if (uVar15 == uVar22) goto LAB_1006c6fd8;
              }
LAB_1006c6fc8:
              do {
                puVar23 = (ulong *)((long)puVar35 + 1);
                *(char *)puVar30 = (char)*puVar35;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar35 = puVar23;
              } while (puVar23 != puVar38);
            }
LAB_1006c6fd8:
            param_2[3] = param_2[3] + uVar37;
            piVar36 = (int *)param_2[1];
            if (0xffff < uVar37) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            }
          }
          lVar31 = uVar39 + 4;
          uVar39 = uVar39 + 1;
          *(short *)(piVar36 + 1) = (short)uVar37;
          *piVar36 = 1;
          uVar37 = uVar33;
          uVar33 = uVar27;
          if (uVar39 >> 0x10 != 0) {
LAB_1006c7024:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
            uVar27 = uVar33;
          }
LAB_1006c7038:
          *(short *)((long)piVar36 + 6) = (short)uVar39;
          piVar36 = piVar36 + 2;
          param_2[1] = (long)piVar36;
          param_4 = (ulong *)((long)puVar38 + lVar31);
          uVar33 = uVar37;
          puVar23 = param_4;
          if (param_4 <= puVar14) {
            uVar16 = iVar6 + 2;
            lVar31 = *(long *)(lVar44 + (ulong)uVar16);
            *(uint *)(lVar46 + ((ulong)(lVar31 * -0x30e44323485a9b9d) >> (uVar20 & 0x3f)) * 4) =
                 uVar16;
            *(int *)(lVar46 + ((ulong)(*(long *)((long)param_4 - 2U) * -0x30e44323485a9b9d) >>
                              (uVar20 & 0x3f)) * 4) = (int)(long *)((long)param_4 - 2U) - iVar43;
            if (param_6 < 7) {
              if (param_6 == 5) {
                *(uint *)(lVar19 + ((ulong)(lVar31 * -0x30e4432345000000) >> (uVar29 & 0x3f)) * 4) =
                     uVar16;
                uVar33 = *(long *)((long)param_4 - 1) * -0x30e4432345000000;
                goto LAB_1006c7140;
              }
              if (param_6 == 6) {
                uVar33 = 0xbf9b0000;
                goto LAB_1006c7120;
              }
LAB_1006c70d4:
              *(uint *)(lVar19 + (ulong)((uint)(*(int *)(lVar44 + (ulong)uVar16) * -0x61c8864f) >>
                                        (ulong)(uVar7 & 0x1f)) * 4) = uVar16;
              uVar33 = (ulong)((uint)(*(int *)((long)param_4 - 1) * -0x61c8864f) >>
                              (ulong)(uVar7 & 0x1f));
            }
            else {
              if (param_6 == 7) {
                uVar33 = 0xbfa56300;
LAB_1006c7120:
                *(uint *)(lVar19 + (lVar31 * (uVar33 | 0xcf1bbcdc00000000) >> (uVar29 & 0x3f)) * 4)
                     = uVar16;
                uVar33 = *(long *)((long)param_4 - 1) * (uVar33 | 0xcf1bbcdc00000000);
              }
              else {
                if (param_6 != 8) goto LAB_1006c70d4;
                *(uint *)(lVar19 + ((ulong)(lVar31 * -0x30e44323485a9b9d) >> (uVar29 & 0x3f)) * 4) =
                     uVar16;
                uVar33 = *(long *)((long)param_4 - 1) * -0x30e44323485a9b9d;
              }
LAB_1006c7140:
              uVar33 = uVar33 >> (uVar29 & 0x3f);
            }
            *(int *)(lVar19 + uVar33 * 4) = ((int)param_4 + -1) - iVar43;
            do {
              uVar39 = uVar37;
              uVar33 = uVar39;
              puVar23 = param_4;
              if ((int)uVar27 == 0) break;
              if ((int)*param_4 != *(int *)((long)param_4 - (uVar27 & 0xffffffff))) break;
              puVar23 = (ulong *)((long)param_4 + 4);
              lVar31 = -(uVar27 & 0xffffffff);
              puVar38 = (ulong *)((long)puVar23 + lVar31);
              puVar35 = puVar23;
              if (puVar23 < puVar12) {
                if (*puVar38 == *puVar23) {
                  lVar40 = 0;
                  puVar35 = (ulong *)((long)param_4 + 0xc);
                  puVar38 = (ulong *)((long)param_4 + 0xc + lVar31);
                  do {
                    if (puVar12 <= puVar35) goto LAB_1006c7214;
                    uVar33 = *puVar38;
                    uVar37 = *puVar35;
                    lVar40 = lVar40 + 8;
                    puVar35 = puVar35 + 1;
                    puVar38 = puVar38 + 1;
                  } while (uVar33 == uVar37);
                  uVar37 = uVar37 ^ uVar33;
                  uVar33 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = lVar40 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
                }
                else {
                  uVar33 = *puVar23 ^ *puVar38;
                  uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
                  uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
                  uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
                  uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10
                  ;
                  uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
                }
                if (param_6 < 7) goto LAB_1006c726c;
LAB_1006c72d4:
                if (param_6 == 7) {
                  uVar37 = *param_4;
                  uVar15 = 0xbfa56300;
                  goto LAB_1006c7318;
                }
                if (param_6 == 8) {
                  uVar37 = *param_4;
                  uVar15 = uVar37 * -0x30e44323485a9b9d;
                  goto LAB_1006c7324;
                }
LAB_1006c72f0:
                uVar15 = (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar7 & 0x1f));
                uVar37 = *param_4;
              }
              else {
LAB_1006c7214:
                if (puVar35 < puVar13) {
                  if ((int)*puVar38 == (int)*puVar35) {
                    puVar35 = (ulong *)((long)puVar35 + 4);
                    puVar38 = (ulong *)((long)puVar38 + 4);
                  }
                }
                if (puVar35 < puVar21) {
                  if (*(short *)puVar38 == *(short *)puVar35) {
                    puVar35 = (ulong *)((long)puVar35 + 2);
                    puVar38 = (ulong *)((long)puVar38 + 2);
                  }
                }
                if ((puVar35 < puVar2) && ((char)*puVar38 == (char)*puVar35)) {
                  puVar35 = (ulong *)((long)puVar35 + 1);
                }
                uVar33 = (long)puVar35 - (long)puVar23;
                if (6 < param_6) goto LAB_1006c72d4;
LAB_1006c726c:
                if (param_6 == 5) {
                  uVar37 = *param_4;
                  uVar15 = uVar37 * -0x30e4432345000000;
                  goto LAB_1006c7324;
                }
                if (param_6 != 6) goto LAB_1006c72f0;
                uVar37 = *param_4;
                uVar15 = 0xbf9b0000;
LAB_1006c7318:
                uVar15 = uVar37 * (uVar15 | 0xcf1bbcdc00000000);
LAB_1006c7324:
                uVar15 = uVar15 >> (uVar29 & 0x3f);
              }
              iVar6 = (int)param_4 - iVar43;
              *(int *)(lVar19 + uVar15 * 4) = iVar6;
              *(int *)(lVar46 + (uVar37 * -0x30e44323485a9b9d >> (uVar20 & 0x3f)) * 4) = iVar6;
              if (param_4 <= puVar28) {
                puVar23 = (ulong *)param_2[3];
                uVar37 = *param_4;
                puVar23[1] = param_4[1];
                *puVar23 = uVar37;
                piVar36 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar36 + 1) = 0;
              *piVar36 = 1;
              if (0xffff < uVar33 + 1) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
              }
              *(short *)((long)piVar36 + 6) = (short)(uVar33 + 1);
              piVar36 = piVar36 + 2;
              param_2[1] = (long)piVar36;
              param_4 = (ulong *)((long)param_4 + uVar33 + 4);
              uVar37 = uVar27;
              uVar33 = uVar27;
              uVar27 = uVar39;
              puVar23 = param_4;
            } while (param_4 <= puVar14);
          }
        }
        uVar18 = (uint)uVar27;
        uVar16 = (uint)uVar33;
      } while (puVar23 < puVar14);
    }
    uVar4 = uVar17;
    if (uVar16 != 0) {
      uVar4 = uVar16;
    }
    *param_3 = uVar4;
    if (uVar18 != 0) {
      uVar17 = uVar18;
    }
  }
  param_3[1] = uVar17;
  return (long)puVar2 - (long)param_4;
}

