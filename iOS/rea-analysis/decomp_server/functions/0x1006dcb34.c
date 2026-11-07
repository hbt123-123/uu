// rea decompile_all
// name: FUN_1006dcb34
// address: 0x1006dcb34
// body: available
// range: 0x1006dcb34-0x1006dd963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006dcb34(ulong param_1,long *param_2,uint *param_3,ulong *param_4,long param_5)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined2 uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  int *piVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  long lVar31;
  ulong *puVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  uint uVar39;
  ulong *puVar40;
  long lVar41;
  uint uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong *local_b0;
  long local_70 [2];
  
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar40 = puVar2 + -1;
  lVar15 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0x18);
  uVar16 = (ulong)uVar9;
  uVar42 = *param_3;
  uVar39 = param_3[1];
  puVar3 = (ulong *)(lVar15 + uVar16);
  puVar25 = param_4;
  if (puVar3 == param_4) {
    puVar25 = (ulong *)((long)param_4 + 1);
  }
  if (puVar40 <= puVar25) {
LAB_1006dd938:
    *param_3 = uVar42;
    param_3[1] = uVar39;
    return (long)puVar2 - (long)param_4;
  }
  lVar20 = *(long *)(param_1 + 0x10);
  puVar4 = (ulong *)(lVar20 + uVar16);
  uVar10 = *(uint *)(param_1 + 0x1c);
  iVar14 = uVar9 - 1;
  puVar22 = puVar2 + -4;
