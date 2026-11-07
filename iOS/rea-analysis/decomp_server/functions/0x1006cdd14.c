// rea decompile_all
// name: FUN_1006cdd14
// address: 0x1006cdd14
// body: available
// range: 0x1006cdd14-0x1006ceb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006cdd14(ulong param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  int *piVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 *puVar35;
  ulong *puVar36;
  ulong *puVar37;
  ulong uVar38;
  int iVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong *local_88;
  long local_68;
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar29 = puVar2 + -1;
  uVar4 = *param_3;
  uVar6 = param_3[1];
  uVar3 = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x18);
  puVar22 = param_4;
  if ((int)param_4 == (int)uVar3) {
    puVar22 = (ulong *)((long)param_4 + 1);
  }
  uVar11 = (int)puVar22 - (int)uVar3;
  uVar17 = 0;
  if (uVar6 <= uVar11) {
    uVar17 = uVar6;
  }
  uVar16 = (ulong)uVar17;
  uVar9 = 0;
  if (uVar4 <= uVar11) {
    uVar9 = uVar4;
  }
  uVar40 = (ulong)uVar9;
  if (puVar29 <= puVar22) {
LAB_1006ceae4:
    if (uVar6 <= uVar11) {
      uVar6 = 0;
    }
    if (uVar4 <= uVar11) {
      uVar4 = uVar6;
    }
    uVar6 = uVar4;
    if ((uint)uVar40 != 0) {
      uVar6 = (uint)uVar40;
    }
    if (uVar17 != 0) {
      uVar4 = uVar17;
    }
    *param_3 = uVar6;
    param_3[1] = uVar4;
    return (long)puVar2 - (long)param_4;
  }
  puVar36 = (ulong *)((long)puVar2 - 7);
  puVar12 = (ulong *)((long)puVar2 - 3);
  puVar13 = (ulong *)((long)puVar2 - 1);
  puVar14 = puVar2 + -4;
