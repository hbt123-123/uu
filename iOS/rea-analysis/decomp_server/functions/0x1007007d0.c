// rea decompile_all
// name: FUN_1007007d0
// address: 0x1007007d0
// body: available
// range: 0x1007007d0-0x100705147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100705144 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001007050e8) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1007007d0(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  long lVar12;
  ulong *puVar13;
  int *piVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong *puVar20;
  int iVar21;
  uint uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ulong *puVar38;
  long lVar39;
  ulong *puVar40;
  ulong *puVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  uint uVar45;
  ulong *puVar46;
  uint uVar47;
  uint uVar48;
  ulong *puVar49;
  int *piVar50;
  int iVar51;
  undefined8 *puVar52;
  ulong *puVar53;
  ulong uVar54;
  int iVar55;
  undefined8 *puVar56;
  long lVar57;
  ulong *puVar58;
  ulong *puVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  uint uVar63;
  ulong uVar64;
  int iVar65;
  int iVar67;
  undefined8 uVar66;
  undefined8 uVar68;
  undefined8 uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  uint local_220;
  int local_1b4;
  uint *local_178;
  uint *local_170;
  uint *local_168;
  int local_15c;
  uint *local_138;
  uint *local_130;
  uint local_e4;
  ulong *local_c0;
  int local_98;
  uint local_94;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar58 = puVar3 + -1;
  lVar30 = *(long *)(param_1 + 8);
  uVar29 = *(uint *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar5) {
    uVar5 = 0xfff;
  }
  uVar26 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar26 = 4;
  }
  local_220 = *(uint *)(param_1 + 0x24);
  piVar7 = *(int **)(param_1 + 0x68);
  piVar8 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,2);
  puVar53 = param_4;
  if ((ulong *)(lVar30 + (ulong)uVar29) == param_4) {
    puVar53 = (ulong *)((long)param_4 + 1);
  }
  if (puVar53 < puVar58) {
    puVar31 = (ulong *)(ulong)(uVar26 - 1);
    puVar49 = (ulong *)((long)puVar3 - 7);
    puVar38 = (ulong *)((long)puVar3 - 3);
    puVar32 = (ulong *)((long)puVar3 - 1);
    puVar46 = puVar3 + -4;
    piVar2 = piVar8 + 7;
    lVar30 = (ulong)uVar26 - 1;
    do {
      while( true ) {
        iVar16 = (int)puVar53;
        local_98 = iVar16 - (int)param_4;
        lVar57 = *(long *)(param_1 + 8);
        uVar29 = *(uint *)(param_1 + 0x24);
        uVar61 = (ulong)uVar29;
        if ((ulong *)(lVar57 + uVar61) <= puVar53) break;
LAB_1007008f0:
        puVar53 = (ulong *)((long)puVar53 + 1);
        if (puVar58 <= puVar53) goto LAB_100705104;
      }
      iVar65 = *(int *)(param_1 + 200);
      uVar42 = iVar16 - (int)lVar57;
      while (uVar29 < uVar42) {
        lVar12 = param_1;
        FUN_100705148(param_1,lVar57 + uVar61,puVar3,iVar65,1);
        uVar29 = (int)lVar12 + (int)uVar61;
        uVar61 = (ulong)uVar29;
      }
      *(uint *)(param_1 + 0x24) = uVar42;
      local_c0 = puVar31;
      if (iVar65 - 6U < 2) {
        uVar61 = 0;
        uVar29 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar29) {
          uVar29 = 0xfff;
        }
        uVar45 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar27 = ~uVar45;
        lVar57 = *(long *)(param_1 + 8);
        lVar12 = *(long *)(param_1 + 0x10);
        uVar47 = iVar16 - (int)lVar57;
        uVar42 = 0;
        if (uVar27 <= uVar47) {
          uVar42 = uVar47 - uVar27;
        }
        uVar19 = *(uint *)(param_1 + 0x18);
        uVar54 = (ulong)uVar19;
        uVar22 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar48 = uVar47 - uVar22;
        if (uVar47 - *(uint *)(param_1 + 0x1c) <= uVar22 || *(int *)(param_1 + 0x20) != 0) {
          uVar48 = *(uint *)(param_1 + 0x1c);
        }
        uVar22 = uVar48;
        if (uVar48 < 2) {
          uVar22 = 1;
        }
        bVar11 = local_98 == 0;
        uVar64 = (ulong)bVar11;
        lVar43 = *(long *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0xc4);
        uVar25 = *puVar53 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
        uVar63 = *(uint *)(lVar43 + uVar25 * 4);
        lVar39 = *(long *)(param_1 + 0x40);
        local_138 = (uint *)(lVar39 + (ulong)((uVar47 & (uVar45 ^ 0xffffffff)) << 1) * 4);
        local_130 = local_138 + 1;
        iVar65 = uVar47 + 9;
        uVar17 = 3;
        if (bVar11) {
          uVar17 = 4;
        }
        puVar20 = (ulong *)((long)puVar53 + 4);
        do {
          if (uVar64 == 3) {
            uVar45 = *param_3 - 1;
            uVar35 = *param_3 - 2;
            if (uVar47 - uVar19 <= uVar35) goto LAB_100700e44;
LAB_100700ed4:
            if ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar45)) {
              lVar33 = -(ulong)uVar45;
              puVar23 = (ulong *)((long)puVar20 + lVar33);
              puVar24 = puVar20;
              if (puVar20 < puVar49) {
                if (*puVar23 == *puVar20) {
                  iVar67 = 0;
                  puVar23 = (ulong *)((long)puVar53 + 0xc + lVar33);
                  puVar24 = (ulong *)((long)puVar53 + 0xc);
                  do {
                    if (puVar49 <= puVar24) goto LAB_100700f7c;
                    uVar60 = *puVar23;
                    uVar62 = *puVar24;
                    iVar67 = iVar67 + 8;
                    puVar23 = puVar23 + 1;
                    puVar24 = puVar24 + 1;
                  } while (uVar60 == uVar62);
                  uVar62 = uVar62 ^ uVar60;
                  uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1;
                  uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2;
                  uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
                  uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 | (uVar62 & 0xffff0000ffff) << 0x10
                  ;
                  iVar67 = iVar67 + (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                }
                else {
                  uVar62 = *puVar20 ^ *puVar23;
                  uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1;
                  uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2;
                  uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
                  uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 | (uVar62 & 0xffff0000ffff) << 0x10
                  ;
                  iVar67 = (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                }
              }
              else {
LAB_100700f7c:
                if (puVar24 < puVar38) {
                  if ((uint)*puVar23 == (uint)*puVar24) {
                    puVar23 = (ulong *)((long)puVar23 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar24 < puVar32) {
                  if (*(short *)puVar23 == *(short *)puVar24) {
                    puVar23 = (ulong *)((long)puVar23 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
                }
                if ((puVar24 < puVar3) && ((char)*puVar23 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                iVar67 = (int)puVar24 - (int)puVar20;
              }
              uVar45 = iVar67 + 4;
              puVar23 = (ulong *)(ulong)uVar45;
              if (puVar23 <= local_c0) goto LAB_100700e18;
              goto LAB_100701040;
            }
          }
          else {
            uVar45 = param_3[uVar64];
            uVar35 = uVar45 - 1;
            if (uVar35 < uVar47 - uVar19) goto LAB_100700ed4;
LAB_100700e44:
            if ((uVar35 < uVar47 - uVar48 && (uVar47 - uVar45) - uVar19 < 0xfffffffd) &&
               (puVar4 = (uint *)(lVar12 + (ulong)(uVar47 - uVar45)), (uint)*puVar53 == *puVar4)) {
              puVar23 = puVar20;
              FUN_1006c7460(puVar20,puVar4 + 1,puVar3,lVar12 + uVar54,lVar57 + uVar54);
              uVar45 = (int)puVar23 + 4;
              puVar23 = (ulong *)(ulong)uVar45;
              if (local_c0 < puVar23) {
LAB_100701040:
                piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar11;
                (piVar7 + uVar61 * 2)[1] = uVar45;
                local_e4 = (int)uVar61 + 1;
                uVar61 = (ulong)local_e4;
                if ((uVar29 < uVar45) ||
                   (local_c0 = puVar23, (ulong *)((long)puVar53 + (long)puVar23) == puVar3))
                goto joined_r0x0001007040fc;
              }
            }
          }
LAB_100700e18:
          local_e4 = (uint)uVar61;
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar17);
        *(uint *)(lVar43 + uVar25 * 4) = uVar47;
        if (uVar22 <= uVar63) {
          puVar23 = (ulong *)0x0;
          puVar20 = (ulong *)0x0;
          uVar29 = ~(-1 << (ulong)(uVar6 & 0x1f));
          iVar67 = iVar65;
          do {
            puVar24 = puVar23;
            if (puVar20 <= puVar23) {
              puVar24 = puVar20;
            }
            uVar64 = (ulong)uVar63;
            puVar59 = (ulong *)((long)puVar53 + (long)puVar24);
            if ((long)puVar24 + uVar64 < uVar54) {
              FUN_1006c7460(puVar59,lVar12 + uVar64 + (long)puVar24,puVar3,lVar12 + uVar54,
                            lVar57 + uVar54);
              puVar59 = (ulong *)((long)puVar59 + (long)puVar24);
              lVar43 = lVar12 + uVar64;
              if (uVar54 <= (long)puVar59 + uVar64) {
                lVar43 = lVar57 + uVar64;
              }
            }
            else {
              lVar43 = lVar57 + uVar64;
              puVar15 = (ulong *)(lVar43 + (long)puVar24);
              puVar13 = puVar59;
              if (puVar59 < puVar49) {
                if (*puVar15 == *puVar59) {
                  lVar33 = 0;
                  puVar13 = (ulong *)((long)(puVar53 + 1) + (long)puVar24);
                  puVar15 = (ulong *)((long)puVar24 + lVar57 + 8 + uVar64);
                  do {
                    if (puVar49 <= puVar13) goto LAB_1007019fc;
                    uVar17 = *puVar15;
                    uVar64 = *puVar13;
                    lVar33 = lVar33 + 8;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  } while (uVar17 == uVar64);
                  uVar64 = uVar64 ^ uVar17;
                  uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                  uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                  uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                  uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10
                  ;
                  puVar59 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3
                                               ) + (long)puVar24);
                  goto joined_r0x000100701b38;
                }
                uVar64 = *puVar59 ^ *puVar15;
                uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
                uVar64 = (ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3;
              }
              else {
LAB_1007019fc:
                if (puVar13 < puVar38) {
                  if ((uint)*puVar15 == (uint)*puVar13) {
                    puVar13 = (ulong *)((long)puVar13 + 4);
                    puVar15 = (ulong *)((long)puVar15 + 4);
                  }
                }
                if (puVar13 < puVar32) {
                  if (*(short *)puVar15 == *(short *)puVar13) {
                    puVar13 = (ulong *)((long)puVar13 + 2);
                    puVar15 = (ulong *)((long)puVar15 + 2);
                  }
                }
                if ((puVar13 < puVar3) && ((char)*puVar15 == (char)*puVar13)) {
                  puVar13 = (ulong *)((long)puVar13 + 1);
                }
                uVar64 = (long)puVar13 - (long)puVar59;
              }
              puVar59 = (ulong *)(uVar64 + (long)puVar24);
            }
joined_r0x000100701b38:
            iVar65 = iVar67;
            if (local_c0 < puVar59) {
              iVar65 = uVar63 + (int)puVar59;
              if (puVar59 <= (ulong *)(ulong)(iVar67 - uVar63)) {
                iVar65 = iVar67;
              }
              piVar7[uVar61 * 2] = (uVar47 + 2) - uVar63;
              (piVar7 + uVar61 * 2)[1] = (int)puVar59;
              local_e4 = (int)uVar61 + 1;
              uVar61 = (ulong)local_e4;
              if (((ulong *)0x1000 < puVar59) ||
                 (local_c0 = puVar59, (ulong *)((long)puVar53 + (long)puVar59) == puVar3)) break;
            }
            local_e4 = (uint)uVar61;
            puVar4 = (uint *)(lVar39 + (ulong)((uVar63 & uVar27) << 1) * 4);
            if (*(byte *)(lVar43 + (long)puVar59) < *(byte *)((long)puVar53 + (long)puVar59)) {
              *local_138 = uVar63;
              if (uVar63 <= uVar42) {
                local_138 = &local_94;
                break;
              }
              puVar4 = puVar4 + 1;
              puVar23 = puVar59;
              local_138 = puVar4;
            }
            else {
              *local_130 = uVar63;
              local_130 = puVar4;
              puVar20 = puVar59;
              if (uVar63 <= uVar42) {
                local_130 = &local_94;
                break;
              }
            }
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            uVar63 = *puVar4;
            iVar67 = iVar65;
          } while (uVar22 <= uVar63);
        }
        *local_130 = 0;
        *local_138 = 0;
        *(int *)(param_1 + 0x24) = iVar65 + -8;
joined_r0x0001007040fc:
        if (local_e4 == 0) goto LAB_1007008f0;
      }
      else {
        if (iVar65 == 5) {
          uVar61 = 0;
          uVar29 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar29) {
            uVar29 = 0xfff;
          }
          uVar45 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar27 = ~uVar45;
          lVar57 = *(long *)(param_1 + 8);
          lVar12 = *(long *)(param_1 + 0x10);
          uVar47 = iVar16 - (int)lVar57;
          uVar42 = 0;
          if (uVar27 <= uVar47) {
            uVar42 = uVar47 - uVar27;
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          uVar54 = (ulong)uVar19;
          uVar22 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar48 = uVar47 - uVar22;
          if (uVar47 - *(uint *)(param_1 + 0x1c) <= uVar22 || *(int *)(param_1 + 0x20) != 0) {
            uVar48 = *(uint *)(param_1 + 0x1c);
          }
          uVar22 = uVar48;
          if (uVar48 < 2) {
            uVar22 = 1;
          }
          bVar11 = local_98 == 0;
          uVar64 = (ulong)bVar11;
          lVar43 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0xc4);
          uVar25 = *puVar53 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar63 = *(uint *)(lVar43 + uVar25 * 4);
          lVar39 = *(long *)(param_1 + 0x40);
          local_138 = (uint *)(lVar39 + (ulong)((uVar47 & (uVar45 ^ 0xffffffff)) << 1) * 4);
          local_130 = local_138 + 1;
          iVar65 = uVar47 + 9;
          uVar17 = 3;
          if (bVar11) {
            uVar17 = 4;
          }
          puVar20 = (ulong *)((long)puVar53 + 4);
          puVar23 = puVar31;
          do {
            if (uVar64 == 3) {
              uVar45 = *param_3 - 1;
              uVar35 = *param_3 - 2;
              if (uVar47 - uVar19 <= uVar35) goto LAB_1007011fc;
LAB_100701294:
              if ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar45)) {
                lVar33 = -(ulong)uVar45;
                puVar24 = (ulong *)((long)puVar20 + lVar33);
                puVar59 = puVar20;
                if (puVar20 < puVar49) {
                  if (*puVar24 == *puVar20) {
                    iVar67 = 0;
                    puVar24 = (ulong *)((long)puVar53 + 0xc + lVar33);
                    puVar59 = (ulong *)((long)puVar53 + 0xc);
                    do {
                      if (puVar49 <= puVar59) goto LAB_100701334;
                      uVar60 = *puVar24;
                      uVar62 = *puVar59;
                      iVar67 = iVar67 + 8;
                      puVar24 = puVar24 + 1;
                      puVar59 = puVar59 + 1;
                    } while (uVar60 == uVar62);
                    uVar62 = uVar62 ^ uVar60;
                    uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1
                    ;
                    uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2
                    ;
                    uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
                    uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar62 & 0xffff0000ffff) << 0x10;
                    iVar67 = iVar67 + (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                  }
                  else {
                    uVar62 = *puVar20 ^ *puVar24;
                    uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1
                    ;
                    uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2
                    ;
                    uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
                    uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar62 & 0xffff0000ffff) << 0x10;
                    iVar67 = (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                  }
                }
                else {
LAB_100701334:
                  if (puVar59 < puVar38) {
                    if ((uint)*puVar24 == (uint)*puVar59) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar59 = (ulong *)((long)puVar59 + 4);
                    }
                  }
                  if (puVar59 < puVar32) {
                    if (*(short *)puVar24 == *(short *)puVar59) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar59 = (ulong *)((long)puVar59 + 2);
                    }
                  }
                  if ((puVar59 < puVar3) && ((char)*puVar24 == (char)*puVar59)) {
                    puVar59 = (ulong *)((long)puVar59 + 1);
                  }
                  iVar67 = (int)puVar59 - (int)puVar20;
                }
                goto joined_r0x000100701394;
              }
            }
            else {
              uVar45 = param_3[uVar64];
              uVar35 = uVar45 - 1;
              if (uVar35 < uVar47 - uVar19) goto LAB_100701294;
LAB_1007011fc:
              if ((uVar35 < uVar47 - uVar48 && (uVar47 - uVar45) - uVar19 < 0xfffffffd) &&
                 (puVar4 = (uint *)(lVar12 + (ulong)(uVar47 - uVar45)), (uint)*puVar53 == *puVar4))
              {
                puVar24 = puVar20;
                FUN_1006c7460(puVar20,puVar4 + 1,puVar3,lVar12 + uVar54,lVar57 + uVar54);
                iVar67 = (int)puVar24;
joined_r0x000100701394:
                uVar10 = iVar67 + 4;
                uVar66 = ZEXT48((uint)uVar10);
                if (puVar23 < (ulong)uVar66) {
                  piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar11;
                  (piVar7 + uVar61 * 2)[1] = uVar10;
                  local_e4 = (int)uVar61 + 1;
                  uVar61 = (ulong)local_e4;
                  if ((uVar29 < (uint)uVar10) ||
                     (puVar23 = (ulong *)uVar66, (ulong *)((long)puVar53 + uVar66) == puVar3))
                  goto joined_r0x0001007040fc;
                }
              }
            }
            local_e4 = (uint)uVar61;
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar17);
          *(uint *)(lVar43 + uVar25 * 4) = uVar47;
          if (uVar22 <= uVar63) {
            puVar24 = (ulong *)0x0;
            puVar20 = (ulong *)0x0;
            uVar29 = ~(-1 << (ulong)(uVar6 & 0x1f));
            iVar67 = iVar65;
            do {
              puVar59 = puVar24;
              if (puVar20 <= puVar24) {
                puVar59 = puVar20;
              }
              uVar64 = (ulong)uVar63;
              puVar15 = (ulong *)((long)puVar53 + (long)puVar59);
              if ((long)puVar59 + uVar64 < uVar54) {
                FUN_1006c7460(puVar15,lVar12 + uVar64 + (long)puVar59,puVar3,lVar12 + uVar54,
                              lVar57 + uVar54);
                puVar15 = (ulong *)((long)puVar15 + (long)puVar59);
                lVar43 = lVar12 + uVar64;
                if (uVar54 <= (long)puVar15 + uVar64) {
                  lVar43 = lVar57 + uVar64;
                }
              }
              else {
                lVar43 = lVar57 + uVar64;
                puVar13 = (ulong *)(lVar43 + (long)puVar59);
                puVar41 = puVar15;
                if (puVar15 < puVar49) {
                  if (*puVar13 == *puVar15) {
                    lVar33 = 0;
                    puVar41 = (ulong *)((long)(puVar53 + 1) + (long)puVar59);
                    puVar13 = (ulong *)((long)puVar59 + lVar57 + 8 + uVar64);
                    do {
                      if (puVar49 <= puVar41) goto LAB_1007042dc;
                      uVar17 = *puVar13;
                      uVar64 = *puVar41;
                      lVar33 = lVar33 + 8;
                      puVar41 = puVar41 + 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar17 == uVar64);
                    uVar64 = uVar64 ^ uVar17;
                    uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >>
                                                 3) + (long)puVar59);
                    goto joined_r0x000100704214;
                  }
                  uVar64 = *puVar15 ^ *puVar13;
                  uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                  uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                  uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                  uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10
                  ;
                  uVar64 = (ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3;
                }
                else {
LAB_1007042dc:
                  if (puVar41 < puVar38) {
                    if ((uint)*puVar13 == (uint)*puVar41) {
                      puVar41 = (ulong *)((long)puVar41 + 4);
                      puVar13 = (ulong *)((long)puVar13 + 4);
                    }
                  }
                  if (puVar41 < puVar32) {
                    if (*(short *)puVar13 == *(short *)puVar41) {
                      puVar41 = (ulong *)((long)puVar41 + 2);
                      puVar13 = (ulong *)((long)puVar13 + 2);
                    }
                  }
                  if ((puVar41 < puVar3) && ((char)*puVar13 == (char)*puVar41)) {
                    puVar41 = (ulong *)((long)puVar41 + 1);
                  }
                  uVar64 = (long)puVar41 - (long)puVar15;
                }
                puVar15 = (ulong *)(uVar64 + (long)puVar59);
              }
joined_r0x000100704214:
              iVar65 = iVar67;
              if (puVar23 < puVar15) {
                iVar65 = uVar63 + (int)puVar15;
                if (puVar15 <= (ulong *)(ulong)(iVar67 - uVar63)) {
                  iVar65 = iVar67;
                }
                piVar7[uVar61 * 2] = (uVar47 + 2) - uVar63;
                (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                local_e4 = (int)uVar61 + 1;
                uVar61 = (ulong)local_e4;
                if (((ulong *)0x1000 < puVar15) ||
                   (puVar23 = puVar15, (ulong *)((long)puVar53 + (long)puVar15) == puVar3)) break;
              }
              local_e4 = (uint)uVar61;
              puVar4 = (uint *)(lVar39 + (ulong)((uVar63 & uVar27) << 1) * 4);
              if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar53 + (long)puVar15)) {
                *local_138 = uVar63;
                if (uVar63 <= uVar42) {
                  local_138 = &local_94;
                  break;
                }
                puVar4 = puVar4 + 1;
                puVar24 = puVar15;
                local_138 = puVar4;
              }
              else {
                *local_130 = uVar63;
                local_130 = puVar4;
                puVar20 = puVar15;
                if (uVar63 <= uVar42) {
                  local_130 = &local_94;
                  break;
                }
              }
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              uVar63 = *puVar4;
              iVar67 = iVar65;
            } while (uVar22 <= uVar63);
          }
          *local_130 = 0;
          *local_138 = 0;
          *(int *)(param_1 + 0x24) = iVar65 + -8;
          goto joined_r0x0001007040fc;
        }
        if (iVar65 != 3) {
          uVar61 = 0;
          uVar29 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar29) {
            uVar29 = 0xfff;
          }
          uVar45 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar27 = ~uVar45;
          lVar57 = *(long *)(param_1 + 8);
          lVar12 = *(long *)(param_1 + 0x10);
          uVar47 = iVar16 - (int)lVar57;
          uVar42 = 0;
          if (uVar27 <= uVar47) {
            uVar42 = uVar47 - uVar27;
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          uVar54 = (ulong)uVar19;
          uVar22 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar48 = uVar47 - uVar22;
          if (uVar47 - *(uint *)(param_1 + 0x1c) <= uVar22 || *(int *)(param_1 + 0x20) != 0) {
            uVar48 = *(uint *)(param_1 + 0x1c);
          }
          uVar22 = uVar48;
          if (uVar48 < 2) {
            uVar22 = 1;
          }
          bVar11 = local_98 == 0;
          uVar64 = (ulong)bVar11;
          lVar43 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0xc4);
          uVar35 = (uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar63 = *(uint *)(lVar43 + (ulong)uVar35 * 4);
          lVar39 = *(long *)(param_1 + 0x40);
          local_138 = (uint *)(lVar39 + (ulong)((uVar47 & (uVar45 ^ 0xffffffff)) << 1) * 4);
          local_130 = local_138 + 1;
          iVar65 = uVar47 + 9;
          uVar17 = 3;
          if (bVar11) {
            uVar17 = 4;
          }
          puVar20 = (ulong *)((long)puVar53 + 4);
          puVar23 = puVar31;
          do {
            if (uVar64 == 3) {
              uVar45 = *param_3 - 1;
              uVar34 = *param_3 - 2;
              if (uVar47 - uVar19 <= uVar34) goto LAB_100701564;
LAB_100701600:
              if ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar45)) {
                lVar33 = -(ulong)uVar45;
                puVar24 = (ulong *)((long)puVar20 + lVar33);
                puVar59 = puVar20;
                if (puVar20 < puVar49) {
                  if (*puVar24 == *puVar20) {
                    iVar67 = 0;
                    puVar24 = (ulong *)((long)puVar53 + 0xc + lVar33);
                    puVar59 = (ulong *)((long)puVar53 + 0xc);
                    do {
                      if (puVar49 <= puVar59) goto LAB_1007016a0;
                      uVar62 = *puVar24;
                      uVar25 = *puVar59;
                      iVar67 = iVar67 + 8;
                      puVar24 = puVar24 + 1;
                      puVar59 = puVar59 + 1;
                    } while (uVar62 == uVar25);
                    uVar25 = uVar25 ^ uVar62;
                    uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1
                    ;
                    uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2
                    ;
                    uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    iVar67 = iVar67 + (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                  }
                  else {
                    uVar25 = *puVar20 ^ *puVar24;
                    uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1
                    ;
                    uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2
                    ;
                    uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    iVar67 = (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                  }
                }
                else {
LAB_1007016a0:
                  if (puVar59 < puVar38) {
                    if ((uint)*puVar24 == (uint)*puVar59) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar59 = (ulong *)((long)puVar59 + 4);
                    }
                  }
                  if (puVar59 < puVar32) {
                    if (*(short *)puVar24 == *(short *)puVar59) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar59 = (ulong *)((long)puVar59 + 2);
                    }
                  }
                  if ((puVar59 < puVar3) && ((char)*puVar24 == (char)*puVar59)) {
                    puVar59 = (ulong *)((long)puVar59 + 1);
                  }
                  iVar67 = (int)puVar59 - (int)puVar20;
                }
                goto joined_r0x000100701700;
              }
            }
            else {
              uVar45 = param_3[uVar64];
              uVar34 = uVar45 - 1;
              if (uVar34 < uVar47 - uVar19) goto LAB_100701600;
LAB_100701564:
              if ((uVar34 < uVar47 - uVar48 && (uVar47 - uVar45) - uVar19 < 0xfffffffd) &&
                 (puVar4 = (uint *)(lVar12 + (ulong)(uVar47 - uVar45)), (uint)*puVar53 == *puVar4))
              {
                puVar24 = puVar20;
                FUN_1006c7460(puVar20,puVar4 + 1,puVar3,lVar12 + uVar54,lVar57 + uVar54);
                iVar67 = (int)puVar24;
joined_r0x000100701700:
                uVar10 = iVar67 + 4;
                uVar66 = ZEXT48((uint)uVar10);
                if (puVar23 < (ulong)uVar66) {
                  piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar11;
                  (piVar7 + uVar61 * 2)[1] = uVar10;
                  local_e4 = (int)uVar61 + 1;
                  uVar61 = (ulong)local_e4;
                  if ((uVar29 < (uint)uVar10) ||
                     (puVar23 = (ulong *)uVar66, (ulong *)((long)puVar53 + uVar66) == puVar3))
                  goto joined_r0x0001007040fc;
                }
              }
            }
            local_e4 = (uint)uVar61;
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar17);
          *(uint *)(lVar43 + (ulong)uVar35 * 4) = uVar47;
          if (uVar22 <= uVar63) {
            puVar20 = (ulong *)0x0;
            puVar24 = (ulong *)0x0;
            uVar29 = ~(-1 << (ulong)(uVar6 & 0x1f));
            iVar67 = iVar65;
            do {
              puVar59 = puVar20;
              if (puVar24 <= puVar20) {
                puVar59 = puVar24;
              }
              uVar64 = (ulong)uVar63;
              puVar15 = (ulong *)((long)puVar53 + (long)puVar59);
              if ((long)puVar59 + uVar64 < uVar54) {
                FUN_1006c7460(puVar15,lVar12 + uVar64 + (long)puVar59,puVar3,lVar12 + uVar54,
                              lVar57 + uVar54);
                puVar15 = (ulong *)((long)puVar15 + (long)puVar59);
                lVar43 = lVar12 + uVar64;
                if (uVar54 <= (long)puVar15 + uVar64) {
                  lVar43 = lVar57 + uVar64;
                }
              }
              else {
                lVar43 = lVar57 + uVar64;
                puVar13 = (ulong *)(lVar43 + (long)puVar59);
                puVar41 = puVar15;
                if (puVar15 < puVar49) {
                  if (*puVar13 == *puVar15) {
                    lVar33 = 0;
                    puVar41 = (ulong *)((long)(puVar53 + 1) + (long)puVar59);
                    puVar13 = (ulong *)((long)puVar59 + lVar57 + 8 + uVar64);
                    do {
                      if (puVar49 <= puVar41) goto LAB_1007045a0;
                      uVar17 = *puVar13;
                      uVar64 = *puVar41;
                      lVar33 = lVar33 + 8;
                      puVar41 = puVar41 + 1;
                      puVar13 = puVar13 + 1;
                    } while (uVar17 == uVar64);
                    uVar64 = uVar64 ^ uVar17;
                    uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >>
                                                 3) + (long)puVar59);
                    goto joined_r0x0001007044d0;
                  }
                  uVar64 = *puVar15 ^ *puVar13;
                  uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                  uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                  uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                  uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10
                  ;
                  uVar64 = (ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3;
                }
                else {
LAB_1007045a0:
                  if (puVar41 < puVar38) {
                    if ((uint)*puVar13 == (uint)*puVar41) {
                      puVar41 = (ulong *)((long)puVar41 + 4);
                      puVar13 = (ulong *)((long)puVar13 + 4);
                    }
                  }
                  if (puVar41 < puVar32) {
                    if (*(short *)puVar13 == *(short *)puVar41) {
                      puVar41 = (ulong *)((long)puVar41 + 2);
                      puVar13 = (ulong *)((long)puVar13 + 2);
                    }
                  }
                  if ((puVar41 < puVar3) && ((char)*puVar13 == (char)*puVar41)) {
                    puVar41 = (ulong *)((long)puVar41 + 1);
                  }
                  uVar64 = (long)puVar41 - (long)puVar15;
                }
                puVar15 = (ulong *)(uVar64 + (long)puVar59);
              }
joined_r0x0001007044d0:
              iVar65 = iVar67;
              if (puVar23 < puVar15) {
                iVar65 = uVar63 + (int)puVar15;
                if (puVar15 <= (ulong *)(ulong)(iVar67 - uVar63)) {
                  iVar65 = iVar67;
                }
                piVar7[uVar61 * 2] = (uVar47 + 2) - uVar63;
                (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                local_e4 = (int)uVar61 + 1;
                uVar61 = (ulong)local_e4;
                if (((ulong *)0x1000 < puVar15) ||
                   (puVar23 = puVar15, (ulong *)((long)puVar53 + (long)puVar15) == puVar3)) break;
              }
              local_e4 = (uint)uVar61;
              puVar4 = (uint *)(lVar39 + (ulong)((uVar63 & uVar27) << 1) * 4);
              if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar53 + (long)puVar15)) {
                *local_138 = uVar63;
                if (uVar63 <= uVar42) {
                  local_138 = &local_94;
                  break;
                }
                puVar4 = puVar4 + 1;
                puVar20 = puVar15;
                local_138 = puVar4;
              }
              else {
                *local_130 = uVar63;
                local_130 = puVar4;
                puVar24 = puVar15;
                if (uVar63 <= uVar42) {
                  local_130 = &local_94;
                  break;
                }
              }
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              uVar63 = *puVar4;
              iVar67 = iVar65;
            } while (uVar22 <= uVar63);
          }
          *local_130 = 0;
          *local_138 = 0;
          *(int *)(param_1 + 0x24) = iVar65 + -8;
          goto joined_r0x0001007040fc;
        }
        uVar61 = 0;
        uVar29 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar29) {
          uVar29 = 0xfff;
        }
        uVar45 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar27 = ~uVar45;
        lVar57 = *(long *)(param_1 + 8);
        lVar12 = *(long *)(param_1 + 0x10);
        uVar47 = (uint)((long)puVar53 - lVar57);
        uVar42 = 0;
        if (uVar27 <= uVar47) {
          uVar42 = uVar47 - uVar27;
        }
        uVar19 = *(uint *)(param_1 + 0x18);
        uVar54 = (ulong)uVar19;
        uVar22 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar48 = uVar47 - uVar22;
        if (uVar47 - *(uint *)(param_1 + 0x1c) <= uVar22 || *(int *)(param_1 + 0x20) != 0) {
          uVar48 = *(uint *)(param_1 + 0x1c);
        }
        uVar22 = uVar48;
        if (uVar48 < 2) {
          uVar22 = 1;
        }
        bVar11 = local_98 == 0;
        uVar64 = (ulong)bVar11;
        lVar43 = *(long *)(param_1 + 0x30);
        uVar6 = *(uint *)(param_1 + 0xc4);
        uVar35 = (uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
        uVar63 = *(uint *)(lVar43 + (ulong)uVar35 * 4);
        lVar39 = *(long *)(param_1 + 0x40);
        local_130 = (uint *)(lVar39 + (ulong)((uVar47 & (uVar45 ^ 0xffffffff)) << 1) * 4);
        local_138 = local_130 + 1;
        iVar65 = uVar47 + 9;
        uVar17 = 3;
        if (bVar11) {
          uVar17 = 4;
        }
        puVar20 = (ulong *)((long)puVar53 + 3);
        do {
          if (uVar64 == 3) {
            uVar45 = *param_3 - 1;
            uVar34 = *param_3 - 2;
            if (uVar47 - uVar19 <= uVar34) goto LAB_100700ad0;
LAB_100700b58:
            if (((*(uint *)((long)puVar53 - (ulong)uVar45) ^ (uint)*puVar53) & 0xffffff) == 0) {
              lVar33 = -(ulong)uVar45;
              puVar23 = (ulong *)((long)puVar20 + lVar33);
              puVar24 = puVar20;
              if (puVar20 < puVar49) {
                if (*puVar23 == *puVar20) {
                  iVar67 = 0;
                  puVar23 = (ulong *)((long)puVar53 + 0xb + lVar33);
                  puVar24 = (ulong *)((long)puVar53 + 0xb);
                  do {
                    if (puVar49 <= puVar24) goto LAB_100700c30;
                    uVar62 = *puVar23;
                    uVar25 = *puVar24;
                    iVar67 = iVar67 + 8;
                    puVar23 = puVar23 + 1;
                    puVar24 = puVar24 + 1;
                  } while (uVar62 == uVar25);
                  uVar25 = uVar25 ^ uVar62;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  iVar67 = iVar67 + (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                }
                else {
                  uVar25 = *puVar20 ^ *puVar23;
                  uVar25 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
                  uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
                  uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                  uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10
                  ;
                  iVar67 = (int)((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
                }
              }
              else {
LAB_100700c30:
                if (puVar24 < puVar38) {
                  if ((uint)*puVar23 == (uint)*puVar24) {
                    puVar23 = (ulong *)((long)puVar23 + 4);
                    puVar24 = (ulong *)((long)puVar24 + 4);
                  }
                }
                if (puVar24 < puVar32) {
                  if (*(short *)puVar23 == *(short *)puVar24) {
                    puVar23 = (ulong *)((long)puVar23 + 2);
                    puVar24 = (ulong *)((long)puVar24 + 2);
                  }
                }
                if ((puVar24 < puVar3) && ((char)*puVar23 == (char)*puVar24)) {
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                iVar67 = (int)puVar24 - (int)puVar20;
              }
              goto joined_r0x000100700c94;
            }
          }
          else {
            uVar45 = param_3[uVar64];
            uVar34 = uVar45 - 1;
            if (uVar34 < uVar47 - uVar19) goto LAB_100700b58;
LAB_100700ad0:
            if ((uVar34 < uVar47 - uVar48 && (uVar47 - uVar45) - uVar19 < 0xfffffffd) &&
               (puVar4 = (uint *)(lVar12 + (ulong)(uVar47 - uVar45)),
               ((*puVar4 ^ (uint)*puVar53) & 0xffffff) == 0)) {
              puVar23 = puVar20;
              FUN_1006c7460(puVar20,(long)puVar4 + 3,puVar3,lVar12 + uVar54,lVar57 + uVar54);
              iVar67 = (int)puVar23;
joined_r0x000100700c94:
              uVar10 = iVar67 + 3;
              uVar66 = ZEXT48((uint)uVar10);
              if (local_c0 < (ulong)uVar66) {
                piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar11;
                (piVar7 + uVar61 * 2)[1] = uVar10;
                local_e4 = (int)uVar61 + 1;
                uVar61 = (ulong)local_e4;
                if ((uVar29 < (uint)uVar10) ||
                   (local_c0 = (ulong *)uVar66, (ulong *)((long)puVar53 + uVar66) == puVar3))
                goto joined_r0x0001007040fc;
              }
            }
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar17);
        local_e4 = (uint)uVar61;
        if ((ulong *)0x2 < local_c0) {
LAB_100704110:
          *(uint *)(lVar43 + (ulong)uVar35 * 4) = uVar47;
          if (uVar22 <= uVar63) {
            puVar23 = (ulong *)0x0;
            puVar20 = (ulong *)0x0;
            uVar29 = ~(-1 << (ulong)(uVar6 & 0x1f));
            uVar61 = (ulong)local_e4;
            iVar67 = iVar65;
            do {
              puVar24 = puVar23;
              if (puVar20 <= puVar23) {
                puVar24 = puVar20;
              }
              uVar64 = (ulong)uVar63;
              puVar59 = (ulong *)((long)puVar53 + (long)puVar24);
              if ((long)puVar24 + uVar64 < uVar54) {
                FUN_1006c7460(puVar59,lVar12 + uVar64 + (long)puVar24,puVar3,lVar12 + uVar54,
                              lVar57 + uVar54);
                puVar59 = (ulong *)((long)puVar59 + (long)puVar24);
                lVar43 = lVar12 + uVar64;
                if (uVar54 <= (long)puVar59 + uVar64) {
                  lVar43 = lVar57 + uVar64;
                }
              }
              else {
                lVar43 = lVar57 + uVar64;
                puVar15 = (ulong *)(lVar43 + (long)puVar24);
                puVar13 = puVar59;
                if (puVar59 < puVar49) {
                  if (*puVar15 == *puVar59) {
                    lVar33 = 0;
                    puVar13 = (ulong *)((long)(puVar53 + 1) + (long)puVar24);
                    puVar15 = (ulong *)((long)puVar24 + lVar57 + 8 + uVar64);
                    do {
                      if (puVar49 <= puVar13) goto LAB_100704880;
                      uVar17 = *puVar15;
                      uVar64 = *puVar13;
                      lVar33 = lVar33 + 8;
                      puVar13 = puVar13 + 1;
                      puVar15 = puVar15 + 1;
                    } while (uVar17 == uVar64);
                    uVar64 = uVar64 ^ uVar17;
                    uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar59 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >>
                                                 3) + (long)puVar24);
                    goto joined_r0x0001007047ac;
                  }
                  uVar64 = *puVar59 ^ *puVar15;
                  uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                  uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                  uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                  uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10
                  ;
                  uVar64 = (ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3;
                }
                else {
LAB_100704880:
                  if (puVar13 < puVar38) {
                    if ((uint)*puVar15 == (uint)*puVar13) {
                      puVar13 = (ulong *)((long)puVar13 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar13 < puVar32) {
                    if (*(short *)puVar15 == *(short *)puVar13) {
                      puVar13 = (ulong *)((long)puVar13 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                  if ((puVar13 < puVar3) && ((char)*puVar15 == (char)*puVar13)) {
                    puVar13 = (ulong *)((long)puVar13 + 1);
                  }
                  uVar64 = (long)puVar13 - (long)puVar59;
                }
                puVar59 = (ulong *)(uVar64 + (long)puVar24);
              }
joined_r0x0001007047ac:
              iVar65 = iVar67;
              if (local_c0 < puVar59) {
                iVar65 = uVar63 + (int)puVar59;
                if (puVar59 <= (ulong *)(ulong)(iVar67 - uVar63)) {
                  iVar65 = iVar67;
                }
                piVar7[uVar61 * 2] = (uVar47 + 2) - uVar63;
                (piVar7 + uVar61 * 2)[1] = (int)puVar59;
                local_e4 = (int)uVar61 + 1;
                uVar61 = (ulong)local_e4;
                if (((ulong *)0x1000 < puVar59) ||
                   (local_c0 = puVar59, (ulong *)((long)puVar53 + (long)puVar59) == puVar3)) break;
              }
              local_e4 = (uint)uVar61;
              puVar4 = (uint *)(lVar39 + (ulong)((uVar63 & uVar27) << 1) * 4);
              if (*(byte *)(lVar43 + (long)puVar59) < *(byte *)((long)puVar53 + (long)puVar59)) {
                *local_130 = uVar63;
                if (uVar63 <= uVar42) {
                  local_130 = &local_94;
                  break;
                }
                puVar4 = puVar4 + 1;
                puVar23 = puVar59;
                local_130 = puVar4;
              }
              else {
                *local_138 = uVar63;
                local_138 = puVar4;
                puVar20 = puVar59;
                if (uVar63 <= uVar42) {
                  local_138 = &local_94;
                  break;
                }
              }
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              uVar63 = *puVar4;
              iVar67 = iVar65;
            } while (uVar22 <= uVar63);
          }
          *local_138 = 0;
          *local_130 = 0;
          *(int *)(param_1 + 0x24) = iVar65 + -8;
          goto joined_r0x0001007040fc;
        }
        lVar33 = *(long *)(param_1 + 0x38);
        uVar61 = *puVar53;
        uVar45 = 0x20 - *(int *)(param_1 + 0x28);
        if (local_220 < uVar47) {
          uVar64 = (ulong)local_220;
          do {
            *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar57 + uVar64) * 0x35a7bd00) >>
                                     (ulong)(uVar45 & 0x1f)) * 4) = (int)uVar64;
            uVar64 = uVar64 + 1;
          } while (((long)puVar53 - lVar57 & 0xffffffffU) != uVar64);
        }
        uVar45 = *(uint *)(lVar33 + (ulong)((uint)uVar61 * 0x35a7bd00 >> (ulong)(uVar45 & 0x1f)) * 4
                          );
        uVar61 = (ulong)uVar45;
        local_220 = uVar47;
        if (uVar45 < uVar22 || uVar47 - uVar45 >> 0x12 != 0) goto LAB_100704110;
        if (uVar45 < uVar19) {
          puVar23 = puVar53;
          FUN_1006c7460(puVar53,lVar12 + uVar61,puVar3,lVar12 + uVar54,lVar57 + uVar54);
        }
        else {
          puVar20 = (ulong *)(lVar57 + uVar61);
          puVar23 = puVar53;
          if (puVar53 < puVar49) {
            if (*puVar20 == *puVar53) {
              lVar33 = 0;
              puVar20 = (ulong *)(lVar57 + uVar61);
              do {
                puVar20 = puVar20 + 1;
                puVar23 = puVar23 + 1;
                if (puVar49 <= puVar23) goto LAB_100704fe0;
                lVar33 = lVar33 + 8;
              } while (*puVar20 == *puVar23);
              uVar61 = *puVar23 ^ *puVar20;
              uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
              uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
              uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
              uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10;
              puVar23 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3));
            }
            else {
              uVar61 = *puVar53 ^ *puVar20;
              uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar61 & 0x5555555555555555) << 1;
              uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 | (uVar61 & 0x3333333333333333) << 2;
              uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 | (uVar61 & 0xff00ff00ff00ff) << 8;
              uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 | (uVar61 & 0xffff0000ffff) << 0x10;
              puVar23 = (ulong *)((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
            }
          }
          else {
LAB_100704fe0:
            if (puVar23 < puVar38) {
              if ((uint)*puVar20 == (uint)*puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 4);
                puVar20 = (ulong *)((long)puVar20 + 4);
              }
            }
            if (puVar23 < puVar32) {
              if (*(short *)puVar20 == *(short *)puVar23) {
                puVar23 = (ulong *)((long)puVar23 + 2);
                puVar20 = (ulong *)((long)puVar20 + 2);
              }
            }
            if ((puVar23 < puVar3) && ((char)*puVar20 == (char)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 1);
            }
            puVar23 = (ulong *)((long)puVar23 - (long)puVar53);
          }
        }
        if (puVar23 < (ulong *)0x3) goto LAB_100704110;
        *piVar7 = (uVar47 - uVar45) + 2;
        piVar7[1] = (int)puVar23;
        if (puVar23 <= (ulong *)(ulong)uVar29 && (ulong *)((long)puVar53 + (long)puVar23) != puVar3)
        {
          local_e4 = 1;
          local_c0 = puVar23;
          goto LAB_100704110;
        }
        *(uint *)(param_1 + 0x24) = uVar47 + 1;
        local_e4 = 1;
      }
      piVar8[4] = *param_3;
      piVar8[5] = param_3[1];
      piVar8[6] = param_3[2];
      piVar8[2] = 0;
      piVar8[3] = local_98;
      puVar20 = param_4;
      FUN_100705be0(param_4,local_98,param_1 + 0x48,2);
      *piVar8 = (int)puVar20;
      uVar29 = (piVar7 + (ulong)(local_e4 - 1) * 2)[1];
      if (uVar5 < uVar29) {
        iVar67 = piVar7[(ulong)(local_e4 - 1) * 2];
        uVar42 = 0;
      }
      else {
        lVar57 = lVar30;
        piVar50 = piVar2;
        if (*(int *)(param_1 + 0x98) == 1) {
          iVar65 = 0x100;
        }
        else {
          iVar65 = **(int **)(param_1 + 0x50) + 1;
          uVar29 = (uint)LZCOUNT(iVar65) ^ 0x1f;
          iVar65 = *(int *)(param_1 + 0x8c) -
                   (((uint)(iVar65 * 0x100) >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100);
        }
        do {
          *piVar50 = 0x40000000;
          lVar57 = lVar57 + -1;
          piVar50 = piVar50 + 7;
        } while (lVar57 != 0);
        uVar61 = 0;
        uVar54 = (ulong)uVar26;
        do {
          uVar29 = piVar7[uVar61 * 2];
          uVar42 = (piVar7 + uVar61 * 2)[1];
          if (uVar29 < 3) {
            uVar45 = uVar29 + (local_98 == 0);
            if (uVar45 == 0) {
              iVar67 = *param_3;
              iVar51 = param_3[1];
              piVar50 = param_3 + 2;
            }
            else {
              if (uVar45 == 3) {
                iVar51 = *param_3;
                iVar67 = iVar51 + -1;
              }
              else {
                iVar67 = param_3[uVar45];
                iVar51 = *param_3;
              }
              lVar57 = 8;
              if (uVar45 != 1) {
                lVar57 = 4;
              }
              piVar50 = (int *)((long)param_3 + lVar57);
            }
          }
          else {
            iVar51 = *param_3;
            iVar67 = uVar29 - 2;
            piVar50 = param_3 + 1;
          }
          if ((uint)uVar54 <= uVar42) {
            iVar36 = *piVar50;
            uVar27 = (uint)LZCOUNT(uVar29 + 1) ^ 0x1f;
            uVar45 = (uint)uVar54 * 0x100 - 0x200;
            do {
              iVar28 = (int)uVar54;
              if (*(int *)(param_1 + 0x98) == 1) {
                uVar47 = (uint)LZCOUNT(iVar28 + -2) ^ 0x1f;
                iVar18 = (uVar45 >> (ulong)(uVar47 & 0x1f)) + (uVar47 + uVar27) * 0x100 + 0x1000;
              }
              else {
                uVar47 = iVar28 - 3;
                if (uVar47 < 0x80) {
                  uVar47 = (uint)(byte)(&DAT_10084ff08)[uVar47];
                }
                else {
                  uVar47 = 0x43 - (int)LZCOUNT(uVar47);
                }
                iVar18 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar27 * 4) + 1;
                uVar48 = (uint)LZCOUNT(iVar18) ^ 0x1f;
                iVar55 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar47 * 4) + 1;
                uVar19 = (uint)LZCOUNT(iVar55) ^ 0x1f;
                iVar18 = (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                          ((uint)(iVar18 * 0x100) >> (ulong)(uVar48 & 0x1f))) -
                         ((uint)(iVar55 * 0x100) >> (ulong)(uVar19 & 0x1f))) +
                         (((uVar27 + *(int *)(&DAT_10084fe34 + (ulong)uVar47 * 4)) - uVar48) -
                         uVar19) * 0x100 + 0x33;
              }
              piVar50 = piVar8 + uVar54 * 7;
              piVar50[2] = iVar28;
              piVar50[3] = local_98;
              *piVar50 = iVar65 + (int)puVar20 + iVar18;
              piVar50[1] = uVar29;
              *(ulong *)(piVar50 + 4) = CONCAT44(iVar51,iVar67);
              piVar50[6] = iVar36;
              uVar54 = (ulong)(iVar28 + 1U);
              uVar45 = uVar45 + 0x100;
            } while (iVar28 + 1U <= uVar42);
          }
          uVar61 = uVar61 + 1;
        } while (uVar61 != local_e4);
        uVar29 = (int)uVar54 - 1;
        uVar61 = (ulong)uVar29;
        uVar54 = uVar61;
        if (uVar29 != 0) {
          uVar64 = 1;
LAB_100701e28:
          uVar54 = uVar64;
          iVar16 = iVar16 + 1;
          iVar65 = (int)uVar54;
          piVar50 = piVar8 + (ulong)(iVar65 - 1) * 7;
          if (piVar50[2] == 0) {
            uVar29 = piVar50[3] + 1;
          }
          else {
            uVar29 = 1;
          }
          puVar20 = (ulong *)((long)puVar53 + uVar54);
          iVar67 = *piVar50;
          if (*(int *)(param_1 + 0xa8) == 2) {
            iVar67 = iVar67 + 0x800;
            if (*(int *)(param_1 + 0x98) != 1) {
              if (0x3f < uVar29) goto LAB_100701e78;
LAB_100701f30:
              uVar42 = (uint)(byte)(&DAT_10084fdf4)[uVar29];
              if (0x3f < uVar29 - 1) goto LAB_100701f48;
LAB_100701e90:
              uVar45 = (uint)(byte)(&DAT_10084fdf4)[uVar29 - 1];
              goto LAB_100701f54;
            }
LAB_100701eac:
            uVar42 = (uint)LZCOUNT(uVar29 + 1) ^ 0x1f;
            uVar45 = (uint)LZCOUNT(uVar29) ^ 0x1f;
            iVar67 = iVar67 + ((((uVar29 + 1) * 0x100 >> (ulong)(uVar42 & 0x1f)) + uVar42 * 0x100) -
                              (((uVar29 << 8) >> (ulong)(uVar45 & 0x1f)) + uVar45 * 0x100));
            piVar14 = piVar8 + uVar54 * 7;
            iVar51 = *piVar14;
            if (iVar67 <= iVar51) goto LAB_100701fcc;
          }
          else {
            if (*(int *)(param_1 + 0x98) == 1) {
              iVar67 = iVar67 + 0x600;
              goto LAB_100701eac;
            }
            iVar51 = *(int *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)((long)puVar20 - 1) * 4) +
                     1;
            uVar42 = (uint)LZCOUNT(iVar51) ^ 0x1f;
            iVar67 = (*(int *)(param_1 + 0x88) -
                     (((uint)(iVar51 * 0x100) >> (ulong)(uVar42 & 0x1f)) + uVar42 * 0x100)) + iVar67
            ;
            if (uVar29 < 0x40) goto LAB_100701f30;
LAB_100701e78:
            uVar42 = 0x32 - (int)LZCOUNT(uVar29);
            if (uVar29 - 1 < 0x40) goto LAB_100701e90;
LAB_100701f48:
            uVar45 = 0x32 - (int)LZCOUNT(uVar29 - 1);
LAB_100701f54:
            iVar51 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar42 * 4) + 1;
            uVar27 = (uint)LZCOUNT(iVar51) ^ 0x1f;
            iVar36 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar45 * 4) + 1;
            uVar47 = (uint)LZCOUNT(iVar36) ^ 0x1f;
            iVar67 = iVar67 + ((*(int *)(&DAT_10084fd64 + (ulong)uVar42 * 4) - uVar27) * 0x100 -
                              ((uint)(iVar51 * 0x100) >> (ulong)(uVar27 & 0x1f))) +
                              ((uint)(iVar36 * 0x100) >> (ulong)(uVar47 & 0x1f)) +
                              (uVar47 - *(int *)(&DAT_10084fd64 + (ulong)uVar45 * 4)) * 0x100;
            piVar14 = piVar8 + uVar54 * 7;
            iVar51 = *piVar14;
            if (iVar67 <= iVar51) {
LAB_100701fcc:
              iVar51 = iVar67;
              piVar14[2] = 0;
              piVar14[3] = uVar29;
              *piVar14 = iVar51;
              piVar14[1] = 0;
              *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar50 + 4);
              piVar14[6] = piVar50[6];
            }
          }
          if (puVar58 < puVar20) goto LAB_100701e18;
          if (iVar65 != (int)uVar61) {
            iVar67 = piVar14[2];
            if (iVar67 == 0) {
              local_98 = piVar14[3];
              if (*(int *)(param_1 + 0x98) != 1) goto LAB_10070205c;
LAB_10070202c:
              iVar36 = 0x100;
              lVar57 = *(long *)(param_1 + 8);
              uVar64 = (ulong)*(uint *)(param_1 + 0x24);
              puVar23 = (ulong *)(lVar57 + uVar64);
            }
            else {
              local_98 = 0;
              if (*(int *)(param_1 + 0x98) == 1) goto LAB_10070202c;
LAB_10070205c:
              iVar36 = **(int **)(param_1 + 0x50) + 1;
              uVar29 = (uint)LZCOUNT(iVar36) ^ 0x1f;
              iVar36 = *(int *)(param_1 + 0x8c) -
                       (((uint)(iVar36 * 0x100) >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100);
              lVar57 = *(long *)(param_1 + 8);
              uVar64 = (ulong)*(uint *)(param_1 + 0x24);
              puVar23 = (ulong *)(lVar57 + uVar64);
            }
            if (puVar20 < puVar23) goto LAB_100701e18;
            iVar28 = *(int *)(param_1 + 200);
            iVar18 = (int)puVar20;
            uVar42 = iVar18 - (int)lVar57;
            uVar29 = (uint)uVar64;
            while (uVar29 < uVar42) {
              lVar12 = param_1;
              FUN_100705148(param_1,lVar57 + uVar64,puVar3,iVar28,1);
              uVar29 = (int)lVar12 + (int)uVar64;
              uVar64 = (ulong)uVar29;
            }
            puVar23 = (ulong *)((long)puVar53 + uVar54 + 0xc);
            piVar50 = piVar14 + 4;
            *(uint *)(param_1 + 0x24) = uVar42;
            if (iVar28 - 6U < 2) {
              uVar42 = 0;
              uVar29 = *(uint *)(param_1 + 0xcc);
              if (0xffe < uVar29) {
                uVar29 = 0xfff;
              }
              uVar27 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
              uVar47 = ~uVar27;
              lVar57 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar48 = iVar18 - (int)lVar57;
              uVar45 = 0;
              if (uVar47 <= uVar48) {
                uVar45 = uVar48 - uVar47;
              }
              uVar22 = *(uint *)(param_1 + 0x18);
              uVar64 = (ulong)uVar22;
              uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
              uVar19 = uVar48 - uVar6;
              if (uVar48 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
                uVar19 = *(uint *)(param_1 + 0x1c);
              }
              uVar6 = uVar19;
              if (uVar19 < 2) {
                uVar6 = 1;
              }
              bVar11 = iVar67 != 0;
              uVar17 = (ulong)bVar11;
              puVar24 = (ulong *)((long)puVar20 + 4);
              lVar43 = *(long *)(param_1 + 0x30);
              uVar63 = *(uint *)(param_1 + 0xc4);
              uVar62 = *puVar20 * -0x30e4432340650000 >>
                       ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
              uVar35 = *(uint *)(lVar43 + uVar62 * 4);
              lVar39 = *(long *)(param_1 + 0x40);
              local_168 = (uint *)(lVar39 + (ulong)((uVar48 & (uVar27 ^ 0xffffffff)) << 1) * 4);
              local_170 = local_168 + 1;
              local_15c = uVar48 + 9;
              uVar25 = 3;
              if (bVar11) {
                uVar25 = 4;
              }
              puVar59 = puVar31;
              do {
                if (uVar17 == 3) {
                  uVar27 = *piVar50 - 1;
                  uVar34 = *piVar50 - 2;
                  if (uVar48 - uVar22 <= uVar34) goto LAB_100702600;
LAB_100702694:
                  if ((uint)*puVar20 == *(uint *)((long)puVar20 - (ulong)uVar27)) {
                    lVar33 = -(ulong)uVar27;
                    puVar15 = (ulong *)((long)puVar24 + lVar33);
                    puVar13 = puVar24;
                    if (puVar24 < puVar49) {
                      if (*puVar15 == *puVar24) {
                        iVar28 = 0;
                        puVar15 = (ulong *)((long)puVar53 + lVar33 + uVar54 + 0xc);
                        puVar13 = puVar23;
                        do {
                          if (puVar49 <= puVar13) goto LAB_100702734;
                          uVar44 = *puVar15;
                          uVar60 = *puVar13;
                          iVar28 = iVar28 + 8;
                          puVar15 = puVar15 + 1;
                          puVar13 = puVar13 + 1;
                        } while (uVar44 == uVar60);
                        uVar60 = uVar60 ^ uVar44;
                        uVar60 = (uVar60 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar60 & 0x5555555555555555) << 1;
                        uVar60 = (uVar60 & 0xcccccccccccccccc) >> 2 |
                                 (uVar60 & 0x3333333333333333) << 2;
                        uVar60 = (uVar60 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar60 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar60 = (uVar60 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar60 & 0xff00ff00ff00ff) << 8;
                        uVar60 = (uVar60 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar60 & 0xffff0000ffff) << 0x10;
                        iVar28 = iVar28 + (int)((ulong)LZCOUNT(uVar60 >> 0x20 | uVar60 << 0x20) >> 3
                                               );
                      }
                      else {
                        uVar60 = *puVar24 ^ *puVar15;
                        uVar60 = (uVar60 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar60 & 0x5555555555555555) << 1;
                        uVar60 = (uVar60 & 0xcccccccccccccccc) >> 2 |
                                 (uVar60 & 0x3333333333333333) << 2;
                        uVar60 = (uVar60 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar60 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar60 = (uVar60 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar60 & 0xff00ff00ff00ff) << 8;
                        uVar60 = (uVar60 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar60 & 0xffff0000ffff) << 0x10;
                        iVar28 = (int)((ulong)LZCOUNT(uVar60 >> 0x20 | uVar60 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_100702734:
                      if (puVar13 < puVar38) {
                        if ((uint)*puVar15 == (uint)*puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar13 = (ulong *)((long)puVar13 + 4);
                        }
                      }
                      if (puVar13 < puVar32) {
                        if (*(short *)puVar15 == *(short *)puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 2);
                          puVar13 = (ulong *)((long)puVar13 + 2);
                        }
                      }
                      if ((puVar13 < puVar3) && ((char)*puVar15 == (char)*puVar13)) {
                        puVar13 = (ulong *)((long)puVar13 + 1);
                      }
                      iVar28 = (int)puVar13 - (int)puVar24;
                    }
                    goto joined_r0x000100702794;
                  }
                }
                else {
                  uVar27 = piVar50[uVar17];
                  uVar34 = uVar27 - 1;
                  if (uVar34 < uVar48 - uVar22) goto LAB_100702694;
LAB_100702600:
                  if ((uVar34 < uVar48 - uVar19 && (uVar48 - uVar27) - uVar22 < 0xfffffffd) &&
                     (puVar4 = (uint *)(lVar12 + (ulong)(uVar48 - uVar27)),
                     (uint)*puVar20 == *puVar4)) {
                    puVar15 = puVar24;
                    FUN_1006c7460(puVar24,puVar4 + 1,puVar3,lVar12 + uVar64,lVar57 + uVar64);
                    iVar28 = (int)puVar15;
joined_r0x000100702794:
                    uVar10 = iVar28 + 4;
                    uVar66 = ZEXT48((uint)uVar10);
                    if (puVar59 < (ulong)uVar66) {
                      piVar7[(ulong)uVar42 * 2] = (int)uVar17 - (uint)bVar11;
                      (piVar7 + (ulong)uVar42 * 2)[1] = uVar10;
                      uVar42 = uVar42 + 1;
                      if ((uVar29 < (uint)uVar10) ||
                         (puVar59 = (ulong *)uVar66, (ulong *)((long)puVar20 + uVar66) == puVar3))
                      goto LAB_100703c3c;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar25);
              *(uint *)(lVar43 + uVar62 * 4) = uVar48;
              if (uVar6 <= uVar35) {
                puVar24 = (ulong *)0x0;
                puVar23 = (ulong *)0x0;
                uVar29 = ~(-1 << (ulong)(uVar63 & 0x1f));
                do {
                  puVar15 = puVar24;
                  if (puVar23 <= puVar24) {
                    puVar15 = puVar23;
                  }
                  uVar17 = (ulong)uVar35;
                  puVar13 = (ulong *)((long)puVar20 + (long)puVar15);
                  if ((long)puVar15 + uVar17 < uVar64) {
                    FUN_1006c7460(puVar13,lVar12 + uVar17 + (long)puVar15,puVar3,lVar12 + uVar64,
                                  lVar57 + uVar64);
                    puVar13 = (ulong *)((long)puVar13 + (long)puVar15);
                    lVar43 = lVar12 + uVar17;
                    if (uVar64 <= (long)puVar13 + uVar17) {
                      lVar43 = lVar57 + uVar17;
                    }
                  }
                  else {
                    lVar43 = lVar57 + uVar17;
                    puVar41 = (ulong *)(lVar43 + (long)puVar15);
                    puVar40 = puVar13;
                    if (puVar13 < puVar49) {
                      if (*puVar41 == *puVar13) {
                        lVar33 = 0;
                        do {
                          puVar41 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8);
                          if (puVar49 <= puVar41) {
                            puVar41 = (ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                            puVar40 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8)
                            ;
                            goto joined_r0x000100703480;
                          }
                          uVar62 = *(ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                          uVar25 = *puVar41;
                          lVar33 = lVar33 + 8;
                        } while (uVar62 == uVar25);
                        uVar25 = uVar25 ^ uVar62;
                        uVar17 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar25 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20
                                                                    ) >> 3) + (long)puVar15);
                      }
                      else {
                        uVar17 = *puVar13 ^ *puVar41;
                        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar17 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) +
                                           (long)puVar15);
                      }
                    }
                    else {
joined_r0x000100703480:
                      if (puVar40 < puVar38) {
                        if (*(uint *)puVar41 == *(uint *)puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                      }
                      if (puVar40 < puVar32) {
                        if ((short)*puVar41 == (short)*puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 2);
                          puVar41 = (ulong *)((long)puVar41 + 2);
                        }
                      }
                      if ((puVar40 < puVar3) && ((char)*puVar41 == (char)*puVar40)) {
                        puVar40 = (ulong *)((long)puVar40 + 1);
                      }
                      puVar13 = (ulong *)(((long)puVar40 - (long)puVar13) + (long)puVar15);
                    }
                  }
                  if (puVar59 < puVar13) {
                    iVar28 = uVar35 + (int)puVar13;
                    if (puVar13 <= (ulong *)(ulong)(local_15c - uVar35)) {
                      iVar28 = local_15c;
                    }
                    piVar7[(ulong)uVar42 * 2] = (uVar48 + 2) - uVar35;
                    (piVar7 + (ulong)uVar42 * 2)[1] = (int)puVar13;
                    uVar42 = uVar42 + 1;
                    local_15c = iVar28;
                    if (((ulong *)0x1000 < puVar13) ||
                       (puVar59 = puVar13, (ulong *)((long)puVar20 + (long)puVar13) == puVar3))
                    break;
                  }
                  puVar4 = (uint *)(lVar39 + (ulong)((uVar35 & uVar47) << 1) * 4);
                  if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar20 + (long)puVar13))
                  {
                    *local_168 = uVar35;
                    if (uVar35 <= uVar45) {
                      local_168 = &local_94;
                      break;
                    }
                    puVar4 = puVar4 + 1;
                    puVar24 = puVar13;
                    local_168 = puVar4;
                  }
                  else {
                    *local_170 = uVar35;
                    local_170 = puVar4;
                    puVar23 = puVar13;
                    if (uVar35 <= uVar45) {
                      local_170 = &local_94;
                      break;
                    }
                  }
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  uVar35 = *puVar4;
                } while (uVar6 <= uVar35);
              }
              *local_170 = 0;
              *local_168 = 0;
              goto LAB_100703c34;
            }
            if (iVar28 == 5) {
              uVar42 = 0;
              uVar29 = *(uint *)(param_1 + 0xcc);
              if (0xffe < uVar29) {
                uVar29 = 0xfff;
              }
              uVar27 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
              uVar47 = ~uVar27;
              lVar57 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar48 = iVar18 - (int)lVar57;
              uVar45 = 0;
              if (uVar47 <= uVar48) {
                uVar45 = uVar48 - uVar47;
              }
              uVar22 = *(uint *)(param_1 + 0x18);
              uVar64 = (ulong)uVar22;
              uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
              uVar19 = uVar48 - uVar6;
              if (uVar48 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
                uVar19 = *(uint *)(param_1 + 0x1c);
              }
              uVar6 = uVar19;
              if (uVar19 < 2) {
                uVar6 = 1;
              }
              bVar11 = iVar67 != 0;
              uVar17 = (ulong)bVar11;
              puVar24 = (ulong *)((long)puVar20 + 4);
              lVar43 = *(long *)(param_1 + 0x30);
              uVar63 = *(uint *)(param_1 + 0xc4);
              uVar62 = *puVar20 * -0x30e4432345000000 >>
                       ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
              uVar35 = *(uint *)(lVar43 + uVar62 * 4);
              lVar39 = *(long *)(param_1 + 0x40);
              local_170 = (uint *)(lVar39 + (ulong)((uVar48 & (uVar27 ^ 0xffffffff)) << 1) * 4);
              local_178 = local_170 + 1;
              local_15c = uVar48 + 9;
              uVar25 = 3;
              if (bVar11) {
                uVar25 = 4;
              }
              puVar59 = puVar31;
              do {
                if (uVar17 == 3) {
                  uVar27 = *piVar50 - 1;
                  uVar34 = *piVar50 - 2;
                  if (uVar48 - uVar22 <= uVar34) goto LAB_100702998;
LAB_100702a30:
                  if ((uint)*puVar20 == *(uint *)((long)puVar20 - (ulong)uVar27)) {
                    lVar33 = -(ulong)uVar27;
                    puVar15 = (ulong *)((long)puVar24 + lVar33);
                    puVar13 = puVar24;
                    if (puVar24 < puVar49) {
                      if (*puVar15 == *puVar24) {
                        iVar28 = 0;
                        puVar15 = (ulong *)((long)puVar53 + lVar33 + uVar54 + 0xc);
                        puVar13 = puVar23;
                        do {
                          if (puVar49 <= puVar13) goto LAB_100702ad0;
                          uVar44 = *puVar15;
                          uVar60 = *puVar13;
                          iVar28 = iVar28 + 8;
                          puVar15 = puVar15 + 1;
                          puVar13 = puVar13 + 1;
                        } while (uVar44 == uVar60);
                        uVar60 = uVar60 ^ uVar44;
                        uVar60 = (uVar60 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar60 & 0x5555555555555555) << 1;
                        uVar60 = (uVar60 & 0xcccccccccccccccc) >> 2 |
                                 (uVar60 & 0x3333333333333333) << 2;
                        uVar60 = (uVar60 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar60 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar60 = (uVar60 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar60 & 0xff00ff00ff00ff) << 8;
                        uVar60 = (uVar60 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar60 & 0xffff0000ffff) << 0x10;
                        iVar28 = iVar28 + (int)((ulong)LZCOUNT(uVar60 >> 0x20 | uVar60 << 0x20) >> 3
                                               );
                      }
                      else {
                        uVar60 = *puVar24 ^ *puVar15;
                        uVar60 = (uVar60 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar60 & 0x5555555555555555) << 1;
                        uVar60 = (uVar60 & 0xcccccccccccccccc) >> 2 |
                                 (uVar60 & 0x3333333333333333) << 2;
                        uVar60 = (uVar60 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar60 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar60 = (uVar60 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar60 & 0xff00ff00ff00ff) << 8;
                        uVar60 = (uVar60 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar60 & 0xffff0000ffff) << 0x10;
                        iVar28 = (int)((ulong)LZCOUNT(uVar60 >> 0x20 | uVar60 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_100702ad0:
                      if (puVar13 < puVar38) {
                        if ((uint)*puVar15 == (uint)*puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar13 = (ulong *)((long)puVar13 + 4);
                        }
                      }
                      if (puVar13 < puVar32) {
                        if (*(short *)puVar15 == *(short *)puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 2);
                          puVar13 = (ulong *)((long)puVar13 + 2);
                        }
                      }
                      if ((puVar13 < puVar3) && ((char)*puVar15 == (char)*puVar13)) {
                        puVar13 = (ulong *)((long)puVar13 + 1);
                      }
                      iVar28 = (int)puVar13 - (int)puVar24;
                    }
                    goto joined_r0x000100702b30;
                  }
                }
                else {
                  uVar27 = piVar50[uVar17];
                  uVar34 = uVar27 - 1;
                  if (uVar34 < uVar48 - uVar22) goto LAB_100702a30;
LAB_100702998:
                  if ((uVar34 < uVar48 - uVar19 && (uVar48 - uVar27) - uVar22 < 0xfffffffd) &&
                     (puVar4 = (uint *)(lVar12 + (ulong)(uVar48 - uVar27)),
                     (uint)*puVar20 == *puVar4)) {
                    puVar15 = puVar24;
                    FUN_1006c7460(puVar24,puVar4 + 1,puVar3,lVar12 + uVar64,lVar57 + uVar64);
                    iVar28 = (int)puVar15;
joined_r0x000100702b30:
                    uVar10 = iVar28 + 4;
                    uVar66 = ZEXT48((uint)uVar10);
                    if (puVar59 < (ulong)uVar66) {
                      piVar7[(ulong)uVar42 * 2] = (int)uVar17 - (uint)bVar11;
                      (piVar7 + (ulong)uVar42 * 2)[1] = uVar10;
                      uVar42 = uVar42 + 1;
                      if ((uVar29 < (uint)uVar10) ||
                         (puVar59 = (ulong *)uVar66, (ulong *)((long)puVar20 + uVar66) == puVar3))
                      goto LAB_100703c3c;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar25);
              *(uint *)(lVar43 + uVar62 * 4) = uVar48;
              if (uVar6 <= uVar35) {
                puVar24 = (ulong *)0x0;
                puVar23 = (ulong *)0x0;
                uVar29 = ~(-1 << (ulong)(uVar63 & 0x1f));
                iVar28 = local_15c;
                do {
                  puVar15 = puVar24;
                  if (puVar23 <= puVar24) {
                    puVar15 = puVar23;
                  }
                  uVar17 = (ulong)uVar35;
                  puVar13 = (ulong *)((long)puVar20 + (long)puVar15);
                  if ((long)puVar15 + uVar17 < uVar64) {
                    FUN_1006c7460(puVar13,lVar12 + uVar17 + (long)puVar15,puVar3,lVar12 + uVar64,
                                  lVar57 + uVar64);
                    puVar13 = (ulong *)((long)puVar13 + (long)puVar15);
                    lVar43 = lVar12 + uVar17;
                    if (uVar64 <= (long)puVar13 + uVar17) {
                      lVar43 = lVar57 + uVar17;
                    }
                  }
                  else {
                    lVar43 = lVar57 + uVar17;
                    puVar41 = (ulong *)(lVar43 + (long)puVar15);
                    puVar40 = puVar13;
                    if (puVar13 < puVar49) {
                      if (*puVar41 == *puVar13) {
                        lVar33 = 0;
                        do {
                          puVar41 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8);
                          if (puVar49 <= puVar41) {
                            puVar41 = (ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                            puVar40 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8)
                            ;
                            goto joined_r0x000100703180;
                          }
                          uVar62 = *(ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                          uVar25 = *puVar41;
                          lVar33 = lVar33 + 8;
                        } while (uVar62 == uVar25);
                        uVar25 = uVar25 ^ uVar62;
                        uVar17 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar25 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20
                                                                    ) >> 3) + (long)puVar15);
                      }
                      else {
                        uVar17 = *puVar13 ^ *puVar41;
                        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar17 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) +
                                           (long)puVar15);
                      }
                    }
                    else {
joined_r0x000100703180:
                      if (puVar40 < puVar38) {
                        if (*(uint *)puVar41 == *(uint *)puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                      }
                      if (puVar40 < puVar32) {
                        if ((short)*puVar41 == (short)*puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 2);
                          puVar41 = (ulong *)((long)puVar41 + 2);
                        }
                      }
                      if ((puVar40 < puVar3) && ((char)*puVar41 == (char)*puVar40)) {
                        puVar40 = (ulong *)((long)puVar40 + 1);
                      }
                      puVar13 = (ulong *)(((long)puVar40 - (long)puVar13) + (long)puVar15);
                    }
                  }
                  local_15c = iVar28;
                  if (puVar59 < puVar13) {
                    local_15c = uVar35 + (int)puVar13;
                    if (puVar13 <= (ulong *)(ulong)(iVar28 - uVar35)) {
                      local_15c = iVar28;
                    }
                    piVar7[(ulong)uVar42 * 2] = (uVar48 + 2) - uVar35;
                    (piVar7 + (ulong)uVar42 * 2)[1] = (int)puVar13;
                    uVar42 = uVar42 + 1;
                    if (((ulong *)0x1000 < puVar13) ||
                       (puVar59 = puVar13, (ulong *)((long)puVar20 + (long)puVar13) == puVar3))
                    break;
                  }
                  puVar4 = (uint *)(lVar39 + (ulong)((uVar35 & uVar47) << 1) * 4);
                  if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar20 + (long)puVar13))
                  {
                    *local_170 = uVar35;
                    if (uVar35 <= uVar45) goto LAB_100703c1c;
                    puVar4 = puVar4 + 1;
                    puVar24 = puVar13;
                    local_170 = puVar4;
                  }
                  else {
                    *local_178 = uVar35;
                    local_178 = puVar4;
                    puVar23 = puVar13;
                    if (uVar35 <= uVar45) goto LAB_100703c10;
                  }
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  uVar35 = *puVar4;
                  iVar28 = local_15c;
                } while (uVar6 <= uVar35);
              }
              goto LAB_100703c24;
            }
            if (iVar28 != 3) {
              uVar42 = 0;
              uVar29 = *(uint *)(param_1 + 0xcc);
              if (0xffe < uVar29) {
                uVar29 = 0xfff;
              }
              uVar27 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
              uVar47 = ~uVar27;
              lVar57 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar48 = iVar18 - (int)lVar57;
              uVar45 = 0;
              if (uVar47 <= uVar48) {
                uVar45 = uVar48 - uVar47;
              }
              uVar22 = *(uint *)(param_1 + 0x18);
              uVar64 = (ulong)uVar22;
              uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
              uVar19 = uVar48 - uVar6;
              if (uVar48 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
                uVar19 = *(uint *)(param_1 + 0x1c);
              }
              uVar6 = uVar19;
              if (uVar19 < 2) {
                uVar6 = 1;
              }
              bVar11 = iVar67 != 0;
              uVar17 = (ulong)bVar11;
              puVar24 = (ulong *)((long)puVar20 + 4);
              lVar43 = *(long *)(param_1 + 0x30);
              uVar63 = *(uint *)(param_1 + 0xc4);
              uVar34 = (uint)*puVar20 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
              uVar35 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
              lVar39 = *(long *)(param_1 + 0x40);
              local_170 = (uint *)(lVar39 + (ulong)((uVar48 & (uVar27 ^ 0xffffffff)) << 1) * 4);
              local_178 = local_170 + 1;
              local_15c = uVar48 + 9;
              uVar25 = 3;
              if (bVar11) {
                uVar25 = 4;
              }
              puVar59 = puVar31;
              do {
                if (uVar17 == 3) {
                  uVar27 = *piVar50 - 1;
                  uVar37 = *piVar50 - 2;
                  if (uVar48 - uVar22 <= uVar37) goto LAB_100702d00;
LAB_100702d98:
                  if ((uint)*puVar20 == *(uint *)((long)puVar20 - (ulong)uVar27)) {
                    lVar33 = -(ulong)uVar27;
                    puVar15 = (ulong *)((long)puVar24 + lVar33);
                    puVar13 = puVar24;
                    if (puVar24 < puVar49) {
                      if (*puVar15 == *puVar24) {
                        iVar28 = 0;
                        puVar15 = (ulong *)((long)puVar53 + lVar33 + uVar54 + 0xc);
                        puVar13 = puVar23;
                        do {
                          if (puVar49 <= puVar13) goto LAB_100702e38;
                          uVar60 = *puVar15;
                          uVar62 = *puVar13;
                          iVar28 = iVar28 + 8;
                          puVar15 = puVar15 + 1;
                          puVar13 = puVar13 + 1;
                        } while (uVar60 == uVar62);
                        uVar62 = uVar62 ^ uVar60;
                        uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar62 & 0x5555555555555555) << 1;
                        uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 |
                                 (uVar62 & 0x3333333333333333) << 2;
                        uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar62 & 0xff00ff00ff00ff) << 8;
                        uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar62 & 0xffff0000ffff) << 0x10;
                        iVar28 = iVar28 + (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3
                                               );
                      }
                      else {
                        uVar62 = *puVar24 ^ *puVar15;
                        uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar62 & 0x5555555555555555) << 1;
                        uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 |
                                 (uVar62 & 0x3333333333333333) << 2;
                        uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar62 & 0xff00ff00ff00ff) << 8;
                        uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar62 & 0xffff0000ffff) << 0x10;
                        iVar28 = (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                      }
                    }
                    else {
LAB_100702e38:
                      if (puVar13 < puVar38) {
                        if ((uint)*puVar15 == (uint)*puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 4);
                          puVar13 = (ulong *)((long)puVar13 + 4);
                        }
                      }
                      if (puVar13 < puVar32) {
                        if (*(short *)puVar15 == *(short *)puVar13) {
                          puVar15 = (ulong *)((long)puVar15 + 2);
                          puVar13 = (ulong *)((long)puVar13 + 2);
                        }
                      }
                      if ((puVar13 < puVar3) && ((char)*puVar15 == (char)*puVar13)) {
                        puVar13 = (ulong *)((long)puVar13 + 1);
                      }
                      iVar28 = (int)puVar13 - (int)puVar24;
                    }
                    goto joined_r0x000100702e98;
                  }
                }
                else {
                  uVar27 = piVar50[uVar17];
                  uVar37 = uVar27 - 1;
                  if (uVar37 < uVar48 - uVar22) goto LAB_100702d98;
LAB_100702d00:
                  if ((uVar37 < uVar48 - uVar19 && (uVar48 - uVar27) - uVar22 < 0xfffffffd) &&
                     (puVar4 = (uint *)(lVar12 + (ulong)(uVar48 - uVar27)),
                     (uint)*puVar20 == *puVar4)) {
                    puVar15 = puVar24;
                    FUN_1006c7460(puVar24,puVar4 + 1,puVar3,lVar12 + uVar64,lVar57 + uVar64);
                    iVar28 = (int)puVar15;
joined_r0x000100702e98:
                    uVar10 = iVar28 + 4;
                    uVar66 = ZEXT48((uint)uVar10);
                    if (puVar59 < (ulong)uVar66) {
                      piVar7[(ulong)uVar42 * 2] = (int)uVar17 - (uint)bVar11;
                      (piVar7 + (ulong)uVar42 * 2)[1] = uVar10;
                      uVar42 = uVar42 + 1;
                      if ((uVar29 < (uint)uVar10) ||
                         (puVar59 = (ulong *)uVar66, (ulong *)((long)puVar20 + uVar66) == puVar3))
                      goto LAB_100703c3c;
                    }
                  }
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar25);
              *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar48;
              if (uVar6 <= uVar35) {
                puVar24 = (ulong *)0x0;
                puVar23 = (ulong *)0x0;
                uVar29 = ~(-1 << (ulong)(uVar63 & 0x1f));
                iVar28 = local_15c;
                do {
                  puVar15 = puVar24;
                  if (puVar23 <= puVar24) {
                    puVar15 = puVar23;
                  }
                  uVar17 = (ulong)uVar35;
                  puVar13 = (ulong *)((long)puVar20 + (long)puVar15);
                  if ((long)puVar15 + uVar17 < uVar64) {
                    FUN_1006c7460(puVar13,lVar12 + uVar17 + (long)puVar15,puVar3,lVar12 + uVar64,
                                  lVar57 + uVar64);
                    puVar13 = (ulong *)((long)puVar13 + (long)puVar15);
                    lVar43 = lVar12 + uVar17;
                    if (uVar64 <= (long)puVar13 + uVar17) {
                      lVar43 = lVar57 + uVar17;
                    }
                  }
                  else {
                    lVar43 = lVar57 + uVar17;
                    puVar41 = (ulong *)(lVar43 + (long)puVar15);
                    puVar40 = puVar13;
                    if (puVar13 < puVar49) {
                      if (*puVar41 == *puVar13) {
                        lVar33 = 0;
                        do {
                          puVar41 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8);
                          if (puVar49 <= puVar41) {
                            puVar41 = (ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                            puVar40 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8)
                            ;
                            goto joined_r0x0001007037a0;
                          }
                          uVar62 = *(ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                          uVar25 = *puVar41;
                          lVar33 = lVar33 + 8;
                        } while (uVar62 == uVar25);
                        uVar25 = uVar25 ^ uVar62;
                        uVar17 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar25 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20
                                                                    ) >> 3) + (long)puVar15);
                      }
                      else {
                        uVar17 = *puVar13 ^ *puVar41;
                        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar17 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) +
                                           (long)puVar15);
                      }
                    }
                    else {
joined_r0x0001007037a0:
                      if (puVar40 < puVar38) {
                        if (*(uint *)puVar41 == *(uint *)puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                      }
                      if (puVar40 < puVar32) {
                        if ((short)*puVar41 == (short)*puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 2);
                          puVar41 = (ulong *)((long)puVar41 + 2);
                        }
                      }
                      if ((puVar40 < puVar3) && ((char)*puVar41 == (char)*puVar40)) {
                        puVar40 = (ulong *)((long)puVar40 + 1);
                      }
                      puVar13 = (ulong *)(((long)puVar40 - (long)puVar13) + (long)puVar15);
                    }
                  }
                  local_15c = iVar28;
                  if (puVar59 < puVar13) {
                    local_15c = uVar35 + (int)puVar13;
                    if (puVar13 <= (ulong *)(ulong)(iVar28 - uVar35)) {
                      local_15c = iVar28;
                    }
                    piVar7[(ulong)uVar42 * 2] = (uVar48 + 2) - uVar35;
                    (piVar7 + (ulong)uVar42 * 2)[1] = (int)puVar13;
                    uVar42 = uVar42 + 1;
                    if (((ulong *)0x1000 < puVar13) ||
                       (puVar59 = puVar13, (ulong *)((long)puVar20 + (long)puVar13) == puVar3))
                    break;
                  }
                  puVar4 = (uint *)(lVar39 + (ulong)((uVar35 & uVar47) << 1) * 4);
                  if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar20 + (long)puVar13))
                  {
                    *local_170 = uVar35;
                    if (uVar35 <= uVar45) goto LAB_100703c1c;
                    puVar4 = puVar4 + 1;
                    puVar24 = puVar13;
                    local_170 = puVar4;
                  }
                  else {
                    *local_178 = uVar35;
                    local_178 = puVar4;
                    puVar23 = puVar13;
                    if (uVar35 <= uVar45) goto LAB_100703c10;
                  }
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  uVar35 = *puVar4;
                  iVar28 = local_15c;
                } while (uVar6 <= uVar35);
              }
              goto LAB_100703c24;
            }
            uVar42 = 0;
            uVar29 = *(uint *)(param_1 + 0xcc);
            if (0xffe < uVar29) {
              uVar29 = 0xfff;
            }
            uVar27 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
            uVar47 = ~uVar27;
            lVar57 = *(long *)(param_1 + 8);
            lVar12 = *(long *)(param_1 + 0x10);
            uVar48 = iVar18 - (int)lVar57;
            uVar45 = 0;
            if (uVar47 <= uVar48) {
              uVar45 = uVar48 - uVar47;
            }
            uVar22 = *(uint *)(param_1 + 0x18);
            uVar64 = (ulong)uVar22;
            uVar6 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar19 = uVar48 - uVar6;
            if (uVar48 - *(uint *)(param_1 + 0x1c) <= uVar6 || *(int *)(param_1 + 0x20) != 0) {
              uVar19 = *(uint *)(param_1 + 0x1c);
            }
            uVar6 = uVar19;
            if (uVar19 < 2) {
              uVar6 = 1;
            }
            bVar11 = iVar67 != 0;
            uVar17 = (ulong)bVar11;
            puVar23 = (ulong *)((long)puVar20 + 3);
            lVar43 = *(long *)(param_1 + 0x30);
            uVar63 = *(uint *)(param_1 + 0xc4);
            uVar34 = (uint)*puVar20 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
            uVar35 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
            lVar39 = *(long *)(param_1 + 0x40);
            local_170 = (uint *)(lVar39 + (ulong)((uVar48 & (uVar27 ^ 0xffffffff)) << 1) * 4);
            local_178 = local_170 + 1;
            local_15c = uVar48 + 9;
            uVar25 = 3;
            if (bVar11) {
              uVar25 = 4;
            }
            puVar24 = puVar31;
            do {
              if (uVar17 == 3) {
                uVar27 = *piVar50 - 1;
                uVar37 = *piVar50 - 2;
                if (uVar48 - uVar22 <= uVar37) goto LAB_10070227c;
LAB_100702324:
                if (((*(uint *)((long)puVar20 - (ulong)uVar27) ^ (uint)*puVar20) & 0xffffff) == 0) {
                  lVar33 = -(ulong)uVar27;
                  puVar59 = (ulong *)((long)puVar23 + lVar33);
                  puVar15 = puVar23;
                  if (puVar23 < puVar49) {
                    if (*puVar59 == *puVar23) {
                      iVar28 = 0;
                      puVar59 = (ulong *)((long)puVar53 + lVar33 + uVar54 + 0xb);
                      puVar15 = (ulong *)((long)puVar53 + uVar54 + 0xb);
                      do {
                        if (puVar49 <= puVar15) goto LAB_1007023fc;
                        uVar60 = *puVar59;
                        uVar62 = *puVar15;
                        iVar28 = iVar28 + 8;
                        puVar59 = puVar59 + 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar60 == uVar62);
                      uVar62 = uVar62 ^ uVar60;
                      uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar62 & 0x5555555555555555) << 1;
                      uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 |
                               (uVar62 & 0x3333333333333333) << 2;
                      uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar62 & 0xffff0000ffff) << 0x10;
                      iVar28 = iVar28 + (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                    }
                    else {
                      uVar62 = *puVar23 ^ *puVar59;
                      uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar62 & 0x5555555555555555) << 1;
                      uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 |
                               (uVar62 & 0x3333333333333333) << 2;
                      uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar62 & 0xffff0000ffff) << 0x10;
                      iVar28 = (int)((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
                    }
                  }
                  else {
LAB_1007023fc:
                    if (puVar15 < puVar38) {
                      if ((uint)*puVar59 == (uint)*puVar15) {
                        puVar59 = (ulong *)((long)puVar59 + 4);
                        puVar15 = (ulong *)((long)puVar15 + 4);
                      }
                    }
                    if (puVar15 < puVar32) {
                      if (*(short *)puVar59 == *(short *)puVar15) {
                        puVar59 = (ulong *)((long)puVar59 + 2);
                        puVar15 = (ulong *)((long)puVar15 + 2);
                      }
                    }
                    if ((puVar15 < puVar3) && ((char)*puVar59 == (char)*puVar15)) {
                      puVar15 = (ulong *)((long)puVar15 + 1);
                    }
                    iVar28 = (int)puVar15 - (int)puVar23;
                  }
                  goto joined_r0x00010070245c;
                }
              }
              else {
                uVar27 = piVar50[uVar17];
                uVar37 = uVar27 - 1;
                if (uVar37 < uVar48 - uVar22) goto LAB_100702324;
LAB_10070227c:
                if ((uVar37 < uVar48 - uVar19 && (uVar48 - uVar27) - uVar22 < 0xfffffffd) &&
                   (puVar4 = (uint *)(lVar12 + (ulong)(uVar48 - uVar27)),
                   ((*puVar4 ^ (uint)*puVar20) & 0xffffff) == 0)) {
                  puVar59 = puVar23;
                  FUN_1006c7460(puVar23,(long)puVar4 + 3,puVar3,lVar12 + uVar64,lVar57 + uVar64);
                  iVar28 = (int)puVar59;
joined_r0x00010070245c:
                  uVar10 = iVar28 + 3;
                  uVar66 = ZEXT48((uint)uVar10);
                  if (puVar24 < (ulong)uVar66) {
                    piVar7[(ulong)uVar42 * 2] = (int)uVar17 - (uint)bVar11;
                    (piVar7 + (ulong)uVar42 * 2)[1] = uVar10;
                    uVar42 = uVar42 + 1;
                    if ((uVar29 < (uint)uVar10) ||
                       (puVar24 = (ulong *)uVar66, (ulong *)((long)puVar20 + uVar66) == puVar3))
                    goto LAB_100703c3c;
                  }
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar25);
            if ((ulong *)0x2 < puVar24) {
LAB_1007038f8:
              *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar48;
              if (uVar6 <= uVar35) {
                puVar23 = (ulong *)0x0;
                puVar59 = (ulong *)0x0;
                uVar29 = ~(-1 << (ulong)(uVar63 & 0x1f));
                iVar28 = local_15c;
                do {
                  puVar15 = puVar23;
                  if (puVar59 <= puVar23) {
                    puVar15 = puVar59;
                  }
                  uVar17 = (ulong)uVar35;
                  puVar13 = (ulong *)((long)puVar20 + (long)puVar15);
                  if ((long)puVar15 + uVar17 < uVar64) {
                    FUN_1006c7460(puVar13,lVar12 + uVar17 + (long)puVar15,puVar3,lVar12 + uVar64,
                                  lVar57 + uVar64);
                    puVar13 = (ulong *)((long)puVar13 + (long)puVar15);
                    lVar43 = lVar12 + uVar17;
                    if (uVar64 <= (long)puVar13 + uVar17) {
                      lVar43 = lVar57 + uVar17;
                    }
                  }
                  else {
                    lVar43 = lVar57 + uVar17;
                    puVar41 = (ulong *)(lVar43 + (long)puVar15);
                    puVar40 = puVar13;
                    if (puVar13 < puVar49) {
                      if (*puVar41 == *puVar13) {
                        lVar33 = 0;
                        do {
                          puVar41 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8);
                          if (puVar49 <= puVar41) {
                            puVar41 = (ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                            puVar40 = (ulong *)((long)puVar15 + (long)puVar53 + lVar33 + uVar54 + 8)
                            ;
                            goto joined_r0x000100703abc;
                          }
                          uVar62 = *(ulong *)((long)puVar15 + lVar33 + lVar57 + 8 + uVar17);
                          uVar25 = *puVar41;
                          lVar33 = lVar33 + 8;
                        } while (uVar62 == uVar25);
                        uVar25 = uVar25 ^ uVar62;
                        uVar17 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar25 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20
                                                                    ) >> 3) + (long)puVar15);
                      }
                      else {
                        uVar17 = *puVar13 ^ *puVar41;
                        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar17 & 0x5555555555555555) << 1;
                        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 |
                                 (uVar17 & 0x3333333333333333) << 2;
                        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar17 & 0xff00ff00ff00ff) << 8;
                        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar17 & 0xffff0000ffff) << 0x10;
                        puVar13 = (ulong *)(((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) +
                                           (long)puVar15);
                      }
                    }
                    else {
joined_r0x000100703abc:
                      if (puVar40 < puVar38) {
                        if (*(uint *)puVar41 == *(uint *)puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 4);
                          puVar41 = (ulong *)((long)puVar41 + 4);
                        }
                      }
                      if (puVar40 < puVar32) {
                        if ((short)*puVar41 == (short)*puVar40) {
                          puVar40 = (ulong *)((long)puVar40 + 2);
                          puVar41 = (ulong *)((long)puVar41 + 2);
                        }
                      }
                      if ((puVar40 < puVar3) && ((char)*puVar41 == (char)*puVar40)) {
                        puVar40 = (ulong *)((long)puVar40 + 1);
                      }
                      puVar13 = (ulong *)(((long)puVar40 - (long)puVar13) + (long)puVar15);
                    }
                  }
                  local_15c = iVar28;
                  if (puVar24 < puVar13) {
                    local_15c = uVar35 + (int)puVar13;
                    if (puVar13 <= (ulong *)(ulong)(iVar28 - uVar35)) {
                      local_15c = iVar28;
                    }
                    piVar7[(ulong)uVar42 * 2] = (uVar48 + 2) - uVar35;
                    (piVar7 + (ulong)uVar42 * 2)[1] = (int)puVar13;
                    uVar42 = uVar42 + 1;
                    if (((ulong *)0x1000 < puVar13) ||
                       (puVar24 = puVar13, (ulong *)((long)puVar20 + (long)puVar13) == puVar3))
                    break;
                  }
                  puVar4 = (uint *)(lVar39 + (ulong)((uVar35 & uVar47) << 1) * 4);
                  if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar20 + (long)puVar13))
                  {
                    *local_170 = uVar35;
                    if (uVar35 <= uVar45) goto LAB_100703c1c;
                    puVar4 = puVar4 + 1;
                    puVar23 = puVar13;
                    local_170 = puVar4;
                  }
                  else {
                    *local_178 = uVar35;
                    local_178 = puVar4;
                    puVar59 = puVar13;
                    if (uVar35 <= uVar45) goto LAB_100703c10;
                  }
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  uVar35 = *puVar4;
                  iVar28 = local_15c;
                } while (uVar6 <= uVar35);
              }
              goto LAB_100703c24;
            }
            lVar33 = *(long *)(param_1 + 0x38);
            uVar17 = *puVar20;
            uVar27 = 0x20 - *(int *)(param_1 + 0x28);
            if (local_220 < uVar48) {
              uVar25 = (ulong)local_220;
              do {
                *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar57 + uVar25) * 0x35a7bd00) >>
                                         (ulong)(uVar27 & 0x1f)) * 4) = (int)uVar25;
                uVar25 = uVar25 + 1;
              } while ((uint)(iVar16 - (int)lVar57) != uVar25);
            }
            uVar27 = *(uint *)(lVar33 + (ulong)((uint)uVar17 * 0x35a7bd00 >> (ulong)(uVar27 & 0x1f))
                                        * 4);
            uVar17 = (ulong)uVar27;
            local_220 = uVar48;
            if (uVar27 < uVar6 || uVar48 - uVar27 >> 0x12 != 0) goto LAB_1007038f8;
            if (uVar27 < uVar22) {
              puVar23 = puVar20;
              FUN_1006c7460(puVar20,lVar12 + uVar17,puVar3,lVar12 + uVar64,lVar57 + uVar64);
            }
            else {
              puVar59 = (ulong *)(lVar57 + uVar17);
              puVar23 = puVar20;
              if (puVar20 < puVar49) {
                if (*puVar59 == *puVar20) {
                  lVar33 = 0;
                  puVar59 = (ulong *)(lVar57 + uVar17);
                  puVar23 = (ulong *)((long)puVar53 + uVar54 + 8);
                  do {
                    puVar59 = puVar59 + 1;
                    if (puVar49 <= puVar23) goto LAB_100703ff0;
                    uVar17 = *puVar23;
                    lVar33 = lVar33 + 8;
                    puVar23 = puVar23 + 1;
                  } while (*puVar59 == uVar17);
                  uVar17 = uVar17 ^ *puVar59;
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  puVar23 = (ulong *)(lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3
                                               ));
                }
                else {
                  uVar17 = *puVar20 ^ *puVar59;
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  puVar23 = (ulong *)((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                }
              }
              else {
LAB_100703ff0:
                if (puVar23 < puVar38) {
                  if ((uint)*puVar59 == (uint)*puVar23) {
                    puVar59 = (ulong *)((long)puVar59 + 4);
                    puVar23 = (ulong *)((long)puVar23 + 4);
                  }
                }
                if (puVar23 < puVar32) {
                  if (*(short *)puVar59 == *(short *)puVar23) {
                    puVar59 = (ulong *)((long)puVar59 + 2);
                    puVar23 = (ulong *)((long)puVar23 + 2);
                  }
                }
                if ((puVar23 < puVar3) && ((char)*puVar59 == (char)*puVar23)) {
                  puVar23 = (ulong *)((long)puVar23 + 1);
                }
                puVar23 = (ulong *)((long)puVar23 - (long)puVar20);
              }
            }
            if (puVar23 < (ulong *)0x3) goto LAB_1007038f8;
            *piVar7 = (uVar48 - uVar27) + 2;
            piVar7[1] = (int)puVar23;
            if (puVar23 <= (ulong *)(ulong)uVar29 &&
                (ulong *)((long)puVar20 + (long)puVar23) != puVar3) {
              uVar42 = 1;
              puVar24 = puVar23;
              goto LAB_1007038f8;
            }
            local_15c = uVar48 + 1;
            uVar42 = 1;
            goto LAB_100703c38;
          }
        }