LAB_1006dcc18:
  iVar19 = (int)puVar25 - (int)lVar15;
  uVar18 = (iVar19 - uVar42) + 1;
  lVar21 = lVar20;
  if (uVar9 <= uVar18) {
    lVar21 = lVar15;
  }
  if ((uVar10 < uVar18 && 2 < iVar14 - uVar18) &&
     (*(int *)((long)puVar25 + 1U) == *(int *)(lVar21 + (ulong)uVar18))) {
    puVar24 = puVar4;
    if (uVar9 <= uVar18) {
      puVar24 = puVar2;
    }
    lVar41 = (long)puVar25 + 5;
    FUN_1006c7460(lVar41,(int *)(lVar21 + (ulong)uVar18) + 1,puVar2,puVar24,puVar3);
    uVar28 = lVar41 + 4;
  }
  else {
    uVar28 = 0;
  }
  local_70[0] = 999999999;
  uVar37 = param_1;
  FUN_1006df29c(param_1,puVar25,puVar2,local_70);
  uVar23 = uVar37;
  if (uVar37 <= uVar28) {
    uVar23 = uVar28;
  }
  if (3 < uVar23) {
    puVar24 = puVar25;
    lVar21 = local_70[0];
    if (uVar37 <= uVar28) {
      puVar24 = (ulong *)((long)puVar25 + 1U);
      lVar21 = 0;
    }
joined_r0x0001006dccd8:
    do {
      lVar41 = lVar21;
      puVar30 = puVar25;
      iVar7 = iVar19;
      uVar28 = uVar23;
      local_b0 = puVar24;
      if (puVar40 <= puVar30) goto joined_r0x0001006dd35c;
      puVar25 = (ulong *)((long)puVar30 + 1);
      iVar19 = iVar7 + 1;
      if (lVar41 != 0) {
        uVar18 = iVar19 - uVar42;
        lVar21 = lVar20;
        if (uVar9 <= uVar18) {
          lVar21 = lVar15;
        }
        if (((uVar10 < uVar18) && (2 < iVar14 - uVar18)) &&
           (*(int *)puVar25 == *(int *)(lVar21 + (ulong)uVar18))) {
          puVar24 = puVar4;
          if (uVar9 <= uVar18) {
            puVar24 = puVar2;
          }
          uVar37 = (long)puVar30 + 5;
          FUN_1006c7460(uVar37,(int *)(lVar21 + (ulong)uVar18) + 1,puVar2,puVar24,puVar3);
          if ((uVar37 < 0xfffffffffffffffc) &&
             ((int)((int)uVar23 * 3 + ((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + 2) <
              (int)(uVar37 + 4) * 3)) {
            lVar41 = 0;
            uVar28 = uVar37 + 4;
            local_b0 = puVar25;
          }
        }
      }
      local_70[0] = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar21 + uVar23) <= puVar25) {
          uVar18 = (uint)((long)puVar25 - lVar21);
          if (*(uint *)(param_1 + 0x24) < uVar18) {
            lVar29 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar6 = *(int *)(param_1 + 0xbc);
            iVar8 = *(int *)(param_1 + 0xc0);
            do {
              uVar37 = (ulong)(*(long *)(lVar21 + uVar23) * -0x30e4432340650000) >>
                       ((ulong)(0x40 - iVar8) & 0x3f);
              uVar11 = *(undefined4 *)(lVar29 + uVar37 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar6 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar29 + uVar37 * 4) = (uint)uVar23;
              *puVar1 = uVar11;
              puVar1[1] = 1;
              uVar23 = uVar23 + 1;
            } while (((long)puVar25 - lVar21 & 0xffffffffU) != uVar23);
          }
          uVar17 = 6;
          goto LAB_1006dcf54;
        }
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar21 + uVar23) <= puVar25) {
          uVar18 = (uint)((long)puVar25 - lVar21);
          if (*(uint *)(param_1 + 0x24) < uVar18) {
            lVar29 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar6 = *(int *)(param_1 + 0xbc);
            iVar8 = *(int *)(param_1 + 0xc0);
            do {
              uVar37 = (ulong)(*(long *)(lVar21 + uVar23) * -0x30e4432345000000) >>
                       ((ulong)(0x40 - iVar8) & 0x3f);
              uVar11 = *(undefined4 *)(lVar29 + uVar37 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar6 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar29 + uVar37 * 4) = (uint)uVar23;
              *puVar1 = uVar11;
              puVar1[1] = 1;
              uVar23 = uVar23 + 1;
            } while (((long)puVar25 - lVar21 & 0xffffffffU) != uVar23);
          }
          uVar17 = 5;
LAB_1006dcf54:
          *(uint *)(param_1 + 0x24) = uVar18;
          uVar23 = param_1;
          FUN_1006de730(param_1,puVar25,puVar2,local_70,uVar17,1);
          if ((3 < uVar23) &&
             (puVar24 = puVar25, lVar21 = local_70[0],
             (int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar28 * 4 + 5) <
             (int)((int)uVar23 * 4 - ((uint)LZCOUNT((int)local_70[0] + 1) ^ 0x1f))))
          goto joined_r0x0001006dccd8;
        }
      }
      else {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if ((ulong *)(lVar21 + uVar23) <= puVar25) {
          uVar18 = (uint)((long)puVar25 - lVar21);
          if (*(uint *)(param_1 + 0x24) < uVar18) {
            lVar29 = *(long *)(param_1 + 0x30);
            lVar31 = *(long *)(param_1 + 0x40);
            iVar6 = *(int *)(param_1 + 0xbc);
            iVar8 = *(int *)(param_1 + 0xc0);
            do {
              uVar12 = (uint)(*(int *)(lVar21 + uVar23) * -0x61c8864f) >>
                       (ulong)(0x20U - iVar8 & 0x1f);
              uVar11 = *(undefined4 *)(lVar29 + (ulong)uVar12 * 4);
              puVar1 = (undefined4 *)
                       (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar6 - 1U & 0x1f))) << 1)
                                 * 4);
              *(uint *)(lVar29 + (ulong)uVar12 * 4) = (uint)uVar23;
              *puVar1 = uVar11;
              puVar1[1] = 1;
              uVar23 = uVar23 + 1;
            } while (((long)puVar25 - lVar21 & 0xffffffffU) != uVar23);
          }
          uVar17 = 4;
          goto LAB_1006dcf54;
        }
      }
      if (puVar40 <= puVar25) goto joined_r0x0001006dd35c;
      puVar24 = (ulong *)((long)puVar30 + 2);
      iVar19 = iVar7 + 2;
      if (lVar41 != 0) {
        uVar18 = iVar19 - uVar42;
        lVar21 = lVar20;
        if (uVar9 <= uVar18) {
          lVar21 = lVar15;
        }
        if (((uVar10 < uVar18) && (2 < iVar14 - uVar18)) &&
           (*(int *)puVar24 == *(int *)(lVar21 + (ulong)uVar18))) {
          puVar25 = puVar4;
          if (uVar9 <= uVar18) {
            puVar25 = puVar2;
          }
          uVar23 = (long)puVar30 + 6;
          FUN_1006c7460(uVar23,(int *)(lVar21 + (ulong)uVar18) + 1,puVar2,puVar25,puVar3);
          if ((uVar23 < 0xfffffffffffffffc) &&
             ((int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar28 * 4 + 2) <
              (int)(uVar23 + 4) * 4)) {
            lVar41 = 0;
            uVar28 = uVar23 + 4;
            local_b0 = puVar24;
          }
        }
      }
      local_70[0] = 999999999;
      if (*(int *)(param_1 + 200) - 6U < 2) {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar24 < (ulong *)(lVar21 + uVar23)) goto joined_r0x0001006dd35c;
        uVar18 = (uint)((long)puVar24 - lVar21);
        if (*(uint *)(param_1 + 0x24) < uVar18) {
          lVar29 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar7 = *(int *)(param_1 + 0xbc);
          iVar6 = *(int *)(param_1 + 0xc0);
          do {
            uVar37 = (ulong)(*(long *)(lVar21 + uVar23) * -0x30e4432340650000) >>
                     ((ulong)(0x40 - iVar6) & 0x3f);
            uVar11 = *(undefined4 *)(lVar29 + uVar37 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar7 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar29 + uVar37 * 4) = (uint)uVar23;
            *puVar1 = uVar11;
            puVar1[1] = 1;
            uVar23 = uVar23 + 1;
          } while (((long)puVar24 - lVar21 & 0xffffffffU) != uVar23);
        }
        uVar17 = 6;
      }
      else if (*(int *)(param_1 + 200) == 5) {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar24 < (ulong *)(lVar21 + uVar23)) goto joined_r0x0001006dd35c;
        uVar18 = (uint)((long)puVar24 - lVar21);
        if (*(uint *)(param_1 + 0x24) < uVar18) {
          lVar29 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar7 = *(int *)(param_1 + 0xbc);
          iVar6 = *(int *)(param_1 + 0xc0);
          do {
            uVar37 = (ulong)(*(long *)(lVar21 + uVar23) * -0x30e4432345000000) >>
                     ((ulong)(0x40 - iVar6) & 0x3f);
            uVar11 = *(undefined4 *)(lVar29 + uVar37 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar7 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar29 + uVar37 * 4) = (uint)uVar23;
            *puVar1 = uVar11;
            puVar1[1] = 1;
            uVar23 = uVar23 + 1;
          } while (((long)puVar24 - lVar21 & 0xffffffffU) != uVar23);
        }
        uVar17 = 5;
      }
      else {
        lVar21 = *(long *)(param_1 + 8);
        uVar23 = (ulong)*(uint *)(param_1 + 0x24);
        if (puVar24 < (ulong *)(lVar21 + uVar23)) goto joined_r0x0001006dd35c;
        uVar18 = (uint)((long)puVar24 - lVar21);
        if (*(uint *)(param_1 + 0x24) < uVar18) {
          lVar29 = *(long *)(param_1 + 0x30);
          lVar31 = *(long *)(param_1 + 0x40);
          iVar7 = *(int *)(param_1 + 0xbc);
          iVar6 = *(int *)(param_1 + 0xc0);
          do {
            uVar12 = (uint)(*(int *)(lVar21 + uVar23) * -0x61c8864f) >>
                     (ulong)(0x20U - iVar6 & 0x1f);
            uVar11 = *(undefined4 *)(lVar29 + (ulong)uVar12 * 4);
            puVar1 = (undefined4 *)
                     (lVar31 + (ulong)(((uint)uVar23 & ~(-1 << (ulong)(iVar7 - 1U & 0x1f))) << 1) *
                               4);
            *(uint *)(lVar29 + (ulong)uVar12 * 4) = (uint)uVar23;
            *puVar1 = uVar11;
            puVar1[1] = 1;
            uVar23 = uVar23 + 1;
          } while (((long)puVar24 - lVar21 & 0xffffffffU) != uVar23);
        }
        uVar17 = 4;
      }
      *(uint *)(param_1 + 0x24) = uVar18;
      uVar23 = param_1;
      FUN_1006de730(param_1,puVar24,puVar2,local_70,uVar17,1);
      if ((uVar23 < 4) ||
         (puVar25 = puVar24, lVar21 = local_70[0],
         (int)((int)uVar23 * 4 - ((uint)LZCOUNT((int)local_70[0] + 1) ^ 0x1f)) <=
         (int)(((uint)LZCOUNT((int)lVar41 + 1) ^ 0xffffffe0) + (int)uVar28 * 4 + 8)))
      goto joined_r0x0001006dd35c;
    } while( true );
  }
  puVar25 = (ulong *)((long)puVar25 + ((long)puVar25 - (long)param_4 >> 8) + 1);
  goto LAB_1006dcc10;
