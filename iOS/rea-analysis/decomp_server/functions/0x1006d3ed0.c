// rea decompile_all
// name: FUN_1006d3ed0
// address: 0x1006d3ed0
// body: available
// range: 0x1006d3ed0-0x1006d4b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d3ed0(ulong param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  long local_68;
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar16 = puVar4 + -1;
  lVar36 = *(long *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0x18);
  iVar38 = *param_3;
  iVar33 = param_3[1];
  puVar14 = *(ulong **)(param_1 + 0xb0);
  puVar9 = (ulong *)*puVar14;
  uVar10 = puVar14[1];
  puVar5 = (ulong *)(uVar10 + (uint)puVar14[3]);
  puVar6 = (ulong *)(lVar36 + (ulong)uVar11);
  puVar14 = param_4;
  if ((int)puVar9 + ((int)param_4 - (int)puVar6) == (int)puVar5) {
    puVar14 = (ulong *)((long)param_4 + 1);
  }
  if (puVar14 < puVar16) {
    uVar3 = uVar11 + ((int)uVar10 - (int)puVar9);
    puVar17 = (ulong *)((long)puVar4 - 7);
    puVar15 = puVar4 + -4;
    puVar2 = (ulong *)((ulong)uVar11 + lVar36 + 8);
    do {
      iVar35 = (int)lVar36;
      uVar1 = (((int)puVar14 - iVar35) - iVar38) + 1;
      piVar20 = (int *)(uVar10 + (uVar1 - uVar3));
      if (uVar11 <= uVar1) {
        piVar20 = (int *)(lVar36 + (ulong)uVar1);
      }
      if ((uVar1 - uVar11 < 0xfffffffd) && (*piVar20 == *(int *)((long)puVar14 + 1U))) {
        puVar18 = puVar9;
        if (uVar11 <= uVar1) {
          puVar18 = puVar4;
        }
        lVar30 = (long)puVar14 + 5;
        FUN_1006c7460(lVar30,piVar20 + 1,puVar4,puVar18,puVar6);
        uVar12 = lVar30 + 4;
      }
      else {
        uVar12 = 0;
      }
      local_68 = 999999999;
      uVar24 = param_1;
      FUN_1006ddb48(param_1,puVar14,puVar4,&local_68);
      uVar21 = uVar24;
      if (uVar24 <= uVar12) {
        uVar21 = uVar12;
      }
      if (uVar21 < 4) {
        puVar14 = (ulong *)((long)puVar14 + ((long)puVar14 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar18 = puVar14;
        lVar30 = local_68;
        if (uVar24 <= uVar12) {
          puVar18 = (ulong *)((long)puVar14 + 1U);
          lVar30 = 0;
        }
        while (lVar34 = lVar30, puVar22 = puVar14, puVar28 = puVar18, uVar12 = uVar21,
              puVar22 < puVar16) {
          puVar14 = (ulong *)((long)puVar22 + 1);
          uVar1 = ((int)puVar14 - iVar35) - iVar38;
          piVar20 = (int *)(uVar10 + (uVar1 - uVar3));
          if (uVar11 <= uVar1) {
            piVar20 = (int *)(lVar36 + (ulong)uVar1);
          }
          if ((uVar1 - uVar11 < 0xfffffffd) && (*piVar20 == *(int *)puVar14)) {
            puVar18 = puVar9;
            if (uVar11 <= uVar1) {
              puVar18 = puVar4;
            }
            puVar26 = (ulong *)((long)puVar22 + 5);
            puVar23 = (ulong *)(piVar20 + 1);
            puVar7 = (ulong *)((long)puVar26 + ((long)puVar18 - (long)puVar23));
            if (puVar4 <= puVar7) {
              puVar7 = puVar4;
            }
            puVar25 = puVar26;
            puVar27 = puVar23;
            if (puVar26 < (ulong *)((long)puVar7 - 7U)) {
              if (*puVar23 == *puVar26) {
                lVar30 = 0;
                puVar25 = (ulong *)((long)puVar22 + 0xd);
                puVar27 = (ulong *)(piVar20 + 3);
                do {
                  if ((ulong *)((long)puVar7 - 7U) <= puVar25) goto LAB_1006d4210;
                  uVar31 = *puVar27;
                  uVar24 = *puVar25;
                  lVar30 = lVar30 + 8;
                  puVar25 = puVar25 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar31 == uVar24);
                uVar24 = uVar24 ^ uVar31;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = lVar30 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
              }
              else {
                uVar24 = *puVar26 ^ *puVar23;
                uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
                uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
                uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
                uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
              }
            }
            else {
LAB_1006d4210:
              if (puVar25 < (ulong *)((long)puVar7 - 3U)) {
                if ((int)*puVar27 == (int)*puVar25) {
                  puVar25 = (ulong *)((long)puVar25 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
                if (puVar25 < (ulong *)((long)puVar7 - 1U)) {
LAB_1006d4280:
                  if ((short)*puVar27 == (short)*puVar25) {
                    puVar25 = (ulong *)((long)puVar25 + 2);
                    puVar27 = (ulong *)((long)puVar27 + 2);
                  }
                }
              }
              else if (puVar25 < (ulong *)((long)puVar7 - 1U)) goto LAB_1006d4280;
              if ((puVar25 < puVar7) && ((char)*puVar27 == (char)*puVar25)) {
                puVar25 = (ulong *)((long)puVar25 + 1);
              }
              uVar24 = (long)puVar25 - (long)puVar26;
            }
            if ((ulong *)((long)puVar23 + uVar24) == puVar18) {
              puVar26 = (ulong *)((long)puVar26 + uVar24);
              puVar18 = puVar26;
              puVar23 = puVar6;
              if (puVar26 < puVar17) {
                if (*puVar6 == *puVar26) {
                  lVar30 = 0;
                  puVar18 = (ulong *)((long)puVar22 + uVar24 + 0xd);
                  puVar23 = puVar2;
                  do {
                    if (puVar17 <= puVar18) goto LAB_1006d432c;
                    uVar29 = *puVar23;
                    uVar31 = *puVar18;
                    lVar30 = lVar30 + 8;
                    puVar18 = puVar18 + 1;
                    puVar23 = puVar23 + 1;
                  } while (uVar29 == uVar31);
                  uVar31 = uVar31 ^ uVar29;
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar31 = lVar30 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
                }
                else {
                  uVar31 = *puVar26 ^ *puVar6;
                  uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar31 = (ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d432c:
                if (puVar18 < (ulong *)((long)puVar4 - 3U)) {
                  if ((int)*puVar23 == (int)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 4);
                    puVar23 = (ulong *)((long)puVar23 + 4);
                  }
                }
                if (puVar18 < (ulong *)((long)puVar4 - 1U)) {
                  if ((short)*puVar23 == (short)*puVar18) {
                    puVar18 = (ulong *)((long)puVar18 + 2);
                    puVar23 = (ulong *)((long)puVar23 + 2);
                  }
                }
                if ((puVar18 < puVar4) && ((char)*puVar23 == (char)*puVar18)) {
                  puVar18 = (ulong *)((long)puVar18 + 1);
                }
                uVar31 = (long)puVar18 - (long)puVar26;
              }
              uVar24 = uVar31 + uVar24;
            }
            if (uVar24 < 0xfffffffffffffffc &&
                (int)((int)uVar21 * 3 + ((uint)LZCOUNT((int)lVar34 + 1) ^ 0xffffffe0) + 2) <
                (int)(uVar24 + 4) * 3) {
              lVar34 = 0;
              puVar28 = puVar14;
              uVar12 = uVar24 + 4;
            }
          }
          local_68 = 999999999;
          uVar21 = param_1;
          FUN_1006ddb48(param_1,puVar14,puVar4,&local_68);
          if ((uVar21 < 4) ||
             (puVar18 = puVar14, lVar30 = local_68,
             (int)((int)uVar21 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f)) <=
             (int)(((uint)LZCOUNT((int)lVar34 + 1) ^ 0xffffffe0) + (int)uVar12 * 4 + 5))) {
            if (puVar16 <= puVar14) break;
            puVar18 = (ulong *)((long)puVar22 + 2);
            uVar1 = ((int)puVar18 - iVar35) - iVar38;
            piVar20 = (int *)(uVar10 + (uVar1 - uVar3));
            if (uVar11 <= uVar1) {
              piVar20 = (int *)(lVar36 + (ulong)uVar1);
            }
            if ((uVar1 - uVar11 < 0xfffffffd) && (*piVar20 == *(int *)puVar18)) {
              puVar14 = puVar9;
              if (uVar11 <= uVar1) {
                puVar14 = puVar4;
              }
              uVar21 = (long)puVar22 + 6;
              FUN_1006c7460(uVar21,piVar20 + 1,puVar4,puVar14,puVar6);
              if ((uVar21 < 0xfffffffffffffffc) &&
                 ((int)(((uint)LZCOUNT((int)lVar34 + 1) ^ 0xffffffe0) + (int)uVar12 * 4 + 2) <
                  (int)(uVar21 + 4) * 4)) {
                lVar34 = 0;
                puVar28 = puVar18;
                uVar12 = uVar21 + 4;
              }
            }
            local_68 = 999999999;
            uVar21 = param_1;
            FUN_1006ddb48(param_1,puVar18,puVar4,&local_68);
            if ((uVar21 < 4) ||
               (puVar14 = puVar18, lVar30 = local_68,
               (int)((int)uVar21 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f)) <=
               (int)(((uint)LZCOUNT((int)lVar34 + 1) ^ 0xffffffe0) + (int)uVar12 * 4 + 8))) break;
          }
        }
        if (lVar34 == 0) {
          iVar13 = 1;
          uVar21 = (long)puVar28 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          iVar37 = iVar38;
          if (puVar28 <= puVar15) goto LAB_1006d4598;
LAB_1006d462c:
          puVar22 = puVar14;
          puVar18 = param_4;
          if (param_4 <= puVar15) {
            puVar22 = (ulong *)((long)puVar14 + ((long)puVar15 - (long)param_4));
            uVar24 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar24;
            uVar24 = param_4[2];
            puVar14[3] = param_4[3];
            puVar14[2] = uVar24;
            puVar18 = puVar15;
            if (0x20 < (long)puVar15 - (long)param_4) {
              puVar14 = puVar14 + 4;
              puVar26 = param_4 + 6;
              do {
                uVar24 = puVar26[-2];
                puVar14[1] = puVar26[-1];
                *puVar14 = uVar24;
                uVar24 = *puVar26;
                puVar14[3] = puVar26[1];
                puVar14[2] = uVar24;
                puVar14 = puVar14 + 4;
                puVar26 = puVar26 + 4;
              } while (puVar14 < puVar22);
            }
          }
          if (puVar18 < puVar28) {
            uVar24 = (long)puVar28 - (long)puVar18;
            if ((7 < uVar24) && (0x3f < (ulong)((long)puVar22 - (long)puVar18))) {
              if (uVar24 < 0x40) {
                uVar29 = 0;
              }
              else {
                uVar29 = uVar24 & 0xffffffffffffffc0;
                puVar14 = puVar22 + 4;
                puVar26 = puVar18 + 4;
                uVar31 = uVar29;
                do {
                  uVar39 = puVar26[-4];
                  uVar41 = puVar26[-1];
                  uVar40 = puVar26[-2];
                  uVar43 = puVar26[1];
                  uVar42 = *puVar26;
                  uVar45 = puVar26[3];
                  uVar44 = puVar26[2];
                  puVar14[-3] = puVar26[-3];
                  puVar14[-4] = uVar39;
                  puVar14[-1] = uVar41;
                  puVar14[-2] = uVar40;
                  puVar14[1] = uVar43;
                  *puVar14 = uVar42;
                  puVar14[3] = uVar45;
                  puVar14[2] = uVar44;
                  uVar31 = uVar31 - 0x40;
                  puVar14 = puVar14 + 8;
                  puVar26 = puVar26 + 8;
                } while (uVar31 != 0);
                if (uVar24 == uVar29) goto LAB_1006d4758;
                if ((uVar24 & 0x38) == 0) {
                  puVar18 = (ulong *)((long)puVar18 + uVar29);
                  puVar22 = (ulong *)((long)puVar22 + uVar29);
                  goto LAB_1006d4748;
                }
              }
              uVar31 = uVar24 & 0xfffffffffffffff8;
              lVar30 = uVar29 - uVar31;
              puVar19 = (undefined8 *)((long)puVar22 + uVar29);
              puVar32 = (undefined8 *)((long)puVar18 + uVar29);
              do {
                *puVar19 = *puVar32;
                lVar30 = lVar30 + 8;
                puVar19 = puVar19 + 1;
                puVar32 = puVar32 + 1;
              } while (lVar30 != 0);
              puVar22 = (ulong *)((long)puVar22 + uVar31);
              puVar18 = (ulong *)((long)puVar18 + uVar31);
              if (uVar24 == uVar31) goto LAB_1006d4758;
            }
LAB_1006d4748:
            do {
              puVar14 = (ulong *)((long)puVar18 + 1);
              *(char *)puVar22 = (char)*puVar18;
              puVar22 = (ulong *)((long)puVar22 + 1);
              puVar18 = puVar14;
            } while (puVar14 != puVar28);
          }
LAB_1006d4758:
          param_2[3] = param_2[3] + uVar21;
          piVar20 = (int *)param_2[1];
          if (0xffff < uVar21) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar20 - *param_2) >> 3);
          }
        }
        else {
          uVar21 = (long)puVar28 + (-0xfffffffe - (lVar34 + lVar36));
          lVar30 = uVar10 - uVar3;
          puVar14 = puVar5;
          if (uVar11 <= (uint)uVar21) {
            lVar30 = lVar36;
            puVar14 = puVar6;
          }
          if ((param_4 < puVar28) &&
             (uVar21 = uVar21 & 0xffffffff, puVar14 < (ulong *)(lVar30 + uVar21))) {
            puVar18 = (ulong *)(lVar30 + uVar21);
            do {
              puVar22 = (ulong *)((long)puVar28 + -1);
              puVar18 = (ulong *)((long)puVar18 + -1);
              if ((*(char *)puVar22 != *(char *)puVar18) ||
                 (uVar12 = uVar12 + 1, puVar28 = puVar22, puVar22 <= param_4)) break;
            } while (puVar14 < puVar18);
          }
          iVar37 = (int)lVar34 + -2;
          iVar13 = (int)lVar34 + 1;
          uVar21 = (long)puVar28 - (long)param_4;
          puVar14 = (ulong *)param_2[3];
          iVar33 = iVar38;
          if (puVar15 < puVar28) goto LAB_1006d462c;
LAB_1006d4598:
          uVar24 = *param_4;
          puVar14[1] = param_4[1];
          *puVar14 = uVar24;
          lVar30 = param_2[3];
          if (0x10 < uVar21) {
            uVar24 = param_4[2];
            *(ulong *)(lVar30 + 0x18) = param_4[3];
            *(ulong *)(lVar30 + 0x10) = uVar24;
            uVar24 = param_4[4];
            *(ulong *)(lVar30 + 0x28) = param_4[5];
            *(ulong *)(lVar30 + 0x20) = uVar24;
            if (0x30 < (long)uVar21) {
              puVar14 = (ulong *)(lVar30 + 0x30);
              puVar18 = param_4 + 8;
              do {
                uVar24 = puVar18[-2];
                puVar14[1] = puVar18[-1];
                *puVar14 = uVar24;
                uVar24 = *puVar18;
                puVar14[3] = puVar18[1];
                puVar14[2] = uVar24;
                puVar14 = puVar14 + 4;
                puVar18 = puVar18 + 4;
              } while (puVar14 < (ulong *)(lVar30 + uVar21));
            }
            goto LAB_1006d4758;
          }
          param_2[3] = lVar30 + uVar21;
          piVar20 = (int *)param_2[1];
        }
        *(short *)(piVar20 + 1) = (short)uVar21;
        *piVar20 = iVar13;
        if (0xffff < uVar12 - 3) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar20 - *param_2) >> 3);
        }
        *(short *)((long)piVar20 + 6) = (short)(uVar12 - 3);
        piVar20 = piVar20 + 2;
        param_2[1] = (long)piVar20;
        iVar13 = iVar33;
        iVar38 = iVar37;
        for (param_4 = (ulong *)((long)puVar28 + uVar12); iVar33 = iVar13, puVar14 = param_4,
            param_4 <= puVar16; param_4 = (ulong *)((long)param_4 + uVar12 + 4)) {
          uVar1 = ((int)param_4 - iVar35) - iVar33;
          lVar30 = uVar10 - uVar3;
          if (uVar11 <= uVar1) {
            lVar30 = lVar36;
          }
          if ((0xfffffffc < uVar1 - uVar11) ||
             (piVar8 = (int *)(lVar30 + (ulong)uVar1), *piVar8 != (int)*param_4)) break;
          puVar14 = puVar9;
          if (uVar11 <= uVar1) {
            puVar14 = puVar4;
          }
          puVar18 = (ulong *)((long)param_4 + 4);
          puVar28 = (ulong *)(piVar8 + 1);
          puVar22 = (ulong *)((long)puVar18 + ((long)puVar14 - (long)puVar28));
          if (puVar4 <= puVar22) {
            puVar22 = puVar4;
          }
          puVar26 = puVar18;
          puVar23 = puVar28;
          if (puVar18 < (ulong *)((long)puVar22 - 7U)) {
            if (*puVar28 == *puVar18) {
              lVar34 = 0;
              puVar26 = (ulong *)((long)param_4 + 0xc);
              puVar23 = (ulong *)(lVar30 + (ulong)uVar1 + 0xc);
              do {
                if ((ulong *)((long)puVar22 - 7U) <= puVar26) goto LAB_1006d48d0;
                uVar12 = *puVar23;
                uVar21 = *puVar26;
                lVar34 = lVar34 + 8;
                puVar26 = puVar26 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar12 == uVar21);
              uVar21 = uVar21 ^ uVar12;
              uVar12 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar34 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
            else {
              uVar12 = *puVar18 ^ *puVar28;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar28 + uVar12) == puVar14) goto LAB_1006d49a0;
joined_r0x0001006d4934:
            if (puVar15 < param_4) goto LAB_1006d4938;
LAB_1006d4a74:
            puVar14 = (ulong *)param_2[3];
            uVar21 = *param_4;
            puVar14[1] = param_4[1];
            *puVar14 = uVar21;
            piVar20 = (int *)param_2[1];
            *(undefined2 *)(piVar20 + 1) = 0;
            *piVar20 = 1;
          }
          else {
LAB_1006d48d0:
            if (puVar26 < (ulong *)((long)puVar22 - 3U)) {
              if ((int)*puVar23 == (int)*puVar26) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar23 = (ulong *)((long)puVar23 + 4);
              }
              if (puVar26 < (ulong *)((long)puVar22 - 1U)) {
LAB_1006d495c:
                if ((short)*puVar23 == (short)*puVar26) {
                  puVar26 = (ulong *)((long)puVar26 + 2);
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
            }
            else if (puVar26 < (ulong *)((long)puVar22 - 1U)) goto LAB_1006d495c;
            if ((puVar26 < puVar22) && ((char)*puVar23 == (char)*puVar26)) {
              puVar26 = (ulong *)((long)puVar26 + 1);
            }
            uVar12 = (long)puVar26 - (long)puVar18;
            if ((ulong *)((long)puVar28 + uVar12) != puVar14) goto joined_r0x0001006d4934;
LAB_1006d49a0:
            puVar18 = (ulong *)((long)puVar18 + uVar12);
            puVar14 = puVar18;
            puVar28 = puVar6;
            if (puVar18 < puVar17) {
              if (*puVar6 == *puVar18) {
                lVar30 = 0;
                puVar14 = (ulong *)((long)param_4 + uVar12 + 0xc);
                puVar28 = puVar2;
                do {
                  if (puVar17 <= puVar14) goto LAB_1006d4a14;
                  uVar24 = *puVar28;
                  uVar21 = *puVar14;
                  lVar30 = lVar30 + 8;
                  puVar14 = puVar14 + 1;
                  puVar28 = puVar28 + 1;
                } while (uVar24 == uVar21);
                uVar21 = uVar21 ^ uVar24;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar12 = lVar30 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) + uVar12;
              }
              else {
                uVar21 = *puVar18 ^ *puVar6;
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar12 = ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) + uVar12;
              }
              goto joined_r0x0001006d4934;
            }
LAB_1006d4a14:
            if (puVar14 < (ulong *)((long)puVar4 - 3U)) {
              if ((int)*puVar28 == (int)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 4);
                puVar28 = (ulong *)((long)puVar28 + 4);
              }
            }
            if (puVar14 < (ulong *)((long)puVar4 - 1U)) {
              if ((short)*puVar28 == (short)*puVar14) {
                puVar14 = (ulong *)((long)puVar14 + 2);
                puVar28 = (ulong *)((long)puVar28 + 2);
              }
            }
            if ((puVar14 < puVar4) && ((char)*puVar28 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            uVar12 = (long)puVar14 + (uVar12 - (long)puVar18);
            if (param_4 <= puVar15) goto LAB_1006d4a74;
LAB_1006d4938:
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
          iVar13 = iVar38;
          iVar38 = iVar33;
        }
      }
    } while (puVar14 < puVar16);
  }
  *param_3 = iVar38;
  param_3[1] = iVar33;
  return (long)puVar4 - (long)param_4;
}