LAB_1006cddd0:
  uVar38 = 0;
  puVar37 = (ulong *)((long)puVar22 + 1);
  lVar32 = -uVar40;
  iVar39 = (int)uVar40;
  if ((iVar39 != 0) && (*(int *)((long)puVar37 - uVar40) == *(int *)puVar37)) {
    puVar23 = (ulong *)((long)puVar22 + 5);
    puVar21 = (ulong *)((long)puVar23 + lVar32);
    puVar19 = puVar23;
    if (puVar23 < puVar36) {
      if (*puVar21 == *puVar23) {
        lVar26 = 0;
        puVar19 = (ulong *)((long)puVar22 + 0xdU);
        puVar21 = (ulong *)((long)((long)puVar22 + 0xdU) + lVar32);
        do {
          if (puVar36 <= puVar19) goto LAB_1006cde5c;
          uVar30 = *puVar21;
          uVar38 = *puVar19;
          lVar26 = lVar26 + 8;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (uVar30 == uVar38);
        uVar38 = uVar38 ^ uVar30;
        uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
        uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
        uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
        uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
        uVar38 = lVar26 + ((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
      }
      else {
        uVar38 = *puVar23 ^ *puVar21;
        uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
        uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
        uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
        uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
        uVar38 = (ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3;
      }
    }
    else {
LAB_1006cde5c:
      if (puVar19 < puVar12) {
        if ((int)*puVar21 == (int)*puVar19) {
          puVar19 = (ulong *)((long)puVar19 + 4);
          puVar21 = (ulong *)((long)puVar21 + 4);
        }
      }
      if (puVar19 < puVar13) {
        if (*(short *)puVar21 == *(short *)puVar19) {
          puVar19 = (ulong *)((long)puVar19 + 2);
          puVar21 = (ulong *)((long)puVar21 + 2);
        }
      }
      if ((puVar19 < puVar2) && ((char)*puVar21 == (char)*puVar19)) {
        puVar19 = (ulong *)((long)puVar19 + 1);
      }
      uVar38 = (long)puVar19 - (long)puVar23;
    }
    uVar38 = uVar38 + 4;
  }
  local_68 = 999999999;
  uVar27 = param_1;
  FUN_1006de54c(param_1,puVar22,puVar2,&local_68);
  uVar30 = uVar27;
  if (uVar27 <= uVar38) {
    uVar30 = uVar38;
  }
  if (3 < uVar30) {
    puVar23 = puVar22;
    if (uVar27 <= uVar38) {
      puVar23 = puVar37;
      local_68 = 0;
    }
joined_r0x0001006cdf4c:
    do {
      lVar26 = local_68;
      puVar37 = puVar22;
      uVar38 = uVar30;
      local_88 = puVar23;
      if (puVar29 <= puVar37) goto joined_r0x0001006ce68c;
      puVar23 = (ulong *)((long)puVar37 + 1);
      if (((lVar26 != 0) && (iVar39 != 0)) && (*(int *)puVar23 == *(int *)((long)puVar23 + lVar32)))
      {
        puVar22 = (ulong *)((long)puVar37 + 5);
        puVar19 = (ulong *)((long)puVar22 + lVar32);
        puVar21 = puVar22;
        if (puVar22 < puVar36) {
          if (*puVar19 == *puVar22) {
            puVar21 = (ulong *)((long)puVar37 + 0xd);
            puVar19 = (ulong *)((long)puVar37 + 0xd + lVar32);
            do {
              if (puVar36 <= puVar21) goto LAB_1006cdfcc;
              uVar27 = *puVar19;
              puVar20 = puVar21 + 1;
              uVar30 = *puVar21;
              puVar21 = puVar20;
              puVar19 = puVar19 + 1;
            } while (uVar27 == uVar30);
            uVar30 = uVar30 ^ uVar27;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            puVar21 = (ulong *)((long)puVar20 +
                               (((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) - 8));
            goto LAB_1006ce030;
          }
          uVar30 = *puVar22 ^ *puVar19;
          uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
          uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
          uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
          uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
          uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
        }
        else {
LAB_1006cdfcc:
          if ((puVar21 < puVar12) && ((int)*puVar19 == (int)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
          if ((puVar21 < puVar13) && ((short)*puVar19 == (short)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar19 = (ulong *)((long)puVar19 + 2);
          }
          if ((puVar21 < puVar2) && ((char)*puVar19 == (char)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
LAB_1006ce030:
          uVar30 = (long)puVar21 - (long)puVar22;
          if (0xfffffffffffffffb < uVar30) goto LAB_1006ce084;
        }
        if ((int)((int)uVar38 * 3 + ((uint)LZCOUNT((int)lVar26 + 1) ^ 0xffffffe0) + 2) <
            (int)(uVar30 + 4) * 3) {
          lVar26 = 0;
          uVar38 = uVar30 + 4;
          local_88 = puVar23;
        }
      }
LAB_1006ce084:
      local_68 = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar18 + uVar30) <= puVar23) {
          uVar17 = (uint)((long)puVar23 - lVar18);
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            lVar28 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar5 = *(int *)(param_1 + 0xbc);
            iVar7 = *(int *)(param_1 + 0xc0);
            do {
              uVar27 = (ulong)(*(long *)(lVar18 + uVar30) * -0x30e4432340650000) >>
                       ((ulong)(0x40 - iVar7) & 0x3f);
              uVar8 = *(undefined4 *)(lVar28 + uVar27 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar28 + uVar27 * 4) = (uint)uVar30;
              *puVar1 = uVar8;
              puVar1[1] = 1;
              uVar30 = uVar30 + 1;
            } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
          }
          uVar15 = 6;
          goto LAB_1006ce248;
        }
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar18 + uVar30) <= puVar23) {
          uVar17 = (uint)((long)puVar23 - lVar18);
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            lVar28 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar5 = *(int *)(param_1 + 0xbc);
            iVar7 = *(int *)(param_1 + 0xc0);
            do {
              uVar27 = (ulong)(*(long *)(lVar18 + uVar30) * -0x30e4432345000000) >>
                       ((ulong)(0x40 - iVar7) & 0x3f);
              uVar8 = *(undefined4 *)(lVar28 + uVar27 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar28 + uVar27 * 4) = (uint)uVar30;
              *puVar1 = uVar8;
              puVar1[1] = 1;
              uVar30 = uVar30 + 1;
            } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
          }
          uVar15 = 5;
LAB_1006ce248:
          *(uint *)(param_1 + 0x24) = uVar17;
          uVar30 = param_1;
          FUN_1006de730(param_1,puVar23,puVar2,&local_68,uVar15,0);
          if ((3 < uVar30) &&
             (puVar22 = puVar23,
             (int)(((uint)LZCOUNT((int)lVar26 + 1) ^ 0xffffffe0) + (int)uVar38 * 4 + 5) <
             (int)((int)uVar30 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f))))
          goto joined_r0x0001006cdf4c;
        }
      }
      else {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar18 + uVar30) <= puVar23) {
          uVar17 = (uint)((long)puVar23 - lVar18);
          if (*(uint *)(param_1 + 0x24) < uVar17) {
            lVar28 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar5 = *(int *)(param_1 + 0xbc);
            iVar7 = *(int *)(param_1 + 0xc0);
            do {
              uVar9 = (uint)(*(int *)(lVar18 + uVar30) * -0x61c8864f) >>
                      (ulong)(0x20U - iVar7 & 0x1f);
              uVar8 = *(undefined4 *)(lVar28 + (ulong)uVar9 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar28 + (ulong)uVar9 * 4) = (uint)uVar30;
              *puVar1 = uVar8;
              puVar1[1] = 1;
              uVar30 = uVar30 + 1;
            } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
          }
          uVar15 = 4;
          goto LAB_1006ce248;
        }
      }
      if (puVar29 <= puVar23) goto joined_r0x0001006ce68c;
      puVar23 = (ulong *)((long)puVar37 + 2);
      if (((lVar26 != 0) && (iVar39 != 0)) && (*(int *)puVar23 == *(int *)((long)puVar23 + lVar32)))
      {
        puVar22 = (ulong *)((long)puVar37 + 6);
        puVar19 = (ulong *)((long)puVar22 + lVar32);
        puVar21 = puVar22;
        if (puVar22 < puVar36) {
          if (*puVar19 == *puVar22) {
            puVar21 = (ulong *)((long)puVar37 + 0xe);
            puVar19 = (ulong *)((long)puVar37 + 0xe + lVar32);
            do {
              if (puVar36 <= puVar21) goto LAB_1006ce328;
              uVar27 = *puVar19;
              puVar37 = puVar21 + 1;
              uVar30 = *puVar21;
              puVar21 = puVar37;
              puVar19 = puVar19 + 1;
            } while (uVar27 == uVar30);
            uVar30 = uVar30 ^ uVar27;
            uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
            uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
            uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            puVar21 = (ulong *)((long)puVar37 +
                               (((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) - 8));
            goto LAB_1006ce38c;
          }
          uVar30 = *puVar22 ^ *puVar19;
          uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
          uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
          uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
          uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
          uVar30 = (ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3;
        }
        else {
LAB_1006ce328:
          if ((puVar21 < puVar12) && ((int)*puVar19 == (int)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar19 = (ulong *)((long)puVar19 + 4);
          }
          if ((puVar21 < puVar13) && ((short)*puVar19 == (short)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar19 = (ulong *)((long)puVar19 + 2);
          }
          if ((puVar21 < puVar2) && ((char)*puVar19 == (char)*puVar21)) {
            puVar21 = (ulong *)((long)puVar21 + 1);
          }
LAB_1006ce38c:
          uVar30 = (long)puVar21 - (long)puVar22;
          if (0xfffffffffffffffb < uVar30) goto LAB_1006ce3dc;
        }
        if ((int)(((uint)LZCOUNT((int)lVar26 + 1) ^ 0xffffffe0) + (int)uVar38 * 4 + 2) <
            (int)(uVar30 + 4) * 4) {
          lVar26 = 0;
          uVar38 = uVar30 + 4;
          local_88 = puVar23;
        }
      }
LAB_1006ce3dc:
      local_68 = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar23 < (ulong *)(lVar18 + uVar30)) goto joined_r0x0001006ce68c;
        uVar17 = (uint)((long)puVar23 - lVar18);
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          lVar28 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar5 = *(int *)(param_1 + 0xbc);
          iVar7 = *(int *)(param_1 + 0xc0);
          do {
            uVar27 = (ulong)(*(long *)(lVar18 + uVar30) * -0x30e4432340650000) >>
                     ((ulong)(0x40 - iVar7) & 0x3f);
            uVar8 = *(undefined4 *)(lVar28 + uVar27 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar28 + uVar27 * 4) = (uint)uVar30;
            *puVar1 = uVar8;
            puVar1[1] = 1;
            uVar30 = uVar30 + 1;
          } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
        }
        uVar15 = 6;
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar23 < (ulong *)(lVar18 + uVar30)) goto joined_r0x0001006ce68c;
        uVar17 = (uint)((long)puVar23 - lVar18);
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          lVar28 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar5 = *(int *)(param_1 + 0xbc);
          iVar7 = *(int *)(param_1 + 0xc0);
          do {
            uVar27 = (ulong)(*(long *)(lVar18 + uVar30) * -0x30e4432345000000) >>
                     ((ulong)(0x40 - iVar7) & 0x3f);
            uVar8 = *(undefined4 *)(lVar28 + uVar27 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar28 + uVar27 * 4) = (uint)uVar30;
            *puVar1 = uVar8;
            puVar1[1] = 1;
            uVar30 = uVar30 + 1;
          } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
        }
        uVar15 = 5;
      }
      else {
        lVar18 = *(long *)(param_1 + 8);
        uVar30 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar23 < (ulong *)(lVar18 + uVar30)) goto joined_r0x0001006ce68c;
        uVar17 = (uint)((long)puVar23 - lVar18);
        if (*(uint *)(param_1 + 0x24) < uVar17) {
          lVar28 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar5 = *(int *)(param_1 + 0xbc);
          iVar7 = *(int *)(param_1 + 0xc0);
          do {
            uVar9 = (uint)(*(int *)(lVar18 + uVar30) * -0x61c8864f) >> (ulong)(0x20U - iVar7 & 0x1f)
            ;
            uVar8 = *(undefined4 *)(lVar28 + (ulong)uVar9 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar30 & ~(-1 << (ulong)(iVar5 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar28 + (ulong)uVar9 * 4) = (uint)uVar30;
            *puVar1 = uVar8;
            puVar1[1] = 1;
            uVar30 = uVar30 + 1;
          } while (((long)puVar23 - lVar18 & 0xffffffffU) != uVar30);
        }
        uVar15 = 4;
      }
      *(uint *)(param_1 + 0x24) = uVar17;
      uVar30 = param_1;
      FUN_1006de730(param_1,puVar23,puVar2,&local_68,uVar15,0);
      if ((uVar30 < 4) ||
         (puVar22 = puVar23,
         (int)((int)uVar30 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f)) <=
         (int)(((uint)LZCOUNT((int)lVar26 + 1) ^ 0xffffffe0) + (int)uVar38 * 4 + 8)))
      goto joined_r0x0001006ce68c;
    } while( true );
  }
  puVar22 = (ulong *)((long)puVar22 + ((long)puVar22 - (long)param_4 >> 8) + 1);
  goto LAB_1006cddc8;
