// rea decompile_all
// name: FUN_1006ceb2c
// address: 0x1006ceb2c
// body: available
// range: 0x1006ceb2c-0x1006d0a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006ceb2c(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  int *piVar22;
  ulong *puVar23;
  ulong uVar24;
  uint uVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  int iVar30;
  ulong *puVar31;
  long lVar32;
  ulong *puVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  uint local_84;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar31 = puVar1 + -1;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18);
  puVar28 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar28 = (ulong *)((long)param_4 + 1);
  }
  uVar9 = (int)puVar28 - (int)uVar2;
  local_84 = 0;
  if (uVar4 <= uVar9) {
    local_84 = uVar4;
  }
  uVar34 = 0;
  if (uVar3 <= uVar9) {
    uVar34 = uVar3;
  }
  if (puVar31 <= puVar28) {
LAB_1006d0a14:
    if (uVar4 <= uVar9) {
      uVar4 = 0;
    }
    if (uVar3 <= uVar9) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3;
    if (uVar34 != 0) {
      uVar4 = uVar34;
    }
    if (local_84 != 0) {
      uVar3 = local_84;
    }
    *param_3 = uVar4;
    param_3[1] = uVar3;
    return (long)puVar1 - (long)param_4;
  }
  puVar14 = (ulong *)((long)puVar1 - 7);
  puVar23 = (ulong *)((long)puVar1 - 3);
  puVar18 = (ulong *)((long)puVar1 - 1);
  puVar19 = puVar1 + -4;
