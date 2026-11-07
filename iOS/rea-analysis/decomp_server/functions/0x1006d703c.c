// rea decompile_all
// name: FUN_1006d703c
// address: 0x1006d703c
// body: available
// range: 0x1006d703c-0x1006d9503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d703c(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  long lVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  long lVar28;
  ulong uVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  int *piVar32;
  uint uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long lVar40;
  ulong *puVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  int *piVar47;
  int *piVar48;
  int iVar49;
  uint uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong *local_d0;
  int *local_b0;
  ulong local_a8;
  int local_94;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar23 = puVar1 + -1;
  lVar19 = *(long *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar20 = (ulong)uVar6;
  uVar46 = *param_3;
  uVar50 = param_3[1];
  puVar2 = (ulong *)(lVar19 + uVar20);
  puVar37 = param_4;
  if (puVar2 == param_4) {
    puVar37 = (ulong *)((long)param_4 + 1);
  }
  if (puVar37 < puVar23) {
    lVar24 = *(long *)(param_1 + 0x10);
    puVar3 = (ulong *)(lVar24 + uVar20);
    uVar7 = *(uint *)(param_1 + 0x1c);
    iVar11 = uVar6 - 1;
    puVar25 = (ulong *)((long)puVar1 - 7);
    puVar34 = (ulong *)((long)puVar1 - 3);
    puVar26 = (ulong *)((long)puVar1 - 1);
    puVar27 = puVar1 + -4;
    do {
      iVar49 = (int)puVar37;
      local_94 = iVar49 - (int)lVar19;
      uVar33 = (local_94 - uVar46) + 1;
      lVar40 = lVar24;
      if (uVar6 <= uVar33) {
        lVar40 = lVar19;
      }
      if ((uVar7 < uVar33 && 2 < iVar11 - uVar33) &&
         (*(int *)((long)puVar37 + 1U) == *(int *)(lVar40 + (ulong)uVar33))) {
        puVar36 = puVar3;
        if (uVar6 <= uVar33) {
          puVar36 = puVar1;
        }
        lVar44 = (long)puVar37 + 5;
        FUN_1006c7460(lVar44,(int *)(lVar40 + (ulong)uVar33) + 1,puVar1,puVar36,puVar2);
        local_b0 = (int *)(lVar44 + 4);
      }
      else {
        local_b0 = (int *)0x0;
      }
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar28 = *(long *)(param_1 + 0x40);
        uVar45 = *(uint *)(param_1 + 0xbc);
        uVar8 = 1 << (ulong)(uVar45 & 0x1f);
        lVar40 = *(long *)(param_1 + 8);
        lVar44 = *(long *)(param_1 + 0x10);
        uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar4 = *(uint *)(param_1 + 0x18);
        uVar43 = (ulong)uVar4;
        uVar17 = (uint)((long)puVar37 - lVar40);
        uVar39 = (ulong)*(uint *)(param_1 + 0x24);
        uVar33 = uVar17 - uVar9;
        if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
          uVar33 = *(uint *)(param_1 + 0x1c);
        }
        uVar9 = 0;
        if (uVar8 <= uVar17) {
          uVar9 = uVar17 - uVar8;
        }
        uVar5 = *(uint *)(param_1 + 0xc4);
        lVar42 = *(long *)(param_1 + 0x30);
        uVar14 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          do {
            uVar21 = (ulong)(*(long *)(lVar40 + uVar39) * -0x30e4432340650000) >> (uVar14 & 0x3f);
            *(undefined4 *)(lVar28 + (ulong)((uint)uVar39 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar42 + uVar21 * 4);
            *(uint *)(lVar42 + uVar21 * 4) = (uint)uVar39;
            uVar39 = uVar39 + 1;
          } while (((long)puVar37 - lVar40 & 0xffffffffU) != uVar39);
        }
        *(uint *)(param_1 + 0x24) = uVar17;
        uVar39 = *puVar37;
        uVar45 = *(uint *)(lVar42 + (uVar39 * -0x30e4432340650000 >> (uVar14 & 0x3f)) * 4);
        if (uVar45 <= uVar33) goto LAB_1006d7c8c;
        iVar13 = 1 << (ulong)(uVar5 & 0x1f);
        puVar36 = (ulong *)((long)puVar37 + 4);
        piVar47 = (int *)0x3;
        local_a8 = 999999999;
        do {
          uVar14 = (ulong)uVar45;
          if (uVar45 < uVar4) {
            if (*(int *)(lVar44 + uVar14) == (int)*puVar37) {
              puVar30 = (ulong *)((int *)(lVar44 + uVar14) + 1);
              puVar35 = (ulong *)((long)puVar36 + ((lVar44 + uVar43) - (long)puVar30));
              if (puVar1 <= puVar35) {
                puVar35 = puVar1;
              }
              puVar16 = puVar36;
              puVar15 = puVar30;
              if (puVar36 < (ulong *)((long)puVar35 - 7U)) {
                if (*puVar30 == *puVar36) {
                  lVar42 = 0;
                  puVar16 = (ulong *)((long)puVar37 + 0xc);
                  puVar15 = (ulong *)(lVar44 + 0xc + uVar14);
                  do {
                    if ((ulong *)((long)puVar35 - 7U) <= puVar16) goto LAB_1006d7414;
                    uVar21 = *puVar15;
                    uVar14 = *puVar16;
                    lVar42 = lVar42 + 8;
                    puVar16 = puVar16 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar21 == uVar14);
                  uVar14 = uVar14 ^ uVar21;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = lVar42 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
                }
                else {
                  uVar14 = *puVar36 ^ *puVar30;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  uVar14 = (ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d7414:
                if (puVar16 < (ulong *)((long)puVar35 - 3U)) {
                  if ((int)*puVar15 == (int)*puVar16) {
                    puVar16 = (ulong *)((long)puVar16 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                  if (puVar16 < (ulong *)((long)puVar35 - 1U)) {
LAB_1006d7484:
                    if ((short)*puVar15 == (short)*puVar16) {
                      puVar16 = (ulong *)((long)puVar16 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                }
                else if (puVar16 < (ulong *)((long)puVar35 - 1U)) goto LAB_1006d7484;
                if ((puVar16 < puVar35) && ((char)*puVar15 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar14 = (long)puVar16 - (long)puVar36;
              }
              if ((long)puVar30 + uVar14 == lVar44 + uVar43) {
                puVar30 = (ulong *)((long)puVar36 + uVar14);
                puVar35 = puVar30;
                puVar16 = (ulong *)(lVar40 + uVar43);
                if (puVar30 < puVar25) {
                  uVar21 = *(ulong *)(lVar40 + uVar43);
                  if (uVar21 == *puVar30) {
                    lVar42 = 0;
                    puVar35 = (ulong *)((long)puVar37 + 0xc + uVar14);
                    puVar16 = (ulong *)(lVar40 + 8 + uVar43);
                    do {
                      if (puVar25 <= puVar35) goto LAB_1006d75fc;
                      uVar22 = *puVar16;
                      uVar21 = *puVar35;
                      lVar42 = lVar42 + 8;
                      puVar35 = puVar35 + 1;
                      puVar16 = puVar16 + 1;
                    } while (uVar22 == uVar21);
                    uVar21 = uVar21 ^ uVar22;
                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1
                    ;
                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2
                    ;
                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    uVar14 = lVar42 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) +
                             uVar14;
                    goto joined_r0x0001006d75d0;
                  }
                  uVar21 = *puVar30 ^ uVar21;
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  piVar32 = (int *)(((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) + uVar14
                                   + 4);
                }
                else {
LAB_1006d75fc:
                  if (puVar35 < puVar34) {
                    if ((int)*puVar16 == (int)*puVar35) {
                      puVar35 = (ulong *)((long)puVar35 + 4);
                      puVar16 = (ulong *)((long)puVar16 + 4);
                    }
                  }
                  if (puVar35 < puVar26) {
                    if (*(short *)puVar16 == *(short *)puVar35) {
                      puVar35 = (ulong *)((long)puVar35 + 2);
                      puVar16 = (ulong *)((long)puVar16 + 2);
                    }
                  }
                  if ((puVar35 < puVar1) && ((char)*puVar16 == (char)*puVar35)) {
                    puVar35 = (ulong *)((long)puVar35 + 1);
                  }
                  piVar32 = (int *)((long)puVar35 + (uVar14 - (long)puVar30) + 4);
                }
              }
              else {
joined_r0x0001006d75d0:
                piVar32 = (int *)(uVar14 + 4);
              }
joined_r0x0001006d750c:
              if ((piVar47 < piVar32) &&
                 (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar32,
                 (ulong *)((long)puVar37 + (long)piVar32) == puVar1)) break;
            }
          }
          else {
            puVar30 = (ulong *)(lVar40 + uVar14);
            if (*(char *)((long)puVar30 + (long)piVar47) == *(char *)((long)puVar37 + (long)piVar47)
               ) {
              puVar35 = puVar37;
              if (puVar37 < puVar25) {
                if (*puVar30 == uVar39) {
                  lVar42 = 0;
                  puVar30 = (ulong *)(lVar40 + 8 + uVar14);
                  do {
                    puVar35 = puVar35 + 1;
                    if (puVar25 <= puVar35) goto LAB_1006d74b0;
                    uVar14 = *puVar30;
                    lVar42 = lVar42 + 8;
                    puVar30 = puVar30 + 1;
                  } while (uVar14 == *puVar35);
                  uVar14 = *puVar35 ^ uVar14;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  piVar32 = (int *)(lVar42 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3))
                  ;
                }
                else {
                  uVar14 = *puVar30 ^ uVar39;
                  uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
                  uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
                  uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
                  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10
                  ;
                  piVar32 = (int *)((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
                }
              }
              else {
LAB_1006d74b0:
                if (puVar35 < puVar34) {
                  if ((int)*puVar30 == (int)*puVar35) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar35 = (ulong *)((long)puVar35 + 4);
                  }
                }
                if (puVar35 < puVar26) {
                  if (*(short *)puVar30 == *(short *)puVar35) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar35 = (ulong *)((long)puVar35 + 2);
                  }
                }
                if ((puVar35 < puVar1) && ((char)*puVar30 == (char)*puVar35)) {
                  puVar35 = (ulong *)((long)puVar35 + 1);
                }
                piVar32 = (int *)((long)puVar35 - (long)puVar37);
              }
              goto joined_r0x0001006d750c;
            }
          }
          if ((uVar45 <= uVar9) || (iVar13 = iVar13 + -1, iVar13 == 0)) {
            piVar32 = piVar47;
            if (piVar47 <= local_b0) {
              piVar32 = local_b0;
            }
            goto joined_r0x0001006d8ee0;
          }
          uVar45 = *(uint *)(lVar28 + (ulong)(uVar45 & uVar8 - 1) * 4);
        } while (uVar33 < uVar45);
LAB_1006d7cd4:
        piVar32 = piVar47;
        if (piVar47 <= local_b0) {
          piVar32 = local_b0;
        }
      }
      else {
        if (*(int *)(param_1 + 200) == 5) {
          lVar28 = *(long *)(param_1 + 0x40);
          uVar45 = *(uint *)(param_1 + 0xbc);
          uVar8 = 1 << (ulong)(uVar45 & 0x1f);
          lVar40 = *(long *)(param_1 + 8);
          lVar44 = *(long *)(param_1 + 0x10);
          uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar4 = *(uint *)(param_1 + 0x18);
          uVar17 = (uint)((long)puVar37 - lVar40);
          uVar39 = (ulong)*(uint *)(param_1 + 0x24);
          uVar33 = uVar17 - uVar9;
          if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
            uVar33 = *(uint *)(param_1 + 0x1c);
          }
          uVar9 = 0;
          if (uVar8 <= uVar17) {
            uVar9 = uVar17 - uVar8;
          }
          uVar5 = *(uint *)(param_1 + 0xc4);
          lVar42 = *(long *)(param_1 + 0x30);
          uVar43 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            do {
              uVar14 = (ulong)(*(long *)(lVar40 + uVar39) * -0x30e4432345000000) >> (uVar43 & 0x3f);
              *(undefined4 *)(lVar28 + (ulong)((uint)uVar39 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4)
                   = *(undefined4 *)(lVar42 + uVar14 * 4);
              *(uint *)(lVar42 + uVar14 * 4) = (uint)uVar39;
              uVar39 = uVar39 + 1;
            } while (((long)puVar37 - lVar40 & 0xffffffffU) != uVar39);
          }
          *(uint *)(param_1 + 0x24) = uVar17;
          uVar39 = *puVar37;
          uVar45 = *(uint *)(lVar42 + (uVar39 * -0x30e4432345000000 >> (uVar43 & 0x3f)) * 4);
          if (uVar33 < uVar45) {
            iVar13 = 1 << (ulong)(uVar5 & 0x1f);
            piVar47 = (int *)0x3;
            local_a8 = 999999999;
            do {
              uVar43 = (ulong)uVar45;
              if (uVar45 < uVar4) {
                piVar48 = (int *)(lVar44 + uVar43);
                if (*piVar48 == (int)*puVar37) {
                  piVar32 = (int *)((long)puVar37 + 4);
                  FUN_1006c7460(piVar32,piVar48 + 1,puVar1,lVar44 + (ulong)uVar4,
                                lVar40 + (ulong)uVar4);
                  piVar32 = piVar32 + 1;
joined_r0x0001006d792c:
                  if ((piVar47 < piVar32) &&
                     (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar32,
                     (ulong *)((long)puVar37 + (long)piVar32) == puVar1)) goto LAB_1006d7cd4;
                }
              }
              else {
                puVar36 = (ulong *)(lVar40 + uVar43);
                if (*(char *)((long)puVar36 + (long)piVar47) ==
                    *(char *)((long)puVar37 + (long)piVar47)) {
                  puVar30 = puVar37;
                  if (puVar37 < puVar25) {
                    if (*puVar36 == uVar39) {
                      lVar42 = 0;
                      puVar36 = (ulong *)(lVar40 + 8 + uVar43);
                      do {
                        puVar30 = puVar30 + 1;
                        if (puVar25 <= puVar30) goto LAB_1006d78d0;
                        uVar43 = *puVar36;
                        lVar42 = lVar42 + 8;
                        puVar36 = puVar36 + 1;
                      } while (uVar43 == *puVar30);
                      uVar43 = *puVar30 ^ uVar43;
                      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar43 & 0x5555555555555555) << 1;
                      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                               (uVar43 & 0x3333333333333333) << 2;
                      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar43 & 0xffff0000ffff) << 0x10;
                      piVar32 = (int *)(lVar42 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >>
                                                 3));
                    }
                    else {
                      uVar43 = *puVar36 ^ uVar39;
                      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar43 & 0x5555555555555555) << 1;
                      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                               (uVar43 & 0x3333333333333333) << 2;
                      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar43 & 0xffff0000ffff) << 0x10;
                      piVar32 = (int *)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                    }
                  }
                  else {
LAB_1006d78d0:
                    if (puVar30 < puVar34) {
                      if ((int)*puVar36 == (int)*puVar30) {
                        puVar36 = (ulong *)((long)puVar36 + 4);
                        puVar30 = (ulong *)((long)puVar30 + 4);
                      }
                    }
                    if (puVar30 < puVar26) {
                      if (*(short *)puVar36 == *(short *)puVar30) {
                        puVar36 = (ulong *)((long)puVar36 + 2);
                        puVar30 = (ulong *)((long)puVar30 + 2);
                      }
                    }
                    if ((puVar30 < puVar1) && ((char)*puVar36 == (char)*puVar30)) {
                      puVar30 = (ulong *)((long)puVar30 + 1);
                    }
                    piVar32 = (int *)((long)puVar30 - (long)puVar37);
                  }
                  goto joined_r0x0001006d792c;
                }
              }
              if ((uVar45 <= uVar9) ||
                 ((iVar13 = iVar13 + -1, iVar13 == 0 ||
                  (uVar45 = *(uint *)(lVar28 + (ulong)(uVar45 & uVar8 - 1) * 4), uVar45 <= uVar33)))
                 ) goto LAB_1006d7cd4;
            } while( true );
          }
        }
        else {
          lVar28 = *(long *)(param_1 + 0x40);
          uVar45 = *(uint *)(param_1 + 0xbc);
          uVar8 = 1 << (ulong)(uVar45 & 0x1f);
          lVar40 = *(long *)(param_1 + 8);
          lVar44 = *(long *)(param_1 + 0x10);
          uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar4 = *(uint *)(param_1 + 0x18);
          uVar17 = (uint)((long)puVar37 - lVar40);
          uVar39 = (ulong)*(uint *)(param_1 + 0x24);
          uVar33 = uVar17 - uVar9;
          if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
            uVar33 = *(uint *)(param_1 + 0x1c);
          }
          uVar9 = 0;
          if (uVar8 <= uVar17) {
            uVar9 = uVar17 - uVar8;
          }
          uVar5 = *(uint *)(param_1 + 0xc4);
          lVar42 = *(long *)(param_1 + 0x30);
          uVar12 = 0x20 - *(int *)(param_1 + 0xc0);
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            do {
              uVar10 = (uint)(*(int *)(lVar40 + uVar39) * -0x61c8864f) >> (ulong)(uVar12 & 0x1f);
              *(undefined4 *)(lVar28 + (ulong)((uint)uVar39 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4)
                   = *(undefined4 *)(lVar42 + (ulong)uVar10 * 4);
              *(uint *)(lVar42 + (ulong)uVar10 * 4) = (uint)uVar39;
              uVar39 = uVar39 + 1;
            } while (((long)puVar37 - lVar40 & 0xffffffffU) != uVar39);
          }
          *(uint *)(param_1 + 0x24) = uVar17;
          uVar39 = *puVar37;
          uVar45 = *(uint *)(lVar42 + (ulong)((uint)((int)uVar39 * -0x61c8864f) >>
                                             (ulong)(uVar12 & 0x1f)) * 4);
          if (uVar33 < uVar45) {
            iVar13 = 1 << (ulong)(uVar5 & 0x1f);
            piVar47 = (int *)0x3;
            local_a8 = 999999999;
            do {
              uVar43 = (ulong)uVar45;
              if (uVar45 < uVar4) {
                piVar48 = (int *)(lVar44 + uVar43);
                if (*piVar48 == (int)uVar39) {
                  piVar32 = (int *)((long)puVar37 + 4);
                  FUN_1006c7460(piVar32,piVar48 + 1,puVar1,lVar44 + (ulong)uVar4,
                                lVar40 + (ulong)uVar4);
                  piVar32 = piVar32 + 1;
joined_r0x0001006d7bec:
                  if ((piVar47 < piVar32) &&
                     (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar47 = piVar32,
                     (ulong *)((long)puVar37 + (long)piVar32) == puVar1)) break;
                }
              }
              else {
                puVar36 = (ulong *)(lVar40 + uVar43);
                if (*(char *)((long)puVar36 + (long)piVar47) ==
                    *(char *)((long)puVar37 + (long)piVar47)) {
                  puVar30 = puVar37;
                  if (puVar37 < puVar25) {
                    if (*puVar36 == *puVar37) {
                      lVar42 = 0;
                      puVar36 = (ulong *)(lVar40 + 8 + uVar43);
                      do {
                        puVar30 = puVar30 + 1;
                        if (puVar25 <= puVar30) goto LAB_1006d7b90;
                        uVar43 = *puVar36;
                        lVar42 = lVar42 + 8;
                        puVar36 = puVar36 + 1;
                      } while (uVar43 == *puVar30);
                      uVar43 = *puVar30 ^ uVar43;
                      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar43 & 0x5555555555555555) << 1;
                      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                               (uVar43 & 0x3333333333333333) << 2;
                      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar43 & 0xffff0000ffff) << 0x10;
                      piVar32 = (int *)(lVar42 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >>
                                                 3));
                    }
                    else {
                      uVar43 = *puVar37 ^ *puVar36;
                      uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar43 & 0x5555555555555555) << 1;
                      uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                               (uVar43 & 0x3333333333333333) << 2;
                      uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar43 & 0xffff0000ffff) << 0x10;
                      piVar32 = (int *)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                    }
                  }
                  else {
LAB_1006d7b90:
                    if (puVar30 < puVar34) {
                      if ((int)*puVar36 == (int)*puVar30) {
                        puVar36 = (ulong *)((long)puVar36 + 4);
                        puVar30 = (ulong *)((long)puVar30 + 4);
                      }
                    }
                    if (puVar30 < puVar26) {
                      if (*(short *)puVar36 == *(short *)puVar30) {
                        puVar36 = (ulong *)((long)puVar36 + 2);
                        puVar30 = (ulong *)((long)puVar30 + 2);
                      }
                    }
                    if ((puVar30 < puVar1) && ((char)*puVar36 == (char)*puVar30)) {
                      puVar30 = (ulong *)((long)puVar30 + 1);
                    }
                    piVar32 = (int *)((long)puVar30 - (long)puVar37);
                  }
                  goto joined_r0x0001006d7bec;
                }
              }
              if ((uVar45 <= uVar9) || (iVar13 = iVar13 + -1, iVar13 == 0)) {
                piVar32 = piVar47;
                if (piVar47 <= local_b0) {
                  piVar32 = local_b0;
                }
                goto joined_r0x0001006d8ee0;
              }
              uVar45 = *(uint *)(lVar28 + (ulong)(uVar45 & uVar8 - 1) * 4);
            } while (uVar33 < uVar45);
            goto LAB_1006d7cd4;
          }
        }
