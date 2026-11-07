// rea decompile_all
// name: FUN_1006d0a5c
// address: 0x1006d0a5c
// body: available
// range: 0x1006d0a5c-0x1006d2147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006d0a5c(long param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  uint uVar35;
  uint uVar36;
  ulong uVar37;
  int iVar38;
  long lVar39;
  ulong *puVar40;
  uint uVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  
  puVar1 = (ulong *)((long)param_4 + param_5);
  puVar31 = puVar1 + -1;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18);
  puVar25 = param_4;
  if ((int)param_4 == (int)uVar2) {
    puVar25 = (ulong *)((long)param_4 + 1);
  }
  uVar10 = (int)puVar25 - (int)uVar2;
  uVar45 = 0;
  if (uVar4 <= uVar10) {
    uVar45 = uVar4;
  }
  uVar35 = 0;
  if (uVar3 <= uVar10) {
    uVar35 = uVar3;
  }
  if (puVar31 <= puVar25) {
LAB_1006d2100:
    if (uVar4 <= uVar10) {
      uVar4 = 0;
    }
    if (uVar3 <= uVar10) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3;
    if (uVar35 != 0) {
      uVar4 = uVar35;
    }
    if (uVar45 != 0) {
      uVar3 = uVar45;
    }
    *param_3 = uVar4;
    param_3[1] = uVar3;
    return (long)puVar1 - (long)param_4;
  }
  puVar15 = (ulong *)((long)puVar1 - 7);
  puVar23 = (ulong *)((long)puVar1 - 3);
  puVar20 = (ulong *)((long)puVar1 - 1);
  puVar21 = puVar1 + -4;
LAB_1006d0b44:
  uVar29 = 0;
  puVar22 = (ulong *)((long)puVar25 + 1);
  lVar42 = -(ulong)uVar35;
  if ((uVar35 != 0) && (*(int *)((long)puVar22 - (ulong)uVar35) == *(int *)puVar22)) {
    puVar26 = (ulong *)((long)puVar25 + 5);
    puVar30 = (ulong *)((long)puVar26 + lVar42);
    puVar24 = puVar26;
    if (puVar26 < puVar15) {
      if (*puVar30 == *puVar26) {
        lVar32 = 0;
        puVar24 = (ulong *)((long)puVar25 + 0xd);
        puVar30 = (ulong *)((long)puVar25 + 0xd + lVar42);
        do {
          if (puVar15 <= puVar24) goto LAB_1006d0bcc;
          uVar37 = *puVar30;
          uVar29 = *puVar24;
          lVar32 = lVar32 + 8;
          puVar24 = puVar24 + 1;
          puVar30 = puVar30 + 1;
        } while (uVar37 == uVar29);
        uVar29 = uVar29 ^ uVar37;
        uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = lVar32 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
      }
      else {
        uVar29 = *puVar26 ^ *puVar30;
        uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
      }
    }
    else {
LAB_1006d0bcc:
      if ((puVar24 < puVar23) && ((int)*puVar30 == (int)*puVar24)) {
        puVar24 = (ulong *)((long)puVar24 + 4);
        puVar30 = (ulong *)((long)puVar30 + 4);
      }
      if ((puVar24 < puVar20) && ((short)*puVar30 == (short)*puVar24)) {
        puVar24 = (ulong *)((long)puVar24 + 2);
        puVar30 = (ulong *)((long)puVar30 + 2);
      }
      if ((puVar24 < puVar1) && ((char)*puVar30 == (char)*puVar24)) {
        puVar24 = (ulong *)((long)puVar24 + 1);
      }
      uVar29 = (long)puVar24 - (long)puVar26;
    }
    uVar29 = uVar29 + 4;
  }
  if (*(int *)(param_1 + 200) - 6U < 2) {
    lVar32 = *(long *)(param_1 + 0x40);
    uVar41 = *(uint *)(param_1 + 0xbc);
    uVar7 = 1 << (ulong)(uVar41 & 0x1f);
    lVar44 = *(long *)(param_1 + 8);
    uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar37 = (long)puVar25 - lVar44;
    uVar14 = (uint)uVar37;
    uVar36 = uVar14 - uVar8;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar8 || *(int *)(param_1 + 0x20) != 0) {
      uVar36 = *(uint *)(param_1 + 0x1c);
    }
    uVar8 = 0;
    if (uVar7 <= uVar14) {
      uVar8 = uVar14 - uVar7;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar39 = *(long *)(param_1 + 0x30);
    uVar12 = (ulong)*(uint *)(param_1 + 0x24);
    uVar43 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar17 = (ulong)(*(long *)(lVar44 + uVar12) * -0x30e4432340650000) >> (uVar43 & 0x3f);
        *(undefined4 *)(lVar32 + (ulong)((uint)uVar12 & ~(-1 << (ulong)(uVar41 & 0x1f))) * 4) =
             *(undefined4 *)(lVar39 + uVar17 * 4);
        *(uint *)(lVar39 + uVar17 * 4) = (uint)uVar12;
        uVar12 = uVar12 + 1;
      } while ((uVar37 & 0xffffffff) != uVar12);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar12 = *puVar25;
    uVar41 = *(uint *)(lVar39 + (uVar12 * -0x30e4432340650000 >> (uVar43 & 0x3f)) * 4);
    if (uVar41 <= uVar36) goto LAB_1006d1308;
    iVar19 = 1 << (ulong)(uVar5 & 0x1f);
    uVar17 = 3;
    uVar43 = 999999999;
    do {
      puVar26 = (ulong *)(lVar44 + (ulong)uVar41);
      if (*(char *)((long)puVar26 + uVar17) == *(char *)((long)puVar25 + uVar17)) {
        puVar24 = puVar25;
        if (puVar25 < puVar15) {
          if (*puVar26 == uVar12) {
            lVar39 = 0;
            puVar26 = (ulong *)(lVar44 + 8 + (ulong)uVar41);
            do {
              puVar24 = puVar24 + 1;
              if (puVar15 <= puVar24) goto LAB_1006d0da8;
              uVar16 = *puVar26;
              lVar39 = lVar39 + 8;
              puVar26 = puVar26 + 1;
            } while (uVar16 == *puVar24);
            uVar16 = *puVar24 ^ uVar16;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar39 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
          }
          else {
            uVar16 = *puVar26 ^ uVar12;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          }
        }
        else {
LAB_1006d0da8:
          if (puVar24 < puVar23) {
            if ((int)*puVar26 == (int)*puVar24) {
              puVar26 = (ulong *)((long)puVar26 + 4);
              puVar24 = (ulong *)((long)puVar24 + 4);
            }
          }
          if (puVar24 < puVar20) {
            if ((short)*puVar26 == (short)*puVar24) {
              puVar26 = (ulong *)((long)puVar26 + 2);
              puVar24 = (ulong *)((long)puVar24 + 2);
            }
          }
          if ((puVar24 < puVar1) && ((char)*puVar26 == (char)*puVar24)) {
            puVar24 = (ulong *)((long)puVar24 + 1);
          }
          uVar16 = (long)puVar24 - (long)puVar25;
        }
        if ((uVar17 < uVar16) &&
           (uVar43 = (ulong)((uVar14 + 2) - uVar41), uVar17 = uVar16,
           (ulong *)((long)puVar25 + uVar16) == puVar1)) goto LAB_1006d1dd8;
      }
    } while (((uVar8 < uVar41) && (iVar19 = iVar19 + -1, iVar19 != 0)) &&
            (uVar41 = *(uint *)(lVar32 + (ulong)(uVar41 & uVar7 - 1) * 4), uVar36 < uVar41));
