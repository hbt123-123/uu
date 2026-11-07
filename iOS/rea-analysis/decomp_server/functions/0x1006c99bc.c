// rea decompile_all
// name: FUN_1006c99bc
// address: 0x1006c99bc
// body: available
// range: 0x1006c99bc-0x1006cc6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006c99bc(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int *piVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  char *pcVar29;
  ulong *puVar30;
  int *piVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  long lVar37;
  ulong *puVar38;
  undefined8 *puVar39;
  int iVar40;
  int iVar41;
  ulong *puVar42;
  int iVar43;
  long lVar44;
  int iVar45;
  int iVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  
  iVar17 = *(int *)(param_1 + 200);
  lVar26 = *(long *)(param_1 + 0x30);
  lVar44 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar20 = puVar4 + -1;
  iVar46 = *param_3;
  iVar40 = param_3[1];
  puVar21 = *(ulong **)(param_1 + 0xb0);
  uVar27 = puVar21[6];
  uVar11 = (uint)puVar21[3];
  puVar8 = (ulong *)*puVar21;
  uVar9 = puVar21[1];
  pcVar5 = (char *)(uVar9 + uVar11);
  uVar3 = uVar10 + ((int)uVar9 - (int)puVar8);
  pcVar6 = (char *)(lVar44 + (ulong)uVar10);
  puVar23 = param_4;
  if ((int)puVar8 + ((int)param_4 - (int)pcVar6) == (int)pcVar5) {
    puVar23 = (ulong *)((long)param_4 + 1);
  }
  lVar2 = lVar44 + 2;
  iVar43 = (int)lVar44;
  if (iVar17 == 5) {
    if (puVar23 < puVar20) {
      uVar12 = *(uint *)(param_1 + 0xcc);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar16 = puVar21[0x18];
      puVar21 = puVar4 + -4;
      do {
        uVar22 = *puVar23;
        uVar34 = uVar22 * -0x30e4432345000000 >> (uVar25 & 0x3f);
        uVar13 = *(uint *)(lVar26 + uVar34 * 4);
        uVar28 = (ulong)uVar13;
        uVar19 = (long)puVar23 - lVar44;
        iVar17 = (int)uVar19;
        uVar1 = (iVar17 - iVar46) + 1;
        piVar31 = (int *)(uVar9 + (uVar1 - uVar3));
        if (uVar10 <= uVar1) {
          piVar31 = (int *)(lVar44 + (ulong)uVar1);
        }
        *(int *)(lVar26 + uVar34 * 4) = iVar17;
        if (((uVar10 - 1) - uVar1 < 3) ||
           (puVar42 = (ulong *)((long)puVar23 + 1), *piVar31 != *(int *)puVar42)) {
          if (uVar13 <= uVar10) {
            uVar1 = *(uint *)(uVar27 + (uVar22 * -0x30e4432345000000 >>
                                       ((ulong)(0x40 - (int)uVar16) & 0x3f)) * 4);
            if ((uVar1 <= uVar11) || (piVar31 = (int *)(uVar9 + uVar1), *piVar31 != (int)*puVar23))
            goto LAB_1006cb120;
            piVar18 = (int *)((long)puVar23 + 4);
            FUN_1006c7460(piVar18,piVar31 + 1,puVar4,puVar8,pcVar6);
            piVar18 = piVar18 + 1;
            if (param_4 < puVar23) {
              pcVar29 = (char *)((uVar9 - 1) + (ulong)uVar1);
              do {
                puVar42 = (ulong *)((long)puVar23 + -1);
                if ((*(char *)puVar42 != *pcVar29) ||
                   (piVar18 = (int *)((long)piVar18 + 1), puVar23 = puVar42, pcVar29 <= pcVar5))
                break;
                pcVar29 = pcVar29 + -1;
              } while (param_4 < puVar42);
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar23 <= puVar21) goto LAB_1006cb66c;
LAB_1006cb6f8:
              puVar30 = puVar42;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar30 = (ulong *)((long)puVar42 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar42[1] = param_4[1];
                *puVar42 = uVar28;
                uVar28 = param_4[2];
                puVar42[3] = param_4[3];
                puVar42[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar42 = puVar42 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar28 = puVar33[-2];
                    puVar42[1] = puVar33[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar33;
                    puVar42[3] = puVar33[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar42 < puVar30);
                }
              }
              if (puVar32 < puVar23) {
                uVar28 = (long)puVar23 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar42 = puVar30 + 4;
                    puVar33 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar33[-4];
                      uVar49 = puVar33[-1];
                      uVar48 = puVar33[-2];
                      uVar51 = puVar33[1];
                      uVar50 = *puVar33;
                      uVar53 = puVar33[3];
                      uVar52 = puVar33[2];
                      puVar42[-3] = puVar33[-3];
                      puVar42[-4] = uVar47;
                      puVar42[-1] = uVar49;
                      puVar42[-2] = uVar48;
                      puVar42[1] = uVar51;
                      *puVar42 = uVar50;
                      puVar42[3] = uVar53;
                      puVar42[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar42 = puVar42 + 8;
                      puVar33 = puVar33 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006cbb5c;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar30 = (ulong *)((long)puVar30 + uVar36);
                      goto LAB_1006cbb4c;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006cbb5c;
                }
LAB_1006cbb4c:
                do {
                  puVar42 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar30 = (char)*puVar32;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar32 = puVar42;
                } while (puVar42 != puVar23);
              }
LAB_1006cbb5c:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar21 < puVar23) goto LAB_1006cb6f8;
LAB_1006cb66c:
              uVar28 = *param_4;
              puVar42[1] = param_4[1];
              *puVar42 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar42 = (ulong *)(lVar35 + 0x30);
                  puVar32 = param_4 + 8;
                  do {
                    uVar28 = puVar32[-2];
                    puVar42[1] = puVar32[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar32;
                    puVar42[3] = puVar32[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar32 = puVar32 + 4;
                  } while (puVar42 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006cbb5c;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (iVar17 - uVar3) - uVar1;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            puVar42 = puVar23;
            goto joined_r0x0001006cbbac;
          }
          piVar7 = (int *)(lVar44 + uVar28);
          if (*piVar7 == (int)*puVar23) {
            puVar42 = (ulong *)((long)puVar23 + 4);
            puVar32 = (ulong *)(piVar7 + 1);
            puVar30 = puVar42;
            if (puVar42 < (ulong *)((long)puVar4 - 7U)) {
              if (*puVar32 == *puVar42) {
                lVar35 = 0;
                puVar30 = (ulong *)((long)puVar23 + 0xc);
                puVar32 = (ulong *)(lVar44 + 0xc + uVar28);
                do {
                  if ((ulong *)((long)puVar4 - 7U) <= puVar30) goto LAB_1006cb3a4;
                  uVar34 = *puVar32;
                  uVar22 = *puVar30;
                  lVar35 = lVar35 + 8;
                  puVar30 = puVar30 + 1;
                  puVar32 = puVar32 + 1;
                } while (uVar34 == uVar22);
                uVar22 = uVar22 ^ uVar34;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar35 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar42 ^ *puVar32;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              piVar18 = (int *)(uVar22 + 4);
              if (param_4 < puVar23) goto LAB_1006cb3e8;
LAB_1006cb5b4:
              uVar22 = (long)puVar23 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
              puVar42 = puVar23;
              if (puVar23 <= puVar21) goto LAB_1006cb540;
LAB_1006cb5c8:
              puVar33 = puVar30;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar33 = (ulong *)((long)puVar30 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar30[1] = param_4[1];
                *puVar30 = uVar28;
                uVar28 = param_4[2];
                puVar30[3] = param_4[3];
                puVar30[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar30 = puVar30 + 4;
                  puVar38 = param_4 + 6;
                  do {
                    uVar28 = puVar38[-2];
                    puVar30[1] = puVar38[-1];
                    *puVar30 = uVar28;
                    uVar28 = *puVar38;
                    puVar30[3] = puVar38[1];
                    puVar30[2] = uVar28;
                    puVar30 = puVar30 + 4;
                    puVar38 = puVar38 + 4;
                  } while (puVar30 < puVar33);
                }
              }
              if (puVar32 < puVar42) {
                uVar28 = (long)puVar42 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar33 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar30 = puVar33 + 4;
                    puVar38 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar38[-4];
                      uVar49 = puVar38[-1];
                      uVar48 = puVar38[-2];
                      uVar51 = puVar38[1];
                      uVar50 = *puVar38;
                      uVar53 = puVar38[3];
                      uVar52 = puVar38[2];
                      puVar30[-3] = puVar38[-3];
                      puVar30[-4] = uVar47;
                      puVar30[-1] = uVar49;
                      puVar30[-2] = uVar48;
                      puVar30[1] = uVar51;
                      *puVar30 = uVar50;
                      puVar30[3] = uVar53;
                      puVar30[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar30 = puVar30 + 8;
                      puVar38 = puVar38 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006cbaf4;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar33 = (ulong *)((long)puVar33 + uVar36);
                      goto LAB_1006cbae4;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar33 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar33 = (ulong *)((long)puVar33 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006cbaf4;
                }
LAB_1006cbae4:
                do {
                  puVar30 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar33 = (char)*puVar32;
                  puVar33 = (ulong *)((long)puVar33 + 1);
                  puVar32 = puVar30;
                } while (puVar30 != puVar42);
              }
LAB_1006cbaf4:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
LAB_1006cb3a4:
              if (puVar30 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar32 == (int)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
              }
              if (puVar30 < (ulong *)((long)puVar4 - 1U)) {
                if ((short)*puVar32 == (short)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar30 < puVar4) && ((char)*puVar32 == (char)*puVar30)) {
                puVar30 = (ulong *)((long)puVar30 + 1);
              }
              piVar18 = (int *)((long)puVar30 + (4 - (long)puVar42));
              if (puVar23 <= param_4) goto LAB_1006cb5b4;
LAB_1006cb3e8:
              pcVar29 = (char *)(lVar44 + -1 + uVar28);
              puVar32 = puVar23;
              do {
                puVar42 = (ulong *)((long)puVar32 + -1);
                if (*(char *)puVar42 != *pcVar29) {
                  uVar22 = (long)puVar32 - (long)param_4;
                  puVar30 = (ulong *)param_2[3];
                  puVar42 = puVar32;
                  goto joined_r0x0001006cb53c;
                }
                piVar18 = (int *)((long)piVar18 + 1);
              } while ((pcVar6 < pcVar29) &&
                      (pcVar29 = pcVar29 + -1, puVar32 = puVar42, param_4 < puVar42));
              uVar22 = (long)puVar42 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
joined_r0x0001006cb53c:
              if (puVar21 < puVar42) goto LAB_1006cb5c8;
LAB_1006cb540:
              uVar28 = *param_4;
              puVar30[1] = param_4[1];
              *puVar30 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar32 = (ulong *)(lVar35 + 0x30);
                  puVar30 = param_4 + 8;
                  do {
                    uVar28 = puVar30[-2];
                    puVar32[1] = puVar30[-1];
                    *puVar32 = uVar28;
                    uVar28 = *puVar30;
                    puVar32[3] = puVar30[1];
                    puVar32[2] = uVar28;
                    puVar32 = puVar32 + 4;
                    puVar30 = puVar30 + 4;
                  } while (puVar32 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006cbaf4;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (int)puVar23 - (int)piVar7;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            iVar40 = iVar46;
            if (0xffff < uVar28) goto LAB_1006cb944;
            goto LAB_1006cb95c;
          }
LAB_1006cb120:
          puVar23 = (ulong *)((long)puVar23 + (ulong)uVar12 + ((long)puVar23 - (long)param_4 >> 8));
        }
        else {
          puVar32 = puVar8;
          if (uVar10 <= uVar1) {
            puVar32 = puVar4;
          }
          lVar35 = (long)puVar23 + 5;
          FUN_1006c7460(lVar35,piVar31 + 1,puVar4,puVar32,pcVar6);
          uVar22 = (long)puVar42 - (long)param_4;
          puVar23 = (ulong *)param_2[3];
          if (puVar21 < puVar42) {
            puVar32 = param_4;
            puVar30 = puVar23;
            if (param_4 <= puVar21) {
              puVar30 = (ulong *)((long)puVar23 + ((long)puVar21 - (long)param_4));
              uVar28 = *param_4;
              puVar23[1] = param_4[1];
              *puVar23 = uVar28;
              uVar28 = param_4[2];
              puVar23[3] = param_4[3];
              puVar23[2] = uVar28;
              puVar32 = puVar21;
              if (0x20 < (long)puVar21 - (long)param_4) {
                puVar23 = puVar23 + 4;
                puVar33 = param_4 + 6;
                do {
                  uVar28 = puVar33[-2];
                  puVar23[1] = puVar33[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar33;
                  puVar23[3] = puVar33[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar33 = puVar33 + 4;
                } while (puVar23 < puVar30);
              }
            }
            if (puVar32 < puVar42) {
              uVar28 = (long)puVar42 - (long)puVar32;
              if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                if (uVar28 < 0x40) {
                  uVar36 = 0;
                }
                else {
                  uVar36 = uVar28 & 0xffffffffffffffc0;
                  puVar23 = puVar30 + 4;
                  puVar33 = puVar32 + 4;
                  uVar34 = uVar36;
                  do {
                    uVar47 = puVar33[-4];
                    uVar49 = puVar33[-1];
                    uVar48 = puVar33[-2];
                    uVar51 = puVar33[1];
                    uVar50 = *puVar33;
                    uVar53 = puVar33[3];
                    uVar52 = puVar33[2];
                    puVar23[-3] = puVar33[-3];
                    puVar23[-4] = uVar47;
                    puVar23[-1] = uVar49;
                    puVar23[-2] = uVar48;
                    puVar23[1] = uVar51;
                    *puVar23 = uVar50;
                    puVar23[3] = uVar53;
                    puVar23[2] = uVar52;
                    uVar34 = uVar34 - 0x40;
                    puVar23 = puVar23 + 8;
                    puVar33 = puVar33 + 8;
                  } while (uVar34 != 0);
                  if (uVar28 == uVar36) goto LAB_1006cb900;
                  if ((uVar28 & 0x38) == 0) {
                    puVar32 = (ulong *)((long)puVar32 + uVar36);
                    puVar30 = (ulong *)((long)puVar30 + uVar36);
                    goto LAB_1006cb8f0;
                  }
                }
                uVar34 = uVar28 & 0xfffffffffffffff8;
                lVar37 = uVar36 - uVar34;
                puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                do {
                  *puVar24 = *puVar39;
                  lVar37 = lVar37 + 8;
                  puVar24 = puVar24 + 1;
                  puVar39 = puVar39 + 1;
                } while (lVar37 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar34);
                puVar32 = (ulong *)((long)puVar32 + uVar34);
                if (uVar28 == uVar34) goto LAB_1006cb900;
              }
LAB_1006cb8f0:
              do {
                puVar23 = (ulong *)((long)puVar32 + 1);
                *(char *)puVar30 = (char)*puVar32;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar32 = puVar23;
              } while (puVar23 != puVar42);
            }
LAB_1006cb900:
            param_2[3] = param_2[3] + uVar22;
            piVar31 = (int *)param_2[1];
            if (0xffff < uVar22) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
          }
          else {
            uVar28 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar28;
            lVar37 = param_2[3];
            if (0x10 < uVar22) {
              uVar28 = param_4[2];
              *(ulong *)(lVar37 + 0x18) = param_4[3];
              *(ulong *)(lVar37 + 0x10) = uVar28;
              uVar28 = param_4[4];
              *(ulong *)(lVar37 + 0x28) = param_4[5];
              *(ulong *)(lVar37 + 0x20) = uVar28;
              if (0x30 < (long)uVar22) {
                puVar23 = (ulong *)(lVar37 + 0x30);
                puVar32 = param_4 + 8;
                do {
                  uVar28 = puVar32[-2];
                  puVar23[1] = puVar32[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar32;
                  puVar23[3] = puVar32[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar32 = puVar32 + 4;
                } while (puVar23 < (ulong *)(lVar37 + uVar22));
              }
              goto LAB_1006cb900;
            }
            param_2[3] = lVar37 + uVar22;
            piVar31 = (int *)param_2[1];
          }
          piVar18 = (int *)(lVar35 + 4);
          uVar28 = lVar35 + 1;
          *(short *)(piVar31 + 1) = (short)uVar22;
          *piVar31 = 1;
          iVar45 = iVar46;
          iVar46 = iVar40;
joined_r0x0001006cbbac:
          iVar40 = iVar46;
          if (uVar28 >> 0x10 != 0) {
LAB_1006cb944:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            iVar40 = iVar46;
          }
LAB_1006cb95c:
          iVar46 = iVar45;
          *(short *)((long)piVar31 + 6) = (short)uVar28;
          piVar31 = piVar31 + 2;
          param_2[1] = (long)piVar31;
          puVar23 = (ulong *)((long)puVar42 + (long)piVar18);
          param_4 = puVar23;
          if (puVar23 <= puVar20) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar2 + (uVar19 & 0xffffffff)) *
                                      -0x30e4432345000000) >> (uVar25 & 0x3f)) * 4) = iVar17 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)puVar23 - 2U) * -0x30e4432345000000) >>
                              (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar23 - 2U) - iVar43;
            do {
              iVar45 = iVar46;
              iVar17 = (int)puVar23 - iVar43;
              uVar1 = iVar17 - iVar40;
              lVar35 = uVar9 - uVar3;
              if (uVar10 <= uVar1) {
                lVar35 = lVar44;
              }
              param_4 = puVar23;
              iVar46 = iVar45;
              if (((uVar10 - 1) - uVar1 < 3) || (*(int *)(lVar35 + (ulong)uVar1) != (int)*puVar23))
              break;
              puVar42 = puVar8;
              if (uVar10 <= uVar1) {
                puVar42 = puVar4;
              }
              piVar18 = (int *)((long)puVar23 + 4);
              FUN_1006c7460(piVar18,(int *)(lVar35 + (ulong)uVar1) + 1,puVar4,puVar42,pcVar6);
              if (puVar23 <= puVar21) {
                puVar42 = (ulong *)param_2[3];
                uVar19 = *puVar23;
                puVar42[1] = puVar23[1];
                *puVar42 = uVar19;
                piVar31 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar31 + 1) = 0;
              *piVar31 = 1;
              if (0xffff < (long)piVar18 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
              *(short *)((long)piVar31 + 6) = (short)((long)piVar18 + 1U);
              piVar31 = piVar31 + 2;
              *(int *)(lVar26 + (*puVar23 * -0x30e4432345000000 >> (uVar25 & 0x3f)) * 4) = iVar17;
              param_2[1] = (long)piVar31;
              puVar23 = (ulong *)((long)puVar23 + (long)(piVar18 + 1));
              param_4 = puVar23;
              iVar46 = iVar40;
              iVar40 = iVar45;
            } while (puVar23 <= puVar20);
          }
        }
      } while (puVar23 < puVar20);
    }
  }
  else if (iVar17 == 6) {
    if (puVar23 < puVar20) {
      uVar12 = *(uint *)(param_1 + 0xcc);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar16 = puVar21[0x18];
      puVar21 = puVar4 + -4;
      do {
        uVar22 = *puVar23;
        uVar34 = uVar22 * -0x30e4432340650000 >> (uVar25 & 0x3f);
        uVar13 = *(uint *)(lVar26 + uVar34 * 4);
        uVar28 = (ulong)uVar13;
        uVar19 = (long)puVar23 - lVar44;
        iVar17 = (int)uVar19;
        uVar1 = (iVar17 - iVar46) + 1;
        piVar31 = (int *)(uVar9 + (uVar1 - uVar3));
        if (uVar10 <= uVar1) {
          piVar31 = (int *)(lVar44 + (ulong)uVar1);
        }
        *(int *)(lVar26 + uVar34 * 4) = iVar17;
        if (((uVar10 - 1) - uVar1 < 3) ||
           (puVar42 = (ulong *)((long)puVar23 + 1), *piVar31 != *(int *)puVar42)) {
          if (uVar13 <= uVar10) {
            uVar1 = *(uint *)(uVar27 + (uVar22 * -0x30e4432340650000 >>
                                       ((ulong)(0x40 - (int)uVar16) & 0x3f)) * 4);
            if ((uVar1 <= uVar11) || (piVar31 = (int *)(uVar9 + uVar1), *piVar31 != (int)*puVar23))
            goto LAB_1006ca614;
            piVar18 = (int *)((long)puVar23 + 4);
            FUN_1006c7460(piVar18,piVar31 + 1,puVar4,puVar8,pcVar6);
            piVar18 = piVar18 + 1;
            if (param_4 < puVar23) {
              pcVar29 = (char *)((uVar9 - 1) + (ulong)uVar1);
              do {
                puVar42 = (ulong *)((long)puVar23 + -1);
                if ((*(char *)puVar42 != *pcVar29) ||
                   (piVar18 = (int *)((long)piVar18 + 1), puVar23 = puVar42, pcVar29 <= pcVar5))
                break;
                pcVar29 = pcVar29 + -1;
              } while (param_4 < puVar42);
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar23 <= puVar21) goto LAB_1006cab50;
LAB_1006cabdc:
              puVar30 = puVar42;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar30 = (ulong *)((long)puVar42 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar42[1] = param_4[1];
                *puVar42 = uVar28;
                uVar28 = param_4[2];
                puVar42[3] = param_4[3];
                puVar42[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar42 = puVar42 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar28 = puVar33[-2];
                    puVar42[1] = puVar33[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar33;
                    puVar42[3] = puVar33[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar42 < puVar30);
                }
              }
              if (puVar32 < puVar23) {
                uVar28 = (long)puVar23 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar42 = puVar30 + 4;
                    puVar33 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar33[-4];
                      uVar49 = puVar33[-1];
                      uVar48 = puVar33[-2];
                      uVar51 = puVar33[1];
                      uVar50 = *puVar33;
                      uVar53 = puVar33[3];
                      uVar52 = puVar33[2];
                      puVar42[-3] = puVar33[-3];
                      puVar42[-4] = uVar47;
                      puVar42[-1] = uVar49;
                      puVar42[-2] = uVar48;
                      puVar42[1] = uVar51;
                      *puVar42 = uVar50;
                      puVar42[3] = uVar53;
                      puVar42[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar42 = puVar42 + 8;
                      puVar33 = puVar33 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006cb044;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar30 = (ulong *)((long)puVar30 + uVar36);
                      goto LAB_1006cb034;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006cb044;
                }
LAB_1006cb034:
                do {
                  puVar42 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar30 = (char)*puVar32;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar32 = puVar42;
                } while (puVar42 != puVar23);
              }
LAB_1006cb044:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar21 < puVar23) goto LAB_1006cabdc;
LAB_1006cab50:
              uVar28 = *param_4;
              puVar42[1] = param_4[1];
              *puVar42 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar42 = (ulong *)(lVar35 + 0x30);
                  puVar32 = param_4 + 8;
                  do {
                    uVar28 = puVar32[-2];
                    puVar42[1] = puVar32[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar32;
                    puVar42[3] = puVar32[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar32 = puVar32 + 4;
                  } while (puVar42 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006cb044;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (iVar17 - uVar3) - uVar1;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            puVar42 = puVar23;
            goto joined_r0x0001006cb094;
          }
          piVar7 = (int *)(lVar44 + uVar28);
          if (*piVar7 == (int)*puVar23) {
            puVar42 = (ulong *)((long)puVar23 + 4);
            puVar32 = (ulong *)(piVar7 + 1);
            puVar30 = puVar42;
            if (puVar42 < (ulong *)((long)puVar4 - 7U)) {
              if (*puVar32 == *puVar42) {
                lVar35 = 0;
                puVar30 = (ulong *)((long)puVar23 + 0xc);
                puVar32 = (ulong *)(lVar44 + 0xc + uVar28);
                do {
                  if ((ulong *)((long)puVar4 - 7U) <= puVar30) goto LAB_1006ca890;
                  uVar34 = *puVar32;
                  uVar22 = *puVar30;
                  lVar35 = lVar35 + 8;
                  puVar30 = puVar30 + 1;
                  puVar32 = puVar32 + 1;
                } while (uVar34 == uVar22);
                uVar22 = uVar22 ^ uVar34;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar35 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar42 ^ *puVar32;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              piVar18 = (int *)(uVar22 + 4);
              if (param_4 < puVar23) goto LAB_1006ca8d4;
LAB_1006caa98:
              uVar22 = (long)puVar23 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
              puVar42 = puVar23;
              if (puVar23 <= puVar21) goto LAB_1006caa24;
LAB_1006caaac:
              puVar33 = puVar30;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar33 = (ulong *)((long)puVar30 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar30[1] = param_4[1];
                *puVar30 = uVar28;
                uVar28 = param_4[2];
                puVar30[3] = param_4[3];
                puVar30[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar30 = puVar30 + 4;
                  puVar38 = param_4 + 6;
                  do {
                    uVar28 = puVar38[-2];
                    puVar30[1] = puVar38[-1];
                    *puVar30 = uVar28;
                    uVar28 = *puVar38;
                    puVar30[3] = puVar38[1];
                    puVar30[2] = uVar28;
                    puVar30 = puVar30 + 4;
                    puVar38 = puVar38 + 4;
                  } while (puVar30 < puVar33);
                }
              }
              if (puVar32 < puVar42) {
                uVar28 = (long)puVar42 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar33 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar30 = puVar33 + 4;
                    puVar38 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar38[-4];
                      uVar49 = puVar38[-1];
                      uVar48 = puVar38[-2];
                      uVar51 = puVar38[1];
                      uVar50 = *puVar38;
                      uVar53 = puVar38[3];
                      uVar52 = puVar38[2];
                      puVar30[-3] = puVar38[-3];
                      puVar30[-4] = uVar47;
                      puVar30[-1] = uVar49;
                      puVar30[-2] = uVar48;
                      puVar30[1] = uVar51;
                      *puVar30 = uVar50;
                      puVar30[3] = uVar53;
                      puVar30[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar30 = puVar30 + 8;
                      puVar38 = puVar38 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006cafdc;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar33 = (ulong *)((long)puVar33 + uVar36);
                      goto LAB_1006cafcc;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar33 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar33 = (ulong *)((long)puVar33 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006cafdc;
                }
LAB_1006cafcc:
                do {
                  puVar30 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar33 = (char)*puVar32;
                  puVar33 = (ulong *)((long)puVar33 + 1);
                  puVar32 = puVar30;
                } while (puVar30 != puVar42);
              }
LAB_1006cafdc:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
LAB_1006ca890:
              if (puVar30 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar32 == (int)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
              }
              if (puVar30 < (ulong *)((long)puVar4 - 1U)) {
                if ((short)*puVar32 == (short)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar30 < puVar4) && ((char)*puVar32 == (char)*puVar30)) {
                puVar30 = (ulong *)((long)puVar30 + 1);
              }
              piVar18 = (int *)((long)puVar30 + (4 - (long)puVar42));
              if (puVar23 <= param_4) goto LAB_1006caa98;
LAB_1006ca8d4:
              pcVar29 = (char *)(lVar44 + -1 + uVar28);
              puVar32 = puVar23;
              do {
                puVar42 = (ulong *)((long)puVar32 + -1);
                if (*(char *)puVar42 != *pcVar29) {
                  uVar22 = (long)puVar32 - (long)param_4;
                  puVar30 = (ulong *)param_2[3];
                  puVar42 = puVar32;
                  goto joined_r0x0001006caa20;
                }
                piVar18 = (int *)((long)piVar18 + 1);
              } while ((pcVar6 < pcVar29) &&
                      (pcVar29 = pcVar29 + -1, puVar32 = puVar42, param_4 < puVar42));
              uVar22 = (long)puVar42 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
joined_r0x0001006caa20:
              if (puVar21 < puVar42) goto LAB_1006caaac;
LAB_1006caa24:
              uVar28 = *param_4;
              puVar30[1] = param_4[1];
              *puVar30 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar32 = (ulong *)(lVar35 + 0x30);
                  puVar30 = param_4 + 8;
                  do {
                    uVar28 = puVar30[-2];
                    puVar32[1] = puVar30[-1];
                    *puVar32 = uVar28;
                    uVar28 = *puVar30;
                    puVar32[3] = puVar30[1];
                    puVar32[2] = uVar28;
                    puVar32 = puVar32 + 4;
                    puVar30 = puVar30 + 4;
                  } while (puVar32 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006cafdc;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (int)puVar23 - (int)piVar7;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            iVar40 = iVar46;
            if (0xffff < uVar28) goto LAB_1006cae2c;
            goto LAB_1006cae44;
          }
LAB_1006ca614:
          puVar23 = (ulong *)((long)puVar23 + (ulong)uVar12 + ((long)puVar23 - (long)param_4 >> 8));
        }
        else {
          puVar32 = puVar8;
          if (uVar10 <= uVar1) {
            puVar32 = puVar4;
          }
          lVar35 = (long)puVar23 + 5;
          FUN_1006c7460(lVar35,piVar31 + 1,puVar4,puVar32,pcVar6);
          uVar22 = (long)puVar42 - (long)param_4;
          puVar23 = (ulong *)param_2[3];
          if (puVar21 < puVar42) {
            puVar32 = param_4;
            puVar30 = puVar23;
            if (param_4 <= puVar21) {
              puVar30 = (ulong *)((long)puVar23 + ((long)puVar21 - (long)param_4));
              uVar28 = *param_4;
              puVar23[1] = param_4[1];
              *puVar23 = uVar28;
              uVar28 = param_4[2];
              puVar23[3] = param_4[3];
              puVar23[2] = uVar28;
              puVar32 = puVar21;
              if (0x20 < (long)puVar21 - (long)param_4) {
                puVar23 = puVar23 + 4;
                puVar33 = param_4 + 6;
                do {
                  uVar28 = puVar33[-2];
                  puVar23[1] = puVar33[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar33;
                  puVar23[3] = puVar33[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar33 = puVar33 + 4;
                } while (puVar23 < puVar30);
              }
            }
            if (puVar32 < puVar42) {
              uVar28 = (long)puVar42 - (long)puVar32;
              if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                if (uVar28 < 0x40) {
                  uVar36 = 0;
                }
                else {
                  uVar36 = uVar28 & 0xffffffffffffffc0;
                  puVar23 = puVar30 + 4;
                  puVar33 = puVar32 + 4;
                  uVar34 = uVar36;
                  do {
                    uVar47 = puVar33[-4];
                    uVar49 = puVar33[-1];
                    uVar48 = puVar33[-2];
                    uVar51 = puVar33[1];
                    uVar50 = *puVar33;
                    uVar53 = puVar33[3];
                    uVar52 = puVar33[2];
                    puVar23[-3] = puVar33[-3];
                    puVar23[-4] = uVar47;
                    puVar23[-1] = uVar49;
                    puVar23[-2] = uVar48;
                    puVar23[1] = uVar51;
                    *puVar23 = uVar50;
                    puVar23[3] = uVar53;
                    puVar23[2] = uVar52;
                    uVar34 = uVar34 - 0x40;
                    puVar23 = puVar23 + 8;
                    puVar33 = puVar33 + 8;
                  } while (uVar34 != 0);
                  if (uVar28 == uVar36) goto LAB_1006cade4;
                  if ((uVar28 & 0x38) == 0) {
                    puVar32 = (ulong *)((long)puVar32 + uVar36);
                    puVar30 = (ulong *)((long)puVar30 + uVar36);
                    goto LAB_1006cadd4;
                  }
                }
                uVar34 = uVar28 & 0xfffffffffffffff8;
                lVar37 = uVar36 - uVar34;
                puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                do {
                  *puVar24 = *puVar39;
                  lVar37 = lVar37 + 8;
                  puVar24 = puVar24 + 1;
                  puVar39 = puVar39 + 1;
                } while (lVar37 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar34);
                puVar32 = (ulong *)((long)puVar32 + uVar34);
                if (uVar28 == uVar34) goto LAB_1006cade4;
              }
LAB_1006cadd4:
              do {
                puVar23 = (ulong *)((long)puVar32 + 1);
                *(char *)puVar30 = (char)*puVar32;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar32 = puVar23;
              } while (puVar23 != puVar42);
            }
LAB_1006cade4:
            param_2[3] = param_2[3] + uVar22;
            piVar31 = (int *)param_2[1];
            if (0xffff < uVar22) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
          }
          else {
            uVar28 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar28;
            lVar37 = param_2[3];
            if (0x10 < uVar22) {
              uVar28 = param_4[2];
              *(ulong *)(lVar37 + 0x18) = param_4[3];
              *(ulong *)(lVar37 + 0x10) = uVar28;
              uVar28 = param_4[4];
              *(ulong *)(lVar37 + 0x28) = param_4[5];
              *(ulong *)(lVar37 + 0x20) = uVar28;
              if (0x30 < (long)uVar22) {
                puVar23 = (ulong *)(lVar37 + 0x30);
                puVar32 = param_4 + 8;
                do {
                  uVar28 = puVar32[-2];
                  puVar23[1] = puVar32[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar32;
                  puVar23[3] = puVar32[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar32 = puVar32 + 4;
                } while (puVar23 < (ulong *)(lVar37 + uVar22));
              }
              goto LAB_1006cade4;
            }
            param_2[3] = lVar37 + uVar22;
            piVar31 = (int *)param_2[1];
          }
          piVar18 = (int *)(lVar35 + 4);
          uVar28 = lVar35 + 1;
          *(short *)(piVar31 + 1) = (short)uVar22;
          *piVar31 = 1;
          iVar45 = iVar46;
          iVar46 = iVar40;
joined_r0x0001006cb094:
          iVar40 = iVar46;
          if (uVar28 >> 0x10 != 0) {
LAB_1006cae2c:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            iVar40 = iVar46;
          }
LAB_1006cae44:
          iVar46 = iVar45;
          *(short *)((long)piVar31 + 6) = (short)uVar28;
          piVar31 = piVar31 + 2;
          param_2[1] = (long)piVar31;
          puVar23 = (ulong *)((long)puVar42 + (long)piVar18);
          param_4 = puVar23;
          if (puVar23 <= puVar20) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar2 + (uVar19 & 0xffffffff)) *
                                      -0x30e4432340650000) >> (uVar25 & 0x3f)) * 4) = iVar17 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)puVar23 - 2U) * -0x30e4432340650000) >>
                              (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar23 - 2U) - iVar43;
            do {
              iVar45 = iVar46;
              iVar17 = (int)puVar23 - iVar43;
              uVar1 = iVar17 - iVar40;
              lVar35 = uVar9 - uVar3;
              if (uVar10 <= uVar1) {
                lVar35 = lVar44;
              }
              param_4 = puVar23;
              iVar46 = iVar45;
              if (((uVar10 - 1) - uVar1 < 3) || (*(int *)(lVar35 + (ulong)uVar1) != (int)*puVar23))
              break;
              puVar42 = puVar8;
              if (uVar10 <= uVar1) {
                puVar42 = puVar4;
              }
              piVar18 = (int *)((long)puVar23 + 4);
              FUN_1006c7460(piVar18,(int *)(lVar35 + (ulong)uVar1) + 1,puVar4,puVar42,pcVar6);
              if (puVar23 <= puVar21) {
                puVar42 = (ulong *)param_2[3];
                uVar19 = *puVar23;
                puVar42[1] = puVar23[1];
                *puVar42 = uVar19;
                piVar31 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar31 + 1) = 0;
              *piVar31 = 1;
              if (0xffff < (long)piVar18 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
              *(short *)((long)piVar31 + 6) = (short)((long)piVar18 + 1U);
              piVar31 = piVar31 + 2;
              *(int *)(lVar26 + (*puVar23 * -0x30e4432340650000 >> (uVar25 & 0x3f)) * 4) = iVar17;
              param_2[1] = (long)piVar31;
              puVar23 = (ulong *)((long)puVar23 + (long)(piVar18 + 1));
              param_4 = puVar23;
              iVar46 = iVar40;
              iVar40 = iVar45;
            } while (puVar23 <= puVar20);
          }
        }
      } while (puVar23 < puVar20);
    }
  }
  else if (iVar17 == 7) {
    if (puVar23 < puVar20) {
      uVar12 = *(uint *)(param_1 + 0xcc);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar25 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      uVar16 = puVar21[0x18];
      puVar21 = puVar4 + -4;
      do {
        uVar22 = *puVar23;
        uVar34 = uVar22 * -0x30e44323405a9d00 >> (uVar25 & 0x3f);
        uVar13 = *(uint *)(lVar26 + uVar34 * 4);
        uVar28 = (ulong)uVar13;
        uVar19 = (long)puVar23 - lVar44;
        iVar17 = (int)uVar19;
        uVar1 = (iVar17 - iVar46) + 1;
        piVar31 = (int *)(uVar9 + (uVar1 - uVar3));
        if (uVar10 <= uVar1) {
          piVar31 = (int *)(lVar44 + (ulong)uVar1);
        }
        *(int *)(lVar26 + uVar34 * 4) = iVar17;
        iVar45 = iVar46;
        if (((uVar10 - 1) - uVar1 < 3) ||
           (puVar42 = (ulong *)((long)puVar23 + 1), *piVar31 != *(int *)puVar42)) {
          if (uVar13 <= uVar10) {
            uVar1 = *(uint *)(uVar27 + (uVar22 * -0x30e44323405a9d00 >>
                                       ((ulong)(0x40 - (int)uVar16) & 0x3f)) * 4);
            if ((uVar1 <= uVar11) || (piVar31 = (int *)(uVar9 + uVar1), *piVar31 != (int)*puVar23))
            goto LAB_1006c9af0;
            piVar18 = (int *)((long)puVar23 + 4);
            FUN_1006c7460(piVar18,piVar31 + 1,puVar4,puVar8,pcVar6);
            piVar18 = piVar18 + 1;
            if (param_4 < puVar23) {
              pcVar29 = (char *)((uVar9 - 1) + (ulong)uVar1);
              do {
                puVar42 = (ulong *)((long)puVar23 + -1);
                if ((*(char *)puVar42 != *pcVar29) ||
                   (piVar18 = (int *)((long)piVar18 + 1), puVar23 = puVar42, pcVar29 <= pcVar5))
                break;
                pcVar29 = pcVar29 + -1;
              } while (param_4 < puVar42);
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar23 <= puVar21) goto LAB_1006ca040;
LAB_1006ca0cc:
              puVar30 = puVar42;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar30 = (ulong *)((long)puVar42 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar42[1] = param_4[1];
                *puVar42 = uVar28;
                uVar28 = param_4[2];
                puVar42[3] = param_4[3];
                puVar42[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar42 = puVar42 + 4;
                  puVar33 = param_4 + 6;
                  do {
                    uVar28 = puVar33[-2];
                    puVar42[1] = puVar33[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar33;
                    puVar42[3] = puVar33[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar33 = puVar33 + 4;
                  } while (puVar42 < puVar30);
                }
              }
              if (puVar32 < puVar23) {
                uVar28 = (long)puVar23 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar42 = puVar30 + 4;
                    puVar33 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar33[-4];
                      uVar49 = puVar33[-1];
                      uVar48 = puVar33[-2];
                      uVar51 = puVar33[1];
                      uVar50 = *puVar33;
                      uVar53 = puVar33[3];
                      uVar52 = puVar33[2];
                      puVar42[-3] = puVar33[-3];
                      puVar42[-4] = uVar47;
                      puVar42[-1] = uVar49;
                      puVar42[-2] = uVar48;
                      puVar42[1] = uVar51;
                      *puVar42 = uVar50;
                      puVar42[3] = uVar53;
                      puVar42[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar42 = puVar42 + 8;
                      puVar33 = puVar33 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006ca538;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar30 = (ulong *)((long)puVar30 + uVar36);
                      goto LAB_1006ca528;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar30 = (ulong *)((long)puVar30 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006ca538;
                }
LAB_1006ca528:
                do {
                  puVar42 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar30 = (char)*puVar32;
                  puVar30 = (ulong *)((long)puVar30 + 1);
                  puVar32 = puVar42;
                } while (puVar42 != puVar23);
              }
LAB_1006ca538:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
              uVar22 = (long)puVar23 - (long)param_4;
              puVar42 = (ulong *)param_2[3];
              if (puVar21 < puVar23) goto LAB_1006ca0cc;
LAB_1006ca040:
              uVar28 = *param_4;
              puVar42[1] = param_4[1];
              *puVar42 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar42 = (ulong *)(lVar35 + 0x30);
                  puVar32 = param_4 + 8;
                  do {
                    uVar28 = puVar32[-2];
                    puVar42[1] = puVar32[-1];
                    *puVar42 = uVar28;
                    uVar28 = *puVar32;
                    puVar42[3] = puVar32[1];
                    puVar42[2] = uVar28;
                    puVar42 = puVar42 + 4;
                    puVar32 = puVar32 + 4;
                  } while (puVar42 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006ca538;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (iVar17 - uVar3) - uVar1;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            puVar42 = puVar23;
            goto joined_r0x0001006ca588;
          }
          piVar7 = (int *)(lVar44 + uVar28);
          if (*piVar7 == (int)*puVar23) {
            puVar42 = (ulong *)((long)puVar23 + 4);
            puVar32 = (ulong *)(piVar7 + 1);
            puVar30 = puVar42;
            if (puVar42 < (ulong *)((long)puVar4 - 7U)) {
              if (*puVar32 == *puVar42) {
                lVar35 = 0;
                puVar30 = (ulong *)((long)puVar23 + 0xc);
                puVar32 = (ulong *)(lVar44 + 0xc + uVar28);
                do {
                  if ((ulong *)((long)puVar4 - 7U) <= puVar30) goto LAB_1006c9d78;
                  uVar34 = *puVar32;
                  uVar22 = *puVar30;
                  lVar35 = lVar35 + 8;
                  puVar30 = puVar30 + 1;
                  puVar32 = puVar32 + 1;
                } while (uVar34 == uVar22);
                uVar22 = uVar22 ^ uVar34;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar35 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
              }
              else {
                uVar22 = *puVar42 ^ *puVar32;
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
              }
              piVar18 = (int *)(uVar22 + 4);
              if (param_4 < puVar23) goto LAB_1006c9dbc;
LAB_1006c9f88:
              uVar22 = (long)puVar23 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
              puVar42 = puVar23;
              if (puVar23 <= puVar21) goto LAB_1006c9f14;
LAB_1006c9f9c:
              puVar33 = puVar30;
              puVar32 = param_4;
              if (param_4 <= puVar21) {
                puVar33 = (ulong *)((long)puVar30 + ((long)puVar21 - (long)param_4));
                uVar28 = *param_4;
                puVar30[1] = param_4[1];
                *puVar30 = uVar28;
                uVar28 = param_4[2];
                puVar30[3] = param_4[3];
                puVar30[2] = uVar28;
                puVar32 = puVar21;
                if (0x20 < (long)puVar21 - (long)param_4) {
                  puVar30 = puVar30 + 4;
                  puVar38 = param_4 + 6;
                  do {
                    uVar28 = puVar38[-2];
                    puVar30[1] = puVar38[-1];
                    *puVar30 = uVar28;
                    uVar28 = *puVar38;
                    puVar30[3] = puVar38[1];
                    puVar30[2] = uVar28;
                    puVar30 = puVar30 + 4;
                    puVar38 = puVar38 + 4;
                  } while (puVar30 < puVar33);
                }
              }
              if (puVar32 < puVar42) {
                uVar28 = (long)puVar42 - (long)puVar32;
                if ((7 < uVar28) && (0x3f < (ulong)((long)puVar33 - (long)puVar32))) {
                  if (uVar28 < 0x40) {
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = uVar28 & 0xffffffffffffffc0;
                    puVar30 = puVar33 + 4;
                    puVar38 = puVar32 + 4;
                    uVar34 = uVar36;
                    do {
                      uVar47 = puVar38[-4];
                      uVar49 = puVar38[-1];
                      uVar48 = puVar38[-2];
                      uVar51 = puVar38[1];
                      uVar50 = *puVar38;
                      uVar53 = puVar38[3];
                      uVar52 = puVar38[2];
                      puVar30[-3] = puVar38[-3];
                      puVar30[-4] = uVar47;
                      puVar30[-1] = uVar49;
                      puVar30[-2] = uVar48;
                      puVar30[1] = uVar51;
                      *puVar30 = uVar50;
                      puVar30[3] = uVar53;
                      puVar30[2] = uVar52;
                      uVar34 = uVar34 - 0x40;
                      puVar30 = puVar30 + 8;
                      puVar38 = puVar38 + 8;
                    } while (uVar34 != 0);
                    if (uVar28 == uVar36) goto LAB_1006ca4d0;
                    if ((uVar28 & 0x38) == 0) {
                      puVar32 = (ulong *)((long)puVar32 + uVar36);
                      puVar33 = (ulong *)((long)puVar33 + uVar36);
                      goto LAB_1006ca4c0;
                    }
                  }
                  uVar34 = uVar28 & 0xfffffffffffffff8;
                  lVar35 = uVar36 - uVar34;
                  puVar24 = (undefined8 *)((long)puVar33 + uVar36);
                  puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                  do {
                    *puVar24 = *puVar39;
                    lVar35 = lVar35 + 8;
                    puVar24 = puVar24 + 1;
                    puVar39 = puVar39 + 1;
                  } while (lVar35 != 0);
                  puVar33 = (ulong *)((long)puVar33 + uVar34);
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  if (uVar28 == uVar34) goto LAB_1006ca4d0;
                }
LAB_1006ca4c0:
                do {
                  puVar30 = (ulong *)((long)puVar32 + 1);
                  *(char *)puVar33 = (char)*puVar32;
                  puVar33 = (ulong *)((long)puVar33 + 1);
                  puVar32 = puVar30;
                } while (puVar30 != puVar42);
              }
LAB_1006ca4d0:
              param_2[3] = param_2[3] + uVar22;
              piVar31 = (int *)param_2[1];
              if (0xffff < uVar22) {
                *(undefined4 *)(param_2 + 9) = 1;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
            }
            else {
LAB_1006c9d78:
              if (puVar30 < (ulong *)((long)puVar4 - 3U)) {
                if ((int)*puVar32 == (int)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 4);
                  puVar32 = (ulong *)((long)puVar32 + 4);
                }
              }
              if (puVar30 < (ulong *)((long)puVar4 - 1U)) {
                if ((short)*puVar32 == (short)*puVar30) {
                  puVar30 = (ulong *)((long)puVar30 + 2);
                  puVar32 = (ulong *)((long)puVar32 + 2);
                }
              }
              if ((puVar30 < puVar4) && ((char)*puVar32 == (char)*puVar30)) {
                puVar30 = (ulong *)((long)puVar30 + 1);
              }
              piVar18 = (int *)((long)puVar30 + (4 - (long)puVar42));
              if (puVar23 <= param_4) goto LAB_1006c9f88;
LAB_1006c9dbc:
              pcVar29 = (char *)(lVar44 + -1 + uVar28);
              puVar32 = puVar23;
              do {
                puVar42 = (ulong *)((long)puVar32 + -1);
                if (*(char *)puVar42 != *pcVar29) {
                  uVar22 = (long)puVar32 - (long)param_4;
                  puVar30 = (ulong *)param_2[3];
                  puVar42 = puVar32;
                  goto joined_r0x0001006c9f10;
                }
                piVar18 = (int *)((long)piVar18 + 1);
              } while ((pcVar6 < pcVar29) &&
                      (pcVar29 = pcVar29 + -1, puVar32 = puVar42, param_4 < puVar42));
              uVar22 = (long)puVar42 - (long)param_4;
              puVar30 = (ulong *)param_2[3];
joined_r0x0001006c9f10:
              if (puVar21 < puVar42) goto LAB_1006c9f9c;
LAB_1006c9f14:
              uVar28 = *param_4;
              puVar30[1] = param_4[1];
              *puVar30 = uVar28;
              lVar35 = param_2[3];
              if (0x10 < uVar22) {
                uVar28 = param_4[2];
                *(ulong *)(lVar35 + 0x18) = param_4[3];
                *(ulong *)(lVar35 + 0x10) = uVar28;
                uVar28 = param_4[4];
                *(ulong *)(lVar35 + 0x28) = param_4[5];
                *(ulong *)(lVar35 + 0x20) = uVar28;
                if (0x30 < (long)uVar22) {
                  puVar32 = (ulong *)(lVar35 + 0x30);
                  puVar30 = param_4 + 8;
                  do {
                    uVar28 = puVar30[-2];
                    puVar32[1] = puVar30[-1];
                    *puVar32 = uVar28;
                    uVar28 = *puVar30;
                    puVar32[3] = puVar30[1];
                    puVar32[2] = uVar28;
                    puVar32 = puVar32 + 4;
                    puVar30 = puVar30 + 4;
                  } while (puVar32 < (ulong *)(lVar35 + uVar22));
                }
                goto LAB_1006ca4d0;
              }
              param_2[3] = lVar35 + uVar22;
              piVar31 = (int *)param_2[1];
            }
            iVar45 = (int)puVar23 - (int)piVar7;
            uVar28 = (long)piVar18 - 3;
            *(short *)(piVar31 + 1) = (short)uVar22;
            *piVar31 = iVar45 + 3;
            if (0xffff < uVar28) goto LAB_1006ca318;
            goto LAB_1006ca330;
          }
LAB_1006c9af0:
          puVar23 = (ulong *)((long)puVar23 + (ulong)uVar12 + ((long)puVar23 - (long)param_4 >> 8));
        }
        else {
          puVar32 = puVar8;
          if (uVar10 <= uVar1) {
            puVar32 = puVar4;
          }
          lVar35 = (long)puVar23 + 5;
          FUN_1006c7460(lVar35,piVar31 + 1,puVar4,puVar32,pcVar6);
          uVar22 = (long)puVar42 - (long)param_4;
          puVar23 = (ulong *)param_2[3];
          if (puVar21 < puVar42) {
            puVar32 = param_4;
            puVar30 = puVar23;
            if (param_4 <= puVar21) {
              puVar30 = (ulong *)((long)puVar23 + ((long)puVar21 - (long)param_4));
              uVar28 = *param_4;
              puVar23[1] = param_4[1];
              *puVar23 = uVar28;
              uVar28 = param_4[2];
              puVar23[3] = param_4[3];
              puVar23[2] = uVar28;
              puVar32 = puVar21;
              if (0x20 < (long)puVar21 - (long)param_4) {
                puVar23 = puVar23 + 4;
                puVar33 = param_4 + 6;
                do {
                  uVar28 = puVar33[-2];
                  puVar23[1] = puVar33[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar33;
                  puVar23[3] = puVar33[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar33 = puVar33 + 4;
                } while (puVar23 < puVar30);
              }
            }
            if (puVar32 < puVar42) {
              uVar28 = (long)puVar42 - (long)puVar32;
              if ((7 < uVar28) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                if (uVar28 < 0x40) {
                  uVar36 = 0;
                }
                else {
                  uVar36 = uVar28 & 0xffffffffffffffc0;
                  puVar23 = puVar30 + 4;
                  puVar33 = puVar32 + 4;
                  uVar34 = uVar36;
                  do {
                    uVar47 = puVar33[-4];
                    uVar49 = puVar33[-1];
                    uVar48 = puVar33[-2];
                    uVar51 = puVar33[1];
                    uVar50 = *puVar33;
                    uVar53 = puVar33[3];
                    uVar52 = puVar33[2];
                    puVar23[-3] = puVar33[-3];
                    puVar23[-4] = uVar47;
                    puVar23[-1] = uVar49;
                    puVar23[-2] = uVar48;
                    puVar23[1] = uVar51;
                    *puVar23 = uVar50;
                    puVar23[3] = uVar53;
                    puVar23[2] = uVar52;
                    uVar34 = uVar34 - 0x40;
                    puVar23 = puVar23 + 8;
                    puVar33 = puVar33 + 8;
                  } while (uVar34 != 0);
                  if (uVar28 == uVar36) goto LAB_1006ca2d4;
                  if ((uVar28 & 0x38) == 0) {
                    puVar32 = (ulong *)((long)puVar32 + uVar36);
                    puVar30 = (ulong *)((long)puVar30 + uVar36);
                    goto LAB_1006ca2c4;
                  }
                }
                uVar34 = uVar28 & 0xfffffffffffffff8;
                lVar37 = uVar36 - uVar34;
                puVar24 = (undefined8 *)((long)puVar30 + uVar36);
                puVar39 = (undefined8 *)((long)puVar32 + uVar36);
                do {
                  *puVar24 = *puVar39;
                  lVar37 = lVar37 + 8;
                  puVar24 = puVar24 + 1;
                  puVar39 = puVar39 + 1;
                } while (lVar37 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar34);
                puVar32 = (ulong *)((long)puVar32 + uVar34);
                if (uVar28 == uVar34) goto LAB_1006ca2d4;
              }
LAB_1006ca2c4:
              do {
                puVar23 = (ulong *)((long)puVar32 + 1);
                *(char *)puVar30 = (char)*puVar32;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar32 = puVar23;
              } while (puVar23 != puVar42);
            }
LAB_1006ca2d4:
            param_2[3] = param_2[3] + uVar22;
            piVar31 = (int *)param_2[1];
            if (0xffff < uVar22) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
          }
          else {
            uVar28 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar28;
            lVar37 = param_2[3];
            if (0x10 < uVar22) {
              uVar28 = param_4[2];
              *(ulong *)(lVar37 + 0x18) = param_4[3];
              *(ulong *)(lVar37 + 0x10) = uVar28;
              uVar28 = param_4[4];
              *(ulong *)(lVar37 + 0x28) = param_4[5];
              *(ulong *)(lVar37 + 0x20) = uVar28;
              if (0x30 < (long)uVar22) {
                puVar23 = (ulong *)(lVar37 + 0x30);
                puVar32 = param_4 + 8;
                do {
                  uVar28 = puVar32[-2];
                  puVar23[1] = puVar32[-1];
                  *puVar23 = uVar28;
                  uVar28 = *puVar32;
                  puVar23[3] = puVar32[1];
                  puVar23[2] = uVar28;
                  puVar23 = puVar23 + 4;
                  puVar32 = puVar32 + 4;
                } while (puVar23 < (ulong *)(lVar37 + uVar22));
              }
              goto LAB_1006ca2d4;
            }
            param_2[3] = lVar37 + uVar22;
            piVar31 = (int *)param_2[1];
          }
          piVar18 = (int *)(lVar35 + 4);
          uVar28 = lVar35 + 1;
          *(short *)(piVar31 + 1) = (short)uVar22;
          *piVar31 = 1;
          iVar46 = iVar40;
joined_r0x0001006ca588:
          if (uVar28 >> 0x10 != 0) {
LAB_1006ca318:
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
          }
LAB_1006ca330:
          *(short *)((long)piVar31 + 6) = (short)uVar28;
          piVar31 = piVar31 + 2;
          param_2[1] = (long)piVar31;
          puVar23 = (ulong *)((long)puVar42 + (long)piVar18);
          param_4 = puVar23;
          iVar40 = iVar46;
          if (puVar23 <= puVar20) {
            *(int *)(lVar26 + ((ulong)(*(long *)(lVar2 + (uVar19 & 0xffffffff)) *
                                      -0x30e44323405a9d00) >> (uVar25 & 0x3f)) * 4) = iVar17 + 2;
            *(int *)(lVar26 + ((ulong)(*(long *)((long)puVar23 - 2U) * -0x30e44323405a9d00) >>
                              (uVar25 & 0x3f)) * 4) = (int)(long *)((long)puVar23 - 2U) - iVar43;
            do {
              iVar41 = iVar46;
              iVar46 = iVar45;
              iVar17 = (int)puVar23 - iVar43;
              uVar1 = iVar17 - iVar41;
              lVar35 = uVar9 - uVar3;
              if (uVar10 <= uVar1) {
                lVar35 = lVar44;
              }
              param_4 = puVar23;
              iVar40 = iVar41;
              iVar45 = iVar46;
              if (((uVar10 - 1) - uVar1 < 3) || (*(int *)(lVar35 + (ulong)uVar1) != (int)*puVar23))
              break;
              puVar42 = puVar8;
              if (uVar10 <= uVar1) {
                puVar42 = puVar4;
              }
              piVar18 = (int *)((long)puVar23 + 4);
              FUN_1006c7460(piVar18,(int *)(lVar35 + (ulong)uVar1) + 1,puVar4,puVar42,pcVar6);
              if (puVar23 <= puVar21) {
                puVar42 = (ulong *)param_2[3];
                uVar19 = *puVar23;
                puVar42[1] = puVar23[1];
                *puVar42 = uVar19;
                piVar31 = (int *)param_2[1];
              }
              *(undefined2 *)(piVar31 + 1) = 0;
              *piVar31 = 1;
              if (0xffff < (long)piVar18 + 1U) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
              }
              *(short *)((long)piVar31 + 6) = (short)((long)piVar18 + 1U);
              piVar31 = piVar31 + 2;
              *(int *)(lVar26 + (*puVar23 * -0x30e44323405a9d00 >> (uVar25 & 0x3f)) * 4) = iVar17;
              param_2[1] = (long)piVar31;
              puVar23 = (ulong *)((long)puVar23 + (long)(piVar18 + 1));
              param_4 = puVar23;
              iVar40 = iVar46;
              iVar45 = iVar41;
            } while (puVar23 <= puVar20);
          }
        }
        iVar46 = iVar45;
      } while (puVar23 < puVar20);
    }
  }
  else if (puVar23 < puVar20) {
    uVar12 = *(uint *)(param_1 + 0xcc);
    if (uVar12 < 2) {
      uVar12 = 1;
    }
    uVar1 = 0x20 - *(int *)(param_1 + 0xc0);
    uVar16 = puVar21[0x18];
    puVar21 = puVar4 + -4;
    do {
      uVar15 = (uint)((int)*puVar23 * -0x61c8864f) >> (ulong)(uVar1 & 0x1f);
      uVar14 = *(uint *)(lVar26 + (ulong)uVar15 * 4);
      uVar19 = (ulong)uVar14;
      uVar25 = (long)puVar23 - lVar44;
      iVar17 = (int)uVar25;
      uVar13 = (iVar17 - iVar46) + 1;
      piVar31 = (int *)(uVar9 + (uVar13 - uVar3));
      if (uVar10 <= uVar13) {
        piVar31 = (int *)(lVar44 + (ulong)uVar13);
      }
      *(int *)(lVar26 + (ulong)uVar15 * 4) = iVar17;
      iVar45 = iVar46;
      if (((uVar10 - 1) - uVar13 < 3) ||
         (puVar42 = (ulong *)((long)puVar23 + 1), *piVar31 != *(int *)puVar42)) {
        if (uVar14 <= uVar10) {
          uVar13 = *(uint *)(uVar27 + (ulong)((uint)((int)*puVar23 * -0x61c8864f) >>
                                             (ulong)(0x20U - (int)uVar16 & 0x1f)) * 4);
          if ((uVar13 <= uVar11) || (piVar31 = (int *)(uVar9 + uVar13), *piVar31 != (int)*puVar23))
          goto LAB_1006cbc38;
          piVar18 = (int *)((long)puVar23 + 4);
          FUN_1006c7460(piVar18,piVar31 + 1,puVar4,puVar8,pcVar6);
          piVar18 = piVar18 + 1;
          if (param_4 < puVar23) {
            pcVar29 = (char *)((uVar9 - 1) + (ulong)uVar13);
            do {
              puVar42 = (ulong *)((long)puVar23 + -1);
              if ((*(char *)puVar42 != *pcVar29) ||
                 (piVar18 = (int *)((long)piVar18 + 1), puVar23 = puVar42, pcVar29 <= pcVar5))
              break;
              pcVar29 = pcVar29 + -1;
            } while (param_4 < puVar42);
            uVar19 = (long)puVar23 - (long)param_4;
            puVar42 = (ulong *)param_2[3];
            if (puVar23 <= puVar21) goto LAB_1006cc18c;
LAB_1006cc218:
            puVar30 = puVar42;
            puVar32 = param_4;
            if (param_4 <= puVar21) {
              puVar30 = (ulong *)((long)puVar42 + ((long)puVar21 - (long)param_4));
              uVar22 = *param_4;
              puVar42[1] = param_4[1];
              *puVar42 = uVar22;
              uVar22 = param_4[2];
              puVar42[3] = param_4[3];
              puVar42[2] = uVar22;
              puVar32 = puVar21;
              if (0x20 < (long)puVar21 - (long)param_4) {
                puVar42 = puVar42 + 4;
                puVar33 = param_4 + 6;
                do {
                  uVar22 = puVar33[-2];
                  puVar42[1] = puVar33[-1];
                  *puVar42 = uVar22;
                  uVar22 = *puVar33;
                  puVar42[3] = puVar33[1];
                  puVar42[2] = uVar22;
                  puVar42 = puVar42 + 4;
                  puVar33 = puVar33 + 4;
                } while (puVar42 < puVar30);
              }
            }
            if (puVar32 < puVar23) {
              uVar22 = (long)puVar23 - (long)puVar32;
              if ((7 < uVar22) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
                if (uVar22 < 0x40) {
                  uVar34 = 0;
                }
                else {
                  uVar34 = uVar22 & 0xffffffffffffffc0;
                  puVar42 = puVar30 + 4;
                  puVar33 = puVar32 + 4;
                  uVar28 = uVar34;
                  do {
                    uVar36 = puVar33[-4];
                    uVar48 = puVar33[-1];
                    uVar47 = puVar33[-2];
                    uVar50 = puVar33[1];
                    uVar49 = *puVar33;
                    uVar52 = puVar33[3];
                    uVar51 = puVar33[2];
                    puVar42[-3] = puVar33[-3];
                    puVar42[-4] = uVar36;
                    puVar42[-1] = uVar48;
                    puVar42[-2] = uVar47;
                    puVar42[1] = uVar50;
                    *puVar42 = uVar49;
                    puVar42[3] = uVar52;
                    puVar42[2] = uVar51;
                    uVar28 = uVar28 - 0x40;
                    puVar42 = puVar42 + 8;
                    puVar33 = puVar33 + 8;
                  } while (uVar28 != 0);
                  if (uVar22 == uVar34) goto LAB_1006cc674;
                  if ((uVar22 & 0x38) == 0) {
                    puVar32 = (ulong *)((long)puVar32 + uVar34);
                    puVar30 = (ulong *)((long)puVar30 + uVar34);
                    goto LAB_1006cc664;
                  }
                }
                uVar28 = uVar22 & 0xfffffffffffffff8;
                lVar35 = uVar34 - uVar28;
                puVar24 = (undefined8 *)((long)puVar30 + uVar34);
                puVar39 = (undefined8 *)((long)puVar32 + uVar34);
                do {
                  *puVar24 = *puVar39;
                  lVar35 = lVar35 + 8;
                  puVar24 = puVar24 + 1;
                  puVar39 = puVar39 + 1;
                } while (lVar35 != 0);
                puVar30 = (ulong *)((long)puVar30 + uVar28);
                puVar32 = (ulong *)((long)puVar32 + uVar28);
                if (uVar22 == uVar28) goto LAB_1006cc674;
              }
LAB_1006cc664:
              do {
                puVar42 = (ulong *)((long)puVar32 + 1);
                *(char *)puVar30 = (char)*puVar32;
                puVar30 = (ulong *)((long)puVar30 + 1);
                puVar32 = puVar42;
              } while (puVar42 != puVar23);
            }
LAB_1006cc674:
            param_2[3] = param_2[3] + uVar19;
            piVar31 = (int *)param_2[1];
            if (0xffff < uVar19) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
          }
          else {
            uVar19 = (long)puVar23 - (long)param_4;
            puVar42 = (ulong *)param_2[3];
            if (puVar21 < puVar23) goto LAB_1006cc218;
LAB_1006cc18c:
            uVar22 = *param_4;
            puVar42[1] = param_4[1];
            *puVar42 = uVar22;
            lVar35 = param_2[3];
            if (0x10 < uVar19) {
              uVar22 = param_4[2];
              *(ulong *)(lVar35 + 0x18) = param_4[3];
              *(ulong *)(lVar35 + 0x10) = uVar22;
              uVar22 = param_4[4];
              *(ulong *)(lVar35 + 0x28) = param_4[5];
              *(ulong *)(lVar35 + 0x20) = uVar22;
              if (0x30 < (long)uVar19) {
                puVar42 = (ulong *)(lVar35 + 0x30);
                puVar32 = param_4 + 8;
                do {
                  uVar22 = puVar32[-2];
                  puVar42[1] = puVar32[-1];
                  *puVar42 = uVar22;
                  uVar22 = *puVar32;
                  puVar42[3] = puVar32[1];
                  puVar42[2] = uVar22;
                  puVar42 = puVar42 + 4;
                  puVar32 = puVar32 + 4;
                } while (puVar42 < (ulong *)(lVar35 + uVar19));
              }
              goto LAB_1006cc674;
            }
            param_2[3] = lVar35 + uVar19;
            piVar31 = (int *)param_2[1];
          }
          iVar45 = (iVar17 - uVar3) - uVar13;
          uVar22 = (long)piVar18 - 3;
          *(short *)(piVar31 + 1) = (short)uVar19;
          *piVar31 = iVar45 + 3;
          puVar42 = puVar23;
          goto joined_r0x0001006cc6c4;
        }
        piVar7 = (int *)(lVar44 + uVar19);
        if (*piVar7 == (int)*puVar23) {
          puVar42 = (ulong *)((long)puVar23 + 4);
          puVar32 = (ulong *)(piVar7 + 1);
          puVar30 = puVar42;
          if (puVar42 < (ulong *)((long)puVar4 - 7U)) {
            if (*puVar32 == *puVar42) {
              lVar35 = 0;
              puVar30 = (ulong *)((long)puVar23 + 0xc);
              puVar32 = (ulong *)(lVar44 + 0xc + uVar19);
              do {
                if ((ulong *)((long)puVar4 - 7U) <= puVar30) goto LAB_1006cbec4;
                uVar28 = *puVar32;
                uVar22 = *puVar30;
                lVar35 = lVar35 + 8;
                puVar30 = puVar30 + 1;
                puVar32 = puVar32 + 1;
              } while (uVar28 == uVar22);
              uVar22 = uVar22 ^ uVar28;
              uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = lVar35 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
            }
            else {
              uVar22 = *puVar42 ^ *puVar32;
              uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
              uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
              uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
              uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
              uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
            }
            piVar18 = (int *)(uVar22 + 4);
            if (param_4 < puVar23) goto LAB_1006cbf08;
LAB_1006cc0d4:
            uVar19 = (long)puVar23 - (long)param_4;
            puVar30 = (ulong *)param_2[3];
            puVar42 = puVar23;
            if (puVar23 <= puVar21) goto LAB_1006cc060;
LAB_1006cc0e8:
            puVar33 = puVar30;
            puVar32 = param_4;
            if (param_4 <= puVar21) {
              puVar33 = (ulong *)((long)puVar30 + ((long)puVar21 - (long)param_4));
              uVar22 = *param_4;
              puVar30[1] = param_4[1];
              *puVar30 = uVar22;
              uVar22 = param_4[2];
              puVar30[3] = param_4[3];
              puVar30[2] = uVar22;
              puVar32 = puVar21;
              if (0x20 < (long)puVar21 - (long)param_4) {
                puVar30 = puVar30 + 4;
                puVar38 = param_4 + 6;
                do {
                  uVar22 = puVar38[-2];
                  puVar30[1] = puVar38[-1];
                  *puVar30 = uVar22;
                  uVar22 = *puVar38;
                  puVar30[3] = puVar38[1];
                  puVar30[2] = uVar22;
                  puVar30 = puVar30 + 4;
                  puVar38 = puVar38 + 4;
                } while (puVar30 < puVar33);
              }
            }
            if (puVar32 < puVar42) {
              uVar22 = (long)puVar42 - (long)puVar32;
              if ((7 < uVar22) && (0x3f < (ulong)((long)puVar33 - (long)puVar32))) {
                if (uVar22 < 0x40) {
                  uVar34 = 0;
                }
                else {
                  uVar34 = uVar22 & 0xffffffffffffffc0;
                  puVar30 = puVar33 + 4;
                  puVar38 = puVar32 + 4;
                  uVar28 = uVar34;
                  do {
                    uVar36 = puVar38[-4];
                    uVar48 = puVar38[-1];
                    uVar47 = puVar38[-2];
                    uVar50 = puVar38[1];
                    uVar49 = *puVar38;
                    uVar52 = puVar38[3];
                    uVar51 = puVar38[2];
                    puVar30[-3] = puVar38[-3];
                    puVar30[-4] = uVar36;
                    puVar30[-1] = uVar48;
                    puVar30[-2] = uVar47;
                    puVar30[1] = uVar50;
                    *puVar30 = uVar49;
                    puVar30[3] = uVar52;
                    puVar30[2] = uVar51;
                    uVar28 = uVar28 - 0x40;
                    puVar30 = puVar30 + 8;
                    puVar38 = puVar38 + 8;
                  } while (uVar28 != 0);
                  if (uVar22 == uVar34) goto LAB_1006cc60c;
                  if ((uVar22 & 0x38) == 0) {
                    puVar32 = (ulong *)((long)puVar32 + uVar34);
                    puVar33 = (ulong *)((long)puVar33 + uVar34);
                    goto LAB_1006cc5fc;
                  }
                }
                uVar28 = uVar22 & 0xfffffffffffffff8;
                lVar35 = uVar34 - uVar28;
                puVar24 = (undefined8 *)((long)puVar33 + uVar34);
                puVar39 = (undefined8 *)((long)puVar32 + uVar34);
                do {
                  *puVar24 = *puVar39;
                  lVar35 = lVar35 + 8;
                  puVar24 = puVar24 + 1;
                  puVar39 = puVar39 + 1;
                } while (lVar35 != 0);
                puVar33 = (ulong *)((long)puVar33 + uVar28);
                puVar32 = (ulong *)((long)puVar32 + uVar28);
                if (uVar22 == uVar28) goto LAB_1006cc60c;
              }
LAB_1006cc5fc:
              do {
                puVar30 = (ulong *)((long)puVar32 + 1);
                *(char *)puVar33 = (char)*puVar32;
                puVar33 = (ulong *)((long)puVar33 + 1);
                puVar32 = puVar30;
              } while (puVar30 != puVar42);
            }
LAB_1006cc60c:
            param_2[3] = param_2[3] + uVar19;
            piVar31 = (int *)param_2[1];
            if (0xffff < uVar19) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
          }
          else {
LAB_1006cbec4:
            if (puVar30 < (ulong *)((long)puVar4 - 3U)) {
              if ((int)*puVar32 == (int)*puVar30) {
                puVar30 = (ulong *)((long)puVar30 + 4);
                puVar32 = (ulong *)((long)puVar32 + 4);
              }
            }
            if (puVar30 < (ulong *)((long)puVar4 - 1U)) {
              if ((short)*puVar32 == (short)*puVar30) {
                puVar30 = (ulong *)((long)puVar30 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
            if ((puVar30 < puVar4) && ((char)*puVar32 == (char)*puVar30)) {
              puVar30 = (ulong *)((long)puVar30 + 1);
            }
            piVar18 = (int *)((long)puVar30 + (4 - (long)puVar42));
            if (puVar23 <= param_4) goto LAB_1006cc0d4;
LAB_1006cbf08:
            pcVar29 = (char *)(lVar44 + -1 + uVar19);
            puVar32 = puVar23;
            do {
              puVar42 = (ulong *)((long)puVar32 + -1);
              if (*(char *)puVar42 != *pcVar29) {
                uVar19 = (long)puVar32 - (long)param_4;
                puVar30 = (ulong *)param_2[3];
                puVar42 = puVar32;
                goto joined_r0x0001006cc05c;
              }
              piVar18 = (int *)((long)piVar18 + 1);
            } while ((pcVar6 < pcVar29) &&
                    (pcVar29 = pcVar29 + -1, puVar32 = puVar42, param_4 < puVar42));
            uVar19 = (long)puVar42 - (long)param_4;
            puVar30 = (ulong *)param_2[3];
joined_r0x0001006cc05c:
            if (puVar21 < puVar42) goto LAB_1006cc0e8;
LAB_1006cc060:
            uVar22 = *param_4;
            puVar30[1] = param_4[1];
            *puVar30 = uVar22;
            lVar35 = param_2[3];
            if (0x10 < uVar19) {
              uVar22 = param_4[2];
              *(ulong *)(lVar35 + 0x18) = param_4[3];
              *(ulong *)(lVar35 + 0x10) = uVar22;
              uVar22 = param_4[4];
              *(ulong *)(lVar35 + 0x28) = param_4[5];
              *(ulong *)(lVar35 + 0x20) = uVar22;
              if (0x30 < (long)uVar19) {
                puVar32 = (ulong *)(lVar35 + 0x30);
                puVar30 = param_4 + 8;
                do {
                  uVar22 = puVar30[-2];
                  puVar32[1] = puVar30[-1];
                  *puVar32 = uVar22;
                  uVar22 = *puVar30;
                  puVar32[3] = puVar30[1];
                  puVar32[2] = uVar22;
                  puVar32 = puVar32 + 4;
                  puVar30 = puVar30 + 4;
                } while (puVar32 < (ulong *)(lVar35 + uVar19));
              }
              goto LAB_1006cc60c;
            }
            param_2[3] = lVar35 + uVar19;
            piVar31 = (int *)param_2[1];
          }
          iVar45 = (int)puVar23 - (int)piVar7;
          uVar22 = (long)piVar18 - 3;
          *(short *)(piVar31 + 1) = (short)uVar19;
          *piVar31 = iVar45 + 3;
          if (0xffff < uVar22) goto LAB_1006cc464;
          goto LAB_1006cc47c;
        }
LAB_1006cbc38:
        puVar23 = (ulong *)((long)puVar23 + (ulong)uVar12 + ((long)puVar23 - (long)param_4 >> 8));
      }
      else {
        puVar32 = puVar8;
        if (uVar10 <= uVar13) {
          puVar32 = puVar4;
        }
        lVar35 = (long)puVar23 + 5;
        FUN_1006c7460(lVar35,piVar31 + 1,puVar4,puVar32,pcVar6);
        uVar19 = (long)puVar42 - (long)param_4;
        puVar23 = (ulong *)param_2[3];
        if (puVar21 < puVar42) {
          puVar32 = param_4;
          puVar30 = puVar23;
          if (param_4 <= puVar21) {
            puVar30 = (ulong *)((long)puVar23 + ((long)puVar21 - (long)param_4));
            uVar22 = *param_4;
            puVar23[1] = param_4[1];
            *puVar23 = uVar22;
            uVar22 = param_4[2];
            puVar23[3] = param_4[3];
            puVar23[2] = uVar22;
            puVar32 = puVar21;
            if (0x20 < (long)puVar21 - (long)param_4) {
              puVar23 = puVar23 + 4;
              puVar33 = param_4 + 6;
              do {
                uVar22 = puVar33[-2];
                puVar23[1] = puVar33[-1];
                *puVar23 = uVar22;
                uVar22 = *puVar33;
                puVar23[3] = puVar33[1];
                puVar23[2] = uVar22;
                puVar23 = puVar23 + 4;
                puVar33 = puVar33 + 4;
              } while (puVar23 < puVar30);
            }
          }
          if (puVar32 < puVar42) {
            uVar22 = (long)puVar42 - (long)puVar32;
            if ((7 < uVar22) && (0x3f < (ulong)((long)puVar30 - (long)puVar32))) {
              if (uVar22 < 0x40) {
                uVar34 = 0;
              }
              else {
                uVar34 = uVar22 & 0xffffffffffffffc0;
                puVar23 = puVar30 + 4;
                puVar33 = puVar32 + 4;
                uVar28 = uVar34;
                do {
                  uVar36 = puVar33[-4];
                  uVar48 = puVar33[-1];
                  uVar47 = puVar33[-2];
                  uVar50 = puVar33[1];
                  uVar49 = *puVar33;
                  uVar52 = puVar33[3];
                  uVar51 = puVar33[2];
                  puVar23[-3] = puVar33[-3];
                  puVar23[-4] = uVar36;
                  puVar23[-1] = uVar48;
                  puVar23[-2] = uVar47;
                  puVar23[1] = uVar50;
                  *puVar23 = uVar49;
                  puVar23[3] = uVar52;
                  puVar23[2] = uVar51;
                  uVar28 = uVar28 - 0x40;
                  puVar23 = puVar23 + 8;
                  puVar33 = puVar33 + 8;
                } while (uVar28 != 0);
                if (uVar22 == uVar34) goto LAB_1006cc420;
                if ((uVar22 & 0x38) == 0) {
                  puVar32 = (ulong *)((long)puVar32 + uVar34);
                  puVar30 = (ulong *)((long)puVar30 + uVar34);
                  goto LAB_1006cc410;
                }
              }
              uVar28 = uVar22 & 0xfffffffffffffff8;
              lVar37 = uVar34 - uVar28;
              puVar24 = (undefined8 *)((long)puVar30 + uVar34);
              puVar39 = (undefined8 *)((long)puVar32 + uVar34);
              do {
                *puVar24 = *puVar39;
                lVar37 = lVar37 + 8;
                puVar24 = puVar24 + 1;
                puVar39 = puVar39 + 1;
              } while (lVar37 != 0);
              puVar30 = (ulong *)((long)puVar30 + uVar28);
              puVar32 = (ulong *)((long)puVar32 + uVar28);
              if (uVar22 == uVar28) goto LAB_1006cc420;
            }
LAB_1006cc410:
            do {
              puVar23 = (ulong *)((long)puVar32 + 1);
              *(char *)puVar30 = (char)*puVar32;
              puVar30 = (ulong *)((long)puVar30 + 1);
              puVar32 = puVar23;
            } while (puVar23 != puVar42);
          }
LAB_1006cc420:
          param_2[3] = param_2[3] + uVar19;
          piVar31 = (int *)param_2[1];
          if (0xffff < uVar19) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
          }
        }
        else {
          uVar22 = *param_4;
          puVar23[1] = param_4[1];
          *puVar23 = uVar22;
          lVar37 = param_2[3];
          if (0x10 < uVar19) {
            uVar22 = param_4[2];
            *(ulong *)(lVar37 + 0x18) = param_4[3];
            *(ulong *)(lVar37 + 0x10) = uVar22;
            uVar22 = param_4[4];
            *(ulong *)(lVar37 + 0x28) = param_4[5];
            *(ulong *)(lVar37 + 0x20) = uVar22;
            if (0x30 < (long)uVar19) {
              puVar23 = (ulong *)(lVar37 + 0x30);
              puVar32 = param_4 + 8;
              do {
                uVar22 = puVar32[-2];
                puVar23[1] = puVar32[-1];
                *puVar23 = uVar22;
                uVar22 = *puVar32;
                puVar23[3] = puVar32[1];
                puVar23[2] = uVar22;
                puVar23 = puVar23 + 4;
                puVar32 = puVar32 + 4;
              } while (puVar23 < (ulong *)(lVar37 + uVar19));
            }
            goto LAB_1006cc420;
          }
          param_2[3] = lVar37 + uVar19;
          piVar31 = (int *)param_2[1];
        }
        piVar18 = (int *)(lVar35 + 4);
        uVar22 = lVar35 + 1;
        *(short *)(piVar31 + 1) = (short)uVar19;
        *piVar31 = 1;
        iVar46 = iVar40;
joined_r0x0001006cc6c4:
        if (uVar22 >> 0x10 != 0) {
LAB_1006cc464:
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
        }
LAB_1006cc47c:
        *(short *)((long)piVar31 + 6) = (short)uVar22;
        piVar31 = piVar31 + 2;
        param_2[1] = (long)piVar31;
        puVar23 = (ulong *)((long)puVar42 + (long)piVar18);
        param_4 = puVar23;
        iVar40 = iVar46;
        if (puVar23 <= puVar20) {
          *(int *)(lVar26 + (ulong)((uint)(*(int *)(lVar2 + (uVar25 & 0xffffffff)) * -0x61c8864f) >>
                                   (ulong)(uVar1 & 0x1f)) * 4) = iVar17 + 2;
          *(int *)(lVar26 + (ulong)((uint)(*(int *)((long)puVar23 - 2U) * -0x61c8864f) >>
                                   (ulong)(uVar1 & 0x1f)) * 4) =
               (int)(int *)((long)puVar23 - 2U) - iVar43;
          do {
            iVar17 = iVar45;
            iVar40 = iVar46;
            iVar46 = (int)puVar23 - iVar43;
            uVar13 = iVar46 - iVar40;
            lVar35 = uVar9 - uVar3;
            if (uVar10 <= uVar13) {
              lVar35 = lVar44;
            }
            param_4 = puVar23;
            iVar45 = iVar17;
            if (((uVar10 - 1) - uVar13 < 3) || (*(int *)(lVar35 + (ulong)uVar13) != (int)*puVar23))
            break;
            puVar42 = puVar8;
            if (uVar10 <= uVar13) {
              puVar42 = puVar4;
            }
            piVar18 = (int *)((long)puVar23 + 4);
            FUN_1006c7460(piVar18,(int *)(lVar35 + (ulong)uVar13) + 1,puVar4,puVar42,pcVar6);
            if (puVar23 <= puVar21) {
              puVar42 = (ulong *)param_2[3];
              uVar25 = *puVar23;
              puVar42[1] = puVar23[1];
              *puVar42 = uVar25;
              piVar31 = (int *)param_2[1];
            }
            *(undefined2 *)(piVar31 + 1) = 0;
            *piVar31 = 1;
            if (0xffff < (long)piVar18 + 1U) {
              *(undefined4 *)(param_2 + 9) = 2;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar31 - *param_2) >> 3);
            }
            *(short *)((long)piVar31 + 6) = (short)((long)piVar18 + 1U);
            piVar31 = piVar31 + 2;
            *(int *)(lVar26 + (ulong)((uint)((int)*puVar23 * -0x61c8864f) >> (ulong)(uVar1 & 0x1f))
                              * 4) = iVar46;
            param_2[1] = (long)piVar31;
            puVar23 = (ulong *)((long)puVar23 + (long)(piVar18 + 1));
            param_4 = puVar23;
            iVar46 = iVar17;
            iVar45 = iVar40;
            iVar40 = iVar17;
          } while (puVar23 <= puVar20);
        }
      }
      iVar46 = iVar45;
    } while (puVar23 < puVar20);
  }
  *param_3 = iVar46;
  param_3[1] = iVar40;
  return (long)puVar4 - (long)param_4;
}

