// rea decompile_all
// name: FUN_1006d2ee0
// address: 0x1006d2ee0
// body: available
// range: 0x1006d2ee0-0x1006d3ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006d2ee0(ulong param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  undefined4 *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  int *piVar25;
  ulong *puVar26;
  long lVar27;
  ulong *puVar28;
  ulong *puVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  ulong uVar33;
  long lVar34;
  ulong *puVar35;
  ulong uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  int iVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  int local_94;
  ulong *local_90;
  long local_68;
  
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar21 = puVar4 + -1;
  lVar40 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0x18);
  iVar43 = *param_3;
  local_94 = param_3[1];
  puVar17 = *(ulong **)(param_1 + 0xb0);
  puVar7 = (ulong *)*puVar17;
  uVar8 = puVar17[1];
  puVar17 = (ulong *)(uVar8 + (uint)puVar17[3]);
  puVar5 = (ulong *)(lVar40 + (ulong)uVar9);
  puVar23 = param_4;
  if ((int)puVar7 + ((int)param_4 - (int)puVar5) == (int)puVar17) {
    puVar23 = (ulong *)((long)param_4 + 1);
  }
  if (puVar21 <= puVar23) {
LAB_1006d3ea8:
    *param_3 = iVar43;
    param_3[1] = local_94;
    return (long)puVar4 - (long)param_4;
  }
  uVar3 = uVar9 + ((int)uVar8 - (int)puVar7);
  puVar18 = (ulong *)((long)puVar4 - 7);
  puVar19 = puVar4 + -4;
  puVar2 = (ulong *)((ulong)uVar9 + lVar40 + 8);