LAB_1006d7c8c:
        local_a8 = 999999999;
        piVar47 = (int *)0x3;
        piVar32 = (int *)0x3;
        if ((int *)0x2 < local_b0) {
          piVar32 = local_b0;
        }
      }
joined_r0x0001006d8ee0:
      if (piVar32 < (int *)0x4) {
        puVar37 = (ulong *)((long)puVar37 + ((long)puVar37 - (long)param_4 >> 8) + 1);
      }
      else {
        puVar36 = puVar37;
        if (piVar47 <= local_b0) {
          local_a8 = 0;
          puVar36 = (ulong *)((long)puVar37 + 1U);
        }
        lVar40 = (long)puVar37 + 0xd;
LAB_1006d7d04:
        uVar39 = local_a8;
        iVar49 = iVar49 + 1;
        piVar47 = piVar32;
        local_d0 = puVar36;
        if (puVar37 < puVar23) {
          puVar36 = (ulong *)((long)puVar37 + 1);
          local_94 = local_94 + 1;
          if (uVar39 == 0) {
            uVar39 = 0;
          }
          else {
            uVar33 = local_94 - uVar46;
            lVar44 = lVar24;
            if (uVar6 <= uVar33) {
              lVar44 = lVar19;
            }
            if (((uVar7 < uVar33) && (2 < iVar11 - uVar33)) &&
               (*(int *)puVar36 == *(int *)(lVar44 + (ulong)uVar33))) {
              puVar30 = puVar3;
              if (uVar6 <= uVar33) {
                puVar30 = puVar1;
              }
              uVar43 = (long)puVar37 + 5;
              FUN_1006c7460(uVar43,(int *)(lVar44 + (ulong)uVar33) + 1,puVar1,puVar30,puVar2);
              if ((uVar43 < 0xfffffffffffffffc) &&
                 ((int)((int)piVar32 * 3 + ((uint)LZCOUNT((int)uVar39 + 1) ^ 0xffffffe0) + 2) <
                  (int)(int *)(uVar43 + 4) * 3)) {
                uVar39 = 0;
                piVar47 = (int *)(uVar43 + 4);
                local_d0 = puVar36;
              }
            }
          }
          iVar13 = (int)puVar36;
          if (*(int *)(param_1 + 200) - 6U < 2) {
            lVar42 = *(long *)(param_1 + 0x40);
            uVar45 = *(uint *)(param_1 + 0xbc);
            uVar8 = 1 << (ulong)(uVar45 & 0x1f);
            lVar44 = *(long *)(param_1 + 8);
            lVar28 = *(long *)(param_1 + 0x10);
            uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar4 = *(uint *)(param_1 + 0x18);
            uVar14 = (ulong)uVar4;
            uVar17 = iVar13 - (int)lVar44;
            uVar43 = (ulong)*(uint *)(param_1 + 0x24);
            uVar33 = uVar17 - uVar9;
            if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
              uVar33 = *(uint *)(param_1 + 0x1c);
            }
            uVar9 = 0;
            if (uVar8 <= uVar17) {
              uVar9 = uVar17 - uVar8;
            }
            uVar5 = *(uint *)(param_1 + 0xc4);
            lVar18 = *(long *)(param_1 + 0x30);
            uVar21 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
            if (*(uint *)(param_1 + 0x24) < uVar17) {
              do {
                uVar22 = (ulong)(*(long *)(lVar44 + uVar43) * -0x30e4432340650000) >>
                         (uVar21 & 0x3f);
                *(undefined4 *)
                 (lVar42 + (ulong)((uint)uVar43 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                     *(undefined4 *)(lVar18 + uVar22 * 4);
                *(uint *)(lVar18 + uVar22 * 4) = (uint)uVar43;
                uVar43 = uVar43 + 1;
              } while ((uint)(iVar49 - (int)lVar44) != uVar43);
            }
            *(uint *)(param_1 + 0x24) = uVar17;
            uVar43 = *puVar36;
            uVar45 = *(uint *)(lVar18 + (uVar43 * -0x30e4432340650000 >> (uVar21 & 0x3f)) * 4);
            if (uVar33 < uVar45) {
              iVar13 = 1 << (ulong)(uVar5 & 0x1f);
              puVar30 = (ulong *)((long)puVar37 + 5);
              piVar32 = (int *)0x3;
              local_a8 = 999999999;
              do {
                uVar21 = (ulong)uVar45;
                if (uVar45 < uVar4) {
                  if (*(int *)(lVar28 + uVar21) == *(int *)puVar36) {
                    puVar35 = (ulong *)((int *)(lVar28 + uVar21) + 1);
                    puVar16 = (ulong *)((long)puVar30 + ((lVar28 + uVar14) - (long)puVar35));
                    if (puVar1 <= puVar16) {
                      puVar16 = puVar1;
                    }
                    puVar15 = puVar30;
                    puVar41 = puVar35;
                    if (puVar30 < (ulong *)((long)puVar16 - 7U)) {
                      if (*puVar35 == *puVar30) {
                        lVar18 = 0;
                        puVar41 = (ulong *)(lVar28 + 0xc + uVar21);
                        do {
                          puVar15 = (ulong *)(lVar40 + lVar18);
                          if ((ulong *)((long)puVar16 - 7U) <= puVar15) goto LAB_1006d804c;
                          uVar21 = *puVar41;
                          lVar18 = lVar18 + 8;
                          puVar41 = puVar41 + 1;
                        } while (uVar21 == *puVar15);
                        uVar21 = *puVar15 ^ uVar21;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        uVar21 = lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                      }
                      else {
                        uVar21 = *puVar30 ^ *puVar35;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                      }
                    }
                    else {
LAB_1006d804c:
                      if (puVar15 < (ulong *)((long)puVar16 - 3U)) {
                        if ((int)*puVar41 == (int)*puVar15) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                        if (puVar15 < (ulong *)((long)puVar16 - 1U)) {
LAB_1006d80bc:
                          if ((short)*puVar41 == (short)*puVar15) {
                            puVar15 = (ulong *)((long)puVar15 + 2);
                            puVar41 = (ulong *)((long)puVar41 + 2);
                          }
                        }
                      }
                      else if (puVar15 < (ulong *)((long)puVar16 - 1U)) goto LAB_1006d80bc;
                      if ((puVar15 < puVar16) && ((char)*puVar41 == (char)*puVar15)) {
                        puVar15 = (ulong *)((long)puVar15 + 1);
                      }
                      uVar21 = (long)puVar15 - (long)puVar30;
                    }
                    if ((long)puVar35 + uVar21 == lVar28 + uVar14) {
                      puVar35 = (ulong *)((long)puVar30 + uVar21);
                      puVar16 = (ulong *)(lVar44 + uVar14);
                      puVar15 = puVar35;
                      if (puVar35 < puVar25) {
                        uVar22 = *(ulong *)(lVar44 + uVar14);
                        if (uVar22 == *puVar35) {
                          lVar18 = 0;
                          puVar16 = (ulong *)(lVar44 + 8 + uVar14);
                          puVar15 = (ulong *)(lVar40 + uVar21);
                          do {
                            if (puVar25 <= puVar15) goto LAB_1006d8238;
                            uVar29 = *puVar16;
                            uVar22 = *puVar15;
                            lVar18 = lVar18 + 8;
                            puVar16 = puVar16 + 1;
                            puVar15 = puVar15 + 1;
                          } while (uVar29 == uVar22);
                          uVar22 = uVar22 ^ uVar29;
                          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar22 & 0x5555555555555555) << 1;
                          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 |
                                   (uVar22 & 0x3333333333333333) << 2;
                          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar22 & 0xff00ff00ff00ff) << 8;
                          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar22 & 0xffff0000ffff) << 0x10;
                          uVar21 = lVar18 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) +
                                   uVar21;
                          goto joined_r0x0001006d820c;
                        }
                        uVar22 = *puVar35 ^ uVar22;
                        uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar22 & 0x5555555555555555) << 1;
                        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 |
                                 (uVar22 & 0x3333333333333333) << 2;
                        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar22 & 0xff00ff00ff00ff) << 8;
                        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar22 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) +
                                          uVar21 + 4);
                      }
                      else {
LAB_1006d8238:
                        if (puVar15 < puVar34) {
                          if ((int)*puVar16 == (int)*puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 4);
                            puVar15 = (ulong *)((long)puVar15 + 4);
                          }
                        }
                        if (puVar15 < puVar26) {
                          if (*(short *)puVar16 == *(short *)puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 2);
                            puVar15 = (ulong *)((long)puVar15 + 2);
                          }
                        }
                        if ((puVar15 < puVar1) && ((char)*puVar16 == (char)*puVar15)) {
                          puVar15 = (ulong *)((long)puVar15 + 1);
                        }
                        piVar48 = (int *)((long)puVar15 + (uVar21 - (long)puVar35) + 4);
                      }
                    }
                    else {
joined_r0x0001006d820c:
                      piVar48 = (int *)(uVar21 + 4);
                    }