LAB_1007049d4:
        piVar50 = piVar8 + (uVar54 & 0xffffffff) * 7;
        local_1b4 = *piVar50;
        iVar67 = piVar50[1];
        uVar29 = piVar50[2];
        local_98 = piVar50[3];
        local_90 = *(undefined8 *)(piVar50 + 4);
        local_88 = piVar50[6];
        uVar42 = 0;
        if (local_98 + uVar29 <= (uint)uVar54) {
          uVar42 = (uint)uVar54 - (local_98 + uVar29);
        }
      }
LAB_100704a08:
      uVar45 = uVar42 + 1;
      piVar50 = piVar8 + (ulong)uVar45 * 7;
      *piVar50 = local_1b4;
      piVar50[1] = iVar67;
      piVar50[2] = uVar29;
      piVar50[3] = local_98;
      *(undefined8 *)(piVar50 + 4) = local_90;
      piVar50[6] = local_88;
      uVar29 = uVar42;
      if (uVar42 == 0) {
        uVar27 = 1;
        goto LAB_100704b34;
      }
      do {
        uVar27 = uVar29;
        piVar50 = piVar8 + (ulong)uVar42 * 7;
        iVar16 = piVar50[2];
        iVar65 = piVar50[3];
        piVar14 = piVar8 + (ulong)uVar27 * 7;
        uVar68 = *(undefined8 *)(piVar50 + 2);
        uVar66 = *(undefined8 *)piVar50;
        uVar69 = *(undefined8 *)(piVar50 + 3);
        *(undefined8 *)(piVar14 + 5) = *(undefined8 *)(piVar50 + 5);
        *(undefined8 *)(piVar14 + 3) = uVar69;
        *(undefined8 *)(piVar14 + 2) = uVar68;
        *(undefined8 *)piVar14 = uVar66;
        uVar47 = iVar65 + iVar16;
        bVar11 = uVar47 <= uVar42;
        uVar47 = uVar42 - uVar47;
        uVar42 = 0;
        if (bVar11) {
          uVar42 = uVar47;
        }
        uVar29 = uVar27 - 1;
      } while (bVar11 && uVar47 != 0);
      for (; uVar27 <= uVar45; uVar27 = uVar27 + 1) {
LAB_100704b34:
        while( true ) {
          iVar16 = piVar8[(ulong)uVar27 * 7 + 2];
          uVar29 = piVar8[(ulong)uVar27 * 7 + 3];
          uVar61 = (ulong)uVar29;
          if (iVar16 == 0) break;
          uVar42 = piVar8[(ulong)uVar27 * 7 + 1];
          if (uVar42 < 3) {
            uVar47 = uVar42;
            if (uVar29 == 0) {
              uVar47 = uVar42 + 1;
            }
            if (uVar47 != 0) {
              if (uVar47 == 3) {
                iVar65 = *param_3 + -1;
LAB_100704b9c:
                param_3[2] = param_3[1];
              }
              else {
                iVar65 = param_3[uVar47];
                if (uVar47 != 1) goto LAB_100704b9c;
              }
              param_3[1] = *param_3;
              goto LAB_100704bb4;
            }
          }
          else {
            *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
            iVar65 = uVar42 - 2;
LAB_100704bb4:
            *param_3 = iVar65;
          }
          if (*(int *)(param_1 + 0xa8) != 2) {
            if (uVar29 != 0) {
              lVar57 = *(long *)(param_1 + 0x48);
              puVar53 = param_4;
              uVar54 = uVar61;
              do {
                *(int *)(lVar57 + (ulong)(byte)*puVar53 * 4) =
                     *(int *)(lVar57 + (ulong)(byte)*puVar53 * 4) + 2;
                uVar54 = uVar54 - 1;
                puVar53 = (ulong *)((long)puVar53 + 1);
              } while (uVar54 != 0);
            }
            *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar29 * 2;
          }
          if (uVar29 < 0x40) {
            uVar47 = (uint)(byte)(&DAT_10084fdf4)[uVar61];
          }
          else {
            uVar47 = 0x32 - (int)LZCOUNT(uVar29);
          }
          *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar47 * 4) =
               *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar47 * 4) + 1;
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          uVar47 = (uint)LZCOUNT(uVar42 + 1) ^ 0x1f;
          *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar47 * 4) =
               *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar47 * 4) + 1;
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          uVar47 = iVar16 - 3;
          if (uVar47 < 0x80) {
            uVar48 = (uint)(byte)(&DAT_10084ff08)[uVar47];
          }
          else {
            uVar48 = 0x43 - (int)LZCOUNT(uVar47);
          }
          *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar48 * 4) =
               *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar48 * 4) + 1;
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
          puVar53 = (ulong *)param_2[3];
          puVar20 = (ulong *)((long)param_4 + uVar61);
          if (puVar46 < puVar20) {
            puVar23 = param_4;
            puVar24 = puVar53;
            if (param_4 <= puVar46) {
              puVar24 = (ulong *)((long)puVar53 + ((long)puVar46 - (long)param_4));
              uVar54 = *param_4;
              puVar53[1] = param_4[1];
              *puVar53 = uVar54;
              uVar54 = param_4[2];
              puVar53[3] = param_4[3];
              puVar53[2] = uVar54;
              puVar23 = puVar46;
              if (0x20 < (long)puVar46 - (long)param_4) {
                puVar53 = puVar53 + 4;
                puVar59 = param_4 + 6;
                do {
                  uVar54 = puVar59[-2];
                  puVar53[1] = puVar59[-1];
                  *puVar53 = uVar54;
                  uVar54 = *puVar59;
                  puVar53[3] = puVar59[1];
                  puVar53[2] = uVar54;
                  puVar53 = puVar53 + 4;
                  puVar59 = puVar59 + 4;
                } while (puVar53 < puVar24);
              }
            }
            if (puVar23 < puVar20) {
              uVar54 = (long)puVar20 - (long)puVar23;
              if ((7 < uVar54) && (0x3f < (ulong)((long)puVar24 - (long)puVar23))) {
                if (uVar54 < 0x40) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = uVar54 & 0xffffffffffffffc0;
                  puVar53 = puVar24 + 4;
                  puVar59 = puVar23 + 4;
                  uVar64 = uVar17;
                  do {
                    uVar25 = puVar59[-4];
                    uVar60 = puVar59[-1];
                    uVar62 = puVar59[-2];
                    uVar70 = puVar59[1];
                    uVar44 = *puVar59;
                    uVar72 = puVar59[3];
                    uVar71 = puVar59[2];
                    puVar53[-3] = puVar59[-3];
                    puVar53[-4] = uVar25;
                    puVar53[-1] = uVar60;
                    puVar53[-2] = uVar62;
                    puVar53[1] = uVar70;
                    *puVar53 = uVar44;
                    puVar53[3] = uVar72;
                    puVar53[2] = uVar71;
                    uVar64 = uVar64 - 0x40;
                    puVar53 = puVar53 + 8;
                    puVar59 = puVar59 + 8;
                  } while (uVar64 != 0);
                  if (uVar54 == uVar17) goto LAB_100704e5c;
                  if ((uVar54 & 0x38) == 0) {
                    puVar23 = (ulong *)((long)puVar23 + uVar17);
                    puVar24 = (ulong *)((long)puVar24 + uVar17);
                    goto LAB_100704e4c;
                  }
                }
                uVar64 = uVar54 & 0xfffffffffffffff8;
                lVar57 = uVar17 - uVar64;
                puVar52 = (undefined8 *)((long)puVar24 + uVar17);
                puVar56 = (undefined8 *)((long)puVar23 + uVar17);
                do {
                  *puVar52 = *puVar56;
                  lVar57 = lVar57 + 8;
                  puVar52 = puVar52 + 1;
                  puVar56 = puVar56 + 1;
                } while (lVar57 != 0);
                puVar24 = (ulong *)((long)puVar24 + uVar64);
                puVar23 = (ulong *)((long)puVar23 + uVar64);
                if (uVar54 == uVar64) goto LAB_100704e5c;
              }
LAB_100704e4c:
              do {
                puVar53 = (ulong *)((long)puVar23 + 1);
                *(char *)puVar24 = (char)*puVar23;
                puVar24 = (ulong *)((long)puVar24 + 1);
                puVar23 = puVar53;
              } while (puVar53 != puVar20);
            }
