// rea decompile_all
// name: FUN_1006d4b40
// address: 0x1006d4b40
// body: available
// range: 0x1006d4b40-0x1006d5693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d4b40(ulong param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  ulong *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  int iVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  ulong *puVar37;
  int iVar38;
  int iVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  long local_68;
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar37 = puVar4 + -1;
  lVar35 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  iVar39 = *param_3;
  iVar32 = param_3[1];
  puVar13 = *(ulong **)(param_1 + 0xb0);
  puVar8 = (ulong *)*puVar13;
  uVar9 = puVar13[1];
  puVar13 = (ulong *)(uVar9 + (uint)puVar13[3]);
  puVar5 = (ulong *)(lVar35 + (ulong)uVar10);
  puVar17 = param_4;
  if ((int)puVar8 + ((int)param_4 - (int)puVar5) == (int)puVar13) {
    puVar17 = (ulong *)((long)param_4 + 1);
  }
  if (puVar17 < puVar37) {
    uVar3 = uVar10 + ((int)uVar9 - (int)puVar8);
    puVar14 = (ulong *)((long)puVar4 - 7);
    puVar15 = puVar4 + -4;
    puVar2 = (ulong *)((ulong)uVar10 + lVar35 + 8);
    do {
      iVar34 = (int)lVar35;
      uVar1 = (((int)puVar17 - iVar34) - iVar39) + 1;
      piVar19 = (int *)(uVar9 + (uVar1 - uVar3));
      if (uVar10 <= uVar1) {
        piVar19 = (int *)(lVar35 + (ulong)uVar1);
      }
      if ((uVar1 - uVar10 < 0xfffffffd) && (*piVar19 == *(int *)((long)puVar17 + 1))) {
        puVar16 = puVar8;
        if (uVar10 <= uVar1) {
          puVar16 = puVar4;
        }
        lVar36 = (long)puVar17 + 5;
        FUN_1006c7460(lVar36,piVar19 + 1,puVar4,puVar16,puVar5);
        uVar20 = lVar36 + 4;
      }
      else {
        uVar20 = 0;
      }
      local_68 = 999999999;
      uVar30 = param_1;
      FUN_1006ddb48(param_1,puVar17,puVar4,&local_68);
      uVar11 = uVar30;
      if (uVar30 <= uVar20) {
        uVar11 = uVar20;
      }
      if (uVar11 < 4) {
        puVar17 = (ulong *)((long)puVar17 + ((long)puVar17 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar16 = puVar17;
        lVar36 = local_68;
        if (uVar30 <= uVar20) {
          lVar36 = 0;
          puVar16 = (ulong *)((long)puVar17 + 1);
        }
        uVar20 = uVar11;
        if (puVar17 < puVar37) {
          lVar33 = (long)puVar17 + 0xd;
          do {
            puVar26 = (ulong *)((long)puVar17 + 1);
            uVar1 = ((int)puVar26 - iVar34) - iVar39;
            piVar19 = (int *)(uVar9 + (uVar1 - uVar3));
            if (uVar10 <= uVar1) {
              piVar19 = (int *)(lVar35 + (ulong)uVar1);
            }
            uVar20 = uVar11;
            if ((uVar1 - uVar10 < 0xfffffffd) && (*piVar19 == *(int *)puVar26)) {
              puVar21 = puVar8;
              if (uVar10 <= uVar1) {
                puVar21 = puVar4;
              }
              puVar23 = (ulong *)((long)puVar17 + 5);
              puVar29 = (ulong *)(piVar19 + 1);
              puVar6 = (ulong *)((long)puVar23 + ((long)puVar21 - (long)puVar29));
              if (puVar4 <= puVar6) {
                puVar6 = puVar4;
              }
              puVar22 = puVar29;
              puVar24 = puVar23;
              if (puVar23 < (ulong *)((long)puVar6 - 7U)) {
                if (*puVar29 == *puVar23) {
                  lVar28 = 0xd;
                  puVar22 = (ulong *)(piVar19 + 3);
                  do {
                    puVar24 = (ulong *)((long)puVar17 + lVar28);
                    if ((ulong *)((long)puVar6 - 7U) <= puVar24) goto LAB_1006d4db4;
                    uVar30 = *puVar22;
                    lVar28 = lVar28 + 8;
                    puVar22 = puVar22 + 1;
                  } while (uVar30 == *puVar24);
                  uVar30 = *puVar24 ^ uVar30;
                  uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (lVar28 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3)) - 0xd;
                }
                else {
                  uVar30 = *puVar23 ^ *puVar29;
                  uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
                  uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
                  uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d4db4:
                if (puVar24 < (ulong *)((long)puVar6 - 3U)) {
                  if ((int)*puVar22 == (int)*puVar24) {
                    puVar24 = (ulong *)((long)puVar24 + 4);
                    puVar22 = (ulong *)((long)puVar22 + 4);
                  }
                  if (puVar24 < (ulong *)((long)puVar6 - 1U)) {
LAB_1006d4e24:
                    if ((short)*puVar22 == (short)*puVar24) {
                      puVar22 = (ulong *)((long)puVar22 + 2);
                      puVar24 = (ulong *)((long)puVar24 + 2);
                    }
                  }
                }
                else if (puVar24 < (ulong *)((long)puVar6 - 1U)) goto LAB_1006d4e24;
                if ((puVar24 < puVar6) && ((char)*puVar22 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                uVar30 = (long)puVar24 - (long)puVar23;
              }
              if ((ulong *)((long)puVar29 + uVar30) == puVar21) {
                puVar23 = (ulong *)((long)puVar23 + uVar30);
                puVar17 = puVar23;
                puVar21 = puVar5;
                if (puVar23 < puVar14) {
                  if (*puVar5 == *puVar23) {
                    lVar28 = 0;
                    puVar17 = (ulong *)(lVar33 + uVar30);
                    puVar21 = puVar2;
                    do {
                      if (puVar14 <= puVar17) goto LAB_1006d4ed4;
                      uVar25 = *puVar21;
                      uVar27 = *puVar17;
                      lVar28 = lVar28 + 8;
                      puVar17 = puVar17 + 1;
                      puVar21 = puVar21 + 1;
                    } while (uVar25 == uVar27);
                    uVar27 = uVar27 ^ uVar25;
                    uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1
                    ;
                    uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2
                    ;
                    uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar27 & 0xffff0000ffff) << 0x10;
                    uVar27 = lVar28 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
                  }
                  else {
                    uVar27 = *puVar23 ^ *puVar5;
                    uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1
                    ;
                    uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2
                    ;
                    uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar27 & 0xffff0000ffff) << 0x10;
                    uVar27 = (ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006d4ed4:
                  if (puVar17 < (ulong *)((long)puVar4 - 3U)) {
                    if ((int)*puVar21 == (int)*puVar17) {
                      puVar17 = (ulong *)((long)puVar17 + 4);
                      puVar21 = (ulong *)((long)puVar21 + 4);
                    }
                  }
                  if (puVar17 < (ulong *)((long)puVar4 - 1U)) {
                    if ((short)*puVar21 == (short)*puVar17) {
                      puVar17 = (ulong *)((long)puVar17 + 2);
                      puVar21 = (ulong *)((long)puVar21 + 2);
                    }
                  }
                  if ((puVar17 < puVar4) && ((char)*puVar21 == (char)*puVar17)) {
                    puVar17 = (ulong *)((long)puVar17 + 1);
                  }
                  uVar27 = (long)puVar17 - (long)puVar23;
                }
                uVar30 = uVar27 + uVar30;
              }
              if (uVar30 < 0xfffffffffffffffc &&
                  (int)((int)uVar11 * 3 + ((uint)LZCOUNT((int)lVar36 + 1) ^ 0xffffffe0) + 2) <
                  (int)(uVar30 + 4) * 3) {
                lVar36 = 0;
                puVar16 = puVar26;
                uVar20 = uVar30 + 4;
              }
            }
            local_68 = 999999999;
            uVar11 = param_1;
            FUN_1006ddb48(param_1,puVar26,puVar4,&local_68);
            if ((uVar11 < 4) ||
               ((int)((int)uVar11 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f)) <=
                (int)(((uint)LZCOUNT((int)lVar36 + 1) ^ 0xffffffe0) + (int)uVar20 * 4 + 5)))
            goto joined_r0x0001006d50d4;
            lVar33 = lVar33 + 1;
            puVar16 = puVar26;
            lVar36 = local_68;
            puVar17 = puVar26;
          } while (puVar26 != puVar37);
          if (local_68 == 0) goto LAB_1006d50d8;
LAB_1006d5034:
          uVar20 = (long)puVar26 + (-0xfffffffe - (lVar36 + lVar35));
          lVar33 = uVar9 - uVar3;
          puVar17 = puVar13;
          if (uVar10 <= (uint)uVar20) {
            lVar33 = lVar35;
            puVar17 = puVar5;
          }
          if ((param_4 < puVar26) &&
             (uVar20 = uVar20 & 0xffffffff, puVar17 < (ulong *)(lVar33 + uVar20))) {
            puVar16 = (ulong *)(lVar33 + uVar20);
            do {
              puVar21 = (ulong *)((long)puVar26 + -1);
              puVar16 = (ulong *)((long)puVar16 + -1);
              if ((*(char *)puVar21 != *(char *)puVar16) ||
                 (uVar11 = uVar11 + 1, puVar26 = puVar21, puVar21 <= param_4)) break;
            } while (puVar17 < puVar16);
          }
          iVar38 = (int)lVar36 + -2;
          iVar12 = (int)lVar36 + 1;
          uVar20 = (long)puVar26 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          iVar32 = iVar39;
          if (puVar15 < puVar26) goto LAB_1006d51a4;
LAB_1006d5100:
          uVar30 = *param_4;
          puVar17[1] = param_4[1];
          *puVar17 = uVar30;
          lVar36 = param_2[3];
          if (0x10 < uVar20) {
            uVar30 = param_4[2];
            *(ulong *)(lVar36 + 0x18) = param_4[3];
            *(ulong *)(lVar36 + 0x10) = uVar30;
            uVar30 = param_4[4];
            *(ulong *)(lVar36 + 0x28) = param_4[5];
            *(ulong *)(lVar36 + 0x20) = uVar30;
            if (0x30 < (long)uVar20) {
              puVar17 = (ulong *)(lVar36 + 0x30);
              puVar16 = param_4 + 8;
              do {
                uVar30 = puVar16[-2];
                puVar17[1] = puVar16[-1];
                *puVar17 = uVar30;
                uVar30 = *puVar16;
                puVar17[3] = puVar16[1];
                puVar17[2] = uVar30;
                puVar17 = puVar17 + 4;
                puVar16 = puVar16 + 4;
              } while (puVar17 < (ulong *)(lVar36 + uVar20));
            }
            goto LAB_1006d52b8;
          }
          param_2[3] = lVar36 + uVar20;
          piVar19 = (int *)param_2[1];
        }
        else {
joined_r0x0001006d50d4:
          uVar11 = uVar20;
          puVar26 = puVar16;
          if (lVar36 != 0) goto LAB_1006d5034;
LAB_1006d50d8:
          iVar12 = 1;
          uVar20 = (long)puVar26 - (long)param_4;
          puVar17 = (ulong *)param_2[3];
          iVar38 = iVar39;
          if (puVar26 <= puVar15) goto LAB_1006d5100;
LAB_1006d51a4:
          puVar21 = puVar17;
          puVar16 = param_4;
          if (param_4 <= puVar15) {
            puVar21 = (ulong *)((long)puVar17 + ((long)puVar15 - (long)param_4));
            uVar30 = *param_4;
            puVar17[1] = param_4[1];
            *puVar17 = uVar30;
            uVar30 = param_4[2];
            puVar17[3] = param_4[3];
            puVar17[2] = uVar30;
            puVar16 = puVar15;
            if (0x20 < (long)puVar15 - (long)param_4) {
              puVar17 = puVar17 + 4;
              puVar23 = param_4 + 6;
              do {
                uVar30 = puVar23[-2];
                puVar17[1] = puVar23[-1];
                *puVar17 = uVar30;
                uVar30 = *puVar23;
                puVar17[3] = puVar23[1];
                puVar17[2] = uVar30;
                puVar17 = puVar17 + 4;
                puVar23 = puVar23 + 4;
              } while (puVar17 < puVar21);
            }
          }
          if (puVar16 < puVar26) {
            uVar30 = (long)puVar26 - (long)puVar16;
            if ((7 < uVar30) && (0x3f < (ulong)((long)puVar21 - (long)puVar16))) {
              if (uVar30 < 0x40) {
                uVar25 = 0;
              }
              else {
                uVar25 = uVar30 & 0xffffffffffffffc0;
                puVar17 = puVar21 + 4;
                puVar23 = puVar16 + 4;
                uVar27 = uVar25;
                do {
                  uVar40 = puVar23[-4];
                  uVar42 = puVar23[-1];
                  uVar41 = puVar23[-2];
                  uVar44 = puVar23[1];
                  uVar43 = *puVar23;
                  uVar46 = puVar23[3];
                  uVar45 = puVar23[2];
                  puVar17[-3] = puVar23[-3];
                  puVar17[-4] = uVar40;
                  puVar17[-1] = uVar42;
                  puVar17[-2] = uVar41;
                  puVar17[1] = uVar44;
                  *puVar17 = uVar43;
                  puVar17[3] = uVar46;
                  puVar17[2] = uVar45;
                  uVar27 = uVar27 - 0x40;
                  puVar17 = puVar17 + 8;
                  puVar23 = puVar23 + 8;
                } while (uVar27 != 0);
                if (uVar30 == uVar25) goto LAB_1006d52b8;
                if ((uVar30 & 0x38) == 0) {
                  puVar16 = (ulong *)((long)puVar16 + uVar25);
                  puVar21 = (ulong *)((long)puVar21 + uVar25);
                  goto LAB_1006d52a8;
                }
              }
              uVar27 = uVar30 & 0xfffffffffffffff8;
              lVar36 = uVar25 - uVar27;
              puVar18 = (undefined8 *)((long)puVar21 + uVar25);
              puVar31 = (undefined8 *)((long)puVar16 + uVar25);
              do {
                *puVar18 = *puVar31;
                lVar36 = lVar36 + 8;
                puVar18 = puVar18 + 1;
                puVar31 = puVar31 + 1;
              } while (lVar36 != 0);
              puVar21 = (ulong *)((long)puVar21 + uVar27);
              puVar16 = (ulong *)((long)puVar16 + uVar27);
              if (uVar30 == uVar27) goto LAB_1006d52b8;
            }
LAB_1006d52a8:
            do {
              puVar17 = (ulong *)((long)puVar16 + 1);
              *(char *)puVar21 = (char)*puVar16;
              puVar21 = (ulong *)((long)puVar21 + 1);
              puVar16 = puVar17;
            } while (puVar17 != puVar26);
          }
LAB_1006d52b8:
          param_2[3] = param_2[3] + uVar20;
          piVar19 = (int *)param_2[1];
          if (0xffff < uVar20) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar19 - *param_2) >> 3);
          }
        }
        *(short *)(piVar19 + 1) = (short)uVar20;
        *piVar19 = iVar12;
        if (0xffff < uVar11 - 3) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar19 - *param_2) >> 3);
        }
        *(short *)((long)piVar19 + 6) = (short)(uVar11 - 3);
        piVar19 = piVar19 + 2;
        param_2[1] = (long)piVar19;
        iVar12 = iVar32;
        iVar39 = iVar38;
        for (param_4 = (ulong *)((long)puVar26 + uVar11); iVar32 = iVar12, puVar17 = param_4,
            param_4 <= puVar37; param_4 = (ulong *)((long)param_4 + uVar20 + 4)) {
          uVar1 = ((int)param_4 - iVar34) - iVar32;
          lVar36 = uVar9 - uVar3;
          if (uVar10 <= uVar1) {
            lVar36 = lVar35;
          }
          if ((0xfffffffc < uVar1 - uVar10) ||
             (piVar7 = (int *)(lVar36 + (ulong)uVar1), *piVar7 != (int)*param_4)) break;
          puVar17 = puVar8;
          if (uVar10 <= uVar1) {
            puVar17 = puVar4;
          }
          puVar16 = (ulong *)((long)param_4 + 4);
          puVar26 = (ulong *)(piVar7 + 1);
          puVar21 = (ulong *)((long)puVar16 + ((long)puVar17 - (long)puVar26));
          if (puVar4 <= puVar21) {
            puVar21 = puVar4;
          }
          puVar23 = puVar16;
          puVar29 = puVar26;
          if (puVar16 < (ulong *)((long)puVar21 - 7U)) {
            if (*puVar26 == *puVar16) {
              lVar33 = 0;
              puVar23 = (ulong *)((long)param_4 + 0xc);
              puVar29 = (ulong *)(lVar36 + (ulong)uVar1 + 0xc);
              do {
                if ((ulong *)((long)puVar21 - 7U) <= puVar23) goto LAB_1006d5424;
                uVar20 = *puVar29;
                uVar11 = *puVar23;
                lVar33 = lVar33 + 8;
                puVar23 = puVar23 + 1;
                puVar29 = puVar29 + 1;
              } while (uVar20 == uVar11);
              uVar11 = uVar11 ^ uVar20;
              uVar20 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              uVar20 = lVar33 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
            }
            else {
              uVar20 = *puVar16 ^ *puVar26;
              uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar26 + uVar20) == puVar17) goto LAB_1006d54f4;
joined_r0x0001006d5488:
            if (puVar15 < param_4) goto LAB_1006d548c;
LAB_1006d55c8:
            puVar17 = (ulong *)param_2[3];
            uVar11 = *param_4;
            puVar17[1] = param_4[1];
            *puVar17 = uVar11;
            piVar19 = (int *)param_2[1];
            *(undefined2 *)(piVar19 + 1) = 0;
            *piVar19 = 1;
          }
          else {
LAB_1006d5424:
            if (puVar23 < (ulong *)((long)puVar21 - 3U)) {
              if ((int)*puVar29 == (int)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 4);
                puVar29 = (ulong *)((long)puVar29 + 4);
              }
              if (puVar23 < (ulong *)((long)puVar21 - 1U)) {
LAB_1006d54b0:
                if ((short)*puVar29 == (short)*puVar23) {
                  puVar23 = (ulong *)((long)puVar23 + 2);
                  puVar29 = (ulong *)((long)puVar29 + 2);
                }
              }
            }
            else if (puVar23 < (ulong *)((long)puVar21 - 1U)) goto LAB_1006d54b0;
            if ((puVar23 < puVar21) && ((char)*puVar29 == (char)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 1);
            }
            uVar20 = (long)puVar23 - (long)puVar16;
            if ((ulong *)((long)puVar26 + uVar20) != puVar17) goto joined_r0x0001006d5488;