joined_r0x0001006d8144:
                    if ((piVar32 < piVar48) &&
                       (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar32 = piVar48,
                       (ulong *)((long)puVar36 + (long)piVar48) == puVar1))
                    goto joined_r0x0001006d8dc4;
                  }
                }
                else {
                  puVar35 = (ulong *)(lVar44 + uVar21);
                  if (*(char *)((long)puVar35 + (long)piVar32) ==
                      *(char *)((long)puVar36 + (long)piVar32)) {
                    puVar16 = puVar36;
                    if (puVar36 < puVar25) {
                      if (*puVar35 == uVar43) {
                        lVar18 = 9;
                        puVar35 = (ulong *)(lVar44 + 8 + uVar21);
                        do {
                          puVar16 = (ulong *)((long)puVar37 + lVar18);
                          if (puVar25 <= puVar16) goto LAB_1006d80e8;
                          uVar21 = *puVar35;
                          lVar18 = lVar18 + 8;
                          puVar35 = puVar35 + 1;
                        } while (uVar21 == *puVar16);
                        uVar21 = *puVar16 ^ uVar21;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)
                                                   >> 3) + -9);
                      }
                      else {
                        uVar21 = *puVar35 ^ uVar43;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_1006d80e8:
                      if (puVar16 < puVar34) {
                        if ((int)*puVar35 == (int)*puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 4);
                          puVar35 = (ulong *)((long)puVar35 + 4);
                        }
                      }
                      if (puVar16 < puVar26) {
                        if (*(short *)puVar35 == *(short *)puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 2);
                          puVar35 = (ulong *)((long)puVar35 + 2);
                        }
                      }
                      if ((puVar16 < puVar1) && ((char)*puVar35 == (char)*puVar16)) {
                        puVar16 = (ulong *)((long)puVar16 + 1);
                      }
                      piVar48 = (int *)((long)puVar16 - (long)puVar36);
                    }
                    goto joined_r0x0001006d8144;
                  }
                }
                if ((uVar45 <= uVar9) ||
                   ((iVar13 = iVar13 + -1, iVar13 == 0 ||
                    (uVar45 = *(uint *)(lVar42 + (ulong)(uVar45 & uVar8 - 1) * 4), uVar45 <= uVar33)
                    ))) goto joined_r0x0001006d8dc4;
              } while( true );
            }
          }
          else if (*(int *)(param_1 + 200) == 5) {
            lVar42 = *(long *)(param_1 + 0x40);
            uVar45 = *(uint *)(param_1 + 0xbc);
            uVar8 = 1 << (ulong)(uVar45 & 0x1f);
            lVar44 = *(long *)(param_1 + 8);
            lVar28 = *(long *)(param_1 + 0x10);
            uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar4 = *(uint *)(param_1 + 0x18);
            uVar14 = (ulong)uVar4;
            uVar17 = iVar13 - (int)lVar44;
            uVar43 = (ulong)*(uint *)(param_1 + 0x24);
            uVar33 = uVar17 - uVar9;
            if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
              uVar33 = *(uint *)(param_1 + 0x1c);
            }
            uVar9 = 0;
            if (uVar8 <= uVar17) {
              uVar9 = uVar17 - uVar8;
            }
            uVar5 = *(uint *)(param_1 + 0xc4);
            lVar18 = *(long *)(param_1 + 0x30);
            uVar21 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
            if (*(uint *)(param_1 + 0x24) < uVar17) {
              do {
                uVar22 = (ulong)(*(long *)(lVar44 + uVar43) * -0x30e4432345000000) >>
                         (uVar21 & 0x3f);
                *(undefined4 *)
                 (lVar42 + (ulong)((uint)uVar43 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                     *(undefined4 *)(lVar18 + uVar22 * 4);
                *(uint *)(lVar18 + uVar22 * 4) = (uint)uVar43;
                uVar43 = uVar43 + 1;
              } while ((uint)(iVar49 - (int)lVar44) != uVar43);
            }
            *(uint *)(param_1 + 0x24) = uVar17;
            uVar43 = *puVar36;
            uVar45 = *(uint *)(lVar18 + (uVar43 * -0x30e4432345000000 >> (uVar21 & 0x3f)) * 4);
            if (uVar33 < uVar45) {
              iVar13 = 1 << (ulong)(uVar5 & 0x1f);
              puVar30 = (ulong *)((long)puVar37 + 5);
              piVar32 = (int *)0x3;
              local_a8 = 999999999;
              do {
                uVar21 = (ulong)uVar45;
                if (uVar45 < uVar4) {
                  if (*(int *)(lVar28 + uVar21) == *(int *)puVar36) {
                    puVar35 = (ulong *)((int *)(lVar28 + uVar21) + 1);
                    puVar16 = (ulong *)((long)puVar30 + ((lVar28 + uVar14) - (long)puVar35));
                    if (puVar1 <= puVar16) {
                      puVar16 = puVar1;
                    }
                    puVar15 = puVar30;
                    puVar41 = puVar35;
                    if (puVar30 < (ulong *)((long)puVar16 - 7U)) {
                      if (*puVar35 == *puVar30) {
                        lVar18 = 0xd;
                        puVar41 = (ulong *)(lVar28 + 0xc + uVar21);
                        do {
                          puVar15 = (ulong *)((long)puVar37 + lVar18);
                          if ((ulong *)((long)puVar16 - 7U) <= puVar15) goto LAB_1006d8564;
                          uVar21 = *puVar41;
                          lVar18 = lVar18 + 8;
                          puVar41 = puVar41 + 1;
                        } while (uVar21 == *puVar15);
                        uVar21 = *puVar15 ^ uVar21;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        uVar21 = (lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3)) -
                                 0xd;
                      }
                      else {
                        uVar21 = *puVar30 ^ *puVar35;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                      }
                    }
                    else {
LAB_1006d8564:
                      if (puVar15 < (ulong *)((long)puVar16 - 3U)) {
                        if ((int)*puVar41 == (int)*puVar15) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                        if (puVar15 < (ulong *)((long)puVar16 - 1U)) {
LAB_1006d85d4:
                          if ((short)*puVar41 == (short)*puVar15) {
                            puVar15 = (ulong *)((long)puVar15 + 2);
                            puVar41 = (ulong *)((long)puVar41 + 2);
                          }
                        }
                      }
                      else if (puVar15 < (ulong *)((long)puVar16 - 1U)) goto LAB_1006d85d4;
                      if ((puVar15 < puVar16) && ((char)*puVar41 == (char)*puVar15)) {
                        puVar15 = (ulong *)((long)puVar15 + 1);
                      }
                      uVar21 = (long)puVar15 - (long)puVar30;
                    }
                    if ((long)puVar35 + uVar21 == lVar28 + uVar14) {
                      puVar35 = (ulong *)((long)puVar30 + uVar21);
                      puVar16 = (ulong *)(lVar44 + uVar14);
                      puVar15 = puVar35;
                      if (puVar35 < puVar25) {
                        uVar22 = *(ulong *)(lVar44 + uVar14);
                        if (uVar22 == *puVar35) {
                          lVar18 = 0;
                          puVar16 = (ulong *)(lVar44 + 8 + uVar14);
                          puVar15 = (ulong *)(lVar40 + uVar21);
                          do {
                            if (puVar25 <= puVar15) goto LAB_1006d8750;
                            uVar29 = *puVar16;
                            uVar22 = *puVar15;
                            lVar18 = lVar18 + 8;
                            puVar16 = puVar16 + 1;
                            puVar15 = puVar15 + 1;
                          } while (uVar29 == uVar22);
                          uVar22 = uVar22 ^ uVar29;
                          uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar22 & 0x5555555555555555) << 1;
                          uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 |
                                   (uVar22 & 0x3333333333333333) << 2;
                          uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar22 & 0xff00ff00ff00ff) << 8;
                          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar22 & 0xffff0000ffff) << 0x10;
                          uVar21 = lVar18 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) +
                                   uVar21;
                          goto joined_r0x0001006d8724;
                        }
                        uVar22 = *puVar35 ^ uVar22;
                        uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar22 & 0x5555555555555555) << 1;
                        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 |
                                 (uVar22 & 0x3333333333333333) << 2;
                        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar22 & 0xff00ff00ff00ff) << 8;
                        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar22 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3) +
                                          uVar21 + 4);
                      }
                      else {
LAB_1006d8750:
                        if (puVar15 < puVar34) {
                          if ((int)*puVar16 == (int)*puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 4);
                            puVar15 = (ulong *)((long)puVar15 + 4);
                          }
                        }
                        if (puVar15 < puVar26) {
                          if (*(short *)puVar16 == *(short *)puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 2);
                            puVar15 = (ulong *)((long)puVar15 + 2);
                          }
                        }
                        if ((puVar15 < puVar1) && ((char)*puVar16 == (char)*puVar15)) {
                          puVar15 = (ulong *)((long)puVar15 + 1);
                        }
                        piVar48 = (int *)((long)puVar15 + (uVar21 - (long)puVar35) + 4);
                      }
                    }
                    else {
joined_r0x0001006d8724:
                      piVar48 = (int *)(uVar21 + 4);
                    }