LAB_100704e5c:
            param_2[3] = param_2[3] + uVar61;
            piVar50 = (int *)param_2[1];
            if (0xffff < uVar29) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar50 - *param_2) >> 3);
            }
          }
          else {
            uVar54 = *param_4;
            puVar53[1] = param_4[1];
            *puVar53 = uVar54;
            if (0x10 < uVar29) {
              lVar57 = param_2[3];
              uVar54 = param_4[2];
              *(ulong *)(lVar57 + 0x18) = param_4[3];
              *(ulong *)(lVar57 + 0x10) = uVar54;
              uVar54 = param_4[4];
              *(ulong *)(lVar57 + 0x28) = param_4[5];
              *(ulong *)(lVar57 + 0x20) = uVar54;
              if (uVar61 - 0x31 < 0xffffffffffffffdf) {
                puVar53 = (ulong *)(lVar57 + 0x30);
                puVar20 = param_4 + 8;
                do {
                  uVar54 = puVar20[-2];
                  puVar53[1] = puVar20[-1];
                  *puVar53 = uVar54;
                  uVar54 = *puVar20;
                  puVar53[3] = puVar20[1];
                  puVar53[2] = uVar54;
                  puVar53 = puVar53 + 4;
                  puVar20 = puVar20 + 4;
                } while (puVar53 < (ulong *)(lVar57 + uVar61));
                goto LAB_100704e5c;
              }
            }
            param_2[3] = param_2[3] + uVar61;
            piVar50 = (int *)param_2[1];
          }
          *(short *)(piVar50 + 1) = (short)uVar29;
          *piVar50 = uVar42 + 1;
          if (0xffff < uVar47) {
            *(undefined4 *)(param_2 + 9) = 2;
            *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar50 - *param_2) >> 3);
          }
          *(short *)((long)piVar50 + 6) = (short)uVar47;
          param_2[1] = (long)(piVar50 + 2);
          puVar53 = (ulong *)((long)param_4 + (ulong)(iVar16 + uVar29));
          uVar27 = uVar27 + 1;
          param_4 = puVar53;
          if (uVar45 < uVar27) goto LAB_100704a80;
        }
        puVar53 = (ulong *)((long)param_4 + uVar61);
      }