LAB_1006d10bc:
    uVar16 = uVar17;
    if (uVar17 <= uVar29) {
      uVar16 = uVar29;
    }
  }
  else {
    if (*(int *)(param_1 + 200) == 5) {
      lVar32 = *(long *)(param_1 + 0x40);
      uVar41 = *(uint *)(param_1 + 0xbc);
      uVar7 = 1 << (ulong)(uVar41 & 0x1f);
      lVar44 = *(long *)(param_1 + 8);
      uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar37 = (long)puVar25 - lVar44;
      uVar14 = (uint)uVar37;
      uVar36 = uVar14 - uVar8;
      if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar8 || *(int *)(param_1 + 0x20) != 0) {
        uVar36 = *(uint *)(param_1 + 0x1c);
      }
      uVar8 = 0;
      if (uVar7 <= uVar14) {
        uVar8 = uVar14 - uVar7;
      }
      uVar5 = *(uint *)(param_1 + 0xc4);
      lVar39 = *(long *)(param_1 + 0x30);
      uVar12 = (ulong)*(uint *)(param_1 + 0x24);
      uVar43 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
      if (*(uint *)(param_1 + 0x24) < uVar14) {
        do {
          uVar17 = (ulong)(*(long *)(lVar44 + uVar12) * -0x30e4432345000000) >> (uVar43 & 0x3f);
          *(undefined4 *)(lVar32 + (ulong)((uint)uVar12 & ~(-1 << (ulong)(uVar41 & 0x1f))) * 4) =
               *(undefined4 *)(lVar39 + uVar17 * 4);
          *(uint *)(lVar39 + uVar17 * 4) = (uint)uVar12;
          uVar12 = uVar12 + 1;
        } while ((uVar37 & 0xffffffff) != uVar12);
      }
      *(uint *)(param_1 + 0x24) = uVar14;
      uVar12 = *puVar25;
      uVar41 = *(uint *)(lVar39 + (uVar12 * -0x30e4432345000000 >> (uVar43 & 0x3f)) * 4);
      if (uVar41 <= uVar36) goto LAB_1006d1308;
      iVar19 = 1 << (ulong)(uVar5 & 0x1f);
      uVar17 = 3;
      uVar43 = 999999999;
      do {
        puVar26 = (ulong *)(lVar44 + (ulong)uVar41);
        if (*(char *)((long)puVar26 + uVar17) == *(char *)((long)puVar25 + uVar17)) {
          puVar24 = puVar25;
          if (puVar25 < puVar15) {
            if (*puVar26 == uVar12) {
              lVar39 = 0;
              puVar26 = (ulong *)(lVar44 + 8 + (ulong)uVar41);
              do {
                puVar24 = puVar24 + 1;
                if (puVar15 <= puVar24) goto LAB_1006d0fd8;
                uVar16 = *puVar26;
                lVar39 = lVar39 + 8;
                puVar26 = puVar26 + 1;
              } while (uVar16 == *puVar24);
              uVar16 = *puVar24 ^ uVar16;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar39 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
            }
            else {
              uVar16 = *puVar26 ^ uVar12;
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
            }
          }
          else {
LAB_1006d0fd8:
            if (puVar24 < puVar23) {
              if ((int)*puVar26 == (int)*puVar24) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar24 < puVar20) {
              if ((short)*puVar26 == (short)*puVar24) {
                puVar26 = (ulong *)((long)puVar26 + 2);
                puVar24 = (ulong *)((long)puVar24 + 2);
              }
            }
            if ((puVar24 < puVar1) && ((char)*puVar26 == (char)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
            uVar16 = (long)puVar24 - (long)puVar25;
          }
          if ((uVar17 < uVar16) &&
             (uVar43 = (ulong)((uVar14 + 2) - uVar41), uVar17 = uVar16,
             (ulong *)((long)puVar25 + uVar16) == puVar1)) goto LAB_1006d1dd8;
        }
      } while ((uVar8 < uVar41) &&
              ((iVar19 = iVar19 + -1, iVar19 != 0 &&
               (uVar41 = *(uint *)(lVar32 + (ulong)(uVar41 & uVar7 - 1) * 4), uVar36 < uVar41))));
      goto LAB_1006d10bc;
    }
    lVar44 = *(long *)(param_1 + 0x40);
    uVar41 = *(uint *)(param_1 + 0xbc);
    uVar7 = 1 << (ulong)(uVar41 & 0x1f);
    lVar32 = *(long *)(param_1 + 8);
    uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar37 = (long)puVar25 - lVar32;
    uVar14 = (uint)uVar37;
    uVar36 = uVar14 - uVar8;
    if (uVar14 - *(uint *)(param_1 + 0x1c) <= uVar8 || *(int *)(param_1 + 0x20) != 0) {
      uVar36 = *(uint *)(param_1 + 0x1c);
    }
    uVar8 = 0;
    if (uVar7 <= uVar14) {
      uVar8 = uVar14 - uVar7;
    }
    uVar5 = *(uint *)(param_1 + 0xc4);
    lVar39 = *(long *)(param_1 + 0x30);
    uVar12 = (ulong)*(uint *)(param_1 + 0x24);
    uVar6 = 0x20 - *(int *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0x24) < uVar14) {
      do {
        uVar11 = (uint)(*(int *)(lVar32 + uVar12) * -0x61c8864f) >> (ulong)(uVar6 & 0x1f);
        *(undefined4 *)(lVar44 + (ulong)((uint)uVar12 & ~(-1 << (ulong)(uVar41 & 0x1f))) * 4) =
             *(undefined4 *)(lVar39 + (ulong)uVar11 * 4);
        *(uint *)(lVar39 + (ulong)uVar11 * 4) = (uint)uVar12;
        uVar12 = uVar12 + 1;
      } while ((uVar37 & 0xffffffff) != uVar12);
    }
    *(uint *)(param_1 + 0x24) = uVar14;
    uVar41 = *(uint *)(lVar39 + (ulong)((uint)((int)*puVar25 * -0x61c8864f) >> (ulong)(uVar6 & 0x1f)
                                       ) * 4);
    if (uVar36 < uVar41) {
      iVar19 = 1 << (ulong)(uVar5 & 0x1f);
      uVar17 = 3;
      uVar43 = 999999999;
      do {
        puVar26 = (ulong *)(lVar32 + (ulong)uVar41);
        if (*(char *)((long)puVar26 + uVar17) == *(char *)((long)puVar25 + uVar17)) {
          puVar24 = puVar25;
          if (puVar25 < puVar15) {
            if (*puVar26 == *puVar25) {
              lVar39 = 0;
              puVar26 = (ulong *)(lVar32 + 8 + (ulong)uVar41);
              do {
                puVar24 = puVar24 + 1;
                if (puVar15 <= puVar24) goto LAB_1006d1224;
                uVar12 = *puVar26;
                lVar39 = lVar39 + 8;
                puVar26 = puVar26 + 1;
              } while (uVar12 == *puVar24);
              uVar12 = *puVar24 ^ uVar12;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar16 = lVar39 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
            else {
              uVar12 = *puVar25 ^ *puVar26;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar16 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
          }
          else {
LAB_1006d1224:
            if (puVar24 < puVar23) {
              if ((int)*puVar26 == (int)*puVar24) {
                puVar26 = (ulong *)((long)puVar26 + 4);
                puVar24 = (ulong *)((long)puVar24 + 4);
              }
            }
            if (puVar24 < puVar20) {
              if ((short)*puVar26 == (short)*puVar24) {
                puVar26 = (ulong *)((long)puVar26 + 2);
                puVar24 = (ulong *)((long)puVar24 + 2);
              }
            }
            if ((puVar24 < puVar1) && ((char)*puVar26 == (char)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 1);
            }
            uVar16 = (long)puVar24 - (long)puVar25;
          }
          if ((uVar17 < uVar16) &&
             (uVar43 = (ulong)((uVar14 + 2) - uVar41), uVar17 = uVar16,
             (ulong *)((long)puVar25 + uVar16) == puVar1)) goto LAB_1006d1314;
        }
      } while ((uVar8 < uVar41) &&
              ((iVar19 = iVar19 + -1, iVar19 != 0 &&
               (uVar41 = *(uint *)(lVar44 + (ulong)(uVar41 & uVar7 - 1) * 4), uVar36 < uVar41))));
      goto LAB_1006d10bc;
    }
LAB_1006d1308:
    uVar43 = 999999999;
    uVar16 = 3;
LAB_1006d1314:
    uVar17 = uVar16;
    if (uVar16 <= uVar29) {
      uVar16 = uVar29;
    }
  }
  goto joined_r0x0001006d1320;
LAB_1006d1dd8:
  uVar17 = uVar16;
  if (uVar16 <= uVar29) {
    uVar16 = uVar29;
  }
joined_r0x0001006d1320:
  if (3 < uVar16) {
    puVar26 = puVar25;
    if (uVar17 <= uVar29) {
      uVar43 = 0;
      puVar26 = puVar22;
    }
    puVar22 = (ulong *)((long)puVar25 + 0xd);
    iVar19 = (int)puVar25;
LAB_1006d138c:
    iVar19 = iVar19 + 1;
    uVar12 = uVar43;
    puVar24 = puVar26;
    uVar29 = uVar16;
    if (puVar25 < puVar31) {
      puVar26 = (ulong *)((long)puVar25 + 1);
      if (uVar43 == 0) {
        uVar12 = 0;
      }
      else if ((uVar35 != 0) && (*(int *)puVar26 == *(int *)((long)puVar26 + lVar42))) {
        puVar30 = (ulong *)((long)puVar25 + 5);
        puVar40 = (ulong *)((long)puVar30 + lVar42);
        puVar34 = puVar30;
        if (puVar30 < puVar15) {
          puVar34 = puVar22;
          if (*puVar40 == *puVar30) {
            do {
              if (puVar15 <= puVar34) {
                puVar40 = (ulong *)((long)puVar34 + lVar42);
                goto joined_r0x0001006d1424;
              }
              puVar40 = (ulong *)((long)puVar34 + lVar42);
              puVar33 = puVar34 + 1;
              uVar17 = *puVar34;
              puVar34 = puVar33;
            } while (*puVar40 == uVar17);
            uVar17 = uVar17 ^ *puVar40;
            uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
            uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
            uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
            puVar34 = (ulong *)((long)puVar33 +
                               (((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) - 8));
            goto LAB_1006d14a8;
          }
          uVar17 = *puVar30 ^ *puVar40;
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
        }
        else {
joined_r0x0001006d1424:
          if ((puVar34 < puVar23) && ((int)*puVar40 == (int)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 4);
            puVar40 = (ulong *)((long)puVar40 + 4);
          }
          if ((puVar34 < puVar20) && ((short)*puVar40 == (short)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 2);
            puVar40 = (ulong *)((long)puVar40 + 2);
          }
          if ((puVar34 < puVar1) && ((char)*puVar40 == (char)*puVar34)) {
            puVar34 = (ulong *)((long)puVar34 + 1);
          }
LAB_1006d14a8:
          uVar17 = (long)puVar34 - (long)puVar30;
          if (0xfffffffffffffffb < uVar17) goto LAB_1006d14f4;
        }
        if ((int)((int)uVar16 * 3 + ((uint)LZCOUNT((int)uVar43 + 1) ^ 0xffffffe0) + 2) <
            (int)(uVar17 + 4) * 3) {
          puVar24 = (ulong *)((long)puVar25 + 1);
          uVar12 = 0;
          uVar29 = uVar17 + 4;
        }
      }
LAB_1006d14f4:
      iVar38 = (int)puVar26;
      uVar36 = (uint)uVar37;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar32 = *(long *)(param_1 + 0x40);
        uVar7 = *(uint *)(param_1 + 0xbc);
        uVar8 = 1 << (ulong)(uVar7 & 0x1f);
        lVar44 = *(long *)(param_1 + 8);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar5 = iVar38 - (int)lVar44;
        uVar17 = (ulong)uVar5;
        uVar41 = uVar5 - uVar14;
        if (uVar5 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar41 = *(uint *)(param_1 + 0x1c);
        }
        uVar14 = 0;
        if (uVar8 <= uVar5) {
          uVar14 = uVar5 - uVar8;
        }
        uVar6 = *(uint *)(param_1 + 0xc4);
        lVar39 = *(long *)(param_1 + 0x30);
        uVar43 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
        if (uVar36 < uVar5) {
          uVar37 = uVar37 & 0xffffffff;
          do {
            uVar16 = (ulong)(*(long *)(lVar44 + uVar37) * -0x30e4432340650000) >> (uVar43 & 0x3f);
            *(undefined4 *)(lVar32 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar7 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar39 + uVar16 * 4);
            *(uint *)(lVar39 + uVar16 * 4) = (uint)uVar37;
            uVar37 = uVar37 + 1;
          } while ((uint)(iVar19 - (int)lVar44) != uVar37);
        }
        *(uint *)(param_1 + 0x24) = uVar5;
        uVar37 = *puVar26;
        uVar36 = *(uint *)(lVar39 + (uVar37 * -0x30e4432340650000 >> (uVar43 & 0x3f)) * 4);
        if (uVar41 < uVar36) {
          iVar38 = 1 << (ulong)(uVar6 & 0x1f);
          uVar16 = 3;
          uVar43 = 999999999;
          do {
            puVar30 = (ulong *)(lVar44 + (ulong)uVar36);
            if (*(char *)((long)puVar30 + uVar16) == *(char *)((long)puVar26 + uVar16)) {
              puVar34 = puVar26;
              if (puVar26 < puVar15) {
                if (*puVar30 == uVar37) {
                  lVar39 = 9;
                  puVar30 = (ulong *)(lVar44 + 8 + (ulong)uVar36);
                  do {
                    puVar34 = (ulong *)((long)puVar25 + lVar39);
                    if (puVar15 <= puVar34) goto LAB_1006d1660;
                    uVar18 = *puVar30;
                    lVar39 = lVar39 + 8;
                    puVar30 = puVar30 + 1;
                  } while (uVar18 == *puVar34);
                  uVar18 = *puVar34 ^ uVar18;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (lVar39 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3)) - 9;
                }
                else {
                  uVar18 = *puVar30 ^ uVar37;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d1660:
                if (puVar34 < puVar23) {
                  if ((int)*puVar30 == (int)*puVar34) {
                    puVar34 = (ulong *)((long)puVar34 + 4);
                    puVar30 = (ulong *)((long)puVar30 + 4);
                  }
                }
                if (puVar34 < puVar20) {
                  if ((short)*puVar30 == (short)*puVar34) {
                    puVar34 = (ulong *)((long)puVar34 + 2);
                    puVar30 = (ulong *)((long)puVar30 + 2);
                  }
                }
                if ((puVar34 < puVar1) && ((char)*puVar30 == (char)*puVar34)) {
                  puVar34 = (ulong *)((long)puVar34 + 1);
                }
                uVar18 = (long)puVar34 - (long)puVar26;
              }
              if ((uVar16 < uVar18) &&
                 (uVar43 = (ulong)((uVar5 + 2) - uVar36), uVar16 = uVar18,
                 (ulong *)((long)puVar26 + uVar18) == puVar1)) goto joined_r0x0001006d1348;
            }
            if ((uVar36 <= uVar14) ||
               ((iVar38 = iVar38 + -1, iVar38 == 0 ||
                (uVar36 = *(uint *)(lVar32 + (ulong)(uVar36 & uVar8 - 1) * 4), uVar36 <= uVar41))))
            goto joined_r0x0001006d1348;
          } while( true );
        }
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar32 = *(long *)(param_1 + 0x40);
        uVar7 = *(uint *)(param_1 + 0xbc);
        uVar8 = 1 << (ulong)(uVar7 & 0x1f);
        lVar44 = *(long *)(param_1 + 8);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar5 = iVar38 - (int)lVar44;
        uVar17 = (ulong)uVar5;
        uVar41 = uVar5 - uVar14;
        if (uVar5 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar41 = *(uint *)(param_1 + 0x1c);
        }
        uVar14 = 0;
        if (uVar8 <= uVar5) {
          uVar14 = uVar5 - uVar8;
        }
        uVar6 = *(uint *)(param_1 + 0xc4);
        lVar39 = *(long *)(param_1 + 0x30);
        uVar43 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
        if (uVar36 < uVar5) {
          uVar37 = uVar37 & 0xffffffff;
          do {
            uVar16 = (ulong)(*(long *)(lVar44 + uVar37) * -0x30e4432345000000) >> (uVar43 & 0x3f);
            *(undefined4 *)(lVar32 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar7 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar39 + uVar16 * 4);
            *(uint *)(lVar39 + uVar16 * 4) = (uint)uVar37;
            uVar37 = uVar37 + 1;
          } while ((uint)(iVar19 - (int)lVar44) != uVar37);
        }
        *(uint *)(param_1 + 0x24) = uVar5;
        uVar37 = *puVar26;
        uVar36 = *(uint *)(lVar39 + (uVar37 * -0x30e4432345000000 >> (uVar43 & 0x3f)) * 4);
        if (uVar41 < uVar36) {
          iVar38 = 1 << (ulong)(uVar6 & 0x1f);
          uVar16 = 3;
          uVar43 = 999999999;
          do {
            puVar30 = (ulong *)(lVar44 + (ulong)uVar36);
            if (*(char *)((long)puVar30 + uVar16) == *(char *)((long)puVar26 + uVar16)) {
              puVar34 = puVar26;
              if (puVar26 < puVar15) {
                if (*puVar30 == uVar37) {
                  lVar39 = 9;
                  puVar30 = (ulong *)(lVar44 + 8 + (ulong)uVar36);
                  do {
                    puVar34 = (ulong *)((long)puVar25 + lVar39);
                    if (puVar15 <= puVar34) goto LAB_1006d1890;
                    uVar18 = *puVar30;
                    lVar39 = lVar39 + 8;
                    puVar30 = puVar30 + 1;
                  } while (uVar18 == *puVar34);
                  uVar18 = *puVar34 ^ uVar18;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (lVar39 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3)) - 9;
                }
                else {
                  uVar18 = *puVar30 ^ uVar37;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d1890:
                if (puVar34 < puVar23) {
                  if ((int)*puVar30 == (int)*puVar34) {
                    puVar34 = (ulong *)((long)puVar34 + 4);
                    puVar30 = (ulong *)((long)puVar30 + 4);
                  }
                }
                if (puVar34 < puVar20) {
                  if ((short)*puVar30 == (short)*puVar34) {
                    puVar34 = (ulong *)((long)puVar34 + 2);
                    puVar30 = (ulong *)((long)puVar30 + 2);
                  }
                }
                if ((puVar34 < puVar1) && ((char)*puVar30 == (char)*puVar34)) {
                  puVar34 = (ulong *)((long)puVar34 + 1);
                }
                uVar18 = (long)puVar34 - (long)puVar26;
              }
              if ((uVar16 < uVar18) &&
                 (uVar43 = (ulong)((uVar5 + 2) - uVar36), uVar16 = uVar18,
                 (ulong *)((long)puVar26 + uVar18) == puVar1)) goto joined_r0x0001006d1348;
            }
            if ((uVar36 <= uVar14) ||
               ((iVar38 = iVar38 + -1, iVar38 == 0 ||
                (uVar36 = *(uint *)(lVar32 + (ulong)(uVar36 & uVar8 - 1) * 4), uVar36 <= uVar41))))
            goto joined_r0x0001006d1348;
          } while( true );
        }
      }
      else {
        lVar32 = *(long *)(param_1 + 0x40);
        uVar7 = *(uint *)(param_1 + 0xbc);
        uVar8 = 1 << (ulong)(uVar7 & 0x1f);
        lVar44 = *(long *)(param_1 + 8);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar5 = iVar38 - (int)lVar44;
        uVar17 = (ulong)uVar5;
        uVar41 = uVar5 - uVar14;
        if (uVar5 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar41 = *(uint *)(param_1 + 0x1c);
        }
        uVar14 = 0;
        if (uVar8 <= uVar5) {
          uVar14 = uVar5 - uVar8;
        }
        uVar6 = *(uint *)(param_1 + 0xc4);
        lVar39 = *(long *)(param_1 + 0x30);
        uVar11 = 0x20 - *(int *)(param_1 + 0xc0);
        if (uVar36 < uVar5) {
          uVar37 = uVar37 & 0xffffffff;
          do {
            uVar36 = (uint)(*(int *)(lVar44 + uVar37) * -0x61c8864f) >> (ulong)(uVar11 & 0x1f);
            *(undefined4 *)(lVar32 + (ulong)((uint)uVar37 & ~(-1 << (ulong)(uVar7 & 0x1f))) * 4) =
                 *(undefined4 *)(lVar39 + (ulong)uVar36 * 4);
            *(uint *)(lVar39 + (ulong)uVar36 * 4) = (uint)uVar37;
            uVar37 = uVar37 + 1;
          } while ((uint)(iVar19 - (int)lVar44) != uVar37);
        }
        *(uint *)(param_1 + 0x24) = uVar5;
        uVar36 = *(uint *)(lVar39 + (ulong)((uint)(*(int *)puVar26 * -0x61c8864f) >>
                                           (ulong)(uVar11 & 0x1f)) * 4);
        if (uVar41 < uVar36) {
          iVar38 = 1 << (ulong)(uVar6 & 0x1f);
          uVar16 = 3;
          uVar43 = 999999999;
          do {
            puVar30 = (ulong *)(lVar44 + (ulong)uVar36);
            if (*(char *)((long)puVar30 + uVar16) == *(char *)((long)puVar26 + uVar16)) {
              puVar34 = puVar26;
              if (puVar26 < puVar15) {
                if (*puVar30 == *puVar26) {
                  lVar39 = 9;
                  puVar30 = (ulong *)(lVar44 + 8 + (ulong)uVar36);
                  do {
                    puVar34 = (ulong *)((long)puVar25 + lVar39);
                    if (puVar15 <= puVar34) goto LAB_1006d1ac4;
                    uVar37 = *puVar30;
                    lVar39 = lVar39 + 8;
                    puVar30 = puVar30 + 1;
                  } while (uVar37 == *puVar34);
                  uVar37 = *puVar34 ^ uVar37;
                  uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                  uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                  uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                  uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10
                  ;
                  uVar37 = (lVar39 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3)) - 9;
                }
                else {
                  uVar37 = *puVar26 ^ *puVar30;
                  uVar37 = (uVar37 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar37 & 0x5555555555555555) << 1;
                  uVar37 = (uVar37 & 0xcccccccccccccccc) >> 2 | (uVar37 & 0x3333333333333333) << 2;
                  uVar37 = (uVar37 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar37 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar37 = (uVar37 & 0xff00ff00ff00ff00) >> 8 | (uVar37 & 0xff00ff00ff00ff) << 8;
                  uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10
                  ;
                  uVar37 = (ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3;
                }
              }
              else {
LAB_1006d1ac4:
                if (puVar34 < puVar23) {
                  if ((int)*puVar30 == (int)*puVar34) {
                    puVar30 = (ulong *)((long)puVar30 + 4);
                    puVar34 = (ulong *)((long)puVar34 + 4);
                  }
                }
                if (puVar34 < puVar20) {
                  if ((short)*puVar30 == (short)*puVar34) {
                    puVar30 = (ulong *)((long)puVar30 + 2);
                    puVar34 = (ulong *)((long)puVar34 + 2);
                  }
                }
                if ((puVar34 < puVar1) && ((char)*puVar30 == (char)*puVar34)) {
                  puVar34 = (ulong *)((long)puVar34 + 1);
                }
                uVar37 = (long)puVar34 - (long)puVar26;
              }
              if ((uVar16 < uVar37) &&
                 (uVar43 = (ulong)((uVar5 + 2) - uVar36), uVar16 = uVar37,
                 (ulong *)((long)puVar26 + uVar37) == puVar1)) goto joined_r0x0001006d1348;
            }
          } while ((uVar14 < uVar36) &&
                  ((iVar38 = iVar38 + -1, iVar38 != 0 &&
                   (uVar36 = *(uint *)(lVar32 + (ulong)(uVar36 & uVar8 - 1) * 4), uVar41 < uVar36)))
                  );
          if (3 < uVar16) goto LAB_1006d134c;
        }
      }
    }
    goto joined_r0x0001006d1c48;
  }
  puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
  goto LAB_1006d0b38;
joined_r0x0001006d1348:
  if (uVar16 < 4) goto joined_r0x0001006d1c48;
LAB_1006d134c:
  puVar22 = (ulong *)((long)puVar22 + 1);
  uVar37 = uVar17;
  puVar25 = puVar26;
  if ((int)((int)uVar16 * 4 - ((uint)LZCOUNT((int)uVar43 + 1) ^ 0x1f)) <=
      (int)(((uint)LZCOUNT((int)uVar12 + 1) ^ 0xffffffe0) + (int)uVar29 * 4 + 5))
  goto joined_r0x0001006d1c48;
  goto LAB_1006d138c;
joined_r0x0001006d1c48:
  if (uVar12 == 0) {
    iVar19 = 1;
    uVar37 = (long)puVar24 - (long)param_4;
    puVar25 = (ulong *)param_2[3];
    uVar36 = uVar35;
    if (puVar24 <= puVar21) goto LAB_1006d1c68;
LAB_1006d1d28:
    puVar22 = param_4;
    puVar26 = puVar25;
    if (param_4 <= puVar21) {
      puVar26 = (ulong *)((long)puVar25 + ((long)puVar21 - (long)param_4));
      uVar12 = *param_4;
      puVar25[1] = param_4[1];
      *puVar25 = uVar12;
      uVar12 = param_4[2];
      puVar25[3] = param_4[3];
      puVar25[2] = uVar12;
      puVar22 = puVar21;
      if (0x20 < (long)puVar21 - (long)param_4) {
        puVar25 = puVar25 + 4;
        puVar30 = param_4 + 6;
        do {
          uVar12 = puVar30[-2];
          puVar25[1] = puVar30[-1];
          *puVar25 = uVar12;
          uVar12 = *puVar30;
          puVar25[3] = puVar30[1];
          puVar25[2] = uVar12;
          puVar25 = puVar25 + 4;
          puVar30 = puVar30 + 4;
        } while (puVar25 < puVar26);
      }
    }
    if (puVar22 < puVar24) {
      uVar12 = (long)puVar24 - (long)puVar22;
      if ((7 < uVar12) && (0x3f < (ulong)((long)puVar26 - (long)puVar22))) {
        if (uVar12 < 0x40) {
          uVar17 = 0;
        }
        else {
          uVar17 = uVar12 & 0xffffffffffffffc0;
          puVar25 = puVar26 + 4;
          puVar30 = puVar22 + 4;
          uVar43 = uVar17;
          do {
            uVar16 = puVar30[-4];
            uVar46 = puVar30[-1];
            uVar18 = puVar30[-2];
            uVar48 = puVar30[1];
            uVar47 = *puVar30;
            uVar50 = puVar30[3];
            uVar49 = puVar30[2];
            puVar25[-3] = puVar30[-3];
            puVar25[-4] = uVar16;
            puVar25[-1] = uVar46;
            puVar25[-2] = uVar18;
            puVar25[1] = uVar48;
            *puVar25 = uVar47;
            puVar25[3] = uVar50;
            puVar25[2] = uVar49;
            uVar43 = uVar43 - 0x40;
            puVar25 = puVar25 + 8;
            puVar30 = puVar30 + 8;
          } while (uVar43 != 0);
          if (uVar12 == uVar17) goto LAB_1006d1e74;
          if ((uVar12 & 0x38) == 0) {
            puVar22 = (ulong *)((long)puVar22 + uVar17);
            puVar26 = (ulong *)((long)puVar26 + uVar17);
            goto LAB_1006d1e64;
          }
        }
        uVar43 = uVar12 & 0xfffffffffffffff8;
        lVar42 = uVar17 - uVar43;
        puVar13 = (undefined8 *)((long)puVar22 + uVar17);
        puVar27 = (undefined8 *)((long)puVar26 + uVar17);
        do {
          *puVar27 = *puVar13;
          lVar42 = lVar42 + 8;
          puVar13 = puVar13 + 1;
          puVar27 = puVar27 + 1;
        } while (lVar42 != 0);
        puVar26 = (ulong *)((long)puVar26 + uVar43);
        puVar22 = (ulong *)((long)puVar22 + uVar43);
        if (uVar12 == uVar43) goto LAB_1006d1e74;
      }
LAB_1006d1e64:
      do {
        puVar25 = (ulong *)((long)puVar22 + 1);
        *(char *)puVar26 = (char)*puVar22;
        puVar26 = (ulong *)((long)puVar26 + 1);
        puVar22 = puVar25;
      } while (puVar25 != puVar24);
    }
LAB_1006d1e74:
    param_2[3] = param_2[3] + uVar37;
    piVar28 = (int *)param_2[1];
    if (uVar37 < 0x10000) {
      *(short *)(piVar28 + 1) = (short)uVar37;
      *piVar28 = iVar19;
      goto joined_r0x0001006d1cfc;
    }
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
    uVar12 = uVar29 - 3;
    *(short *)(piVar28 + 1) = (short)uVar37;
    *piVar28 = iVar19;
    if (uVar12 < 0x10000) goto LAB_1006d1eb4;
LAB_1006d1ee0:
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
    *(short *)((long)piVar28 + 6) = (short)uVar12;
    piVar28 = piVar28 + 2;
    param_2[1] = (long)piVar28;
    puVar25 = (ulong *)((long)puVar24 + uVar29);
  }
  else {
    if ((param_4 < puVar24) && (uVar2 < (long)puVar24 + (2 - uVar12))) {
      puVar25 = puVar24;
      do {
        puVar22 = (ulong *)((long)puVar25 + -1);
        puVar24 = puVar25;
        if ((*(char *)puVar22 != *(char *)((long)puVar25 + (1 - uVar12))) ||
           (uVar29 = uVar29 + 1, puVar24 = puVar22, puVar22 <= param_4)) break;
        uVar37 = (long)puVar25 + (1 - uVar12);
        puVar25 = puVar22;
      } while (uVar2 < uVar37);
    }
    uVar36 = (int)uVar12 - 2;
    iVar19 = (int)uVar12 + 1;
    uVar37 = (long)puVar24 - (long)param_4;
    puVar25 = (ulong *)param_2[3];
    uVar45 = uVar35;
    if (puVar21 < puVar24) goto LAB_1006d1d28;
LAB_1006d1c68:
    uVar12 = *param_4;
    puVar25[1] = param_4[1];
    *puVar25 = uVar12;
    lVar42 = param_2[3];
    if (0x10 < uVar37) {
      uVar12 = param_4[2];
      *(ulong *)(lVar42 + 0x18) = param_4[3];
      *(ulong *)(lVar42 + 0x10) = uVar12;
      uVar12 = param_4[4];
      *(ulong *)(lVar42 + 0x28) = param_4[5];
      *(ulong *)(lVar42 + 0x20) = uVar12;
      if (0x30 < (long)uVar37) {
        puVar25 = (ulong *)(lVar42 + 0x30);
        puVar22 = param_4 + 8;
        do {
          uVar12 = puVar22[-2];
          puVar25[1] = puVar22[-1];
          *puVar25 = uVar12;
          uVar12 = *puVar22;
          puVar25[3] = puVar22[1];
          puVar25[2] = uVar12;
          puVar25 = puVar25 + 4;
          puVar22 = puVar22 + 4;
        } while (puVar25 < (ulong *)(lVar42 + uVar37));
      }
      goto LAB_1006d1e74;
    }
    param_2[3] = lVar42 + uVar37;
    piVar28 = (int *)param_2[1];
    *(short *)(piVar28 + 1) = (short)uVar37;
    *piVar28 = iVar19;
joined_r0x0001006d1cfc:
    uVar12 = uVar29 - 3;
    if (0xffff < uVar12) goto LAB_1006d1ee0;
LAB_1006d1eb4:
    *(short *)((long)piVar28 + 6) = (short)uVar12;
    piVar28 = piVar28 + 2;
    param_2[1] = (long)piVar28;
    puVar25 = (ulong *)((long)puVar24 + uVar29);
  }
  param_4 = puVar25;
  uVar35 = uVar36;
  if (uVar45 != 0) {
    while ((uVar41 = uVar45, param_4 = puVar25, uVar45 = uVar41, uVar35 = uVar36, puVar25 <= puVar31
           && ((int)*puVar25 == *(int *)((long)puVar25 - (ulong)uVar41)))) {
      puVar22 = (ulong *)((long)puVar25 + 4);
      lVar42 = -(ulong)uVar41;
      puVar26 = (ulong *)((long)puVar22 + lVar42);
      puVar24 = puVar22;
      if (puVar22 < puVar15) {
        if (*puVar26 == *puVar22) {
          lVar32 = 0;
          puVar24 = (ulong *)((long)puVar25 + 0xc);
          puVar26 = (ulong *)((long)puVar25 + 0xc + lVar42);
          do {
            if (puVar15 <= puVar24) goto LAB_1006d1fa4;
            uVar37 = *puVar26;
            uVar29 = *puVar24;
            lVar32 = lVar32 + 8;
            puVar24 = puVar24 + 1;
            puVar26 = puVar26 + 1;
          } while (uVar37 == uVar29);
          uVar29 = uVar29 ^ uVar37;
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = lVar32 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
        }
        else {
          uVar29 = *puVar22 ^ *puVar26;
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3;
        }
      }
      else {
LAB_1006d1fa4:
        if (puVar24 < puVar23) {
          if ((int)*puVar26 == (int)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 4);
            puVar26 = (ulong *)((long)puVar26 + 4);
          }
        }
        if (puVar24 < puVar20) {
          if ((short)*puVar26 == (short)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 2);
            puVar26 = (ulong *)((long)puVar26 + 2);
          }
        }
        if ((puVar24 < puVar1) && ((char)*puVar26 == (char)*puVar24)) {
          puVar24 = (ulong *)((long)puVar24 + 1);
        }
        uVar29 = (long)puVar24 - (long)puVar22;
      }
      if (puVar25 <= puVar21) {
        puVar22 = (ulong *)param_2[3];
        uVar37 = *puVar25;
        puVar22[1] = puVar25[1];
        *puVar22 = uVar37;
        piVar28 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar28 + 1) = 0;
      *piVar28 = 1;
      uVar9 = (undefined2)(uVar29 + 1);
      if (uVar29 + 1 < 0x10000) {
        *(undefined2 *)((long)piVar28 + 6) = uVar9;
        param_2[1] = (long)(piVar28 + 2);
      }
      else {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar28 - *param_2) >> 3);
        *(undefined2 *)((long)piVar28 + 6) = uVar9;
        param_2[1] = (long)(piVar28 + 2);
      }
      puVar25 = (ulong *)((long)puVar25 + uVar29 + 4);
      param_4 = puVar25;
      uVar45 = uVar36;
      uVar35 = uVar41;
      if (uVar36 == 0) break;
      piVar28 = piVar28 + 2;
      uVar36 = uVar41;
    }
  }
LAB_1006d0b38:
  if (puVar31 <= puVar25) goto LAB_1006d2100;
  goto LAB_1006d0b44;
}

