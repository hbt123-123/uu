// rea decompile_all
// name: FUN_1006d5ea8
// address: 0x1006d5ea8
// body: available
// range: 0x1006d5ea8-0x1006d703b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d5ea8(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong *puVar15;
  int *piVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  ulong *puVar33;
  int iVar34;
  ulong uVar35;
  undefined8 *puVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  ulong *puVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong local_a0;
  uint local_94;
  ulong *local_78;
  ulong *local_70;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar42 = puVar1 + -1;
  lVar38 = *(long *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar39 = (ulong)uVar6;
  local_94 = *param_3;
  uVar19 = param_3[1];
  puVar2 = (ulong *)(lVar38 + uVar39);
  local_78 = param_4;
  if (puVar2 == param_4) {
    local_78 = (ulong *)((long)param_4 + 1);
  }
  local_70 = param_4;
  if (puVar42 <= local_78) {
LAB_1006d700c:
    *param_3 = local_94;
    param_3[1] = uVar19;
    return (long)puVar1 - (long)local_70;
  }
  lVar40 = *(long *)(param_1 + 0x10);
  uVar7 = *(uint *)(param_1 + 0x1c);
  puVar12 = (ulong *)((long)puVar1 - 7);
  puVar17 = (ulong *)((long)puVar1 - 3);
  puVar15 = (ulong *)((long)puVar1 - 1);
  puVar13 = puVar1 + -4;
LAB_1006d5f98:
  puVar18 = (ulong *)((long)local_78 + 1);
  uVar21 = (((int)local_78 - (int)lVar38) - local_94) + 1;
  lVar32 = lVar40;
  if (uVar6 <= uVar21) {
    lVar32 = lVar38;
  }
  if ((uVar7 < uVar21 && 2 < (uVar6 - 1) - uVar21) &&
     (*(int *)puVar18 == *(int *)(lVar32 + (ulong)uVar21))) {
    puVar23 = (ulong *)(lVar40 + uVar39);
    if (uVar6 <= uVar21) {
      puVar23 = puVar1;
    }
    lVar37 = (long)local_78 + 5;
    FUN_1006c7460(lVar37,(int *)(lVar32 + (ulong)uVar21) + 1,puVar1,puVar23,puVar2);
    uVar22 = (long)puVar18 - (long)local_70;
    puVar23 = (ulong *)param_2[3];
    piVar16 = (int *)(lVar37 + 4);
    goto joined_r0x0001006d6024;
  }
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar41 = *(long *)(param_1 + 0x40);
    uVar20 = *(uint *)(param_1 + 0xbc);
    uVar8 = 1 << (ulong)(uVar20 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    lVar37 = *(long *)(param_1 + 0x10);
    uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)local_78 - lVar32);
    uVar22 = (ulong)*(uint *)(param_1 + 0x24);
    uVar21 = uVar14 - uVar9;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
      uVar21 = *(uint *)(param_1 + 0x1c);
    }
    uVar9 = 0;
    if (uVar8 <= uVar14) {
      uVar9 = uVar14 - uVar8;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar30 = *(long *)(param_1 + 0x30);
    uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar35 = (ulong)(*(long *)(lVar32 + uVar22) * -0x30e4432340650000) >> (uVar27 & 0x3f);
        *(undefined4 *)(lVar41 + (ulong)((uint)uVar22 & ~(-1 << (ulong)(uVar20 & 0x1f))) * 4) =
             *(undefined4 *)(lVar30 + uVar35 * 4);
        *(uint *)(lVar30 + uVar35 * 4) = (uint)uVar22;
        uVar22 = uVar22 + 1;
      } while (((long)local_78 - lVar32 & 0xffffffffU) != uVar22);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar22 = *local_78;
    uVar20 = *(uint *)(lVar30 + (uVar22 * -0x30e4432340650000 >> (uVar27 & 0x3f)) * 4);
    if (uVar21 < uVar20) {
      iVar34 = 1 << (ulong)(uVar5 & 0x1f);
      local_a0 = 999999999;
      piVar16 = (int *)0x3;
      do {
        uVar27 = (ulong)uVar20;
        if (uVar20 < uVar4) {
          piVar3 = (int *)(lVar37 + uVar27);
          if (*piVar3 == (int)*local_78) {
            piVar26 = (int *)((long)local_78 + 4);
            FUN_1006c7460(piVar26,piVar3 + 1,puVar1,lVar37 + (ulong)uVar4,lVar32 + (ulong)uVar4);
            piVar26 = piVar26 + 1;
joined_r0x0001006d6330:
            if ((piVar16 < piVar26) &&
               (local_a0 = (ulong)((uVar14 + 2) - uVar20), piVar16 = piVar26,
               (ulong *)((long)local_78 + (long)piVar26) == puVar1)) goto LAB_1006d69b4;
          }
        }
        else {
          puVar23 = (ulong *)(lVar32 + uVar27);
          if (*(char *)((long)puVar23 + (long)piVar16) == *(char *)((long)local_78 + (long)piVar16))
          {
            puVar24 = local_78;
            if (local_78 < puVar12) {
              if (*puVar23 == uVar22) {
                lVar30 = 0;
                puVar23 = (ulong *)(lVar32 + 8 + uVar27);
                do {
                  puVar24 = puVar24 + 1;
                  if (puVar12 <= puVar24) goto LAB_1006d62d4;
                  uVar27 = *puVar23;
                  lVar30 = lVar30 + 8;
                  puVar23 = puVar23 + 1;
                } while (uVar27 == *puVar24);
                uVar27 = *puVar24 ^ uVar27;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)(lVar30 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3));
              }
              else {
                uVar27 = *puVar23 ^ uVar22;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
              }
            }
            else {
LAB_1006d62d4:
              if (puVar24 < puVar17) {
                if ((int)*puVar23 == (int)*puVar24) {
                  puVar23 = (ulong *)((long)puVar23 + 4);
                  puVar24 = (ulong *)((long)puVar24 + 4);
                }
              }
              if (puVar24 < puVar15) {
                if ((short)*puVar23 == (short)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 2);
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
              if ((puVar24 < puVar1) && ((char)*puVar23 == (char)*puVar24)) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
              piVar26 = (int *)((long)puVar24 - (long)local_78);
            }
            goto joined_r0x0001006d6330;
          }
        }
        piVar26 = piVar16;
        if ((uVar20 <= uVar9) ||
           ((iVar34 = iVar34 + -1, iVar34 == 0 ||
            (uVar20 = *(uint *)(lVar41 + (ulong)(uVar20 & uVar8 - 1) * 4), piVar16 = piVar26,
            uVar20 <= uVar21)))) goto LAB_1006d69b4;
      } while( true );
    }
  }
  else if (*(int *)(param_1 + 200) == 5) {
    lVar41 = *(long *)(param_1 + 0x40);
    uVar20 = *(uint *)(param_1 + 0xbc);
    uVar8 = 1 << (ulong)(uVar20 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    lVar37 = *(long *)(param_1 + 0x10);
    uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)local_78 - lVar32);
    uVar22 = (ulong)*(uint *)(param_1 + 0x24);
    uVar21 = uVar14 - uVar9;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
      uVar21 = *(uint *)(param_1 + 0x1c);
    }
    uVar9 = 0;
    if (uVar8 <= uVar14) {
      uVar9 = uVar14 - uVar8;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar30 = *(long *)(param_1 + 0x30);
    uVar27 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar35 = (ulong)(*(long *)(lVar32 + uVar22) * -0x30e4432345000000) >> (uVar27 & 0x3f);
        *(undefined4 *)(lVar41 + (ulong)((uint)uVar22 & ~(-1 << (ulong)(uVar20 & 0x1f))) * 4) =
             *(undefined4 *)(lVar30 + uVar35 * 4);
        *(uint *)(lVar30 + uVar35 * 4) = (uint)uVar22;
        uVar22 = uVar22 + 1;
      } while (((long)local_78 - lVar32 & 0xffffffffU) != uVar22);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar22 = *local_78;
    uVar20 = *(uint *)(lVar30 + (uVar22 * -0x30e4432345000000 >> (uVar27 & 0x3f)) * 4);
    if (uVar21 < uVar20) {
      iVar34 = 1 << (ulong)(uVar5 & 0x1f);
      local_a0 = 999999999;
      piVar16 = (int *)0x3;
      do {
        uVar27 = (ulong)uVar20;
        if (uVar20 < uVar4) {
          piVar3 = (int *)(lVar37 + uVar27);
          if (*piVar3 == (int)*local_78) {
            piVar26 = (int *)((long)local_78 + 4);
            FUN_1006c7460(piVar26,piVar3 + 1,puVar1,lVar37 + (ulong)uVar4,lVar32 + (ulong)uVar4);
            piVar26 = piVar26 + 1;
joined_r0x0001006d6624:
            if ((piVar16 < piVar26) &&
               (local_a0 = (ulong)((uVar14 + 2) - uVar20), piVar16 = piVar26,
               (ulong *)((long)local_78 + (long)piVar26) == puVar1)) goto LAB_1006d69b4;
          }
        }
        else {
          puVar23 = (ulong *)(lVar32 + uVar27);
          if (*(char *)((long)puVar23 + (long)piVar16) == *(char *)((long)local_78 + (long)piVar16))
          {
            puVar24 = local_78;
            if (local_78 < puVar12) {
              if (*puVar23 == uVar22) {
                lVar30 = 0;
                puVar23 = (ulong *)(lVar32 + 8 + uVar27);
                do {
                  puVar24 = puVar24 + 1;
                  if (puVar12 <= puVar24) goto LAB_1006d65c8;
                  uVar27 = *puVar23;
                  lVar30 = lVar30 + 8;
                  puVar23 = puVar23 + 1;
                } while (uVar27 == *puVar24);
                uVar27 = *puVar24 ^ uVar27;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)(lVar30 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3));
              }
              else {
                uVar27 = *puVar23 ^ uVar22;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
              }
            }
            else {
LAB_1006d65c8:
              if (puVar24 < puVar17) {
                if ((int)*puVar23 == (int)*puVar24) {
                  puVar23 = (ulong *)((long)puVar23 + 4);
                  puVar24 = (ulong *)((long)puVar24 + 4);
                }
              }
              if (puVar24 < puVar15) {
                if ((short)*puVar23 == (short)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 2);
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
              if ((puVar24 < puVar1) && ((char)*puVar23 == (char)*puVar24)) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
              piVar26 = (int *)((long)puVar24 - (long)local_78);
            }
            goto joined_r0x0001006d6624;
          }
        }
        piVar26 = piVar16;
        if ((uVar20 <= uVar9) ||
           ((iVar34 = iVar34 + -1, iVar34 == 0 ||
            (uVar20 = *(uint *)(lVar41 + (ulong)(uVar20 & uVar8 - 1) * 4), piVar16 = piVar26,
            uVar20 <= uVar21)))) goto LAB_1006d69b4;
      } while( true );
    }
  }
  else {
    lVar41 = *(long *)(param_1 + 0x40);
    uVar20 = *(uint *)(param_1 + 0xbc);
    uVar8 = 1 << (ulong)(uVar20 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    lVar37 = *(long *)(param_1 + 0x10);
    uVar9 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar14 = (uint)((long)local_78 - lVar32);
    uVar22 = (ulong)*(uint *)(param_1 + 0x24);
    uVar21 = uVar14 - uVar9;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar9 || *(int *)(param_1 + 0x20) != 0) {
      uVar21 = *(uint *)(param_1 + 0x1c);
    }
    uVar9 = 0;
    if (uVar8 <= uVar14) {
      uVar9 = uVar14 - uVar8;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar30 = *(long *)(param_1 + 0x30);
    uVar11 = 0x20 - *(int *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar10 = (uint)(*(int *)(lVar32 + uVar22) * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
        *(undefined4 *)(lVar41 + (ulong)((uint)uVar22 & ~(-1 << (ulong)(uVar20 & 0x1f))) * 4) =
             *(undefined4 *)(lVar30 + (ulong)uVar10 * 4);
        *(uint *)(lVar30 + (ulong)uVar10 * 4) = (uint)uVar22;
        uVar22 = uVar22 + 1;
      } while (((long)local_78 - lVar32 & 0xffffffffU) != uVar22);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar22 = *local_78;
    uVar20 = *(uint *)(lVar30 + (ulong)((uint)((int)uVar22 * -0x61c8864f) >> (ulong)(uVar11 & 0x1f))
                                * 4);
    if (uVar21 < uVar20) {
      iVar34 = 1 << (ulong)(uVar5 & 0x1f);
      local_a0 = 999999999;
      piVar16 = (int *)0x3;
      do {
        uVar27 = (ulong)uVar20;
        if (uVar20 < uVar4) {
          piVar3 = (int *)(lVar37 + uVar27);
          if (*piVar3 == (int)uVar22) {
            piVar26 = (int *)((long)local_78 + 4);
            FUN_1006c7460(piVar26,piVar3 + 1,puVar1,lVar37 + (ulong)uVar4,lVar32 + (ulong)uVar4);
            piVar26 = piVar26 + 1;
joined_r0x0001006d6904:
            if ((piVar16 < piVar26) &&
               (local_a0 = (ulong)((uVar14 + 2) - uVar20), piVar16 = piVar26,
               (ulong *)((long)local_78 + (long)piVar26) == puVar1)) goto LAB_1006d69b4;
          }
        }
        else {
          puVar23 = (ulong *)(lVar32 + uVar27);
          if (*(char *)((long)puVar23 + (long)piVar16) == *(char *)((long)local_78 + (long)piVar16))
          {
            puVar24 = local_78;
            if (local_78 < puVar12) {
              if (*puVar23 == *local_78) {
                lVar30 = 0;
                puVar23 = (ulong *)(lVar32 + 8 + uVar27);
                do {
                  puVar24 = puVar24 + 1;
                  if (puVar12 <= puVar24) goto LAB_1006d68a8;
                  uVar27 = *puVar23;
                  lVar30 = lVar30 + 8;
                  puVar23 = puVar23 + 1;
                } while (uVar27 == *puVar24);
                uVar27 = *puVar24 ^ uVar27;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)(lVar30 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3));
              }
              else {
                uVar27 = *local_78 ^ *puVar23;
                uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                piVar26 = (int *)((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3);
              }
            }
            else {
LAB_1006d68a8:
              if (puVar24 < puVar17) {
                if ((int)*puVar23 == (int)*puVar24) {
                  puVar23 = (ulong *)((long)puVar23 + 4);
                  puVar24 = (ulong *)((long)puVar24 + 4);
                }
              }
              if (puVar24 < puVar15) {
                if ((short)*puVar23 == (short)*puVar24) {
                  puVar24 = (ulong *)((long)puVar24 + 2);
                  puVar23 = (ulong *)((long)puVar23 + 2);
                }
              }
              if ((puVar24 < puVar1) && ((char)*puVar23 == (char)*puVar24)) {
                puVar24 = (ulong *)((long)puVar24 + 1);
              }
              piVar26 = (int *)((long)puVar24 - (long)local_78);
            }
            goto joined_r0x0001006d6904;
          }
        }
        piVar26 = piVar16;
        if ((uVar20 <= uVar9) ||
           ((iVar34 = iVar34 + -1, iVar34 == 0 ||
            (uVar20 = *(uint *)(lVar41 + (ulong)(uVar20 & uVar8 - 1) * 4), piVar16 = piVar26,
            uVar20 <= uVar21)))) goto LAB_1006d69b4;
      } while( true );
    }
  }
  goto LAB_1006d5f68;
LAB_1006d69b4:
  if (piVar26 != (int *)0x0) {
    puVar18 = local_78;
  }
  if (piVar26 < (int *)0x4) {
LAB_1006d5f68:
    local_78 = (ulong *)((long)local_78 + ((long)local_78 - (long)local_70 >> 8) + 1);
    goto LAB_1006d5f8c;
  }
  piVar16 = piVar26;
  if (local_a0 == 0) {
    uVar22 = (long)puVar18 - (long)local_70;
    puVar23 = (ulong *)param_2[3];
joined_r0x0001006d6024:
    iVar34 = 1;
    uVar21 = local_94;
    local_94 = uVar19;
    if (puVar13 < puVar18) goto LAB_1006d6028;
LAB_1006d6af8:
    uVar27 = *local_70;
    puVar23[1] = local_70[1];
    *puVar23 = uVar27;
    lVar32 = param_2[3];
    if (0x10 < uVar22) {
      uVar27 = local_70[2];
      *(ulong *)(lVar32 + 0x18) = local_70[3];
      *(ulong *)(lVar32 + 0x10) = uVar27;
      uVar27 = local_70[4];
      *(ulong *)(lVar32 + 0x28) = local_70[5];
      *(ulong *)(lVar32 + 0x20) = uVar27;
      if (0x30 < (long)uVar22) {
        puVar23 = (ulong *)(lVar32 + 0x30);
        puVar24 = local_70 + 8;
        do {
          uVar27 = puVar24[-2];
          puVar23[1] = puVar24[-1];
          *puVar23 = uVar27;
          uVar27 = *puVar24;
          puVar23[3] = puVar24[1];
          puVar23[2] = uVar27;
          puVar23 = puVar23 + 4;
          puVar24 = puVar24 + 4;
        } while (puVar23 < (ulong *)(lVar32 + uVar22));
      }
      goto LAB_1006d6c04;
    }
    param_2[3] = lVar32 + uVar22;
    piVar26 = (int *)param_2[1];
  }
  else {
    uVar22 = (long)local_78 + (2 - (local_a0 + lVar38));
    puVar23 = (ulong *)(lVar40 + (ulong)uVar7);
    lVar32 = lVar40;
    if (uVar6 <= (uint)uVar22) {
      puVar23 = puVar2;
      lVar32 = lVar38;
    }
    if ((local_70 < local_78) &&
       (uVar22 = uVar22 & 0xffffffff, puVar23 < (ulong *)(lVar32 + uVar22))) {
      puVar24 = (ulong *)(lVar32 + uVar22);
      do {
        puVar28 = (ulong *)((long)puVar18 + -1);
        puVar24 = (ulong *)((long)puVar24 + -1);
        if ((*(char *)puVar28 != *(char *)puVar24) ||
           (piVar16 = (int *)((long)piVar16 + 1), puVar18 = puVar28, puVar28 <= local_70)) break;
      } while (puVar23 < puVar24);
    }
    iVar34 = 0;
    if (piVar26 != (int *)0x0) {
      iVar34 = (int)local_a0;
    }
    uVar21 = iVar34 - 2;
    iVar34 = iVar34 + 1;
    uVar22 = (long)puVar18 - (long)local_70;
    puVar23 = (ulong *)param_2[3];
    if (puVar18 <= puVar13) goto LAB_1006d6af8;
LAB_1006d6028:
    puVar24 = puVar23;
    puVar28 = local_70;
    if (local_70 <= puVar13) {
      puVar24 = (ulong *)((long)puVar23 + ((long)puVar13 - (long)local_70));
      uVar27 = *local_70;
      puVar23[1] = local_70[1];
      *puVar23 = uVar27;
      uVar27 = local_70[2];
      puVar23[3] = local_70[3];
      puVar23[2] = uVar27;
      puVar28 = puVar13;
      if (0x20 < (long)puVar13 - (long)local_70) {
        puVar23 = puVar23 + 4;
        puVar29 = local_70 + 6;
        do {
          uVar27 = puVar29[-2];
          puVar23[1] = puVar29[-1];
          *puVar23 = uVar27;
          uVar27 = *puVar29;
          puVar23[3] = puVar29[1];
          puVar23[2] = uVar27;
          puVar23 = puVar23 + 4;
          puVar29 = puVar29 + 4;
        } while (puVar23 < puVar24);
      }
    }
    local_70 = puVar28;
    if (local_70 < puVar18) {
      uVar27 = (long)puVar18 - (long)local_70;
      if ((7 < uVar27) && (0x3f < (ulong)((long)puVar24 - (long)local_70))) {
        if (uVar27 < 0x40) {
          uVar31 = 0;
        }
        else {
          uVar31 = uVar27 & 0xffffffffffffffc0;
          puVar23 = puVar24 + 4;
          puVar28 = local_70 + 4;
          uVar35 = uVar31;
          do {
            uVar43 = puVar28[-4];
            uVar45 = puVar28[-1];
            uVar44 = puVar28[-2];
            uVar47 = puVar28[1];
            uVar46 = *puVar28;
            uVar49 = puVar28[3];
            uVar48 = puVar28[2];
            puVar23[-3] = puVar28[-3];
            puVar23[-4] = uVar43;
            puVar23[-1] = uVar45;
            puVar23[-2] = uVar44;
            puVar23[1] = uVar47;
            *puVar23 = uVar46;
            puVar23[3] = uVar49;
            puVar23[2] = uVar48;
            uVar35 = uVar35 - 0x40;
            puVar23 = puVar23 + 8;
            puVar28 = puVar28 + 8;
          } while (uVar35 != 0);
          if (uVar27 == uVar31) goto LAB_1006d6c04;
          if ((uVar27 & 0x38) == 0) {
            local_70 = (ulong *)((long)local_70 + uVar31);
            puVar24 = (ulong *)((long)puVar24 + uVar31);
            goto LAB_1006d6bf4;
          }
        }
        uVar35 = uVar27 & 0xfffffffffffffff8;
        lVar32 = uVar31 - uVar35;
        puVar25 = (undefined8 *)((long)puVar24 + uVar31);
        puVar36 = (undefined8 *)((long)local_70 + uVar31);
        do {
          *puVar25 = *puVar36;
          lVar32 = lVar32 + 8;
          puVar25 = puVar25 + 1;
          puVar36 = puVar36 + 1;
        } while (lVar32 != 0);
        puVar24 = (ulong *)((long)puVar24 + uVar35);
        local_70 = (ulong *)((long)local_70 + uVar35);
        if (uVar27 == uVar35) goto LAB_1006d6c04;
      }
LAB_1006d6bf4:
      do {
        puVar23 = (ulong *)((long)local_70 + 1);
        *(char *)puVar24 = (char)*local_70;
        puVar24 = (ulong *)((long)puVar24 + 1);
        local_70 = puVar23;
      } while (puVar23 != puVar18);
    }
LAB_1006d6c04:
    param_2[3] = param_2[3] + uVar22;
    piVar26 = (int *)param_2[1];
    if (0xffff < uVar22) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
    }
  }
  *(short *)(piVar26 + 1) = (short)uVar22;
  *piVar26 = iVar34;
  if (0xffff < (long)piVar16 - 3U) {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
  }
  *(short *)((long)piVar26 + 6) = (short)((long)piVar16 - 3U);
  piVar26 = piVar26 + 2;
  param_2[1] = (long)piVar26;
  uVar19 = local_94;
  for (local_78 = (ulong *)((long)puVar18 + (long)piVar16); local_94 = uVar21, local_70 = local_78,
      local_78 <= puVar42; local_78 = (ulong *)((long)local_78 + uVar22 + 4)) {
    uVar22 = (long)local_78 - (lVar38 + (ulong)uVar19);
    uVar21 = (uint)uVar22;
    lVar32 = lVar40;
    if (uVar6 <= uVar21) {
      lVar32 = lVar38;
    }
    if (uVar21 <= uVar7 || (uVar6 - 1) - uVar21 < 3) break;
    uVar22 = uVar22 & 0xffffffff;
    piVar16 = (int *)(lVar32 + uVar22);
    if ((int)*local_78 != *piVar16) break;
    puVar18 = (ulong *)(lVar40 + uVar39);
    if (uVar6 <= uVar21) {
      puVar18 = puVar1;
    }
    puVar23 = (ulong *)((long)local_78 + 4);
    puVar24 = (ulong *)(piVar16 + 1);
    puVar28 = (ulong *)((long)puVar23 + ((long)puVar18 - (long)puVar24));
    if (puVar1 <= puVar28) {
      puVar28 = puVar1;
    }
    puVar29 = puVar23;
    puVar33 = puVar24;
    if (puVar23 < (ulong *)((long)puVar28 - 7U)) {
      if (*puVar24 == *puVar23) {
        lVar37 = 0;
        puVar29 = (ulong *)((long)local_78 + 0xc);
        puVar33 = (ulong *)(lVar32 + uVar22 + 0xc);
        do {
          if ((ulong *)((long)puVar28 - 7U) <= puVar29) goto LAB_1006d6da0;
          uVar22 = *puVar33;
          uVar27 = *puVar29;
          lVar37 = lVar37 + 8;
          puVar29 = puVar29 + 1;
          puVar33 = puVar33 + 1;
        } while (uVar22 == uVar27);
        uVar27 = uVar27 ^ uVar22;
        uVar22 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar22 = lVar37 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
      }
      else {
        uVar22 = *puVar23 ^ *puVar24;
        uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
      }
      if ((ulong *)((long)puVar24 + uVar22) == puVar18) goto LAB_1006d6e78;
joined_r0x0001006d6e08:
      if (puVar13 < local_78) goto LAB_1006d6e0c;
LAB_1006d6f58:
      puVar18 = (ulong *)param_2[3];
      uVar27 = *local_78;
      puVar18[1] = local_78[1];
      *puVar18 = uVar27;
      piVar26 = (int *)param_2[1];
      *(undefined2 *)(piVar26 + 1) = 0;
      *piVar26 = 1;
    }
    else {
LAB_1006d6da0:
      if (puVar29 < (ulong *)((long)puVar28 - 3U)) {
        if ((int)*puVar33 == (int)*puVar29) {
          puVar29 = (ulong *)((long)puVar29 + 4);
          puVar33 = (ulong *)((long)puVar33 + 4);
        }
        if (puVar29 < (ulong *)((long)puVar28 - 1U)) {
LAB_1006d6e34:
          if ((short)*puVar33 == (short)*puVar29) {
            puVar29 = (ulong *)((long)puVar29 + 2);
            puVar33 = (ulong *)((long)puVar33 + 2);
          }
        }
      }
      else if (puVar29 < (ulong *)((long)puVar28 - 1U)) goto LAB_1006d6e34;
      if ((puVar29 < puVar28) && ((char)*puVar33 == (char)*puVar29)) {
        puVar29 = (ulong *)((long)puVar29 + 1);
      }
      uVar22 = (long)puVar29 - (long)puVar23;
      if ((ulong *)((long)puVar24 + uVar22) != puVar18) goto joined_r0x0001006d6e08;
LAB_1006d6e78:
      puVar23 = (ulong *)((long)puVar23 + uVar22);
      puVar24 = puVar23;
      puVar18 = puVar2;
      if (puVar23 < puVar12) {
        if (*puVar2 == *puVar23) {
          lVar32 = 0;
          puVar24 = (ulong *)((long)local_78 + uVar22 + 0xc);
          puVar18 = (ulong *)(uVar39 + lVar38);
          do {
            puVar18 = puVar18 + 1;
            if (puVar12 <= puVar24) goto LAB_1006d6ef4;
            uVar27 = *puVar24;
            lVar32 = lVar32 + 8;
            puVar24 = puVar24 + 1;
          } while (*puVar18 == uVar27);
          uVar27 = uVar27 ^ *puVar18;
          uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
          uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
          uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          uVar22 = lVar32 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar22;
        }
        else {
          uVar27 = *puVar23 ^ *puVar2;
          uVar27 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
          uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
          uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          uVar22 = ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) + uVar22;
        }
        goto joined_r0x0001006d6e08;
      }
LAB_1006d6ef4:
      if (puVar24 < puVar17) {
        if ((int)*puVar18 == (int)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 4);
          puVar18 = (ulong *)((long)puVar18 + 4);
        }
      }
      if (puVar24 < puVar15) {
        if ((short)*puVar18 == (short)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 2);
          puVar18 = (ulong *)((long)puVar18 + 2);
        }
      }
      if ((puVar24 < puVar1) && ((char)*puVar18 == (char)*puVar24)) {
        puVar24 = (ulong *)((long)puVar24 + 1);
      }
      uVar22 = (long)puVar24 + (uVar22 - (long)puVar23);
      if (local_78 <= puVar13) goto LAB_1006d6f58;
LAB_1006d6e0c:
      *(undefined2 *)(piVar26 + 1) = 0;
      *piVar26 = 1;
    }
    if (0xffff < uVar22 + 1) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar26 - *param_2) >> 3);
    }
    *(short *)((long)piVar26 + 6) = (short)(uVar22 + 1);
    piVar26 = piVar26 + 2;
    param_2[1] = (long)piVar26;
    uVar21 = uVar19;
    uVar19 = local_94;
  }
LAB_1006d5f8c:
  if (puVar42 <= local_78) goto LAB_1006d700c;
  goto LAB_1006d5f98;
}

