// rea decompile_all
// name: FUN_1006c7d20
// address: 0x1006c7d20
// body: available
// range: 0x1006c7d20-0x1006c99bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006c7d20(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong *puVar31;
  int iVar32;
  long lVar33;
  ulong *puVar34;
  ulong *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  int iVar38;
  int iVar39;
  ulong uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  
  lVar30 = *(long *)(param_1 + 0x30);
  iVar39 = *(int *)(param_1 + 200);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar25 = (ulong)(uVar5 + 1);
  lVar33 = *(long *)(param_1 + 8);
  puVar2 = (ulong *)((long)param_4 + param_5);
  iVar32 = (int)lVar33;
  iVar38 = (int)puVar2 - iVar32;
  uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar5 = iVar38 - uVar7;
  if (iVar38 - *(uint *)(param_1 + 0x18) <= uVar7) {
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  puVar34 = puVar2 + -1;
  uVar4 = *param_3;
  uVar7 = param_3[1];
  puVar3 = (ulong *)(lVar33 + (ulong)uVar5);
  puVar14 = param_4;
  if (puVar3 == param_4) {
    puVar14 = (ulong *)((long)param_4 + 1);
  }
  puVar27 = (ulong *)((long)puVar14 + 1);
  uVar11 = (int)puVar14 - (int)puVar3;
  uVar23 = 0;
  if (uVar7 <= uVar11) {
    uVar23 = uVar7;
  }
  uVar22 = 0;
  if (uVar4 <= uVar11) {
    uVar22 = uVar4;
  }
  lVar1 = lVar33 + 2;
  if (iVar39 == 5) {
    if (puVar27 < puVar34) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar35 = (ulong *)((long)puVar2 - 7);
      puVar31 = puVar2 + -4;
      do {
        while( true ) {
          uVar28 = *puVar14;
          uVar17 = uVar28 * -0x30e4432345000000 >> (uVar12 & 0x3f);
          uVar26 = *puVar27;
          uVar19 = uVar26 * -0x30e4432345000000 >> (uVar12 & 0x3f);
          uVar41 = *(uint *)(lVar30 + uVar17 * 4);
          uVar42 = *(uint *)(lVar30 + uVar19 * 4);
          uVar40 = (long)puVar14 - lVar33;
          iVar39 = (int)uVar40;
          *(int *)(lVar30 + uVar17 * 4) = iVar39;
          *(int *)(lVar30 + uVar19 * 4) = (int)puVar27 - iVar32;
          if (uVar22 == 0) break;
          piVar20 = (int *)((long)puVar14 + 2);
          piVar18 = (int *)((long)piVar20 - (ulong)uVar22);
          if (*piVar18 != *piVar20) break;
          iVar38 = 0;
          uVar17 = (ulong)(*(char *)((long)puVar14 + 1) == *(char *)((long)piVar18 + -1));
          puVar24 = (ulong *)((long)piVar20 - uVar17);
          puVar13 = (ulong *)((long)piVar18 - uVar17);
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          uVar41 = uVar22;
          uVar22 = uVar23;
          if (puVar35 <= puVar14) goto LAB_1006c8e20;
LAB_1006c8c78:
          if (*puVar27 != *puVar16) {
            uVar19 = *puVar16 ^ *puVar27;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            uVar26 = (long)puVar24 - (long)param_4;
            puVar14 = (ulong *)param_2[3];
            goto joined_r0x0001006c8d8c;
          }
          lVar29 = 0;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 0xc);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 0xc);
          do {
            if (puVar35 <= puVar14) goto LAB_1006c8e20;
            uVar19 = *puVar27;
            uVar26 = *puVar14;
            lVar29 = lVar29 + 8;
            puVar14 = puVar14 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar19 == uVar26);
          uVar26 = uVar26 ^ uVar19;
          uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = lVar29 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          if (puVar31 < puVar24) goto LAB_1006c8e60;
LAB_1006c8d90:
          uVar28 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar28;
          lVar29 = param_2[3];
          if (uVar26 < 0x11) {
            param_2[3] = lVar29 + uVar26;
            piVar18 = (int *)param_2[1];
          }
          else {
            uVar28 = param_4[2];
            *(ulong *)(lVar29 + 0x18) = param_4[3];
            *(ulong *)(lVar29 + 0x10) = uVar28;
            uVar28 = param_4[4];
            *(ulong *)(lVar29 + 0x28) = param_4[5];
            *(ulong *)(lVar29 + 0x20) = uVar28;
            if (0x30 < (long)uVar26) {
              puVar14 = (ulong *)(lVar29 + 0x30);
              puVar27 = param_4 + 8;
              do {
                uVar28 = puVar27[-2];
                puVar14[1] = puVar27[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar27;
                puVar14[3] = puVar27[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar14 < (ulong *)(lVar29 + uVar26));
            }
LAB_1006c8fc0:
            param_2[3] = param_2[3] + uVar26;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar26) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          uVar28 = uVar17 + uVar19 + 1;
          *(short *)(piVar18 + 1) = (short)uVar26;
          *piVar18 = iVar38 + 1;
          if (0xffff < uVar28) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar28;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + uVar19 + 4);
          uVar23 = uVar22;
          if (puVar14 <= puVar34) {
            *(int *)(lVar30 + ((ulong)(*(long *)(lVar1 + (uVar40 & 0xffffffff)) *
                                      -0x30e4432345000000) >> (uVar12 & 0x3f)) * 4) = iVar39 + 2;
            *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar14 - 2U) * -0x30e4432345000000) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar14 - 2U) - iVar32;
            if ((uVar22 != 0) &&
               (uVar17 = (ulong)uVar22, (int)*puVar14 == *(int *)((long)puVar14 - uVar17))) {
              do {
                uVar23 = uVar41;
                uVar41 = uVar22;
                puVar27 = (ulong *)((long)puVar14 + 4);
                puVar13 = (ulong *)((long)puVar27 + -uVar17);
                puVar24 = puVar27;
                if (puVar27 < puVar35) {
                  if (*puVar13 == *puVar27) {
                    lVar29 = 0;
                    puVar24 = (ulong *)((long)puVar14 + 0xc);
                    puVar13 = (ulong *)((long)puVar14 + 0xc + -uVar17);
                    do {
                      if (puVar35 <= puVar24) goto LAB_1006c90fc;
                      uVar19 = *puVar13;
                      uVar17 = *puVar24;
                      lVar29 = lVar29 + 8;
                      puVar24 = puVar24 + 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar19 == uVar17);
                    uVar17 = uVar17 ^ uVar19;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = lVar29 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                  }
                  else {
                    uVar17 = *puVar27 ^ *puVar13;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006c90fc:
                  if (puVar24 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar13 == (int)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar13 = (ulong *)((long)puVar13 + 4);
                    }
                  }
                  if (puVar24 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar13 == (short)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar13 = (ulong *)((long)puVar13 + 2);
                    }
                  }
                  if ((puVar24 < puVar2) && ((char)*puVar13 == (char)*puVar24)) {
                    puVar24 = (ulong *)((long)puVar24 + 1);
                  }
                  uVar17 = (long)puVar24 - (long)puVar27;
                }
                *(int *)(lVar30 + (*puVar14 * -0x30e4432345000000 >> (uVar12 & 0x3f)) * 4) =
                     (int)puVar14 - iVar32;
                if (puVar31 < puVar14) {
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (0xffff < uVar17 + 1) goto LAB_1006c91fc;
LAB_1006c91bc:
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                else {
                  puVar27 = (ulong *)param_2[3];
                  uVar19 = *puVar14;
                  puVar27[1] = puVar14[1];
                  *puVar27 = uVar19;
                  piVar18 = (int *)param_2[1];
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (uVar17 + 1 < 0x10000) goto LAB_1006c91bc;
LAB_1006c91fc:
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                puVar14 = (ulong *)((long)puVar14 + uVar17 + 4);
              } while (((uVar23 != 0) && (puVar14 <= puVar34)) &&
                      (uVar17 = (ulong)uVar23, uVar22 = uVar23,
                      (int)*puVar14 == *(int *)((long)puVar14 - uVar17)));
            }
          }
          uVar22 = uVar41;
          puVar27 = (ulong *)((long)puVar14 + 1);
          param_4 = puVar14;
          if (puVar34 <= puVar27) goto LAB_1006c927c;
        }
        if (((uVar5 < uVar41) &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar41), puVar24 = puVar14,
            (int)*puVar13 == (int)uVar28)) ||
           ((uVar5 < uVar42 &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar42), puVar24 = puVar27,
            (int)*puVar13 == (int)uVar26)))) {
          uVar41 = (int)puVar24 - (int)puVar13;
          iVar38 = uVar41 + 2;
          uVar17 = 0;
          if (puVar3 < puVar13 && param_4 < puVar24) {
            do {
              puVar27 = (ulong *)((long)puVar13 + -1);
              puVar14 = (ulong *)((long)puVar24 + -1);
              if ((*(char *)puVar14 != *(char *)puVar27) ||
                 (uVar17 = uVar17 + 1, puVar13 = puVar27, puVar24 = puVar14, puVar27 <= puVar3))
              break;
            } while (param_4 < puVar14);
          }
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          if (puVar14 < puVar35) goto LAB_1006c8c78;
LAB_1006c8e20:
          if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar27 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar27 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar14 < puVar2) && ((char)*puVar27 == (char)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          uVar19 = (long)puVar14 - (long)puVar16;
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
joined_r0x0001006c8d8c:
          if (puVar24 <= puVar31) goto LAB_1006c8d90;
LAB_1006c8e60:
          puVar13 = puVar14;
          puVar27 = param_4;
          if (param_4 <= puVar31) {
            puVar13 = (ulong *)((long)puVar14 + ((long)puVar31 - (long)param_4));
            uVar28 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar28;
            uVar28 = param_4[2];
            puVar14[3] = param_4[3];
            puVar14[2] = uVar28;
            puVar27 = puVar31;
            if (0x20 < (long)puVar31 - (long)param_4) {
              puVar14 = puVar14 + 4;
              puVar16 = param_4 + 6;
              do {
                uVar28 = puVar16[-2];
                puVar14[1] = puVar16[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar16;
                puVar14[3] = puVar16[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar16 = puVar16 + 4;
              } while (puVar14 < puVar13);
            }
          }
          if (puVar27 < puVar24) {
            uVar28 = (long)puVar24 - (long)puVar27;
            if ((7 < uVar28) && (0x3f < (ulong)((long)puVar13 - (long)puVar27))) {
              if (uVar28 < 0x40) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar28 & 0xffffffffffffffc0;
                puVar14 = puVar27 + 4;
                puVar16 = puVar13 + 4;
                uVar37 = uVar21;
                do {
                  uVar43 = puVar14[-4];
                  uVar45 = puVar14[-1];
                  uVar44 = puVar14[-2];
                  uVar47 = puVar14[1];
                  uVar46 = *puVar14;
                  uVar49 = puVar14[3];
                  uVar48 = puVar14[2];
                  puVar16[-3] = puVar14[-3];
                  puVar16[-4] = uVar43;
                  puVar16[-1] = uVar45;
                  puVar16[-2] = uVar44;
                  puVar16[1] = uVar47;
                  *puVar16 = uVar46;
                  puVar16[3] = uVar49;
                  puVar16[2] = uVar48;
                  uVar37 = uVar37 - 0x40;
                  puVar14 = puVar14 + 8;
                  puVar16 = puVar16 + 8;
                } while (uVar37 != 0);
                if (uVar28 == uVar21) goto LAB_1006c8fc0;
                if ((uVar28 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar21);
                  puVar13 = (ulong *)((long)puVar13 + uVar21);
                  goto LAB_1006c8fb0;
                }
              }
              uVar37 = uVar28 & 0xfffffffffffffff8;
              lVar29 = uVar21 - uVar37;
              puVar15 = (undefined8 *)((long)puVar13 + uVar21);
              puVar36 = (undefined8 *)((long)puVar27 + uVar21);
              do {
                *puVar15 = *puVar36;
                lVar29 = lVar29 + 8;
                puVar15 = puVar15 + 1;
                puVar36 = puVar36 + 1;
              } while (lVar29 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar37);
              puVar13 = (ulong *)((long)puVar13 + uVar37);
              if (uVar28 == uVar37) goto LAB_1006c8fc0;
            }
LAB_1006c8fb0:
            do {
              puVar14 = (ulong *)((long)puVar27 + 1);
              *(char *)puVar13 = (char)*puVar27;
              puVar27 = puVar14;
              puVar13 = (ulong *)((long)puVar13 + 1);
            } while (puVar14 != puVar24);
          }
          goto LAB_1006c8fc0;
        }
        lVar29 = uVar25 + ((ulong)((long)puVar14 - (long)param_4) >> 7);
        puVar14 = (ulong *)((long)puVar14 + lVar29);
        puVar27 = (ulong *)((long)puVar27 + lVar29);
      } while (puVar27 < puVar34);
    }
  }
  else if (iVar39 == 6) {
    if (puVar27 < puVar34) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar35 = (ulong *)((long)puVar2 - 7);
      puVar31 = puVar2 + -4;
      do {
        while( true ) {
          uVar28 = *puVar14;
          uVar17 = uVar28 * -0x30e4432340650000 >> (uVar12 & 0x3f);
          uVar26 = *puVar27;
          uVar19 = uVar26 * -0x30e4432340650000 >> (uVar12 & 0x3f);
          uVar41 = *(uint *)(lVar30 + uVar17 * 4);
          uVar42 = *(uint *)(lVar30 + uVar19 * 4);
          uVar40 = (long)puVar14 - lVar33;
          iVar39 = (int)uVar40;
          *(int *)(lVar30 + uVar17 * 4) = iVar39;
          *(int *)(lVar30 + uVar19 * 4) = (int)puVar27 - iVar32;
          if (uVar22 == 0) break;
          piVar20 = (int *)((long)puVar14 + 2);
          piVar18 = (int *)((long)piVar20 - (ulong)uVar22);
          if (*piVar18 != *piVar20) break;
          iVar38 = 0;
          uVar17 = (ulong)(*(char *)((long)puVar14 + 1) == *(char *)((long)piVar18 + -1));
          puVar24 = (ulong *)((long)piVar20 - uVar17);
          puVar13 = (ulong *)((long)piVar18 - uVar17);
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          uVar41 = uVar22;
          if (puVar35 <= puVar14) goto LAB_1006c8740;
LAB_1006c8598:
          if (*puVar27 != *puVar16) {
            uVar19 = *puVar16 ^ *puVar27;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            uVar26 = (long)puVar24 - (long)param_4;
            puVar14 = (ulong *)param_2[3];
            goto joined_r0x0001006c86ac;
          }
          lVar29 = 0;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 0xc);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 0xc);
          do {
            if (puVar35 <= puVar14) goto LAB_1006c8740;
            uVar19 = *puVar27;
            uVar26 = *puVar14;
            lVar29 = lVar29 + 8;
            puVar14 = puVar14 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar19 == uVar26);
          uVar26 = uVar26 ^ uVar19;
          uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = lVar29 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          if (puVar31 < puVar24) goto LAB_1006c8780;
LAB_1006c86b0:
          uVar28 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar28;
          lVar29 = param_2[3];
          if (uVar26 < 0x11) {
            param_2[3] = lVar29 + uVar26;
            piVar18 = (int *)param_2[1];
          }
          else {
            uVar28 = param_4[2];
            *(ulong *)(lVar29 + 0x18) = param_4[3];
            *(ulong *)(lVar29 + 0x10) = uVar28;
            uVar28 = param_4[4];
            *(ulong *)(lVar29 + 0x28) = param_4[5];
            *(ulong *)(lVar29 + 0x20) = uVar28;
            if (0x30 < (long)uVar26) {
              puVar14 = (ulong *)(lVar29 + 0x30);
              puVar27 = param_4 + 8;
              do {
                uVar28 = puVar27[-2];
                puVar14[1] = puVar27[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar27;
                puVar14[3] = puVar27[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar14 < (ulong *)(lVar29 + uVar26));
            }
LAB_1006c88e0:
            param_2[3] = param_2[3] + uVar26;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar26) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          uVar28 = uVar17 + uVar19 + 1;
          *(short *)(piVar18 + 1) = (short)uVar26;
          *piVar18 = iVar38 + 1;
          if (0xffff < uVar28) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar28;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + uVar19 + 4);
          uVar22 = uVar41;
          if (puVar14 <= puVar34) {
            *(int *)(lVar30 + ((ulong)(*(long *)(lVar1 + (uVar40 & 0xffffffff)) *
                                      -0x30e4432340650000) >> (uVar12 & 0x3f)) * 4) = iVar39 + 2;
            *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar14 - 2U) * -0x30e4432340650000) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar14 - 2U) - iVar32;
            if ((uVar23 != 0) &&
               (uVar17 = (ulong)uVar23, (int)*puVar14 == *(int *)((long)puVar14 - uVar17))) {
              do {
                uVar22 = uVar23;
                uVar23 = uVar41;
                puVar27 = (ulong *)((long)puVar14 + 4);
                puVar13 = (ulong *)((long)puVar27 + -uVar17);
                puVar24 = puVar27;
                if (puVar27 < puVar35) {
                  if (*puVar13 == *puVar27) {
                    lVar29 = 0;
                    puVar24 = (ulong *)((long)puVar14 + 0xc);
                    puVar13 = (ulong *)((long)puVar14 + 0xc + -uVar17);
                    do {
                      if (puVar35 <= puVar24) goto LAB_1006c8a1c;
                      uVar19 = *puVar13;
                      uVar17 = *puVar24;
                      lVar29 = lVar29 + 8;
                      puVar24 = puVar24 + 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar19 == uVar17);
                    uVar17 = uVar17 ^ uVar19;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = lVar29 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                  }
                  else {
                    uVar17 = *puVar27 ^ *puVar13;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006c8a1c:
                  if (puVar24 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar13 == (int)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar13 = (ulong *)((long)puVar13 + 4);
                    }
                  }
                  if (puVar24 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar13 == (short)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar13 = (ulong *)((long)puVar13 + 2);
                    }
                  }
                  if ((puVar24 < puVar2) && ((char)*puVar13 == (char)*puVar24)) {
                    puVar24 = (ulong *)((long)puVar24 + 1);
                  }
                  uVar17 = (long)puVar24 - (long)puVar27;
                }
                *(int *)(lVar30 + (*puVar14 * -0x30e4432340650000 >> (uVar12 & 0x3f)) * 4) =
                     (int)puVar14 - iVar32;
                if (puVar31 < puVar14) {
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (0xffff < uVar17 + 1) goto LAB_1006c8b1c;
LAB_1006c8adc:
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                else {
                  puVar27 = (ulong *)param_2[3];
                  uVar19 = *puVar14;
                  puVar27[1] = puVar14[1];
                  *puVar27 = uVar19;
                  piVar18 = (int *)param_2[1];
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (uVar17 + 1 < 0x10000) goto LAB_1006c8adc;
LAB_1006c8b1c:
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                puVar14 = (ulong *)((long)puVar14 + uVar17 + 4);
              } while (((uVar23 != 0) && (puVar14 <= puVar34)) &&
                      (uVar17 = (ulong)uVar23, uVar41 = uVar22,
                      (int)*puVar14 == *(int *)((long)puVar14 - uVar17)));
            }
          }
          puVar27 = (ulong *)((long)puVar14 + 1);
          param_4 = puVar14;
          if (puVar34 <= puVar27) goto LAB_1006c927c;
        }
        if (((uVar5 < uVar41) &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar41), puVar24 = puVar14,
            (int)*puVar13 == (int)uVar28)) ||
           ((uVar5 < uVar42 &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar42), puVar24 = puVar27,
            (int)*puVar13 == (int)uVar26)))) {
          uVar41 = (int)puVar24 - (int)puVar13;
          iVar38 = uVar41 + 2;
          uVar17 = 0;
          if (puVar3 < puVar13 && param_4 < puVar24) {
            do {
              puVar27 = (ulong *)((long)puVar13 + -1);
              puVar14 = (ulong *)((long)puVar24 + -1);
              if ((*(char *)puVar14 != *(char *)puVar27) ||
                 (uVar17 = uVar17 + 1, puVar13 = puVar27, puVar24 = puVar14, puVar27 <= puVar3))
              break;
            } while (param_4 < puVar14);
          }
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          uVar23 = uVar22;
          if (puVar14 < puVar35) goto LAB_1006c8598;
LAB_1006c8740:
          if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar27 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar27 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar14 < puVar2) && ((char)*puVar27 == (char)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          uVar19 = (long)puVar14 - (long)puVar16;
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
joined_r0x0001006c86ac:
          if (puVar24 <= puVar31) goto LAB_1006c86b0;
LAB_1006c8780:
          puVar13 = puVar14;
          puVar27 = param_4;
          if (param_4 <= puVar31) {
            puVar13 = (ulong *)((long)puVar14 + ((long)puVar31 - (long)param_4));
            uVar28 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar28;
            uVar28 = param_4[2];
            puVar14[3] = param_4[3];
            puVar14[2] = uVar28;
            puVar27 = puVar31;
            if (0x20 < (long)puVar31 - (long)param_4) {
              puVar14 = puVar14 + 4;
              puVar16 = param_4 + 6;
              do {
                uVar28 = puVar16[-2];
                puVar14[1] = puVar16[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar16;
                puVar14[3] = puVar16[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar16 = puVar16 + 4;
              } while (puVar14 < puVar13);
            }
          }
          if (puVar27 < puVar24) {
            uVar28 = (long)puVar24 - (long)puVar27;
            if ((7 < uVar28) && (0x3f < (ulong)((long)puVar13 - (long)puVar27))) {
              if (uVar28 < 0x40) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar28 & 0xffffffffffffffc0;
                puVar14 = puVar27 + 4;
                puVar16 = puVar13 + 4;
                uVar37 = uVar21;
                do {
                  uVar43 = puVar14[-4];
                  uVar45 = puVar14[-1];
                  uVar44 = puVar14[-2];
                  uVar47 = puVar14[1];
                  uVar46 = *puVar14;
                  uVar49 = puVar14[3];
                  uVar48 = puVar14[2];
                  puVar16[-3] = puVar14[-3];
                  puVar16[-4] = uVar43;
                  puVar16[-1] = uVar45;
                  puVar16[-2] = uVar44;
                  puVar16[1] = uVar47;
                  *puVar16 = uVar46;
                  puVar16[3] = uVar49;
                  puVar16[2] = uVar48;
                  uVar37 = uVar37 - 0x40;
                  puVar14 = puVar14 + 8;
                  puVar16 = puVar16 + 8;
                } while (uVar37 != 0);
                if (uVar28 == uVar21) goto LAB_1006c88e0;
                if ((uVar28 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar21);
                  puVar13 = (ulong *)((long)puVar13 + uVar21);
                  goto LAB_1006c88d0;
                }
              }
              uVar37 = uVar28 & 0xfffffffffffffff8;
              lVar29 = uVar21 - uVar37;
              puVar15 = (undefined8 *)((long)puVar13 + uVar21);
              puVar36 = (undefined8 *)((long)puVar27 + uVar21);
              do {
                *puVar15 = *puVar36;
                lVar29 = lVar29 + 8;
                puVar15 = puVar15 + 1;
                puVar36 = puVar36 + 1;
              } while (lVar29 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar37);
              puVar13 = (ulong *)((long)puVar13 + uVar37);
              if (uVar28 == uVar37) goto LAB_1006c88e0;
            }
LAB_1006c88d0:
            do {
              puVar14 = (ulong *)((long)puVar27 + 1);
              *(char *)puVar13 = (char)*puVar27;
              puVar27 = puVar14;
              puVar13 = (ulong *)((long)puVar13 + 1);
            } while (puVar14 != puVar24);
          }
          goto LAB_1006c88e0;
        }
        lVar29 = uVar25 + ((ulong)((long)puVar14 - (long)param_4) >> 7);
        puVar14 = (ulong *)((long)puVar14 + lVar29);
        puVar27 = (ulong *)((long)puVar27 + lVar29);
      } while (puVar27 < puVar34);
    }
  }
  else if (iVar39 == 7) {
    if (puVar27 < puVar34) {
      uVar12 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      puVar35 = (ulong *)((long)puVar2 - 7);
      puVar31 = puVar2 + -4;
      do {
        while( true ) {
          uVar28 = *puVar14;
          uVar17 = uVar28 * -0x30e44323405a9d00 >> (uVar12 & 0x3f);
          uVar26 = *puVar27;
          uVar19 = uVar26 * -0x30e44323405a9d00 >> (uVar12 & 0x3f);
          uVar41 = *(uint *)(lVar30 + uVar17 * 4);
          uVar42 = *(uint *)(lVar30 + uVar19 * 4);
          uVar40 = (long)puVar14 - lVar33;
          iVar39 = (int)uVar40;
          *(int *)(lVar30 + uVar17 * 4) = iVar39;
          *(int *)(lVar30 + uVar19 * 4) = (int)puVar27 - iVar32;
          if (uVar22 == 0) break;
          piVar20 = (int *)((long)puVar14 + 2);
          piVar18 = (int *)((long)piVar20 - (ulong)uVar22);
          if (*piVar18 != *piVar20) break;
          iVar38 = 0;
          uVar17 = (ulong)(*(char *)((long)puVar14 + 1) == *(char *)((long)piVar18 + -1));
          puVar24 = (ulong *)((long)piVar20 - uVar17);
          puVar13 = (ulong *)((long)piVar18 - uVar17);
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          uVar41 = uVar22;
          uVar22 = uVar23;
          if (puVar35 <= puVar14) goto LAB_1006c8060;
LAB_1006c7eb8:
          if (*puVar27 != *puVar16) {
            uVar19 = *puVar16 ^ *puVar27;
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = (ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3;
            uVar26 = (long)puVar24 - (long)param_4;
            puVar14 = (ulong *)param_2[3];
            goto joined_r0x0001006c7fcc;
          }
          lVar29 = 0;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 0xc);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 0xc);
          do {
            uVar22 = uVar23;
            if (puVar35 <= puVar14) goto LAB_1006c8060;
            uVar19 = *puVar27;
            uVar26 = *puVar14;
            lVar29 = lVar29 + 8;
            puVar14 = puVar14 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar19 == uVar26);
          uVar26 = uVar26 ^ uVar19;
          uVar19 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar19 = lVar29 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          if (puVar31 < puVar24) goto LAB_1006c80a0;
LAB_1006c7fd0:
          uVar28 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar28;
          lVar29 = param_2[3];
          if (uVar26 < 0x11) {
            param_2[3] = lVar29 + uVar26;
            piVar18 = (int *)param_2[1];
          }
          else {
            uVar28 = param_4[2];
            *(ulong *)(lVar29 + 0x18) = param_4[3];
            *(ulong *)(lVar29 + 0x10) = uVar28;
            uVar28 = param_4[4];
            *(ulong *)(lVar29 + 0x28) = param_4[5];
            *(ulong *)(lVar29 + 0x20) = uVar28;
            if (0x30 < (long)uVar26) {
              puVar14 = (ulong *)(lVar29 + 0x30);
              puVar27 = param_4 + 8;
              do {
                uVar28 = puVar27[-2];
                puVar14[1] = puVar27[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar27;
                puVar14[3] = puVar27[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar27 = puVar27 + 4;
              } while (puVar14 < (ulong *)(lVar29 + uVar26));
            }
LAB_1006c8200:
            param_2[3] = param_2[3] + uVar26;
            piVar18 = (int *)param_2[1];
            if (0xffff < uVar26) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
            }
          }
          uVar28 = uVar17 + uVar19 + 1;
          *(short *)(piVar18 + 1) = (short)uVar26;
          *piVar18 = iVar38 + 1;
          if (0xffff < uVar28) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          }
          *(short *)((long)piVar18 + 6) = (short)uVar28;
          piVar18 = piVar18 + 2;
          param_2[1] = (long)piVar18;
          puVar14 = (ulong *)((long)puVar24 + uVar17 + uVar19 + 4);
          uVar22 = uVar41;
          if (puVar14 <= puVar34) {
            *(int *)(lVar30 + ((ulong)(*(long *)(lVar1 + (uVar40 & 0xffffffff)) *
                                      -0x30e44323405a9d00) >> (uVar12 & 0x3f)) * 4) = iVar39 + 2;
            *(int *)(lVar30 + ((ulong)(*(long *)((long)puVar14 - 2U) * -0x30e44323405a9d00) >>
                              (uVar12 & 0x3f)) * 4) = (int)(long *)((long)puVar14 - 2U) - iVar32;
            if ((uVar23 != 0) &&
               (uVar17 = (ulong)uVar23, (int)*puVar14 == *(int *)((long)puVar14 - uVar17))) {
              do {
                uVar22 = uVar23;
                uVar23 = uVar41;
                puVar27 = (ulong *)((long)puVar14 + 4);
                puVar13 = (ulong *)((long)puVar27 + -uVar17);
                puVar24 = puVar27;
                if (puVar27 < puVar35) {
                  if (*puVar13 == *puVar27) {
                    lVar29 = 0;
                    puVar24 = (ulong *)((long)puVar14 + 0xc);
                    puVar13 = (ulong *)((long)puVar14 + 0xc + -uVar17);
                    do {
                      if (puVar35 <= puVar24) goto LAB_1006c833c;
                      uVar19 = *puVar13;
                      uVar17 = *puVar24;
                      lVar29 = lVar29 + 8;
                      puVar24 = puVar24 + 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar19 == uVar17);
                    uVar17 = uVar17 ^ uVar19;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = lVar29 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                  }
                  else {
                    uVar17 = *puVar27 ^ *puVar13;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006c833c:
                  if (puVar24 < (ulong *)((long)puVar2 - 3U)) {
                    if ((int)*puVar13 == (int)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar13 = (ulong *)((long)puVar13 + 4);
                    }
                  }
                  if (puVar24 < (ulong *)((long)puVar2 - 1U)) {
                    if ((short)*puVar13 == (short)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar13 = (ulong *)((long)puVar13 + 2);
                    }
                  }
                  if ((puVar24 < puVar2) && ((char)*puVar13 == (char)*puVar24)) {
                    puVar24 = (ulong *)((long)puVar24 + 1);
                  }
                  uVar17 = (long)puVar24 - (long)puVar27;
                }
                *(int *)(lVar30 + (*puVar14 * -0x30e44323405a9d00 >> (uVar12 & 0x3f)) * 4) =
                     (int)puVar14 - iVar32;
                if (puVar31 < puVar14) {
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (0xffff < uVar17 + 1) goto LAB_1006c843c;
LAB_1006c83fc:
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                else {
                  puVar27 = (ulong *)param_2[3];
                  uVar19 = *puVar14;
                  puVar27[1] = puVar14[1];
                  *puVar27 = uVar19;
                  piVar18 = (int *)param_2[1];
                  *(undefined2 *)(piVar18 + 1) = 0;
                  *piVar18 = 1;
                  if (uVar17 + 1 < 0x10000) goto LAB_1006c83fc;
LAB_1006c843c:
                  *(undefined4 *)(param_2 + 9) = 2;
                  *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
                  *(short *)((long)piVar18 + 6) = (short)uVar17 + 1;
                  piVar18 = piVar18 + 2;
                  param_2[1] = (long)piVar18;
                }
                puVar14 = (ulong *)((long)puVar14 + uVar17 + 4);
              } while (((uVar23 != 0) && (puVar14 <= puVar34)) &&
                      (uVar17 = (ulong)uVar23, uVar41 = uVar22,
                      (int)*puVar14 == *(int *)((long)puVar14 - uVar17)));
            }
          }
          puVar27 = (ulong *)((long)puVar14 + 1);
          param_4 = puVar14;
          if (puVar34 <= puVar27) goto LAB_1006c927c;
        }
        if (((uVar5 < uVar41) &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar41), puVar24 = puVar14,
            (int)*puVar13 == (int)uVar28)) ||
           ((uVar5 < uVar42 &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar42), puVar24 = puVar27,
            (int)*puVar13 == (int)uVar26)))) {
          uVar41 = (int)puVar24 - (int)puVar13;
          iVar38 = uVar41 + 2;
          uVar17 = 0;
          if (puVar3 < puVar13 && param_4 < puVar24) {
            do {
              puVar27 = (ulong *)((long)puVar13 + -1);
              puVar14 = (ulong *)((long)puVar24 + -1);
              if ((*(char *)puVar14 != *(char *)puVar27) ||
                 (uVar17 = uVar17 + 1, puVar13 = puVar27, puVar24 = puVar14, puVar27 <= puVar3))
              break;
            } while (param_4 < puVar14);
          }
          puVar14 = (ulong *)((long)puVar24 + uVar17 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar17 + 4);
          puVar16 = puVar14;
          uVar23 = uVar22;
          if (puVar14 < puVar35) goto LAB_1006c7eb8;
LAB_1006c8060:
          if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar27 == (int)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar27 == (short)*puVar14) {
              puVar14 = (ulong *)((long)puVar14 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar14 < puVar2) && ((char)*puVar27 == (char)*puVar14)) {
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          uVar19 = (long)puVar14 - (long)puVar16;
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          uVar23 = uVar22;
joined_r0x0001006c7fcc:
          if (puVar24 <= puVar31) goto LAB_1006c7fd0;
LAB_1006c80a0:
          puVar13 = puVar14;
          puVar27 = param_4;
          if (param_4 <= puVar31) {
            puVar13 = (ulong *)((long)puVar14 + ((long)puVar31 - (long)param_4));
            uVar28 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar28;
            uVar28 = param_4[2];
            puVar14[3] = param_4[3];
            puVar14[2] = uVar28;
            puVar27 = puVar31;
            if (0x20 < (long)puVar31 - (long)param_4) {
              puVar14 = puVar14 + 4;
              puVar16 = param_4 + 6;
              do {
                uVar28 = puVar16[-2];
                puVar14[1] = puVar16[-1];
                *puVar14 = uVar28;
                uVar28 = *puVar16;
                puVar14[3] = puVar16[1];
                puVar14[2] = uVar28;
                puVar14 = puVar14 + 4;
                puVar16 = puVar16 + 4;
              } while (puVar14 < puVar13);
            }
          }
          if (puVar27 < puVar24) {
            uVar28 = (long)puVar24 - (long)puVar27;
            if ((7 < uVar28) && (0x3f < (ulong)((long)puVar13 - (long)puVar27))) {
              if (uVar28 < 0x40) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar28 & 0xffffffffffffffc0;
                puVar14 = puVar27 + 4;
                puVar16 = puVar13 + 4;
                uVar37 = uVar21;
                do {
                  uVar43 = puVar14[-4];
                  uVar45 = puVar14[-1];
                  uVar44 = puVar14[-2];
                  uVar47 = puVar14[1];
                  uVar46 = *puVar14;
                  uVar49 = puVar14[3];
                  uVar48 = puVar14[2];
                  puVar16[-3] = puVar14[-3];
                  puVar16[-4] = uVar43;
                  puVar16[-1] = uVar45;
                  puVar16[-2] = uVar44;
                  puVar16[1] = uVar47;
                  *puVar16 = uVar46;
                  puVar16[3] = uVar49;
                  puVar16[2] = uVar48;
                  uVar37 = uVar37 - 0x40;
                  puVar14 = puVar14 + 8;
                  puVar16 = puVar16 + 8;
                } while (uVar37 != 0);
                if (uVar28 == uVar21) goto LAB_1006c8200;
                if ((uVar28 & 0x38) == 0) {
                  puVar27 = (ulong *)((long)puVar27 + uVar21);
                  puVar13 = (ulong *)((long)puVar13 + uVar21);
                  goto LAB_1006c81f0;
                }
              }
              uVar37 = uVar28 & 0xfffffffffffffff8;
              lVar29 = uVar21 - uVar37;
              puVar15 = (undefined8 *)((long)puVar13 + uVar21);
              puVar36 = (undefined8 *)((long)puVar27 + uVar21);
              do {
                *puVar15 = *puVar36;
                lVar29 = lVar29 + 8;
                puVar15 = puVar15 + 1;
                puVar36 = puVar36 + 1;
              } while (lVar29 != 0);
              puVar27 = (ulong *)((long)puVar27 + uVar37);
              puVar13 = (ulong *)((long)puVar13 + uVar37);
              if (uVar28 == uVar37) goto LAB_1006c8200;
            }
LAB_1006c81f0:
            do {
              puVar14 = (ulong *)((long)puVar27 + 1);
              *(char *)puVar13 = (char)*puVar27;
              puVar27 = puVar14;
              puVar13 = (ulong *)((long)puVar13 + 1);
            } while (puVar14 != puVar24);
          }
          goto LAB_1006c8200;
        }
        lVar29 = uVar25 + ((ulong)((long)puVar14 - (long)param_4) >> 7);
        puVar14 = (ulong *)((long)puVar14 + lVar29);
        puVar27 = (ulong *)((long)puVar27 + lVar29);
      } while (puVar27 < puVar34);
    }
  }
  else if (puVar27 < puVar34) {
    uVar41 = 0x20 - *(int *)(param_1 + 0xc0);
    puVar35 = (ulong *)((long)puVar2 - 7);
    puVar31 = puVar2 + -4;
    do {
      while( true ) {
        uVar12 = *puVar14;
        uVar8 = (uint)((int)uVar12 * -0x61c8864f) >> (ulong)(uVar41 & 0x1f);
        uVar17 = *puVar27;
        uVar9 = (uint)((int)uVar17 * -0x61c8864f) >> (ulong)(uVar41 & 0x1f);
        uVar42 = *(uint *)(lVar30 + (ulong)uVar8 * 4);
        uVar6 = *(uint *)(lVar30 + (ulong)uVar9 * 4);
        uVar19 = (long)puVar14 - lVar33;
        iVar39 = (int)uVar19;
        *(int *)(lVar30 + (ulong)uVar8 * 4) = iVar39;
        *(int *)(lVar30 + (ulong)uVar9 * 4) = (int)puVar27 - iVar32;
        if (uVar22 != 0) break;
LAB_1006c9408:
        if (((uVar5 < uVar42) &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar42), puVar24 = puVar14,
            (int)*puVar13 == (int)uVar12)) ||
           ((uVar5 < uVar6 &&
            (puVar13 = (ulong *)(lVar33 + (ulong)uVar6), puVar24 = puVar27,
            (int)*puVar13 == (int)uVar17)))) {
          uVar42 = (int)puVar24 - (int)puVar13;
          iVar38 = uVar42 + 2;
          uVar12 = 0;
          if (puVar3 < puVar13 && param_4 < puVar24) {
            do {
              puVar27 = (ulong *)((long)puVar13 + -1);
              puVar14 = (ulong *)((long)puVar24 + -1);
              if ((*(char *)puVar14 != *(char *)puVar27) ||
                 (uVar12 = uVar12 + 1, puVar13 = puVar27, puVar24 = puVar14, puVar27 <= puVar3))
              break;
            } while (param_4 < puVar14);
          }
          puVar14 = (ulong *)((long)puVar24 + uVar12 + 4);
          puVar27 = (ulong *)((long)puVar13 + uVar12 + 4);
          puVar16 = puVar14;
          uVar23 = uVar22;
          if (puVar35 <= puVar14) goto LAB_1006c954c;
LAB_1006c93a4:
          if (*puVar27 != *puVar16) {
            uVar17 = *puVar16 ^ *puVar27;
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
            uVar26 = (long)puVar24 - (long)param_4;
            puVar14 = (ulong *)param_2[3];
            goto joined_r0x0001006c94b8;
          }
          lVar29 = 0;
          puVar14 = (ulong *)((long)puVar24 + uVar12 + 0xc);
          puVar27 = (ulong *)((long)puVar13 + uVar12 + 0xc);
          do {
            if (puVar35 <= puVar14) goto LAB_1006c954c;
            uVar17 = *puVar27;
            uVar26 = *puVar14;
            lVar29 = lVar29 + 8;
            puVar14 = puVar14 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar17 == uVar26);
          uVar26 = uVar26 ^ uVar17;
          uVar17 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = lVar29 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
          uVar26 = (long)puVar24 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          if (puVar24 <= puVar31) goto LAB_1006c94bc;
          goto LAB_1006c958c;
        }
        lVar29 = uVar25 + ((ulong)((long)puVar14 - (long)param_4) >> 7);
        puVar14 = (ulong *)((long)puVar14 + lVar29);
        puVar27 = (ulong *)((long)puVar27 + lVar29);
joined_r0x0001006c99a0:
        if (puVar34 <= puVar27) goto LAB_1006c927c;
      }
      piVar20 = (int *)((long)puVar14 + 2);
      piVar18 = (int *)((long)piVar20 - (ulong)uVar22);
      if (*piVar18 != *piVar20) goto LAB_1006c9408;
      iVar38 = 0;
      uVar12 = (ulong)(*(char *)((long)puVar14 + 1) == *(char *)((long)piVar18 + -1));
      puVar24 = (ulong *)((long)piVar20 - uVar12);
      puVar13 = (ulong *)((long)piVar18 - uVar12);
      puVar14 = (ulong *)((long)puVar24 + uVar12 + 4);
      puVar27 = (ulong *)((long)puVar13 + uVar12 + 4);
      puVar16 = puVar14;
      uVar42 = uVar22;
      if (puVar14 < puVar35) goto LAB_1006c93a4;