joined_r0x0001006ce68c:
  if (lVar26 == 0) {
    iVar39 = 1;
    uVar30 = (long)local_88 - (long)param_4;
    puVar22 = (ulong *)param_2[3];
    if (local_88 <= puVar14) goto LAB_1006ce6b0;
LAB_1006ce760:
    puVar23 = puVar22;
    puVar37 = param_4;
    if (param_4 <= puVar14) {
      puVar23 = (ulong *)((long)puVar22 + ((long)puVar14 - (long)param_4));
      uVar27 = *param_4;
      puVar22[1] = param_4[1];
      *puVar22 = uVar27;
      uVar27 = param_4[2];
      puVar22[3] = param_4[3];
      puVar22[2] = uVar27;
      puVar37 = puVar14;
      if (0x20 < (long)puVar14 - (long)param_4) {
        puVar22 = puVar22 + 4;
        puVar21 = param_4 + 6;
        do {
          uVar27 = puVar21[-2];
          puVar22[1] = puVar21[-1];
          *puVar22 = uVar27;
          uVar27 = *puVar21;
          puVar22[3] = puVar21[1];
          puVar22[2] = uVar27;
          puVar22 = puVar22 + 4;
          puVar21 = puVar21 + 4;
        } while (puVar22 < puVar23);
      }
    }
    if (puVar37 < local_88) {
      uVar27 = (long)local_88 - (long)puVar37;
      if ((7 < uVar27) && (0x3f < (ulong)((long)puVar23 - (long)puVar37))) {
        if (uVar27 < 0x40) {
          uVar33 = 0;
        }
        else {
          uVar33 = uVar27 & 0xffffffffffffffc0;
          puVar22 = puVar23 + 4;
          puVar21 = puVar37 + 4;
          uVar34 = uVar33;
          do {
            uVar41 = puVar21[-4];
            uVar43 = puVar21[-1];
            uVar42 = puVar21[-2];
            uVar45 = puVar21[1];
            uVar44 = *puVar21;
            uVar47 = puVar21[3];
            uVar46 = puVar21[2];
            puVar22[-3] = puVar21[-3];
            puVar22[-4] = uVar41;
            puVar22[-1] = uVar43;
            puVar22[-2] = uVar42;
            puVar22[1] = uVar45;
            *puVar22 = uVar44;
            puVar22[3] = uVar47;
            puVar22[2] = uVar46;
            uVar34 = uVar34 - 0x40;
            puVar22 = puVar22 + 8;
            puVar21 = puVar21 + 8;
          } while (uVar34 != 0);
          if (uVar27 == uVar33) goto LAB_1006ce874;
          if ((uVar27 & 0x38) == 0) {
            puVar37 = (ulong *)((long)puVar37 + uVar33);
            puVar23 = (ulong *)((long)puVar23 + uVar33);
            goto LAB_1006ce864;
          }
        }
        uVar34 = uVar27 & 0xfffffffffffffff8;
        lVar32 = uVar33 - uVar34;
        puVar24 = (undefined8 *)((long)puVar23 + uVar33);
        puVar35 = (undefined8 *)((long)puVar37 + uVar33);
        do {
          *puVar24 = *puVar35;
          lVar32 = lVar32 + 8;
          puVar24 = puVar24 + 1;
          puVar35 = puVar35 + 1;
        } while (lVar32 != 0);
        puVar23 = (ulong *)((long)puVar23 + uVar34);
        puVar37 = (ulong *)((long)puVar37 + uVar34);
        if (uVar27 == uVar34) goto LAB_1006ce874;
      }
LAB_1006ce864:
      do {
        puVar22 = (ulong *)((long)puVar37 + 1);
        *(char *)puVar23 = (char)*puVar37;
        puVar23 = (ulong *)((long)puVar23 + 1);
        puVar37 = puVar22;
      } while (puVar22 != local_88);
    }
  }
  else {
    if ((param_4 < local_88) && (uVar3 < (ulong)((long)local_88 + (2 - lVar26)))) {
      puVar22 = local_88;
      do {
        puVar37 = (ulong *)((long)puVar22 + -1);
        local_88 = puVar22;
        if ((*(char *)puVar37 != *(char *)((long)puVar22 + (1 - lVar26))) ||
           (uVar38 = uVar38 + 1, local_88 = puVar37, puVar37 <= param_4)) break;
        uVar16 = (long)puVar22 + (1 - lVar26);
        puVar22 = puVar37;
      } while (uVar3 < uVar16);
    }
    uVar27 = (ulong)((int)lVar26 - 2);
    iVar39 = (int)lVar26 + 1;
    uVar30 = (long)local_88 - (long)param_4;
    puVar22 = (ulong *)param_2[3];
    uVar16 = uVar40;
    uVar40 = uVar27;
    if (puVar14 < local_88) goto LAB_1006ce760;
LAB_1006ce6b0:
    uVar27 = *param_4;
    puVar22[1] = param_4[1];
    *puVar22 = uVar27;
    lVar32 = param_2[3];
    if (uVar30 < 0x11) {
      param_2[3] = lVar32 + uVar30;
      piVar25 = (int *)param_2[1];
      *(short *)(piVar25 + 1) = (short)uVar30;
      *piVar25 = iVar39;
      goto joined_r0x0001006ce8d8;
    }
    uVar27 = param_4[2];
    *(ulong *)(lVar32 + 0x18) = param_4[3];
    *(ulong *)(lVar32 + 0x10) = uVar27;
    uVar27 = param_4[4];
    *(ulong *)(lVar32 + 0x28) = param_4[5];
    *(ulong *)(lVar32 + 0x20) = uVar27;
    if (0x30 < (long)uVar30) {
      puVar22 = (ulong *)(lVar32 + 0x30);
      puVar37 = param_4 + 8;
      do {
        uVar27 = puVar37[-2];
        puVar22[1] = puVar37[-1];
        *puVar22 = uVar27;
        uVar27 = *puVar37;
        puVar22[3] = puVar37[1];
        puVar22[2] = uVar27;
        puVar22 = puVar22 + 4;
        puVar37 = puVar37 + 4;
      } while (puVar22 < (ulong *)(lVar32 + uVar30));
    }
  }