LAB_1006cec00:
  uVar24 = 0;
  puVar20 = (ulong *)((long)puVar28 + 1);
  lVar11 = -(ulong)uVar34;
  if ((uVar34 != 0) && (*(int *)((long)puVar20 - (ulong)uVar34) == *(int *)puVar20)) {
    puVar16 = (ulong *)((long)puVar28 + 5);
    puVar27 = (ulong *)((long)puVar16 + lVar11);
    puVar21 = puVar16;
    if (puVar16 < puVar14) {
      if (*puVar27 == *puVar16) {
        lVar32 = 0;
        puVar21 = (ulong *)((long)puVar28 + 0xd);
        puVar27 = (ulong *)((long)puVar28 + 0xd + lVar11);
        do {
          if (puVar14 <= puVar21) goto LAB_1006cec88;
          uVar40 = *puVar27;
          uVar24 = *puVar21;
          lVar32 = lVar32 + 8;
          puVar21 = puVar21 + 1;
          puVar27 = puVar27 + 1;
        } while (uVar40 == uVar24);
        uVar24 = uVar24 ^ uVar40;
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = lVar32 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
      }
      else {
        uVar24 = *puVar16 ^ *puVar27;
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      }
    }
    else {
LAB_1006cec88:
      if ((puVar21 < puVar23) && ((int)*puVar27 == (int)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 4);
        puVar27 = (ulong *)((long)puVar27 + 4);
      }
      if ((puVar21 < puVar18) && ((short)*puVar27 == (short)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 2);
        puVar27 = (ulong *)((long)puVar27 + 2);
      }
      if ((puVar21 < puVar1) && ((char)*puVar27 == (char)*puVar21)) {
        puVar21 = (ulong *)((long)puVar21 + 1);
      }
      uVar24 = (long)puVar21 - (long)puVar16;
    }
    uVar24 = uVar24 + 4;
  }
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar42 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar25 = (uint)((long)puVar28 - lVar32);
    uVar35 = uVar25 - uVar7;
    if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar25) {
      uVar7 = uVar25 - uVar6;
    }
    uVar39 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar40 = (ulong)*(uint *)(param_1 + 0x24);
    uVar15 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar25) {
      do {
        uVar36 = (ulong)(*(long *)(lVar32 + uVar40) * -0x30e4432340650000) >> (uVar15 & 0x3f);
        *(undefined4 *)(lVar42 + (ulong)((uint)uVar40 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar36 * 4);
        *(uint *)(lVar41 + uVar36 * 4) = (uint)uVar40;
        uVar40 = uVar40 + 1;
      } while (((long)puVar28 - lVar32 & 0xffffffffU) != uVar40);
    }
    *(uint *)(param_1 + 0x24) = uVar25;
    uVar36 = *puVar28;
    uVar38 = *(uint *)(lVar41 + (uVar36 * -0x30e4432340650000 >> (uVar15 & 0x3f)) * 4);
    if (uVar38 <= uVar35) goto LAB_1006cf3b8;
    iVar30 = 1 << (ulong)(uVar39 & 0x1f);
    uVar15 = 3;
    uVar40 = 999999999;
    do {
      puVar16 = (ulong *)(lVar32 + (ulong)uVar38);
      if (*(char *)((long)puVar16 + uVar15) == *(char *)((long)puVar28 + uVar15)) {
        puVar21 = puVar28;
        if (puVar28 < puVar14) {
          if (*puVar16 == uVar36) {
            lVar41 = 0;
            puVar16 = (ulong *)(lVar32 + 8 + (ulong)uVar38);
            do {
              puVar21 = puVar21 + 1;
              if (puVar14 <= puVar21) goto LAB_1006cee64;
              uVar17 = *puVar16;
              lVar41 = lVar41 + 8;
              puVar16 = puVar16 + 1;
            } while (uVar17 == *puVar21);
            uVar17 = *puVar21 ^ uVar17;
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = lVar41 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
          }
          else {
            uVar17 = *puVar16 ^ uVar36;
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
          }
        }
        else {
LAB_1006cee64:
          if (puVar21 < puVar23) {
            if ((int)*puVar16 == (int)*puVar21) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar21 = (ulong *)((long)puVar21 + 4);
            }
          }
          if (puVar21 < puVar18) {
            if ((short)*puVar16 == (short)*puVar21) {
              puVar16 = (ulong *)((long)puVar16 + 2);
              puVar21 = (ulong *)((long)puVar21 + 2);
            }
          }
          if ((puVar21 < puVar1) && ((char)*puVar16 == (char)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          uVar17 = (long)puVar21 - (long)puVar28;
        }
        if ((uVar15 < uVar17) &&
           (uVar40 = (ulong)((uVar25 + 2) - uVar38), uVar15 = uVar17,
           (ulong *)((long)puVar28 + uVar17) == puVar1)) break;
      }
      if ((uVar38 <= uVar7) || (iVar30 = iVar30 + -1, iVar30 == 0)) goto LAB_1006cf3d8;
      uVar38 = *(uint *)(lVar42 + (ulong)(uVar38 & uVar6 - 1) * 4);
    } while (uVar35 < uVar38);
  }
  else if (*(int *)(param_1 + 200) == 5) {
    lVar42 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar25 = (uint)((long)puVar28 - lVar32);
    uVar35 = uVar25 - uVar7;
    if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar25) {
      uVar7 = uVar25 - uVar6;
    }
    uVar39 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar40 = (ulong)*(uint *)(param_1 + 0x24);
    uVar15 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar25) {
      do {
        uVar36 = (ulong)(*(long *)(lVar32 + uVar40) * -0x30e4432345000000) >> (uVar15 & 0x3f);
        *(undefined4 *)(lVar42 + (ulong)((uint)uVar40 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar36 * 4);
        *(uint *)(lVar41 + uVar36 * 4) = (uint)uVar40;
        uVar40 = uVar40 + 1;
      } while (((long)puVar28 - lVar32 & 0xffffffffU) != uVar40);
    }
    *(uint *)(param_1 + 0x24) = uVar25;
    uVar36 = *puVar28;
    uVar38 = *(uint *)(lVar41 + (uVar36 * -0x30e4432345000000 >> (uVar15 & 0x3f)) * 4);
    if (uVar35 < uVar38) {
      iVar30 = 1 << (ulong)(uVar39 & 0x1f);
      uVar15 = 3;
      uVar40 = 999999999;
      do {
        puVar16 = (ulong *)(lVar32 + (ulong)uVar38);
        if (*(char *)((long)puVar16 + uVar15) == *(char *)((long)puVar28 + uVar15)) {
          puVar21 = puVar28;
          if (puVar28 < puVar14) {
            if (*puVar16 == uVar36) {
              lVar41 = 0;
              puVar16 = (ulong *)(lVar32 + 8 + (ulong)uVar38);
              do {
                puVar21 = puVar21 + 1;
                if (puVar14 <= puVar21) goto LAB_1006cf098;
                uVar17 = *puVar16;
                lVar41 = lVar41 + 8;
                puVar16 = puVar16 + 1;
              } while (uVar17 == *puVar21);
              uVar17 = *puVar21 ^ uVar17;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = lVar41 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
            }
            else {
              uVar17 = *puVar16 ^ uVar36;
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
            }
          }
          else {
LAB_1006cf098:
            if (puVar21 < puVar23) {
              if ((int)*puVar16 == (int)*puVar21) {
                puVar16 = (ulong *)((long)puVar16 + 4);
                puVar21 = (ulong *)((long)puVar21 + 4);
              }
            }
            if (puVar21 < puVar18) {
              if ((short)*puVar16 == (short)*puVar21) {
                puVar16 = (ulong *)((long)puVar16 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
            }
            if ((puVar21 < puVar1) && ((char)*puVar16 == (char)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 1);
            }
            uVar17 = (long)puVar21 - (long)puVar28;
          }
          if ((uVar15 < uVar17) &&
             (uVar40 = (ulong)((uVar25 + 2) - uVar38), uVar15 = uVar17,
             (ulong *)((long)puVar28 + uVar17) == puVar1)) break;
        }
        if ((uVar38 <= uVar7) || (iVar30 = iVar30 + -1, iVar30 == 0)) goto LAB_1006cf3d8;
        uVar38 = *(uint *)(lVar42 + (ulong)(uVar38 & uVar6 - 1) * 4);
      } while (uVar35 < uVar38);
    }
    else {
LAB_1006cf3b8:
      uVar40 = 999999999;
      uVar15 = 3;
    }
  }
  else {
    lVar42 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar25 = (uint)((long)puVar28 - lVar32);
    uVar35 = uVar25 - uVar7;
    if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar25) {
      uVar7 = uVar25 - uVar6;
    }
    uVar39 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar40 = (ulong)*(uint *)(param_1 + 0x24);
    uVar5 = 0x20 - *(int *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x24) < uVar25) {
      do {
        uVar10 = (uint)(*(int *)(lVar32 + uVar40) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
        *(undefined4 *)(lVar42 + (ulong)((uint)uVar40 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + (ulong)uVar10 * 4);
        *(uint *)(lVar41 + (ulong)uVar10 * 4) = (uint)uVar40;
        uVar40 = uVar40 + 1;
      } while (((long)puVar28 - lVar32 & 0xffffffffU) != uVar40);
    }
    *(uint *)(param_1 + 0x24) = uVar25;
    uVar38 = *(uint *)(lVar41 + (ulong)((uint)((int)*puVar28 * -0x61c8864f) >> (ulong)(uVar5 & 0x1f)
                                       ) * 4);
    if (uVar38 <= uVar35) goto LAB_1006cf3b8;
    iVar30 = 1 << (ulong)(uVar39 & 0x1f);
    uVar15 = 3;
    uVar40 = 999999999;
    do {
      puVar16 = (ulong *)(lVar32 + (ulong)uVar38);
      if (*(char *)((long)puVar16 + uVar15) == *(char *)((long)puVar28 + uVar15)) {
        puVar21 = puVar28;
        if (puVar28 < puVar14) {
          if (*puVar16 == *puVar28) {
            lVar41 = 0;
            puVar16 = (ulong *)(lVar32 + 8 + (ulong)uVar38);
            do {
              puVar21 = puVar21 + 1;
              if (puVar14 <= puVar21) goto LAB_1006cf2d0;
              uVar36 = *puVar16;
              lVar41 = lVar41 + 8;
              puVar16 = puVar16 + 1;
            } while (uVar36 == *puVar21);
            uVar36 = *puVar21 ^ uVar36;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            uVar36 = lVar41 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
          }
          else {
            uVar36 = *puVar28 ^ *puVar16;
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
          }
        }
        else {
LAB_1006cf2d0:
          if (puVar21 < puVar23) {
            if ((int)*puVar16 == (int)*puVar21) {
              puVar16 = (ulong *)((long)puVar16 + 4);
              puVar21 = (ulong *)((long)puVar21 + 4);
            }
          }
          if (puVar21 < puVar18) {
            if ((short)*puVar16 == (short)*puVar21) {
              puVar16 = (ulong *)((long)puVar16 + 2);
              puVar21 = (ulong *)((long)puVar21 + 2);
            }
          }
          if ((puVar21 < puVar1) && ((char)*puVar16 == (char)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
          uVar36 = (long)puVar21 - (long)puVar28;
        }
        if ((uVar15 < uVar36) &&
           (uVar40 = (ulong)((uVar25 + 2) - uVar38), uVar15 = uVar36,
           (ulong *)((long)puVar28 + uVar36) == puVar1)) break;
      }
      if ((uVar38 <= uVar7) || (iVar30 = iVar30 + -1, iVar30 == 0)) goto LAB_1006cf3d8;
      uVar38 = *(uint *)(lVar42 + (ulong)(uVar38 & uVar6 - 1) * 4);
    } while (uVar35 < uVar38);
  }
  uVar36 = uVar15;
  if (uVar15 <= uVar24) {
    uVar36 = uVar24;
  }
  goto joined_r0x0001006cf3e8;
LAB_1006cf3d8:
  uVar36 = uVar15;
  if (uVar15 <= uVar24) {
    uVar36 = uVar24;
  }
joined_r0x0001006cf3e8:
  if (uVar36 < 4) {
    puVar28 = (ulong *)((long)puVar28 + ((long)puVar28 - (long)param_4 >> 8) + 1);
    goto LAB_1006cebf8;
  }
  puVar16 = puVar28;
  if (uVar15 <= uVar24) {
    uVar40 = 0;
    puVar16 = puVar20;
  }
  if (puVar28 < puVar31) {
LAB_1006cf404:
    puVar20 = (ulong *)((long)puVar28 + 1);
    if (((uVar40 != 0) && (uVar34 != 0)) && (*(int *)puVar20 == *(int *)((long)puVar20 + lVar11))) {
      puVar21 = (ulong *)((long)puVar28 + 5);
      puVar33 = (ulong *)((long)puVar21 + lVar11);
      puVar27 = puVar21;
      if (puVar21 < puVar14) {
        if (*puVar33 == *puVar21) {
          puVar27 = (ulong *)((long)puVar28 + 0xd);
          puVar33 = (ulong *)((long)puVar28 + 0xd + lVar11);
          do {
            if (puVar14 <= puVar27) goto LAB_1006cfb7c;
            uVar15 = *puVar33;
            puVar26 = puVar27 + 1;
            uVar24 = *puVar27;
            puVar27 = puVar26;
            puVar33 = puVar33 + 1;
          } while (uVar15 == uVar24);
          uVar24 = uVar24 ^ uVar15;
          uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          puVar27 = (ulong *)((long)puVar26 +
                             (((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) - 8));
          goto LAB_1006cfbe0;
        }
        uVar24 = *puVar21 ^ *puVar33;
        uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
      }
      else {
LAB_1006cfb7c:
        if ((puVar27 < puVar23) && ((int)*puVar33 == (int)*puVar27)) {
          puVar27 = (ulong *)((long)puVar27 + 4);
          puVar33 = (ulong *)((long)puVar33 + 4);
        }
        if ((puVar27 < puVar18) && ((short)*puVar33 == (short)*puVar27)) {
          puVar27 = (ulong *)((long)puVar27 + 2);
          puVar33 = (ulong *)((long)puVar33 + 2);
        }
        if ((puVar27 < puVar1) && ((char)*puVar33 == (char)*puVar27)) {
          puVar27 = (ulong *)((long)puVar27 + 1);
        }
LAB_1006cfbe0:
        uVar24 = (long)puVar27 - (long)puVar21;
        if (0xfffffffffffffffb < uVar24) goto LAB_1006cf498;
      }
      if ((int)((int)uVar36 * 3 + ((uint)LZCOUNT((int)uVar40 + 1) ^ 0xffffffe0) + 2) <
          (int)(uVar24 + 4) * 3) {
        uVar40 = 0;
        puVar16 = puVar20;
        uVar36 = uVar24 + 4;
      }
    }
LAB_1006cf498:
    if (*(int *)(param_1 + 200) - 6U < 2) {
      lVar42 = *(long *)(param_1 + 0x40);
      uVar38 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar38 & 0x1f);
      lVar32 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar25 = (uint)((long)puVar20 - lVar32);
      uVar35 = uVar25 - uVar7;
      if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar35 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar25) {
        uVar7 = uVar25 - uVar6;
      }
      uVar39 = *(uint *)(param_1 + 0xc4);
      lVar41 = *(long *)(param_1 + 0x30);
      uVar24 = (ulong)*(uint *)(param_1 + 0x24);
      uVar15 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      if (*(uint *)(param_1 + 0x24) < uVar25) {
        do {
          uVar17 = (ulong)(*(long *)(lVar32 + uVar24) * -0x30e4432340650000) >> (uVar15 & 0x3f);
          *(undefined4 *)(lVar42 + (ulong)((uint)uVar24 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
               *(undefined4 *)(lVar41 + uVar17 * 4);
          *(uint *)(lVar41 + uVar17 * 4) = (uint)uVar24;
          uVar24 = uVar24 + 1;
        } while (((long)puVar20 - lVar32 & 0xffffffffU) != uVar24);
      }
      *(uint *)(param_1 + 0x24) = uVar25;
      uVar24 = *puVar20;
      uVar38 = *(uint *)(lVar41 + (uVar24 * -0x30e4432340650000 >> (uVar15 & 0x3f)) * 4);
      if (uVar38 <= uVar35) goto LAB_1006cfc78;
      iVar30 = 1 << (ulong)(uVar39 & 0x1f);
      uVar15 = 3;
      uVar17 = 999999999;
      do {
        puVar21 = (ulong *)(lVar32 + (ulong)uVar38);
        if (*(char *)((long)puVar21 + uVar15) == *(char *)((long)puVar20 + uVar15)) {
          puVar27 = puVar20;
          if (puVar20 < puVar14) {
            if (*puVar21 == uVar24) {
              lVar41 = 0;
              puVar21 = (ulong *)(lVar32 + 8 + (ulong)uVar38);
              puVar27 = (ulong *)((long)puVar28 + 9);
              do {
                if (puVar14 <= puVar27) goto LAB_1006cf5ec;
                uVar37 = *puVar21;
                uVar12 = *puVar27;
                lVar41 = lVar41 + 8;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar37 == uVar12);
              uVar12 = uVar12 ^ uVar37;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar41 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
            else {
              uVar12 = *puVar21 ^ uVar24;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
          }
          else {
LAB_1006cf5ec:
            if (puVar27 < puVar23) {
              if ((int)*puVar21 == (int)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            }
            if (puVar27 < puVar18) {
              if ((short)*puVar21 == (short)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            uVar12 = (long)puVar27 - (long)puVar20;
          }
          if ((uVar15 < uVar12) &&
             (uVar17 = (ulong)((uVar25 + 2) - uVar38), uVar15 = uVar12,
             (ulong *)((long)puVar20 + uVar12) == puVar1)) goto joined_r0x0001006d0500;
        }
      } while ((uVar7 < uVar38) &&
              ((iVar30 = iVar30 + -1, iVar30 != 0 &&
               (uVar38 = *(uint *)(lVar42 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar35 < uVar38))));
LAB_1006cf6d0:
      if (uVar15 < 4) goto LAB_1006cfc78;
      goto LAB_1006cfc48;
    }
    if (*(int *)(param_1 + 200) == 5) {
      lVar32 = *(long *)(param_1 + 0x40);
      uVar38 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar38 & 0x1f);
      lVar42 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar25 = (uint)((long)puVar20 - lVar42);
      uVar35 = uVar25 - uVar7;
      if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar35 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar25) {
        uVar7 = uVar25 - uVar6;
      }
      uVar39 = *(uint *)(param_1 + 0xc4);
      lVar41 = *(long *)(param_1 + 0x30);
      uVar24 = (ulong)*(uint *)(param_1 + 0x24);
      uVar15 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      if (*(uint *)(param_1 + 0x24) < uVar25) {
        do {
          uVar17 = (ulong)(*(long *)(lVar42 + uVar24) * -0x30e4432345000000) >> (uVar15 & 0x3f);
          *(undefined4 *)(lVar32 + (ulong)((uint)uVar24 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
               *(undefined4 *)(lVar41 + uVar17 * 4);
          *(uint *)(lVar41 + uVar17 * 4) = (uint)uVar24;
          uVar24 = uVar24 + 1;
        } while (((long)puVar20 - lVar42 & 0xffffffffU) != uVar24);
      }
      *(uint *)(param_1 + 0x24) = uVar25;
      uVar24 = *puVar20;
      uVar38 = *(uint *)(lVar41 + (uVar24 * -0x30e4432345000000 >> (uVar15 & 0x3f)) * 4);
      if (uVar35 < uVar38) {
        iVar30 = 1 << (ulong)(uVar39 & 0x1f);
        uVar15 = 3;
        uVar17 = 999999999;
        do {
          puVar21 = (ulong *)(lVar42 + (ulong)uVar38);
          if (*(char *)((long)puVar21 + uVar15) == *(char *)((long)puVar20 + uVar15)) {
            puVar27 = puVar20;
            if (puVar20 < puVar14) {
              if (*puVar21 == uVar24) {
                lVar41 = 0;
                puVar21 = (ulong *)(lVar42 + 8 + (ulong)uVar38);
                puVar27 = (ulong *)((long)puVar28 + 9);
                do {
                  if (puVar14 <= puVar27) goto LAB_1006cf844;
                  uVar12 = *puVar21;
                  uVar37 = *puVar27;
                  lVar41 = lVar41 + 8;
                  puVar21 = puVar21 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar12 == uVar37);
                uVar37 = uVar37 ^ uVar12;
                uVar12 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar12 = lVar41 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
              }
              else {
                uVar12 = *puVar21 ^ uVar24;
                uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
                uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
              }
            }
            else {
LAB_1006cf844:
              if (puVar27 < puVar23) {
                if ((int)*puVar21 == (int)*puVar27) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar27 < puVar18) {
                if ((short)*puVar21 == (short)*puVar27) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
              uVar12 = (long)puVar27 - (long)puVar20;
            }
            if ((uVar15 < uVar12) &&
               (uVar17 = (ulong)((uVar25 + 2) - uVar38), uVar15 = uVar12,
               (ulong *)((long)puVar20 + uVar12) == puVar1)) goto joined_r0x0001006d0500;
          }
        } while ((uVar7 < uVar38) &&
                ((iVar30 = iVar30 + -1, iVar30 != 0 &&
                 (uVar38 = *(uint *)(lVar32 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar35 < uVar38))));
        goto LAB_1006cf6d0;
      }
    }
    else {
      lVar42 = *(long *)(param_1 + 0x40);
      uVar38 = *(uint *)(param_1 + 0xbc);
      uVar6 = 1 << (ulong)(uVar38 & 0x1f);
      lVar32 = *(long *)(param_1 + 8);
      uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar25 = (uint)((long)puVar20 - lVar32);
      uVar35 = uVar25 - uVar7;
      if (uVar25 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
        uVar35 = *(uint *)(param_1 + 0x1c);
      }
      uVar7 = 0;
      if (uVar6 <= uVar25) {
        uVar7 = uVar25 - uVar6;
      }
      uVar39 = *(uint *)(param_1 + 0xc4);
      lVar41 = *(long *)(param_1 + 0x30);
      uVar24 = (ulong)*(uint *)(param_1 + 0x24);
      uVar5 = 0x20 - *(int *)(param_1 + 0xc0);
      if (*(uint *)(param_1 + 0x24) < uVar25) {
        do {
          uVar10 = (uint)(*(int *)(lVar32 + uVar24) * -0x61c8864f) >> (ulong)(uVar5 & 0x1f);
          *(undefined4 *)(lVar42 + (ulong)((uint)uVar24 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
               *(undefined4 *)(lVar41 + (ulong)uVar10 * 4);
          *(uint *)(lVar41 + (ulong)uVar10 * 4) = (uint)uVar24;
          uVar24 = uVar24 + 1;
        } while (((long)puVar20 - lVar32 & 0xffffffffU) != uVar24);
      }
      *(uint *)(param_1 + 0x24) = uVar25;
      uVar38 = *(uint *)(lVar41 + (ulong)((uint)(*(int *)puVar20 * -0x61c8864f) >>
                                         (ulong)(uVar5 & 0x1f)) * 4);
      if (uVar35 < uVar38) {
        iVar30 = 1 << (ulong)(uVar39 & 0x1f);
        uVar24 = 3;
        uVar17 = 999999999;
        do {
          puVar21 = (ulong *)(lVar32 + (ulong)uVar38);
          if (*(char *)((long)puVar21 + uVar24) == *(char *)((long)puVar20 + uVar24)) {
            puVar27 = puVar20;
            if (puVar20 < puVar14) {
              if (*puVar21 == *puVar20) {
                lVar41 = 0;
                puVar21 = (ulong *)(lVar32 + 8 + (ulong)uVar38);
                puVar27 = (ulong *)((long)puVar28 + 9);
                do {
                  if (puVar14 <= puVar27) goto LAB_1006cfa78;
                  uVar12 = *puVar21;
                  uVar15 = *puVar27;
                  lVar41 = lVar41 + 8;
                  puVar21 = puVar21 + 1;
                  puVar27 = puVar27 + 1;
                } while (uVar12 == uVar15);
                uVar15 = uVar15 ^ uVar12;
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = lVar41 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
              }
              else {
                uVar15 = *puVar20 ^ *puVar21;
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
              }
            }
            else {
LAB_1006cfa78:
              if (puVar27 < puVar23) {
                if ((int)*puVar21 == (int)*puVar27) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar27 = (ulong *)((long)puVar27 + 4);
                }
              }
              if (puVar27 < puVar18) {
                if ((short)*puVar21 == (short)*puVar27) {
                  puVar21 = (ulong *)((long)puVar21 + 2);
                  puVar27 = (ulong *)((long)puVar27 + 2);
                }
              }
              if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
                puVar27 = (ulong *)((long)puVar27 + 1);
              }
              uVar15 = (long)puVar27 - (long)puVar20;
            }
            if ((uVar24 < uVar15) &&
               (uVar17 = (ulong)((uVar25 + 2) - uVar38), uVar24 = uVar15,
               (ulong *)((long)puVar20 + uVar15) == puVar1)) goto joined_r0x0001006d0500;
          }
          uVar15 = uVar24;
          if ((uVar38 <= uVar7) ||
             ((iVar30 = iVar30 + -1, iVar30 == 0 ||
              (uVar38 = *(uint *)(lVar42 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar38 <= uVar35))))
          goto joined_r0x0001006d0500;
        } while( true );
      }
    }
    goto LAB_1006cfc78;
  }
joined_r0x0001006d050c:
  if (uVar40 == 0) {
    iVar30 = 1;
    uVar24 = (long)puVar16 - (long)param_4;
    puVar28 = (ulong *)param_2[3];
    uVar35 = uVar34;
    if (puVar16 <= puVar19) goto LAB_1006d052c;
LAB_1006d0648:
    puVar20 = param_4;
    puVar21 = puVar28;
    if (param_4 <= puVar19) {
      puVar21 = (ulong *)((long)puVar28 + ((long)puVar19 - (long)param_4));
      uVar40 = *param_4;
      puVar28[1] = param_4[1];
      *puVar28 = uVar40;
      uVar40 = param_4[2];
      puVar28[3] = param_4[3];
      puVar28[2] = uVar40;
      puVar20 = puVar19;
      if (0x20 < (long)puVar19 - (long)param_4) {
        puVar28 = puVar28 + 4;
        puVar27 = param_4 + 6;
        do {
          uVar40 = puVar27[-2];
          puVar28[1] = puVar27[-1];
          *puVar28 = uVar40;
          uVar40 = *puVar27;
          puVar28[3] = puVar27[1];
          puVar28[2] = uVar40;
          puVar28 = puVar28 + 4;
          puVar27 = puVar27 + 4;
        } while (puVar28 < puVar21);
      }
    }
    if (puVar20 < puVar16) {
      uVar40 = (long)puVar16 - (long)puVar20;
      if ((7 < uVar40) && (0x3f < (ulong)((long)puVar21 - (long)puVar20))) {
        if (uVar40 < 0x40) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar40 & 0xffffffffffffffc0;
          uVar15 = uVar17;
          puVar28 = puVar21 + 4;
          puVar27 = puVar20 + 4;
          do {
            uVar12 = puVar27[-4];
            uVar43 = puVar27[-1];
            uVar37 = puVar27[-2];
            uVar45 = puVar27[1];
            uVar44 = *puVar27;
            uVar47 = puVar27[3];
            uVar46 = puVar27[2];
            puVar28[-3] = puVar27[-3];
            puVar28[-4] = uVar12;
            puVar28[-1] = uVar43;
            puVar28[-2] = uVar37;
            puVar28[1] = uVar45;
            *puVar28 = uVar44;
            puVar28[3] = uVar47;
            puVar28[2] = uVar46;
            uVar15 = uVar15 - 0x40;
            puVar28 = puVar28 + 8;
            puVar27 = puVar27 + 8;
          } while (uVar15 != 0);
          if (uVar40 == uVar17) goto LAB_1006d077c;
          if ((uVar40 & 0x38) == 0) {
            puVar20 = (ulong *)((long)puVar20 + uVar17);
            puVar21 = (ulong *)((long)puVar21 + uVar17);
            goto LAB_1006d076c;
          }
        }
        uVar15 = uVar40 & 0xfffffffffffffff8;
        lVar11 = uVar17 - uVar15;
        puVar13 = (undefined8 *)((long)puVar20 + uVar17);
        puVar29 = (undefined8 *)((long)puVar21 + uVar17);
        do {
          *puVar29 = *puVar13;
          lVar11 = lVar11 + 8;
          puVar13 = puVar13 + 1;
          puVar29 = puVar29 + 1;
        } while (lVar11 != 0);
        puVar21 = (ulong *)((long)puVar21 + uVar15);
        puVar20 = (ulong *)((long)puVar20 + uVar15);
        if (uVar40 == uVar15) goto LAB_1006d077c;
      }
LAB_1006d076c:
      do {
        puVar28 = (ulong *)((long)puVar20 + 1);
        *(char *)puVar21 = (char)*puVar20;
        puVar21 = (ulong *)((long)puVar21 + 1);
        puVar20 = puVar28;
      } while (puVar28 != puVar16);
    }
LAB_1006d077c:
    param_2[3] = param_2[3] + uVar24;
    piVar22 = (int *)param_2[1];
    if (uVar24 < 0x10000) {
      *(short *)(piVar22 + 1) = (short)uVar24;
      *piVar22 = iVar30;
      goto joined_r0x0001006d05b8;
    }
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
    uVar40 = uVar36 - 3;
    *(short *)(piVar22 + 1) = (short)uVar24;
    *piVar22 = iVar30;
    if (uVar40 < 0x10000) goto LAB_1006d07bc;
LAB_1006d07ec:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
    *(short *)((long)piVar22 + 6) = (short)uVar40;
    piVar22 = piVar22 + 2;
    param_2[1] = (long)piVar22;
    param_4 = (ulong *)((long)puVar16 + uVar36);
    uVar38 = local_84;
  }
  else {
    if ((param_4 < puVar16) && (uVar2 < (long)puVar16 + (2 - uVar40))) {
      puVar28 = puVar16;
      do {
        puVar20 = (ulong *)((long)puVar28 + -1);
        puVar16 = puVar28;
        if ((*(char *)puVar20 != *(char *)((long)puVar28 + (1 - uVar40))) ||
           (uVar36 = uVar36 + 1, puVar16 = puVar20, puVar20 <= param_4)) break;
        uVar24 = (long)puVar28 + (1 - uVar40);
        puVar28 = puVar20;
      } while (uVar2 < uVar24);
    }
    uVar35 = (int)uVar40 - 2;
    iVar30 = (int)uVar40 + 1;
    uVar24 = (long)puVar16 - (long)param_4;
    puVar28 = (ulong *)param_2[3];
    local_84 = uVar34;
    if (puVar19 < puVar16) goto LAB_1006d0648;
LAB_1006d052c:
    uVar40 = *param_4;
    puVar28[1] = param_4[1];
    *puVar28 = uVar40;
    lVar11 = param_2[3];
    if (0x10 < uVar24) {
      uVar40 = param_4[2];
      *(ulong *)(lVar11 + 0x18) = param_4[3];
      *(ulong *)(lVar11 + 0x10) = uVar40;
      uVar40 = param_4[4];
      *(ulong *)(lVar11 + 0x28) = param_4[5];
      *(ulong *)(lVar11 + 0x20) = uVar40;
      if (0x30 < (long)uVar24) {
        puVar28 = (ulong *)(lVar11 + 0x30);
        puVar20 = param_4 + 8;
        do {
          uVar40 = puVar20[-2];
          puVar28[1] = puVar20[-1];
          *puVar28 = uVar40;
          uVar40 = *puVar20;
          puVar28[3] = puVar20[1];
          puVar28[2] = uVar40;
          puVar28 = puVar28 + 4;
          puVar20 = puVar20 + 4;
        } while (puVar28 < (ulong *)(lVar11 + uVar24));
      }
      goto LAB_1006d077c;
    }
    param_2[3] = lVar11 + uVar24;
    piVar22 = (int *)param_2[1];
    *(short *)(piVar22 + 1) = (short)uVar24;
    *piVar22 = iVar30;
joined_r0x0001006d05b8:
    uVar40 = uVar36 - 3;
    if (0xffff < uVar40) goto LAB_1006d07ec;
LAB_1006d07bc:
    *(short *)((long)piVar22 + 6) = (short)uVar40;
    piVar22 = piVar22 + 2;
    param_2[1] = (long)piVar22;
    param_4 = (ulong *)((long)puVar16 + uVar36);
    uVar38 = local_84;
  }
  puVar28 = param_4;
  local_84 = uVar38;
  uVar34 = uVar35;
  if (uVar38 != 0) {
    while ((uVar6 = uVar35, puVar28 = param_4, local_84 = uVar38, uVar34 = uVar6, param_4 <= puVar31
           && ((int)*param_4 == *(int *)((long)param_4 - (ulong)uVar38)))) {
      puVar28 = (ulong *)((long)param_4 + 4);
      lVar11 = -(ulong)uVar38;
      puVar20 = (ulong *)((long)puVar28 + lVar11);
      puVar16 = puVar28;
      if (puVar28 < puVar14) {
        if (*puVar20 == *puVar28) {
          lVar32 = 0;
          puVar16 = (ulong *)((long)param_4 + 0xc);
          puVar20 = (ulong *)((long)param_4 + 0xc + lVar11);
          do {
            if (puVar14 <= puVar16) goto LAB_1006d08b8;
            uVar40 = *puVar20;
            uVar24 = *puVar16;
            lVar32 = lVar32 + 8;
            puVar16 = puVar16 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar40 == uVar24);
          uVar24 = uVar24 ^ uVar40;
          uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar24 = lVar32 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
        }
        else {
          uVar24 = *puVar28 ^ *puVar20;
          uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
          uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
          uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
        }
      }
      else {
LAB_1006d08b8:
        if (puVar16 < puVar23) {
          if ((int)*puVar20 == (int)*puVar16) {
            puVar16 = (ulong *)((long)puVar16 + 4);
            puVar20 = (ulong *)((long)puVar20 + 4);
          }
        }
        if (puVar16 < puVar18) {
          if ((short)*puVar20 == (short)*puVar16) {
            puVar16 = (ulong *)((long)puVar16 + 2);
            puVar20 = (ulong *)((long)puVar20 + 2);
          }
        }
        if ((puVar16 < puVar1) && ((char)*puVar20 == (char)*puVar16)) {
          puVar16 = (ulong *)((long)puVar16 + 1);
        }
        uVar24 = (long)puVar16 - (long)puVar28;
      }
      if (param_4 <= puVar19) {
        puVar28 = (ulong *)param_2[3];
        uVar40 = *param_4;
        puVar28[1] = param_4[1];
        *puVar28 = uVar40;
        piVar22 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar22 + 1) = 0;
      *piVar22 = 1;
      uVar8 = (undefined2)(uVar24 + 1);
      if (uVar24 + 1 < 0x10000) {
        *(undefined2 *)((long)piVar22 + 6) = uVar8;
        param_2[1] = (long)(piVar22 + 2);
      }
      else {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar22 - *param_2) >> 3);
        *(undefined2 *)((long)piVar22 + 6) = uVar8;
        param_2[1] = (long)(piVar22 + 2);
      }
      param_4 = (ulong *)((long)param_4 + uVar24 + 4);
      puVar28 = param_4;
      local_84 = uVar6;
      uVar34 = uVar38;
      if (uVar6 == 0) break;
      piVar22 = piVar22 + 2;
      uVar35 = uVar38;
      uVar38 = uVar6;
    }
  }
LAB_1006cebf8:
  if (puVar31 <= puVar28) goto LAB_1006d0a14;
  goto LAB_1006cec00;
joined_r0x0001006d0500:
  if (3 < uVar15) {
LAB_1006cfc48:
    if ((int)(((uint)LZCOUNT((int)uVar40 + 1) ^ 0xffffffe0) + (int)uVar36 * 4 + 5) <
        (int)((int)uVar15 * 4 - ((uint)LZCOUNT((int)uVar17 + 1) ^ 0x1f))) goto LAB_1006d04c4;
  }
LAB_1006cfc78:
  if (puVar31 <= puVar20) goto joined_r0x0001006d050c;
  puVar20 = (ulong *)((long)puVar28 + 2);
  if (((uVar40 == 0) || (uVar34 == 0)) || (*(int *)puVar20 != *(int *)((long)puVar20 + lVar11))) {
LAB_1006cfd88:
    iVar30 = *(int *)(param_1 + 200);
  }
  else {
    puVar21 = (ulong *)((long)puVar28 + 6);
    puVar33 = (ulong *)((long)puVar21 + lVar11);
    puVar27 = puVar21;
    if (puVar21 < puVar14) {
      if (*puVar33 == *puVar21) {
        puVar27 = (ulong *)((long)puVar28 + 0xe);
        puVar33 = (ulong *)((long)puVar28 + 0xe + lVar11);
        do {
          if (puVar14 <= puVar27) goto LAB_1006cfd18;
          uVar24 = *puVar33;
          puVar26 = puVar27 + 1;
          uVar15 = *puVar27;
          puVar27 = puVar26;
          puVar33 = puVar33 + 1;
        } while (uVar24 == uVar15);
        uVar15 = uVar15 ^ uVar24;
        uVar24 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        puVar27 = (ulong *)((long)puVar26 +
                           (((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3) - 8));
        goto LAB_1006cfd7c;
      }
      uVar24 = *puVar21 ^ *puVar33;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
    }
    else {
LAB_1006cfd18:
      if ((puVar27 < puVar23) && ((int)*puVar33 == (int)*puVar27)) {
        puVar27 = (ulong *)((long)puVar27 + 4);
        puVar33 = (ulong *)((long)puVar33 + 4);
      }
      if ((puVar27 < puVar18) && ((short)*puVar33 == (short)*puVar27)) {
        puVar27 = (ulong *)((long)puVar27 + 2);
        puVar33 = (ulong *)((long)puVar33 + 2);
      }
      if ((puVar27 < puVar1) && ((char)*puVar33 == (char)*puVar27)) {
        puVar27 = (ulong *)((long)puVar27 + 1);
      }
LAB_1006cfd7c:
      uVar24 = (long)puVar27 - (long)puVar21;
      if (0xfffffffffffffffb < uVar24) goto LAB_1006cfd88;
    }
    if ((int)(((uint)LZCOUNT((int)uVar40 + 1) ^ 0xffffffe0) + (int)uVar36 * 4 + 2) <
        (int)(uVar24 + 4) * 4) {
      uVar40 = 0;
      uVar36 = uVar24 + 4;
      puVar16 = puVar20;
    }
    iVar30 = *(int *)(param_1 + 200);
  }
  if (iVar30 - 6U < 2) {
    lVar32 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar42 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar39 = (uint)((long)puVar20 - lVar42);
    uVar35 = uVar39 - uVar7;
    if (uVar39 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar39) {
      uVar7 = uVar39 - uVar6;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (uVar25 < uVar39) {
      uVar15 = (ulong)uVar25;
      do {
        uVar17 = (ulong)(*(long *)(lVar42 + uVar15) * -0x30e4432340650000) >> (uVar24 & 0x3f);
        *(undefined4 *)(lVar32 + (ulong)((uint)uVar15 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar17 * 4);
        *(uint *)(lVar41 + uVar17 * 4) = (uint)uVar15;
        uVar15 = uVar15 + 1;
      } while (((long)puVar20 - lVar42 & 0xffffffffU) != uVar15);
    }
    *(uint *)(param_1 + 0x24) = uVar39;
    uVar12 = *puVar20;
    uVar38 = *(uint *)(lVar41 + (uVar12 * -0x30e4432340650000 >> (uVar24 & 0x3f)) * 4);
    if (uVar35 < uVar38) {
      iVar30 = 1 << (ulong)(uVar5 & 0x1f);
      uVar15 = 3;
      uVar17 = 999999999;
      do {
        puVar21 = (ulong *)(lVar42 + (ulong)uVar38);
        if (*(char *)((long)puVar21 + uVar15) == *(char *)((long)puVar20 + uVar15)) {
          puVar27 = puVar20;
          if (puVar20 < puVar14) {
            if (*puVar21 == uVar12) {
              lVar41 = 0;
              puVar21 = (ulong *)(lVar42 + 8 + (ulong)uVar38);
              puVar27 = (ulong *)((long)puVar28 + 10);
              do {
                if (puVar14 <= puVar27) goto LAB_1006cfedc;
                uVar37 = *puVar21;
                uVar24 = *puVar27;
                lVar41 = lVar41 + 8;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar37 == uVar24);
              uVar24 = uVar24 ^ uVar37;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar41 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            }
            else {
              uVar24 = *puVar21 ^ uVar12;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
            }
          }
          else {
LAB_1006cfedc:
            if (puVar27 < puVar23) {
              if ((int)*puVar21 == (int)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            }
            if (puVar27 < puVar18) {
              if ((short)*puVar21 == (short)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            uVar24 = (long)puVar27 - (long)puVar20;
          }
          if ((uVar15 < uVar24) &&
             (uVar17 = (ulong)((uVar39 + 2) - uVar38), uVar15 = uVar24,
             (ulong *)((long)puVar20 + uVar24) == puVar1)) goto joined_r0x0001006d04ec;
        }
        if ((uVar38 <= uVar7) ||
           ((iVar30 = iVar30 + -1, iVar30 == 0 ||
            (uVar38 = *(uint *)(lVar32 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar38 <= uVar35))))
        goto joined_r0x0001006d04ec;
      } while( true );
    }
  }
  else if (iVar30 == 5) {
    lVar32 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar42 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar39 = (uint)((long)puVar20 - lVar42);
    uVar35 = uVar39 - uVar7;
    if (uVar39 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar39) {
      uVar7 = uVar39 - uVar6;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar24 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (uVar25 < uVar39) {
      uVar15 = (ulong)uVar25;
      do {
        uVar17 = (ulong)(*(long *)(lVar42 + uVar15) * -0x30e4432345000000) >> (uVar24 & 0x3f);
        *(undefined4 *)(lVar32 + (ulong)((uint)uVar15 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + uVar17 * 4);
        *(uint *)(lVar41 + uVar17 * 4) = (uint)uVar15;
        uVar15 = uVar15 + 1;
      } while (((long)puVar20 - lVar42 & 0xffffffffU) != uVar15);
    }
    *(uint *)(param_1 + 0x24) = uVar39;
    uVar12 = *puVar20;
    uVar38 = *(uint *)(lVar41 + (uVar12 * -0x30e4432345000000 >> (uVar24 & 0x3f)) * 4);
    if (uVar35 < uVar38) {
      iVar30 = 1 << (ulong)(uVar5 & 0x1f);
      uVar15 = 3;
      uVar17 = 999999999;
      do {
        puVar21 = (ulong *)(lVar42 + (ulong)uVar38);
        if (*(char *)((long)puVar21 + uVar15) == *(char *)((long)puVar20 + uVar15)) {
          puVar27 = puVar20;
          if (puVar20 < puVar14) {
            if (*puVar21 == uVar12) {
              lVar41 = 0;
              puVar21 = (ulong *)(lVar42 + 8 + (ulong)uVar38);
              puVar27 = (ulong *)((long)puVar28 + 10);
              do {
                if (puVar14 <= puVar27) goto LAB_1006d0158;
                uVar37 = *puVar21;
                uVar24 = *puVar27;
                lVar41 = lVar41 + 8;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar37 == uVar24);
              uVar24 = uVar24 ^ uVar37;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar41 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
            }
            else {
              uVar24 = *puVar21 ^ uVar12;
              uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
              uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
              uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
              uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
            }
          }
          else {
LAB_1006d0158:
            if (puVar27 < puVar23) {
              if ((int)*puVar21 == (int)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            }
            if (puVar27 < puVar18) {
              if ((short)*puVar21 == (short)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            uVar24 = (long)puVar27 - (long)puVar20;
          }
          if ((uVar15 < uVar24) &&
             (uVar17 = (ulong)((uVar39 + 2) - uVar38), uVar15 = uVar24,
             (ulong *)((long)puVar20 + uVar24) == puVar1)) goto joined_r0x0001006d04ec;
        }
        if ((uVar38 <= uVar7) ||
           ((iVar30 = iVar30 + -1, iVar30 == 0 ||
            (uVar38 = *(uint *)(lVar32 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar38 <= uVar35))))
        goto joined_r0x0001006d04ec;
      } while( true );
    }
  }
  else {
    lVar32 = *(long *)(param_1 + 0x40);
    uVar38 = *(uint *)(param_1 + 0xbc);
    uVar6 = 1 << (ulong)(uVar38 & 0x1f);
    lVar42 = *(long *)(param_1 + 8);
    uVar7 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar39 = (uint)((long)puVar20 - lVar42);
    uVar35 = uVar39 - uVar7;
    if (uVar39 - *(uint *)(param_1 + 0x1c) <= uVar7 || *(int *)(param_1 + 0x20) != 0) {
      uVar35 = *(uint *)(param_1 + 0x1c);
    }
    uVar7 = 0;
    if (uVar6 <= uVar39) {
      uVar7 = uVar39 - uVar6;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar41 = *(long *)(param_1 + 0x30);
    uVar10 = 0x20 - *(int *)(param_1 + 0xc0);
    if (uVar25 < uVar39) {
      uVar24 = (ulong)uVar25;
      do {
        uVar25 = (uint)(*(int *)(lVar42 + uVar24) * -0x61c8864f) >> (ulong)(uVar10 & 0x1f);
        *(undefined4 *)(lVar32 + (ulong)((uint)uVar24 & ~(-1 << (ulong)(uVar38 & 0x1f))) * 4) =
             *(undefined4 *)(lVar41 + (ulong)uVar25 * 4);
        *(uint *)(lVar41 + (ulong)uVar25 * 4) = (uint)uVar24;
        uVar24 = uVar24 + 1;
      } while (((long)puVar20 - lVar42 & 0xffffffffU) != uVar24);
    }
    *(uint *)(param_1 + 0x24) = uVar39;
    uVar38 = *(uint *)(lVar41 + (ulong)((uint)(*(int *)puVar20 * -0x61c8864f) >>
                                       (ulong)(uVar10 & 0x1f)) * 4);
    if (uVar35 < uVar38) {
      iVar30 = 1 << (ulong)(uVar5 & 0x1f);
      uVar24 = 3;
      uVar17 = 999999999;
      do {
        puVar21 = (ulong *)(lVar42 + (ulong)uVar38);
        if (*(char *)((long)puVar21 + uVar24) == *(char *)((long)puVar20 + uVar24)) {
          puVar27 = puVar20;
          if (puVar20 < puVar14) {
            if (*puVar21 == *puVar20) {
              lVar41 = 0;
              puVar21 = (ulong *)(lVar42 + 8 + (ulong)uVar38);
              puVar27 = (ulong *)((long)puVar28 + 10);
              do {
                if (puVar14 <= puVar27) goto LAB_1006d0390;
                uVar12 = *puVar21;
                uVar15 = *puVar27;
                lVar41 = lVar41 + 8;
                puVar21 = puVar21 + 1;
                puVar27 = puVar27 + 1;
              } while (uVar12 == uVar15);
              uVar15 = uVar15 ^ uVar12;
              uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = lVar41 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
            }
            else {
              uVar15 = *puVar20 ^ *puVar21;
              uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
            }
          }
          else {
LAB_1006d0390:
            if (puVar27 < puVar23) {
              if ((int)*puVar21 == (int)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            }
            if (puVar27 < puVar18) {
              if ((short)*puVar21 == (short)*puVar27) {
                puVar21 = (ulong *)((long)puVar21 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
            }
            if ((puVar27 < puVar1) && ((char)*puVar21 == (char)*puVar27)) {
              puVar27 = (ulong *)((long)puVar27 + 1);
            }
            uVar15 = (long)puVar27 - (long)puVar20;
          }
          if ((uVar24 < uVar15) &&
             (uVar17 = (ulong)((uVar39 + 2) - uVar38), uVar24 = uVar15,
             (ulong *)((long)puVar20 + uVar15) == puVar1)) goto joined_r0x0001006d04ec;
        }
        uVar15 = uVar24;
        if ((uVar38 <= uVar7) ||
           ((iVar30 = iVar30 + -1, iVar30 == 0 ||
            (uVar38 = *(uint *)(lVar32 + (ulong)(uVar38 & uVar6 - 1) * 4), uVar38 <= uVar35))))
        goto joined_r0x0001006d04ec;
      } while( true );
    }
  }
  goto joined_r0x0001006d050c;
joined_r0x0001006d04ec:
  if ((uVar15 < 4) ||
     ((int)((int)uVar15 * 4 - ((uint)LZCOUNT((int)uVar17 + 1) ^ 0x1f)) <=
      (int)(((uint)LZCOUNT((int)uVar40 + 1) ^ 0xffffffe0) + (int)uVar36 * 4 + 8)))
  goto joined_r0x0001006d050c;
LAB_1006d04c4:
  uVar40 = uVar17;
  uVar36 = uVar15;
  puVar16 = puVar20;
  puVar28 = puVar16;
  if (puVar31 <= puVar16) goto joined_r0x0001006d050c;
  goto LAB_1006cf404;
}