joined_r0x0001006dd35c:
  if (lVar41 == 0) {
    iVar19 = 1;
    uVar23 = (long)local_b0 - (long)param_4;
    puVar25 = (ulong *)param_2[3];
    uVar18 = uVar42;
    if (puVar22 < local_b0) goto LAB_1006dd434;
LAB_1006dd388:
    uVar37 = *param_4;
    puVar25[1] = param_4[1];
    *puVar25 = uVar37;
    lVar21 = param_2[3];
    if (uVar23 < 0x11) {
      param_2[3] = lVar21 + uVar23;
      piVar27 = (int *)param_2[1];
      *(short *)(piVar27 + 1) = (short)uVar23;
      *piVar27 = iVar19;
      goto joined_r0x0001006dd40c;
    }
    uVar37 = param_4[2];
    *(ulong *)(lVar21 + 0x18) = param_4[3];
    *(ulong *)(lVar21 + 0x10) = uVar37;
    uVar37 = param_4[4];
    *(ulong *)(lVar21 + 0x28) = param_4[5];
    *(ulong *)(lVar21 + 0x20) = uVar37;
    if (0x30 < (long)uVar23) {
      puVar25 = (ulong *)(lVar21 + 0x30);
      puVar24 = param_4 + 8;
      do {
        uVar37 = puVar24[-2];
        puVar25[1] = puVar24[-1];
        *puVar25 = uVar37;
        uVar37 = *puVar24;
        puVar25[3] = puVar24[1];
        puVar25[2] = uVar37;
        puVar25 = puVar25 + 4;
        puVar24 = puVar24 + 4;
      } while (puVar25 < (ulong *)(lVar21 + uVar23));
    }
  }
  else {
    uVar23 = (long)local_b0 + (2 - (lVar41 + lVar15));
    puVar25 = (ulong *)(lVar20 + (ulong)uVar10);
    lVar21 = lVar20;
    if (uVar9 <= (uint)uVar23) {
      puVar25 = puVar3;
      lVar21 = lVar15;
    }
    if ((param_4 < local_b0) && (uVar23 = uVar23 & 0xffffffff, puVar25 < (ulong *)(lVar21 + uVar23))
       ) {
      puVar24 = (ulong *)(lVar21 + uVar23);
      do {
        puVar30 = (ulong *)((long)local_b0 + -1);
        puVar24 = (ulong *)((long)puVar24 + -1);
        if ((*(char *)puVar30 != *(char *)puVar24) ||
           (uVar28 = uVar28 + 1, local_b0 = puVar30, puVar30 <= param_4)) break;
      } while (puVar25 < puVar24);
    }
    uVar18 = (int)lVar41 - 2;
    iVar19 = (int)lVar41 + 1;
    uVar23 = (long)local_b0 - (long)param_4;
    puVar25 = (ulong *)param_2[3];
    uVar39 = uVar42;
    if (local_b0 <= puVar22) goto LAB_1006dd388;
LAB_1006dd434:
    puVar30 = puVar25;
    puVar24 = param_4;
    if (param_4 <= puVar22) {
      puVar30 = (ulong *)((long)puVar25 + ((long)puVar22 - (long)param_4));
      uVar37 = *param_4;
      puVar25[1] = param_4[1];
      *puVar25 = uVar37;
      uVar37 = param_4[2];
      puVar25[3] = param_4[3];
      puVar25[2] = uVar37;
      puVar24 = puVar22;
      if (0x20 < (long)puVar22 - (long)param_4) {
        puVar25 = puVar25 + 4;
        puVar32 = param_4 + 6;
        do {
          uVar37 = puVar32[-2];
          puVar25[1] = puVar32[-1];
          *puVar25 = uVar37;
          uVar37 = *puVar32;
          puVar25[3] = puVar32[1];
          puVar25[2] = uVar37;
          puVar25 = puVar25 + 4;
          puVar32 = puVar32 + 4;
        } while (puVar25 < puVar30);
      }
    }
    if (puVar24 < local_b0) {
      uVar37 = (long)local_b0 - (long)puVar24;
      if ((7 < uVar37) && (0x3f < (ulong)((long)puVar30 - (long)puVar24))) {
        if (uVar37 < 0x40) {
          uVar33 = 0;
        }
        else {
          uVar33 = uVar37 & 0xffffffffffffffc0;
          puVar25 = puVar30 + 4;
          puVar32 = puVar24 + 4;
          uVar35 = uVar33;
          do {
            uVar43 = puVar32[-4];
            uVar45 = puVar32[-1];
            uVar44 = puVar32[-2];
            uVar47 = puVar32[1];
            uVar46 = *puVar32;
            uVar49 = puVar32[3];
            uVar48 = puVar32[2];
            puVar25[-3] = puVar32[-3];
            puVar25[-4] = uVar43;
            puVar25[-1] = uVar45;
            puVar25[-2] = uVar44;
            puVar25[1] = uVar47;
            *puVar25 = uVar46;
            puVar25[3] = uVar49;
            puVar25[2] = uVar48;
            uVar35 = uVar35 - 0x40;
            puVar25 = puVar25 + 8;
            puVar32 = puVar32 + 8;
          } while (uVar35 != 0);
          if (uVar37 == uVar33) goto LAB_1006dd548;
          if ((uVar37 & 0x38) == 0) {
            puVar24 = (ulong *)((long)puVar24 + uVar33);
            puVar30 = (ulong *)((long)puVar30 + uVar33);
            goto LAB_1006dd538;
          }
        }
        uVar35 = uVar37 & 0xfffffffffffffff8;
        lVar21 = uVar33 - uVar35;
        puVar26 = (undefined8 *)((long)puVar30 + uVar33);
        puVar38 = (undefined8 *)((long)puVar24 + uVar33);
        do {
          *puVar26 = *puVar38;
          lVar21 = lVar21 + 8;
          puVar26 = puVar26 + 1;
          puVar38 = puVar38 + 1;
        } while (lVar21 != 0);
        puVar30 = (ulong *)((long)puVar30 + uVar35);
        puVar24 = (ulong *)((long)puVar24 + uVar35);
        if (uVar37 == uVar35) goto LAB_1006dd548;
      }
LAB_1006dd538:
      do {
        puVar25 = (ulong *)((long)puVar24 + 1);
        *(char *)puVar30 = (char)*puVar24;
        puVar30 = (ulong *)((long)puVar30 + 1);
        puVar24 = puVar25;
      } while (puVar25 != local_b0);
    }
  }