joined_r0x0001006d865c:
                    if ((piVar32 < piVar48) &&
                       (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar32 = piVar48,
                       (ulong *)((long)puVar36 + (long)piVar48) == puVar1))
                    goto joined_r0x0001006d8dc4;
                  }
                }
                else {
                  puVar35 = (ulong *)(lVar44 + uVar21);
                  if (*(char *)((long)puVar35 + (long)piVar32) ==
                      *(char *)((long)puVar36 + (long)piVar32)) {
                    puVar16 = puVar36;
                    if (puVar36 < puVar25) {
                      if (*puVar35 == uVar43) {
                        lVar18 = 9;
                        puVar35 = (ulong *)(lVar44 + 8 + uVar21);
                        do {
                          puVar16 = (ulong *)((long)puVar37 + lVar18);
                          if (puVar25 <= puVar16) goto LAB_1006d8600;
                          uVar21 = *puVar35;
                          lVar18 = lVar18 + 8;
                          puVar35 = puVar35 + 1;
                        } while (uVar21 == *puVar16);
                        uVar21 = *puVar16 ^ uVar21;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20)
                                                   >> 3) + -9);
                      }
                      else {
                        uVar21 = *puVar35 ^ uVar43;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_1006d8600:
                      if (puVar16 < puVar34) {
                        if ((int)*puVar35 == (int)*puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 4);
                          puVar35 = (ulong *)((long)puVar35 + 4);
                        }
                      }
                      if (puVar16 < puVar26) {
                        if (*(short *)puVar35 == *(short *)puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 2);
                          puVar35 = (ulong *)((long)puVar35 + 2);
                        }
                      }
                      if ((puVar16 < puVar1) && ((char)*puVar35 == (char)*puVar16)) {
                        puVar16 = (ulong *)((long)puVar16 + 1);
                      }
                      piVar48 = (int *)((long)puVar16 - (long)puVar36);
                    }
                    goto joined_r0x0001006d865c;
                  }
                }
                if ((uVar45 <= uVar9) ||
                   ((iVar13 = iVar13 + -1, iVar13 == 0 ||
                    (uVar45 = *(uint *)(lVar42 + (ulong)(uVar45 & uVar8 - 1) * 4), uVar45 <= uVar33)
                    ))) goto joined_r0x0001006d8dc4;
              } while( true );
            }
          }
          else {
            lVar42 = *(long *)(param_1 + 0x40);
            uVar45 = *(uint *)(param_1 + 0xbc);
            uVar8 = 1 << (ulong)(uVar45 & 0x1f);
            lVar44 = *(long *)(param_1 + 8);
            lVar28 = *(long *)(param_1 + 0x10);
            uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar4 = *(uint *)(param_1 + 0x18);
            uVar14 = (ulong)uVar4;
            uVar17 = iVar13 - (int)lVar44;
            uVar43 = (ulong)*(uint *)(param_1 + 0x24);
            uVar33 = uVar17 - uVar9;
            if (uVar17 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
              uVar33 = *(uint *)(param_1 + 0x1c);
            }
            uVar9 = 0;
            if (uVar8 <= uVar17) {
              uVar9 = uVar17 - uVar8;
            }
            uVar5 = *(uint *)(param_1 + 0xc4);
            lVar18 = *(long *)(param_1 + 0x30);
            uVar12 = 0x20 - *(int *)(param_1 + 0xc0);
            if (*(uint *)(param_1 + 0x24) < uVar17) {
              do {
                uVar10 = (uint)(*(int *)(lVar44 + uVar43) * -0x61c8864f) >> (ulong)(uVar12 & 0x1f);
                *(undefined4 *)
                 (lVar42 + (ulong)((uint)uVar43 & ~(-1 << (ulong)(uVar45 & 0x1f))) * 4) =
                     *(undefined4 *)(lVar18 + (ulong)uVar10 * 4);
                *(uint *)(lVar18 + (ulong)uVar10 * 4) = (uint)uVar43;
                uVar43 = uVar43 + 1;
              } while ((uint)(iVar49 - (int)lVar44) != uVar43);
            }
            *(uint *)(param_1 + 0x24) = uVar17;
            uVar45 = *(uint *)(lVar18 + (ulong)((uint)(*(int *)puVar36 * -0x61c8864f) >>
                                               (ulong)(uVar12 & 0x1f)) * 4);
            if (uVar33 < uVar45) {
              iVar13 = 1 << (ulong)(uVar5 & 0x1f);
              puVar30 = (ulong *)((long)puVar37 + 5);
              piVar32 = (int *)0x3;
              local_a8 = 999999999;
              do {
                uVar43 = (ulong)uVar45;
                if (uVar45 < uVar4) {
                  if (*(int *)(lVar28 + uVar43) == *(int *)puVar36) {
                    puVar35 = (ulong *)((int *)(lVar28 + uVar43) + 1);
                    puVar16 = (ulong *)((long)puVar30 + ((lVar28 + uVar14) - (long)puVar35));
                    if (puVar1 <= puVar16) {
                      puVar16 = puVar1;
                    }
                    puVar15 = puVar30;
                    puVar41 = puVar35;
                    if (puVar30 < (ulong *)((long)puVar16 - 7U)) {
                      if (*puVar35 == *puVar30) {
                        lVar18 = 0;
                        puVar41 = (ulong *)(lVar28 + 0xc + uVar43);
                        do {
                          puVar15 = (ulong *)(lVar40 + lVar18);
                          if ((ulong *)((long)puVar16 - 7U) <= puVar15) goto LAB_1006d8a80;
                          uVar43 = *puVar41;
                          lVar18 = lVar18 + 8;
                          puVar41 = puVar41 + 1;
                        } while (uVar43 == *puVar15);
                        uVar43 = *puVar15 ^ uVar43;
                        uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar43 & 0x5555555555555555) << 1;
                        uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                                 (uVar43 & 0x3333333333333333) << 2;
                        uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar43 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        uVar43 = lVar18 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                      }
                      else {
                        uVar43 = *puVar30 ^ *puVar35;
                        uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar43 & 0x5555555555555555) << 1;
                        uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                                 (uVar43 & 0x3333333333333333) << 2;
                        uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar43 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        uVar43 = (ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3;
                      }
                    }
                    else {
LAB_1006d8a80:
                      if (puVar15 < (ulong *)((long)puVar16 - 3U)) {
                        if ((int)*puVar41 == (int)*puVar15) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                        if (puVar15 < (ulong *)((long)puVar16 - 1U)) {
LAB_1006d8af0:
                          if ((short)*puVar41 == (short)*puVar15) {
                            puVar15 = (ulong *)((long)puVar15 + 2);
                            puVar41 = (ulong *)((long)puVar41 + 2);
                          }
                        }
                      }
                      else if (puVar15 < (ulong *)((long)puVar16 - 1U)) goto LAB_1006d8af0;
                      if ((puVar15 < puVar16) && ((char)*puVar41 == (char)*puVar15)) {
                        puVar15 = (ulong *)((long)puVar15 + 1);
                      }
                      uVar43 = (long)puVar15 - (long)puVar30;
                    }
                    if ((long)puVar35 + uVar43 == lVar28 + uVar14) {
                      puVar35 = (ulong *)((long)puVar30 + uVar43);
                      puVar16 = (ulong *)(lVar44 + uVar14);
                      puVar15 = puVar35;
                      if (puVar35 < puVar25) {
                        uVar21 = *(ulong *)(lVar44 + uVar14);
                        if (uVar21 == *puVar35) {
                          lVar18 = 0;
                          puVar16 = (ulong *)(lVar44 + 8 + uVar14);
                          puVar15 = (ulong *)(lVar40 + uVar43);
                          do {
                            if (puVar25 <= puVar15) goto LAB_1006d8c6c;
                            uVar22 = *puVar16;
                            uVar21 = *puVar15;
                            lVar18 = lVar18 + 8;
                            puVar16 = puVar16 + 1;
                            puVar15 = puVar15 + 1;
                          } while (uVar22 == uVar21);
                          uVar21 = uVar21 ^ uVar22;
                          uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar21 & 0x5555555555555555) << 1;
                          uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                   (uVar21 & 0x3333333333333333) << 2;
                          uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar21 & 0xff00ff00ff00ff) << 8;
                          uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar21 & 0xffff0000ffff) << 0x10;
                          uVar43 = lVar18 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) +
                                   uVar43;
                          goto joined_r0x0001006d8c40;
                        }
                        uVar21 = *puVar35 ^ uVar21;
                        uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar21 & 0x5555555555555555) << 1;
                        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 |
                                 (uVar21 & 0x3333333333333333) << 2;
                        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar21 & 0xff00ff00ff00ff) << 8;
                        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar21 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) +
                                          uVar43 + 4);
                      }
                      else {
LAB_1006d8c6c:
                        if (puVar15 < puVar34) {
                          if ((int)*puVar16 == (int)*puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 4);
                            puVar15 = (ulong *)((long)puVar15 + 4);
                          }
                        }
                        if (puVar15 < puVar26) {
                          if (*(short *)puVar16 == *(short *)puVar15) {
                            puVar16 = (ulong *)((long)puVar16 + 2);
                            puVar15 = (ulong *)((long)puVar15 + 2);
                          }
                        }
                        if ((puVar15 < puVar1) && ((char)*puVar16 == (char)*puVar15)) {
                          puVar15 = (ulong *)((long)puVar15 + 1);
                        }
                        piVar48 = (int *)((long)puVar15 + (uVar43 - (long)puVar35) + 4);
                      }
                    }
                    else {
joined_r0x0001006d8c40:
                      piVar48 = (int *)(uVar43 + 4);
                    }