LAB_1006ce874:
  param_2[3] = param_2[3] + uVar30;
  piVar25 = (int *)param_2[1];
  if (uVar30 < 0x10000) {
    *(short *)(piVar25 + 1) = (short)uVar30;
    *piVar25 = iVar39;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
    *(short *)(piVar25 + 1) = (short)uVar30;
    *piVar25 = iVar39;
  }
joined_r0x0001006ce8d8:
  uVar10 = (undefined2)(uVar38 - 3);
  iVar39 = (int)uVar16;
  if (uVar38 - 3 < 0x10000) {
    *(undefined2 *)((long)piVar25 + 6) = uVar10;
    param_2[1] = (long)(piVar25 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
    *(undefined2 *)((long)piVar25 + 6) = uVar10;
    param_2[1] = (long)(piVar25 + 2);
  }
  param_4 = (ulong *)((long)local_88 + uVar38);
  uVar38 = uVar16;
  while (((uVar16 = uVar38, puVar22 = param_4, iVar39 != 0 &&
          (piVar25 = (int *)((long)piVar25 + 8), param_4 <= puVar29)) &&
         (*(int *)param_4 == *(int *)((long)param_4 - uVar16)))) {
    puVar22 = (ulong *)((long)param_4 + 4);
    puVar37 = (ulong *)((long)puVar22 + -uVar16);
    puVar23 = puVar22;
    if (puVar22 < puVar36) {
      if (*puVar37 == *puVar22) {
        lVar32 = 0;
        puVar23 = (ulong *)((long)param_4 + 0xc);
        puVar37 = (ulong *)((long)param_4 + 0xc + -uVar16);
        do {
          if (puVar36 <= puVar23) goto LAB_1006ce99c;
          uVar30 = *puVar37;
          uVar38 = *puVar23;
          lVar32 = lVar32 + 8;
          puVar23 = puVar23 + 1;
          puVar37 = puVar37 + 1;
        } while (uVar30 == uVar38);
        uVar38 = uVar38 ^ uVar30;
        uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
        uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
        uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
        uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
        uVar38 = lVar32 + ((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
      }
      else {
        uVar38 = *puVar22 ^ *puVar37;
        uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
        uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
        uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
        uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
        uVar38 = (ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3;
      }
    }
    else {
LAB_1006ce99c:
      if (puVar23 < puVar12) {
        if ((int)*puVar37 == (int)*puVar23) {
          puVar23 = (ulong *)((long)puVar23 + 4);
          puVar37 = (ulong *)((long)puVar37 + 4);
        }
      }
      if (puVar23 < puVar13) {
        if (*(short *)puVar37 == *(short *)puVar23) {
          puVar23 = (ulong *)((long)puVar23 + 2);
          puVar37 = (ulong *)((long)puVar37 + 2);
        }
      }
      if ((puVar23 < puVar2) && ((char)*puVar37 == (char)*puVar23)) {
        puVar23 = (ulong *)((long)puVar23 + 1);
      }
      uVar38 = (long)puVar23 - (long)puVar22;
    }
    if (param_4 <= puVar14) {
      puVar22 = (ulong *)param_2[3];
      uVar30 = *param_4;
      puVar22[1] = *(ulong *)((long)param_4 + 8);
      *puVar22 = uVar30;
      piVar25 = (int *)param_2[1];
    }
    *(undefined2 *)(piVar25 + 1) = 0;
    *piVar25 = 1;
    iVar39 = (int)uVar40;
    uVar10 = (undefined2)(uVar38 + 1);
    if (uVar38 + 1 < 0x10000) {
      *(undefined2 *)((long)piVar25 + 6) = uVar10;
      param_2[1] = (long)(piVar25 + 2);
    }
    else {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
      *(undefined2 *)((long)piVar25 + 6) = uVar10;
      param_2[1] = (long)(piVar25 + 2);
    }
    param_4 = (ulong *)((long)param_4 + uVar38 + 4);
    uVar38 = uVar40;
    uVar40 = uVar16;
  }
LAB_1006cddc8:
  uVar17 = (uint)uVar16;
  if (puVar29 <= puVar22) goto LAB_1006ceae4;
  goto LAB_1006cddd0;
}