LAB_1006dd548:
  param_2[3] = param_2[3] + uVar23;
  piVar27 = (int *)param_2[1];
  if (uVar23 < 0x10000) {
    *(short *)(piVar27 + 1) = (short)uVar23;
    *piVar27 = iVar19;
  }
  else {
    *(undefined4 *)(param_2 + 9) = 1;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
    *(short *)(piVar27 + 1) = (short)uVar23;
    *piVar27 = iVar19;
  }
joined_r0x0001006dd40c:
  uVar13 = (undefined2)(uVar28 - 3);
  if (uVar28 - 3 < 0x10000) {
    *(undefined2 *)((long)piVar27 + 6) = uVar13;
    param_2[1] = (long)(piVar27 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
    *(undefined2 *)((long)piVar27 + 6) = uVar13;
    param_2[1] = (long)(piVar27 + 2);
  }
  piVar27 = piVar27 + 2;
  uVar12 = uVar39;
  uVar42 = uVar18;
  for (param_4 = (ulong *)((long)local_b0 + uVar28); uVar39 = uVar12, puVar25 = param_4,
      param_4 <= puVar40; param_4 = (ulong *)((long)param_4 + uVar28 + 4)) {
    uVar28 = (long)param_4 - (lVar15 + (ulong)uVar39);
    uVar18 = (uint)uVar28;
    lVar21 = lVar20;
    if (uVar9 <= uVar18) {
      lVar21 = lVar15;
    }
    if (uVar18 <= uVar10 || iVar14 - uVar18 < 3) break;
    uVar28 = uVar28 & 0xffffffff;
    piVar5 = (int *)(lVar21 + uVar28);
    if ((int)*param_4 != *piVar5) break;
    puVar25 = puVar4;
    if (uVar9 <= uVar18) {
      puVar25 = puVar2;
    }
    puVar24 = (ulong *)((long)param_4 + 4);
    puVar30 = (ulong *)(piVar5 + 1);
    puVar32 = (ulong *)((long)puVar24 + ((long)puVar25 - (long)puVar30));
    if (puVar2 <= puVar32) {
      puVar32 = puVar2;
    }
    puVar34 = puVar24;
    puVar36 = puVar30;
    if (puVar24 < (ulong *)((long)puVar32 - 7U)) {
      if (*puVar30 == *puVar24) {
        lVar41 = 0;
        puVar34 = (ulong *)((long)param_4 + 0xc);
        puVar36 = (ulong *)(lVar21 + uVar28 + 0xc);
        do {
          if ((ulong *)((long)puVar32 - 7U) <= puVar34) goto LAB_1006dd6f4;
          uVar28 = *puVar36;
          uVar23 = *puVar34;
          lVar41 = lVar41 + 8;
          puVar34 = puVar34 + 1;
          puVar36 = puVar36 + 1;
        } while (uVar28 == uVar23);
        uVar23 = uVar23 ^ uVar28;
        uVar28 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
        uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
        uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        uVar28 = lVar41 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
      }
      else {
        uVar28 = *puVar24 ^ *puVar30;
        uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
        uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
        uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        uVar28 = (ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3;
      }
      if ((ulong *)((long)puVar30 + uVar28) == puVar25) goto LAB_1006dd7c4;
joined_r0x0001006dd758:
      if (param_4 <= puVar22) goto LAB_1006dd898;
LAB_1006dd75c:
      *(undefined2 *)(piVar27 + 1) = 0;
      *piVar27 = 1;
    }
    else {
LAB_1006dd6f4:
      if (puVar34 < (ulong *)((long)puVar32 - 3U)) {
        if ((int)*puVar36 == (int)*puVar34) {
          puVar34 = (ulong *)((long)puVar34 + 4);
          puVar36 = (ulong *)((long)puVar36 + 4);
        }
        if (puVar34 < (ulong *)((long)puVar32 - 1U)) {
LAB_1006dd780:
          if ((short)*puVar36 == (short)*puVar34) {
            puVar34 = (ulong *)((long)puVar34 + 2);
            puVar36 = (ulong *)((long)puVar36 + 2);
          }
        }
      }
      else if (puVar34 < (ulong *)((long)puVar32 - 1U)) goto LAB_1006dd780;
      if ((puVar34 < puVar32) && ((char)*puVar36 == (char)*puVar34)) {
        puVar34 = (ulong *)((long)puVar34 + 1);
      }
      uVar28 = (long)puVar34 - (long)puVar24;
      if ((ulong *)((long)puVar30 + uVar28) != puVar25) goto joined_r0x0001006dd758;
LAB_1006dd7c4:
      puVar24 = (ulong *)((long)puVar24 + uVar28);
      puVar30 = puVar24;
      puVar25 = puVar3;
      if (puVar24 < (ulong *)((long)puVar2 - 7U)) {
        if (*puVar3 == *puVar24) {
          lVar21 = 0;
          puVar30 = (ulong *)((long)param_4 + uVar28 + 0xc);
          puVar25 = (ulong *)(uVar16 + lVar15);
          do {
            puVar25 = puVar25 + 1;
            if ((ulong *)((long)puVar2 - 7U) <= puVar30) goto LAB_1006dd838;
            uVar23 = *puVar30;
            lVar21 = lVar21 + 8;
            puVar30 = puVar30 + 1;
          } while (*puVar25 == uVar23);
          uVar23 = uVar23 ^ *puVar25;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar28 = lVar21 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) + uVar28;
        }
        else {
          uVar23 = *puVar24 ^ *puVar3;
          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar28 = ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) + uVar28;
        }
        goto joined_r0x0001006dd758;
      }
LAB_1006dd838:
      if (puVar30 < (ulong *)((long)puVar2 - 3U)) {
        if ((int)*puVar25 == (int)*puVar30) {
          puVar30 = (ulong *)((long)puVar30 + 4);
          puVar25 = (ulong *)((long)puVar25 + 4);
        }
      }
      if (puVar30 < (ulong *)((long)puVar2 - 1U)) {
        if ((short)*puVar25 == (short)*puVar30) {
          puVar30 = (ulong *)((long)puVar30 + 2);
          puVar25 = (ulong *)((long)puVar25 + 2);
        }
      }
      if ((puVar30 < puVar2) && ((char)*puVar25 == (char)*puVar30)) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
      uVar28 = (long)puVar30 + (uVar28 - (long)puVar24);
      if (puVar22 < param_4) goto LAB_1006dd75c;
LAB_1006dd898:
      puVar25 = (ulong *)param_2[3];
      uVar23 = *param_4;
      puVar25[1] = param_4[1];
      *puVar25 = uVar23;
      piVar27 = (int *)param_2[1];
      *(undefined2 *)(piVar27 + 1) = 0;
      *piVar27 = 1;
    }
    if (0xffff < uVar28 + 1) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar27 - *param_2) >> 3);
    }
    *(short *)((long)piVar27 + 6) = (short)(uVar28 + 1);
    piVar27 = piVar27 + 2;
    param_2[1] = (long)piVar27;
    uVar12 = uVar42;
    uVar42 = uVar39;
  }
LAB_1006dcc10:
  if (puVar40 <= puVar25) goto LAB_1006dd938;
  goto LAB_1006dcc18;
}