joined_r0x0001006d8b78:
                    if ((piVar32 < piVar48) &&
                       (local_a8 = (ulong)((uVar17 + 2) - uVar45), piVar32 = piVar48,
                       (ulong *)((long)puVar36 + (long)piVar48) == puVar1))
                    goto joined_r0x0001006d8dc4;
                  }
                }
                else {
                  puVar35 = (ulong *)(lVar44 + uVar43);
                  if (*(char *)((long)puVar35 + (long)piVar32) ==
                      *(char *)((long)puVar36 + (long)piVar32)) {
                    puVar16 = puVar36;
                    if (puVar36 < puVar25) {
                      if (*puVar35 == *puVar36) {
                        lVar18 = 9;
                        puVar35 = (ulong *)(lVar44 + 8 + uVar43);
                        do {
                          puVar16 = (ulong *)((long)puVar37 + lVar18);
                          if (puVar25 <= puVar16) goto LAB_1006d8b1c;
                          uVar43 = *puVar35;
                          lVar18 = lVar18 + 8;
                          puVar35 = puVar35 + 1;
                        } while (uVar43 == *puVar16);
                        uVar43 = *puVar16 ^ uVar43;
                        uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar43 & 0x5555555555555555) << 1;
                        uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                                 (uVar43 & 0x3333333333333333) << 2;
                        uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar43 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)(lVar18 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20)
                                                   >> 3) + -9);
                      }
                      else {
                        uVar43 = *puVar36 ^ *puVar35;
                        uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar43 & 0x5555555555555555) << 1;
                        uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 |
                                 (uVar43 & 0x3333333333333333) << 2;
                        uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar43 & 0xff00ff00ff00ff) << 8;
                        uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar43 & 0xffff0000ffff) << 0x10;
                        piVar48 = (int *)((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_1006d8b1c:
                      if (puVar16 < puVar34) {
                        if ((int)*puVar35 == (int)*puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 4);
                          puVar35 = (ulong *)((long)puVar35 + 4);
                        }
                      }
                      if (puVar16 < puVar26) {
                        if (*(short *)puVar35 == *(short *)puVar16) {
                          puVar16 = (ulong *)((long)puVar16 + 2);
                          puVar35 = (ulong *)((long)puVar35 + 2);
                        }
                      }
                      if ((puVar16 < puVar1) && ((char)*puVar35 == (char)*puVar16)) {
                        puVar16 = (ulong *)((long)puVar16 + 1);
                      }
                      piVar48 = (int *)((long)puVar16 - (long)puVar36);
                    }
                    goto joined_r0x0001006d8b78;
                  }
                }
                if ((uVar45 <= uVar9) ||
                   ((iVar13 = iVar13 + -1, iVar13 == 0 ||
                    (uVar45 = *(uint *)(lVar42 + (ulong)(uVar45 & uVar8 - 1) * 4), uVar45 <= uVar33)
                    ))) goto joined_r0x0001006d8dc4;
              } while( true );
            }
          }
        }
