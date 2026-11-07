// rea decompile_all
// name: FUN_1006e8918
// address: 0x1006e8918
// body: available
// range: 0x1006e8918-0x1006f099b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f0998 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006ecd54) */
/* WARNING: Removing unreachable block (ram,0x0001006ec708) */
/* WARNING: Removing unreachable block (ram,0x0001006ea9b0) */
/* WARNING: Removing unreachable block (ram,0x0001006ed56c) */
/* WARNING: Removing unreachable block (ram,0x0001006ed850) */
/* WARNING: Removing unreachable block (ram,0x0001006ecd9c) */
/* WARNING: Removing unreachable block (ram,0x0001006eaf34) */
/* WARNING: Removing unreachable block (ram,0x0001006f0924) */
/* WARNING: Removing unreachable block (ram,0x0001006ec074) */
/* WARNING: Removing unreachable block (ram,0x0001006eb21c) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006e8918(long param_1,long *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ulong **ppuVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  uint *puVar17;
  ulong *puVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  long lVar26;
  ulong *puVar27;
  ulong *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  int *piVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  ulong *puVar41;
  ulong *puVar42;
  ulong *puVar43;
  uint *puVar44;
  undefined8 *puVar45;
  long lVar46;
  long lVar47;
  ulong *puVar48;
  ulong uVar49;
  ulong uVar50;
  ulong *puVar51;
  ulong uVar52;
  uint uVar53;
  ulong uVar54;
  int iVar55;
  int iVar56;
  int iVar58;
  undefined8 uVar57;
  undefined8 uVar59;
  int iVar60;
  undefined8 uVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  ulong uVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  uint local_1b4;
  ulong *local_170;
  uint *local_160;
  int local_128;
  ulong *local_110;
  ulong *local_108;
  ulong *local_100;
  ulong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  int *local_c8;
  int *local_c0;
  ulong *local_b8;
  int *local_b0;
  uint local_a8;
  undefined1 local_a4 [4];
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  uint local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar22 = *(long *)(param_1 + 8);
  local_100 = param_3;
  if ((((*(int *)(param_1 + 0x7c) == 0) && (param_2[1] == *param_2)) &&
      (*(uint *)(param_1 + 0x18) == *(uint *)(param_1 + 0x1c))) &&
     ((0x400 < param_5 && (uVar25 = (int)param_4 - (int)lVar22, *(uint *)(param_1 + 0x18) == uVar25)
      ))) {
    local_a0 = *param_3;
    local_98._0_4_ = (uint)param_3[1];
    puVar27 = (ulong *)((long)param_4 + param_5);
    puVar51 = puVar27 + -1;
    uVar53 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar53) {
      uVar53 = 0xfff;
    }
    uVar20 = 3;
    if (*(int *)(param_1 + 200) != 3) {
      uVar20 = 4;
    }
    uVar29 = *(uint *)(param_1 + 0x24);
    local_c8 = *(int **)(param_1 + 0x68);
    piVar1 = *(int **)(param_1 + 0x70);
    FUN_100705568(param_1 + 0x48,param_4,param_5,2);
    puVar43 = param_4;
    if ((ulong *)(lVar22 + (ulong)uVar25) == param_4) {
      puVar43 = (ulong *)((long)param_4 + 1);
    }
    if (puVar43 < puVar51) {
      uVar23 = (ulong)(uVar20 - 1);
      local_b8 = (ulong *)((long)puVar27 + -7);
      local_e0 = (ulong *)((long)puVar27 + -3);
      local_e8 = (ulong *)((long)puVar27 + -1);
      local_110 = (ulong *)((ulong)&local_a0 | 4);
      local_108 = &local_98;
      puVar15 = puVar27 + -4;
      lVar22 = (ulong)uVar20 - 1;
      local_b0 = piVar1 + 7;
      local_c0 = piVar1 + 0xe;
      puVar48 = param_4;
      local_f8 = puVar27;
LAB_1006e8a9c:
      local_a8 = (int)puVar43 - (int)puVar48;
      local_d8 = (ulong *)CONCAT44(local_d8._4_4_,(uint)(local_a8 == 0));
      lVar47 = *(long *)(param_1 + 8);
      uVar25 = *(uint *)(param_1 + 0x24);
      uVar49 = (ulong)uVar25;
      uVar33 = uVar29;
      if (puVar43 < (ulong *)(lVar47 + uVar49)) goto LAB_1006e8a84;
      iVar56 = *(int *)(param_1 + 200);
      uVar33 = (int)puVar43 - (int)lVar47;
      while (local_d0 = puVar43, uVar25 < uVar33) {
        lVar37 = param_1;
        FUN_100705148(param_1,lVar47 + uVar49,puVar27,iVar56,0);
        uVar25 = (int)lVar37 + (int)uVar49;
        uVar49 = (ulong)uVar25;
        puVar43 = local_d0;
      }
      *(uint *)(param_1 + 0x24) = uVar33;
      iVar55 = (int)puVar43;
      if (iVar56 - 6U < 2) {
        uVar49 = 0;
        uVar25 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar25) {
          uVar25 = 0xfff;
        }
        lVar47 = *(long *)(param_1 + 8);
        uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar7 = ~uVar35;
        uVar30 = iVar55 - (int)lVar47;
        uVar33 = 0;
        if (uVar7 <= uVar30) {
          uVar33 = uVar30 - uVar7;
        }
        iVar56 = *(int *)(param_1 + 0x18);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar39 = uVar30 - uVar14;
        if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar39 = *(uint *)(param_1 + 0x1c);
        }
        if (uVar39 < 2) {
          uVar39 = 1;
        }
        bVar5 = local_a8 == 0;
        uVar16 = (ulong)bVar5;
        local_f0 = *(ulong **)(param_1 + 0x30);
        uVar14 = *(uint *)(param_1 + 0xc4);
        uVar13 = *puVar43 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
        uVar40 = *(uint *)((long)local_f0 + uVar13 * 4);
        lVar37 = *(long *)(param_1 + 0x40);
        puVar31 = (uint *)(lVar37 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
        puVar34 = puVar31 + 1;
        iVar55 = uVar30 + 9;
        uVar12 = 3;
        if (bVar5) {
          uVar12 = 4;
        }
        puVar11 = (ulong *)((long)puVar43 + 4);
        uVar19 = uVar23;
        do {
          uVar35 = (uint)local_a0 - 1;
          if (uVar16 != 3) {
            uVar35 = *(uint *)((long)&local_98 + (uVar16 - 2) * 4);
          }
          if ((uVar35 - 1 < uVar30 - iVar56) &&
             ((uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar35))) {
            lVar46 = -(ulong)uVar35;
            puVar41 = (ulong *)((long)puVar11 + lVar46);
            puVar42 = puVar11;
            if (puVar11 < local_b8) {
              if (*puVar41 == *puVar11) {
                iVar58 = 0;
                puVar41 = (ulong *)((long)puVar43 + 0xc + lVar46);
                puVar42 = (ulong *)((long)puVar43 + 0xc);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e90a4;
                  uVar50 = *puVar41;
                  uVar52 = *puVar42;
                  iVar58 = iVar58 + 8;
                  puVar41 = puVar41 + 1;
                  puVar42 = puVar42 + 1;
                } while (uVar50 == uVar52);
                uVar52 = uVar52 ^ uVar50;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar11 ^ *puVar41;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006e90a4:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar41 == *(uint *)puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 4);
                  puVar42 = (ulong *)((long)puVar42 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar41 == (short)*puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 2);
                  puVar42 = (ulong *)((long)puVar42 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar41 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              iVar58 = (int)puVar42 - (int)puVar11;
            }
            uVar35 = iVar58 + 4;
            uVar52 = (ulong)uVar35;
            if (uVar19 < uVar52) {
              local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
              (local_c8 + uVar49 * 2)[1] = uVar35;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              if ((uVar25 < uVar35) ||
                 (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == puVar27))
              goto joined_r0x0001006e9ffc;
            }
          }
          uVar10 = (uint)uVar49;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar12);
        *(uint *)((long)local_f0 + uVar13 * 4) = uVar30;
        if (uVar39 <= uVar40) {
          uVar12 = 0;
          uVar16 = 0;
          uVar25 = ~(-1 << (ulong)(uVar14 & 0x1f));
          iVar56 = iVar55;
          do {
            uVar13 = uVar12;
            if (uVar16 <= uVar12) {
              uVar13 = uVar16;
            }
            lVar46 = lVar47 + (ulong)uVar40;
            puVar11 = (ulong *)(lVar46 + uVar13);
            puVar41 = (ulong *)((long)puVar43 + uVar13);
            puVar42 = puVar41;
            if (puVar41 < local_b8) {
              if (*puVar11 == *puVar41) {
                lVar26 = 0;
                puVar42 = (ulong *)((long)puVar43 + uVar13 + 8);
                puVar11 = (ulong *)(lVar47 + 8 + uVar13 + uVar40);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e9184;
                  uVar52 = *puVar11;
                  uVar50 = *puVar42;
                  lVar26 = lVar26 + 8;
                  puVar42 = puVar42 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar52 == uVar50);
                uVar50 = uVar50 ^ uVar52;
                uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar41 ^ *puVar11;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
              }
            }
            else {
joined_r0x0001006e9184:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar11 == *(uint *)puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 4);
                  puVar11 = (ulong *)((long)puVar11 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar11 == (short)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 2);
                  puVar11 = (ulong *)((long)puVar11 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar11 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              uVar52 = (long)puVar42 - (long)puVar41;
            }
            uVar52 = uVar52 + uVar13;
            iVar55 = iVar56;
            if (uVar19 < uVar52) {
              iVar55 = uVar40 + (int)uVar52;
              if (uVar52 <= iVar56 - uVar40) {
                iVar55 = iVar56;
              }
              local_c8[uVar49 * 2] = (uVar30 + 2) - uVar40;
              (local_c8 + uVar49 * 2)[1] = (int)uVar52;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              uVar19 = uVar52;
              if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
            }
            uVar10 = (uint)uVar49;
            puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar7) << 1) * 4);
            if (*(byte *)(lVar46 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
              *puVar31 = uVar40;
              if (uVar40 <= uVar33) goto LAB_1006e9fe0;
              puVar31 = puVar17 + 1;
              uVar12 = uVar52;
              puVar17 = puVar31;
            }
            else {
              *puVar34 = uVar40;
              uVar16 = uVar52;
              puVar34 = puVar17;
              if (uVar40 <= uVar33) goto LAB_1006e9fd8;
            }
            bVar5 = uVar25 == 0;
            uVar25 = uVar25 - 1;
            if ((bVar5) || (uVar40 = *puVar17, iVar56 = iVar55, uVar40 < uVar39)) break;
          } while( true );
        }
        goto LAB_1006e9fe4;
      }
      if (iVar56 == 5) {
        uVar49 = 0;
        uVar25 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar25) {
          uVar25 = 0xfff;
        }
        lVar47 = *(long *)(param_1 + 8);
        uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar7 = ~uVar35;
        uVar30 = iVar55 - (int)lVar47;
        uVar33 = 0;
        if (uVar7 <= uVar30) {
          uVar33 = uVar30 - uVar7;
        }
        iVar56 = *(int *)(param_1 + 0x18);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar39 = uVar30 - uVar14;
        if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar39 = *(uint *)(param_1 + 0x1c);
        }
        if (uVar39 < 2) {
          uVar39 = 1;
        }
        local_f0._4_4_ = (undefined4)((ulong)local_f0 >> 0x20);
        local_f0 = (ulong *)CONCAT44(local_f0._4_4_,uVar39);
        bVar5 = local_a8 == 0;
        uVar16 = (ulong)bVar5;
        lVar37 = *(long *)(param_1 + 0x30);
        uVar14 = *(uint *)(param_1 + 0xc4);
        uVar13 = *puVar43 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
        uVar40 = *(uint *)(lVar37 + uVar13 * 4);
        lVar46 = *(long *)(param_1 + 0x40);
        puVar31 = (uint *)(lVar46 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
        puVar34 = puVar31 + 1;
        iVar55 = uVar30 + 9;
        uVar12 = 3;
        if (bVar5) {
          uVar12 = 4;
        }
        puVar11 = (ulong *)((long)puVar43 + 4);
        uVar19 = uVar23;
        do {
          uVar35 = (uint)local_a0 - 1;
          if (uVar16 != 3) {
            uVar35 = *(uint *)((long)&local_98 + (uVar16 - 2) * 4);
          }
          if ((uVar35 - 1 < uVar30 - iVar56) &&
             ((uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar35))) {
            lVar26 = -(ulong)uVar35;
            puVar41 = (ulong *)((long)puVar11 + lVar26);
            puVar42 = puVar11;
            if (puVar11 < local_b8) {
              if (*puVar41 == *puVar11) {
                iVar58 = 0;
                puVar41 = (ulong *)((long)puVar43 + 0xc + lVar26);
                puVar42 = (ulong *)((long)puVar43 + 0xc);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e94e4;
                  uVar50 = *puVar41;
                  uVar52 = *puVar42;
                  iVar58 = iVar58 + 8;
                  puVar41 = puVar41 + 1;
                  puVar42 = puVar42 + 1;
                } while (uVar50 == uVar52);
                uVar52 = uVar52 ^ uVar50;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar11 ^ *puVar41;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006e94e4:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar41 == *(uint *)puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 4);
                  puVar42 = (ulong *)((long)puVar42 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar41 == (short)*puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 2);
                  puVar42 = (ulong *)((long)puVar42 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar41 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              iVar58 = (int)puVar42 - (int)puVar11;
            }
            uVar35 = iVar58 + 4;
            uVar52 = (ulong)uVar35;
            if (uVar19 < uVar52) {
              local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
              (local_c8 + uVar49 * 2)[1] = uVar35;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              if ((uVar25 < uVar35) ||
                 (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == puVar27))
              goto joined_r0x0001006e9ffc;
            }
          }
          uVar10 = (uint)uVar49;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar12);
        *(uint *)(lVar37 + uVar13 * 4) = uVar30;
        if (uVar39 <= uVar40) {
          uVar12 = 0;
          uVar16 = 0;
          uVar25 = ~(-1 << (ulong)(uVar14 & 0x1f));
          iVar56 = iVar55;
          do {
            uVar13 = uVar12;
            if (uVar16 <= uVar12) {
              uVar13 = uVar16;
            }
            lVar37 = lVar47 + (ulong)uVar40;
            puVar11 = (ulong *)(lVar37 + uVar13);
            puVar41 = (ulong *)((long)puVar43 + uVar13);
            puVar42 = puVar41;
            if (puVar41 < local_b8) {
              if (*puVar11 == *puVar41) {
                lVar26 = 0;
                puVar42 = (ulong *)((long)puVar43 + uVar13 + 8);
                puVar11 = (ulong *)(lVar47 + 8 + uVar13 + uVar40);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e99d4;
                  uVar52 = *puVar11;
                  uVar50 = *puVar42;
                  lVar26 = lVar26 + 8;
                  puVar42 = puVar42 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar52 == uVar50);
                uVar50 = uVar50 ^ uVar52;
                uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar41 ^ *puVar11;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
              }
            }
            else {
joined_r0x0001006e99d4:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar11 == *(uint *)puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 4);
                  puVar11 = (ulong *)((long)puVar11 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar11 == (short)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 2);
                  puVar11 = (ulong *)((long)puVar11 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar11 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              uVar52 = (long)puVar42 - (long)puVar41;
            }
            uVar52 = uVar52 + uVar13;
            iVar55 = iVar56;
            if (uVar19 < uVar52) {
              iVar55 = uVar40 + (int)uVar52;
              if (uVar52 <= iVar56 - uVar40) {
                iVar55 = iVar56;
              }
              local_c8[uVar49 * 2] = (uVar30 + 2) - uVar40;
              (local_c8 + uVar49 * 2)[1] = (int)uVar52;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              uVar19 = uVar52;
              if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
            }
            uVar10 = (uint)uVar49;
            puVar17 = (uint *)(lVar46 + (ulong)((uVar40 & uVar7) << 1) * 4);
            if (*(byte *)(lVar37 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
              *puVar31 = uVar40;
              if (uVar40 <= uVar33) goto LAB_1006e9fe0;
              puVar17 = puVar17 + 1;
              uVar12 = uVar52;
              puVar31 = puVar17;
            }
            else {
              *puVar34 = uVar40;
              uVar16 = uVar52;
              puVar34 = puVar17;
              if (uVar40 <= uVar33) goto LAB_1006e9fd8;
            }
            bVar5 = uVar25 == 0;
            uVar25 = uVar25 - 1;
            if ((bVar5) || (uVar40 = *puVar17, iVar56 = iVar55, uVar40 < uVar39)) break;
          } while( true );
        }
        goto LAB_1006e9fe4;
      }
      if (iVar56 != 3) {
        uVar49 = 0;
        uVar25 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar25) {
          uVar25 = 0xfff;
        }
        lVar47 = *(long *)(param_1 + 8);
        uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar7 = ~uVar35;
        uVar30 = iVar55 - (int)lVar47;
        uVar33 = 0;
        if (uVar7 <= uVar30) {
          uVar33 = uVar30 - uVar7;
        }
        iVar56 = *(int *)(param_1 + 0x18);
        uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar39 = uVar30 - uVar14;
        if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
          uVar39 = *(uint *)(param_1 + 0x1c);
        }
        if (uVar39 < 2) {
          uVar39 = 1;
        }
        bVar5 = local_a8 == 0;
        uVar16 = (ulong)bVar5;
        local_f0 = *(ulong **)(param_1 + 0x30);
        uVar14 = *(uint *)(param_1 + 0xc4);
        uVar2 = (uint)*puVar43 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
        uVar40 = *(uint *)((long)local_f0 + (ulong)uVar2 * 4);
        lVar37 = *(long *)(param_1 + 0x40);
        puVar31 = (uint *)(lVar37 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
        puVar34 = puVar31 + 1;
        iVar55 = uVar30 + 9;
        uVar12 = 3;
        if (bVar5) {
          uVar12 = 4;
        }
        puVar11 = (ulong *)((long)puVar43 + 4);
        uVar13 = uVar23;
        do {
          uVar35 = (uint)local_a0 - 1;
          if (uVar16 != 3) {
            uVar35 = *(uint *)((long)&local_98 + (uVar16 - 2) * 4);
          }
          if ((uVar35 - 1 < uVar30 - iVar56) &&
             ((uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar35))) {
            lVar46 = -(ulong)uVar35;
            puVar41 = (ulong *)((long)puVar11 + lVar46);
            puVar42 = puVar11;
            if (puVar11 < local_b8) {
              if (*puVar41 == *puVar11) {
                iVar58 = 0;
                puVar41 = (ulong *)((long)puVar43 + 0xc + lVar46);
                puVar42 = (ulong *)((long)puVar43 + 0xc);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e97ac;
                  uVar52 = *puVar41;
                  uVar19 = *puVar42;
                  iVar58 = iVar58 + 8;
                  puVar41 = puVar41 + 1;
                  puVar42 = puVar42 + 1;
                } while (uVar52 == uVar19);
                uVar19 = uVar19 ^ uVar52;
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
              }
              else {
                uVar19 = *puVar11 ^ *puVar41;
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                iVar58 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006e97ac:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar41 == *(uint *)puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 4);
                  puVar42 = (ulong *)((long)puVar42 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar41 == (short)*puVar42) {
                  puVar41 = (ulong *)((long)puVar41 + 2);
                  puVar42 = (ulong *)((long)puVar42 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar41 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              iVar58 = (int)puVar42 - (int)puVar11;
            }
            uVar35 = iVar58 + 4;
            uVar19 = (ulong)uVar35;
            if (uVar13 < uVar19) {
              local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
              (local_c8 + uVar49 * 2)[1] = uVar35;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              if ((uVar25 < uVar35) ||
                 (uVar13 = uVar19, (ulong *)((long)puVar43 + uVar19) == puVar27))
              goto joined_r0x0001006e9ffc;
            }
          }
          uVar10 = (uint)uVar49;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar12);
        *(uint *)((long)local_f0 + (ulong)uVar2 * 4) = uVar30;
        if (uVar39 <= uVar40) {
          uVar12 = 0;
          uVar16 = 0;
          uVar25 = ~(-1 << (ulong)(uVar14 & 0x1f));
          iVar56 = iVar55;
          do {
            uVar19 = uVar12;
            if (uVar16 <= uVar12) {
              uVar19 = uVar16;
            }
            lVar46 = lVar47 + (ulong)uVar40;
            puVar11 = (ulong *)(lVar46 + uVar19);
            puVar41 = (ulong *)((long)puVar43 + uVar19);
            puVar42 = puVar41;
            if (puVar41 < local_b8) {
              if (*puVar11 == *puVar41) {
                lVar26 = 0;
                puVar42 = (ulong *)((long)puVar43 + uVar19 + 8);
                puVar11 = (ulong *)(lVar47 + 8 + uVar19 + uVar40);
                do {
                  puVar27 = local_f8;
                  if (local_b8 <= puVar42) goto joined_r0x0001006e9c4c;
                  uVar52 = *puVar11;
                  uVar50 = *puVar42;
                  lVar26 = lVar26 + 8;
                  puVar42 = puVar42 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar52 == uVar50);
                uVar50 = uVar50 ^ uVar52;
                uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar41 ^ *puVar11;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
              }
            }
            else {
joined_r0x0001006e9c4c:
              if (puVar42 < local_e0) {
                if (*(uint *)puVar11 == *(uint *)puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 4);
                  puVar11 = (ulong *)((long)puVar11 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if ((short)*puVar11 == (short)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 2);
                  puVar11 = (ulong *)((long)puVar11 + 2);
                }
              }
              if ((puVar42 < puVar27) && ((char)*puVar11 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              uVar52 = (long)puVar42 - (long)puVar41;
            }
            uVar52 = uVar52 + uVar19;
            iVar55 = iVar56;
            if (uVar13 < uVar52) {
              iVar55 = uVar40 + (int)uVar52;
              if (uVar52 <= iVar56 - uVar40) {
                iVar55 = iVar56;
              }
              local_c8[uVar49 * 2] = (uVar30 + 2) - uVar40;
              (local_c8 + uVar49 * 2)[1] = (int)uVar52;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              uVar13 = uVar52;
              if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
            }
            uVar10 = (uint)uVar49;
            puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar7) << 1) * 4);
            if (*(byte *)(lVar46 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
              *puVar31 = uVar40;
              if (uVar40 <= uVar33) {
                puVar31 = (uint *)local_a4;
                break;
              }
              puVar17 = puVar17 + 1;
              uVar12 = uVar52;
              puVar31 = puVar17;
            }
            else {
              *puVar34 = uVar40;
              uVar16 = uVar52;
              puVar34 = puVar17;
              if (uVar40 <= uVar33) {
                puVar34 = (uint *)local_a4;
                break;
              }
            }
            bVar5 = uVar25 == 0;
            uVar25 = uVar25 - 1;
            if ((bVar5) || (uVar40 = *puVar17, iVar56 = iVar55, uVar40 < uVar39)) break;
          } while( true );
        }
        *puVar34 = 0;
        *puVar31 = 0;
        goto LAB_1006e9fec;
      }
      uVar49 = 0;
      uVar25 = *(uint *)(param_1 + 0xcc);
      if (0xffe < uVar25) {
        uVar25 = 0xfff;
      }
      lVar47 = *(long *)(param_1 + 8);
      uVar7 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar30 = ~uVar7;
      uVar33 = (uint)((long)puVar43 - lVar47);
      uVar35 = 0;
      if (uVar30 <= uVar33) {
        uVar35 = uVar33 - uVar30;
      }
      iVar56 = *(int *)(param_1 + 0x18);
      uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar39 = uVar33 - uVar14;
      if (uVar33 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
        uVar39 = *(uint *)(param_1 + 0x1c);
      }
      if (uVar39 < 2) {
        uVar39 = 1;
      }
      bVar5 = local_a8 == 0;
      uVar16 = (ulong)bVar5;
      local_f0 = *(ulong **)(param_1 + 0x30);
      uVar14 = *(uint *)(param_1 + 0xc4);
      uVar2 = (uint)*puVar43 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
      uVar40 = *(uint *)((long)local_f0 + (ulong)uVar2 * 4);
      lVar37 = *(long *)(param_1 + 0x40);
      puVar31 = (uint *)(lVar37 + (ulong)((uVar33 & (uVar7 ^ 0xffffffff)) << 1) * 4);
      puVar34 = puVar31 + 1;
      iVar55 = uVar33 + 9;
      uVar12 = 3;
      if (bVar5) {
        uVar12 = 4;
      }
      puVar11 = (ulong *)((long)puVar43 + 3);
      uVar13 = uVar23;
      do {
        uVar7 = (uint)local_a0 - 1;
        if (uVar16 != 3) {
          uVar7 = *(uint *)((long)&local_98 + (uVar16 - 2) * 4);
        }
        if ((uVar7 - 1 < uVar33 - iVar56) &&
           (((*(uint *)((long)puVar43 - (ulong)uVar7) ^ (uint)*puVar43) & 0xffffff) == 0)) {
          lVar46 = -(ulong)uVar7;
          puVar41 = (ulong *)((long)puVar11 + lVar46);
          puVar42 = puVar11;
          if (puVar11 < local_b8) {
            if (*puVar41 == *puVar11) {
              iVar58 = 0;
              puVar41 = (ulong *)((long)puVar43 + 0xb + lVar46);
              puVar42 = (ulong *)((long)puVar43 + 0xb);
              do {
                puVar27 = local_f8;
                if (local_b8 <= puVar42) goto joined_r0x0001006e8ddc;
                uVar52 = *puVar41;
                uVar19 = *puVar42;
                iVar58 = iVar58 + 8;
                puVar41 = puVar41 + 1;
                puVar42 = puVar42 + 1;
              } while (uVar52 == uVar19);
              uVar19 = uVar19 ^ uVar52;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            }
            else {
              uVar19 = *puVar11 ^ *puVar41;
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              iVar58 = (int)((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
            }
          }
          else {
joined_r0x0001006e8ddc:
            if (puVar42 < local_e0) {
              if (*(uint *)puVar41 == *(uint *)puVar42) {
                puVar41 = (ulong *)((long)puVar41 + 4);
                puVar42 = (ulong *)((long)puVar42 + 4);
              }
            }
            if (puVar42 < local_e8) {
              if ((short)*puVar41 == (short)*puVar42) {
                puVar41 = (ulong *)((long)puVar41 + 2);
                puVar42 = (ulong *)((long)puVar42 + 2);
              }
            }
            if ((puVar42 < puVar27) && ((char)*puVar41 == (char)*puVar42)) {
              puVar42 = (ulong *)((long)puVar42 + 1);
            }
            iVar58 = (int)puVar42 - (int)puVar11;
          }
          uVar7 = iVar58 + 3;
          uVar19 = (ulong)uVar7;
          if (uVar13 < uVar19) {
            local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
            (local_c8 + uVar49 * 2)[1] = uVar7;
            uVar10 = (int)uVar49 + 1;
            uVar49 = (ulong)uVar10;
            if ((uVar25 < uVar7) || (uVar13 = uVar19, (ulong *)((long)puVar43 + uVar19) == puVar27))
            goto joined_r0x0001006e9ffc;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar12);
      if (2 < uVar13) {
LAB_1006e9b54:
        uVar10 = (uint)uVar49;
        *(uint *)((long)local_f0 + (ulong)uVar2 * 4) = uVar33;
        if (uVar39 <= uVar40) {
          uVar12 = 0;
          uVar16 = 0;
          uVar25 = ~(-1 << (ulong)(uVar14 & 0x1f));
          iVar56 = iVar55;
          do {
            uVar19 = uVar12;
            if (uVar16 <= uVar12) {
              uVar19 = uVar16;
            }
            lVar46 = lVar47 + (ulong)uVar40;
            puVar11 = (ulong *)(lVar46 + uVar19);
            puVar41 = (ulong *)((long)puVar43 + uVar19);
            puVar42 = puVar41;
            if (puVar41 < local_b8) {
              if (*puVar11 == *puVar41) {
                lVar26 = 0;
                puVar42 = (ulong *)((long)puVar43 + uVar19 + 8);
                puVar11 = (ulong *)(lVar47 + 8 + uVar19 + uVar40);
                do {
                  if (local_b8 <= puVar42) goto LAB_1006e9e68;
                  uVar50 = *puVar11;
                  uVar52 = *puVar42;
                  lVar26 = lVar26 + 8;
                  puVar42 = puVar42 + 1;
                  puVar11 = puVar11 + 1;
                } while (uVar50 == uVar52);
                uVar52 = uVar52 ^ uVar50;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
                puVar27 = local_f8;
              }
              else {
                uVar52 = *puVar41 ^ *puVar11;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
              }
              uVar52 = uVar52 + uVar19;
            }
            else {
LAB_1006e9e68:
              if (puVar42 < local_e0) {
                if ((uint)*puVar11 == (uint)*puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 4);
                  puVar11 = (ulong *)((long)puVar11 + 4);
                }
              }
              if (puVar42 < local_e8) {
                if (*(short *)puVar11 == *(short *)puVar42) {
                  puVar42 = (ulong *)((long)puVar42 + 2);
                  puVar11 = (ulong *)((long)puVar11 + 2);
                }
              }
              if ((puVar42 < local_f8) && ((char)*puVar11 == (char)*puVar42)) {
                puVar42 = (ulong *)((long)puVar42 + 1);
              }
              uVar52 = (long)puVar42 + (uVar19 - (long)puVar41);
              puVar27 = local_f8;
            }
            iVar55 = iVar56;
            if (uVar13 < uVar52) {
              iVar55 = uVar40 + (int)uVar52;
              if (uVar52 <= iVar56 - uVar40) {
                iVar55 = iVar56;
              }
              local_c8[uVar49 * 2] = (uVar33 + 2) - uVar40;
              (local_c8 + uVar49 * 2)[1] = (int)uVar52;
              uVar10 = (int)uVar49 + 1;
              uVar49 = (ulong)uVar10;
              uVar13 = uVar52;
              if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
            }
            uVar10 = (uint)uVar49;
            puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar30) << 1) * 4);
            if (*(byte *)(lVar46 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
              *puVar31 = uVar40;
              if (uVar40 <= uVar35) {
                puVar31 = (uint *)local_a4;
                break;
              }
              puVar31 = puVar17 + 1;
              uVar12 = uVar52;
              puVar17 = puVar31;
            }
            else {
              *puVar34 = uVar40;
              uVar16 = uVar52;
              puVar34 = puVar17;
              if (uVar40 <= uVar35) {
                puVar34 = (uint *)local_a4;
                break;
              }
            }
            bVar5 = uVar25 == 0;
            uVar25 = uVar25 - 1;
            if ((bVar5) || (uVar40 = *puVar17, iVar56 = iVar55, uVar40 < uVar39)) break;
          } while( true );
        }
        *puVar34 = 0;
        *puVar31 = 0;
        *(int *)(param_1 + 0x24) = iVar55 + -8;
        goto joined_r0x0001006e9ffc;
      }
      lVar46 = *(long *)(param_1 + 0x38);
      uVar16 = *puVar43;
      uVar7 = 0x20 - *(int *)(param_1 + 0x28);
      if (uVar29 < uVar33) {
        uVar12 = (ulong)uVar29;
        do {
          *(int *)(lVar46 + (ulong)((uint)(*(int *)(lVar47 + uVar12) * 0x35a7bd00) >>
                                   (ulong)(uVar7 & 0x1f)) * 4) = (int)uVar12;
          uVar12 = uVar12 + 1;
        } while (((long)puVar43 - lVar47 & 0xffffffffU) != uVar12);
      }
      uVar7 = *(uint *)(lVar46 + (ulong)((uint)uVar16 * 0x35a7bd00 >> (ulong)(uVar7 & 0x1f)) * 4);
      uVar29 = uVar33;
      if (uVar7 < uVar39 || uVar33 - uVar7 >> 0x12 != 0) goto LAB_1006e9b54;
      puVar11 = (ulong *)(lVar47 + (ulong)uVar7);
      puVar41 = puVar43;
      if (puVar43 < local_b8) {
        if (*puVar11 == *puVar43) {
          lVar46 = 0;
          puVar11 = (ulong *)(lVar47 + (ulong)uVar7);
          do {
            puVar11 = puVar11 + 1;
            puVar41 = puVar41 + 1;
            if (local_b8 <= puVar41) goto LAB_1006ec5f4;
            lVar46 = lVar46 + 8;
          } while (*puVar11 == *puVar41);
          uVar16 = *puVar41 ^ *puVar11;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = lVar46 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
        }
        else {
          uVar16 = *puVar43 ^ *puVar11;
          uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
        }
      }
      else {
LAB_1006ec5f4:
        if (puVar41 < local_e0) {
          if ((uint)*puVar11 == (uint)*puVar41) {
            puVar41 = (ulong *)((long)puVar41 + 4);
            puVar11 = (ulong *)((long)puVar11 + 4);
          }
        }
        if (puVar41 < local_e8) {
          if (*(short *)puVar11 == *(short *)puVar41) {
            puVar41 = (ulong *)((long)puVar41 + 2);
            puVar11 = (ulong *)((long)puVar11 + 2);
          }
        }
        if ((puVar41 < puVar27) && ((char)*puVar11 == (char)*puVar41)) {
          puVar41 = (ulong *)((long)puVar41 + 1);
        }
        uVar16 = (long)puVar41 - (long)puVar43;
      }
      if (uVar16 < 3) goto LAB_1006e9b54;
      *local_c8 = (uVar33 - uVar7) + 2;
      local_c8[1] = (int)uVar16;
      if (uVar16 <= uVar25 && (ulong *)((long)puVar43 + uVar16) != puVar27) {
        uVar49 = 1;
        uVar13 = uVar16;
        goto LAB_1006e9b54;
      }
      *(uint *)(param_1 + 0x24) = uVar33 + 1;
      uVar10 = 1;
      goto LAB_1006ea000;
    }
LAB_1006ec738:
    FUN_1006b8160(param_2);
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) - param_5;
    iVar56 = *(int *)(param_1 + 0x18) + (int)param_5;
    *(int *)(param_1 + 0x18) = iVar56;
    *(int *)(param_1 + 0x1c) = iVar56;
    *(int *)(param_1 + 0x24) = iVar56;
    if (*(int *)(param_1 + 0xa8) != 2) {
      iVar56 = 0;
      iVar55 = 0;
      iVar58 = 0;
      iVar60 = 0;
      lVar22 = 0x100;
      iVar62 = 0;
      iVar63 = 0;
      iVar64 = 0;
      iVar65 = 0;
      iVar66 = 0;
      iVar67 = 0;
      iVar68 = 0;
      iVar70 = 0;
      iVar71 = 0;
      iVar72 = 0;
      iVar73 = 0;
      iVar74 = 0;
      puVar24 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
      do {
        iVar75 = (int)puVar24[-4] * 0x10 + -1;
        iVar76 = (int)((ulong)puVar24[-4] >> 0x20) * 0x10 + -1;
        iVar77 = (int)puVar24[-3] * 0x10 + -1;
        iVar78 = (int)((ulong)puVar24[-3] >> 0x20) * 0x10 + -1;
        iVar79 = (int)puVar24[-2] * 0x10 + -1;
        iVar80 = (int)((ulong)puVar24[-2] >> 0x20) * 0x10 + -1;
        iVar81 = (int)puVar24[-1] * 0x10 + -1;
        iVar82 = (int)((ulong)puVar24[-1] >> 0x20) * 0x10 + -1;
        iVar83 = (int)*puVar24 * 0x10 + -1;
        iVar84 = (int)((ulong)*puVar24 >> 0x20) * 0x10 + -1;
        iVar85 = (int)puVar24[1] * 0x10 + -1;
        iVar86 = (int)((ulong)puVar24[1] >> 0x20) * 0x10 + -1;
        iVar87 = (int)puVar24[2] * 0x10 + -1;
        iVar88 = (int)((ulong)puVar24[2] >> 0x20) * 0x10 + -1;
        iVar89 = (int)puVar24[3] * 0x10 + -1;
        iVar90 = (int)((ulong)puVar24[3] >> 0x20) * 0x10 + -1;
        puVar24[-3] = CONCAT44(iVar78,iVar77);
        puVar24[-4] = CONCAT44(iVar76,iVar75);
        puVar24[-1] = CONCAT44(iVar82,iVar81);
        puVar24[-2] = CONCAT44(iVar80,iVar79);
        puVar24[1] = CONCAT44(iVar86,iVar85);
        *puVar24 = CONCAT44(iVar84,iVar83);
        puVar24[3] = CONCAT44(iVar90,iVar89);
        puVar24[2] = CONCAT44(iVar88,iVar87);
        iVar56 = iVar75 + iVar56;
        iVar55 = iVar76 + iVar55;
        iVar58 = iVar77 + iVar58;
        iVar60 = iVar78 + iVar60;
        iVar62 = iVar79 + iVar62;
        iVar63 = iVar80 + iVar63;
        iVar64 = iVar81 + iVar64;
        iVar65 = iVar82 + iVar65;
        iVar66 = iVar83 + iVar66;
        iVar67 = iVar84 + iVar67;
        iVar68 = iVar85 + iVar68;
        iVar70 = iVar86 + iVar70;
        iVar71 = iVar87 + iVar71;
        iVar72 = iVar88 + iVar72;
        iVar73 = iVar89 + iVar73;
        iVar74 = iVar90 + iVar74;
        lVar22 = lVar22 + -0x10;
        puVar24 = puVar24 + 8;
      } while (lVar22 != 0);
      *(int *)(param_1 + 0x78) =
           iVar71 + iVar66 + iVar62 + iVar56 + iVar72 + iVar67 + iVar63 + iVar55 +
           iVar73 + iVar68 + iVar64 + iVar58 + iVar74 + iVar70 + iVar65 + iVar60;
    }
    puVar24 = *(undefined8 **)(param_1 + 0x50);
    iVar62 = (int)*puVar24 * 0x10 + -1;
    iVar63 = (int)((ulong)*puVar24 >> 0x20) * 0x10 + -1;
    iVar64 = (int)puVar24[1] * 0x10 + -1;
    iVar65 = (int)((ulong)puVar24[1] >> 0x20) * 0x10 + -1;
    iVar56 = (int)puVar24[2] * 0x10 + -1;
    iVar55 = (int)((ulong)puVar24[2] >> 0x20) * 0x10 + -1;
    iVar58 = (int)puVar24[3] * 0x10 + -1;
    iVar60 = (int)((ulong)puVar24[3] >> 0x20) * 0x10 + -1;
    puVar24[1] = CONCAT44(iVar65,iVar64);
    *puVar24 = CONCAT44(iVar63,iVar62);
    puVar24[3] = CONCAT44(iVar60,iVar58);
    puVar24[2] = CONCAT44(iVar55,iVar56);
    iVar66 = (int)puVar24[4] * 0x10 + -1;
    iVar67 = (int)((ulong)puVar24[4] >> 0x20) * 0x10 + -1;
    iVar68 = (int)puVar24[5] * 0x10 + -1;
    iVar70 = (int)((ulong)puVar24[5] >> 0x20) * 0x10 + -1;
    iVar71 = (int)puVar24[6] * 0x10 + -1;
    iVar72 = (int)((ulong)puVar24[6] >> 0x20) * 0x10 + -1;
    iVar73 = (int)puVar24[7] * 0x10 + -1;
    iVar74 = (int)((ulong)puVar24[7] >> 0x20) * 0x10 + -1;
    puVar24[5] = CONCAT44(iVar70,iVar68);
    puVar24[4] = CONCAT44(iVar67,iVar66);
    puVar24[7] = CONCAT44(iVar74,iVar73);
    puVar24[6] = CONCAT44(iVar72,iVar71);
    iVar75 = (int)puVar24[8] * 0x10 + -1;
    iVar76 = (int)((ulong)puVar24[8] >> 0x20) * 0x10 + -1;
    iVar77 = (int)puVar24[9] * 0x10 + -1;
    iVar78 = (int)((ulong)puVar24[9] >> 0x20) * 0x10 + -1;
    iVar79 = (int)puVar24[10] * 0x10 + -1;
    iVar80 = (int)((ulong)puVar24[10] >> 0x20) * 0x10 + -1;
    iVar81 = (int)puVar24[0xb] * 0x10 + -1;
    iVar82 = (int)((ulong)puVar24[0xb] >> 0x20) * 0x10 + -1;
    puVar24[9] = CONCAT44(iVar78,iVar77);
    puVar24[8] = CONCAT44(iVar76,iVar75);
    puVar24[0xb] = CONCAT44(iVar82,iVar81);
    puVar24[10] = CONCAT44(iVar80,iVar79);
    iVar83 = (int)puVar24[0xc] * 0x10 + -1;
    iVar84 = (int)((ulong)puVar24[0xc] >> 0x20) * 0x10 + -1;
    iVar85 = (int)puVar24[0xd] * 0x10 + -1;
    iVar86 = (int)((ulong)puVar24[0xd] >> 0x20) * 0x10 + -1;
    iVar87 = (int)puVar24[0xe] * 0x10 + -1;
    iVar88 = (int)((ulong)puVar24[0xe] >> 0x20) * 0x10 + -1;
    iVar89 = (int)puVar24[0xf] * 0x10 + -1;
    iVar90 = (int)((ulong)puVar24[0xf] >> 0x20) * 0x10 + -1;
    puVar24[0xd] = CONCAT44(iVar86,iVar85);
    puVar24[0xc] = CONCAT44(iVar84,iVar83);
    puVar24[0xf] = CONCAT44(iVar90,iVar89);
    puVar24[0xe] = CONCAT44(iVar88,iVar87);
    iVar91 = (int)puVar24[0x10] * 0x10 + -1;
    iVar92 = (int)((ulong)puVar24[0x10] >> 0x20) * 0x10 + -1;
    iVar93 = (int)puVar24[0x11] * 0x10 + -1;
    iVar94 = (int)((ulong)puVar24[0x11] >> 0x20) * 0x10 + -1;
    puVar24[0x11] = CONCAT44(iVar94,iVar93);
    puVar24[0x10] = CONCAT44(iVar92,iVar91);
    *(int *)(param_1 + 0x7c) =
         iVar91 + iVar75 + iVar83 + iVar66 + iVar87 + iVar71 + iVar79 + iVar56 + iVar62 +
         iVar92 + iVar76 + iVar84 + iVar67 + iVar88 + iVar72 + iVar80 + iVar55 + iVar63 +
         iVar93 + iVar77 + iVar85 + iVar68 + iVar89 + iVar73 + iVar81 + iVar58 + iVar64 +
         iVar94 + iVar78 + iVar86 + iVar70 + iVar90 + iVar74 + iVar82 + iVar60 + iVar65;
    puVar24 = *(undefined8 **)(param_1 + 0x58);
    iVar55 = (int)*puVar24 * 0x10 + -1;
    iVar58 = (int)((ulong)*puVar24 >> 0x20) * 0x10 + -1;
    iVar60 = (int)puVar24[1] * 0x10 + -1;
    iVar62 = (int)((ulong)puVar24[1] >> 0x20) * 0x10 + -1;
    iVar63 = (int)puVar24[2] * 0x10 + -1;
    iVar64 = (int)((ulong)puVar24[2] >> 0x20) * 0x10 + -1;
    iVar65 = (int)puVar24[3] * 0x10 + -1;
    iVar66 = (int)((ulong)puVar24[3] >> 0x20) * 0x10 + -1;
    iVar67 = (int)puVar24[4] * 0x10 + -1;
    iVar68 = (int)((ulong)puVar24[4] >> 0x20) * 0x10 + -1;
    iVar70 = (int)puVar24[5] * 0x10 + -1;
    iVar71 = (int)((ulong)puVar24[5] >> 0x20) * 0x10 + -1;
    iVar72 = (int)puVar24[6] * 0x10 + -1;
    iVar73 = (int)((ulong)puVar24[6] >> 0x20) * 0x10 + -1;
    iVar74 = (int)puVar24[7] * 0x10 + -1;
    iVar75 = (int)((ulong)puVar24[7] >> 0x20) * 0x10 + -1;
    puVar24[1] = CONCAT44(iVar62,iVar60);
    *puVar24 = CONCAT44(iVar58,iVar55);
    puVar24[3] = CONCAT44(iVar66,iVar65);
    puVar24[2] = CONCAT44(iVar64,iVar63);
    puVar24[5] = CONCAT44(iVar71,iVar70);
    puVar24[4] = CONCAT44(iVar68,iVar67);
    puVar24[7] = CONCAT44(iVar75,iVar74);
    puVar24[6] = CONCAT44(iVar73,iVar72);
    iVar76 = (int)puVar24[8] * 0x10 + -1;
    iVar77 = (int)((ulong)puVar24[8] >> 0x20) * 0x10 + -1;
    iVar78 = (int)puVar24[9] * 0x10 + -1;
    iVar79 = (int)((ulong)puVar24[9] >> 0x20) * 0x10 + -1;
    iVar80 = (int)puVar24[10] * 0x10 + -1;
    iVar81 = (int)((ulong)puVar24[10] >> 0x20) * 0x10 + -1;
    iVar82 = (int)puVar24[0xb] * 0x10 + -1;
    iVar83 = (int)((ulong)puVar24[0xb] >> 0x20) * 0x10 + -1;
    iVar84 = (int)puVar24[0xc] * 0x10 + -1;
    iVar85 = (int)((ulong)puVar24[0xc] >> 0x20) * 0x10 + -1;
    iVar86 = (int)puVar24[0xd] * 0x10 + -1;
    iVar87 = (int)((ulong)puVar24[0xd] >> 0x20) * 0x10 + -1;
    iVar88 = (int)puVar24[0xe] * 0x10 + -1;
    iVar89 = (int)((ulong)puVar24[0xe] >> 0x20) * 0x10 + -1;
    iVar90 = (int)puVar24[0xf] * 0x10 + -1;
    iVar91 = (int)((ulong)puVar24[0xf] >> 0x20) * 0x10 + -1;
    puVar24[9] = CONCAT44(iVar79,iVar78);
    puVar24[8] = CONCAT44(iVar77,iVar76);
    puVar24[0xb] = CONCAT44(iVar83,iVar82);
    puVar24[10] = CONCAT44(iVar81,iVar80);
    puVar24[0xd] = CONCAT44(iVar87,iVar86);
    puVar24[0xc] = CONCAT44(iVar85,iVar84);
    puVar24[0xf] = CONCAT44(iVar91,iVar90);
    puVar24[0xe] = CONCAT44(iVar89,iVar88);
    iVar92 = (int)puVar24[0x10] * 0x10 + -1;
    iVar93 = (int)((ulong)puVar24[0x10] >> 0x20) * 0x10 + -1;
    iVar94 = (int)puVar24[0x11] * 0x10 + -1;
    iVar95 = (int)((ulong)puVar24[0x11] >> 0x20) * 0x10 + -1;
    iVar96 = (int)puVar24[0x12] * 0x10 + -1;
    iVar97 = (int)((ulong)puVar24[0x12] >> 0x20) * 0x10 + -1;
    iVar98 = (int)puVar24[0x13] * 0x10 + -1;
    iVar99 = (int)((ulong)puVar24[0x13] >> 0x20) * 0x10 + -1;
    iVar100 = (int)puVar24[0x14] * 0x10 + -1;
    iVar101 = (int)((ulong)puVar24[0x14] >> 0x20) * 0x10 + -1;
    iVar102 = (int)puVar24[0x15] * 0x10 + -1;
    iVar103 = (int)((ulong)puVar24[0x15] >> 0x20) * 0x10 + -1;
    iVar104 = (int)puVar24[0x16] * 0x10 + -1;
    iVar105 = (int)((ulong)puVar24[0x16] >> 0x20) * 0x10 + -1;
    iVar106 = (int)puVar24[0x17] * 0x10 + -1;
    iVar107 = (int)((ulong)puVar24[0x17] >> 0x20) * 0x10 + -1;
    puVar24[0x11] = CONCAT44(iVar95,iVar94);
    puVar24[0x10] = CONCAT44(iVar93,iVar92);
    puVar24[0x13] = CONCAT44(iVar99,iVar98);
    puVar24[0x12] = CONCAT44(iVar97,iVar96);
    puVar24[0x15] = CONCAT44(iVar103,iVar102);
    puVar24[0x14] = CONCAT44(iVar101,iVar100);
    puVar24[0x17] = CONCAT44(iVar107,iVar106);
    puVar24[0x16] = CONCAT44(iVar105,iVar104);
    iVar108 = (int)puVar24[0x18] * 0x10 + -1;
    iVar109 = (int)((ulong)puVar24[0x18] >> 0x20) * 0x10 + -1;
    iVar110 = (int)puVar24[0x19] * 0x10 + -1;
    iVar111 = (int)((ulong)puVar24[0x19] >> 0x20) * 0x10 + -1;
    puVar24[0x19] = CONCAT44(iVar111,iVar110);
    puVar24[0x18] = CONCAT44(iVar109,iVar108);
    iVar56 = *(int *)(puVar24 + 0x1a) * 0x10 + -1;
    *(int *)(puVar24 + 0x1a) = iVar56;
    *(int *)(param_1 + 0x80) =
         iVar56 + iVar108 + iVar104 + iVar88 + iVar72 +
                            iVar100 + iVar84 + iVar67 +
                            iVar96 + iVar80 + iVar63 + iVar92 + iVar76 + iVar55 +
                            iVar105 + iVar89 + iVar73 +
                            iVar101 + iVar85 + iVar68 +
                            iVar97 + iVar81 + iVar64 + iVar93 + iVar77 + iVar58 +
                            iVar106 + iVar90 + iVar74 +
                            iVar102 + iVar86 + iVar70 +
                            iVar98 + iVar82 + iVar65 + iVar94 + iVar78 + iVar60 +
                            iVar107 + iVar91 + iVar75 +
                            iVar103 + iVar87 + iVar71 +
                            iVar99 + iVar83 + iVar66 + iVar95 + iVar79 + iVar62 + iVar109 +
                  iVar110 + iVar111;
    puVar24 = *(undefined8 **)(param_1 + 0x60);
    iVar62 = (int)*puVar24 * 0x10 + -1;
    iVar63 = (int)((ulong)*puVar24 >> 0x20) * 0x10 + -1;
    iVar64 = (int)puVar24[1] * 0x10 + -1;
    iVar65 = (int)((ulong)puVar24[1] >> 0x20) * 0x10 + -1;
    iVar66 = (int)puVar24[2] * 0x10 + -1;
    iVar70 = (int)((ulong)puVar24[2] >> 0x20) * 0x10 + -1;
    iVar73 = (int)puVar24[3] * 0x10 + -1;
    iVar76 = (int)((ulong)puVar24[3] >> 0x20) * 0x10 + -1;
    puVar24[1] = CONCAT44(iVar65,iVar64);
    *puVar24 = CONCAT44(iVar63,iVar62);
    puVar24[3] = CONCAT44(iVar76,iVar73);
    puVar24[2] = CONCAT44(iVar70,iVar66);
    iVar67 = (int)puVar24[4] * 0x10 + -1;
    iVar71 = (int)((ulong)puVar24[4] >> 0x20) * 0x10 + -1;
    iVar74 = (int)puVar24[5] * 0x10 + -1;
    iVar77 = (int)((ulong)puVar24[5] >> 0x20) * 0x10 + -1;
    iVar87 = (int)puVar24[6] * 0x10 + -1;
    iVar88 = (int)((ulong)puVar24[6] >> 0x20) * 0x10 + -1;
    iVar89 = (int)puVar24[7] * 0x10 + -1;
    iVar90 = (int)((ulong)puVar24[7] >> 0x20) * 0x10 + -1;
    puVar24[5] = CONCAT44(iVar77,iVar74);
    puVar24[4] = CONCAT44(iVar71,iVar67);
    puVar24[7] = CONCAT44(iVar90,iVar89);
    puVar24[6] = CONCAT44(iVar88,iVar87);
    iVar68 = (int)puVar24[8] * 0x10 + -1;
    iVar72 = (int)((ulong)puVar24[8] >> 0x20) * 0x10 + -1;
    iVar75 = (int)puVar24[9] * 0x10 + -1;
    iVar78 = (int)((ulong)puVar24[9] >> 0x20) * 0x10 + -1;
    iVar79 = (int)puVar24[10] * 0x10 + -1;
    iVar81 = (int)((ulong)puVar24[10] >> 0x20) * 0x10 + -1;
    iVar83 = (int)puVar24[0xb] * 0x10 + -1;
    iVar85 = (int)((ulong)puVar24[0xb] >> 0x20) * 0x10 + -1;
    puVar24[9] = CONCAT44(iVar78,iVar75);
    puVar24[8] = CONCAT44(iVar72,iVar68);
    puVar24[0xb] = CONCAT44(iVar85,iVar83);
    puVar24[10] = CONCAT44(iVar81,iVar79);
    iVar80 = (int)puVar24[0xc] * 0x10 + -1;
    iVar82 = (int)((ulong)puVar24[0xc] >> 0x20) * 0x10 + -1;
    iVar84 = (int)puVar24[0xd] * 0x10 + -1;
    iVar86 = (int)((ulong)puVar24[0xd] >> 0x20) * 0x10 + -1;
    iVar56 = (int)puVar24[0xe] * 0x10 + -1;
    iVar55 = (int)((ulong)puVar24[0xe] >> 0x20) * 0x10 + -1;
    iVar58 = (int)puVar24[0xf] * 0x10 + -1;
    iVar60 = (int)((ulong)puVar24[0xf] >> 0x20) * 0x10 + -1;
    puVar24[0xd] = CONCAT44(iVar86,iVar84);
    puVar24[0xc] = CONCAT44(iVar82,iVar80);
    puVar24[0xf] = CONCAT44(iVar60,iVar58);
    puVar24[0xe] = CONCAT44(iVar55,iVar56);
    *(int *)(param_1 + 0x84) =
         iVar63 + iVar62 + iVar64 + iVar65 + iVar66 + iVar70 + iVar73 +
         iVar76 + iVar67 + iVar71 + iVar74 + iVar77 + iVar87 + iVar88 + iVar89 + iVar90 +
         iVar68 + iVar72 + iVar75 + iVar78 + iVar79 + iVar81 +
         iVar83 + iVar85 + iVar80 + iVar82 + iVar84 + iVar86 + iVar56 + iVar55 + iVar58 + iVar60;
    lVar22 = *(long *)(param_1 + 8);
  }
  puVar27 = (ulong *)((long)param_4 + param_5);
  puVar51 = puVar27 + -1;
  uVar53 = *(uint *)(param_1 + 0x18);
  uVar25 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar25) {
    uVar25 = 0xfff;
  }
  uVar20 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar20 = 4;
  }
  local_1b4 = *(uint *)(param_1 + 0x24);
  local_c8 = *(int **)(param_1 + 0x68);
  piVar1 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,2);
  puVar43 = param_4;
  if ((ulong *)(lVar22 + (ulong)uVar53) == param_4) {
    puVar43 = (ulong *)((long)param_4 + 1);
  }
  if (puVar51 <= puVar43) {
LAB_1006f0958:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return (long)puVar27 - (long)param_4;
  }
  uVar23 = (ulong)(uVar20 - 1);
  local_b8 = (ulong *)((long)puVar27 + -7);
  local_f0 = (ulong *)((long)puVar27 + -3);
  local_f8 = (ulong *)((long)puVar27 + -1);
  puVar48 = local_100 + 1;
  puVar15 = (ulong *)((long)local_100 + 4);
  local_110 = puVar27 + -4;
  local_b0 = piVar1 + 7;
  lVar22 = (long)(ulong)uVar20 + -1;
  local_c0 = piVar1 + 0xe;
  local_e0 = (ulong *)(ulong)uVar20;
  local_d0 = puVar27;
LAB_1006ecbbc:
  local_a8 = (int)puVar43 - (int)param_4;
  lVar47 = *(long *)(param_1 + 8);
  uVar53 = *(uint *)(param_1 + 0x24);
  uVar49 = (ulong)uVar53;
  if (puVar43 < (ulong *)(lVar47 + uVar49)) goto LAB_1006ecbac;
  local_108 = (ulong *)CONCAT44(local_108._4_4_,(uint)(local_a8 == 0));
  iVar56 = *(int *)(param_1 + 200);
  uVar20 = (int)puVar43 - (int)lVar47;
  while (local_d8 = puVar43, uVar53 < uVar20) {
    lVar37 = param_1;
    FUN_100705148(param_1,lVar47 + uVar49,puVar27,iVar56,0);
    uVar53 = (int)lVar37 + (int)uVar49;
    uVar49 = (ulong)uVar53;
    puVar43 = local_d8;
  }
  *(uint *)(param_1 + 0x24) = uVar20;
  local_e8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
  iVar55 = (int)puVar43;
  if (iVar56 - 6U < 2) {
    uVar49 = 0;
    uVar53 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar53) {
      uVar53 = 0xfff;
    }
    lVar47 = *(long *)(param_1 + 8);
    uVar29 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar33 = ~uVar29;
    uVar35 = iVar55 - (int)lVar47;
    uVar20 = 0;
    if (uVar33 <= uVar35) {
      uVar20 = uVar35 - uVar33;
    }
    local_e8 = (ulong *)CONCAT44(local_e8._4_4_,uVar20);
    iVar56 = *(int *)(param_1 + 0x18);
    uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar7 = uVar35 - uVar30;
    if (uVar35 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x20) != 0) {
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    bVar5 = local_a8 == 0;
    uVar16 = (ulong)bVar5;
    lVar37 = *(long *)(param_1 + 0x30);
    uVar30 = *(uint *)(param_1 + 0xc4);
    uVar13 = *puVar43 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar39 = *(uint *)(lVar37 + uVar13 * 4);
    lVar46 = *(long *)(param_1 + 0x40);
    puVar31 = (uint *)(lVar46 + (ulong)((uVar35 & (uVar29 ^ 0xffffffff)) << 1) * 4);
    puVar34 = puVar31 + 1;
    iVar55 = uVar35 + 9;
    uVar12 = 3;
    if (bVar5) {
      uVar12 = 4;
    }
    puVar11 = (ulong *)((long)puVar43 + 4);
    uVar19 = uVar23;
    do {
      if (uVar16 == 3) {
        uVar29 = (int)*local_100 - 1;
        uVar14 = (int)*local_100 - 2;
      }
      else {
        uVar29 = *(uint *)((long)local_100 + uVar16 * 4);
        uVar14 = uVar29 - 1;
      }
      if ((uVar14 < uVar35 - iVar56) && ((uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar29))
         ) {
        lVar26 = -(ulong)uVar29;
        puVar27 = (ulong *)((long)puVar11 + lVar26);
        puVar41 = puVar11;
        if (puVar11 < local_b8) {
          if (*puVar27 == *puVar11) {
            iVar58 = 0;
            puVar41 = (ulong *)((long)puVar43 + 0xc);
            puVar27 = (ulong *)((long)puVar43 + 0xc + lVar26);
            do {
              if (local_b8 <= puVar41) goto LAB_1006ed138;
              uVar50 = *puVar27;
              uVar52 = *puVar41;
              iVar58 = iVar58 + 8;
              puVar41 = puVar41 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar50 == uVar52);
            uVar52 = uVar52 ^ uVar50;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar11 ^ *puVar27;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
        }
        else {
LAB_1006ed138:
          if (puVar41 < local_f0) {
            if ((uint)*puVar27 == (uint)*puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar41 < local_f8) {
            if (*(short *)puVar27 == *(short *)puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
            puVar41 = (ulong *)((long)puVar41 + 1);
          }
          iVar58 = (int)puVar41 - (int)puVar11;
        }
        uVar29 = iVar58 + 4;
        uVar52 = (ulong)uVar29;
        if (uVar19 < uVar52) {
          local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
          (local_c8 + uVar49 * 2)[1] = uVar29;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          puVar27 = local_d0;
          if ((uVar53 < uVar29) || (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == local_d0))
          goto joined_r0x0001006f077c;
        }
      }
      uVar14 = (uint)uVar49;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
    *(uint *)(lVar37 + uVar13 * 4) = uVar35;
    puVar27 = local_d0;
    if (uVar7 <= uVar39) {
      uVar16 = 0;
      uVar12 = 0;
      uVar53 = ~(-1 << (ulong)(uVar30 & 0x1f));
      iVar56 = iVar55;
      do {
        uVar13 = uVar16;
        if (uVar12 <= uVar16) {
          uVar13 = uVar12;
        }
        lVar37 = lVar47 + (ulong)uVar39;
        puVar27 = (ulong *)(lVar37 + uVar13);
        puVar11 = (ulong *)((long)puVar43 + uVar13);
        puVar41 = puVar11;
        if (puVar11 < local_b8) {
          if (*puVar27 == *puVar11) {
            lVar26 = 0;
            puVar41 = (ulong *)((long)puVar43 + uVar13 + 8);
            puVar27 = (ulong *)(lVar47 + 8 + uVar13 + uVar39);
            do {
              if (local_b8 <= puVar41) goto joined_r0x0001006ed2f0;
              uVar50 = *puVar27;
              uVar52 = *puVar41;
              lVar26 = lVar26 + 8;
              puVar41 = puVar41 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar50 == uVar52);
            uVar52 = uVar52 ^ uVar50;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar11 ^ *puVar27;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006ed2f0:
          if (puVar41 < local_f0) {
            if (*(uint *)puVar27 == *(uint *)puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar41 < local_f8) {
            if ((short)*puVar27 == (short)*puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
            puVar41 = (ulong *)((long)puVar41 + 1);
          }
          uVar52 = (long)puVar41 - (long)puVar11;
        }
        uVar52 = uVar52 + uVar13;
        iVar55 = iVar56;
        if (uVar19 < uVar52) {
          iVar55 = uVar39 + (int)uVar52;
          if (uVar52 <= iVar56 - uVar39) {
            iVar55 = iVar56;
          }
          local_c8[uVar49 * 2] = (uVar35 + 2) - uVar39;
          (local_c8 + uVar49 * 2)[1] = (int)uVar52;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          uVar19 = uVar52;
          puVar27 = local_d0;
          if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == local_d0) break;
        }
        uVar14 = (uint)uVar49;
        puVar17 = (uint *)(lVar46 + (ulong)((uVar39 & uVar33) << 1) * 4);
        if (*(byte *)(lVar37 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
          *puVar31 = uVar39;
          puVar27 = local_d0;
          if (uVar39 <= uVar20) goto LAB_1006ee1e8;
          puVar17 = puVar17 + 1;
          uVar16 = uVar52;
          puVar31 = puVar17;
        }
        else {
          *puVar34 = uVar39;
          puVar27 = local_d0;
          puVar34 = puVar17;
          uVar12 = uVar52;
          if (uVar39 <= uVar20) goto LAB_1006ee1e0;
        }
        puVar27 = local_d0;
        if (uVar53 == 0) break;
        uVar53 = uVar53 - 1;
        uVar39 = *puVar17;
        iVar56 = iVar55;
      } while (uVar7 <= uVar39);
    }
    goto LAB_1006ee1ec;
  }
  if (iVar56 == 5) {
    uVar49 = 0;
    uVar53 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar53) {
      uVar53 = 0xfff;
    }
    lVar47 = *(long *)(param_1 + 8);
    uVar29 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar33 = ~uVar29;
    uVar35 = iVar55 - (int)lVar47;
    uVar20 = 0;
    if (uVar33 <= uVar35) {
      uVar20 = uVar35 - uVar33;
    }
    local_e8 = (ulong *)CONCAT44(local_e8._4_4_,uVar20);
    iVar56 = *(int *)(param_1 + 0x18);
    uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar7 = uVar35 - uVar30;
    if (uVar35 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x20) != 0) {
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    bVar5 = local_a8 == 0;
    uVar16 = (ulong)bVar5;
    lVar37 = *(long *)(param_1 + 0x30);
    uVar30 = *(uint *)(param_1 + 0xc4);
    uVar13 = *puVar43 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar39 = *(uint *)(lVar37 + uVar13 * 4);
    lVar46 = *(long *)(param_1 + 0x40);
    puVar31 = (uint *)(lVar46 + (ulong)((uVar35 & (uVar29 ^ 0xffffffff)) << 1) * 4);
    puVar34 = puVar31 + 1;
    iVar55 = uVar35 + 9;
    uVar12 = 3;
    if (bVar5) {
      uVar12 = 4;
    }
    puVar11 = (ulong *)((long)puVar43 + 4);
    uVar19 = uVar23;
    do {
      if (uVar16 == 3) {
        uVar29 = (int)*local_100 - 1;
        uVar14 = (int)*local_100 - 2;
      }
      else {
        uVar29 = *(uint *)((long)local_100 + uVar16 * 4);
        uVar14 = uVar29 - 1;
      }
      if ((uVar14 < uVar35 - iVar56) &&
         (puVar27 = local_d0, (uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar29))) {
        lVar26 = -(ulong)uVar29;
        puVar27 = (ulong *)((long)puVar11 + lVar26);
        puVar41 = puVar11;
        if (puVar11 < local_b8) {
          if (*puVar27 == *puVar11) {
            iVar58 = 0;
            puVar41 = (ulong *)((long)puVar43 + 0xc);
            puVar27 = (ulong *)((long)puVar43 + 0xc + lVar26);
            do {
              if (local_b8 <= puVar41) goto LAB_1006ed638;
              uVar52 = *puVar27;
              uVar50 = *puVar41;
              iVar58 = iVar58 + 8;
              puVar41 = puVar41 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar52 == uVar50);
            uVar50 = uVar50 ^ uVar52;
            uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar11 ^ *puVar27;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
        }
        else {
LAB_1006ed638:
          if (puVar41 < local_f0) {
            if ((uint)*puVar27 == (uint)*puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar41 < local_f8) {
            if (*(short *)puVar27 == *(short *)puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
            puVar41 = (ulong *)((long)puVar41 + 1);
          }
          iVar58 = (int)puVar41 - (int)puVar11;
        }
        uVar29 = iVar58 + 4;
        uVar52 = (ulong)uVar29;
        puVar27 = local_d0;
        if (uVar19 < uVar52) {
          local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
          (local_c8 + uVar49 * 2)[1] = uVar29;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          if ((uVar53 < uVar29) || (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == local_d0))
          goto joined_r0x0001006f077c;
        }
      }
      uVar14 = (uint)uVar49;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
    *(uint *)(lVar37 + uVar13 * 4) = uVar35;
    if (uVar7 <= uVar39) {
      uVar16 = 0;
      uVar12 = 0;
      uVar53 = ~(-1 << (ulong)(uVar30 & 0x1f));
      iVar56 = iVar55;
      do {
        uVar13 = uVar16;
        if (uVar12 <= uVar16) {
          uVar13 = uVar12;
        }
        lVar37 = lVar47 + (ulong)uVar39;
        puVar11 = (ulong *)(lVar37 + uVar13);
        puVar41 = (ulong *)((long)puVar43 + uVar13);
        puVar42 = puVar41;
        if (puVar41 < local_b8) {
          if (*puVar11 == *puVar41) {
            lVar26 = 0;
            puVar42 = (ulong *)((long)puVar43 + uVar13 + 8);
            puVar11 = (ulong *)(lVar47 + 8 + uVar13 + uVar39);
            do {
              puVar27 = local_d0;
              if (local_b8 <= puVar42) goto joined_r0x0001006edb9c;
              uVar52 = *puVar11;
              uVar50 = *puVar42;
              lVar26 = lVar26 + 8;
              puVar42 = puVar42 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar52 == uVar50);
            uVar50 = uVar50 ^ uVar52;
            uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar41 ^ *puVar11;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
            puVar27 = local_d0;
          }
        }
        else {
joined_r0x0001006edb9c:
          if (puVar42 < local_f0) {
            if (*(uint *)puVar11 == *(uint *)puVar42) {
              puVar42 = (ulong *)((long)puVar42 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar42 < local_f8) {
            if ((short)*puVar11 == (short)*puVar42) {
              puVar42 = (ulong *)((long)puVar42 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar42 < puVar27) && (puVar27 = local_d0, (char)*puVar11 == (char)*puVar42)) {
            puVar42 = (ulong *)((long)puVar42 + 1);
          }
          uVar52 = (long)puVar42 - (long)puVar41;
        }
        uVar52 = uVar52 + uVar13;
        iVar55 = iVar56;
        if (uVar19 < uVar52) {
          iVar55 = uVar39 + (int)uVar52;
          if (uVar52 <= iVar56 - uVar39) {
            iVar55 = iVar56;
          }
          local_c8[uVar49 * 2] = (uVar35 + 2) - uVar39;
          (local_c8 + uVar49 * 2)[1] = (int)uVar52;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          uVar19 = uVar52;
          if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
        }
        uVar14 = (uint)uVar49;
        puVar17 = (uint *)(lVar46 + (ulong)((uVar39 & uVar33) << 1) * 4);
        if (*(byte *)(lVar37 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
          *puVar31 = uVar39;
          if (uVar39 <= uVar20) goto LAB_1006ee1e8;
          puVar17 = puVar17 + 1;
          uVar16 = uVar52;
          puVar31 = puVar17;
        }
        else {
          *puVar34 = uVar39;
          puVar34 = puVar17;
          uVar12 = uVar52;
          if (uVar39 <= uVar20) goto LAB_1006ee1e0;
        }
        if (uVar53 == 0) break;
        uVar53 = uVar53 - 1;
        uVar39 = *puVar17;
        iVar56 = iVar55;
      } while (uVar7 <= uVar39);
    }
    goto LAB_1006ee1ec;
  }
  if (iVar56 != 3) {
    uVar49 = 0;
    uVar53 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar53) {
      uVar53 = 0xfff;
    }
    lVar47 = *(long *)(param_1 + 8);
    uVar29 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar33 = ~uVar29;
    uVar35 = iVar55 - (int)lVar47;
    uVar20 = 0;
    if (uVar33 <= uVar35) {
      uVar20 = uVar35 - uVar33;
    }
    local_e8 = (ulong *)CONCAT44(local_e8._4_4_,uVar20);
    iVar56 = *(int *)(param_1 + 0x18);
    uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar7 = uVar35 - uVar30;
    if (uVar35 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x20) != 0) {
      uVar7 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    bVar5 = local_a8 == 0;
    uVar16 = (ulong)bVar5;
    lVar37 = *(long *)(param_1 + 0x30);
    uVar30 = *(uint *)(param_1 + 0xc4);
    uVar13 = (ulong)((uint)*puVar43 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
    uVar39 = *(uint *)(lVar37 + uVar13 * 4);
    lVar46 = *(long *)(param_1 + 0x40);
    puVar31 = (uint *)(lVar46 + (ulong)((uVar35 & (uVar29 ^ 0xffffffff)) << 1) * 4);
    puVar34 = puVar31 + 1;
    iVar55 = uVar35 + 9;
    uVar12 = 3;
    if (bVar5) {
      uVar12 = 4;
    }
    puVar11 = (ulong *)((long)puVar43 + 4);
    uVar19 = uVar23;
    do {
      if (uVar16 == 3) {
        uVar29 = (int)*local_100 - 1;
        uVar14 = (int)*local_100 - 2;
      }
      else {
        uVar29 = *(uint *)((long)local_100 + uVar16 * 4);
        uVar14 = uVar29 - 1;
      }
      if ((uVar14 < uVar35 - iVar56) &&
         (puVar27 = local_d0, (uint)*puVar43 == *(uint *)((long)puVar43 - (ulong)uVar29))) {
        lVar26 = -(ulong)uVar29;
        puVar27 = (ulong *)((long)puVar11 + lVar26);
        puVar41 = puVar11;
        if (puVar11 < local_b8) {
          if (*puVar27 == *puVar11) {
            iVar58 = 0;
            puVar41 = (ulong *)((long)puVar43 + 0xc);
            puVar27 = (ulong *)((long)puVar43 + 0xc + lVar26);
            do {
              if (local_b8 <= puVar41) goto LAB_1006ed91c;
              uVar52 = *puVar27;
              uVar50 = *puVar41;
              iVar58 = iVar58 + 8;
              puVar41 = puVar41 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar52 == uVar50);
            uVar50 = uVar50 ^ uVar52;
            uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar11 ^ *puVar27;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
        }
        else {
LAB_1006ed91c:
          if (puVar41 < local_f0) {
            if ((uint)*puVar27 == (uint)*puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar41 < local_f8) {
            if (*(short *)puVar27 == *(short *)puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
            puVar41 = (ulong *)((long)puVar41 + 1);
          }
          iVar58 = (int)puVar41 - (int)puVar11;
        }
        uVar29 = iVar58 + 4;
        uVar52 = (ulong)uVar29;
        puVar27 = local_d0;
        if (uVar19 < uVar52) {
          local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
          (local_c8 + uVar49 * 2)[1] = uVar29;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          if ((uVar53 < uVar29) || (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == local_d0))
          goto joined_r0x0001006f077c;
        }
      }
      uVar14 = (uint)uVar49;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
    *(uint *)(lVar37 + uVar13 * 4) = uVar35;
    if (uVar7 <= uVar39) {
      uVar16 = 0;
      uVar12 = 0;
      uVar53 = ~(-1 << (ulong)(uVar30 & 0x1f));
      do {
        uVar13 = uVar16;
        if (uVar12 <= uVar16) {
          uVar13 = uVar12;
        }
        lVar37 = lVar47 + (ulong)uVar39;
        puVar11 = (ulong *)(lVar37 + uVar13);
        puVar41 = (ulong *)((long)puVar43 + uVar13);
        puVar42 = puVar41;
        if (puVar41 < local_b8) {
          if (*puVar11 == *puVar41) {
            lVar26 = 0;
            puVar42 = (ulong *)((long)puVar43 + uVar13 + 8);
            puVar11 = (ulong *)(lVar47 + 8 + uVar13 + uVar39);
            do {
              puVar27 = local_d0;
              if (local_b8 <= puVar42) goto joined_r0x0001006ede20;
              uVar52 = *puVar11;
              uVar50 = *puVar42;
              lVar26 = lVar26 + 8;
              puVar42 = puVar42 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar52 == uVar50);
            uVar50 = uVar50 ^ uVar52;
            uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar41 ^ *puVar11;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
            puVar27 = local_d0;
          }
        }
        else {
joined_r0x0001006ede20:
          if (puVar42 < local_f0) {
            if (*(uint *)puVar11 == *(uint *)puVar42) {
              puVar42 = (ulong *)((long)puVar42 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar42 < local_f8) {
            if ((short)*puVar11 == (short)*puVar42) {
              puVar42 = (ulong *)((long)puVar42 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar42 < puVar27) && (puVar27 = local_d0, (char)*puVar11 == (char)*puVar42)) {
            puVar42 = (ulong *)((long)puVar42 + 1);
          }
          uVar52 = (long)puVar42 - (long)puVar41;
        }
        uVar52 = uVar52 + uVar13;
        if (uVar19 < uVar52) {
          iVar56 = uVar39 + (int)uVar52;
          if (uVar52 <= iVar55 - uVar39) {
            iVar56 = iVar55;
          }
          local_c8[uVar49 * 2] = (uVar35 + 2) - uVar39;
          (local_c8 + uVar49 * 2)[1] = (int)uVar52;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          uVar19 = uVar52;
          iVar55 = iVar56;
          if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == puVar27) break;
        }
        uVar14 = (uint)uVar49;
        puVar17 = (uint *)(lVar46 + (ulong)((uVar39 & uVar33) << 1) * 4);
        if (*(byte *)(lVar37 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
          *puVar31 = uVar39;
          if (uVar39 <= uVar20) {
            puVar31 = (uint *)&local_a0;
            *puVar34 = 0;
            goto LAB_1006ee1f0;
          }
          puVar17 = puVar17 + 1;
          uVar16 = uVar52;
          puVar31 = puVar17;
        }
        else {
          *puVar34 = uVar39;
          puVar34 = puVar17;
          uVar12 = uVar52;
          if (uVar39 <= uVar20) {
            local_a0 = local_a0 & 0xffffffff00000000;
            goto LAB_1006ee1f0;
          }
        }
        if (uVar53 == 0) break;
        uVar53 = uVar53 - 1;
        uVar39 = *puVar17;
      } while (uVar7 <= uVar39);
    }
    *puVar34 = 0;
    goto LAB_1006ee1f0;
  }
  uVar49 = 0;
  uVar53 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar53) {
    uVar53 = 0xfff;
  }
  lVar47 = *(long *)(param_1 + 8);
  uVar29 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar33 = ~uVar29;
  uVar35 = (uint)((long)puVar43 - lVar47);
  uVar20 = 0;
  if (uVar33 <= uVar35) {
    uVar20 = uVar35 - uVar33;
  }
  iVar56 = *(int *)(param_1 + 0x18);
  uVar30 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar7 = uVar35 - uVar30;
  if (uVar35 - *(uint *)(param_1 + 0x1c) <= uVar30 || *(int *)(param_1 + 0x20) != 0) {
    uVar7 = *(uint *)(param_1 + 0x1c);
  }
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  bVar5 = local_a8 == 0;
  uVar16 = (ulong)bVar5;
  local_e8 = *(ulong **)(param_1 + 0x30);
  uVar30 = *(uint *)(param_1 + 0xc4);
  uVar13 = (ulong)((uint)*puVar43 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
  uVar39 = *(uint *)((long)local_e8 + uVar13 * 4);
  lVar37 = *(long *)(param_1 + 0x40);
  puVar31 = (uint *)(lVar37 + (ulong)((uVar35 & (uVar29 ^ 0xffffffff)) << 1) * 4);
  puVar34 = puVar31 + 1;
  iVar55 = uVar35 + 9;
  uVar12 = 3;
  if (bVar5) {
    uVar12 = 4;
  }
  puVar11 = (ulong *)((long)puVar43 + 3);
  uVar19 = uVar23;
  do {
    if (uVar16 == 3) {
      uVar29 = (int)*local_100 - 1;
      uVar14 = (int)*local_100 - 2;
    }
    else {
      uVar29 = *(uint *)((long)local_100 + uVar16 * 4);
      uVar14 = uVar29 - 1;
    }
    if ((uVar14 < uVar35 - iVar56) &&
       (puVar27 = local_d0,
       ((*(uint *)((long)puVar43 - (ulong)uVar29) ^ (uint)*puVar43) & 0xffffff) == 0)) {
      lVar46 = -(ulong)uVar29;
      puVar27 = (ulong *)((long)puVar11 + lVar46);
      puVar41 = puVar11;
      if (puVar11 < local_b8) {
        if (*puVar27 == *puVar11) {
          iVar58 = 0;
          puVar41 = (ulong *)((long)puVar43 + 0xb);
          puVar27 = (ulong *)((long)puVar43 + 0xb + lVar46);
          do {
            if (local_b8 <= puVar41) goto LAB_1006ece24;
            uVar52 = *puVar27;
            uVar50 = *puVar41;
            iVar58 = iVar58 + 8;
            puVar41 = puVar41 + 1;
            puVar27 = puVar27 + 1;
          } while (uVar52 == uVar50);
          uVar50 = uVar50 ^ uVar52;
          uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          iVar58 = iVar58 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
        }
        else {
          uVar52 = *puVar11 ^ *puVar27;
          uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
          uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
          uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
          uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
          iVar58 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
        }
      }
      else {
LAB_1006ece24:
        if (puVar41 < local_f0) {
          if ((uint)*puVar27 == (uint)*puVar41) {
            puVar41 = (ulong *)((long)puVar41 + 4);
            puVar27 = (ulong *)((long)puVar27 + 4);
          }
        }
        if (puVar41 < local_f8) {
          if (*(short *)puVar27 == *(short *)puVar41) {
            puVar41 = (ulong *)((long)puVar41 + 2);
            puVar27 = (ulong *)((long)puVar27 + 2);
          }
        }
        if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
          puVar41 = (ulong *)((long)puVar41 + 1);
        }
        iVar58 = (int)puVar41 - (int)puVar11;
      }
      uVar29 = iVar58 + 3;
      uVar52 = (ulong)uVar29;
      puVar27 = local_d0;
      if (uVar19 < uVar52) {
        local_c8[uVar49 * 2] = (int)uVar16 - (uint)bVar5;
        (local_c8 + uVar49 * 2)[1] = uVar29;
        uVar14 = (int)uVar49 + 1;
        uVar49 = (ulong)uVar14;
        if ((uVar53 < uVar29) || (uVar19 = uVar52, (ulong *)((long)puVar43 + uVar52) == local_d0))
        goto joined_r0x0001006f077c;
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < uVar12);
  if (2 < uVar19) {
LAB_1006edd1c:
    uVar14 = (uint)uVar49;
    *(uint *)((long)local_e8 + uVar13 * 4) = uVar35;
    if (uVar7 <= uVar39) {
      uVar16 = 0;
      uVar12 = 0;
      uVar53 = ~(-1 << (ulong)(uVar30 & 0x1f));
      local_e8 = (ulong *)(lVar47 + 8);
      iVar56 = iVar55;
      do {
        uVar13 = uVar16;
        if (uVar12 <= uVar16) {
          uVar13 = uVar12;
        }
        lVar46 = lVar47 + (ulong)uVar39;
        puVar27 = (ulong *)(lVar46 + uVar13);
        puVar11 = (ulong *)((long)puVar43 + uVar13);
        puVar41 = puVar11;
        if (puVar11 < local_b8) {
          if (*puVar27 == *puVar11) {
            lVar26 = 0;
            puVar41 = (ulong *)((long)puVar43 + uVar13 + 8);
            puVar27 = (ulong *)((long)local_e8 + uVar13 + uVar39);
            do {
              if (local_b8 <= puVar41) goto joined_r0x0001006ee06c;
              uVar52 = *puVar27;
              uVar50 = *puVar41;
              lVar26 = lVar26 + 8;
              puVar41 = puVar41 + 1;
              puVar27 = puVar27 + 1;
            } while (uVar52 == uVar50);
            uVar50 = uVar50 ^ uVar52;
            uVar52 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = lVar26 + ((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
          }
          else {
            uVar52 = *puVar11 ^ *puVar27;
            uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
            uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
            uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
            uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
            uVar52 = (ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006ee06c:
          if (puVar41 < local_f0) {
            if (*(uint *)puVar27 == *(uint *)puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
          }
          if (puVar41 < local_f8) {
            if ((short)*puVar27 == (short)*puVar41) {
              puVar41 = (ulong *)((long)puVar41 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
          }
          if ((puVar41 < local_d0) && ((char)*puVar27 == (char)*puVar41)) {
            puVar41 = (ulong *)((long)puVar41 + 1);
          }
          uVar52 = (long)puVar41 - (long)puVar11;
        }
        uVar52 = uVar52 + uVar13;
        iVar55 = iVar56;
        if (uVar19 < uVar52) {
          iVar55 = uVar39 + (int)uVar52;
          if (uVar52 <= iVar56 - uVar39) {
            iVar55 = iVar56;
          }
          local_c8[uVar49 * 2] = (uVar35 + 2) - uVar39;
          (local_c8 + uVar49 * 2)[1] = (int)uVar52;
          uVar14 = (int)uVar49 + 1;
          uVar49 = (ulong)uVar14;
          uVar19 = uVar52;
          puVar27 = local_d0;
          if (0x1000 < uVar52 || (ulong *)((long)puVar43 + uVar52) == local_d0) break;
        }
        uVar14 = (uint)uVar49;
        puVar17 = (uint *)(lVar37 + (ulong)((uVar39 & uVar33) << 1) * 4);
        if (*(byte *)(lVar46 + uVar52) < *(byte *)((long)puVar43 + uVar52)) {
          *puVar31 = uVar39;
          if (uVar39 <= uVar20) {
            puVar31 = (uint *)&local_a0;
            puVar27 = local_d0;
            break;
          }
          puVar17 = puVar17 + 1;
          uVar16 = uVar52;
          puVar31 = puVar17;
        }
        else {
          *puVar34 = uVar39;
          puVar34 = puVar17;
          uVar12 = uVar52;
          if (uVar39 <= uVar20) {
            puVar34 = (uint *)&local_a0;
            puVar27 = local_d0;
            break;
          }
        }
        puVar27 = local_d0;
        if (uVar53 == 0) break;
        uVar53 = uVar53 - 1;
        uVar39 = *puVar17;
        iVar56 = iVar55;
      } while (uVar7 <= uVar39);
    }
    *puVar34 = 0;
    *puVar31 = 0;
    *(int *)(param_1 + 0x24) = iVar55 + -8;
    goto joined_r0x0001006f077c;
  }
  lVar46 = *(long *)(param_1 + 0x38);
  uVar16 = *puVar43;
  uVar29 = 0x20 - *(int *)(param_1 + 0x28);
  if (local_1b4 < uVar35) {
    uVar12 = (ulong)local_1b4;
    do {
      *(int *)(lVar46 + (ulong)((uint)(*(int *)(lVar47 + uVar12) * 0x35a7bd00) >>
                               (ulong)(uVar29 & 0x1f)) * 4) = (int)uVar12;
      uVar12 = uVar12 + 1;
    } while (((long)puVar43 - lVar47 & 0xffffffffU) != uVar12);
  }
  uVar29 = *(uint *)(lVar46 + (ulong)((uint)uVar16 * 0x35a7bd00 >> (ulong)(uVar29 & 0x1f)) * 4);
  local_1b4 = uVar35;
  if (uVar29 < uVar7 || uVar35 - uVar29 >> 0x12 != 0) goto LAB_1006edd1c;
  puVar11 = (ulong *)(lVar47 + (ulong)uVar29);
  puVar41 = puVar43;
  if (puVar43 < local_b8) {
    if (*puVar11 == *puVar43) {
      lVar46 = 0;
      puVar11 = (ulong *)(lVar47 + (ulong)uVar29);
      do {
        puVar11 = puVar11 + 1;
        puVar41 = puVar41 + 1;
        if (local_b8 <= puVar41) goto LAB_1006f080c;
        lVar46 = lVar46 + 8;
      } while (*puVar11 == *puVar41);
      uVar16 = *puVar41 ^ *puVar11;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = lVar46 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
    }
    else {
      uVar16 = *puVar43 ^ *puVar11;
      uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
    }
  }
  else {
LAB_1006f080c:
    if (puVar41 < local_f0) {
      if ((uint)*puVar11 == (uint)*puVar41) {
        puVar41 = (ulong *)((long)puVar41 + 4);
        puVar11 = (ulong *)((long)puVar11 + 4);
      }
    }
    if (puVar41 < local_f8) {
      if (*(short *)puVar11 == *(short *)puVar41) {
        puVar41 = (ulong *)((long)puVar41 + 2);
        puVar11 = (ulong *)((long)puVar11 + 2);
      }
    }
    if ((puVar41 < puVar27) && ((char)*puVar11 == (char)*puVar41)) {
      puVar41 = (ulong *)((long)puVar41 + 1);
    }
    uVar16 = (long)puVar41 - (long)puVar43;
  }
  if (uVar16 < 3) goto LAB_1006edd1c;
  *local_c8 = (uVar35 - uVar29) + 2;
  local_c8[1] = (int)uVar16;
  if (uVar16 <= uVar53 && (ulong *)((long)puVar43 + uVar16) != puVar27) {
    uVar49 = 1;
    uVar19 = uVar16;
    goto LAB_1006edd1c;
  }
  *(uint *)(param_1 + 0x24) = uVar35 + 1;
  uVar14 = 1;
  goto LAB_1006ee208;
LAB_1006e9fd8:
  puVar34 = (uint *)local_a4;
  goto LAB_1006e9fe4;
LAB_1006e9fe0:
  puVar31 = (uint *)local_a4;
LAB_1006e9fe4:
  *puVar34 = 0;
  *puVar31 = 0;
LAB_1006e9fec:
  *(int *)(param_1 + 0x24) = iVar55 + -8;
joined_r0x0001006e9ffc:
  uVar33 = uVar29;
  if (uVar10 == 0) {
LAB_1006e8a84:
    puVar43 = (ulong *)((long)puVar43 + 1);
    uVar29 = uVar33;
    goto joined_r0x0001006e8a98;
  }
LAB_1006ea000:
  *(ulong *)(piVar1 + 4) = local_a0;
  piVar1[6] = (uint)local_98;
  piVar1[2] = 0;
  piVar1[3] = local_a8;
  puVar41 = puVar48;
  FUN_100705be0(puVar48,local_a8,param_1 + 0x48,2);
  puVar11 = local_d0;
  *piVar1 = (int)puVar41;
  uVar25 = (local_c8 + (ulong)(uVar10 - 1) * 2)[1];
  puVar43 = local_d0;
  if (uVar53 < uVar25) {
    iVar55 = local_c8[(ulong)(uVar10 - 1) * 2];
    puVar42 = puVar27;
    uVar7 = local_a8;
    uVar35 = 0;
  }
  else {
    piVar36 = local_b0;
    lVar47 = lVar22;
    if (*(int *)(param_1 + 0x98) == 1) {
      iVar56 = 0x100;
    }
    else {
      iVar56 = **(int **)(param_1 + 0x50) + 1;
      uVar25 = (uint)LZCOUNT(iVar56) ^ 0x1f;
      iVar56 = *(int *)(param_1 + 0x8c) -
               (((uint)(iVar56 * 0x100) >> (ulong)(uVar25 & 0x1f)) + uVar25 * 0x100);
    }
    do {
      *piVar36 = 0x40000000;
      lVar47 = lVar47 + -1;
      piVar36 = piVar36 + 7;
    } while (lVar47 != 0);
    uVar49 = 0;
    uVar16 = (ulong)uVar20;
    do {
      uVar25 = local_c8[uVar49 * 2];
      uVar29 = (local_c8 + uVar49 * 2)[1];
      if (uVar25 < 3) {
        uVar35 = uVar25 + (int)local_d8;
        puVar42 = local_108;
        uVar30 = local_a0._4_4_;
        uVar7 = (uint)local_a0;
        if (uVar35 != 0) {
          uVar7 = (uint)local_a0 - 1;
          if (uVar35 != 3) {
            uVar7 = *(uint *)((long)&local_98 + ((ulong)uVar35 - 2) * 4);
          }
          ppuVar4 = &local_108;
          if (uVar35 != 1) {
            ppuVar4 = &local_110;
          }
          puVar42 = *ppuVar4;
          uVar30 = (uint)local_a0;
        }
      }
      else {
        uVar7 = uVar25 - 2;
        puVar42 = local_110;
        uVar30 = (uint)local_a0;
      }
      if ((uint)uVar16 <= uVar29) {
        uVar12 = *puVar42;
        uVar39 = (uint)LZCOUNT(uVar25 + 1) ^ 0x1f;
        uVar35 = (uint)uVar16 * 0x100 - 0x200;
        do {
          iVar55 = (int)uVar16;
          if (*(int *)(param_1 + 0x98) == 1) {
            uVar14 = (uint)LZCOUNT(iVar55 + -2) ^ 0x1f;
            iVar58 = (uVar35 >> (ulong)(uVar14 & 0x1f)) + (uVar14 + uVar39) * 0x100 + 0x1000;
          }
          else {
            uVar14 = iVar55 - 3;
            if (uVar14 < 0x80) {
              uVar14 = (uint)(byte)(&DAT_10084ff08)[uVar14];
            }
            else {
              uVar14 = 0x43 - (int)LZCOUNT(uVar14);
            }
            iVar58 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar39 * 4) + 1;
            uVar40 = (uint)LZCOUNT(iVar58) ^ 0x1f;
            iVar60 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar14 * 4) + 1;
            uVar2 = (uint)LZCOUNT(iVar60) ^ 0x1f;
            iVar58 = (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                      ((uint)(iVar58 * 0x100) >> (ulong)(uVar40 & 0x1f))) -
                     ((uint)(iVar60 * 0x100) >> (ulong)(uVar2 & 0x1f))) +
                     (((uVar39 + *(int *)(&DAT_10084fe34 + (ulong)uVar14 * 4)) - uVar40) - uVar2) *
                     0x100 + 0x33;
          }
          piVar36 = piVar1 + uVar16 * 7;
          piVar36[2] = iVar55;
          piVar36[3] = local_a8;
          *piVar36 = iVar56 + (int)puVar41 + iVar58;
          piVar36[1] = uVar25;
          *(ulong *)(piVar36 + 4) = CONCAT44(uVar30,uVar7);
          piVar36[6] = (uint)uVar12;
          uVar16 = (ulong)(iVar55 + 1U);
          uVar35 = uVar35 + 0x100;
        } while (iVar55 + 1U <= uVar29);
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 != uVar10);
    uVar29 = (int)uVar16 - 1;
    if (uVar29 != 0) {
      iVar56 = (int)local_d0;
      uVar35 = uVar29;
      uVar25 = 1;
LAB_1006ea288:
      uVar29 = uVar25;
      iVar56 = iVar56 + 1;
      piVar36 = piVar1 + (ulong)(uVar29 - 1) * 7;
      if (piVar36[2] == 0) {
        uVar25 = piVar36[3] + 1;
      }
      else {
        uVar25 = 1;
      }
      uVar49 = (ulong)uVar29;
      puVar41 = (ulong *)((long)puVar43 + uVar49);
      iVar55 = *piVar36;
      if (*(int *)(param_1 + 0xa8) == 2) {
        iVar55 = iVar55 + 0x800;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006ea310;
        if (uVar25 < 0x40) goto LAB_1006ea394;
LAB_1006ea2d8:
        uVar7 = 0x32 - (int)LZCOUNT(uVar25);
        if (0x3f < uVar25 - 1) goto LAB_1006ea3b0;
LAB_1006ea2f4:
        uVar30 = (uint)(byte)(&DAT_10084fdf4)[uVar25 - 1];
LAB_1006ea3bc:
        iVar58 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar7 * 4) + 1;
        uVar39 = (uint)LZCOUNT(iVar58) ^ 0x1f;
        iVar60 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar30 * 4) + 1;
        uVar14 = (uint)LZCOUNT(iVar60) ^ 0x1f;
        iVar55 = ((*(int *)(&DAT_10084fd64 + (ulong)uVar7 * 4) - uVar39) * 0x100 -
                 ((uint)(iVar58 * 0x100) >> (ulong)(uVar39 & 0x1f))) +
                 ((uint)(iVar60 * 0x100) >> (ulong)(uVar14 & 0x1f)) +
                 (uVar14 - *(int *)(&DAT_10084fd64 + (ulong)uVar30 * 4)) * 0x100 + iVar55;
        piVar8 = piVar1 + uVar49 * 7;
        iVar58 = *piVar8;
        puVar43 = local_d0;
        if (iVar55 <= iVar58) goto LAB_1006ea43c;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 1) {
          iVar58 = *(int *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)((long)puVar41 + -1) * 4) +
                   1;
          uVar7 = (uint)LZCOUNT(iVar58) ^ 0x1f;
          iVar55 = (*(int *)(param_1 + 0x88) + iVar55) -
                   (((uint)(iVar58 * 0x100) >> (ulong)(uVar7 & 0x1f)) + uVar7 * 0x100);
          if (0x3f < uVar25) goto LAB_1006ea2d8;
LAB_1006ea394:
          uVar7 = (uint)(byte)(&DAT_10084fdf4)[uVar25];
          if (uVar25 - 1 < 0x40) goto LAB_1006ea2f4;
LAB_1006ea3b0:
          uVar30 = 0x32 - (int)LZCOUNT(uVar25 - 1);
          goto LAB_1006ea3bc;
        }
        iVar55 = iVar55 + 0x600;
LAB_1006ea310:
        uVar7 = (uint)LZCOUNT(uVar25 + 1) ^ 0x1f;
        uVar30 = (uint)LZCOUNT(uVar25) ^ 0x1f;
        iVar55 = ((((uVar25 + 1) * 0x100 >> (ulong)(uVar7 & 0x1f)) + uVar7 * 0x100) -
                 (((uVar25 << 8) >> (ulong)(uVar30 & 0x1f)) + uVar30 * 0x100)) + iVar55;
        piVar8 = piVar1 + uVar49 * 7;
        iVar58 = *piVar8;
        if (iVar55 <= iVar58) {
LAB_1006ea43c:
          iVar58 = iVar55;
          piVar8[2] = 0;
          piVar8[3] = uVar25;
          *piVar8 = iVar58;
          piVar8[1] = 0;
          *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar36 + 4);
          piVar8[6] = piVar36[6];
        }
      }
      puVar42 = puVar27;
      if (puVar51 < puVar41) goto LAB_1006ea278;
      if (uVar29 != uVar35) {
        iVar55 = piVar8[2];
        local_f0 = (ulong *)CONCAT44(local_f0._4_4_,(uint)(iVar55 != 0));
        if (iVar55 == 0) {
          local_a8 = piVar8[3];
          if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006ea490;
LAB_1006ea4c0:
          iVar60 = **(int **)(param_1 + 0x50) + 1;
          uVar25 = (uint)LZCOUNT(iVar60) ^ 0x1f;
          iVar60 = *(int *)(param_1 + 0x8c) -
                   (((uint)(iVar60 * 0x100) >> (ulong)(uVar25 & 0x1f)) + uVar25 * 0x100);
          lVar47 = *(long *)(param_1 + 8);
          uVar16 = (ulong)*(uint *)(param_1 + 0x24);
          puVar28 = (ulong *)(lVar47 + uVar16);
        }
        else {
          local_a8 = 0;
          if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006ea4c0;
LAB_1006ea490:
          iVar60 = 0x100;
          lVar47 = *(long *)(param_1 + 8);
          uVar16 = (ulong)*(uint *)(param_1 + 0x24);
          puVar28 = (ulong *)(lVar47 + uVar16);
        }
        if (puVar41 < puVar28) goto LAB_1006ea278;
        iVar62 = *(int *)(param_1 + 200);
        uVar30 = (int)puVar41 - (int)lVar47;
        uVar25 = (uint)uVar16;
        local_d8 = puVar41;
        puVar42 = local_f8;
        puVar43 = local_d0;
        uVar7 = local_a8;
        while (local_f8 = puVar42, local_d0 = puVar43, local_a8 = uVar7, uVar25 < uVar30) {
          lVar37 = param_1;
          FUN_100705148(param_1,lVar47 + uVar16,puVar27,iVar62,0);
          uVar25 = (int)lVar37 + (int)uVar16;
          uVar16 = (ulong)uVar25;
          puVar42 = local_f8;
          puVar43 = local_d0;
          uVar7 = local_a8;
        }
        local_170 = (ulong *)((long)puVar11 + uVar49 + 0xc);
        piVar36 = piVar8 + 4;
        *(uint *)(param_1 + 0x24) = uVar30;
        iVar63 = (int)local_d8;
        if (iVar62 - 6U < 2) {
          uVar16 = 0;
          uVar25 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar25) {
            uVar25 = 0xfff;
          }
          lVar47 = *(long *)(param_1 + 8);
          uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar14 = ~uVar39;
          uVar40 = iVar63 - (int)lVar47;
          uVar30 = 0;
          if (uVar14 <= uVar40) {
            uVar30 = uVar40 - uVar14;
          }
          iVar62 = *(int *)(param_1 + 0x18);
          uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar10 = uVar40 - uVar2;
          if (uVar40 - *(uint *)(param_1 + 0x1c) <= uVar2 || *(int *)(param_1 + 0x20) != 0) {
            uVar10 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          bVar5 = iVar55 != 0;
          uVar12 = (ulong)bVar5;
          puVar27 = (ulong *)((long)local_d8 + 4);
          lVar46 = *(long *)(param_1 + 0x30);
          uVar2 = *(uint *)(param_1 + 0xc4);
          uVar19 = *local_d8 * -0x30e4432340650000 >>
                   ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
          uVar6 = *(uint *)(lVar46 + uVar19 * 4);
          lVar37 = *(long *)(param_1 + 0x40);
          puVar31 = (uint *)(lVar37 + (ulong)((uVar40 & (uVar39 ^ 0xffffffff)) << 1) * 4);
          puVar34 = puVar31 + 1;
          iVar55 = uVar40 + 9;
          uVar13 = 3;
          if (bVar5) {
            uVar13 = 4;
          }
          uVar52 = uVar23;
          do {
            if (uVar12 == 3) {
              uVar39 = *piVar36 - 1;
              uVar21 = *piVar36 - 2;
            }
            else {
              uVar39 = piVar36[uVar12];
              uVar21 = uVar39 - 1;
            }
            if ((uVar21 < uVar40 - iVar62) &&
               ((uint)*local_d8 == *(uint *)((long)local_d8 - (ulong)uVar39))) {
              lVar26 = -(ulong)uVar39;
              puVar41 = (ulong *)((long)puVar27 + lVar26);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  iVar63 = 0;
                  puVar28 = local_170;
                  puVar41 = (ulong *)((long)puVar11 + lVar26 + uVar49 + 0xc);
                  do {
                    if (local_b8 <= puVar28) goto joined_r0x0001006eab88;
                    uVar32 = *puVar41;
                    uVar50 = *puVar28;
                    iVar63 = iVar63 + 8;
                    puVar28 = puVar28 + 1;
                    puVar41 = puVar41 + 1;
                  } while (uVar32 == uVar50);
                  uVar50 = uVar50 ^ uVar32;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = iVar63 + (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
                else {
                  uVar50 = *puVar27 ^ *puVar41;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006eab88:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                iVar63 = (int)puVar28 - (int)puVar27;
              }
              uVar39 = iVar63 + 4;
              uVar50 = (ulong)uVar39;
              if (uVar52 < uVar50) {
                local_c8[uVar16 * 2] = (int)uVar12 - (uint)bVar5;
                (local_c8 + uVar16 * 2)[1] = uVar39;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                if ((uVar25 < uVar39) ||
                   (uVar52 = uVar50, (ulong *)((long)local_d8 + uVar50) == puVar42))
                goto LAB_1006ebc68;
              }
            }
            uVar21 = (uint)uVar16;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
          *(uint *)(lVar46 + uVar19 * 4) = uVar40;
          if (uVar10 <= uVar6) {
            uVar13 = 0;
            uVar12 = 0;
            uVar25 = ~(-1 << (ulong)(uVar2 & 0x1f));
            local_170 = (ulong *)(lVar47 + 8);
            iVar62 = iVar55;
            do {
              uVar19 = uVar13;
              if (uVar12 <= uVar13) {
                uVar19 = uVar12;
              }
              uVar50 = (ulong)uVar6;
              puVar41 = (ulong *)(lVar47 + uVar50 + uVar19);
              puVar27 = (ulong *)((long)local_d8 + uVar19);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  lVar46 = 0;
                  do {
                    puVar41 = (ulong *)((long)puVar11 + lVar46 + uVar19 + uVar49 + 8);
                    if (local_b8 <= puVar41) {
                      puVar41 = (ulong *)((long)local_170 + lVar46 + uVar19 + uVar50);
                      puVar28 = (ulong *)((long)puVar11 + lVar46 + uVar19 + uVar49 + 8);
                      goto joined_r0x0001006eac88;
                    }
                    uVar32 = *(ulong *)((long)local_170 + lVar46 + uVar19 + uVar50);
                    uVar54 = *puVar41;
                    lVar46 = lVar46 + 8;
                  } while (uVar32 == uVar54);
                  uVar54 = uVar54 ^ uVar32;
                  uVar32 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar46 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar27 ^ *puVar41;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
                uVar32 = uVar32 + uVar19;
              }
              else {
joined_r0x0001006eac88:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                uVar32 = (long)puVar28 + (uVar19 - (long)puVar27);
              }
              iVar55 = iVar62;
              if (uVar52 < uVar32) {
                iVar55 = uVar6 + (int)uVar32;
                if (uVar32 <= iVar62 - uVar6) {
                  iVar55 = iVar62;
                }
                local_c8[uVar16 * 2] = (uVar40 + 2) - uVar6;
                (local_c8 + uVar16 * 2)[1] = (int)uVar32;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                uVar52 = uVar32;
                if (0x1000 < uVar32 || (ulong *)((long)local_d8 + uVar32) == puVar42) break;
              }
              uVar21 = (uint)uVar16;
              puVar17 = (uint *)(lVar37 + (ulong)((uVar6 & uVar14) << 1) * 4);
              if (*(byte *)(lVar47 + uVar50 + uVar32) < *(byte *)((long)local_d8 + uVar32)) {
                *puVar31 = uVar6;
                puVar44 = puVar34;
                if (uVar6 <= uVar30) goto LAB_1006ebc54;
                puVar31 = puVar17 + 1;
                uVar13 = uVar32;
                puVar17 = puVar31;
              }
              else {
                *puVar34 = uVar6;
                uVar12 = uVar32;
                puVar34 = puVar17;
                if (uVar6 <= uVar30) goto LAB_1006ebc4c;
              }
              bVar5 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if ((bVar5) || (uVar6 = *puVar17, iVar62 = iVar55, uVar6 < uVar10)) break;
            } while( true );
          }
          goto LAB_1006ebc58;
        }
        if (iVar62 == 5) {
          uVar16 = 0;
          uVar25 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar25) {
            uVar25 = 0xfff;
          }
          lVar47 = *(long *)(param_1 + 8);
          uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar14 = ~uVar39;
          uVar40 = iVar63 - (int)lVar47;
          uVar30 = 0;
          if (uVar14 <= uVar40) {
            uVar30 = uVar40 - uVar14;
          }
          iVar62 = *(int *)(param_1 + 0x18);
          uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar10 = uVar40 - uVar2;
          if (uVar40 - *(uint *)(param_1 + 0x1c) <= uVar2 || *(int *)(param_1 + 0x20) != 0) {
            uVar10 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          bVar5 = iVar55 != 0;
          uVar12 = (ulong)bVar5;
          puVar27 = (ulong *)((long)local_d8 + 4);
          lVar46 = *(long *)(param_1 + 0x30);
          uVar2 = *(uint *)(param_1 + 0xc4);
          uVar19 = *local_d8 * -0x30e4432345000000 >>
                   ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
          uVar6 = *(uint *)(lVar46 + uVar19 * 4);
          lVar37 = *(long *)(param_1 + 0x40);
          puVar31 = (uint *)(lVar37 + (ulong)((uVar40 & (uVar39 ^ 0xffffffff)) << 1) * 4);
          iVar55 = uVar40 + 9;
          uVar13 = 3;
          if (bVar5) {
            uVar13 = 4;
          }
          uVar52 = uVar23;
          do {
            if (uVar12 == 3) {
              uVar39 = *piVar36 - 1;
              uVar21 = *piVar36 - 2;
            }
            else {
              uVar39 = piVar36[uVar12];
              uVar21 = uVar39 - 1;
            }
            if ((uVar21 < uVar40 - iVar62) &&
               ((uint)*local_d8 == *(uint *)((long)local_d8 - (ulong)uVar39))) {
              lVar26 = -(ulong)uVar39;
              puVar41 = (ulong *)((long)puVar27 + lVar26);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  iVar63 = 0;
                  puVar28 = local_170;
                  puVar41 = (ulong *)((long)puVar11 + lVar26 + uVar49 + 0xc);
                  do {
                    if (local_b8 <= puVar28) goto joined_r0x0001006eaff8;
                    uVar32 = *puVar41;
                    uVar50 = *puVar28;
                    iVar63 = iVar63 + 8;
                    puVar28 = puVar28 + 1;
                    puVar41 = puVar41 + 1;
                  } while (uVar32 == uVar50);
                  uVar50 = uVar50 ^ uVar32;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = iVar63 + (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
                else {
                  uVar50 = *puVar27 ^ *puVar41;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006eaff8:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                iVar63 = (int)puVar28 - (int)puVar27;
              }
              uVar39 = iVar63 + 4;
              uVar50 = (ulong)uVar39;
              if (uVar52 < uVar50) {
                local_c8[uVar16 * 2] = (int)uVar12 - (uint)bVar5;
                (local_c8 + uVar16 * 2)[1] = uVar39;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                if ((uVar25 < uVar39) ||
                   (uVar52 = uVar50, (ulong *)((long)local_d8 + uVar50) == puVar42))
                goto LAB_1006ebc68;
              }
            }
            uVar21 = (uint)uVar16;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
          *(uint *)(lVar46 + uVar19 * 4) = uVar40;
          puVar34 = puVar31 + 1;
          if (uVar10 <= uVar6) {
            uVar13 = 0;
            uVar12 = 0;
            uVar25 = ~(-1 << (ulong)(uVar2 & 0x1f));
            local_170 = (ulong *)(lVar47 + 8);
            puVar44 = puVar31 + 1;
            iVar62 = iVar55;
            do {
              uVar19 = uVar13;
              if (uVar12 <= uVar13) {
                uVar19 = uVar12;
              }
              uVar50 = (ulong)uVar6;
              puVar41 = (ulong *)(lVar47 + uVar50 + uVar19);
              puVar27 = (ulong *)((long)local_d8 + uVar19);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  lVar46 = 0;
                  do {
                    puVar41 = (ulong *)((long)puVar11 + lVar46 + uVar19 + uVar49 + 8);
                    if (local_b8 <= puVar41) {
                      puVar41 = (ulong *)((long)local_170 + lVar46 + uVar19 + uVar50);
                      puVar28 = (ulong *)((long)puVar11 + lVar46 + uVar19 + uVar49 + 8);
                      goto joined_r0x0001006eb578;
                    }
                    uVar32 = *(ulong *)((long)local_170 + lVar46 + uVar19 + uVar50);
                    uVar54 = *puVar41;
                    lVar46 = lVar46 + 8;
                  } while (uVar32 == uVar54);
                  uVar54 = uVar54 ^ uVar32;
                  uVar32 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar46 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar27 ^ *puVar41;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
                uVar32 = uVar32 + uVar19;
              }
              else {
joined_r0x0001006eb578:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                uVar32 = (long)puVar28 + (uVar19 - (long)puVar27);
              }
              iVar55 = iVar62;
              if (uVar52 < uVar32) {
                iVar55 = uVar6 + (int)uVar32;
                if (uVar32 <= iVar62 - uVar6) {
                  iVar55 = iVar62;
                }
                local_c8[uVar16 * 2] = (uVar40 + 2) - uVar6;
                (local_c8 + uVar16 * 2)[1] = (int)uVar32;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                uVar52 = uVar32;
                puVar34 = puVar44;
                if (0x1000 < uVar32 || (ulong *)((long)local_d8 + uVar32) == puVar42) break;
              }
              uVar21 = (uint)uVar16;
              puVar34 = (uint *)(lVar37 + (ulong)((uVar6 & uVar14) << 1) * 4);
              if (*(byte *)(lVar47 + uVar50 + uVar32) < *(byte *)((long)local_d8 + uVar32)) {
                *puVar31 = uVar6;
                if (uVar6 <= uVar30) goto LAB_1006ebc54;
                puVar31 = puVar34 + 1;
                uVar13 = uVar32;
                puVar34 = puVar44;
                puVar17 = puVar31;
              }
              else {
                *puVar44 = uVar6;
                uVar12 = uVar32;
                puVar17 = puVar34;
                if (uVar6 <= uVar30) goto LAB_1006ebc4c;
              }
              bVar5 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if ((bVar5) || (uVar6 = *puVar17, puVar44 = puVar34, iVar62 = iVar55, uVar6 < uVar10))
              break;
            } while( true );
          }
          goto LAB_1006ebc58;
        }
        if (iVar62 != 3) {
          uVar16 = 0;
          uVar25 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar25) {
            uVar25 = 0xfff;
          }
          lVar47 = *(long *)(param_1 + 8);
          uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar14 = ~uVar39;
          uVar40 = iVar63 - (int)lVar47;
          uVar30 = 0;
          if (uVar14 <= uVar40) {
            uVar30 = uVar40 - uVar14;
          }
          iVar62 = *(int *)(param_1 + 0x18);
          uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar10 = uVar40 - uVar2;
          if (uVar40 - *(uint *)(param_1 + 0x1c) <= uVar2 || *(int *)(param_1 + 0x20) != 0) {
            uVar10 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          bVar5 = iVar55 != 0;
          uVar12 = (ulong)bVar5;
          puVar27 = (ulong *)((long)local_d8 + 4);
          lVar46 = *(long *)(param_1 + 0x30);
          uVar2 = *(uint *)(param_1 + 0xc4);
          uVar3 = (uint)*local_d8 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar6 = *(uint *)(lVar46 + (ulong)uVar3 * 4);
          lVar37 = *(long *)(param_1 + 0x40);
          puVar31 = (uint *)(lVar37 + (ulong)((uVar40 & (uVar39 ^ 0xffffffff)) << 1) * 4);
          iVar55 = uVar40 + 9;
          uVar13 = 3;
          if (bVar5) {
            uVar13 = 4;
          }
          uVar19 = uVar23;
          do {
            if (uVar12 == 3) {
              uVar39 = *piVar36 - 1;
              uVar21 = *piVar36 - 2;
            }
            else {
              uVar39 = piVar36[uVar12];
              uVar21 = uVar39 - 1;
            }
            if ((uVar21 < uVar40 - iVar62) &&
               ((uint)*local_d8 == *(uint *)((long)local_d8 - (ulong)uVar39))) {
              lVar26 = -(ulong)uVar39;
              puVar41 = (ulong *)((long)puVar27 + lVar26);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  iVar63 = 0;
                  puVar28 = local_170;
                  puVar41 = (ulong *)((long)puVar11 + lVar26 + uVar49 + 0xc);
                  do {
                    if (local_b8 <= puVar28) goto joined_r0x0001006eb2e0;
                    uVar50 = *puVar41;
                    uVar52 = *puVar28;
                    iVar63 = iVar63 + 8;
                    puVar28 = puVar28 + 1;
                    puVar41 = puVar41 + 1;
                  } while (uVar50 == uVar52);
                  uVar52 = uVar52 ^ uVar50;
                  uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                  uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                  uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                  uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = iVar63 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
                }
                else {
                  uVar52 = *puVar27 ^ *puVar41;
                  uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                  uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                  uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                  uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10
                  ;
                  iVar63 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006eb2e0:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                iVar63 = (int)puVar28 - (int)puVar27;
              }
              uVar39 = iVar63 + 4;
              uVar52 = (ulong)uVar39;
              if (uVar19 < uVar52) {
                local_c8[uVar16 * 2] = (int)uVar12 - (uint)bVar5;
                (local_c8 + uVar16 * 2)[1] = uVar39;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                if ((uVar25 < uVar39) ||
                   (uVar19 = uVar52, (ulong *)((long)local_d8 + uVar52) == puVar42))
                goto LAB_1006ebc68;
              }
            }
            uVar21 = (uint)uVar16;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
          *(uint *)(lVar46 + (ulong)uVar3 * 4) = uVar40;
          puVar34 = puVar31 + 1;
          if (uVar10 <= uVar6) {
            uVar13 = 0;
            uVar12 = 0;
            uVar25 = ~(-1 << (ulong)(uVar2 & 0x1f));
            local_170 = (ulong *)(lVar47 + 8);
            puVar17 = puVar31 + 1;
            do {
              uVar52 = uVar13;
              if (uVar12 <= uVar13) {
                uVar52 = uVar12;
              }
              uVar50 = (ulong)uVar6;
              puVar41 = (ulong *)(lVar47 + uVar50 + uVar52);
              puVar27 = (ulong *)((long)local_d8 + uVar52);
              puVar28 = puVar27;
              if (puVar27 < local_b8) {
                if (*puVar41 == *puVar27) {
                  lVar46 = 0;
                  do {
                    puVar41 = (ulong *)((long)puVar11 + lVar46 + uVar52 + uVar49 + 8);
                    if (local_b8 <= puVar41) {
                      puVar41 = (ulong *)((long)local_170 + lVar46 + uVar52 + uVar50);
                      puVar28 = (ulong *)((long)puVar11 + lVar46 + uVar52 + uVar49 + 8);
                      goto joined_r0x0001006eb864;
                    }
                    uVar32 = *(ulong *)((long)local_170 + lVar46 + uVar52 + uVar50);
                    uVar54 = *puVar41;
                    lVar46 = lVar46 + 8;
                  } while (uVar32 == uVar54);
                  uVar54 = uVar54 ^ uVar32;
                  uVar32 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar46 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar27 ^ *puVar41;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
                uVar32 = uVar32 + uVar52;
              }
              else {
joined_r0x0001006eb864:
                if (puVar28 < local_e0) {
                  if (*(uint *)puVar41 == *(uint *)puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar41 = (ulong *)((long)puVar41 + 4);
                  }
                }
                if (puVar28 < local_e8) {
                  if ((short)*puVar41 == (short)*puVar28) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar41 = (ulong *)((long)puVar41 + 2);
                  }
                }
                if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
                  puVar28 = (ulong *)((long)puVar28 + 1);
                }
                uVar32 = (long)puVar28 + (uVar52 - (long)puVar27);
              }
              if (uVar19 < uVar32) {
                iVar62 = uVar6 + (int)uVar32;
                if (uVar32 <= iVar55 - uVar6) {
                  iVar62 = iVar55;
                }
                local_c8[uVar16 * 2] = (uVar40 + 2) - uVar6;
                (local_c8 + uVar16 * 2)[1] = (int)uVar32;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                uVar19 = uVar32;
                puVar34 = puVar17;
                iVar55 = iVar62;
                if (0x1000 < uVar32 || (ulong *)((long)local_d8 + uVar32) == puVar42) break;
              }
              uVar21 = (uint)uVar16;
              puVar34 = (uint *)(lVar37 + (ulong)((uVar6 & uVar14) << 1) * 4);
              if (*(byte *)(lVar47 + uVar50 + uVar32) < *(byte *)((long)local_d8 + uVar32)) {
                *puVar31 = uVar6;
                if (uVar6 <= uVar30) {
                  puVar31 = (uint *)local_a4;
                  *puVar17 = 0;
                  goto LAB_1006ebc5c;
                }
                puVar31 = puVar34 + 1;
                uVar13 = uVar32;
                puVar34 = puVar17;
                puVar17 = puVar31;
              }
              else {
                *puVar17 = uVar6;
                uVar12 = uVar32;
                puVar17 = puVar34;
                if (uVar6 <= uVar30) {
                  local_a4 = (undefined1  [4])0x0;
                  goto LAB_1006ebc5c;
                }
              }
              bVar5 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if ((bVar5) || (uVar6 = *puVar17, puVar17 = puVar34, uVar6 < uVar10)) break;
            } while( true );
          }
          *puVar34 = 0;
          goto LAB_1006ebc5c;
        }
        uVar16 = 0;
        uVar25 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar25) {
          uVar25 = 0xfff;
        }
        lVar47 = *(long *)(param_1 + 8);
        uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar14 = ~uVar39;
        uVar40 = iVar63 - (int)lVar47;
        uVar30 = 0;
        if (uVar14 <= uVar40) {
          uVar30 = uVar40 - uVar14;
        }
        iVar62 = *(int *)(param_1 + 0x18);
        uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar10 = uVar40 - uVar2;
        if (uVar40 - *(uint *)(param_1 + 0x1c) <= uVar2 || *(int *)(param_1 + 0x20) != 0) {
          uVar10 = *(uint *)(param_1 + 0x1c);
        }
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        bVar5 = iVar55 != 0;
        uVar12 = (ulong)bVar5;
        puVar41 = (ulong *)((long)local_d8 + 3);
        lVar37 = *(long *)(param_1 + 0x30);
        uVar2 = *(uint *)(param_1 + 0xc4);
        uVar3 = (uint)*local_d8 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
        uVar6 = *(uint *)(lVar37 + (ulong)uVar3 * 4);
        lVar46 = *(long *)(param_1 + 0x40);
        puVar27 = (ulong *)(lVar46 + (ulong)((uVar40 & (uVar39 ^ 0xffffffff)) << 1) * 4);
        local_170 = (ulong *)((long)puVar27 + 4);
        iVar55 = uVar40 + 9;
        uVar13 = 3;
        if (bVar5) {
          uVar13 = 4;
        }
        uVar19 = uVar23;
        do {
          if (uVar12 == 3) {
            uVar39 = *piVar36 - 1;
            uVar21 = *piVar36 - 2;
          }
          else {
            uVar39 = piVar36[uVar12];
            uVar21 = uVar39 - 1;
          }
          if ((uVar21 < uVar40 - iVar62) &&
             (((*(uint *)((long)local_d8 - (ulong)uVar39) ^ (uint)*local_d8) & 0xffffff) == 0)) {
            lVar26 = -(ulong)uVar39;
            puVar28 = (ulong *)((long)puVar41 + lVar26);
            puVar9 = puVar41;
            if (puVar41 < local_b8) {
              if (*puVar28 == *puVar41) {
                iVar63 = 0;
                puVar28 = (ulong *)((long)puVar11 + lVar26 + uVar49 + 0xb);
                puVar9 = (ulong *)((long)puVar11 + uVar49 + 0xb);
                do {
                  if (local_b8 <= puVar9) goto joined_r0x0001006ea878;
                  uVar50 = *puVar28;
                  uVar52 = *puVar9;
                  iVar63 = iVar63 + 8;
                  puVar28 = puVar28 + 1;
                  puVar9 = puVar9 + 1;
                } while (uVar50 == uVar52);
                uVar52 = uVar52 ^ uVar50;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar63 = iVar63 + (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
              else {
                uVar52 = *puVar41 ^ *puVar28;
                uVar52 = (uVar52 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar52 & 0x5555555555555555) << 1;
                uVar52 = (uVar52 & 0xcccccccccccccccc) >> 2 | (uVar52 & 0x3333333333333333) << 2;
                uVar52 = (uVar52 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar52 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar52 = (uVar52 & 0xff00ff00ff00ff00) >> 8 | (uVar52 & 0xff00ff00ff00ff) << 8;
                uVar52 = (uVar52 & 0xffff0000ffff0000) >> 0x10 | (uVar52 & 0xffff0000ffff) << 0x10;
                iVar63 = (int)((ulong)LZCOUNT(uVar52 >> 0x20 | uVar52 << 0x20) >> 3);
              }
            }
            else {
joined_r0x0001006ea878:
              if (puVar9 < local_e0) {
                if (*(uint *)puVar28 == *(uint *)puVar9) {
                  puVar28 = (ulong *)((long)puVar28 + 4);
                  puVar9 = (ulong *)((long)puVar9 + 4);
                }
              }
              if (puVar9 < local_e8) {
                if ((short)*puVar28 == (short)*puVar9) {
                  puVar28 = (ulong *)((long)puVar28 + 2);
                  puVar9 = (ulong *)((long)puVar9 + 2);
                }
              }
              if ((puVar9 < puVar42) && ((char)*puVar28 == (char)*puVar9)) {
                puVar9 = (ulong *)((long)puVar9 + 1);
              }
              iVar63 = (int)puVar9 - (int)puVar41;
            }
            uVar39 = iVar63 + 3;
            uVar52 = (ulong)uVar39;
            if (uVar19 < uVar52) {
              local_c8[uVar16 * 2] = (int)uVar12 - (uint)bVar5;
              (local_c8 + uVar16 * 2)[1] = uVar39;
              uVar21 = (int)uVar16 + 1;
              uVar16 = (ulong)uVar21;
              if ((uVar25 < uVar39) ||
                 (uVar19 = uVar52, (ulong *)((long)local_d8 + uVar52) == puVar42))
              goto joined_r0x0001006eb72c;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar13);
        if (uVar19 < 3) {
          lVar26 = *(long *)(param_1 + 0x38);
          uVar12 = *local_d8;
          uVar39 = 0x20 - *(int *)(param_1 + 0x28);
          if (uVar33 < uVar40) {
            uVar13 = (ulong)uVar33;
            do {
              *(int *)(lVar26 + (ulong)((uint)(*(int *)(lVar47 + uVar13) * 0x35a7bd00) >>
                                       (ulong)(uVar39 & 0x1f)) * 4) = (int)uVar13;
              uVar13 = uVar13 + 1;
            } while ((uint)(iVar56 - (int)lVar47) != uVar13);
          }
          uVar39 = *(uint *)(lVar26 + (ulong)((uint)uVar12 * 0x35a7bd00 >> (ulong)(uVar39 & 0x1f)) *
                                      4);
          uVar33 = uVar40;
          if (uVar39 < uVar10 || uVar40 - uVar39 >> 0x12 != 0) goto LAB_1006eb73c;
          puVar41 = (ulong *)(lVar47 + (ulong)uVar39);
          puVar28 = local_d8;
          if (local_d8 < local_b8) {
            if (*puVar41 == *local_d8) {
              lVar26 = 0;
              puVar41 = (ulong *)(lVar47 + (ulong)uVar39);
              puVar28 = (ulong *)((long)puVar11 + uVar49 + 8);
              do {
                puVar41 = puVar41 + 1;
                if (local_b8 <= puVar28) goto LAB_1006ebfd4;
                uVar12 = *puVar28;
                lVar26 = lVar26 + 8;
                puVar28 = puVar28 + 1;
              } while (*puVar41 == uVar12);
              uVar12 = uVar12 ^ *puVar41;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar26 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
            }
            else {
              uVar12 = *local_d8 ^ *puVar41;
              uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              uVar12 = (ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3;
            }
          }
          else {
LAB_1006ebfd4:
            if (puVar28 < local_e0) {
              if ((uint)*puVar41 == (uint)*puVar28) {
                puVar28 = (ulong *)((long)puVar28 + 4);
                puVar41 = (ulong *)((long)puVar41 + 4);
              }
            }
            if (puVar28 < local_e8) {
              if (*(short *)puVar41 == *(short *)puVar28) {
                puVar28 = (ulong *)((long)puVar28 + 2);
                puVar41 = (ulong *)((long)puVar41 + 2);
              }
            }
            if ((puVar28 < puVar42) && ((char)*puVar41 == (char)*puVar28)) {
              puVar28 = (ulong *)((long)puVar28 + 1);
            }
            uVar12 = (long)puVar28 - (long)local_d8;
          }
          if (uVar12 < 3) goto LAB_1006eb73c;
          *local_c8 = (uVar40 - uVar39) + 2;
          local_c8[1] = (int)uVar12;
          if (uVar12 <= uVar25 && (ulong *)((long)local_d8 + uVar12) != puVar42) {
            uVar16 = 1;
            uVar19 = uVar12;
            goto LAB_1006eb73c;
          }
          *(uint *)(param_1 + 0x24) = uVar40 + 1;
          uVar21 = 1;
        }
        else {
LAB_1006eb73c:
          uVar21 = (uint)uVar16;
          *(uint *)(lVar37 + (ulong)uVar3 * 4) = uVar40;
          if (uVar10 <= uVar6) {
            uVar13 = 0;
            uVar12 = 0;
            uVar25 = ~(-1 << (ulong)(uVar2 & 0x1f));
            iVar62 = iVar55;
            do {
              uVar52 = uVar13;
              if (uVar12 <= uVar13) {
                uVar52 = uVar12;
              }
              uVar50 = (ulong)uVar6;
              puVar28 = (ulong *)(lVar47 + uVar50 + uVar52);
              puVar41 = (ulong *)((long)local_d8 + uVar52);
              puVar9 = puVar41;
              if (puVar41 < local_b8) {
                if (*puVar28 == *puVar41) {
                  lVar37 = 0;
                  do {
                    puVar28 = (ulong *)((long)puVar11 + lVar37 + uVar52 + uVar49 + 8);
                    if (local_b8 <= puVar28) {
                      puVar28 = (ulong *)(lVar47 + 8 + uVar52 + uVar50 + lVar37);
                      puVar9 = (ulong *)((long)puVar11 + lVar37 + uVar52 + uVar49 + 8);
                      goto joined_r0x0001006ebabc;
                    }
                    uVar54 = *(ulong *)(lVar47 + 8 + uVar52 + uVar50 + lVar37);
                    uVar32 = *puVar28;
                    lVar37 = lVar37 + 8;
                  } while (uVar54 == uVar32);
                  uVar32 = uVar32 ^ uVar54;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = lVar37 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                }
                else {
                  uVar32 = *puVar41 ^ *puVar28;
                  uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar32 = (ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3;
                }
              }
              else {
joined_r0x0001006ebabc:
                if (puVar9 < local_e0) {
                  if (*(uint *)puVar28 == *(uint *)puVar9) {
                    puVar9 = (ulong *)((long)puVar9 + 4);
                    puVar28 = (ulong *)((long)puVar28 + 4);
                  }
                }
                if (puVar9 < local_e8) {
                  if ((short)*puVar28 == (short)*puVar9) {
                    puVar9 = (ulong *)((long)puVar9 + 2);
                    puVar28 = (ulong *)((long)puVar28 + 2);
                  }
                }
                if ((puVar9 < puVar42) && ((char)*puVar28 == (char)*puVar9)) {
                  puVar9 = (ulong *)((long)puVar9 + 1);
                }
                uVar32 = (long)puVar9 - (long)puVar41;
              }
              uVar32 = uVar32 + uVar52;
              iVar55 = iVar62;
              if (uVar19 < uVar32) {
                iVar55 = uVar6 + (int)uVar32;
                if (uVar32 <= iVar62 - uVar6) {
                  iVar55 = iVar62;
                }
                local_c8[uVar16 * 2] = (uVar40 + 2) - uVar6;
                (local_c8 + uVar16 * 2)[1] = (int)uVar32;
                uVar21 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar21;
                uVar19 = uVar32;
                if (0x1000 < uVar32 || (ulong *)((long)local_d8 + uVar32) == puVar42) break;
              }
              uVar21 = (uint)uVar16;
              puVar41 = (ulong *)(lVar46 + (ulong)((uVar6 & uVar14) << 1) * 4);
              if (*(byte *)(lVar47 + uVar50 + uVar32) < *(byte *)((long)local_d8 + uVar32)) {
                *(uint *)puVar27 = uVar6;
                if (uVar6 <= uVar30) {
                  puVar27 = (ulong *)local_a4;
                  break;
                }
                puVar27 = (ulong *)((long)puVar41 + 4);
                uVar13 = uVar32;
                puVar41 = puVar27;
              }
              else {
                *(uint *)local_170 = uVar6;
                uVar12 = uVar32;
                local_170 = puVar41;
                if (uVar6 <= uVar30) {
                  local_170 = (ulong *)local_a4;
                  break;
                }
              }
              bVar5 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if ((bVar5) || (uVar6 = (uint)*puVar41, iVar62 = iVar55, uVar6 < uVar10)) break;
            } while( true );
          }
          *(uint *)local_170 = 0;
          *(uint *)puVar27 = 0;
          *(int *)(param_1 + 0x24) = iVar55 + -8;
joined_r0x0001006eb72c:
          if (uVar21 == 0) goto LAB_1006ea278;
        }
        goto LAB_1006ebc7c;
      }
    }
LAB_1006ec0c8:
    piVar36 = piVar1 + (ulong)uVar29 * 7;
    local_128 = *piVar36;
    iVar55 = piVar36[1];
    uVar25 = piVar36[2];
    uVar7 = piVar36[3];
    local_90 = *(undefined8 *)(piVar36 + 4);
    local_88 = piVar36[6];
    puVar42 = puVar27;
    uVar35 = 0;
    if (uVar7 + uVar25 <= uVar29) {
      uVar35 = uVar29 - (uVar7 + uVar25);
    }
  }
LAB_1006ec0f0:
  uVar29 = uVar35 + 1;
  piVar36 = piVar1 + (ulong)uVar29 * 7;
  *piVar36 = local_128;
  piVar36[1] = iVar55;
  piVar36[2] = uVar25;
  piVar36[3] = uVar7;
  *(undefined8 *)(piVar36 + 4) = local_90;
  piVar36[6] = local_88;
  uVar25 = uVar35;
  if (uVar35 == 0) {
    uVar7 = 1;
LAB_1006ec1ec:
    uVar25 = (uint)local_a0;
    uVar35 = local_a0._4_4_;
    do {
      while( true ) {
        iVar56 = piVar1[(ulong)uVar7 * 7 + 2];
        uVar30 = piVar1[(ulong)uVar7 * 7 + 3];
        uVar49 = (ulong)uVar30;
        if (iVar56 == 0) break;
        uVar39 = piVar1[(ulong)uVar7 * 7 + 1];
        if (uVar39 < 3) {
          uVar14 = uVar39;
          if (uVar30 == 0) {
            uVar14 = uVar39 + 1;
          }
          if (uVar14 != 0) {
            if (uVar14 == 3) {
              uVar40 = uVar25 - 1;
LAB_1006ec288:
              local_98._0_4_ = uVar35;
            }
            else {
              uVar40 = *(uint *)((long)&local_98 + ((ulong)uVar14 - 2) * 4);
              if (uVar14 != 1) goto LAB_1006ec288;
            }
            local_a0 = CONCAT44(uVar25,uVar40);
            uVar35 = uVar25;
            uVar25 = uVar40;
          }
        }
        else {
          local_98._0_4_ = uVar35;
          local_a0 = CONCAT44(uVar25,uVar39 - 2);
          uVar35 = uVar25;
          uVar25 = uVar39 - 2;
        }
        if (*(int *)(param_1 + 0xa8) != 2) {
          if (uVar30 != 0) {
            lVar47 = *(long *)(param_1 + 0x48);
            puVar27 = puVar48;
            uVar16 = uVar49;
            do {
              *(int *)(lVar47 + (ulong)(byte)*puVar27 * 4) =
                   *(int *)(lVar47 + (ulong)(byte)*puVar27 * 4) + 2;
              uVar16 = uVar16 - 1;
              puVar27 = (ulong *)((long)puVar27 + 1);
            } while (uVar16 != 0);
          }
          *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar30 * 2;
        }
        if (uVar30 < 0x40) {
          uVar14 = (uint)(byte)(&DAT_10084fdf4)[uVar49];
        }
        else {
          uVar14 = 0x32 - (int)LZCOUNT(uVar30);
        }
        *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar14 * 4) =
             *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar14 * 4) + 1;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        uVar14 = (uint)LZCOUNT(uVar39 + 1) ^ 0x1f;
        *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar14 * 4) =
             *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar14 * 4) + 1;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
        uVar14 = iVar56 - 3;
        if (uVar14 < 0x80) {
          uVar40 = (uint)(byte)(&DAT_10084ff08)[uVar14];
        }
        else {
          uVar40 = 0x43 - (int)LZCOUNT(uVar14);
        }
        *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar40 * 4) =
             *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar40 * 4) + 1;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        puVar27 = (ulong *)param_2[3];
        puVar43 = (ulong *)((long)puVar48 + uVar49);
        if (puVar15 < puVar43) {
          puVar11 = puVar48;
          puVar41 = puVar27;
          if (puVar48 <= puVar15) {
            puVar41 = (ulong *)((long)puVar27 + ((long)puVar15 - (long)puVar48));
            uVar16 = *puVar48;
            puVar27[1] = puVar48[1];
            *puVar27 = uVar16;
            uVar16 = puVar48[2];
            puVar27[3] = puVar48[3];
            puVar27[2] = uVar16;
            puVar11 = puVar15;
            if (0x20 < (long)puVar15 - (long)puVar48) {
              puVar27 = puVar27 + 4;
              puVar28 = puVar48 + 6;
              do {
                uVar16 = puVar28[-2];
                puVar27[1] = puVar28[-1];
                *puVar27 = uVar16;
                uVar16 = *puVar28;
                puVar27[3] = puVar28[1];
                puVar27[2] = uVar16;
                puVar27 = puVar27 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar27 < puVar41);
            }
          }
          if (puVar11 < puVar43) {
            uVar16 = (long)puVar43 - (long)puVar11;
            if ((7 < uVar16) && (0x3f < (ulong)((long)puVar41 - (long)puVar11))) {
              if (uVar16 < 0x40) {
                uVar13 = 0;
              }
              else {
                uVar13 = uVar16 & 0xffffffffffffffc0;
                puVar27 = puVar41 + 4;
                puVar28 = puVar11 + 4;
                uVar12 = uVar13;
                do {
                  uVar19 = puVar28[-4];
                  uVar50 = puVar28[-1];
                  uVar52 = puVar28[-2];
                  uVar54 = puVar28[1];
                  uVar32 = *puVar28;
                  uVar69 = puVar28[3];
                  uVar38 = puVar28[2];
                  puVar27[-3] = puVar28[-3];
                  puVar27[-4] = uVar19;
                  puVar27[-1] = uVar50;
                  puVar27[-2] = uVar52;
                  puVar27[1] = uVar54;
                  *puVar27 = uVar32;
                  puVar27[3] = uVar69;
                  puVar27[2] = uVar38;
                  uVar12 = uVar12 - 0x40;
                  puVar27 = puVar27 + 8;
                  puVar28 = puVar28 + 8;
                } while (uVar12 != 0);
                if (uVar16 == uVar13) goto LAB_1006ec534;
                if ((uVar16 & 0x38) == 0) {
                  puVar11 = (ulong *)((long)puVar11 + uVar13);
                  puVar41 = (ulong *)((long)puVar41 + uVar13);
                  goto LAB_1006ec524;
                }
              }
              uVar12 = uVar16 & 0xfffffffffffffff8;
              lVar47 = uVar13 - uVar12;
              puVar24 = (undefined8 *)((long)puVar11 + uVar13);
              puVar45 = (undefined8 *)((long)puVar41 + uVar13);
              do {
                *puVar45 = *puVar24;
                lVar47 = lVar47 + 8;
                puVar24 = puVar24 + 1;
                puVar45 = puVar45 + 1;
              } while (lVar47 != 0);
              puVar41 = (ulong *)((long)puVar41 + uVar12);
              puVar11 = (ulong *)((long)puVar11 + uVar12);
              if (uVar16 == uVar12) goto LAB_1006ec534;
            }
LAB_1006ec524:
            do {
              puVar27 = (ulong *)((long)puVar11 + 1);
              *(char *)puVar41 = (char)*puVar11;
              puVar41 = (ulong *)((long)puVar41 + 1);
              puVar11 = puVar27;
            } while (puVar27 != puVar43);
          }
LAB_1006ec534:
          param_2[3] = param_2[3] + uVar49;
          piVar36 = (int *)param_2[1];
          if (0xffff < uVar30) {
            *(undefined4 *)(param_2 + 9) = 1;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
          }
        }
        else {
          uVar16 = *puVar48;
          puVar27[1] = puVar48[1];
          *puVar27 = uVar16;
          if (0x10 < uVar30) {
            lVar47 = param_2[3];
            uVar16 = puVar48[2];
            *(ulong *)(lVar47 + 0x18) = puVar48[3];
            *(ulong *)(lVar47 + 0x10) = uVar16;
            uVar16 = puVar48[4];
            *(ulong *)(lVar47 + 0x28) = puVar48[5];
            *(ulong *)(lVar47 + 0x20) = uVar16;
            if (uVar49 - 0x31 < 0xffffffffffffffdf) {
              puVar27 = (ulong *)(lVar47 + 0x30);
              puVar43 = puVar48 + 8;
              do {
                uVar16 = puVar43[-2];
                puVar27[1] = puVar43[-1];
                *puVar27 = uVar16;
                uVar16 = *puVar43;
                puVar27[3] = puVar43[1];
                puVar27[2] = uVar16;
                puVar27 = puVar27 + 4;
                puVar43 = puVar43 + 4;
              } while (puVar27 < (ulong *)(lVar47 + uVar49));
              goto LAB_1006ec534;
            }
          }
          param_2[3] = param_2[3] + uVar49;
          piVar36 = (int *)param_2[1];
        }
        *(short *)(piVar36 + 1) = (short)uVar30;
        *piVar36 = uVar39 + 1;
        if (0xffff < uVar14) {
          *(undefined4 *)(param_2 + 9) = 2;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
        *(short *)((long)piVar36 + 6) = (short)uVar14;
        param_2[1] = (long)(piVar36 + 2);
        puVar43 = (ulong *)((long)puVar48 + (ulong)(iVar56 + uVar30));
        uVar7 = uVar7 + 1;
        puVar48 = puVar43;
        if (uVar29 < uVar7) goto LAB_1006ec160;
      }
      puVar43 = (ulong *)((long)puVar48 + uVar49);
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar29);
  }
  else {
    do {
      uVar7 = uVar25;
      piVar36 = piVar1 + (ulong)uVar35 * 7;
      iVar56 = piVar36[2];
      iVar55 = piVar36[3];
      piVar8 = piVar1 + (ulong)uVar7 * 7;
      uVar59 = *(undefined8 *)(piVar36 + 2);
      uVar57 = *(undefined8 *)piVar36;
      uVar61 = *(undefined8 *)(piVar36 + 3);
      *(undefined8 *)(piVar8 + 5) = *(undefined8 *)(piVar36 + 5);
      *(undefined8 *)(piVar8 + 3) = uVar61;
      *(undefined8 *)(piVar8 + 2) = uVar59;
      *(undefined8 *)piVar8 = uVar57;
      uVar30 = iVar55 + iVar56;
      bVar5 = uVar30 <= uVar35;
      uVar30 = uVar35 - uVar30;
      uVar35 = 0;
      if (bVar5) {
        uVar35 = uVar30;
      }
      uVar25 = uVar7 - 1;
    } while (bVar5 && uVar30 != 0);
    if (uVar7 <= uVar29) goto LAB_1006ec1ec;
  }
LAB_1006ec160:
  if (*(int *)(param_1 + 0xa8) != 2) {
    iVar56 = *(int *)(param_1 + 0x78) + 1;
    uVar25 = (uint)LZCOUNT(iVar56) ^ 0x1f;
    *(uint *)(param_1 + 0x88) = ((uint)(iVar56 * 0x100) >> (ulong)(uVar25 & 0x1f)) + uVar25 * 0x100;
  }
  iVar56 = *(int *)(param_1 + 0x84) + 1;
  uVar25 = (uint)LZCOUNT(iVar56) ^ 0x1f;
  iVar55 = (int)*(undefined8 *)(param_1 + 0x7c) + 1;
  iVar58 = (int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1;
  uVar29 = (uint)(byte)((byte)LZCOUNT(iVar55) ^ 0x1f);
  uVar35 = (uint)(byte)((byte)LZCOUNT(iVar58) ^ 0x1f);
  uVar57 = NEON_ushl(CONCAT44(iVar58 * 0x100,iVar55 * 0x100),CONCAT44(-uVar35,-uVar29),4);
  *(ulong *)(param_1 + 0x8c) =
       CONCAT44(uVar35 * 0x100 + (int)((ulong)uVar57 >> 0x20),uVar29 * 0x100 + (int)uVar57);
  *(uint *)(param_1 + 0x94) = ((uint)(iVar56 * 0x100) >> (ulong)(uVar25 & 0x1f)) + uVar25 * 0x100;
  puVar27 = puVar42;
  uVar29 = uVar33;
joined_r0x0001006e8a98:
  if (puVar51 <= puVar43) goto LAB_1006ec738;
  goto LAB_1006e8a9c;
LAB_1006ebc4c:
  puVar34 = (uint *)local_a4;
  goto LAB_1006ebc58;
LAB_1006ebc54:
  puVar31 = (uint *)local_a4;
  puVar34 = puVar44;
LAB_1006ebc58:
  *puVar34 = 0;
LAB_1006ebc5c:
  *puVar31 = 0;
  *(int *)(param_1 + 0x24) = iVar55 + -8;
LAB_1006ebc68:
  if (uVar21 != 0) {
LAB_1006ebc7c:
    uVar25 = (local_c8 + (ulong)(uVar21 - 1) * 2)[1];
    if ((uVar53 < uVar25) || (0xfff < uVar25 + uVar29)) {
      if (piVar8[2] == 0) {
        iVar56 = piVar8[3];
      }
      else {
        iVar56 = 0;
      }
      iVar55 = local_c8[(ulong)(uVar21 - 1) * 2];
      uVar35 = 0;
      if (uVar29 - iVar56 < 0x1001) {
        uVar35 = uVar29 - iVar56;
      }
      goto LAB_1006ec0f0;
    }
    uVar16 = 0;
    piVar36 = piVar1 + uVar49 * 7 + 4;
    do {
      puVar31 = (uint *)(local_c8 + uVar16 * 2);
      uVar25 = *puVar31;
      if (uVar25 < 3) {
        uVar30 = uVar25 + (int)local_f0;
        if (uVar30 == 0) {
          iVar55 = *piVar36;
          iVar62 = piVar1[uVar49 * 7 + 5];
          piVar8 = piVar1 + uVar49 * 7 + 6;
        }
        else {
          if (uVar30 == 3) {
            iVar62 = *piVar36;
            iVar55 = iVar62 + -1;
          }
          else {
            iVar55 = piVar36[uVar30];
            iVar62 = *piVar36;
          }
          lVar47 = 8;
          if (uVar30 != 1) {
            lVar47 = 4;
          }
          piVar8 = (int *)((long)piVar36 + lVar47);
        }
      }
      else {
        iVar62 = *piVar36;
        iVar55 = uVar25 - 2;
        piVar8 = piVar1 + uVar49 * 7 + 5;
      }
      uVar30 = uVar20;
      if (uVar16 != 0) {
        uVar30 = puVar31[-1] + 1;
      }
      uVar39 = puVar31[1];
      if (uVar30 <= uVar39) {
        iVar63 = *piVar8;
        uVar40 = (uint)LZCOUNT(uVar25 + 1) ^ 0x1f;
        uVar14 = uVar29 + uVar39;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            uVar10 = (uint)LZCOUNT(uVar39 - 2) ^ 0x1f;
            iVar64 = iVar60 + iVar58 +
                     ((uVar39 - 2) * 0x100 >> (ulong)(uVar10 & 0x1f)) + (uVar10 + uVar40) * 0x100 +
                     0x1000;
            uVar12 = (ulong)(uVar39 + uVar29);
            if (uVar35 < uVar39 + uVar29) goto LAB_1006ebe90;
LAB_1006ebde4:
            if (iVar64 < piVar1[uVar12 * 7]) goto LAB_1006ebd80;
          }
          else {
            uVar10 = uVar39 - 3;
            if (uVar10 < 0x80) {
              uVar10 = (uint)(byte)(&DAT_10084ff08)[uVar10];
            }
            else {
              uVar10 = 0x43 - (int)LZCOUNT(uVar10);
            }
            iVar64 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar40 * 4) + 1;
            uVar2 = (uint)LZCOUNT(iVar64) ^ 0x1f;
            iVar65 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar10 * 4) + 1;
            uVar6 = (uint)LZCOUNT(iVar65) ^ 0x1f;
            iVar64 = iVar60 + iVar58 +
                     (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                      ((uint)(iVar64 * 0x100) >> (ulong)(uVar2 & 0x1f))) -
                     ((uint)(iVar65 * 0x100) >> (ulong)(uVar6 & 0x1f))) +
                     (((uVar40 + *(int *)(&DAT_10084fe34 + (ulong)uVar10 * 4)) - uVar2) - uVar6) *
                     0x100 + 0x33;
            uVar12 = (ulong)(uVar39 + uVar29);
            if (uVar39 + uVar29 <= uVar35) goto LAB_1006ebde4;
LAB_1006ebe90:
            uVar13 = (ulong)uVar35;
            uVar19 = uVar14 - uVar13;
            uVar35 = uVar14;
            if (uVar19 < 4) {
LAB_1006ebef4:
              lVar47 = uVar14 - uVar13;
              piVar8 = local_b0 + uVar13 * 7;
              do {
                *piVar8 = 0x40000000;
                lVar47 = lVar47 + -1;
                piVar8 = piVar8 + 7;
              } while (lVar47 != 0);
            }
            else {
              uVar50 = uVar19 & 0xfffffffffffffffc;
              piVar8 = local_c0 + uVar13 * 7;
              uVar52 = uVar50;
              do {
                piVar8[-7] = 0x40000000;
                *piVar8 = 0x40000000;
                piVar8[7] = 0x40000000;
                piVar8[0xe] = 0x40000000;
                piVar8 = piVar8 + 0x1c;
                uVar52 = uVar52 - 4;
              } while (uVar52 != 0);
              uVar13 = uVar50 + uVar13;
              if (uVar19 != uVar50) goto LAB_1006ebef4;
            }
LAB_1006ebd80:
            piVar8 = piVar1 + uVar12 * 7;
            piVar8[2] = uVar39;
            piVar8[3] = uVar7;
            *piVar8 = iVar64;
            piVar8[1] = uVar25;
            *(ulong *)(piVar8 + 4) = CONCAT44(iVar62,iVar55);
            piVar8[6] = iVar63;
          }
          uVar39 = uVar39 - 1;
          uVar14 = uVar14 - 1;
        } while (uVar30 <= uVar39);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar21);
  }
LAB_1006ea278:
  uVar25 = uVar29 + 1;
  puVar27 = puVar42;
  uVar29 = uVar35;
  if (uVar35 < uVar25) goto LAB_1006ec0c8;
  goto LAB_1006ea288;
LAB_1006ee1e0:
  puVar34 = (uint *)&local_a0;
  goto LAB_1006ee1ec;
LAB_1006ee1e8:
  puVar31 = (uint *)&local_a0;
LAB_1006ee1ec:
  *puVar34 = 0;
LAB_1006ee1f0:
  *puVar31 = 0;
  *(int *)(param_1 + 0x24) = iVar55 + -8;
joined_r0x0001006f077c:
  if (uVar14 == 0) {
LAB_1006ecbac:
    puVar43 = (ulong *)((long)puVar43 + 1);
  }
  else {
LAB_1006ee208:
    piVar1[4] = (int)*local_100;
    piVar1[5] = *(int *)((long)local_100 + 4);
    piVar1[6] = (int)local_100[1];
    piVar1[2] = 0;
    piVar1[3] = local_a8;
    puVar41 = param_4;
    FUN_100705be0(param_4,local_a8,param_1 + 0x48,2);
    puVar43 = local_d8;
    *piVar1 = (int)puVar41;
    uVar53 = (local_c8 + (ulong)(uVar14 - 1) * 2)[1];
    puVar11 = local_100;
    uVar20 = (uint)local_170;
    if (uVar25 < uVar53) {
      uVar35 = local_c8[(ulong)(uVar14 - 1) * 2];
      uVar29 = local_a8;
      uVar33 = 0;
    }
    else {
      lVar47 = lVar22;
      piVar36 = local_b0;
      if (*(int *)(param_1 + 0x98) == 1) {
        iVar56 = 0x100;
      }
      else {
        iVar56 = **(int **)(param_1 + 0x50) + 1;
        uVar53 = (uint)LZCOUNT(iVar56) ^ 0x1f;
        iVar56 = *(int *)(param_1 + 0x8c) -
                 (((uint)(iVar56 * 0x100) >> (ulong)(uVar53 & 0x1f)) + uVar53 * 0x100);
      }
      do {
        *piVar36 = 0x40000000;
        lVar47 = lVar47 + -1;
        piVar36 = piVar36 + 7;
      } while (lVar47 != 0);
      uVar49 = 0;
      puVar27 = local_e0;
      do {
        uVar53 = local_c8[uVar49 * 2];
        uVar29 = (local_c8 + uVar49 * 2)[1];
        if (uVar53 < 3) {
          uVar33 = uVar53 + (int)local_108;
          if (uVar33 == 0) {
            iVar55 = (int)*local_100;
            iVar58 = *(int *)((long)local_100 + 4);
            puVar42 = puVar48;
          }
          else {
            if (uVar33 == 3) {
              iVar58 = (int)*local_100;
              iVar55 = iVar58 + -1;
            }
            else {
              iVar55 = *(int *)((long)local_100 + (ulong)uVar33 * 4);
              iVar58 = (int)*local_100;
            }
            lVar47 = 8;
            if (uVar33 != 1) {
              lVar47 = 4;
            }
            puVar42 = (ulong *)((long)local_100 + lVar47);
          }
        }
        else {
          iVar58 = (int)*local_100;
          iVar55 = uVar53 - 2;
          puVar42 = puVar15;
        }
        if ((uint)puVar27 <= uVar29) {
          uVar16 = *puVar42;
          uVar35 = (uint)LZCOUNT(uVar53 + 1) ^ 0x1f;
          uVar33 = (uint)puVar27 * 0x100 - 0x200;
          do {
            iVar60 = (int)puVar27;
            if (*(int *)(param_1 + 0x98) == 1) {
              uVar7 = (uint)LZCOUNT(iVar60 + -2) ^ 0x1f;
              iVar62 = (uVar33 >> (ulong)(uVar7 & 0x1f)) + (uVar7 + uVar35) * 0x100 + 0x1000;
            }
            else {
              uVar7 = iVar60 - 3;
              if (uVar7 < 0x80) {
                uVar7 = (uint)(byte)(&DAT_10084ff08)[uVar7];
              }
              else {
                uVar7 = 0x43 - (int)LZCOUNT(uVar7);
              }
              iVar62 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar35 * 4) + 1;
              uVar30 = (uint)LZCOUNT(iVar62) ^ 0x1f;
              iVar63 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar7 * 4) + 1;
              uVar39 = (uint)LZCOUNT(iVar63) ^ 0x1f;
              iVar62 = (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                        ((uint)(iVar62 * 0x100) >> (ulong)(uVar30 & 0x1f))) -
                       ((uint)(iVar63 * 0x100) >> (ulong)(uVar39 & 0x1f))) +
                       (((uVar35 + *(int *)(&DAT_10084fe34 + (ulong)uVar7 * 4)) - uVar30) - uVar39)
                       * 0x100 + 0x33;
            }
            piVar36 = piVar1 + ((ulong)puVar27 & 0xffffffff) * 7;
            piVar36[2] = iVar60;
            piVar36[3] = local_a8;
            *piVar36 = iVar56 + (int)puVar41 + iVar62;
            piVar36[1] = uVar53;
            *(ulong *)(piVar36 + 4) = CONCAT44(iVar58,iVar55);
            piVar36[6] = (int)uVar16;
            puVar27 = (ulong *)(ulong)(iVar60 + 1U);
            uVar33 = uVar33 + 0x100;
          } while (iVar60 + 1U <= uVar29);
        }
        uVar49 = uVar49 + 1;
      } while (uVar49 != uVar14);
      uVar53 = (int)puVar27 - 1;
      uVar49 = (ulong)uVar53;
      uVar16 = uVar49;
      if (uVar53 != 0) {
        iVar56 = (int)local_d8;
        uVar12 = 1;
        puVar41 = local_d8;
LAB_1006ee498:
        puVar42 = local_d0;
        iVar56 = iVar56 + 1;
        iVar55 = (int)uVar12;
        piVar36 = piVar1 + (ulong)(iVar55 - 1) * 7;
        if (piVar36[2] == 0) {
          uVar53 = piVar36[3] + 1;
        }
        else {
          uVar53 = 1;
        }
        puVar27 = (ulong *)((long)puVar41 + uVar12);
        iVar58 = *piVar36;
        if (*(int *)(param_1 + 0xa8) == 2) {
          iVar58 = iVar58 + 0x800;
          if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006ee520;
          if (uVar53 < 0x40) goto LAB_1006ee5a4;
LAB_1006ee4e8:
          uVar29 = 0x32 - (int)LZCOUNT(uVar53);
          if (0x3f < uVar53 - 1) goto LAB_1006ee5c0;
LAB_1006ee504:
          uVar33 = (uint)(byte)(&DAT_10084fdf4)[uVar53 - 1];
LAB_1006ee5cc:
          iVar60 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar29 * 4) + 1;
          uVar35 = (uint)LZCOUNT(iVar60) ^ 0x1f;
          iVar62 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar33 * 4) + 1;
          uVar7 = (uint)LZCOUNT(iVar62) ^ 0x1f;
          iVar58 = iVar58 + ((*(int *)(&DAT_10084fd64 + (ulong)uVar29 * 4) - uVar35) * 0x100 -
                            ((uint)(iVar60 * 0x100) >> (ulong)(uVar35 & 0x1f))) +
                            ((uint)(iVar62 * 0x100) >> (ulong)(uVar7 & 0x1f)) +
                            (uVar7 - *(int *)(&DAT_10084fd64 + (ulong)uVar33 * 4)) * 0x100;
          piVar8 = piVar1 + uVar12 * 7;
          iVar60 = *piVar8;
          puVar41 = local_d8;
          if (iVar58 <= iVar60) goto LAB_1006ee64c;
        }
        else {
          if (*(int *)(param_1 + 0x98) != 1) {
            iVar60 = *(int *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)((long)puVar27 + -1) * 4)
                     + 1;
            uVar29 = (uint)LZCOUNT(iVar60) ^ 0x1f;
            iVar58 = (*(int *)(param_1 + 0x88) -
                     (((uint)(iVar60 * 0x100) >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100)) + iVar58
            ;
            if (0x3f < uVar53) goto LAB_1006ee4e8;
LAB_1006ee5a4:
            uVar29 = (uint)(byte)(&DAT_10084fdf4)[uVar53];
            if (uVar53 - 1 < 0x40) goto LAB_1006ee504;
LAB_1006ee5c0:
            uVar33 = 0x32 - (int)LZCOUNT(uVar53 - 1);
            goto LAB_1006ee5cc;
          }
          iVar58 = iVar58 + 0x600;
LAB_1006ee520:
          uVar29 = (uint)LZCOUNT(uVar53 + 1) ^ 0x1f;
          uVar33 = (uint)LZCOUNT(uVar53) ^ 0x1f;
          iVar58 = iVar58 + ((((uVar53 + 1) * 0x100 >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100) -
                            (((uVar53 << 8) >> (ulong)(uVar33 & 0x1f)) + uVar33 * 0x100));
          piVar8 = piVar1 + uVar12 * 7;
          iVar60 = *piVar8;
          if (iVar58 <= iVar60) {
LAB_1006ee64c:
            iVar60 = iVar58;
            piVar8[2] = 0;
            piVar8[3] = uVar53;
            *piVar8 = iVar60;
            piVar8[1] = 0;
            *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar36 + 4);
            piVar8[6] = piVar36[6];
          }
        }
        if (puVar51 < puVar27) goto LAB_1006ee488;
        uVar16 = uVar12;
        if (iVar55 != (int)uVar49) {
          iVar58 = piVar8[2];
          local_108 = (ulong *)CONCAT44(local_108._4_4_,(uint)(iVar58 != 0));
          if (iVar58 == 0) {
            local_a8 = piVar8[3];
            if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006ee6a0;
LAB_1006ee6d0:
            iVar62 = **(int **)(param_1 + 0x50) + 1;
            uVar53 = (uint)LZCOUNT(iVar62) ^ 0x1f;
            iVar62 = *(int *)(param_1 + 0x8c) -
                     (((uint)(iVar62 * 0x100) >> (ulong)(uVar53 & 0x1f)) + uVar53 * 0x100);
            lVar47 = *(long *)(param_1 + 8);
            uVar16 = (ulong)*(uint *)(param_1 + 0x24);
            puVar28 = (ulong *)(lVar47 + uVar16);
          }
          else {
            local_a8 = 0;
            if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006ee6d0;
LAB_1006ee6a0:
            iVar62 = 0x100;
            lVar47 = *(long *)(param_1 + 8);
            uVar16 = (ulong)*(uint *)(param_1 + 0x24);
            puVar28 = (ulong *)(lVar47 + uVar16);
          }
          if (puVar27 < puVar28) goto LAB_1006ee488;
          iVar63 = *(int *)(param_1 + 200);
          uVar33 = (int)puVar27 - (int)lVar47;
          uVar53 = (uint)uVar16;
          local_e8 = puVar27;
          puVar11 = local_100;
          puVar41 = local_d8;
          puVar27 = local_d0;
          uVar29 = local_a8;
          while (local_100 = puVar11, local_d8 = puVar41, local_d0 = puVar27, local_a8 = uVar29,
                uVar53 < uVar33) {
            lVar37 = param_1;
            FUN_100705148(param_1,lVar47 + uVar16,puVar42,iVar63,0);
            uVar53 = (int)lVar37 + (int)uVar16;
            uVar16 = (ulong)uVar53;
            puVar11 = local_100;
            puVar41 = local_d8;
            puVar27 = local_d0;
            uVar29 = local_a8;
          }
          puVar42 = (ulong *)((long)puVar43 + uVar12 + 0xc);
          piVar36 = piVar8 + 4;
          *(uint *)(param_1 + 0x24) = uVar33;
          iVar64 = (int)local_e8;
          if (iVar63 - 6U < 2) {
            uVar16 = 0;
            uVar53 = *(uint *)(param_1 + 0xcc);
            if (0xffe < uVar53) {
              uVar53 = 0xfff;
            }
            lVar47 = *(long *)(param_1 + 8);
            uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
            uVar7 = ~uVar35;
            uVar30 = iVar64 - (int)lVar47;
            uVar33 = 0;
            if (uVar7 <= uVar30) {
              uVar33 = uVar30 - uVar7;
            }
            iVar63 = *(int *)(param_1 + 0x18);
            uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar39 = uVar30 - uVar14;
            if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
              uVar39 = *(uint *)(param_1 + 0x1c);
            }
            if (uVar39 < 2) {
              uVar39 = 1;
            }
            bVar5 = iVar58 != 0;
            uVar13 = (ulong)bVar5;
            puVar28 = (ulong *)((long)local_e8 + 4);
            lVar46 = *(long *)(param_1 + 0x30);
            uVar14 = *(uint *)(param_1 + 0xc4);
            uVar52 = *local_e8 * -0x30e4432340650000 >>
                     ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
            uVar40 = *(uint *)(lVar46 + uVar52 * 4);
            lVar37 = *(long *)(param_1 + 0x40);
            puVar31 = (uint *)(lVar37 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
            puVar34 = puVar31 + 1;
            iVar58 = uVar30 + 9;
            uVar19 = 3;
            if (bVar5) {
              uVar19 = 4;
            }
            uVar50 = uVar23;
            do {
              if (uVar13 == 3) {
                uVar35 = *piVar36 - 1;
                uVar10 = *piVar36 - 2;
              }
              else {
                uVar35 = piVar36[uVar13];
                uVar10 = uVar35 - 1;
              }
              if ((uVar10 < uVar30 - iVar63) &&
                 ((uint)*local_e8 == *(uint *)((long)local_e8 - (ulong)uVar35))) {
                lVar26 = -(ulong)uVar35;
                puVar9 = (ulong *)((long)puVar28 + lVar26);
                puVar18 = puVar28;
                if (puVar28 < local_b8) {
                  if (*puVar9 == *puVar28) {
                    iVar64 = 0;
                    puVar18 = puVar42;
                    puVar9 = (ulong *)((long)puVar43 + lVar26 + uVar12 + 0xc);
                    do {
                      if (local_b8 <= puVar18) goto joined_r0x0001006eed74;
                      uVar54 = *puVar9;
                      uVar32 = *puVar18;
                      iVar64 = iVar64 + 8;
                      puVar18 = puVar18 + 1;
                      puVar9 = puVar9 + 1;
                    } while (uVar54 == uVar32);
                    uVar32 = uVar32 ^ uVar54;
                    uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1
                    ;
                    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2
                    ;
                    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar32 & 0xffff0000ffff) << 0x10;
                    iVar64 = iVar64 + (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                  }
                  else {
                    uVar32 = *puVar28 ^ *puVar9;
                    uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1
                    ;
                    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2
                    ;
                    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar32 & 0xffff0000ffff) << 0x10;
                    iVar64 = (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006eed74:
                  if (puVar18 < local_f0) {
                    if (*(uint *)puVar9 == *(uint *)puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar9 = (ulong *)((long)puVar9 + 4);
                    }
                  }
                  if (puVar18 < local_f8) {
                    if ((short)*puVar9 == (short)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar9 = (ulong *)((long)puVar9 + 2);
                    }
                  }
                  if ((puVar18 < puVar27) && ((char)*puVar9 == (char)*puVar18)) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                  iVar64 = (int)puVar18 - (int)puVar28;
                }
                uVar35 = iVar64 + 4;
                uVar32 = (ulong)uVar35;
                if (uVar50 < uVar32) {
                  local_c8[uVar16 * 2] = (int)uVar13 - (uint)bVar5;
                  (local_c8 + uVar16 * 2)[1] = uVar35;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  if ((uVar53 < uVar35) ||
                     (uVar50 = uVar32, (ulong *)((long)local_e8 + uVar32) == puVar27))
                  goto LAB_1006efe38;
                }
              }
              uVar10 = (uint)uVar16;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar19);
            *(uint *)(lVar46 + uVar52 * 4) = uVar30;
            if (uVar39 <= uVar40) {
              uVar13 = 0;
              uVar19 = 0;
              uVar53 = ~(-1 << (ulong)(uVar14 & 0x1f));
              iVar63 = iVar58;
              do {
                uVar52 = uVar13;
                if (uVar19 <= uVar13) {
                  uVar52 = uVar19;
                }
                uVar32 = (ulong)uVar40;
                puVar28 = (ulong *)(lVar47 + uVar32 + uVar52);
                puVar42 = (ulong *)((long)local_e8 + uVar52);
                puVar9 = puVar42;
                if (puVar42 < local_b8) {
                  if (*puVar28 == *puVar42) {
                    lVar46 = 0;
                    do {
                      puVar28 = (ulong *)((long)puVar43 + lVar46 + uVar52 + uVar12 + 8);
                      if (local_b8 <= puVar28) {
                        puVar28 = (ulong *)(lVar47 + 8 + uVar52 + uVar32 + lVar46);
                        puVar9 = (ulong *)((long)puVar43 + lVar46 + uVar52 + uVar12 + 8);
                        goto joined_r0x0001006eee74;
                      }
                      uVar54 = *(ulong *)(lVar47 + 8 + uVar52 + uVar32 + lVar46);
                      uVar38 = *puVar28;
                      lVar46 = lVar46 + 8;
                    } while (uVar54 == uVar38);
                    uVar38 = uVar38 ^ uVar54;
                    uVar54 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = lVar46 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                  }
                  else {
                    uVar54 = *puVar42 ^ *puVar28;
                    uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                  }
                  uVar54 = uVar54 + uVar52;
                }
                else {
joined_r0x0001006eee74:
                  if (puVar9 < local_f0) {
                    if (*(uint *)puVar28 == *(uint *)puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 4);
                      puVar28 = (ulong *)((long)puVar28 + 4);
                    }
                  }
                  if (puVar9 < local_f8) {
                    if ((short)*puVar28 == (short)*puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 2);
                      puVar28 = (ulong *)((long)puVar28 + 2);
                    }
                  }
                  if ((puVar9 < puVar27) && ((char)*puVar28 == (char)*puVar9)) {
                    puVar9 = (ulong *)((long)puVar9 + 1);
                  }
                  uVar54 = (long)puVar9 + (uVar52 - (long)puVar42);
                }
                iVar58 = iVar63;
                if (uVar50 < uVar54) {
                  iVar58 = uVar40 + (int)uVar54;
                  if (uVar54 <= iVar63 - uVar40) {
                    iVar58 = iVar63;
                  }
                  local_c8[uVar16 * 2] = (uVar30 + 2) - uVar40;
                  (local_c8 + uVar16 * 2)[1] = (int)uVar54;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  uVar50 = uVar54;
                  if (0x1000 < uVar54 || (ulong *)((long)local_e8 + uVar54) == puVar27) break;
                }
                uVar10 = (uint)uVar16;
                puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar7) << 1) * 4);
                if (*(byte *)(lVar47 + uVar32 + uVar54) < *(byte *)((long)local_e8 + uVar54)) {
                  *puVar31 = uVar40;
                  if (uVar40 <= uVar33) goto LAB_1006efe24;
                  puVar17 = puVar17 + 1;
                  uVar13 = uVar54;
                  puVar31 = puVar17;
                }
                else {
                  *puVar34 = uVar40;
                  puVar34 = puVar17;
                  uVar19 = uVar54;
                  if (uVar40 <= uVar33) goto LAB_1006efe1c;
                }
                if (uVar53 == 0) break;
                uVar53 = uVar53 - 1;
                uVar40 = *puVar17;
                iVar63 = iVar58;
              } while (uVar39 <= uVar40);
            }
            goto LAB_1006efe28;
          }
          if (iVar63 == 5) {
            uVar16 = 0;
            uVar53 = *(uint *)(param_1 + 0xcc);
            if (0xffe < uVar53) {
              uVar53 = 0xfff;
            }
            lVar47 = *(long *)(param_1 + 8);
            uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
            uVar7 = ~uVar35;
            uVar30 = iVar64 - (int)lVar47;
            uVar33 = 0;
            if (uVar7 <= uVar30) {
              uVar33 = uVar30 - uVar7;
            }
            iVar63 = *(int *)(param_1 + 0x18);
            uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar39 = uVar30 - uVar14;
            if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
              uVar39 = *(uint *)(param_1 + 0x1c);
            }
            if (uVar39 < 2) {
              uVar39 = 1;
            }
            bVar5 = iVar58 != 0;
            uVar13 = (ulong)bVar5;
            puVar28 = (ulong *)((long)local_e8 + 4);
            lVar46 = *(long *)(param_1 + 0x30);
            uVar14 = *(uint *)(param_1 + 0xc4);
            uVar52 = *local_e8 * -0x30e4432345000000 >>
                     ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
            uVar40 = *(uint *)(lVar46 + uVar52 * 4);
            lVar37 = *(long *)(param_1 + 0x40);
            puVar31 = (uint *)(lVar37 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
            puVar34 = puVar31 + 1;
            iVar58 = uVar30 + 9;
            uVar19 = 3;
            if (bVar5) {
              uVar19 = 4;
            }
            uVar50 = uVar23;
            do {
              if (uVar13 == 3) {
                uVar35 = *piVar36 - 1;
                uVar10 = *piVar36 - 2;
              }
              else {
                uVar35 = piVar36[uVar13];
                uVar10 = uVar35 - 1;
              }
              if ((uVar10 < uVar30 - iVar63) &&
                 ((uint)*local_e8 == *(uint *)((long)local_e8 - (ulong)uVar35))) {
                lVar26 = -(ulong)uVar35;
                puVar9 = (ulong *)((long)puVar28 + lVar26);
                puVar18 = puVar28;
                if (puVar28 < local_b8) {
                  if (*puVar9 == *puVar28) {
                    iVar64 = 0;
                    puVar18 = puVar42;
                    puVar9 = (ulong *)((long)puVar43 + lVar26 + uVar12 + 0xc);
                    do {
                      if (local_b8 <= puVar18) goto joined_r0x0001006ef2d0;
                      uVar54 = *puVar9;
                      uVar32 = *puVar18;
                      iVar64 = iVar64 + 8;
                      puVar18 = puVar18 + 1;
                      puVar9 = puVar9 + 1;
                    } while (uVar54 == uVar32);
                    uVar32 = uVar32 ^ uVar54;
                    uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1
                    ;
                    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2
                    ;
                    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar32 & 0xffff0000ffff) << 0x10;
                    iVar64 = iVar64 + (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                  }
                  else {
                    uVar32 = *puVar28 ^ *puVar9;
                    uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1
                    ;
                    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2
                    ;
                    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar32 & 0xffff0000ffff) << 0x10;
                    iVar64 = (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006ef2d0:
                  if (puVar18 < local_f0) {
                    if (*(uint *)puVar9 == *(uint *)puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar9 = (ulong *)((long)puVar9 + 4);
                    }
                  }
                  if (puVar18 < local_f8) {
                    if ((short)*puVar9 == (short)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar9 = (ulong *)((long)puVar9 + 2);
                    }
                  }
                  if ((puVar18 < puVar27) && ((char)*puVar9 == (char)*puVar18)) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                  iVar64 = (int)puVar18 - (int)puVar28;
                }
                uVar35 = iVar64 + 4;
                uVar32 = (ulong)uVar35;
                if (uVar50 < uVar32) {
                  local_c8[uVar16 * 2] = (int)uVar13 - (uint)bVar5;
                  (local_c8 + uVar16 * 2)[1] = uVar35;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  if ((uVar53 < uVar35) ||
                     (uVar50 = uVar32, (ulong *)((long)local_e8 + uVar32) == puVar27))
                  goto LAB_1006efe38;
                }
              }
              uVar10 = (uint)uVar16;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar19);
            *(uint *)(lVar46 + uVar52 * 4) = uVar30;
            if (uVar39 <= uVar40) {
              uVar13 = 0;
              uVar19 = 0;
              uVar53 = ~(-1 << (ulong)(uVar14 & 0x1f));
              iVar63 = iVar58;
              do {
                uVar52 = uVar13;
                if (uVar19 <= uVar13) {
                  uVar52 = uVar19;
                }
                uVar32 = (ulong)uVar40;
                puVar28 = (ulong *)(lVar47 + uVar32 + uVar52);
                puVar42 = (ulong *)((long)local_e8 + uVar52);
                puVar9 = puVar42;
                if (puVar42 < local_b8) {
                  if (*puVar28 == *puVar42) {
                    lVar46 = 0;
                    do {
                      puVar28 = (ulong *)((long)puVar43 + lVar46 + uVar52 + uVar12 + 8);
                      if (local_b8 <= puVar28) {
                        puVar28 = (ulong *)(lVar47 + 8 + uVar52 + uVar32 + lVar46);
                        puVar9 = (ulong *)((long)puVar43 + lVar46 + uVar52 + uVar12 + 8);
                        goto joined_r0x0001006ef73c;
                      }
                      uVar54 = *(ulong *)(lVar47 + 8 + uVar52 + uVar32 + lVar46);
                      uVar38 = *puVar28;
                      lVar46 = lVar46 + 8;
                    } while (uVar54 == uVar38);
                    uVar38 = uVar38 ^ uVar54;
                    uVar54 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = lVar46 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                  }
                  else {
                    uVar54 = *puVar42 ^ *puVar28;
                    uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                  }
                  uVar54 = uVar54 + uVar52;
                }
                else {
joined_r0x0001006ef73c:
                  if (puVar9 < local_f0) {
                    if (*(uint *)puVar28 == *(uint *)puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 4);
                      puVar28 = (ulong *)((long)puVar28 + 4);
                    }
                  }
                  if (puVar9 < local_f8) {
                    if ((short)*puVar28 == (short)*puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 2);
                      puVar28 = (ulong *)((long)puVar28 + 2);
                    }
                  }
                  if ((puVar9 < puVar27) && ((char)*puVar28 == (char)*puVar9)) {
                    puVar9 = (ulong *)((long)puVar9 + 1);
                  }
                  uVar54 = (long)puVar9 + (uVar52 - (long)puVar42);
                }
                iVar58 = iVar63;
                if (uVar50 < uVar54) {
                  iVar58 = uVar40 + (int)uVar54;
                  if (uVar54 <= iVar63 - uVar40) {
                    iVar58 = iVar63;
                  }
                  local_c8[uVar16 * 2] = (uVar30 + 2) - uVar40;
                  (local_c8 + uVar16 * 2)[1] = (int)uVar54;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  uVar50 = uVar54;
                  if (0x1000 < uVar54 || (ulong *)((long)local_e8 + uVar54) == puVar27) break;
                }
                uVar10 = (uint)uVar16;
                puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar7) << 1) * 4);
                if (*(byte *)(lVar47 + uVar32 + uVar54) < *(byte *)((long)local_e8 + uVar54)) {
                  *puVar31 = uVar40;
                  if (uVar40 <= uVar33) goto LAB_1006efe24;
                  puVar17 = puVar17 + 1;
                  uVar13 = uVar54;
                  puVar31 = puVar17;
                }
                else {
                  *puVar34 = uVar40;
                  puVar34 = puVar17;
                  uVar19 = uVar54;
                  if (uVar40 <= uVar33) goto LAB_1006efe1c;
                }
                if (uVar53 == 0) break;
                uVar53 = uVar53 - 1;
                uVar40 = *puVar17;
                iVar63 = iVar58;
              } while (uVar39 <= uVar40);
            }
            goto LAB_1006efe28;
          }
          if (iVar63 != 3) {
            uVar16 = 0;
            uVar53 = *(uint *)(param_1 + 0xcc);
            if (0xffe < uVar53) {
              uVar53 = 0xfff;
            }
            lVar47 = *(long *)(param_1 + 8);
            uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
            uVar7 = ~uVar35;
            uVar30 = iVar64 - (int)lVar47;
            uVar33 = 0;
            if (uVar7 <= uVar30) {
              uVar33 = uVar30 - uVar7;
            }
            iVar63 = *(int *)(param_1 + 0x18);
            uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar39 = uVar30 - uVar14;
            if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
              uVar39 = *(uint *)(param_1 + 0x1c);
            }
            if (uVar39 < 2) {
              uVar39 = 1;
            }
            bVar5 = iVar58 != 0;
            uVar13 = (ulong)bVar5;
            puVar28 = (ulong *)((long)local_e8 + 4);
            lVar46 = *(long *)(param_1 + 0x30);
            uVar14 = *(uint *)(param_1 + 0xc4);
            uVar2 = (uint)*local_e8 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
            uVar40 = *(uint *)(lVar46 + (ulong)uVar2 * 4);
            lVar37 = *(long *)(param_1 + 0x40);
            puVar31 = (uint *)(lVar37 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
            puVar34 = puVar31 + 1;
            iVar58 = uVar30 + 9;
            uVar19 = 3;
            if (bVar5) {
              uVar19 = 4;
            }
            uVar52 = uVar23;
            do {
              if (uVar13 == 3) {
                uVar35 = *piVar36 - 1;
                uVar10 = *piVar36 - 2;
              }
              else {
                uVar35 = piVar36[uVar13];
                uVar10 = uVar35 - 1;
              }
              if ((uVar10 < uVar30 - iVar63) &&
                 ((uint)*local_e8 == *(uint *)((long)local_e8 - (ulong)uVar35))) {
                lVar26 = -(ulong)uVar35;
                puVar9 = (ulong *)((long)puVar28 + lVar26);
                puVar18 = puVar28;
                if (puVar28 < local_b8) {
                  if (*puVar9 == *puVar28) {
                    iVar64 = 0;
                    puVar18 = puVar42;
                    puVar9 = (ulong *)((long)puVar43 + lVar26 + uVar12 + 0xc);
                    do {
                      if (local_b8 <= puVar18) goto joined_r0x0001006ef5b0;
                      uVar32 = *puVar9;
                      uVar50 = *puVar18;
                      iVar64 = iVar64 + 8;
                      puVar18 = puVar18 + 1;
                      puVar9 = puVar9 + 1;
                    } while (uVar32 == uVar50);
                    uVar50 = uVar50 ^ uVar32;
                    uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1
                    ;
                    uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2
                    ;
                    uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                    uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar50 & 0xffff0000ffff) << 0x10;
                    iVar64 = iVar64 + (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                  }
                  else {
                    uVar50 = *puVar28 ^ *puVar9;
                    uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1
                    ;
                    uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2
                    ;
                    uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                    uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar50 & 0xffff0000ffff) << 0x10;
                    iVar64 = (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006ef5b0:
                  if (puVar18 < local_f0) {
                    if (*(uint *)puVar9 == *(uint *)puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 4);
                      puVar9 = (ulong *)((long)puVar9 + 4);
                    }
                  }
                  if (puVar18 < local_f8) {
                    if ((short)*puVar9 == (short)*puVar18) {
                      puVar18 = (ulong *)((long)puVar18 + 2);
                      puVar9 = (ulong *)((long)puVar9 + 2);
                    }
                  }
                  if ((puVar18 < puVar27) && ((char)*puVar9 == (char)*puVar18)) {
                    puVar18 = (ulong *)((long)puVar18 + 1);
                  }
                  iVar64 = (int)puVar18 - (int)puVar28;
                }
                uVar35 = iVar64 + 4;
                uVar50 = (ulong)uVar35;
                if (uVar52 < uVar50) {
                  local_c8[uVar16 * 2] = (int)uVar13 - (uint)bVar5;
                  (local_c8 + uVar16 * 2)[1] = uVar35;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  if ((uVar53 < uVar35) ||
                     (uVar52 = uVar50, (ulong *)((long)local_e8 + uVar50) == puVar27))
                  goto LAB_1006efe38;
                }
              }
              uVar10 = (uint)uVar16;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar19);
            *(uint *)(lVar46 + (ulong)uVar2 * 4) = uVar30;
            if (uVar39 <= uVar40) {
              uVar13 = 0;
              uVar19 = 0;
              uVar53 = ~(-1 << (ulong)(uVar14 & 0x1f));
              do {
                uVar50 = uVar13;
                if (uVar19 <= uVar13) {
                  uVar50 = uVar19;
                }
                uVar32 = (ulong)uVar40;
                puVar28 = (ulong *)(lVar47 + uVar32 + uVar50);
                puVar42 = (ulong *)((long)local_e8 + uVar50);
                puVar9 = puVar42;
                if (puVar42 < local_b8) {
                  if (*puVar28 == *puVar42) {
                    lVar46 = 0;
                    do {
                      puVar28 = (ulong *)((long)puVar43 + lVar46 + uVar50 + uVar12 + 8);
                      if (local_b8 <= puVar28) {
                        puVar28 = (ulong *)(lVar47 + 8 + uVar50 + uVar32 + lVar46);
                        puVar9 = (ulong *)((long)puVar43 + lVar46 + uVar50 + uVar12 + 8);
                        goto joined_r0x0001006efa34;
                      }
                      uVar54 = *(ulong *)(lVar47 + 8 + uVar50 + uVar32 + lVar46);
                      uVar38 = *puVar28;
                      lVar46 = lVar46 + 8;
                    } while (uVar54 == uVar38);
                    uVar38 = uVar38 ^ uVar54;
                    uVar54 = (uVar38 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar38 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = lVar46 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                  }
                  else {
                    uVar54 = *puVar42 ^ *puVar28;
                    uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                  }
                  uVar54 = uVar54 + uVar50;
                }
                else {
joined_r0x0001006efa34:
                  if (puVar9 < local_f0) {
                    if (*(uint *)puVar28 == *(uint *)puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 4);
                      puVar28 = (ulong *)((long)puVar28 + 4);
                    }
                  }
                  if (puVar9 < local_f8) {
                    if ((short)*puVar28 == (short)*puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 2);
                      puVar28 = (ulong *)((long)puVar28 + 2);
                    }
                  }
                  if ((puVar9 < puVar27) && ((char)*puVar28 == (char)*puVar9)) {
                    puVar9 = (ulong *)((long)puVar9 + 1);
                  }
                  uVar54 = (long)puVar9 + (uVar50 - (long)puVar42);
                }
                if (uVar52 < uVar54) {
                  iVar63 = uVar40 + (int)uVar54;
                  if (uVar54 <= iVar58 - uVar40) {
                    iVar63 = iVar58;
                  }
                  local_c8[uVar16 * 2] = (uVar30 + 2) - uVar40;
                  (local_c8 + uVar16 * 2)[1] = (int)uVar54;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  uVar52 = uVar54;
                  iVar58 = iVar63;
                  if (0x1000 < uVar54 || (ulong *)((long)local_e8 + uVar54) == puVar27) break;
                }
                uVar10 = (uint)uVar16;
                puVar17 = (uint *)(lVar37 + (ulong)((uVar40 & uVar7) << 1) * 4);
                if (*(byte *)(lVar47 + uVar32 + uVar54) < *(byte *)((long)local_e8 + uVar54)) {
                  *puVar31 = uVar40;
                  if (uVar40 <= uVar33) {
                    puVar31 = (uint *)&local_a0;
                    *puVar34 = 0;
                    goto LAB_1006efe2c;
                  }
                  puVar17 = puVar17 + 1;
                  uVar13 = uVar54;
                  puVar31 = puVar17;
                }
                else {
                  *puVar34 = uVar40;
                  puVar34 = puVar17;
                  uVar19 = uVar54;
                  if (uVar40 <= uVar33) {
                    local_a0 = local_a0 & 0xffffffff00000000;
                    goto LAB_1006efe2c;
                  }
                }
                if (uVar53 == 0) break;
                uVar53 = uVar53 - 1;
                uVar40 = *puVar17;
              } while (uVar39 <= uVar40);
            }
            *puVar34 = 0;
            goto LAB_1006efe2c;
          }
          uVar16 = 0;
          uVar53 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar53) {
            uVar53 = 0xfff;
          }
          lVar47 = *(long *)(param_1 + 8);
          uVar35 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar7 = ~uVar35;
          uVar30 = iVar64 - (int)lVar47;
          uVar33 = 0;
          if (uVar7 <= uVar30) {
            uVar33 = uVar30 - uVar7;
          }
          iVar63 = *(int *)(param_1 + 0x18);
          uVar14 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar39 = uVar30 - uVar14;
          if (uVar30 - *(uint *)(param_1 + 0x1c) <= uVar14 || *(int *)(param_1 + 0x20) != 0) {
            uVar39 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar39 < 2) {
            uVar39 = 1;
          }
          bVar5 = iVar58 != 0;
          uVar13 = (ulong)bVar5;
          puVar42 = (ulong *)((long)local_e8 + 3);
          lVar37 = *(long *)(param_1 + 0x30);
          uVar14 = *(uint *)(param_1 + 0xc4);
          uVar2 = (uint)*local_e8 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar40 = *(uint *)(lVar37 + (ulong)uVar2 * 4);
          lVar46 = *(long *)(param_1 + 0x40);
          puVar31 = (uint *)(lVar46 + (ulong)((uVar30 & (uVar35 ^ 0xffffffff)) << 1) * 4);
          local_160 = puVar31 + 1;
          iVar58 = uVar30 + 9;
          uVar19 = 3;
          if (bVar5) {
            uVar19 = 4;
          }
          uVar52 = uVar23;
          do {
            if (uVar13 == 3) {
              uVar35 = *piVar36 - 1;
              uVar10 = *piVar36 - 2;
            }
            else {
              uVar35 = piVar36[uVar13];
              uVar10 = uVar35 - 1;
            }
            if ((uVar10 < uVar30 - iVar63) &&
               (((*(uint *)((long)local_e8 - (ulong)uVar35) ^ (uint)*local_e8) & 0xffffff) == 0)) {
              lVar26 = -(ulong)uVar35;
              puVar28 = (ulong *)((long)puVar42 + lVar26);
              puVar9 = puVar42;
              if (puVar42 < local_b8) {
                if (*puVar28 == *puVar42) {
                  iVar64 = 0;
                  puVar28 = (ulong *)((long)puVar43 + lVar26 + uVar12 + 0xb);
                  puVar9 = (ulong *)((long)puVar43 + uVar12 + 0xb);
                  do {
                    if (local_b8 <= puVar9) goto joined_r0x0001006eea90;
                    uVar32 = *puVar28;
                    uVar50 = *puVar9;
                    iVar64 = iVar64 + 8;
                    puVar28 = puVar28 + 1;
                    puVar9 = puVar9 + 1;
                  } while (uVar32 == uVar50);
                  uVar50 = uVar50 ^ uVar32;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar64 = iVar64 + (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
                else {
                  uVar50 = *puVar42 ^ *puVar28;
                  uVar50 = (uVar50 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar50 & 0x5555555555555555) << 1;
                  uVar50 = (uVar50 & 0xcccccccccccccccc) >> 2 | (uVar50 & 0x3333333333333333) << 2;
                  uVar50 = (uVar50 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar50 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar50 = (uVar50 & 0xff00ff00ff00ff00) >> 8 | (uVar50 & 0xff00ff00ff00ff) << 8;
                  uVar50 = (uVar50 & 0xffff0000ffff0000) >> 0x10 | (uVar50 & 0xffff0000ffff) << 0x10
                  ;
                  iVar64 = (int)((ulong)LZCOUNT(uVar50 >> 0x20 | uVar50 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006eea90:
                if (puVar9 < local_f0) {
                  if (*(uint *)puVar28 == *(uint *)puVar9) {
                    puVar28 = (ulong *)((long)puVar28 + 4);
                    puVar9 = (ulong *)((long)puVar9 + 4);
                  }
                }
                if (puVar9 < local_f8) {
                  if ((short)*puVar28 == (short)*puVar9) {
                    puVar28 = (ulong *)((long)puVar28 + 2);
                    puVar9 = (ulong *)((long)puVar9 + 2);
                  }
                }
                if ((puVar9 < puVar27) && ((char)*puVar28 == (char)*puVar9)) {
                  puVar9 = (ulong *)((long)puVar9 + 1);
                }
                iVar64 = (int)puVar9 - (int)puVar42;
              }
              uVar35 = iVar64 + 3;
              uVar50 = (ulong)uVar35;
              if (uVar52 < uVar50) {
                local_c8[uVar16 * 2] = (int)uVar13 - (uint)bVar5;
                (local_c8 + uVar16 * 2)[1] = uVar35;
                uVar10 = (int)uVar16 + 1;
                uVar16 = (ulong)uVar10;
                if ((uVar53 < uVar35) ||
                   (uVar52 = uVar50, (ulong *)((long)local_e8 + uVar50) == puVar27))
                goto joined_r0x0001006ef8f4;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar19);
          if (uVar52 < 3) {
            lVar26 = *(long *)(param_1 + 0x38);
            uVar13 = *local_e8;
            uVar35 = 0x20 - *(int *)(param_1 + 0x28);
            if (local_1b4 < uVar30) {
              uVar19 = (ulong)local_1b4;
              do {
                *(int *)(lVar26 + (ulong)((uint)(*(int *)(lVar47 + uVar19) * 0x35a7bd00) >>
                                         (ulong)(uVar35 & 0x1f)) * 4) = (int)uVar19;
                uVar19 = uVar19 + 1;
              } while ((uint)(iVar56 - (int)lVar47) != uVar19);
            }
            uVar35 = *(uint *)(lVar26 + (ulong)((uint)uVar13 * 0x35a7bd00 >> (ulong)(uVar35 & 0x1f))
                                        * 4);
            local_1b4 = uVar30;
            if (uVar35 < uVar39 || uVar30 - uVar35 >> 0x12 != 0) goto LAB_1006ef904;
            puVar42 = (ulong *)(lVar47 + (ulong)uVar35);
            puVar28 = local_e8;
            if (local_e8 < local_b8) {
              if (*puVar42 == *local_e8) {
                lVar26 = 0;
                puVar42 = (ulong *)(lVar47 + (ulong)uVar35);
                puVar28 = (ulong *)((long)puVar43 + uVar12 + 8);
                do {
                  puVar42 = puVar42 + 1;
                  if (local_b8 <= puVar28) goto LAB_1006f0178;
                  uVar13 = *puVar28;
                  lVar26 = lVar26 + 8;
                  puVar28 = puVar28 + 1;
                } while (*puVar42 == uVar13);
                uVar13 = uVar13 ^ *puVar42;
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = lVar26 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              }
              else {
                uVar13 = *local_e8 ^ *puVar42;
                uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
                uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
                uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = (ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3;
              }
            }
            else {
LAB_1006f0178:
              if (puVar28 < local_f0) {
                if ((uint)*puVar42 == (uint)*puVar28) {
                  puVar28 = (ulong *)((long)puVar28 + 4);
                  puVar42 = (ulong *)((long)puVar42 + 4);
                }
              }
              if (puVar28 < local_f8) {
                if (*(short *)puVar42 == *(short *)puVar28) {
                  puVar28 = (ulong *)((long)puVar28 + 2);
                  puVar42 = (ulong *)((long)puVar42 + 2);
                }
              }
              if ((puVar28 < puVar27) && ((char)*puVar42 == (char)*puVar28)) {
                puVar28 = (ulong *)((long)puVar28 + 1);
              }
              uVar13 = (long)puVar28 - (long)local_e8;
            }
            if (uVar13 < 3) goto LAB_1006ef904;
            *local_c8 = (uVar30 - uVar35) + 2;
            local_c8[1] = (int)uVar13;
            if (uVar13 <= uVar53 && (ulong *)((long)local_e8 + uVar13) != puVar27) {
              uVar16 = 1;
              uVar52 = uVar13;
              goto LAB_1006ef904;
            }
            iVar58 = uVar30 + 1;
            uVar10 = 1;
          }
          else {
LAB_1006ef904:
            uVar10 = (uint)uVar16;
            *(uint *)(lVar37 + (ulong)uVar2 * 4) = uVar30;
            if (uVar39 <= uVar40) {
              uVar13 = 0;
              uVar19 = 0;
              uVar53 = ~(-1 << (ulong)(uVar14 & 0x1f));
              iVar63 = iVar58;
              do {
                uVar50 = uVar13;
                if (uVar19 <= uVar13) {
                  uVar50 = uVar19;
                }
                uVar32 = (ulong)uVar40;
                puVar28 = (ulong *)(lVar47 + uVar32 + uVar50);
                puVar42 = (ulong *)((long)local_e8 + uVar50);
                puVar9 = puVar42;
                if (puVar42 < local_b8) {
                  if (*puVar28 == *puVar42) {
                    lVar37 = 0;
                    do {
                      puVar28 = (ulong *)((long)puVar43 + lVar37 + uVar50 + uVar12 + 8);
                      if (local_b8 <= puVar28) {
                        puVar28 = (ulong *)(lVar47 + 8 + uVar50 + uVar32 + lVar37);
                        puVar9 = (ulong *)((long)puVar43 + lVar37 + uVar50 + uVar12 + 8);
                        goto joined_r0x0001006efc98;
                      }
                      uVar38 = *(ulong *)(lVar47 + 8 + uVar50 + uVar32 + lVar37);
                      uVar54 = *puVar28;
                      lVar37 = lVar37 + 8;
                    } while (uVar38 == uVar54);
                    uVar54 = uVar54 ^ uVar38;
                    uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = lVar37 + ((ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3);
                  }
                  else {
                    uVar54 = *puVar42 ^ *puVar28;
                    uVar54 = (uVar54 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar54 & 0x5555555555555555) << 1
                    ;
                    uVar54 = (uVar54 & 0xcccccccccccccccc) >> 2 | (uVar54 & 0x3333333333333333) << 2
                    ;
                    uVar54 = (uVar54 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar54 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar54 = (uVar54 & 0xff00ff00ff00ff00) >> 8 | (uVar54 & 0xff00ff00ff00ff) << 8;
                    uVar54 = (uVar54 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar54 & 0xffff0000ffff) << 0x10;
                    uVar54 = (ulong)LZCOUNT(uVar54 >> 0x20 | uVar54 << 0x20) >> 3;
                  }
                }
                else {
joined_r0x0001006efc98:
                  if (puVar9 < local_f0) {
                    if (*(uint *)puVar28 == *(uint *)puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 4);
                      puVar28 = (ulong *)((long)puVar28 + 4);
                    }
                  }
                  if (puVar9 < local_f8) {
                    if ((short)*puVar28 == (short)*puVar9) {
                      puVar9 = (ulong *)((long)puVar9 + 2);
                      puVar28 = (ulong *)((long)puVar28 + 2);
                    }
                  }
                  if ((puVar9 < puVar27) && ((char)*puVar28 == (char)*puVar9)) {
                    puVar9 = (ulong *)((long)puVar9 + 1);
                  }
                  uVar54 = (long)puVar9 - (long)puVar42;
                }
                uVar54 = uVar54 + uVar50;
                iVar58 = iVar63;
                if (uVar52 < uVar54) {
                  iVar58 = uVar40 + (int)uVar54;
                  if (uVar54 <= iVar63 - uVar40) {
                    iVar58 = iVar63;
                  }
                  local_c8[uVar16 * 2] = (uVar30 + 2) - uVar40;
                  (local_c8 + uVar16 * 2)[1] = (int)uVar54;
                  uVar10 = (int)uVar16 + 1;
                  uVar16 = (ulong)uVar10;
                  uVar52 = uVar54;
                  if (0x1000 < uVar54 || (ulong *)((long)local_e8 + uVar54) == puVar27) break;
                }
                uVar10 = (uint)uVar16;
                puVar34 = (uint *)(lVar46 + (ulong)((uVar40 & uVar7) << 1) * 4);
                if (*(byte *)(lVar47 + uVar32 + uVar54) < *(byte *)((long)local_e8 + uVar54)) {
                  *puVar31 = uVar40;
                  if (uVar40 <= uVar33) {
                    puVar31 = (uint *)&local_a0;
                    break;
                  }
                  puVar34 = puVar34 + 1;
                  uVar13 = uVar54;
                  puVar31 = puVar34;
                }
                else {
                  *local_160 = uVar40;
                  local_160 = puVar34;
                  uVar19 = uVar54;
                  if (uVar40 <= uVar33) {
                    local_160 = (uint *)&local_a0;
                    break;
                  }
                }
                if (uVar53 == 0) break;
                uVar53 = uVar53 - 1;
                uVar40 = *puVar34;
                iVar63 = iVar58;
              } while (uVar39 <= uVar40);
            }
            *local_160 = 0;
            *puVar31 = 0;
            iVar58 = iVar58 + -8;
          }
          *(int *)(param_1 + 0x24) = iVar58;
joined_r0x0001006ef8f4:
          if (uVar10 == 0) goto LAB_1006ee488;
          goto LAB_1006efe54;
        }
      }
LAB_1006f02a4:
      puVar31 = (uint *)(piVar1 + (uVar16 & 0xffffffff) * 7);
      uVar35 = puVar31[1];
      uVar53 = puVar31[2];
      uVar29 = puVar31[3];
      local_90 = *(undefined8 *)(puVar31 + 4);
      local_88 = puVar31[6];
      puVar27 = local_d0;
      uVar20 = *puVar31;
      uVar33 = 0;
      if (uVar29 + uVar53 <= (uint)uVar16) {
        uVar33 = (uint)uVar16 - (uVar29 + uVar53);
      }
    }
LAB_1006f02d4:
    uVar7 = uVar33 + 1;
    puVar31 = (uint *)(piVar1 + (ulong)uVar7 * 7);
    local_170 = (ulong *)(ulong)uVar20;
    *puVar31 = uVar20;
    puVar31[1] = uVar35;
    puVar31[2] = uVar53;
    puVar31[3] = uVar29;
    *(undefined8 *)(puVar31 + 4) = local_90;
    puVar31[6] = local_88;
    uVar53 = uVar33;
    if (uVar33 == 0) {
      uVar20 = 1;
      goto LAB_1006f03f8;
    }
    do {
      uVar20 = uVar53;
      piVar36 = piVar1 + (ulong)uVar33 * 7;
      iVar56 = piVar36[2];
      iVar55 = piVar36[3];
      piVar8 = piVar1 + (ulong)uVar20 * 7;
      uVar59 = *(undefined8 *)(piVar36 + 2);
      uVar57 = *(undefined8 *)piVar36;
      uVar61 = *(undefined8 *)(piVar36 + 3);
      *(undefined8 *)(piVar8 + 5) = *(undefined8 *)(piVar36 + 5);
      *(undefined8 *)(piVar8 + 3) = uVar61;
      *(undefined8 *)(piVar8 + 2) = uVar59;
      *(undefined8 *)piVar8 = uVar57;
      uVar29 = iVar55 + iVar56;
      bVar5 = uVar29 <= uVar33;
      uVar29 = uVar33 - uVar29;
      uVar33 = 0;
      if (bVar5) {
        uVar33 = uVar29;
      }
      uVar53 = uVar20 - 1;
      puVar43 = local_d8;
    } while (bVar5 && uVar29 != 0);
    for (; uVar20 <= uVar7; uVar20 = uVar20 + 1) {
LAB_1006f03f8:
      while( true ) {
        iVar56 = piVar1[(ulong)uVar20 * 7 + 2];
        uVar53 = piVar1[(ulong)uVar20 * 7 + 3];
        uVar49 = (ulong)uVar53;
        if (iVar56 != 0) break;
        puVar43 = (ulong *)((long)param_4 + uVar49);
        uVar20 = uVar20 + 1;
        if (uVar7 < uVar20) goto LAB_1006f0344;
      }
      uVar29 = piVar1[(ulong)uVar20 * 7 + 1];
      if (uVar29 < 3) {
        uVar33 = uVar29;
        if (uVar53 == 0) {
          uVar33 = uVar29 + 1;
        }
        if (uVar33 != 0) {
          if (uVar33 == 3) {
            iVar55 = (int)*puVar11 + -1;
LAB_1006f0460:
            *(int *)puVar48 = *(int *)puVar15;
          }
          else {
            iVar55 = *(int *)((long)puVar11 + (ulong)uVar33 * 4);
            if (uVar33 != 1) goto LAB_1006f0460;
          }
          *(int *)((long)puVar11 + 4) = (int)*puVar11;
          goto LAB_1006f0478;
        }
      }
      else {
        *(ulong *)((long)puVar11 + 4) = *puVar11;
        iVar55 = uVar29 - 2;
LAB_1006f0478:
        *(int *)puVar11 = iVar55;
      }
      if (*(int *)(param_1 + 0xa8) != 2) {
        if (uVar53 != 0) {
          lVar47 = *(long *)(param_1 + 0x48);
          puVar43 = param_4;
          uVar16 = uVar49;
          do {
            *(int *)(lVar47 + (ulong)(byte)*puVar43 * 4) =
                 *(int *)(lVar47 + (ulong)(byte)*puVar43 * 4) + 2;
            uVar16 = uVar16 - 1;
            puVar43 = (ulong *)((long)puVar43 + 1);
          } while (uVar16 != 0);
        }
        *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar53 * 2;
      }
      if (uVar53 < 0x40) {
        uVar33 = (uint)(byte)(&DAT_10084fdf4)[uVar49];
      }
      else {
        uVar33 = 0x32 - (int)LZCOUNT(uVar53);
      }
      *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar33 * 4) =
           *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar33 * 4) + 1;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      uVar33 = (uint)LZCOUNT(uVar29 + 1) ^ 0x1f;
      *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar33 * 4) =
           *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar33 * 4) + 1;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      uVar33 = iVar56 - 3;
      if (uVar33 < 0x80) {
        uVar35 = (uint)(byte)(&DAT_10084ff08)[uVar33];
      }
      else {
        uVar35 = 0x43 - (int)LZCOUNT(uVar33);
      }
      *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar35 * 4) =
           *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar35 * 4) + 1;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      puVar43 = (ulong *)param_2[3];
      puVar41 = (ulong *)((long)param_4 + uVar49);
      if (local_110 < puVar41) {
        puVar28 = puVar43;
        puVar42 = param_4;
        if (param_4 <= local_110) {
          puVar28 = (ulong *)((long)puVar43 + ((long)local_110 - (long)param_4));
          uVar16 = *param_4;
          puVar43[1] = param_4[1];
          *puVar43 = uVar16;
          uVar16 = param_4[2];
          puVar43[3] = param_4[3];
          puVar43[2] = uVar16;
          puVar42 = local_110;
          if (0x20 < (long)local_110 - (long)param_4) {
            puVar43 = puVar43 + 4;
            puVar9 = param_4 + 6;
            do {
              uVar16 = puVar9[-2];
              puVar43[1] = puVar9[-1];
              *puVar43 = uVar16;
              uVar16 = *puVar9;
              puVar43[3] = puVar9[1];
              puVar43[2] = uVar16;
              puVar43 = puVar43 + 4;
              puVar9 = puVar9 + 4;
            } while (puVar43 < puVar28);
          }
        }
        if (puVar42 < puVar41) {
          uVar16 = (long)puVar41 - (long)puVar42;
          if ((7 < uVar16) && (0x3f < (ulong)((long)puVar28 - (long)puVar42))) {
            if (uVar16 < 0x40) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar16 & 0xffffffffffffffc0;
              puVar43 = puVar28 + 4;
              puVar9 = puVar42 + 4;
              uVar12 = uVar13;
              do {
                uVar19 = puVar9[-4];
                uVar50 = puVar9[-1];
                uVar52 = puVar9[-2];
                uVar54 = puVar9[1];
                uVar32 = *puVar9;
                uVar69 = puVar9[3];
                uVar38 = puVar9[2];
                puVar43[-3] = puVar9[-3];
                puVar43[-4] = uVar19;
                puVar43[-1] = uVar50;
                puVar43[-2] = uVar52;
                puVar43[1] = uVar54;
                *puVar43 = uVar32;
                puVar43[3] = uVar69;
                puVar43[2] = uVar38;
                uVar12 = uVar12 - 0x40;
                puVar43 = puVar43 + 8;
                puVar9 = puVar9 + 8;
              } while (uVar12 != 0);
              if (uVar16 == uVar13) goto LAB_1006f0720;
              if ((uVar16 & 0x38) == 0) {
                puVar42 = (ulong *)((long)puVar42 + uVar13);
                puVar28 = (ulong *)((long)puVar28 + uVar13);
                goto LAB_1006f0710;
              }
            }
            uVar12 = uVar16 & 0xfffffffffffffff8;
            lVar47 = uVar13 - uVar12;
            puVar24 = (undefined8 *)((long)puVar28 + uVar13);
            puVar45 = (undefined8 *)((long)puVar42 + uVar13);
            do {
              *puVar24 = *puVar45;
              lVar47 = lVar47 + 8;
              puVar24 = puVar24 + 1;
              puVar45 = puVar45 + 1;
            } while (lVar47 != 0);
            puVar28 = (ulong *)((long)puVar28 + uVar12);
            puVar42 = (ulong *)((long)puVar42 + uVar12);
            if (uVar16 == uVar12) goto LAB_1006f0720;
          }
LAB_1006f0710:
          do {
            puVar43 = (ulong *)((long)puVar42 + 1);
            *(char *)puVar28 = (char)*puVar42;
            puVar28 = (ulong *)((long)puVar28 + 1);
            puVar42 = puVar43;
          } while (puVar43 != puVar41);
        }
LAB_1006f0720:
        param_2[3] = param_2[3] + uVar49;
        piVar36 = (int *)param_2[1];
        if (0xffff < uVar53) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
        }
      }
      else {
        uVar16 = *param_4;
        puVar43[1] = param_4[1];
        *puVar43 = uVar16;
        if (0x10 < uVar53) {
          lVar47 = param_2[3];
          uVar16 = param_4[2];
          *(ulong *)(lVar47 + 0x18) = param_4[3];
          *(ulong *)(lVar47 + 0x10) = uVar16;
          uVar16 = param_4[4];
          *(ulong *)(lVar47 + 0x28) = param_4[5];
          *(ulong *)(lVar47 + 0x20) = uVar16;
          if (uVar49 - 0x31 < 0xffffffffffffffdf) {
            puVar43 = (ulong *)(lVar47 + 0x30);
            puVar41 = param_4 + 8;
            do {
              uVar16 = puVar41[-2];
              puVar43[1] = puVar41[-1];
              *puVar43 = uVar16;
              uVar16 = *puVar41;
              puVar43[3] = puVar41[1];
              puVar43[2] = uVar16;
              puVar43 = puVar43 + 4;
              puVar41 = puVar41 + 4;
            } while (puVar43 < (ulong *)(lVar47 + uVar49));
            goto LAB_1006f0720;
          }
        }
        param_2[3] = param_2[3] + uVar49;
        piVar36 = (int *)param_2[1];
      }
      *(short *)(piVar36 + 1) = (short)uVar53;
      *piVar36 = uVar29 + 1;
      if (0xffff < uVar33) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar36 - *param_2) >> 3);
      }
      *(short *)((long)piVar36 + 6) = (short)uVar33;
      param_2[1] = (long)(piVar36 + 2);
      param_4 = (ulong *)((long)param_4 + (ulong)(iVar56 + uVar53));
      puVar43 = param_4;
    }
LAB_1006f0344:
    if (*(int *)(param_1 + 0xa8) != 2) {
      iVar56 = *(int *)(param_1 + 0x78) + 1;
      uVar53 = (uint)LZCOUNT(iVar56) ^ 0x1f;
      *(uint *)(param_1 + 0x88) =
           ((uint)(iVar56 * 0x100) >> (ulong)(uVar53 & 0x1f)) + uVar53 * 0x100;
    }
    iVar56 = *(int *)(param_1 + 0x84) + 1;
    uVar53 = (uint)LZCOUNT(iVar56) ^ 0x1f;
    iVar55 = (int)*(undefined8 *)(param_1 + 0x7c) + 1;
    iVar58 = (int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1;
    uVar20 = (uint)(byte)((byte)LZCOUNT(iVar55) ^ 0x1f);
    uVar29 = (uint)(byte)((byte)LZCOUNT(iVar58) ^ 0x1f);
    uVar57 = NEON_ushl(CONCAT44(iVar58 * 0x100,iVar55 * 0x100),CONCAT44(-uVar29,-uVar20),4);
    *(ulong *)(param_1 + 0x8c) =
         CONCAT44(uVar29 * 0x100 + (int)((ulong)uVar57 >> 0x20),uVar20 * 0x100 + (int)uVar57);
    *(uint *)(param_1 + 0x94) = ((uint)(iVar56 * 0x100) >> (ulong)(uVar53 & 0x1f)) + uVar53 * 0x100;
  }
  if (puVar51 <= puVar43) goto LAB_1006f0958;
  goto LAB_1006ecbbc;
LAB_1006efe1c:
  puVar34 = (uint *)&local_a0;
  goto LAB_1006efe28;
LAB_1006efe24:
  puVar31 = (uint *)&local_a0;
LAB_1006efe28:
  *puVar34 = 0;
LAB_1006efe2c:
  *puVar31 = 0;
  *(int *)(param_1 + 0x24) = iVar58 + -8;
LAB_1006efe38:
  if (uVar10 != 0) {
LAB_1006efe54:
    uVar53 = (local_c8 + (ulong)(uVar10 - 1) * 2)[1];
    if ((uVar25 < uVar53) || (0xfff < uVar53 + iVar55)) {
      if (piVar8[2] == 0) {
        iVar56 = piVar8[3];
      }
      else {
        iVar56 = 0;
      }
      uVar35 = local_c8[(ulong)(uVar10 - 1) * 2];
      uVar33 = 0;
      if ((uint)(iVar55 - iVar56) < 0x1001) {
        uVar33 = iVar55 - iVar56;
      }
      goto LAB_1006f02d4;
    }
    uVar16 = 0;
    piVar36 = piVar1 + uVar12 * 7 + 4;
    do {
      puVar31 = (uint *)(local_c8 + uVar16 * 2);
      uVar53 = *puVar31;
      if (uVar53 < 3) {
        uVar33 = uVar53 + (int)local_108;
        if (uVar33 == 0) {
          iVar58 = *piVar36;
          iVar63 = piVar1[uVar12 * 7 + 5];
          piVar8 = piVar1 + uVar12 * 7 + 6;
        }
        else {
          if (uVar33 == 3) {
            iVar63 = *piVar36;
            iVar58 = iVar63 + -1;
          }
          else {
            iVar58 = piVar36[uVar33];
            iVar63 = *piVar36;
          }
          lVar47 = 8;
          if (uVar33 != 1) {
            lVar47 = 4;
          }
          piVar8 = (int *)((long)piVar36 + lVar47);
        }
      }
      else {
        iVar63 = *piVar36;
        iVar58 = uVar53 - 2;
        piVar8 = piVar1 + uVar12 * 7 + 5;
      }
      uVar33 = (uint)local_e0;
      if (uVar16 != 0) {
        uVar33 = puVar31[-1] + 1;
      }
      uVar35 = puVar31[1];
      if (uVar33 <= uVar35) {
        iVar64 = 0;
        iVar65 = *piVar8;
        uVar30 = (uint)LZCOUNT(uVar53 + 1) ^ 0x1f;
        uVar7 = iVar55 + uVar35;
        uVar39 = uVar7;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            uVar14 = (uint)LZCOUNT(uVar35 - 2) ^ 0x1f;
            iVar66 = iVar62 + iVar60 +
                     ((uVar35 - 2) * 0x100 >> (ulong)(uVar14 & 0x1f)) + (uVar14 + uVar30) * 0x100 +
                     0x1000;
            uVar13 = (ulong)(uVar35 + iVar55);
            if ((uint)uVar49 < uVar35 + iVar55) goto LAB_1006f0078;
LAB_1006effc8:
            if (iVar66 < piVar1[uVar13 * 7]) goto LAB_1006eff5c;
          }
          else {
            uVar14 = uVar35 - 3;
            if (uVar14 < 0x80) {
              uVar14 = (uint)(byte)(&DAT_10084ff08)[uVar14];
            }
            else {
              uVar14 = 0x43 - (int)LZCOUNT(uVar14);
            }
            iVar66 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar30 * 4) + 1;
            uVar40 = (uint)LZCOUNT(iVar66) ^ 0x1f;
            iVar67 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar14 * 4) + 1;
            uVar2 = (uint)LZCOUNT(iVar67) ^ 0x1f;
            iVar66 = iVar62 + iVar60 +
                     (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                      ((uint)(iVar66 * 0x100) >> (ulong)(uVar40 & 0x1f))) -
                     ((uint)(iVar67 * 0x100) >> (ulong)(uVar2 & 0x1f))) +
                     (((uVar30 + *(int *)(&DAT_10084fe34 + (ulong)uVar14 * 4)) - uVar40) - uVar2) *
                     0x100 + 0x33;
            uVar13 = (ulong)(uVar35 + iVar55);
            if (uVar35 + iVar55 <= (uint)uVar49) goto LAB_1006effc8;
LAB_1006f0078:
            uVar52 = uVar49 & 0xffffffff;
            uVar19 = (uVar7 - iVar64) - uVar52;
            uVar49 = uVar52;
            if (uVar19 < 4) {
LAB_1006f00e0:
              piVar8 = local_b0 + uVar49 * 7;
              do {
                uVar49 = uVar49 + 1;
                *piVar8 = 0x40000000;
                piVar8 = piVar8 + 7;
              } while (uVar49 < uVar13);
            }
            else {
              uVar49 = (uVar19 & 0xfffffffffffffffc) + uVar52;
              uVar50 = uVar39 - uVar52 & 0xfffffffffffffffc;
              piVar8 = local_c0 + uVar52 * 7;
              do {
                piVar8[-7] = 0x40000000;
                *piVar8 = 0x40000000;
                piVar8[7] = 0x40000000;
                piVar8[0xe] = 0x40000000;
                piVar8 = piVar8 + 0x1c;
                uVar50 = uVar50 - 4;
              } while (uVar50 != 0);
              if (uVar19 != (uVar19 & 0xfffffffffffffffc)) goto LAB_1006f00e0;
            }
LAB_1006eff5c:
            piVar8 = piVar1 + uVar13 * 7;
            piVar8[2] = uVar35;
            piVar8[3] = uVar29;
            *piVar8 = iVar66;
            piVar8[1] = uVar53;
            *(ulong *)(piVar8 + 4) = CONCAT44(iVar63,iVar58);
            piVar8[6] = iVar65;
          }
          uVar35 = uVar35 - 1;
          iVar64 = iVar64 + 1;
          uVar39 = uVar39 - 1;
        } while (uVar33 <= uVar35);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar10);
  }
LAB_1006ee488:
  uVar12 = (ulong)(iVar55 + 1U);
  uVar16 = uVar49;
  if ((uint)uVar49 < iVar55 + 1U) goto LAB_1006f02a4;
  goto LAB_1006ee498;
}