LAB_1006d2fcc:
  iVar39 = (int)lVar40;
  uVar15 = (((int)puVar23 - iVar39) - iVar43) + 1;
  piVar25 = (int *)(uVar8 + (uVar15 - uVar3));
  if (uVar9 <= uVar15) {
    piVar25 = (int *)(lVar40 + (ulong)uVar15);
  }
  if ((uVar15 - uVar9 < 0xfffffffd) && (*piVar25 == *(int *)((long)puVar23 + 1U))) {
    puVar22 = puVar7;
    if (uVar9 <= uVar15) {
      puVar22 = puVar4;
    }
    lVar34 = (long)puVar23 + 5;
    FUN_1006c7460(lVar34,piVar25 + 1,puVar4,puVar22,puVar5);
    uVar13 = lVar34 + 4;
  }
  else {
    uVar13 = 0;
  }
  local_68 = 999999999;
  uVar38 = param_1;
  FUN_1006dd964(param_1,puVar23,puVar4,&local_68);
  uVar20 = uVar38;
  if (uVar38 <= uVar13) {
    uVar20 = uVar13;
  }
  if (3 < uVar20) {
    puVar22 = puVar23;
    lVar34 = local_68;
    if (uVar38 <= uVar13) {
      puVar22 = (ulong *)((long)puVar23 + 1U);
      lVar34 = 0;
    }
joined_r0x0001006d3090:
    do {
      lVar41 = lVar34;
      puVar28 = puVar23;
      local_90 = puVar22;
      uVar13 = uVar20;
      if (puVar21 <= puVar28) goto joined_r0x0001006d3850;
      puVar22 = (ulong *)((long)puVar28 + 1);
      uVar15 = ((int)puVar22 - iVar39) - iVar43;
      piVar25 = (int *)(uVar8 + (uVar15 - uVar3));
      if (uVar9 <= uVar15) {
        piVar25 = (int *)(lVar40 + (ulong)uVar15);
      }
      if ((uVar15 - uVar9 < 0xfffffffd) && (*piVar25 == *(int *)puVar22)) {
        puVar23 = puVar7;
        if (uVar9 <= uVar15) {
          puVar23 = puVar4;
        }
        puVar31 = (ulong *)((long)puVar28 + 5);
        puVar26 = (ulong *)(piVar25 + 1);
        puVar35 = (ulong *)((long)puVar31 + ((long)puVar23 - (long)puVar26));
        if (puVar4 <= puVar35) {
          puVar35 = puVar4;
        }
        puVar29 = puVar31;
        puVar32 = puVar26;
        if (puVar31 < (ulong *)((long)puVar35 - 7U)) {
          if (*puVar26 == *puVar31) {
            lVar34 = 0;
            puVar29 = (ulong *)((long)puVar28 + 0xd);
            puVar32 = (ulong *)(piVar25 + 3);
            do {
              if ((ulong *)((long)puVar35 - 7U) <= puVar29) goto LAB_1006d3164;
              uVar36 = *puVar32;
              uVar38 = *puVar29;
              lVar34 = lVar34 + 8;
              puVar29 = puVar29 + 1;
              puVar32 = puVar32 + 1;
            } while (uVar36 == uVar38);
            uVar38 = uVar38 ^ uVar36;
            uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
            uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
            uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
            uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
            uVar38 = lVar34 + ((ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3);
          }
          else {
            uVar38 = *puVar31 ^ *puVar26;
            uVar38 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1;
            uVar38 = (uVar38 & 0xcccccccccccccccc) >> 2 | (uVar38 & 0x3333333333333333) << 2;
            uVar38 = (uVar38 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar38 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar38 = (uVar38 & 0xff00ff00ff00ff00) >> 8 | (uVar38 & 0xff00ff00ff00ff) << 8;
            uVar38 = (uVar38 & 0xffff0000ffff0000) >> 0x10 | (uVar38 & 0xffff0000ffff) << 0x10;
            uVar38 = (ulong)LZCOUNT(uVar38 >> 0x20 | uVar38 << 0x20) >> 3;
          }
        }
        else {
LAB_1006d3164:
          if (puVar29 < (ulong *)((long)puVar35 - 3U)) {
            if ((int)*puVar32 == (int)*puVar29) {
              puVar29 = (ulong *)((long)puVar29 + 4);
              puVar32 = (ulong *)((long)puVar32 + 4);
            }
            if (puVar29 < (ulong *)((long)puVar35 - 1U)) {
LAB_1006d31d4:
              if ((short)*puVar32 == (short)*puVar29) {
                puVar29 = (ulong *)((long)puVar29 + 2);
                puVar32 = (ulong *)((long)puVar32 + 2);
              }
            }
          }
          else if (puVar29 < (ulong *)((long)puVar35 - 1U)) goto LAB_1006d31d4;
          if ((puVar29 < puVar35) && ((char)*puVar32 == (char)*puVar29)) {
            puVar29 = (ulong *)((long)puVar29 + 1);
          }
          uVar38 = (long)puVar29 - (long)puVar31;
        }
        if ((ulong *)((long)puVar26 + uVar38) == puVar23) {
          puVar31 = (ulong *)((long)puVar31 + uVar38);
          puVar23 = puVar31;
          puVar26 = puVar5;
          if (puVar31 < puVar18) {
            if (*puVar5 == *puVar31) {
              lVar34 = 0;
              puVar23 = (ulong *)((long)puVar28 + uVar38 + 0xd);
              puVar26 = puVar2;
              do {
                if (puVar18 <= puVar23) goto LAB_1006d3288;
                uVar33 = *puVar26;
                uVar36 = *puVar23;
                lVar34 = lVar34 + 8;
                puVar23 = puVar23 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar33 == uVar36);
              uVar36 = uVar36 ^ uVar33;
              uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              uVar36 = lVar34 + ((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
            }
            else {
              uVar36 = *puVar31 ^ *puVar5;
              uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
              uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
              uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
              uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
              uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
            }
          }
          else {
LAB_1006d3288:
            if ((puVar23 < (ulong *)((long)puVar4 - 3U)) && ((int)*puVar26 == (int)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar26 = (ulong *)((long)puVar26 + 4);
            }
            if ((puVar23 < (ulong *)((long)puVar4 - 1U)) && ((short)*puVar26 == (short)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 2);
              puVar26 = (ulong *)((long)puVar26 + 2);
            }
            if ((puVar23 < puVar4) && ((char)*puVar26 == (char)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 1);
            }
            uVar36 = (long)puVar23 - (long)puVar31;
          }
          uVar38 = uVar36 + uVar38;
        }
        if (uVar38 < 0xfffffffffffffffc &&
            (int)((int)uVar20 * 3 + ((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + 2) <
            (int)(uVar38 + 4) * 3) {
          local_90 = (ulong *)((long)puVar28 + 1);
          lVar41 = 0;
          uVar13 = uVar38 + 4;
        }
      }
      local_68 = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar34 + uVar20) <= puVar22) {
          uVar15 = (uint)((long)puVar22 - lVar34);
          if (*(uint *)(param_1 + 0x24) < uVar15) {
            lVar27 = *(long *)(param_1 + 0x30);
            lVar30 = *(long *)(param_1 + 0x40);
            iVar16 = *(int *)(param_1 + 0xbc);
            iVar42 = *(int *)(param_1 + 0xc0);
            do {
              uVar38 = (ulong)(*(long *)(lVar34 + uVar20) * -0x30e4432340650000) >>
                       ((ulong)(0x40 - iVar42) & 0x3f);
              uVar10 = *(undefined4 *)(lVar27 + uVar38 * 4);
              puVar1 = (undefined4 *)
                       (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar27 + uVar38 * 4) = (uint)uVar20;
              *puVar1 = uVar10;
              puVar1[1] = 1;
              uVar20 = uVar20 + 1;
            } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
          }
          uVar14 = 6;
          goto LAB_1006d3508;
        }
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar34 + uVar20) <= puVar22) {
          uVar15 = (uint)((long)puVar22 - lVar34);
          if (*(uint *)(param_1 + 0x24) < uVar15) {
            lVar27 = *(long *)(param_1 + 0x30);
            lVar30 = *(long *)(param_1 + 0x40);
            iVar16 = *(int *)(param_1 + 0xbc);
            iVar42 = *(int *)(param_1 + 0xc0);
            do {
              uVar38 = (ulong)(*(long *)(lVar34 + uVar20) * -0x30e4432345000000) >>
                       ((ulong)(0x40 - iVar42) & 0x3f);
              uVar10 = *(undefined4 *)(lVar27 + uVar38 * 4);
              puVar1 = (undefined4 *)
                       (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar27 + uVar38 * 4) = (uint)uVar20;
              *puVar1 = uVar10;
              puVar1[1] = 1;
              uVar20 = uVar20 + 1;
            } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
          }
          uVar14 = 5;
LAB_1006d3508:
          *(uint *)(param_1 + 0x24) = uVar15;
          uVar20 = param_1;
          FUN_1006de730(param_1,puVar22,puVar4,&local_68,uVar14,2);
          if ((3 < uVar20) &&
             (puVar23 = puVar22, lVar34 = local_68,
             (int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar13 * 4 + 5) <
             (int)((int)uVar20 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f))))
          goto joined_r0x0001006d3090;
        }
      }
      else {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar34 + uVar20) <= puVar22) {
          uVar15 = (uint)((long)puVar22 - lVar34);
          if (*(uint *)(param_1 + 0x24) < uVar15) {
            lVar27 = *(long *)(param_1 + 0x30);
            lVar30 = *(long *)(param_1 + 0x40);
            iVar16 = *(int *)(param_1 + 0xbc);
            iVar42 = *(int *)(param_1 + 0xc0);
            do {
              uVar11 = (uint)(*(int *)(lVar34 + uVar20) * -0x61c8864f) >>
                       (ulong)(0x20U - iVar42 & 0x1f);
              uVar10 = *(undefined4 *)(lVar27 + (ulong)uVar11 * 4);
              puVar1 = (undefined4 *)
                       (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar27 + (ulong)uVar11 * 4) = (uint)uVar20;
              *puVar1 = uVar10;
              puVar1[1] = 1;
              uVar20 = uVar20 + 1;
            } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
          }
          uVar14 = 4;
          goto LAB_1006d3508;
        }
      }
      if (puVar21 <= puVar22) goto joined_r0x0001006d3850;
      puVar22 = (ulong *)((long)puVar28 + 2);
      uVar15 = ((int)puVar22 - iVar39) - iVar43;
      piVar25 = (int *)(uVar8 + (uVar15 - uVar3));
      if (uVar9 <= uVar15) {
        piVar25 = (int *)(lVar40 + (ulong)uVar15);
      }
      if ((uVar15 - uVar9 < 0xfffffffd) && (*piVar25 == *(int *)puVar22)) {
        puVar23 = puVar7;
        if (uVar9 <= uVar15) {
          puVar23 = puVar4;
        }
        uVar20 = (long)puVar28 + 6;
        FUN_1006c7460(uVar20,piVar25 + 1,puVar4,puVar23,puVar5);
        if ((uVar20 < 0xfffffffffffffffc) &&
           ((int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar13 * 4 + 2) <
            (int)(uVar20 + 4) * 4)) {
          lVar41 = 0;
          uVar13 = uVar20 + 4;
          local_90 = puVar22;
        }
      }
      local_68 = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar22 < (ulong *)(lVar34 + uVar20)) goto joined_r0x0001006d3850;
        uVar15 = (uint)((long)puVar22 - lVar34);
        if (*(uint *)(param_1 + 0x24) < uVar15) {
          lVar27 = *(long *)(param_1 + 0x30);
          lVar30 = *(long *)(param_1 + 0x40);
          iVar16 = *(int *)(param_1 + 0xbc);
          iVar42 = *(int *)(param_1 + 0xc0);
          do {
            uVar38 = (ulong)(*(long *)(lVar34 + uVar20) * -0x30e4432340650000) >>
                     ((ulong)(0x40 - iVar42) & 0x3f);
            uVar10 = *(undefined4 *)(lVar27 + uVar38 * 4);
            puVar1 = (undefined4 *)
                     (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar27 + uVar38 * 4) = (uint)uVar20;
            *puVar1 = uVar10;
            puVar1[1] = 1;
            uVar20 = uVar20 + 1;
          } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
        }
        uVar14 = 6;
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar22 < (ulong *)(lVar34 + uVar20)) goto joined_r0x0001006d3850;
        uVar15 = (uint)((long)puVar22 - lVar34);
        if (*(uint *)(param_1 + 0x24) < uVar15) {
          lVar27 = *(long *)(param_1 + 0x30);
          lVar30 = *(long *)(param_1 + 0x40);
          iVar16 = *(int *)(param_1 + 0xbc);
          iVar42 = *(int *)(param_1 + 0xc0);
          do {
            uVar38 = (ulong)(*(long *)(lVar34 + uVar20) * -0x30e4432345000000) >>
                     ((ulong)(0x40 - iVar42) & 0x3f);
            uVar10 = *(undefined4 *)(lVar27 + uVar38 * 4);
            puVar1 = (undefined4 *)
                     (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar27 + uVar38 * 4) = (uint)uVar20;
            *puVar1 = uVar10;
            puVar1[1] = 1;
            uVar20 = uVar20 + 1;
          } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
        }
        uVar14 = 5;
      }
      else {
        lVar34 = *(long *)(param_1 + 8);
        uVar20 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar22 < (ulong *)(lVar34 + uVar20)) goto joined_r0x0001006d3850;
        uVar15 = (uint)((long)puVar22 - lVar34);
        if (*(uint *)(param_1 + 0x24) < uVar15) {
          lVar27 = *(long *)(param_1 + 0x30);
          lVar30 = *(long *)(param_1 + 0x40);
          iVar16 = *(int *)(param_1 + 0xbc);
          iVar42 = *(int *)(param_1 + 0xc0);
          do {
            uVar11 = (uint)(*(int *)(lVar34 + uVar20) * -0x61c8864f) >>
                     (ulong)(0x20U - iVar42 & 0x1f);
            uVar10 = *(undefined4 *)(lVar27 + (ulong)uVar11 * 4);
            puVar1 = (undefined4 *)
                     (lVar30 + (ulong)(((uint)uVar20 & ~(-1 << (ulong)(iVar16 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar27 + (ulong)uVar11 * 4) = (uint)uVar20;
            *puVar1 = uVar10;
            puVar1[1] = 1;
            uVar20 = uVar20 + 1;
          } while (((long)puVar22 - lVar34 & 0xffffffffU) != uVar20);
        }
        uVar14 = 4;
      }
      *(uint *)(param_1 + 0x24) = uVar15;
      uVar20 = param_1;
      FUN_1006de730(param_1,puVar22,puVar4,&local_68,uVar14,2);
      if ((uVar20 < 4) ||
         (puVar23 = puVar22, lVar34 = local_68,
         (int)((int)uVar20 * 4 - ((uint)LZCOUNT((int)local_68 + 1) ^ 0x1f)) <=
         (int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar13 * 4 + 8)))
      goto joined_r0x0001006d3850;
    } while( true );
  }
  puVar23 = (ulong *)((long)puVar23 + ((long)puVar23 - (long)param_4 >> 8) + 1);
  goto LAB_1006d2fc4;
joined_r0x0001006d3850:
  if (lVar41 == 0) {
    iVar16 = 1;
    uVar20 = (long)local_90 - (long)param_4;
    puVar23 = (ulong *)param_2[3];
    iVar42 = iVar43;
    if (local_90 <= puVar19) goto LAB_1006d3914;
LAB_1006d39b8:
    puVar28 = puVar23;
    puVar22 = param_4;
    if (param_4 <= puVar19) {
      puVar28 = (ulong *)((long)puVar23 + ((long)puVar19 - (long)param_4));
      uVar38 = *param_4;
      puVar23[1] = param_4[1];
      *puVar23 = uVar38;
      uVar38 = param_4[2];
      puVar23[3] = param_4[3];
      puVar23[2] = uVar38;
      puVar22 = puVar19;
      if (0x20 < (long)puVar19 - (long)param_4) {
        puVar23 = puVar23 + 4;
        puVar31 = param_4 + 6;
        do {
          uVar38 = puVar31[-2];
          puVar23[1] = puVar31[-1];
          *puVar23 = uVar38;
          uVar38 = *puVar31;
          puVar23[3] = puVar31[1];
          puVar23[2] = uVar38;
          puVar23 = puVar23 + 4;
          puVar31 = puVar31 + 4;
        } while (puVar23 < puVar28);
      }
    }
    if (puVar22 < local_90) {
      uVar38 = (long)local_90 - (long)puVar22;
      if ((7 < uVar38) && (0x3f < (ulong)((long)puVar28 - (long)puVar22))) {
        if (uVar38 < 0x40) {
          uVar33 = 0;
        }
        else {
          uVar33 = uVar38 & 0xffffffffffffffc0;
          puVar23 = puVar28 + 4;
          puVar31 = puVar22 + 4;
          uVar36 = uVar33;
          do {
            uVar44 = puVar31[-4];
            uVar46 = puVar31[-1];
            uVar45 = puVar31[-2];
            uVar48 = puVar31[1];
            uVar47 = *puVar31;
            uVar50 = puVar31[3];
            uVar49 = puVar31[2];
            puVar23[-3] = puVar31[-3];
            puVar23[-4] = uVar44;
            puVar23[-1] = uVar46;
            puVar23[-2] = uVar45;
            puVar23[1] = uVar48;
            *puVar23 = uVar47;
            puVar23[3] = uVar50;
            puVar23[2] = uVar49;
            uVar36 = uVar36 - 0x40;
            puVar23 = puVar23 + 8;
            puVar31 = puVar31 + 8;
          } while (uVar36 != 0);
          if (uVar38 == uVar33) goto LAB_1006d3acc;
          if ((uVar38 & 0x38) == 0) {
            puVar22 = (ulong *)((long)puVar22 + uVar33);
            puVar28 = (ulong *)((long)puVar28 + uVar33);
            goto LAB_1006d3abc;
          }
        }
        uVar36 = uVar38 & 0xfffffffffffffff8;
        lVar34 = uVar33 - uVar36;
        puVar24 = (undefined8 *)((long)puVar28 + uVar33);
        puVar37 = (undefined8 *)((long)puVar22 + uVar33);
        do {
          *puVar24 = *puVar37;
          lVar34 = lVar34 + 8;
          puVar24 = puVar24 + 1;
          puVar37 = puVar37 + 1;
        } while (lVar34 != 0);
        puVar28 = (ulong *)((long)puVar28 + uVar36);
        puVar22 = (ulong *)((long)puVar22 + uVar36);
        if (uVar38 == uVar36) goto LAB_1006d3acc;
      }
LAB_1006d3abc:
      do {
        puVar23 = (ulong *)((long)puVar22 + 1);
        *(char *)puVar28 = (char)*puVar22;
        puVar28 = (ulong *)((long)puVar28 + 1);
        puVar22 = puVar23;
      } while (puVar23 != local_90);
    }
  }
  else {
    uVar20 = (long)local_90 + (-lVar41 - lVar40) + -0xfffffffe;
    lVar34 = uVar8 - uVar3;
    puVar23 = puVar17;
    if (uVar9 <= (uint)uVar20) {
      lVar34 = lVar40;
      puVar23 = puVar5;
    }
    if ((param_4 < local_90) && (uVar20 = uVar20 & 0xffffffff, puVar23 < (ulong *)(lVar34 + uVar20))
       ) {
      puVar22 = (ulong *)(lVar34 + uVar20);
      do {
        puVar28 = (ulong *)((long)local_90 + -1);
        puVar22 = (ulong *)((long)puVar22 + -1);
        if ((*(char *)puVar28 != *(char *)puVar22) ||
           (uVar13 = uVar13 + 1, local_90 = puVar28, puVar28 <= param_4)) break;
      } while (puVar23 < puVar22);
    }
    iVar42 = (int)lVar41 + -2;
    iVar16 = (int)lVar41 + 1;
    uVar20 = (long)local_90 - (long)param_4;
    puVar23 = (ulong *)param_2[3];
    local_94 = iVar43;
    if (puVar19 < local_90) goto LAB_1006d39b8;
LAB_1006d3914:
    uVar38 = *param_4;
    puVar23[1] = param_4[1];
    *puVar23 = uVar38;
    lVar34 = param_2[3];
    if (uVar20 < 0x11) {
      param_2[3] = lVar34 + uVar20;
      piVar25 = (int *)param_2[1];
      *(short *)(piVar25 + 1) = (short)uVar20;
      *piVar25 = iVar16;
      goto joined_r0x0001006d3b38;
    }
    uVar38 = param_4[2];
    *(ulong *)(lVar34 + 0x18) = param_4[3];
    *(ulong *)(lVar34 + 0x10) = uVar38;
    uVar38 = param_4[4];
    *(ulong *)(lVar34 + 0x28) = param_4[5];
    *(ulong *)(lVar34 + 0x20) = uVar38;
    if (0x30 < (long)uVar20) {
      puVar23 = (ulong *)(lVar34 + 0x30);
      puVar22 = param_4 + 8;
      do {
        uVar38 = puVar22[-2];
        puVar23[1] = puVar22[-1];
        *puVar23 = uVar38;
        uVar38 = *puVar22;
        puVar23[3] = puVar22[1];
        puVar23[2] = uVar38;
        puVar23 = puVar23 + 4;
        puVar22 = puVar22 + 4;
      } while (puVar23 < (ulong *)(lVar34 + uVar20));
    }
  }
LAB_1006d3acc:
  param_2[3] = param_2[3] + uVar20;
  piVar25 = (int *)param_2[1];
  if (uVar20 < 0x10000) {
    *(short *)(piVar25 + 1) = (short)uVar20;
    *piVar25 = iVar16;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
    *(short *)(piVar25 + 1) = (short)uVar20;
    *piVar25 = iVar16;
  }
joined_r0x0001006d3b38:
  uVar12 = (undefined2)(uVar13 - 3);
  if (uVar13 - 3 < 0x10000) {
    *(undefined2 *)((long)piVar25 + 6) = uVar12;
    param_2[1] = (long)(piVar25 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
    *(undefined2 *)((long)piVar25 + 6) = uVar12;
    param_2[1] = (long)(piVar25 + 2);
  }
  piVar25 = piVar25 + 2;
  for (param_4 = (ulong *)((long)local_90 + uVar13); iVar43 = iVar42, puVar23 = param_4,
      param_4 <= puVar21; param_4 = (ulong *)((long)param_4 + uVar13 + 4)) {
    uVar15 = ((int)param_4 - iVar39) - local_94;
    lVar34 = uVar8 - uVar3;
    if (uVar9 <= uVar15) {
      lVar34 = lVar40;
    }
    if ((0xfffffffc < uVar15 - uVar9) ||
       (piVar6 = (int *)(lVar34 + (ulong)uVar15), *piVar6 != (int)*param_4)) break;
    puVar23 = puVar7;
    if (uVar9 <= uVar15) {
      puVar23 = puVar4;
    }
    puVar22 = (ulong *)((long)param_4 + 4);
    puVar28 = (ulong *)(piVar6 + 1);
    puVar31 = (ulong *)((long)puVar22 + ((long)puVar23 - (long)puVar28));
    if (puVar4 <= puVar31) {
      puVar31 = puVar4;
    }
    puVar26 = puVar22;
    puVar35 = puVar28;
    if (puVar22 < (ulong *)((long)puVar31 - 7U)) {
      if (*puVar28 == *puVar22) {
        lVar41 = 0;
        puVar26 = (ulong *)((long)param_4 + 0xc);
        puVar35 = (ulong *)(lVar34 + (ulong)uVar15 + 0xc);
        do {
          if ((ulong *)((long)puVar31 - 7U) <= puVar26) goto LAB_1006d3c60;
          uVar13 = *puVar35;
          uVar20 = *puVar26;
          lVar41 = lVar41 + 8;
          puVar26 = puVar26 + 1;
          puVar35 = puVar35 + 1;
        } while (uVar13 == uVar20);
        uVar20 = uVar20 ^ uVar13;
        uVar13 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = lVar41 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
      }
      else {
        uVar13 = *puVar22 ^ *puVar28;
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
      }
      if ((ulong *)((long)puVar28 + uVar13) == puVar23) goto LAB_1006d3d30;
joined_r0x0001006d3cc4:
      if (param_4 <= puVar19) goto LAB_1006d3e04;
LAB_1006d3cc8:
      *(undefined2 *)(piVar25 + 1) = 0;
      *piVar25 = 1;
    }
    else {
LAB_1006d3c60:
      if (puVar26 < (ulong *)((long)puVar31 - 3U)) {
        if ((int)*puVar35 == (int)*puVar26) {
          puVar26 = (ulong *)((long)puVar26 + 4);
          puVar35 = (ulong *)((long)puVar35 + 4);
        }
        if (puVar26 < (ulong *)((long)puVar31 - 1U)) {
LAB_1006d3cec:
          if ((short)*puVar35 == (short)*puVar26) {
            puVar26 = (ulong *)((long)puVar26 + 2);
            puVar35 = (ulong *)((long)puVar35 + 2);
          }
        }
      }
      else if (puVar26 < (ulong *)((long)puVar31 - 1U)) goto LAB_1006d3cec;
      if ((puVar26 < puVar31) && ((char)*puVar35 == (char)*puVar26)) {
        puVar26 = (ulong *)((long)puVar26 + 1);
      }
      uVar13 = (long)puVar26 - (long)puVar22;
      if ((ulong *)((long)puVar28 + uVar13) != puVar23) goto joined_r0x0001006d3cc4;
LAB_1006d3d30:
      puVar22 = (ulong *)((long)puVar22 + uVar13);
      puVar23 = puVar22;
      puVar28 = puVar5;
      if (puVar22 < puVar18) {
        if (*puVar5 == *puVar22) {
          lVar34 = 0;
          puVar23 = (ulong *)((long)param_4 + uVar13 + 0xc);
          puVar28 = puVar2;
          do {
            if (puVar18 <= puVar23) goto LAB_1006d3da4;
            uVar38 = *puVar28;
            uVar20 = *puVar23;
            lVar34 = lVar34 + 8;
            puVar23 = puVar23 + 1;
            puVar28 = puVar28 + 1;
          } while (uVar38 == uVar20);
          uVar20 = uVar20 ^ uVar38;
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar13 = lVar34 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) + uVar13;
        }
        else {
          uVar20 = *puVar22 ^ *puVar5;
          uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
          uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
          uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar13 = ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) + uVar13;
        }
        goto joined_r0x0001006d3cc4;
      }
LAB_1006d3da4:
      if (puVar23 < (ulong *)((long)puVar4 - 3U)) {
        if ((int)*puVar28 == (int)*puVar23) {
          puVar23 = (ulong *)((long)puVar23 + 4);
          puVar28 = (ulong *)((long)puVar28 + 4);
        }
      }
      if (puVar23 < (ulong *)((long)puVar4 - 1U)) {
        if ((short)*puVar28 == (short)*puVar23) {
          puVar23 = (ulong *)((long)puVar23 + 2);
          puVar28 = (ulong *)((long)puVar28 + 2);
        }
      }
      if ((puVar23 < puVar4) && ((char)*puVar28 == (char)*puVar23)) {
        puVar23 = (ulong *)((long)puVar23 + 1);
      }
      uVar13 = (long)puVar23 + (uVar13 - (long)puVar22);
      if (puVar19 < param_4) goto LAB_1006d3cc8;
LAB_1006d3e04:
      puVar23 = (ulong *)param_2[3];
      uVar20 = *param_4;
      puVar23[1] = param_4[1];
      *puVar23 = uVar20;
      piVar25 = (int *)param_2[1];
      *(undefined2 *)(piVar25 + 1) = 0;
      *piVar25 = 1;
    }
    if (0xffff < uVar13 + 1) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar25 - *param_2) >> 3);
    }
    *(short *)((long)piVar25 + 6) = (short)(uVar13 + 1);
    piVar25 = piVar25 + 2;
    param_2[1] = (long)piVar25;
    iVar42 = local_94;
    local_94 = iVar43;
  }
LAB_1006d2fc4:
  if (puVar21 <= puVar23) goto LAB_1006d3ea8;
  goto LAB_1006d2fcc;
}