LAB_100704a80:
      if (*(int *)(param_1 + 0xa8) != 2) {
        iVar16 = *(int *)(param_1 + 0x78) + 1;
        uVar29 = (uint)LZCOUNT(iVar16) ^ 0x1f;
        *(uint *)(param_1 + 0x88) =
             ((uint)(iVar16 * 0x100) >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100;
      }
      iVar16 = *(int *)(param_1 + 0x84) + 1;
      uVar29 = (uint)LZCOUNT(iVar16) ^ 0x1f;
      iVar65 = (int)*(undefined8 *)(param_1 + 0x7c) + 1;
      iVar67 = (int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1;
      uVar42 = (uint)(byte)((byte)LZCOUNT(iVar65) ^ 0x1f);
      uVar45 = (uint)(byte)((byte)LZCOUNT(iVar67) ^ 0x1f);
      uVar66 = NEON_ushl(CONCAT44(iVar67 * 0x100,iVar65 * 0x100),CONCAT44(-uVar45,-uVar42),4);
      *(ulong *)(param_1 + 0x8c) =
           CONCAT44(uVar45 * 0x100 + (int)((ulong)uVar66 >> 0x20),uVar42 * 0x100 + (int)uVar66);
      *(uint *)(param_1 + 0x94) =
           ((uint)(iVar16 * 0x100) >> (ulong)(uVar29 & 0x1f)) + uVar29 * 0x100;
    } while (puVar53 < puVar58);
  }