LAB_1006d54f4:
            puVar16 = (ulong *)((long)puVar16 + uVar20);
            puVar17 = puVar16;
            puVar26 = puVar5;
            if (puVar16 < puVar14) {
              if (*puVar5 == *puVar16) {
                lVar36 = 0;
                puVar17 = (ulong *)((long)param_4 + uVar20 + 0xc);
                puVar26 = puVar2;
                do {
                  if (puVar14 <= puVar17) goto LAB_1006d5568;
                  uVar30 = *puVar26;
                  uVar11 = *puVar17;
                  lVar36 = lVar36 + 8;
                  puVar17 = puVar17 + 1;
                  puVar26 = puVar26 + 1;
                } while (uVar30 == uVar11);
                uVar11 = uVar11 ^ uVar30;
                uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar36 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + uVar20;
              }
              else {
                uVar11 = *puVar16 ^ *puVar5;
                uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
                uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
                uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
                uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
                uVar20 = ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) + uVar20;
              }
              goto joined_r0x0001006d5488;
            }
LAB_1006d5568:
            if (puVar17 < (ulong *)((long)puVar4 - 3U)) {
              if ((int)*puVar26 == (int)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 4);
                puVar26 = (ulong *)((long)puVar26 + 4);
              }
            }
            if (puVar17 < (ulong *)((long)puVar4 - 1U)) {
              if ((short)*puVar26 == (short)*puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 2);
                puVar26 = (ulong *)((long)puVar26 + 2);
              }
            }
            if ((puVar17 < puVar4) && ((char)*puVar26 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            uVar20 = (long)puVar17 + (uVar20 - (long)puVar16);
            if (param_4 <= puVar15) goto LAB_1006d55c8;
LAB_1006d548c:
            *(undefined2 *)(piVar19 + 1) = 0;
            *piVar19 = 1;
          }
          if (0xffff < uVar20 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar19 - *param_2) >> 3);
          }
          *(short *)((long)piVar19 + 6) = (short)(uVar20 + 1);
          piVar19 = piVar19 + 2;
          param_2[1] = (long)piVar19;
          iVar12 = iVar39;
          iVar39 = iVar32;
        }
      }
    } while (puVar17 < puVar37);
  }
  *param_3 = iVar39;
  param_3[1] = iVar32;
  return (long)puVar4 - (long)param_4;
}