joined_r0x0001006d8ec4:
        if (uVar39 == 0) {
          iVar49 = 1;
          uVar39 = (long)local_d0 - (long)param_4;
          puVar37 = (ulong *)param_2[3];
          if (local_d0 <= puVar27) goto LAB_1006d8e44;
LAB_1006d8fd8:
          puVar30 = puVar37;
          puVar36 = param_4;
          if (param_4 <= puVar27) {
            puVar30 = (ulong *)((long)puVar37 + ((long)puVar27 - (long)param_4));
            uVar43 = *param_4;
            puVar37[1] = param_4[1];
            *puVar37 = uVar43;
            uVar43 = param_4[2];
            puVar37[3] = param_4[3];
            puVar37[2] = uVar43;
            puVar36 = puVar27;
            if (0x20 < (long)puVar27 - (long)param_4) {
              puVar37 = puVar37 + 4;
              puVar35 = param_4 + 6;
              do {
                uVar43 = puVar35[-2];
                puVar37[1] = puVar35[-1];
                *puVar37 = uVar43;
                uVar43 = *puVar35;
                puVar37[3] = puVar35[1];
                puVar37[2] = uVar43;
                puVar37 = puVar37 + 4;
                puVar35 = puVar35 + 4;
              } while (puVar37 < puVar30);
            }
          }
          if (puVar36 < local_d0) {
            uVar43 = (long)local_d0 - (long)puVar36;
            if ((7 < uVar43) && (0x3f < (ulong)((long)puVar30 - (long)puVar36))) {
              if (uVar43 < 0x40) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar43 & 0xffffffffffffffc0;
                puVar37 = puVar30 + 4;
                puVar35 = puVar36 + 4;
                uVar14 = uVar21;
                do {
                  uVar22 = puVar35[-4];
                  uVar51 = puVar35[-1];
                  uVar29 = puVar35[-2];
                  uVar53 = puVar35[1];
                  uVar52 = *puVar35;
                  uVar55 = puVar35[3];
                  uVar54 = puVar35[2];
                  puVar37[-3] = puVar35[-3];
                  puVar37[-4] = uVar22;
                  puVar37[-1] = uVar51;
                  puVar37[-2] = uVar29;
                  puVar37[1] = uVar53;
                  *puVar37 = uVar52;
                  puVar37[3] = uVar55;
                  puVar37[2] = uVar54;
                  uVar14 = uVar14 - 0x40;
                  puVar37 = puVar37 + 8;
                  puVar35 = puVar35 + 8;
                } while (uVar14 != 0);
                if (uVar43 == uVar21) goto LAB_1006d90f8;
                if ((uVar43 & 0x38) == 0) {
                  puVar36 = (ulong *)((long)puVar36 + uVar21);
                  puVar30 = (ulong *)((long)puVar30 + uVar21);
                  goto LAB_1006d90e8;
                }
              }
              uVar14 = uVar43 & 0xfffffffffffffff8;
              lVar40 = uVar21 - uVar14;
              puVar31 = (undefined8 *)((long)puVar36 + uVar21);
              puVar38 = (undefined8 *)((long)puVar30 + uVar21);
              do {
                *puVar38 = *puVar31;
                lVar40 = lVar40 + 8;
                puVar31 = puVar31 + 1;
                puVar38 = puVar38 + 1;
              } while (lVar40 != 0);
              puVar30 = (ulong *)((long)puVar30 + uVar14);
              puVar36 = (ulong *)((long)puVar36 + uVar14);
              if (uVar43 == uVar14) goto LAB_1006d90f8;
            }
LAB_1006d90e8:
            do {
              puVar37 = (ulong *)((long)puVar36 + 1);
              *(char *)puVar30 = (char)*puVar36;
              puVar30 = (ulong *)((long)puVar30 + 1);
              puVar36 = puVar37;
            } while (puVar37 != local_d0);
          }