LAB_100705104:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
    return (long)puVar3 - (long)param_4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100703c10:
  local_178 = &local_94;
  goto LAB_100703c24;
LAB_100703c1c:
  local_170 = &local_94;
LAB_100703c24:
  *local_178 = 0;
  *local_170 = 0;
LAB_100703c34:
  local_15c = local_15c + -8;
LAB_100703c38:
  *(int *)(param_1 + 0x24) = local_15c;
LAB_100703c3c:
  if (uVar42 != 0) {
    uVar29 = (piVar7 + (ulong)(uVar42 - 1) * 2)[1];
    if ((uVar5 < uVar29) || (0xfff < uVar29 + iVar65)) {
      if (piVar14[2] == 0) {
        iVar16 = piVar14[3];
      }
      else {
        iVar16 = 0;
      }
      iVar67 = piVar7[(ulong)(uVar42 - 1) * 2];
      uVar42 = 0;
      if ((uint)(iVar65 - iVar16) < 0x1001) {
        uVar42 = iVar65 - iVar16;
      }
      goto LAB_100704a08;
    }
    uVar64 = 0;
    piVar50 = piVar8 + uVar54 * 7 + 4;
    do {
      puVar4 = (uint *)(piVar7 + uVar64 * 2);
      uVar29 = *puVar4;
      if (uVar29 < 3) {
        uVar45 = uVar29 + (iVar67 != 0);
        if (uVar45 == 0) {
          iVar28 = *piVar50;
          iVar18 = piVar8[uVar54 * 7 + 5];
          piVar14 = piVar8 + uVar54 * 7 + 6;
        }
        else {
          if (uVar45 == 3) {
            iVar18 = *piVar50;
            iVar28 = iVar18 + -1;
          }
          else {
            iVar28 = piVar50[uVar45];
            iVar18 = *piVar50;
          }
          lVar57 = 8;
          if (uVar45 != 1) {
            lVar57 = 4;
          }
          piVar14 = (int *)((long)piVar50 + lVar57);
        }
      }
      else {
        iVar18 = *piVar50;
        iVar28 = uVar29 - 2;
        piVar14 = piVar8 + uVar54 * 7 + 5;
      }
      uVar45 = uVar26;
      if (uVar64 != 0) {
        uVar45 = puVar4[-1] + 1;
      }
      uVar27 = puVar4[1];
      if (uVar45 <= uVar27) {
        iVar55 = 0;
        iVar9 = *piVar14;
        uVar48 = (uint)LZCOUNT(uVar29 + 1) ^ 0x1f;
        uVar47 = iVar65 + uVar27;
        uVar19 = uVar47;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            uVar22 = (uint)LZCOUNT(uVar27 - 2) ^ 0x1f;
            iVar21 = iVar36 + iVar51 +
                     ((uVar27 - 2) * 0x100 >> (ulong)(uVar22 & 0x1f)) + (uVar22 + uVar48) * 0x100 +
                     0x1000;
            uVar17 = (ulong)(uVar27 + iVar65);
            if (uVar27 + iVar65 <= (uint)uVar61) goto LAB_100703dd4;
LAB_100703e8c:
            uVar62 = uVar61 & 0xffffffff;
            uVar25 = (uVar47 - iVar55) - uVar62;
            uVar61 = uVar62;
            if (uVar25 < 4) {
LAB_100703eec:
              piVar14 = piVar2 + uVar61 * 7;
              do {
                uVar61 = uVar61 + 1;
                *piVar14 = 0x40000000;
                piVar14 = piVar14 + 7;
              } while (uVar61 < uVar17);
            }
            else {
              uVar61 = (uVar25 & 0xfffffffffffffffc) + uVar62;
              uVar60 = uVar19 - uVar62 & 0xfffffffffffffffc;
              piVar14 = piVar8 + uVar62 * 7 + 0xe;
              do {
                piVar14[-7] = 0x40000000;
                *piVar14 = 0x40000000;
                piVar14[7] = 0x40000000;
                piVar14[0xe] = 0x40000000;
                piVar14 = piVar14 + 0x1c;
                uVar60 = uVar60 - 4;
              } while (uVar60 != 0);
              if (uVar25 != (uVar25 & 0xfffffffffffffffc)) goto LAB_100703eec;
            }
LAB_100703d68:
            piVar14 = piVar8 + uVar17 * 7;
            piVar14[2] = uVar27;
            piVar14[3] = local_98;
            *piVar14 = iVar21;
            piVar14[1] = uVar29;
            *(ulong *)(piVar14 + 4) = CONCAT44(iVar18,iVar28);
            piVar14[6] = iVar9;
          }
          else {
            uVar22 = uVar27 - 3;
            if (uVar22 < 0x80) {
              uVar22 = (uint)(byte)(&DAT_10084ff08)[uVar22];
            }
            else {
              uVar22 = 0x43 - (int)LZCOUNT(uVar22);
            }
            iVar21 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar48 * 4) + 1;
            uVar6 = (uint)LZCOUNT(iVar21) ^ 0x1f;
            iVar1 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar22 * 4) + 1;
            uVar63 = (uint)LZCOUNT(iVar1) ^ 0x1f;
            iVar21 = iVar36 + iVar51 +
                     (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                      ((uint)(iVar21 * 0x100) >> (ulong)(uVar6 & 0x1f))) -
                     ((uint)(iVar1 * 0x100) >> (ulong)(uVar63 & 0x1f))) +
                     (((uVar48 + *(int *)(&DAT_10084fe34 + (ulong)uVar22 * 4)) - uVar6) - uVar63) *
                     0x100 + 0x33;
            uVar17 = (ulong)(uVar27 + iVar65);
            if ((uint)uVar61 < uVar27 + iVar65) goto LAB_100703e8c;
LAB_100703dd4:
            if (iVar21 < piVar8[uVar17 * 7]) goto LAB_100703d68;
          }
          uVar27 = uVar27 - 1;
          iVar55 = iVar55 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar45 <= uVar27);
      }
      uVar64 = uVar64 + 1;
    } while (uVar64 != uVar42);
  }
LAB_100701e18:
  uVar54 = uVar61;
  uVar64 = (ulong)(iVar65 + 1U);
  if ((uint)uVar61 < iVar65 + 1U) goto LAB_1007049d4;
  goto LAB_100701e28;
}