LAB_1006c954c:
      if (puVar14 < (ulong *)((long)puVar2 - 3U)) {
        if ((int)*puVar27 == (int)*puVar14) {
          puVar14 = (ulong *)((long)puVar14 + 4);
          puVar27 = (ulong *)((long)puVar27 + 4);
        }
      }
      if (puVar14 < (ulong *)((long)puVar2 - 1U)) {
        if ((short)*puVar27 == (short)*puVar14) {
          puVar14 = (ulong *)((long)puVar14 + 2);
          puVar27 = (ulong *)((long)puVar27 + 2);
        }
      }
      if ((puVar14 < puVar2) && ((char)*puVar27 == (char)*puVar14)) {
        puVar14 = (ulong *)((long)puVar14 + 1);
      }
      uVar17 = (long)puVar14 - (long)puVar16;
      uVar26 = (long)puVar24 - (long)param_4;
      puVar14 = (ulong *)param_2[3];
joined_r0x0001006c94b8:
      if (puVar31 < puVar24) {
LAB_1006c958c:
        puVar13 = puVar14;
        puVar27 = param_4;
        if (param_4 <= puVar31) {
          puVar13 = (ulong *)((long)puVar14 + ((long)puVar31 - (long)param_4));
          uVar28 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar28;
          uVar28 = param_4[2];
          puVar14[3] = param_4[3];
          puVar14[2] = uVar28;
          puVar27 = puVar31;
          if (0x20 < (long)puVar31 - (long)param_4) {
            puVar14 = puVar14 + 4;
            puVar16 = param_4 + 6;
            do {
              uVar28 = puVar16[-2];
              puVar14[1] = puVar16[-1];
              *puVar14 = uVar28;
              uVar28 = *puVar16;
              puVar14[3] = puVar16[1];
              puVar14[2] = uVar28;
              puVar14 = puVar14 + 4;
              puVar16 = puVar16 + 4;
            } while (puVar14 < puVar13);
          }
        }
        if (puVar27 < puVar24) {
          uVar28 = (long)puVar24 - (long)puVar27;
          if ((7 < uVar28) && (0x3f < (ulong)((long)puVar13 - (long)puVar27))) {
            if (uVar28 < 0x40) {
              uVar37 = 0;
            }
            else {
              uVar37 = uVar28 & 0xffffffffffffffc0;
              puVar14 = puVar13 + 4;
              puVar16 = puVar27 + 4;
              uVar40 = uVar37;
              do {
                uVar21 = puVar16[-4];
                uVar44 = puVar16[-1];
                uVar43 = puVar16[-2];
                uVar46 = puVar16[1];
                uVar45 = *puVar16;
                uVar48 = puVar16[3];
                uVar47 = puVar16[2];
                puVar14[-3] = puVar16[-3];
                puVar14[-4] = uVar21;
                puVar14[-1] = uVar44;
                puVar14[-2] = uVar43;
                puVar14[1] = uVar46;
                *puVar14 = uVar45;
                puVar14[3] = uVar48;
                puVar14[2] = uVar47;
                uVar40 = uVar40 - 0x40;
                puVar14 = puVar14 + 8;
                puVar16 = puVar16 + 8;
              } while (uVar40 != 0);
              if (uVar28 == uVar37) goto LAB_1006c96ec;
              if ((uVar28 & 0x38) == 0) {
                puVar27 = (ulong *)((long)puVar27 + uVar37);
                puVar13 = (ulong *)((long)puVar13 + uVar37);
                goto LAB_1006c96dc;
              }
            }
            uVar40 = uVar28 & 0xfffffffffffffff8;
            lVar29 = uVar37 - uVar40;
            puVar15 = (undefined8 *)((long)puVar13 + uVar37);
            puVar36 = (undefined8 *)((long)puVar27 + uVar37);
            do {
              *puVar15 = *puVar36;
              lVar29 = lVar29 + 8;
              puVar15 = puVar15 + 1;
              puVar36 = puVar36 + 1;
            } while (lVar29 != 0);
            puVar13 = (ulong *)((long)puVar13 + uVar40);
            puVar27 = (ulong *)((long)puVar27 + uVar40);
            if (uVar28 == uVar40) goto LAB_1006c96ec;
          }
LAB_1006c96dc:
          do {
            puVar14 = (ulong *)((long)puVar27 + 1);
            *(char *)puVar13 = (char)*puVar27;
            puVar13 = (ulong *)((long)puVar13 + 1);
            puVar27 = puVar14;
          } while (puVar14 != puVar24);
        }
LAB_1006c96ec:
        param_2[3] = param_2[3] + uVar26;
        piVar18 = (int *)param_2[1];
        if (0xffff < uVar26) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
        }
      }
      else {
LAB_1006c94bc:
        uVar28 = *param_4;
        puVar14[1] = param_4[1];
        *puVar14 = uVar28;
        lVar29 = param_2[3];
        if (0x10 < uVar26) {
          uVar28 = param_4[2];
          *(ulong *)(lVar29 + 0x18) = param_4[3];
          *(ulong *)(lVar29 + 0x10) = uVar28;
          uVar28 = param_4[4];
          *(ulong *)(lVar29 + 0x28) = param_4[5];
          *(ulong *)(lVar29 + 0x20) = uVar28;
          if (0x30 < (long)uVar26) {
            puVar14 = (ulong *)(lVar29 + 0x30);
            puVar27 = param_4 + 8;
            do {
              uVar28 = puVar27[-2];
              puVar14[1] = puVar27[-1];
              *puVar14 = uVar28;
              uVar28 = *puVar27;
              puVar14[3] = puVar27[1];
              puVar14[2] = uVar28;
              puVar14 = puVar14 + 4;
              puVar27 = puVar27 + 4;
            } while (puVar14 < (ulong *)(lVar29 + uVar26));
          }
          goto LAB_1006c96ec;
        }
        param_2[3] = lVar29 + uVar26;
        piVar18 = (int *)param_2[1];
      }
      uVar28 = uVar12 + uVar17 + 1;
      *(short *)(piVar18 + 1) = (short)uVar26;
      *piVar18 = iVar38 + 1;
      if (0xffff < uVar28) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
      }
      *(short *)((long)piVar18 + 6) = (short)uVar28;
      piVar18 = piVar18 + 2;
      param_2[1] = (long)piVar18;
      puVar14 = (ulong *)((long)puVar24 + uVar12 + uVar17 + 4);
      puVar27 = (ulong *)((long)puVar14 + 1);
      param_4 = puVar14;
      uVar22 = uVar42;
      if (puVar34 < puVar14) goto joined_r0x0001006c99a0;
      *(int *)(lVar30 + (ulong)((uint)(*(int *)(lVar1 + (uVar19 & 0xffffffff)) * -0x61c8864f) >>
                               (ulong)(uVar41 & 0x1f)) * 4) = iVar39 + 2;
      *(int *)(lVar30 + (ulong)((uint)(*(int *)((long)puVar14 - 2U) * -0x61c8864f) >>
                               (ulong)(uVar41 & 0x1f)) * 4) =
           (int)(int *)((long)puVar14 - 2U) - iVar32;
      if (uVar23 == 0) goto joined_r0x0001006c99a0;
      iVar39 = (int)*puVar14;
      uVar12 = (ulong)uVar23;
      if (iVar39 != *(int *)((long)puVar14 - uVar12)) goto joined_r0x0001006c99a0;
      do {
        uVar22 = uVar23;
        uVar23 = uVar42;
        puVar27 = (ulong *)((long)puVar14 + 4);
        puVar13 = (ulong *)((long)puVar27 + -uVar12);
        iVar38 = (int)puVar14;
        puVar24 = puVar27;
        if (puVar27 < puVar35) {
          if (*puVar13 == *puVar27) {
            lVar29 = 0;
            puVar24 = (ulong *)((long)puVar14 + 0xc);
            puVar13 = (ulong *)((long)puVar14 + 0xc + -uVar12);
            do {
              if (puVar35 <= puVar24) goto LAB_1006c983c;
              uVar17 = *puVar13;
              uVar12 = *puVar24;
              lVar29 = lVar29 + 8;
              puVar24 = puVar24 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar17 == uVar12);
            uVar12 = uVar12 ^ uVar17;
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = lVar29 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            *(int *)(lVar30 + (ulong)((uint)(iVar39 * -0x61c8864f) >> (ulong)(uVar41 & 0x1f)) * 4) =
                 iVar38 - iVar32;
          }
          else {
            uVar12 = *puVar27 ^ *puVar13;
            uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
            uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            *(int *)(lVar30 + (ulong)((uint)(iVar39 * -0x61c8864f) >> (ulong)(uVar41 & 0x1f)) * 4) =
                 iVar38 - iVar32;
          }
        }
        else {
LAB_1006c983c:
          if (puVar24 < (ulong *)((long)puVar2 - 3U)) {
            if ((int)*puVar13 == (int)*puVar24) {
              puVar24 = (ulong *)((long)puVar24 + 4);
              puVar13 = (ulong *)((long)puVar13 + 4);
            }
          }
          if (puVar24 < (ulong *)((long)puVar2 - 1U)) {
            if ((short)*puVar13 == (short)*puVar24) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar13 = (ulong *)((long)puVar13 + 2);
            }
          }
          if ((puVar24 < puVar2) && ((char)*puVar13 == (char)*puVar24)) {
            puVar24 = (ulong *)((long)puVar24 + 1);
          }
          uVar12 = (long)puVar24 - (long)puVar27;
          *(int *)(lVar30 + (ulong)((uint)(iVar39 * -0x61c8864f) >> (ulong)(uVar41 & 0x1f)) * 4) =
               iVar38 - iVar32;
        }
        if (puVar14 <= puVar31) {
          puVar27 = (ulong *)param_2[3];
          uVar17 = *puVar14;
          puVar27[1] = puVar14[1];
          *puVar27 = uVar17;
          piVar18 = (int *)param_2[1];
        }
        *(undefined2 *)(piVar18 + 1) = 0;
        *piVar18 = 1;
        uVar10 = (undefined2)(uVar12 + 1);
        if (uVar12 + 1 < 0x10000) {
          *(undefined2 *)((long)piVar18 + 6) = uVar10;
          param_2[1] = (long)(piVar18 + 2);
        }
        else {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar18 - *param_2) >> 3);
          *(undefined2 *)((long)piVar18 + 6) = uVar10;
          param_2[1] = (long)(piVar18 + 2);
        }
        puVar14 = (ulong *)((long)puVar14 + uVar12 + 4);
        if ((uVar23 == 0) || (piVar18 = piVar18 + 2, puVar34 < puVar14)) break;
        iVar39 = (int)*puVar14;
        uVar12 = (ulong)uVar23;
        uVar42 = uVar22;
      } while (iVar39 == *(int *)((long)puVar14 - uVar12));
      puVar27 = (ulong *)((long)puVar14 + 1);
      param_4 = puVar14;
    } while (puVar27 < puVar34);
  }
LAB_1006c927c:
  if (uVar7 <= uVar11) {
    uVar7 = 0;
  }
  if (uVar4 <= uVar11) {
    uVar4 = uVar7;
  }
  uVar5 = uVar4;
  if (uVar22 != 0) {
    uVar5 = uVar22;
  }
  if (uVar23 != 0) {
    uVar4 = uVar23;
  }
  *param_3 = uVar5;
  param_3[1] = uVar4;
  return (long)puVar2 - (long)param_4;
}