LAB_1006d90f8:
          param_2[3] = param_2[3] + uVar39;
          piVar32 = (int *)param_2[1];
          if (0xffff < uVar39) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar32 - *param_2) >> 3);
          }
        }
        else {
          uVar43 = (long)local_d0 + (2 - (uVar39 + lVar19));
          puVar37 = (ulong *)(lVar24 + (ulong)uVar7);
          lVar40 = lVar24;
          if (uVar6 <= (uint)uVar43) {
            puVar37 = puVar2;
            lVar40 = lVar19;
          }
          if ((param_4 < local_d0) &&
             (uVar43 = uVar43 & 0xffffffff, puVar37 < (ulong *)(lVar40 + uVar43))) {
            puVar36 = (ulong *)(lVar40 + uVar43);
            do {
              puVar36 = (ulong *)((long)puVar36 + -1);
              puVar30 = (ulong *)((long)local_d0 + -1);
              if ((*(char *)puVar30 != *(char *)puVar36) ||
                 (piVar47 = (int *)((long)piVar47 + 1), local_d0 = puVar30, puVar30 <= param_4))
              break;
            } while (puVar37 < puVar36);
          }
          uVar33 = (int)uVar39 - 2;
          iVar49 = (int)uVar39 + 1;
          uVar39 = (long)local_d0 - (long)param_4;
          puVar37 = (ulong *)param_2[3];
          uVar50 = uVar46;
          uVar46 = uVar33;
          if (puVar27 < local_d0) goto LAB_1006d8fd8;
LAB_1006d8e44:
          uVar43 = *param_4;
          puVar37[1] = param_4[1];
          *puVar37 = uVar43;
          lVar40 = param_2[3];
          if (0x10 < uVar39) {
            uVar43 = param_4[2];
            *(ulong *)(lVar40 + 0x18) = param_4[3];
            *(ulong *)(lVar40 + 0x10) = uVar43;
            uVar43 = param_4[4];
            *(ulong *)(lVar40 + 0x28) = param_4[5];
            *(ulong *)(lVar40 + 0x20) = uVar43;
            if (0x30 < (long)uVar39) {
              puVar37 = (ulong *)(lVar40 + 0x30);
              puVar36 = param_4 + 8;
              do {
                uVar43 = puVar36[-2];
                puVar37[1] = puVar36[-1];
                *puVar37 = uVar43;
                uVar43 = *puVar36;
                puVar37[3] = puVar36[1];
                puVar37[2] = uVar43;
                puVar37 = puVar37 + 4;
                puVar36 = puVar36 + 4;
              } while (puVar37 < (ulong *)(lVar40 + uVar39));
            }
            goto LAB_1006d90f8;
          }
          param_2[3] = lVar40 + uVar39;
          piVar32 = (int *)param_2[1];
        }
        *(short *)(piVar32 + 1) = (short)uVar39;
        *piVar32 = iVar49;
        if (0xffff < (long)piVar47 - 3U) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar32 - *param_2) >> 3);
        }
        *(short *)((long)piVar32 + 6) = (short)((long)piVar47 - 3U);
        piVar32 = piVar32 + 2;
        param_2[1] = (long)piVar32;
        uVar33 = uVar50;
        for (puVar37 = (ulong *)((long)local_d0 + (long)piVar47); uVar50 = uVar33, param_4 = puVar37
            , puVar37 <= puVar23; puVar37 = (ulong *)((long)puVar37 + uVar39 + 4)) {
          uVar39 = (long)puVar37 - (lVar19 + (ulong)uVar50);
          uVar33 = (uint)uVar39;
          lVar40 = lVar24;
          if (uVar6 <= uVar33) {
            lVar40 = lVar19;
          }
          if (uVar33 <= uVar7 || iVar11 - uVar33 < 3) break;
          uVar39 = uVar39 & 0xffffffff;
          piVar47 = (int *)(lVar40 + uVar39);
          if ((int)*puVar37 != *piVar47) break;
          puVar36 = puVar3;
          if (uVar6 <= uVar33) {
            puVar36 = puVar1;
          }
          puVar30 = (ulong *)((long)puVar37 + 4);
          puVar35 = (ulong *)(piVar47 + 1);
          puVar16 = (ulong *)((long)puVar30 + ((long)puVar36 - (long)puVar35));
          if (puVar1 <= puVar16) {
            puVar16 = puVar1;
          }
          puVar15 = puVar30;
          puVar41 = puVar35;
          if (puVar30 < (ulong *)((long)puVar16 - 7U)) {
            if (*puVar35 == *puVar30) {
              lVar44 = 0;
              puVar15 = (ulong *)((long)puVar37 + 0xc);
              puVar41 = (ulong *)(lVar40 + uVar39 + 0xc);
              do {
                if ((ulong *)((long)puVar16 - 7U) <= puVar15) goto LAB_1006d9280;
                uVar39 = *puVar41;
                uVar43 = *puVar15;
                lVar44 = lVar44 + 8;
                puVar15 = puVar15 + 1;
                puVar41 = puVar41 + 1;
              } while (uVar39 == uVar43);
              uVar43 = uVar43 ^ uVar39;
              uVar39 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
              uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
              uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
              uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
              uVar39 = lVar44 + ((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
            }
            else {
              uVar39 = *puVar30 ^ *puVar35;
              uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
              uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
              uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
              uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10;
              uVar39 = (ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3;
            }
            if ((ulong *)((long)puVar35 + uVar39) == puVar36) goto LAB_1006d9350;
joined_r0x0001006d92e4:
            if (puVar37 <= puVar27) goto LAB_1006d9430;
LAB_1006d92e8:
            *(undefined2 *)(piVar32 + 1) = 0;
            *piVar32 = 1;
          }
          else {
LAB_1006d9280:
            if (puVar15 < (ulong *)((long)puVar16 - 3U)) {
              if ((int)*puVar41 == (int)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar41 = (ulong *)((long)puVar41 + 4);
              }
              if (puVar15 < (ulong *)((long)puVar16 - 1U)) {
LAB_1006d930c:
                if ((short)*puVar41 == (short)*puVar15) {
                  puVar15 = (ulong *)((long)puVar15 + 2);
                  puVar41 = (ulong *)((long)puVar41 + 2);
                }
              }
            }
            else if (puVar15 < (ulong *)((long)puVar16 - 1U)) goto LAB_1006d930c;
            if ((puVar15 < puVar16) && ((char)*puVar41 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar39 = (long)puVar15 - (long)puVar30;
            if ((ulong *)((long)puVar35 + uVar39) != puVar36) goto joined_r0x0001006d92e4;
LAB_1006d9350:
            puVar30 = (ulong *)((long)puVar30 + uVar39);
            puVar35 = puVar30;
            puVar36 = puVar2;
            if (puVar30 < puVar25) {
              if (*puVar2 == *puVar30) {
                lVar40 = 0;
                puVar35 = (ulong *)((long)puVar37 + uVar39 + 0xc);
                puVar36 = (ulong *)(uVar20 + lVar19);
                do {
                  puVar36 = puVar36 + 1;
                  if (puVar25 <= puVar35) goto LAB_1006d93cc;
                  uVar43 = *puVar35;
                  lVar40 = lVar40 + 8;
                  puVar35 = puVar35 + 1;
                } while (*puVar36 == uVar43);
                uVar43 = uVar43 ^ *puVar36;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar39 = lVar40 + ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3) + uVar39;
              }
              else {
                uVar43 = *puVar30 ^ *puVar2;
                uVar43 = (uVar43 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar43 & 0x5555555555555555) << 1;
                uVar43 = (uVar43 & 0xcccccccccccccccc) >> 2 | (uVar43 & 0x3333333333333333) << 2;
                uVar43 = (uVar43 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar43 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar43 = (uVar43 & 0xff00ff00ff00ff00) >> 8 | (uVar43 & 0xff00ff00ff00ff) << 8;
                uVar43 = (uVar43 & 0xffff0000ffff0000) >> 0x10 | (uVar43 & 0xffff0000ffff) << 0x10;
                uVar39 = ((ulong)LZCOUNT(uVar43 >> 0x20 | uVar43 << 0x20) >> 3) + uVar39;
              }
              goto joined_r0x0001006d92e4;
            }
LAB_1006d93cc:
            if (puVar35 < puVar34) {
              if ((int)*puVar36 == (int)*puVar35) {
                puVar35 = (ulong *)((long)puVar35 + 4);
                puVar36 = (ulong *)((long)puVar36 + 4);
              }
            }
            if (puVar35 < puVar26) {
              if (*(short *)puVar36 == *(short *)puVar35) {
                puVar35 = (ulong *)((long)puVar35 + 2);
                puVar36 = (ulong *)((long)puVar36 + 2);
              }
            }
            if ((puVar35 < puVar1) && ((char)*puVar36 == (char)*puVar35)) {
              puVar35 = (ulong *)((long)puVar35 + 1);
            }
            uVar39 = (long)puVar35 + (uVar39 - (long)puVar30);
            if (puVar27 < puVar37) goto LAB_1006d92e8;
LAB_1006d9430:
            puVar36 = (ulong *)param_2[3];
            uVar43 = *puVar37;
            puVar36[1] = puVar37[1];
            *puVar36 = uVar43;
            piVar32 = (int *)param_2[1];
            *(undefined2 *)(piVar32 + 1) = 0;
            *piVar32 = 1;
          }
          if (0xffff < uVar39 + 1) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar32 - *param_2) >> 3);
          }
          *(short *)((long)piVar32 + 6) = (short)(uVar39 + 1);
          piVar32 = piVar32 + 2;
          param_2[1] = (long)piVar32;
          uVar33 = uVar46;
          uVar46 = uVar50;
        }
      }
    } while (puVar37 < puVar23);
  }
  *param_3 = uVar46;
  param_3[1] = uVar50;
  return (long)puVar1 - (long)param_4;
joined_r0x0001006d8dc4:
  if ((piVar32 < (int *)0x4) ||
     (lVar40 = lVar40 + 1, puVar37 = puVar36,
     (int)((int)piVar32 * 4 - ((uint)LZCOUNT((int)local_a8 + 1) ^ 0x1f)) <=
     (int)(((uint)LZCOUNT((int)uVar39 + 1) ^ 0xffffffe0) + (int)piVar47 * 4 + 5)))
  goto joined_r0x0001006d8ec4;
  goto LAB_1006d7d04;
}

