// rea decompile_all
// name: FUN_1006f6484
// address: 0x1006f6484
// body: available
// range: 0x1006f6484-0x1006fbbbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006fbbbc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006f8898) */
/* WARNING: Removing unreachable block (ram,0x0001006fb2d0) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006f6484(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  ulong *puVar17;
  int *piVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  int iVar41;
  ulong *puVar42;
  long lVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int *piVar49;
  int iVar50;
  long *plVar51;
  undefined8 *puVar52;
  long lVar53;
  uint *puVar54;
  uint *puVar55;
  ulong *puVar56;
  int iVar57;
  ulong uVar58;
  undefined8 *puVar59;
  long lVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong *puVar64;
  ulong uVar65;
  ulong *puVar66;
  uint uVar67;
  uint *puVar68;
  int iVar69;
  int iVar71;
  undefined8 uVar70;
  undefined8 uVar72;
  undefined8 uVar73;
  ulong uVar74;
  uint local_284;
  int local_224;
  uint *local_168;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  uint *local_110;
  uint local_fc;
  ulong *local_e0;
  int local_a4;
  uint local_94;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar64 = puVar3 + -1;
  lVar31 = *(long *)(param_1 + 8);
  uVar67 = *(uint *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar5) {
    uVar5 = 0xfff;
  }
  uVar29 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar29 = 4;
  }
  local_284 = *(uint *)(param_1 + 0x24);
  piVar6 = *(int **)(param_1 + 0x68);
  piVar8 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,2);
  local_e0 = param_4;
  if ((ulong *)(lVar31 + (ulong)uVar67) == param_4) {
    local_e0 = (ulong *)((long)param_4 + 1);
  }
  if (puVar64 <= local_e0) {
LAB_1006fbb7c:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return (long)puVar3 - (long)param_4;
  }
  uVar32 = (ulong)(uVar29 - 1);
  puVar33 = (ulong *)((long)puVar3 - 7);
  puVar42 = (ulong *)((long)puVar3 - 3);
  puVar34 = (ulong *)((long)puVar3 - 1);
  puVar35 = puVar3 + -4;
  piVar2 = piVar8 + 7;
  lVar31 = (ulong)uVar29 - 1;
LAB_1006f65c4:
  iVar37 = (int)local_e0;
  local_a4 = iVar37 - (int)param_4;
  lVar60 = *(long *)(param_1 + 8);
  uVar67 = *(uint *)(param_1 + 0x24);
  uVar61 = (ulong)uVar67;
  if (local_e0 < (ulong *)(lVar60 + uVar61)) goto LAB_1006f65b0;
  iVar69 = *(int *)(param_1 + 200);
  uVar44 = iVar37 - (int)lVar60;
  while (uVar67 < uVar44) {
    lVar43 = param_1;
    FUN_100705148(param_1,lVar60 + uVar61,puVar3,iVar69,0);
    uVar67 = (int)lVar43 + (int)uVar61;
    uVar61 = (ulong)uVar67;
  }
  *(uint *)(param_1 + 0x24) = uVar44;
  if (iVar69 - 6U < 2) {
    uVar61 = 0;
    uVar67 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar67) {
      uVar67 = 0xfff;
    }
    lVar60 = *(long *)(param_1 + 8);
    lVar43 = *(long *)(param_1 + 0x30);
    uVar46 = *(uint *)(param_1 + 0xc4);
    uVar62 = *local_e0 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar22 = *(uint *)(lVar43 + uVar62 * 4);
    lVar53 = *(long *)(param_1 + 0x40);
    uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar48 = ~uVar47;
    uVar27 = iVar37 - (int)lVar60;
    uVar44 = 0;
    if (uVar48 <= uVar27) {
      uVar44 = uVar27 - uVar48;
    }
    uVar14 = *(uint *)(param_1 + 0x18);
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar28 = uVar27 - uVar4;
    if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar4 || *(int *)(param_1 + 0x20) != 0) {
      uVar28 = *(uint *)(param_1 + 0x1c);
    }
    uVar4 = uVar28;
    if (uVar28 < 2) {
      uVar4 = 1;
    }
    plVar51 = *(long **)(param_1 + 0xb0);
    lVar7 = *plVar51;
    lVar9 = plVar51[1];
    iVar69 = (int)(lVar7 - lVar9);
    uVar28 = uVar28 - iVar69;
    lVar15 = plVar51[0x18];
    uVar10 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
    uVar11 = *(uint *)((long)plVar51 + 0x1c);
    uVar13 = iVar69 - uVar10;
    if (iVar69 - uVar11 <= uVar10) {
      uVar13 = uVar11;
    }
    bVar16 = local_a4 == 0;
    uVar24 = (ulong)bVar16;
    puVar54 = (uint *)(lVar53 + (ulong)((uVar27 & (uVar47 ^ 0xffffffff)) << 1) * 4);
    puVar55 = puVar54 + 1;
    iVar69 = uVar27 + 9;
    uVar21 = 3;
    if (bVar16) {
      uVar21 = 4;
    }
    puVar56 = (ulong *)((long)local_e0 + 4);
    uVar40 = uVar32;
    do {
      if (uVar24 == 3) {
        uVar47 = *param_3 - 1;
        uVar39 = *param_3 - 2;
        if (uVar39 < uVar27 - uVar14) goto LAB_1006f6c70;
LAB_1006f6bc4:
        if ((uVar39 < (uVar27 - uVar11) - uVar28 && (uVar27 - uVar47) - uVar14 < 0xfffffffd) &&
           (puVar68 = (uint *)((lVar9 - (ulong)uVar28) + (ulong)(uVar27 - uVar47)),
           (uint)*local_e0 == *puVar68)) {
          puVar66 = puVar56;
          FUN_1006c7460(puVar56,puVar68 + 1,puVar3,lVar7,lVar60 + (ulong)uVar14);
          uVar47 = (int)puVar66 + 4;
          uVar65 = (ulong)uVar47;
          if (uVar65 <= uVar40) goto LAB_1006f6b98;
          goto LAB_1006f6dd4;
        }
      }
      else {
        uVar47 = param_3[uVar24];
        uVar39 = uVar47 - 1;
        if (uVar27 - uVar14 <= uVar39) goto LAB_1006f6bc4;
LAB_1006f6c70:
        if ((uint)*local_e0 == *(uint *)((long)local_e0 - (ulong)uVar47)) {
          lVar36 = -(ulong)uVar47;
          puVar66 = (ulong *)((long)puVar56 + lVar36);
          puVar20 = puVar56;
          if (puVar56 < puVar33) {
            if (*puVar66 == *puVar56) {
              iVar71 = 0;
              puVar66 = (ulong *)((long)local_e0 + 0xc + lVar36);
              puVar20 = (ulong *)((long)local_e0 + 0xc);
              do {
                if (puVar33 <= puVar20) goto LAB_1006f6d18;
                uVar63 = *puVar66;
                uVar65 = *puVar20;
                iVar71 = iVar71 + 8;
                puVar66 = puVar66 + 1;
                puVar20 = puVar20 + 1;
              } while (uVar63 == uVar65);
              uVar65 = uVar65 ^ uVar63;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              iVar71 = iVar71 + (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
            }
            else {
              uVar65 = *puVar56 ^ *puVar66;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              iVar71 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
            }
          }
          else {
LAB_1006f6d18:
            if (puVar20 < puVar42) {
              if ((uint)*puVar66 == (uint)*puVar20) {
                puVar66 = (ulong *)((long)puVar66 + 4);
                puVar20 = (ulong *)((long)puVar20 + 4);
              }
            }
            if (puVar20 < puVar34) {
              if (*(short *)puVar66 == *(short *)puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 2);
                puVar66 = (ulong *)((long)puVar66 + 2);
              }
            }
            if ((puVar20 < puVar3) && ((char)*puVar66 == (char)*puVar20)) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
            iVar71 = (int)puVar20 - (int)puVar56;
          }
          uVar47 = iVar71 + 4;
          uVar65 = (ulong)uVar47;
          if (uVar40 < uVar65) {
LAB_1006f6dd4:
            piVar6[uVar61 * 2] = (int)uVar24 - (uint)bVar16;
            (piVar6 + uVar61 * 2)[1] = uVar47;
            uVar61 = (ulong)((int)uVar61 + 1);
            if ((uVar67 < uVar47) || (uVar40 = uVar65, (ulong *)((long)local_e0 + uVar65) == puVar3)
               ) goto LAB_1006f88c0;
          }
        }
      }
LAB_1006f6b98:
      local_fc = (uint)uVar61;
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar21);
    *(uint *)(lVar43 + uVar62 * 4) = uVar27;
    uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
    if (uVar4 <= uVar22) {
      uVar24 = 0;
      uVar62 = 0;
      puVar68 = puVar55;
      iVar71 = iVar69;
      do {
        uVar21 = uVar24;
        if (uVar62 <= uVar24) {
          uVar21 = uVar62;
        }
        lVar43 = lVar60 + (ulong)uVar22;
        puVar56 = (ulong *)(lVar43 + uVar21);
        puVar66 = (ulong *)((long)local_e0 + uVar21);
        puVar20 = puVar66;
        if (puVar66 < puVar33) {
          if (*puVar56 == *puVar66) {
            lVar36 = 0;
            puVar56 = (ulong *)(lVar60 + 8 + uVar21 + uVar22);
            puVar20 = (ulong *)((long)local_e0 + uVar21 + 8);
            do {
              if (puVar33 <= puVar20) goto joined_r0x0001006f7aec;
              uVar65 = *puVar56;
              uVar63 = *puVar20;
              lVar36 = lVar36 + 8;
              puVar56 = puVar56 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar65 == uVar63);
            uVar63 = uVar63 ^ uVar65;
            uVar65 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = lVar36 + ((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
          }
          else {
            uVar65 = *puVar66 ^ *puVar56;
            uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = (ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
          }
          uVar65 = uVar65 + uVar21;
        }
        else {
joined_r0x0001006f7aec:
          if (puVar20 < puVar42) {
            if ((uint)*puVar56 == (uint)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
          }
          if (puVar20 < puVar34) {
            if ((short)*puVar56 == (short)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if ((puVar20 < puVar3) && ((char)*puVar56 == (char)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          uVar65 = (long)puVar20 + (uVar21 - (long)puVar66);
        }
        iVar69 = iVar71;
        if (uVar40 < uVar65) {
          iVar69 = uVar22 + (int)uVar65;
          if (uVar65 <= iVar71 - uVar22) {
            iVar69 = iVar71;
          }
          piVar6[uVar61 * 2] = (uVar27 + 2) - uVar22;
          (piVar6 + uVar61 * 2)[1] = (int)uVar65;
          local_fc = (int)uVar61 + 1;
          uVar61 = (ulong)local_fc;
          uVar40 = uVar65;
          if (0x1000 < uVar65 || (ulong *)((long)local_e0 + uVar65) == puVar3) {
            *puVar68 = 0;
            *puVar54 = 0;
            goto LAB_1006f88b4;
          }
        }
        local_fc = (uint)uVar61;
        puVar55 = (uint *)(lVar53 + (ulong)((uVar22 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + uVar65) < *(byte *)((long)local_e0 + uVar65)) {
          *puVar54 = uVar22;
          if (uVar22 <= uVar44) {
            puVar54 = &local_94;
            puVar55 = puVar68;
            break;
          }
          puVar55 = puVar55 + 1;
          uVar24 = uVar65;
          puVar54 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            puVar55 = puVar68;
            break;
          }
        }
        else {
          *puVar68 = uVar22;
          if (uVar22 <= uVar44) {
            puVar55 = &local_94;
            break;
          }
          uVar62 = uVar65;
          puVar68 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            break;
          }
        }
        uVar67 = uVar67 - 1;
        uVar22 = *puVar55;
        puVar55 = puVar68;
        iVar71 = iVar69;
      } while (uVar4 <= uVar22);
    }
    *puVar55 = 0;
    *puVar54 = 0;
    if ((uVar67 != 0) &&
       (uVar44 = *(uint *)(plVar51[6] +
                          (*local_e0 * -0x30e4432340650000 >> ((ulong)(uint)-(int)lVar15 & 0x3f)) *
                          4), uVar11 < uVar44)) {
      uVar61 = 0;
      lVar43 = plVar51[8];
      uVar62 = 0;
      iVar71 = iVar69;
      do {
        uVar67 = uVar67 - 1;
        uVar24 = uVar62;
        if (uVar61 <= uVar62) {
          uVar24 = uVar61;
        }
        uVar21 = (ulong)uVar44;
        lVar53 = (long)local_e0 + uVar24;
        FUN_1006c7460(lVar53,lVar9 + uVar21 + uVar24,puVar3,lVar7,lVar60 + (ulong)uVar14);
        uVar24 = lVar53 + uVar24;
        lVar53 = lVar9 + uVar21;
        if ((lVar7 - lVar9 & 0xffffffffU) <= uVar24 + uVar21) {
          lVar53 = lVar60 + (ulong)uVar28 + uVar21;
        }
        iVar69 = iVar71;
        if (uVar40 < uVar24) {
          iVar50 = uVar44 + uVar28;
          iVar69 = iVar50 + (int)uVar24;
          if (uVar24 <= (uint)(iVar71 - iVar50)) {
            iVar69 = iVar71;
          }
          piVar6[(ulong)local_fc * 2] = (uVar27 + 2) - iVar50;
          (piVar6 + (ulong)local_fc * 2)[1] = (int)uVar24;
          local_fc = local_fc + 1;
          if ((0x1000 < uVar24) || (uVar40 = uVar24, (ulong *)((long)local_e0 + uVar24) == puVar3))
          break;
        }
        if (uVar44 <= uVar13) break;
        bVar16 = *(byte *)(lVar53 + uVar24) < *(byte *)((long)local_e0 + uVar24);
        uVar21 = uVar24;
        if (!bVar16) {
          uVar21 = uVar62;
          uVar61 = uVar24;
        }
        if ((uVar67 == 0) ||
           (uVar44 = *(uint *)(lVar43 + (ulong)((uVar44 & uVar10) << 1) * 4 + (ulong)bVar16 * 4),
           uVar62 = uVar21, iVar71 = iVar69, uVar44 <= uVar11)) break;
      } while( true );
    }
    goto LAB_1006f88b4;
  }
  if (iVar69 == 5) {
    uVar61 = 0;
    uVar67 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar67) {
      uVar67 = 0xfff;
    }
    lVar60 = *(long *)(param_1 + 8);
    lVar43 = *(long *)(param_1 + 0x30);
    uVar46 = *(uint *)(param_1 + 0xc4);
    uVar62 = *local_e0 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar22 = *(uint *)(lVar43 + uVar62 * 4);
    lVar53 = *(long *)(param_1 + 0x40);
    uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar48 = ~uVar47;
    uVar27 = iVar37 - (int)lVar60;
    uVar44 = 0;
    if (uVar48 <= uVar27) {
      uVar44 = uVar27 - uVar48;
    }
    uVar14 = *(uint *)(param_1 + 0x18);
    uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar28 = uVar27 - uVar4;
    if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar4 || *(int *)(param_1 + 0x20) != 0) {
      uVar28 = *(uint *)(param_1 + 0x1c);
    }
    uVar4 = uVar28;
    if (uVar28 < 2) {
      uVar4 = 1;
    }
    plVar51 = *(long **)(param_1 + 0xb0);
    lVar7 = *plVar51;
    lVar9 = plVar51[1];
    iVar69 = (int)(lVar7 - lVar9);
    uVar28 = uVar28 - iVar69;
    lVar15 = plVar51[0x18];
    uVar10 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
    uVar11 = *(uint *)((long)plVar51 + 0x1c);
    uVar13 = iVar69 - uVar10;
    if (iVar69 - uVar11 <= uVar10) {
      uVar13 = uVar11;
    }
    bVar16 = local_a4 == 0;
    uVar24 = (ulong)bVar16;
    puVar54 = (uint *)(lVar53 + (ulong)((uVar27 & (uVar47 ^ 0xffffffff)) << 1) * 4);
    puVar55 = puVar54 + 1;
    iVar69 = uVar27 + 9;
    uVar21 = 3;
    if (bVar16) {
      uVar21 = 4;
    }
    puVar56 = (ulong *)((long)local_e0 + 4);
    uVar40 = uVar32;
    do {
      if (uVar24 == 3) {
        uVar47 = *param_3 - 1;
        uVar39 = *param_3 - 2;
        if (uVar39 < uVar27 - uVar14) goto LAB_1006f7224;
LAB_1006f717c:
        if ((uVar39 < (uVar27 - uVar11) - uVar28 && (uVar27 - uVar47) - uVar14 < 0xfffffffd) &&
           (puVar68 = (uint *)((lVar9 - (ulong)uVar28) + (ulong)(uVar27 - uVar47)),
           (uint)*local_e0 == *puVar68)) {
          puVar66 = puVar56;
          FUN_1006c7460(puVar56,puVar68 + 1,puVar3,lVar7,lVar60 + (ulong)uVar14);
          uVar47 = (int)puVar66 + 4;
          uVar65 = (ulong)uVar47;
          if (uVar65 <= uVar40) goto LAB_1006f7150;
          goto LAB_1006f7388;
        }
      }
      else {
        uVar47 = param_3[uVar24];
        uVar39 = uVar47 - 1;
        if (uVar27 - uVar14 <= uVar39) goto LAB_1006f717c;
LAB_1006f7224:
        if ((uint)*local_e0 == *(uint *)((long)local_e0 - (ulong)uVar47)) {
          lVar36 = -(ulong)uVar47;
          puVar66 = (ulong *)((long)puVar56 + lVar36);
          puVar20 = puVar56;
          if (puVar56 < puVar33) {
            if (*puVar66 == *puVar56) {
              iVar71 = 0;
              puVar66 = (ulong *)((long)local_e0 + 0xc + lVar36);
              puVar20 = (ulong *)((long)local_e0 + 0xc);
              do {
                if (puVar33 <= puVar20) goto LAB_1006f72cc;
                uVar63 = *puVar66;
                uVar65 = *puVar20;
                iVar71 = iVar71 + 8;
                puVar66 = puVar66 + 1;
                puVar20 = puVar20 + 1;
              } while (uVar63 == uVar65);
              uVar65 = uVar65 ^ uVar63;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              iVar71 = iVar71 + (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
            }
            else {
              uVar65 = *puVar56 ^ *puVar66;
              uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
              uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
              iVar71 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
            }
          }
          else {
LAB_1006f72cc:
            if (puVar20 < puVar42) {
              if ((uint)*puVar66 == (uint)*puVar20) {
                puVar66 = (ulong *)((long)puVar66 + 4);
                puVar20 = (ulong *)((long)puVar20 + 4);
              }
            }
            if (puVar20 < puVar34) {
              if (*(short *)puVar66 == *(short *)puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 2);
                puVar66 = (ulong *)((long)puVar66 + 2);
              }
            }
            if ((puVar20 < puVar3) && ((char)*puVar66 == (char)*puVar20)) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
            iVar71 = (int)puVar20 - (int)puVar56;
          }
          uVar47 = iVar71 + 4;
          uVar65 = (ulong)uVar47;
          if (uVar40 < uVar65) {
LAB_1006f7388:
            piVar6[uVar61 * 2] = (int)uVar24 - (uint)bVar16;
            (piVar6 + uVar61 * 2)[1] = uVar47;
            uVar61 = (ulong)((int)uVar61 + 1);
            if ((uVar67 < uVar47) || (uVar40 = uVar65, (ulong *)((long)local_e0 + uVar65) == puVar3)
               ) goto LAB_1006f88c0;
          }
        }
      }
LAB_1006f7150:
      local_fc = (uint)uVar61;
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar21);
    *(uint *)(lVar43 + uVar62 * 4) = uVar27;
    uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
    if (uVar4 <= uVar22) {
      uVar24 = 0;
      uVar62 = 0;
      puVar68 = puVar55;
      iVar71 = iVar69;
      do {
        uVar21 = uVar24;
        if (uVar62 <= uVar24) {
          uVar21 = uVar62;
        }
        lVar43 = lVar60 + (ulong)uVar22;
        puVar56 = (ulong *)(lVar43 + uVar21);
        puVar66 = (ulong *)((long)local_e0 + uVar21);
        puVar20 = puVar66;
        if (puVar66 < puVar33) {
          if (*puVar56 == *puVar66) {
            lVar36 = 0;
            puVar56 = (ulong *)(lVar60 + 8 + uVar21 + uVar22);
            puVar20 = (ulong *)((long)local_e0 + uVar21 + 8);
            do {
              if (puVar33 <= puVar20) goto joined_r0x0001006f80f8;
              uVar65 = *puVar56;
              uVar63 = *puVar20;
              lVar36 = lVar36 + 8;
              puVar56 = puVar56 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar65 == uVar63);
            uVar63 = uVar63 ^ uVar65;
            uVar65 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = lVar36 + ((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
          }
          else {
            uVar65 = *puVar66 ^ *puVar56;
            uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = (ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
          }
          uVar65 = uVar65 + uVar21;
        }
        else {
joined_r0x0001006f80f8:
          if (puVar20 < puVar42) {
            if ((uint)*puVar56 == (uint)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
          }
          if (puVar20 < puVar34) {
            if ((short)*puVar56 == (short)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if ((puVar20 < puVar3) && ((char)*puVar56 == (char)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          uVar65 = (long)puVar20 + (uVar21 - (long)puVar66);
        }
        iVar69 = iVar71;
        if (uVar40 < uVar65) {
          iVar69 = uVar22 + (int)uVar65;
          if (uVar65 <= iVar71 - uVar22) {
            iVar69 = iVar71;
          }
          piVar6[uVar61 * 2] = (uVar27 + 2) - uVar22;
          (piVar6 + uVar61 * 2)[1] = (int)uVar65;
          local_fc = (int)uVar61 + 1;
          uVar61 = (ulong)local_fc;
          uVar40 = uVar65;
          if (0x1000 < uVar65 || (ulong *)((long)local_e0 + uVar65) == puVar3) goto LAB_1006f8734;
        }
        local_fc = (uint)uVar61;
        puVar55 = (uint *)(lVar53 + (ulong)((uVar22 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + uVar65) < *(byte *)((long)local_e0 + uVar65)) {
          *puVar54 = uVar22;
          if (uVar22 <= uVar44) {
            puVar54 = &local_94;
            puVar55 = puVar68;
            break;
          }
          puVar55 = puVar55 + 1;
          uVar24 = uVar65;
          puVar54 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            puVar55 = puVar68;
            break;
          }
        }
        else {
          *puVar68 = uVar22;
          if (uVar22 <= uVar44) {
            puVar55 = &local_94;
            break;
          }
          uVar62 = uVar65;
          puVar68 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            break;
          }
        }
        uVar67 = uVar67 - 1;
        uVar22 = *puVar55;
        puVar55 = puVar68;
        iVar71 = iVar69;
      } while (uVar4 <= uVar22);
    }
    *puVar55 = 0;
    *puVar54 = 0;
    if ((uVar67 != 0) &&
       (uVar44 = *(uint *)(plVar51[6] +
                          (*local_e0 * -0x30e4432345000000 >> ((ulong)(uint)-(int)lVar15 & 0x3f)) *
                          4), uVar11 < uVar44)) {
      uVar61 = 0;
      lVar43 = plVar51[8];
      uVar62 = 0;
      iVar71 = iVar69;
      do {
        uVar67 = uVar67 - 1;
        uVar24 = uVar62;
        if (uVar61 <= uVar62) {
          uVar24 = uVar61;
        }
        uVar21 = (ulong)uVar44;
        lVar53 = (long)local_e0 + uVar24;
        FUN_1006c7460(lVar53,lVar9 + uVar21 + uVar24,puVar3,lVar7,lVar60 + (ulong)uVar14);
        uVar24 = lVar53 + uVar24;
        lVar53 = lVar9 + uVar21;
        if ((lVar7 - lVar9 & 0xffffffffU) <= uVar24 + uVar21) {
          lVar53 = lVar60 + (ulong)uVar28 + uVar21;
        }
        iVar69 = iVar71;
        if (uVar40 < uVar24) {
          iVar50 = uVar44 + uVar28;
          iVar69 = iVar50 + (int)uVar24;
          if (uVar24 <= (uint)(iVar71 - iVar50)) {
            iVar69 = iVar71;
          }
          piVar6[(ulong)local_fc * 2] = (uVar27 + 2) - iVar50;
          (piVar6 + (ulong)local_fc * 2)[1] = (int)uVar24;
          local_fc = local_fc + 1;
          if ((0x1000 < uVar24) || (uVar40 = uVar24, (ulong *)((long)local_e0 + uVar24) == puVar3))
          break;
        }
        if (uVar44 <= uVar13) break;
        bVar16 = *(byte *)(lVar53 + uVar24) < *(byte *)((long)local_e0 + uVar24);
        uVar21 = uVar24;
        if (!bVar16) {
          uVar21 = uVar62;
          uVar61 = uVar24;
        }
        if ((uVar67 == 0) ||
           (uVar44 = *(uint *)(lVar43 + (ulong)((uVar44 & uVar10) << 1) * 4 + (ulong)bVar16 * 4),
           uVar62 = uVar21, iVar71 = iVar69, uVar44 <= uVar11)) break;
      } while( true );
    }
    goto LAB_1006f88b4;
  }
  if (iVar69 != 3) {
    uVar61 = 0;
    uVar67 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar67) {
      uVar67 = 0xfff;
    }
    lVar60 = *(long *)(param_1 + 8);
    lVar43 = *(long *)(param_1 + 0x30);
    uVar46 = *(uint *)(param_1 + 0xc4);
    uVar48 = (uint)*local_e0 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
    uVar22 = *(uint *)(lVar43 + (ulong)uVar48 * 4);
    lVar53 = *(long *)(param_1 + 0x40);
    uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar27 = ~uVar47;
    uVar28 = iVar37 - (int)lVar60;
    uVar44 = 0;
    if (uVar27 <= uVar28) {
      uVar44 = uVar28 - uVar27;
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar13 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar14 = uVar28 - uVar13;
    if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar13 || *(int *)(param_1 + 0x20) != 0) {
      uVar14 = *(uint *)(param_1 + 0x1c);
    }
    uVar13 = uVar14;
    if (uVar14 < 2) {
      uVar13 = 1;
    }
    plVar51 = *(long **)(param_1 + 0xb0);
    lVar7 = *plVar51;
    lVar9 = plVar51[1];
    iVar69 = (int)(lVar7 - lVar9);
    uVar14 = uVar14 - iVar69;
    lVar15 = plVar51[0x18];
    uVar39 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
    uVar10 = *(uint *)((long)plVar51 + 0x1c);
    uVar11 = iVar69 - uVar39;
    if (iVar69 - uVar10 <= uVar39) {
      uVar11 = uVar10;
    }
    bVar16 = local_a4 == 0;
    uVar62 = (ulong)bVar16;
    puVar54 = (uint *)(lVar53 + (ulong)((uVar28 & (uVar47 ^ 0xffffffff)) << 1) * 4);
    puVar55 = puVar54 + 1;
    iVar69 = uVar28 + 9;
    uVar24 = 3;
    if (bVar16) {
      uVar24 = 4;
    }
    puVar56 = (ulong *)((long)local_e0 + 4);
    uVar21 = uVar32;
    do {
      if (uVar62 == 3) {
        uVar47 = *param_3 - 1;
        uVar38 = *param_3 - 2;
        if (uVar38 < uVar28 - uVar4) goto LAB_1006f75f8;
LAB_1006f7550:
        if ((uVar38 < (uVar28 - uVar10) - uVar14 && (uVar28 - uVar47) - uVar4 < 0xfffffffd) &&
           (puVar68 = (uint *)((lVar9 - (ulong)uVar14) + (ulong)(uVar28 - uVar47)),
           (uint)*local_e0 == *puVar68)) {
          puVar66 = puVar56;
          FUN_1006c7460(puVar56,puVar68 + 1,puVar3,lVar7,lVar60 + (ulong)uVar4);
          uVar47 = (int)puVar66 + 4;
          uVar40 = (ulong)uVar47;
          if (uVar40 <= uVar21) goto LAB_1006f7524;
          goto LAB_1006f775c;
        }
      }
      else {
        uVar47 = param_3[uVar62];
        uVar38 = uVar47 - 1;
        if (uVar28 - uVar4 <= uVar38) goto LAB_1006f7550;
LAB_1006f75f8:
        if ((uint)*local_e0 == *(uint *)((long)local_e0 - (ulong)uVar47)) {
          lVar36 = -(ulong)uVar47;
          puVar66 = (ulong *)((long)puVar56 + lVar36);
          puVar20 = puVar56;
          if (puVar56 < puVar33) {
            if (*puVar66 == *puVar56) {
              iVar71 = 0;
              puVar66 = (ulong *)((long)local_e0 + 0xc + lVar36);
              puVar20 = (ulong *)((long)local_e0 + 0xc);
              do {
                if (puVar33 <= puVar20) goto LAB_1006f76a0;
                uVar65 = *puVar66;
                uVar40 = *puVar20;
                iVar71 = iVar71 + 8;
                puVar66 = puVar66 + 1;
                puVar20 = puVar20 + 1;
              } while (uVar65 == uVar40);
              uVar40 = uVar40 ^ uVar65;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              iVar71 = iVar71 + (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
            }
            else {
              uVar40 = *puVar56 ^ *puVar66;
              uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
              uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
              uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
              uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
              iVar71 = (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
            }
          }
          else {
LAB_1006f76a0:
            if (puVar20 < puVar42) {
              if ((uint)*puVar66 == (uint)*puVar20) {
                puVar66 = (ulong *)((long)puVar66 + 4);
                puVar20 = (ulong *)((long)puVar20 + 4);
              }
            }
            if (puVar20 < puVar34) {
              if (*(short *)puVar66 == *(short *)puVar20) {
                puVar20 = (ulong *)((long)puVar20 + 2);
                puVar66 = (ulong *)((long)puVar66 + 2);
              }
            }
            if ((puVar20 < puVar3) && ((char)*puVar66 == (char)*puVar20)) {
              puVar20 = (ulong *)((long)puVar20 + 1);
            }
            iVar71 = (int)puVar20 - (int)puVar56;
          }
          uVar47 = iVar71 + 4;
          uVar40 = (ulong)uVar47;
          if (uVar21 < uVar40) {
LAB_1006f775c:
            piVar6[uVar61 * 2] = (int)uVar62 - (uint)bVar16;
            (piVar6 + uVar61 * 2)[1] = uVar47;
            uVar61 = (ulong)((int)uVar61 + 1);
            if ((uVar67 < uVar47) || (uVar21 = uVar40, (ulong *)((long)local_e0 + uVar40) == puVar3)
               ) goto LAB_1006f88c0;
          }
        }
      }
LAB_1006f7524:
      local_fc = (uint)uVar61;
      uVar62 = uVar62 + 1;
    } while (uVar62 < uVar24);
    *(uint *)(lVar43 + (ulong)uVar48 * 4) = uVar28;
    uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
    if (uVar13 <= uVar22) {
      uVar24 = 0;
      uVar62 = 0;
      puVar68 = puVar55;
      iVar71 = iVar69;
      do {
        uVar40 = uVar24;
        if (uVar62 <= uVar24) {
          uVar40 = uVar62;
        }
        lVar43 = lVar60 + (ulong)uVar22;
        puVar56 = (ulong *)(lVar43 + uVar40);
        puVar66 = (ulong *)((long)local_e0 + uVar40);
        puVar20 = puVar66;
        if (puVar66 < puVar33) {
          if (*puVar56 == *puVar66) {
            lVar36 = 0;
            puVar56 = (ulong *)(lVar60 + 8 + uVar40 + uVar22);
            puVar20 = (ulong *)((long)local_e0 + uVar40 + 8);
            do {
              if (puVar33 <= puVar20) goto joined_r0x0001006f831c;
              uVar65 = *puVar56;
              uVar63 = *puVar20;
              lVar36 = lVar36 + 8;
              puVar56 = puVar56 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar65 == uVar63);
            uVar63 = uVar63 ^ uVar65;
            uVar65 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = lVar36 + ((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
          }
          else {
            uVar65 = *puVar66 ^ *puVar56;
            uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = (ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
          }
          uVar65 = uVar65 + uVar40;
        }
        else {
joined_r0x0001006f831c:
          if (puVar20 < puVar42) {
            if ((uint)*puVar56 == (uint)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
          }
          if (puVar20 < puVar34) {
            if ((short)*puVar56 == (short)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if ((puVar20 < puVar3) && ((char)*puVar56 == (char)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          uVar65 = (long)puVar20 + (uVar40 - (long)puVar66);
        }
        iVar69 = iVar71;
        if (uVar21 < uVar65) {
          iVar69 = uVar22 + (int)uVar65;
          if (uVar65 <= iVar71 - uVar22) {
            iVar69 = iVar71;
          }
          piVar6[uVar61 * 2] = (uVar28 + 2) - uVar22;
          (piVar6 + uVar61 * 2)[1] = (int)uVar65;
          local_fc = (int)uVar61 + 1;
          uVar61 = (ulong)local_fc;
          uVar21 = uVar65;
          if (0x1000 < uVar65 || (ulong *)((long)local_e0 + uVar65) == puVar3) goto LAB_1006f8734;
        }
        local_fc = (uint)uVar61;
        puVar55 = (uint *)(lVar53 + (ulong)((uVar22 & uVar27) << 1) * 4);
        if (*(byte *)(lVar43 + uVar65) < *(byte *)((long)local_e0 + uVar65)) {
          *puVar54 = uVar22;
          if (uVar22 <= uVar44) {
            puVar54 = &local_94;
            puVar55 = puVar68;
            break;
          }
          puVar55 = puVar55 + 1;
          uVar24 = uVar65;
          puVar54 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            puVar55 = puVar68;
            break;
          }
        }
        else {
          *puVar68 = uVar22;
          if (uVar22 <= uVar44) {
            puVar55 = &local_94;
            break;
          }
          uVar62 = uVar65;
          puVar68 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            break;
          }
        }
        uVar67 = uVar67 - 1;
        uVar22 = *puVar55;
        puVar55 = puVar68;
        iVar71 = iVar69;
      } while (uVar13 <= uVar22);
    }
    *puVar55 = 0;
    *puVar54 = 0;
    if ((uVar67 != 0) &&
       (uVar44 = *(uint *)(plVar51[6] +
                          (ulong)((uint)*local_e0 * -0x61c8864f >> (ulong)(-(int)lVar15 & 0x1f)) * 4
                          ), uVar10 < uVar44)) {
      uVar61 = 0;
      lVar43 = plVar51[8];
      uVar62 = 0;
      iVar71 = iVar69;
      do {
        uVar67 = uVar67 - 1;
        uVar24 = uVar62;
        if (uVar61 <= uVar62) {
          uVar24 = uVar61;
        }
        uVar40 = (ulong)uVar44;
        lVar53 = (long)local_e0 + uVar24;
        FUN_1006c7460(lVar53,lVar9 + uVar40 + uVar24,puVar3,lVar7,lVar60 + (ulong)uVar4);
        uVar24 = lVar53 + uVar24;
        lVar53 = lVar9 + uVar40;
        if ((lVar7 - lVar9 & 0xffffffffU) <= uVar24 + uVar40) {
          lVar53 = lVar60 + (ulong)uVar14 + uVar40;
        }
        iVar69 = iVar71;
        if (uVar21 < uVar24) {
          iVar50 = uVar44 + uVar14;
          iVar69 = iVar50 + (int)uVar24;
          if (uVar24 <= (uint)(iVar71 - iVar50)) {
            iVar69 = iVar71;
          }
          piVar6[(ulong)local_fc * 2] = (uVar28 + 2) - iVar50;
          (piVar6 + (ulong)local_fc * 2)[1] = (int)uVar24;
          local_fc = local_fc + 1;
          if ((0x1000 < uVar24) || (uVar21 = uVar24, (ulong *)((long)local_e0 + uVar24) == puVar3))
          break;
        }
        if (uVar44 <= uVar11) break;
        bVar16 = *(byte *)(lVar53 + uVar24) < *(byte *)((long)local_e0 + uVar24);
        uVar40 = uVar24;
        if (!bVar16) {
          uVar40 = uVar62;
          uVar61 = uVar24;
        }
        if ((uVar67 == 0) ||
           (uVar44 = *(uint *)(lVar43 + (ulong)((uVar44 & uVar39) << 1) * 4 + (ulong)bVar16 * 4),
           uVar62 = uVar40, iVar71 = iVar69, uVar44 <= uVar10)) break;
      } while( true );
    }
    goto LAB_1006f88b4;
  }
  uVar61 = 0;
  uVar67 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar67) {
    uVar67 = 0xfff;
  }
  lVar60 = *(long *)(param_1 + 8);
  lVar43 = *(long *)(param_1 + 0x30);
  uVar46 = *(uint *)(param_1 + 0xc4);
  uVar48 = (uint)*local_e0 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
  uVar22 = *(uint *)(lVar43 + (ulong)uVar48 * 4);
  lVar53 = *(long *)(param_1 + 0x40);
  uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar27 = ~uVar47;
  uVar28 = (uint)((long)local_e0 - lVar60);
  uVar44 = 0;
  if (uVar27 <= uVar28) {
    uVar44 = uVar28 - uVar27;
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar13 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar14 = uVar28 - uVar13;
  if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar13 || *(int *)(param_1 + 0x20) != 0) {
    uVar14 = *(uint *)(param_1 + 0x1c);
  }
  uVar13 = uVar14;
  if (uVar14 < 2) {
    uVar13 = 1;
  }
  plVar51 = *(long **)(param_1 + 0xb0);
  lVar7 = *plVar51;
  lVar9 = plVar51[1];
  iVar69 = (int)(lVar7 - lVar9);
  uVar14 = uVar14 - iVar69;
  lVar15 = plVar51[0x18];
  uVar39 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
  uVar10 = *(uint *)((long)plVar51 + 0x1c);
  uVar11 = iVar69 - uVar39;
  if (iVar69 - uVar10 <= uVar39) {
    uVar11 = uVar10;
  }
  bVar16 = local_a4 == 0;
  uVar62 = (ulong)bVar16;
  puVar54 = (uint *)(lVar53 + (ulong)((uVar28 & (uVar47 ^ 0xffffffff)) << 1) * 4);
  local_110 = puVar54 + 1;
  iVar69 = uVar28 + 9;
  uVar24 = 3;
  if (bVar16) {
    uVar24 = 4;
  }
  puVar56 = (ulong *)((long)local_e0 + 3);
  uVar21 = uVar32;
  do {
    if (uVar62 == 3) {
      uVar47 = *param_3 - 1;
      uVar38 = *param_3 - 2;
      if (uVar38 < uVar28 - uVar4) goto LAB_1006f6890;
LAB_1006f67e0:
      if ((uVar38 < (uVar28 - uVar10) - uVar14 && (uVar28 - uVar47) - uVar4 < 0xfffffffd) &&
         (puVar55 = (uint *)((lVar9 - (ulong)uVar14) + (ulong)(uVar28 - uVar47)),
         ((*puVar55 ^ (uint)*local_e0) & 0xffffff) == 0)) {
        puVar66 = puVar56;
        FUN_1006c7460(puVar56,(long)puVar55 + 3,puVar3,lVar7,lVar60 + (ulong)uVar4);
        uVar47 = (int)puVar66 + 3;
        uVar40 = (ulong)uVar47;
        if (uVar40 <= uVar21) goto LAB_1006f67b4;
        goto LAB_1006f68bc;
      }
    }
    else {
      uVar47 = param_3[uVar62];
      uVar38 = uVar47 - 1;
      if (uVar28 - uVar4 <= uVar38) goto LAB_1006f67e0;
LAB_1006f6890:
      if (((*(uint *)((long)local_e0 - (ulong)uVar47) ^ (uint)*local_e0) & 0xffffff) == 0) {
        lVar36 = -(ulong)uVar47;
        puVar66 = (ulong *)((long)puVar56 + lVar36);
        puVar20 = puVar56;
        if (puVar56 < puVar33) {
          if (*puVar66 == *puVar56) {
            iVar71 = 0;
            puVar66 = (ulong *)((long)local_e0 + 0xb + lVar36);
            puVar20 = (ulong *)((long)local_e0 + 0xb);
            do {
              if (puVar33 <= puVar20) goto LAB_1006f6968;
              uVar65 = *puVar66;
              uVar40 = *puVar20;
              iVar71 = iVar71 + 8;
              puVar66 = puVar66 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar65 == uVar40);
            uVar40 = uVar40 ^ uVar65;
            uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
            uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
            uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
            uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
            iVar71 = iVar71 + (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
          }
          else {
            uVar40 = *puVar56 ^ *puVar66;
            uVar40 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
            uVar40 = (uVar40 & 0xcccccccccccccccc) >> 2 | (uVar40 & 0x3333333333333333) << 2;
            uVar40 = (uVar40 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar40 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar40 = (uVar40 & 0xff00ff00ff00ff00) >> 8 | (uVar40 & 0xff00ff00ff00ff) << 8;
            uVar40 = (uVar40 & 0xffff0000ffff0000) >> 0x10 | (uVar40 & 0xffff0000ffff) << 0x10;
            iVar71 = (int)((ulong)LZCOUNT(uVar40 >> 0x20 | uVar40 << 0x20) >> 3);
          }
        }
        else {
LAB_1006f6968:
          if (puVar20 < puVar42) {
            if ((uint)*puVar66 == (uint)*puVar20) {
              puVar66 = (ulong *)((long)puVar66 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
          }
          if (puVar20 < puVar34) {
            if (*(short *)puVar66 == *(short *)puVar20) {
              puVar20 = (ulong *)((long)puVar20 + 2);
              puVar66 = (ulong *)((long)puVar66 + 2);
            }
          }
          if ((puVar20 < puVar3) && ((char)*puVar66 == (char)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          iVar71 = (int)puVar20 - (int)puVar56;
        }
        uVar47 = iVar71 + 3;
        uVar40 = (ulong)uVar47;
        if (uVar21 < uVar40) {
LAB_1006f68bc:
          piVar6[uVar61 * 2] = (int)uVar62 - (uint)bVar16;
          (piVar6 + uVar61 * 2)[1] = uVar47;
          uVar61 = (ulong)((int)uVar61 + 1);
          if ((uVar67 < uVar47) || (uVar21 = uVar40, (ulong *)((long)local_e0 + uVar40) == puVar3))
          goto LAB_1006f88c0;
        }
      }
    }
LAB_1006f67b4:
    uVar62 = uVar62 + 1;
  } while (uVar62 < uVar24);
  if (2 < uVar21) {
LAB_1006f7e38:
    local_fc = (uint)uVar61;
    *(uint *)(lVar43 + (ulong)uVar48 * 4) = uVar28;
    uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
    if (uVar13 <= uVar22) {
      uVar24 = 0;
      uVar62 = 0;
      iVar71 = iVar69;
      do {
        uVar40 = uVar24;
        if (uVar62 <= uVar24) {
          uVar40 = uVar62;
        }
        lVar43 = lVar60 + (ulong)uVar22;
        puVar56 = (ulong *)(lVar43 + uVar40);
        puVar66 = (ulong *)((long)local_e0 + uVar40);
        puVar20 = puVar66;
        if (puVar66 < puVar33) {
          if (*puVar56 == *puVar66) {
            lVar36 = 0;
            puVar56 = (ulong *)(lVar60 + 8 + uVar40 + uVar22);
            puVar20 = (ulong *)((long)local_e0 + uVar40 + 8);
            do {
              if (puVar33 <= puVar20) goto joined_r0x0001006f854c;
              uVar65 = *puVar56;
              uVar63 = *puVar20;
              lVar36 = lVar36 + 8;
              puVar56 = puVar56 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar65 == uVar63);
            uVar63 = uVar63 ^ uVar65;
            uVar65 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = lVar36 + ((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
          }
          else {
            uVar65 = *puVar66 ^ *puVar56;
            uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
            uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2;
            uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
            uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 | (uVar65 & 0xffff0000ffff) << 0x10;
            uVar65 = (ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3;
          }
          uVar65 = uVar65 + uVar40;
        }
        else {
joined_r0x0001006f854c:
          if (puVar20 < puVar42) {
            if ((uint)*puVar56 == (uint)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 4);
              puVar20 = (ulong *)((long)puVar20 + 4);
            }
          }
          if (puVar20 < puVar34) {
            if ((short)*puVar56 == (short)*puVar20) {
              puVar56 = (ulong *)((long)puVar56 + 2);
              puVar20 = (ulong *)((long)puVar20 + 2);
            }
          }
          if ((puVar20 < puVar3) && ((char)*puVar56 == (char)*puVar20)) {
            puVar20 = (ulong *)((long)puVar20 + 1);
          }
          uVar65 = (long)puVar20 + (uVar40 - (long)puVar66);
        }
        iVar69 = iVar71;
        if (uVar21 < uVar65) {
          iVar69 = uVar22 + (int)uVar65;
          if (uVar65 <= iVar71 - uVar22) {
            iVar69 = iVar71;
          }
          piVar6[uVar61 * 2] = (uVar28 + 2) - uVar22;
          (piVar6 + uVar61 * 2)[1] = (int)uVar65;
          local_fc = (int)uVar61 + 1;
          uVar61 = (ulong)local_fc;
          uVar21 = uVar65;
          if (0x1000 < uVar65 || (ulong *)((long)local_e0 + uVar65) == puVar3) {
            *local_110 = 0;
            *puVar54 = 0;
            goto LAB_1006fb73c;
          }
        }
        local_fc = (uint)uVar61;
        puVar55 = (uint *)(lVar53 + (ulong)((uVar22 & uVar27) << 1) * 4);
        if (*(byte *)(lVar43 + uVar65) < *(byte *)((long)local_e0 + uVar65)) {
          *puVar54 = uVar22;
          if (uVar22 <= uVar44) {
            puVar54 = &local_94;
            break;
          }
          puVar55 = puVar55 + 1;
          uVar24 = uVar65;
          puVar54 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            break;
          }
        }
        else {
          *local_110 = uVar22;
          if (uVar22 <= uVar44) {
            local_110 = &local_94;
            break;
          }
          uVar62 = uVar65;
          local_110 = puVar55;
          if (uVar67 == 0) {
            uVar67 = 0xffffffff;
            break;
          }
        }
        uVar67 = uVar67 - 1;
        uVar22 = *puVar55;
        iVar71 = iVar69;
      } while (uVar13 <= uVar22);
    }
    *local_110 = 0;
    *puVar54 = 0;
    if ((uVar67 != 0) &&
       (uVar44 = *(uint *)(plVar51[6] +
                          (ulong)((uint)*local_e0 * -0x61c8864f >> (ulong)(-(int)lVar15 & 0x1f)) * 4
                          ), uVar10 < uVar44)) {
      uVar61 = 0;
      lVar43 = plVar51[8];
      uVar62 = 0;
      iVar71 = iVar69;
      do {
        uVar67 = uVar67 - 1;
        uVar24 = uVar62;
        if (uVar61 <= uVar62) {
          uVar24 = uVar61;
        }
        uVar40 = (ulong)uVar44;
        lVar53 = (long)local_e0 + uVar24;
        FUN_1006c7460(lVar53,lVar9 + uVar40 + uVar24,puVar3,lVar7,lVar60 + (ulong)uVar4);
        uVar24 = lVar53 + uVar24;
        lVar53 = lVar9 + uVar40;
        if ((lVar7 - lVar9 & 0xffffffffU) <= uVar24 + uVar40) {
          lVar53 = lVar60 + (ulong)uVar14 + uVar40;
        }
        iVar69 = iVar71;
        if (uVar21 < uVar24) {
          iVar50 = uVar44 + uVar14;
          iVar69 = iVar50 + (int)uVar24;
          if (uVar24 <= (uint)(iVar71 - iVar50)) {
            iVar69 = iVar71;
          }
          piVar6[(ulong)local_fc * 2] = (uVar28 + 2) - iVar50;
          (piVar6 + (ulong)local_fc * 2)[1] = (int)uVar24;
          local_fc = local_fc + 1;
          if ((0x1000 < uVar24) || (uVar21 = uVar24, (ulong *)((long)local_e0 + uVar24) == puVar3))
          break;
        }
        if (uVar44 <= uVar11) break;
        bVar16 = *(byte *)(lVar53 + uVar24) < *(byte *)((long)local_e0 + uVar24);
        uVar40 = uVar24;
        if (!bVar16) {
          uVar40 = uVar62;
          uVar61 = uVar24;
        }
        if ((uVar67 == 0) ||
           (uVar44 = *(uint *)(lVar43 + (ulong)((uVar44 & uVar39) << 1) * 4 + (ulong)bVar16 * 4),
           uVar62 = uVar40, iVar71 = iVar69, uVar44 <= uVar10)) break;
      } while( true );
    }
LAB_1006fb73c:
    uVar61 = (ulong)local_fc;
    *(int *)(param_1 + 0x24) = iVar69 + -8;
    goto joined_r0x0001006f88dc;
  }
  lVar36 = *(long *)(param_1 + 0x38);
  uVar62 = *local_e0;
  uVar47 = 0x20 - *(int *)(param_1 + 0x28);
  if (local_284 < uVar28) {
    uVar24 = (ulong)local_284;
    do {
      *(int *)(lVar36 + (ulong)((uint)(*(int *)(lVar60 + uVar24) * 0x35a7bd00) >>
                               (ulong)(uVar47 & 0x1f)) * 4) = (int)uVar24;
      uVar24 = uVar24 + 1;
    } while (((long)local_e0 - lVar60 & 0xffffffffU) != uVar24);
  }
  uVar47 = *(uint *)(lVar36 + (ulong)((uint)uVar62 * 0x35a7bd00 >> (ulong)(uVar47 & 0x1f)) * 4);
  local_284 = uVar28;
  if (uVar47 < uVar13 || uVar28 - uVar47 >> 0x12 != 0) goto LAB_1006f7e38;
  puVar56 = (ulong *)(lVar60 + (ulong)uVar47);
  puVar66 = local_e0;
  if (local_e0 < puVar33) {
    if (*puVar56 == *local_e0) {
      lVar36 = 0;
      puVar56 = (ulong *)(lVar60 + (ulong)uVar47);
      do {
        puVar56 = puVar56 + 1;
        puVar66 = puVar66 + 1;
        if (puVar33 <= puVar66) goto LAB_1006f8760;
        lVar36 = lVar36 + 8;
      } while (*puVar56 == *puVar66);
      uVar62 = *puVar66 ^ *puVar56;
      uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1;
      uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2;
      uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
      uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 | (uVar62 & 0xffff0000ffff) << 0x10;
      uVar62 = lVar36 + ((ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3);
    }
    else {
      uVar62 = *local_e0 ^ *puVar56;
      uVar62 = (uVar62 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar62 & 0x5555555555555555) << 1;
      uVar62 = (uVar62 & 0xcccccccccccccccc) >> 2 | (uVar62 & 0x3333333333333333) << 2;
      uVar62 = (uVar62 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar62 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar62 = (uVar62 & 0xff00ff00ff00ff00) >> 8 | (uVar62 & 0xff00ff00ff00ff) << 8;
      uVar62 = (uVar62 & 0xffff0000ffff0000) >> 0x10 | (uVar62 & 0xffff0000ffff) << 0x10;
      uVar62 = (ulong)LZCOUNT(uVar62 >> 0x20 | uVar62 << 0x20) >> 3;
    }
  }
  else {
LAB_1006f8760:
    if (puVar66 < puVar42) {
      if ((uint)*puVar56 == (uint)*puVar66) {
        puVar66 = (ulong *)((long)puVar66 + 4);
        puVar56 = (ulong *)((long)puVar56 + 4);
      }
    }
    if (puVar66 < puVar34) {
      if (*(short *)puVar56 == *(short *)puVar66) {
        puVar66 = (ulong *)((long)puVar66 + 2);
        puVar56 = (ulong *)((long)puVar56 + 2);
      }
    }
    if ((puVar66 < puVar3) && ((char)*puVar56 == (char)*puVar66)) {
      puVar66 = (ulong *)((long)puVar66 + 1);
    }
    uVar62 = (long)puVar66 - (long)local_e0;
  }
  if (uVar62 < 3) goto LAB_1006f7e38;
  *piVar6 = (uVar28 - uVar47) + 2;
  piVar6[1] = (int)uVar62;
  if (uVar62 <= uVar67 && (ulong *)((long)local_e0 + uVar62) != puVar3) {
    uVar61 = 1;
    uVar21 = uVar62;
    goto LAB_1006f7e38;
  }
  uVar61 = 1;
  *(uint *)(param_1 + 0x24) = uVar28 + 1;
  goto LAB_1006f88e0;
LAB_1006f8734:
  *puVar68 = 0;
  *puVar54 = 0;
LAB_1006f88b4:
  *(int *)(param_1 + 0x24) = iVar69 + -8;
  uVar61 = (ulong)local_fc;
LAB_1006f88c0:
  local_fc = (uint)uVar61;
joined_r0x0001006f88dc:
  if (local_fc == 0) {
LAB_1006f65b0:
    local_e0 = (ulong *)((long)local_e0 + 1);
  }
  else {
LAB_1006f88e0:
    piVar8[4] = *param_3;
    piVar8[5] = param_3[1];
    piVar8[6] = param_3[2];
    piVar8[2] = 0;
    piVar8[3] = local_a4;
    puVar56 = param_4;
    FUN_100705be0(param_4,local_a4,param_1 + 0x48,2);
    *piVar8 = (int)puVar56;
    uVar67 = (piVar6 + (ulong)((int)uVar61 - 1) * 2)[1];
    if (uVar5 < uVar67) {
      iVar71 = piVar6[(ulong)((int)uVar61 - 1) * 2];
      uVar44 = 0;
    }
    else {
      lVar60 = lVar31;
      piVar49 = piVar2;
      if (*(int *)(param_1 + 0x98) == 1) {
        iVar69 = 0x100;
      }
      else {
        iVar69 = **(int **)(param_1 + 0x50) + 1;
        uVar67 = (uint)LZCOUNT(iVar69) ^ 0x1f;
        iVar69 = *(int *)(param_1 + 0x8c) -
                 (((uint)(iVar69 * 0x100) >> (ulong)(uVar67 & 0x1f)) + uVar67 * 0x100);
      }
      do {
        *piVar49 = 0x40000000;
        lVar60 = lVar60 + -1;
        piVar49 = piVar49 + 7;
      } while (lVar60 != 0);
      uVar62 = 0;
      uVar24 = (ulong)uVar29;
      do {
        uVar67 = piVar6[uVar62 * 2];
        uVar44 = (piVar6 + uVar62 * 2)[1];
        if (uVar67 < 3) {
          uVar46 = uVar67 + (local_a4 == 0);
          if (uVar46 == 0) {
            iVar71 = *param_3;
            iVar50 = param_3[1];
            piVar49 = param_3 + 2;
          }
          else {
            if (uVar46 == 3) {
              iVar50 = *param_3;
              iVar71 = iVar50 + -1;
            }
            else {
              iVar71 = param_3[uVar46];
              iVar50 = *param_3;
            }
            lVar60 = 8;
            if (uVar46 != 1) {
              lVar60 = 4;
            }
            piVar49 = (int *)((long)param_3 + lVar60);
          }
        }
        else {
          iVar50 = *param_3;
          iVar71 = uVar67 - 2;
          piVar49 = param_3 + 1;
        }
        if ((uint)uVar24 <= uVar44) {
          iVar45 = *piVar49;
          uVar22 = (uint)LZCOUNT(uVar67 + 1) ^ 0x1f;
          uVar46 = (uint)uVar24 * 0x100 - 0x200;
          do {
            iVar41 = (int)uVar24;
            if (*(int *)(param_1 + 0x98) == 1) {
              uVar47 = (uint)LZCOUNT(iVar41 + -2) ^ 0x1f;
              iVar30 = (uVar46 >> (ulong)(uVar47 & 0x1f)) + (uVar47 + uVar22) * 0x100 + 0x1000;
            }
            else {
              uVar47 = iVar41 - 3;
              if (uVar47 < 0x80) {
                uVar47 = (uint)(byte)(&DAT_10084ff08)[uVar47];
              }
              else {
                uVar47 = 0x43 - (int)LZCOUNT(uVar47);
              }
              iVar30 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar22 * 4) + 1;
              uVar48 = (uint)LZCOUNT(iVar30) ^ 0x1f;
              iVar57 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar47 * 4) + 1;
              uVar27 = (uint)LZCOUNT(iVar57) ^ 0x1f;
              iVar30 = (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                        ((uint)(iVar30 * 0x100) >> (ulong)(uVar48 & 0x1f))) -
                       ((uint)(iVar57 * 0x100) >> (ulong)(uVar27 & 0x1f))) +
                       (((uVar22 + *(int *)(&DAT_10084fe34 + (ulong)uVar47 * 4)) - uVar48) - uVar27)
                       * 0x100 + 0x33;
            }
            piVar49 = piVar8 + uVar24 * 7;
            piVar49[2] = iVar41;
            piVar49[3] = local_a4;
            *piVar49 = iVar69 + (int)puVar56 + iVar30;
            piVar49[1] = uVar67;
            *(ulong *)(piVar49 + 4) = CONCAT44(iVar50,iVar71);
            piVar49[6] = iVar45;
            uVar24 = (ulong)(iVar41 + 1U);
            uVar46 = uVar46 + 0x100;
          } while (iVar41 + 1U <= uVar44);
        }
        uVar62 = uVar62 + 1;
      } while (uVar62 != uVar61);
      uVar67 = (int)uVar24 - 1;
      uVar61 = (ulong)uVar67;
      uVar62 = uVar61;
      if (uVar67 != 0) {
        uVar24 = 1;
        do {
          uVar62 = uVar24;
          iVar37 = iVar37 + 1;
          iVar69 = (int)uVar62;
          piVar49 = piVar8 + (ulong)(iVar69 - 1) * 7;
          if (piVar49[2] == 0) {
            uVar67 = piVar49[3] + 1;
          }
          else {
            uVar67 = 1;
          }
          puVar56 = (ulong *)((long)local_e0 + uVar62);
          iVar71 = *piVar49;
          if (*(int *)(param_1 + 0xa8) == 2) {
            iVar71 = iVar71 + 0x800;
            if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006f8c40;
            if (uVar67 < 0x40) goto LAB_1006f8cac;
LAB_1006f8c18:
            uVar44 = 0x32 - (int)LZCOUNT(uVar67);
            if (0x3f < uVar67 - 1) goto LAB_1006f8cbc;
LAB_1006f8c2c:
            uVar46 = (uint)(byte)(&DAT_10084fdf4)[uVar67 - 1];
LAB_1006f8cc4:
            iVar50 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar44 * 4) + 1;
            uVar22 = (uint)LZCOUNT(iVar50) ^ 0x1f;
            iVar45 = (*(int *)(param_1 + 0x8c) - ((uint)(iVar50 * 0x100) >> (ulong)(uVar22 & 0x1f)))
                     + (*(int *)(&DAT_10084fd64 + (ulong)uVar44 * 4) - uVar22) * 0x100;
            iVar50 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar46 * 4) + 1;
            uVar44 = (uint)LZCOUNT(iVar50) ^ 0x1f;
            iVar50 = (((uint)(iVar50 * 0x100) >> (ulong)(uVar44 & 0x1f)) - *(int *)(param_1 + 0x8c))
                     + (uVar44 - *(int *)(&DAT_10084fd64 + (ulong)uVar46 * 4)) * 0x100;
          }
          else {
            if (*(int *)(param_1 + 0x98) != 1) {
              iVar50 = *(int *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)((long)puVar56 - 1) * 4)
                       + 1;
              uVar44 = (uint)LZCOUNT(iVar50) ^ 0x1f;
              iVar71 = (*(int *)(param_1 + 0x88) -
                       (((uint)(iVar50 * 0x100) >> (ulong)(uVar44 & 0x1f)) + uVar44 * 0x100)) +
                       iVar71;
              if (0x3f < uVar67) goto LAB_1006f8c18;
LAB_1006f8cac:
              uVar44 = (uint)(byte)(&DAT_10084fdf4)[uVar67];
              if (uVar67 - 1 < 0x40) goto LAB_1006f8c2c;
LAB_1006f8cbc:
              uVar46 = 0x32 - (int)LZCOUNT(uVar67 - 1);
              goto LAB_1006f8cc4;
            }
            iVar71 = iVar71 + 0x600;
LAB_1006f8c40:
            uVar44 = (uint)LZCOUNT(uVar67 + 1) ^ 0x1f;
            iVar45 = ((uVar67 + 1) * 0x100 >> (ulong)(uVar44 & 0x1f)) + uVar44 * 0x100;
            uVar44 = (uint)LZCOUNT(uVar67) ^ 0x1f;
            iVar50 = -(((uVar67 << 8) >> (ulong)(uVar44 & 0x1f)) + uVar44 * 0x100);
          }
          iVar71 = iVar71 + iVar45 + iVar50;
          piVar18 = piVar8 + uVar62 * 7;
          if (iVar71 <= *piVar18) {
            piVar18[2] = 0;
            piVar18[3] = uVar67;
            *piVar18 = iVar71;
            piVar18[1] = 0;
            *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar49 + 4);
            piVar18[6] = piVar49[6];
          }
          if (puVar56 <= puVar64) {
            if (iVar69 == (int)uVar61) break;
            iVar71 = piVar18[2];
            if (iVar71 == 0) {
              local_a4 = piVar18[3];
              if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006f8d90;
LAB_1006f8dc0:
              iVar50 = **(int **)(param_1 + 0x50) + 1;
              uVar67 = (uint)LZCOUNT(iVar50) ^ 0x1f;
              iVar50 = *(int *)(param_1 + 0x8c) -
                       (((uint)(iVar50 * 0x100) >> (ulong)(uVar67 & 0x1f)) + uVar67 * 0x100);
              lVar60 = *(long *)(param_1 + 8);
              uVar24 = (ulong)*(uint *)(param_1 + 0x24);
              puVar66 = (ulong *)(lVar60 + uVar24);
            }
            else {
              local_a4 = 0;
              if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006f8dc0;
LAB_1006f8d90:
              iVar50 = 0x100;
              lVar60 = *(long *)(param_1 + 8);
              uVar24 = (ulong)*(uint *)(param_1 + 0x24);
              puVar66 = (ulong *)(lVar60 + uVar24);
            }
            if (puVar66 <= puVar56) {
              iVar45 = *piVar18;
              iVar41 = *(int *)(param_1 + 200);
              iVar30 = (int)puVar56;
              uVar44 = iVar30 - (int)lVar60;
              uVar67 = (uint)uVar24;
              while (uVar67 < uVar44) {
                lVar43 = param_1;
                FUN_100705148(param_1,lVar60 + uVar24,puVar3,iVar41,0);
                uVar67 = (int)lVar43 + (int)uVar24;
                uVar24 = (ulong)uVar67;
              }
              puVar66 = (ulong *)((long)local_e0 + uVar62 + 0xc);
              piVar49 = piVar18 + 4;
              *(uint *)(param_1 + 0x24) = uVar44;
              if (iVar41 - 6U < 2) {
                uVar24 = 0;
                uVar67 = *(uint *)(param_1 + 0xcc);
                if (0xffe < uVar67) {
                  uVar67 = 0xfff;
                }
                lVar43 = *(long *)(param_1 + 8);
                lVar53 = *(long *)(param_1 + 0x30);
                puVar20 = (ulong *)((long)puVar56 + 4);
                uVar46 = *(uint *)(param_1 + 0xc4);
                uVar21 = *puVar56 * -0x30e4432340650000 >>
                         ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
                uVar22 = *(uint *)(lVar53 + uVar21 * 4);
                lVar60 = *(long *)(param_1 + 0x40);
                uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                uVar48 = ~uVar47;
                uVar27 = iVar30 - (int)lVar43;
                uVar44 = 0;
                if (uVar48 <= uVar27) {
                  uVar44 = uVar27 - uVar48;
                }
                uVar14 = *(uint *)(param_1 + 0x18);
                uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                uVar28 = uVar27 - uVar4;
                if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar4 || *(int *)(param_1 + 0x20) != 0) {
                  uVar28 = *(uint *)(param_1 + 0x1c);
                }
                uVar4 = uVar28;
                if (uVar28 < 2) {
                  uVar4 = 1;
                }
                plVar51 = *(long **)(param_1 + 0xb0);
                lVar7 = *plVar51;
                lVar9 = plVar51[1];
                iVar41 = (int)(lVar7 - lVar9);
                uVar28 = uVar28 - iVar41;
                lVar15 = plVar51[0x18];
                uVar10 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
                uVar11 = *(uint *)((long)plVar51 + 0x1c);
                uVar13 = iVar41 - uVar10;
                if (iVar41 - uVar11 <= uVar10) {
                  uVar13 = uVar11;
                }
                bVar16 = iVar71 != 0;
                uVar40 = (ulong)bVar16;
                local_158 = (uint *)(lVar60 + (ulong)((uVar27 & (uVar47 ^ 0xffffffff)) << 1) * 4);
                local_160 = local_158 + 1;
                iVar41 = uVar27 + 9;
                uVar65 = 3;
                if (bVar16) {
                  uVar65 = 4;
                }
                uVar63 = uVar32;
                do {
                  if (uVar40 == 3) {
                    uVar47 = *piVar49 - 1;
                    uVar39 = *piVar49 - 2;
                    if (uVar39 < uVar27 - uVar14) goto LAB_1006f94cc;
LAB_1006f941c:
                    if ((uVar39 < (uVar27 - uVar11) - uVar28 &&
                         (uVar27 - uVar47) - uVar14 < 0xfffffffd) &&
                       (puVar54 = (uint *)((lVar9 - (ulong)uVar28) + (ulong)(uVar27 - uVar47)),
                       (uint)*puVar56 == *puVar54)) {
                      puVar17 = puVar20;
                      FUN_1006c7460(puVar20,puVar54 + 1,puVar3,lVar7,lVar43 + (ulong)uVar14);
                      uVar47 = (int)puVar17 + 4;
                      uVar58 = (ulong)uVar47;
                      if (uVar47 <= uVar63) goto LAB_1006f93f4;
                      goto LAB_1006f9630;
                    }
                  }
                  else {
                    uVar47 = piVar49[uVar40];
                    uVar39 = uVar47 - 1;
                    if (uVar27 - uVar14 <= uVar39) goto LAB_1006f941c;
LAB_1006f94cc:
                    if ((uint)*puVar56 == *(uint *)((long)puVar56 - (ulong)uVar47)) {
                      lVar36 = -(ulong)uVar47;
                      puVar17 = (ulong *)((long)puVar20 + lVar36);
                      puVar19 = puVar20;
                      if (puVar20 < puVar33) {
                        if (*puVar17 == *puVar20) {
                          iVar30 = 0;
                          puVar17 = (ulong *)((long)local_e0 + lVar36 + uVar62 + 0xc);
                          puVar19 = puVar66;
                          do {
                            if (puVar33 <= puVar19) goto LAB_1006f9574;
                            uVar23 = *puVar17;
                            uVar58 = *puVar19;
                            iVar30 = iVar30 + 8;
                            puVar17 = puVar17 + 1;
                            puVar19 = puVar19 + 1;
                          } while (uVar23 == uVar58);
                          uVar58 = uVar58 ^ uVar23;
                          uVar58 = (uVar58 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar58 & 0x5555555555555555) << 1;
                          uVar58 = (uVar58 & 0xcccccccccccccccc) >> 2 |
                                   (uVar58 & 0x3333333333333333) << 2;
                          uVar58 = (uVar58 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar58 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar58 = (uVar58 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar58 & 0xff00ff00ff00ff) << 8;
                          uVar58 = (uVar58 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar58 & 0xffff0000ffff) << 0x10;
                          iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar58 >> 0x20 | uVar58 << 0x20) >>
                                                 3);
                        }
                        else {
                          uVar58 = *puVar20 ^ *puVar17;
                          uVar58 = (uVar58 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar58 & 0x5555555555555555) << 1;
                          uVar58 = (uVar58 & 0xcccccccccccccccc) >> 2 |
                                   (uVar58 & 0x3333333333333333) << 2;
                          uVar58 = (uVar58 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar58 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar58 = (uVar58 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar58 & 0xff00ff00ff00ff) << 8;
                          uVar58 = (uVar58 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar58 & 0xffff0000ffff) << 0x10;
                          iVar30 = (int)((ulong)LZCOUNT(uVar58 >> 0x20 | uVar58 << 0x20) >> 3);
                        }
                      }
                      else {
LAB_1006f9574:
                        if (puVar19 < puVar42) {
                          if ((uint)*puVar17 == (uint)*puVar19) {
                            puVar17 = (ulong *)((long)puVar17 + 4);
                            puVar19 = (ulong *)((long)puVar19 + 4);
                          }
                        }
                        if (puVar19 < puVar34) {
                          if (*(short *)puVar17 == *(short *)puVar19) {
                            puVar19 = (ulong *)((long)puVar19 + 2);
                            puVar17 = (ulong *)((long)puVar17 + 2);
                          }
                        }
                        if ((puVar19 < puVar3) && ((char)*puVar17 == (char)*puVar19)) {
                          puVar19 = (ulong *)((long)puVar19 + 1);
                        }
                        iVar30 = (int)puVar19 - (int)puVar20;
                      }
                      uVar47 = iVar30 + 4;
                      uVar58 = (ulong)uVar47;
                      if (uVar63 < uVar47) {
LAB_1006f9630:
                        uVar63 = uVar58;
                        piVar6[uVar24 * 2] = (int)uVar40 - (uint)bVar16;
                        (piVar6 + uVar24 * 2)[1] = uVar47;
                        uVar39 = (int)uVar24 + 1;
                        uVar24 = (ulong)uVar39;
                        if ((uVar67 < uVar47) || ((ulong *)((long)puVar56 + uVar63) == puVar3))
                        goto joined_r0x0001006fb5f8;
                      }
                    }
                  }
LAB_1006f93f4:
                  uVar39 = (uint)uVar24;
                  uVar40 = uVar40 + 1;
                } while (uVar40 < uVar65);
                *(uint *)(lVar53 + uVar21 * 4) = uVar27;
                uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
                if (uVar4 <= uVar22) {
                  uVar40 = 0;
                  uVar21 = 0;
                  iVar30 = iVar41;
                  do {
                    uVar58 = (ulong)uVar22;
                    uVar65 = uVar40;
                    if (uVar21 <= uVar40) {
                      uVar65 = uVar21;
                    }
                    puVar20 = (ulong *)(lVar43 + uVar58 + uVar65);
                    puVar66 = (ulong *)((long)puVar56 + uVar65);
                    puVar17 = puVar66;
                    if (puVar66 < puVar33) {
                      if (*puVar20 == *puVar66) {
                        lVar53 = 0;
                        do {
                          puVar20 = (ulong *)((long)local_e0 + lVar53 + uVar65 + uVar62 + 8);
                          if (puVar33 <= puVar20) {
                            puVar20 = (ulong *)(lVar43 + 8 + uVar65 + uVar58 + lVar53);
                            puVar17 = (ulong *)((long)local_e0 + lVar53 + uVar65 + uVar62 + 8);
                            goto joined_r0x0001006fa394;
                          }
                          uVar23 = *(ulong *)(lVar43 + 8 + uVar65 + uVar58 + lVar53);
                          uVar25 = *puVar20;
                          lVar53 = lVar53 + 8;
                        } while (uVar23 == uVar25);
                        uVar25 = uVar25 ^ uVar23;
                        uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar25 & 0x5555555555555555) << 1;
                        uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                 (uVar23 & 0x3333333333333333) << 2;
                        uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar23 & 0xff00ff00ff00ff) << 8;
                        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar23 & 0xffff0000ffff) << 0x10;
                        uVar23 = lVar53 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                      }
                      else {
                        uVar23 = *puVar66 ^ *puVar20;
                        uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar23 & 0x5555555555555555) << 1;
                        uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                 (uVar23 & 0x3333333333333333) << 2;
                        uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar23 & 0xff00ff00ff00ff) << 8;
                        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar23 & 0xffff0000ffff) << 0x10;
                        uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                      }
                      uVar23 = uVar23 + uVar65;
                    }
                    else {
joined_r0x0001006fa394:
                      if (puVar17 < puVar42) {
                        if ((uint)*puVar20 == (uint)*puVar17) {
                          puVar20 = (ulong *)((long)puVar20 + 4);
                          puVar17 = (ulong *)((long)puVar17 + 4);
                        }
                      }
                      if (puVar17 < puVar34) {
                        if ((short)*puVar20 == (short)*puVar17) {
                          puVar20 = (ulong *)((long)puVar20 + 2);
                          puVar17 = (ulong *)((long)puVar17 + 2);
                        }
                      }
                      if ((puVar17 < puVar3) && ((char)*puVar20 == (char)*puVar17)) {
                        puVar17 = (ulong *)((long)puVar17 + 1);
                      }
                      uVar23 = (long)puVar17 + (uVar65 - (long)puVar66);
                    }
                    iVar41 = iVar30;
                    if (uVar63 < uVar23) {
                      iVar41 = uVar22 + (int)uVar23;
                      if (uVar23 <= iVar30 - uVar22) {
                        iVar41 = iVar30;
                      }
                      piVar6[uVar24 * 2] = (uVar27 + 2) - uVar22;
                      (piVar6 + uVar24 * 2)[1] = (int)uVar23;
                      uVar39 = (int)uVar24 + 1;
                      uVar24 = (ulong)uVar39;
                      uVar63 = uVar23;
                      if (0x1000 < uVar23 || (ulong *)((long)puVar56 + uVar23) == puVar3) {
                        *local_160 = 0;
                        *local_158 = 0;
                        goto LAB_1006fb2f0;
                      }
                    }
                    uVar39 = (uint)uVar24;
                    puVar54 = (uint *)(lVar60 + (ulong)((uVar22 & uVar48) << 1) * 4);
                    if (*(byte *)(lVar43 + uVar58 + uVar23) < *(byte *)((long)puVar56 + uVar23)) {
                      *local_158 = uVar22;
                      if (uVar22 <= uVar44) {
                        local_158 = &local_94;
                        break;
                      }
                      puVar54 = puVar54 + 1;
                      uVar40 = uVar23;
                      local_158 = puVar54;
                      if (uVar67 == 0) {
                        uVar67 = 0xffffffff;
                        break;
                      }
                    }
                    else {
                      *local_160 = uVar22;
                      if (uVar22 <= uVar44) {
                        local_160 = &local_94;
                        break;
                      }
                      uVar21 = uVar23;
                      local_160 = puVar54;
                      if (uVar67 == 0) {
                        uVar67 = 0xffffffff;
                        break;
                      }
                    }
                    uVar67 = uVar67 - 1;
                    uVar22 = *puVar54;
                    iVar30 = iVar41;
                  } while (uVar4 <= uVar22);
                }
                *local_160 = 0;
                *local_158 = 0;
                if ((uVar67 != 0) &&
                   (uVar44 = *(uint *)(plVar51[6] +
                                      (*puVar56 * -0x30e4432340650000 >>
                                      ((ulong)(uint)-(int)lVar15 & 0x3f)) * 4), uVar11 < uVar44)) {
                  uVar24 = 0;
                  lVar60 = plVar51[8];
                  uVar21 = 0;
                  iVar30 = iVar41;
                  do {
                    uVar67 = uVar67 - 1;
                    uVar40 = uVar21;
                    if (uVar24 <= uVar21) {
                      uVar40 = uVar24;
                    }
                    uVar65 = (ulong)uVar44;
                    lVar53 = (long)puVar56 + uVar40;
                    FUN_1006c7460(lVar53,lVar9 + uVar65 + uVar40,puVar3,lVar7,lVar43 + (ulong)uVar14
                                 );
                    uVar40 = lVar53 + uVar40;
                    lVar53 = lVar9 + uVar65;
                    if ((lVar7 - lVar9 & 0xffffffffU) <= uVar40 + uVar65) {
                      lVar53 = lVar43 + (ulong)uVar28 + uVar65;
                    }
                    iVar41 = iVar30;
                    if (uVar63 < uVar40) {
                      iVar57 = uVar44 + uVar28;
                      iVar41 = iVar57 + (int)uVar40;
                      if (uVar40 <= (uint)(iVar30 - iVar57)) {
                        iVar41 = iVar30;
                      }
                      piVar6[(ulong)uVar39 * 2] = (uVar27 + 2) - iVar57;
                      (piVar6 + (ulong)uVar39 * 2)[1] = (int)uVar40;
                      uVar39 = uVar39 + 1;
                      if ((0x1000 < uVar40) ||
                         (uVar63 = uVar40, (ulong *)((long)puVar56 + uVar40) == puVar3)) break;
                    }
                    if (uVar44 <= uVar13) break;
                    bVar16 = *(byte *)(lVar53 + uVar40) < *(byte *)((long)puVar56 + uVar40);
                    uVar65 = uVar40;
                    if (!bVar16) {
                      uVar65 = uVar21;
                      uVar24 = uVar40;
                    }
                    if ((uVar67 == 0) ||
                       (uVar44 = *(uint *)(lVar60 + (ulong)((uVar44 & uVar10) << 1) * 4 +
                                          (ulong)bVar16 * 4), uVar21 = uVar65, iVar30 = iVar41,
                       uVar44 <= uVar11)) break;
                  } while( true );
                }
LAB_1006fb2f0:
                iVar41 = iVar41 + -8;
LAB_1006fb2f4:
                *(int *)(param_1 + 0x24) = iVar41;
joined_r0x0001006fb5f8:
                if (uVar39 == 0) goto LAB_1006f8ba8;
              }
              else {
                if (iVar41 == 5) {
                  uVar24 = 0;
                  uVar67 = *(uint *)(param_1 + 0xcc);
                  if (0xffe < uVar67) {
                    uVar67 = 0xfff;
                  }
                  lVar43 = *(long *)(param_1 + 8);
                  lVar53 = *(long *)(param_1 + 0x30);
                  puVar20 = (ulong *)((long)puVar56 + 4);
                  uVar46 = *(uint *)(param_1 + 0xc4);
                  uVar21 = *puVar56 * -0x30e4432345000000 >>
                           ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
                  uVar22 = *(uint *)(lVar53 + uVar21 * 4);
                  lVar60 = *(long *)(param_1 + 0x40);
                  uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                  uVar48 = ~uVar47;
                  uVar27 = iVar30 - (int)lVar43;
                  uVar44 = 0;
                  if (uVar48 <= uVar27) {
                    uVar44 = uVar27 - uVar48;
                  }
                  uVar14 = *(uint *)(param_1 + 0x18);
                  uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                  uVar28 = uVar27 - uVar4;
                  if (uVar27 - *(uint *)(param_1 + 0x1c) <= uVar4 || *(int *)(param_1 + 0x20) != 0)
                  {
                    uVar28 = *(uint *)(param_1 + 0x1c);
                  }
                  uVar4 = uVar28;
                  if (uVar28 < 2) {
                    uVar4 = 1;
                  }
                  plVar51 = *(long **)(param_1 + 0xb0);
                  lVar7 = *plVar51;
                  lVar9 = plVar51[1];
                  iVar41 = (int)(lVar7 - lVar9);
                  uVar28 = uVar28 - iVar41;
                  lVar15 = plVar51[0x18];
                  uVar10 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
                  uVar11 = *(uint *)((long)plVar51 + 0x1c);
                  uVar13 = iVar41 - uVar10;
                  if (iVar41 - uVar11 <= uVar10) {
                    uVar13 = uVar11;
                  }
                  bVar16 = iVar71 != 0;
                  uVar40 = (ulong)bVar16;
                  puVar54 = (uint *)(lVar60 + (ulong)((uVar27 & (uVar47 ^ 0xffffffff)) << 1) * 4);
                  local_158 = puVar54 + 1;
                  iVar41 = uVar27 + 9;
                  uVar65 = 3;
                  if (bVar16) {
                    uVar65 = 4;
                  }
                  uVar63 = uVar32;
                  do {
                    if (uVar40 == 3) {
                      uVar47 = *piVar49 - 1;
                      uVar39 = *piVar49 - 2;
                      if (uVar39 < uVar27 - uVar14) goto LAB_1006f9aa8;
LAB_1006f9a08:
                      if ((uVar39 < (uVar27 - uVar11) - uVar28 &&
                           (uVar27 - uVar47) - uVar14 < 0xfffffffd) &&
                         (puVar55 = (uint *)((lVar9 - (ulong)uVar28) + (ulong)(uVar27 - uVar47)),
                         (uint)*puVar56 == *puVar55)) {
                        puVar17 = puVar20;
                        FUN_1006c7460(puVar20,puVar55 + 1,puVar3,lVar7,lVar43 + (ulong)uVar14);
                        uVar47 = (int)puVar17 + 4;
                        uVar58 = (ulong)uVar47;
                        if (uVar47 <= uVar63) goto LAB_1006f99e0;
                        goto LAB_1006f9c0c;
                      }
                    }
                    else {
                      uVar47 = piVar49[uVar40];
                      uVar39 = uVar47 - 1;
                      if (uVar27 - uVar14 <= uVar39) goto LAB_1006f9a08;
LAB_1006f9aa8:
                      if ((uint)*puVar56 == *(uint *)((long)puVar56 - (ulong)uVar47)) {
                        lVar36 = -(ulong)uVar47;
                        puVar17 = (ulong *)((long)puVar20 + lVar36);
                        puVar19 = puVar20;
                        if (puVar20 < puVar33) {
                          if (*puVar17 == *puVar20) {
                            iVar30 = 0;
                            puVar17 = (ulong *)((long)local_e0 + lVar36 + uVar62 + 0xc);
                            puVar19 = puVar66;
                            do {
                              if (puVar33 <= puVar19) goto LAB_1006f9b50;
                              uVar23 = *puVar17;
                              uVar58 = *puVar19;
                              iVar30 = iVar30 + 8;
                              puVar17 = puVar17 + 1;
                              puVar19 = puVar19 + 1;
                            } while (uVar23 == uVar58);
                            uVar58 = uVar58 ^ uVar23;
                            uVar58 = (uVar58 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar58 & 0x5555555555555555) << 1;
                            uVar58 = (uVar58 & 0xcccccccccccccccc) >> 2 |
                                     (uVar58 & 0x3333333333333333) << 2;
                            uVar58 = (uVar58 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar58 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar58 = (uVar58 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar58 & 0xff00ff00ff00ff) << 8;
                            uVar58 = (uVar58 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar58 & 0xffff0000ffff) << 0x10;
                            iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar58 >> 0x20 | uVar58 << 0x20)
                                                   >> 3);
                          }
                          else {
                            uVar58 = *puVar20 ^ *puVar17;
                            uVar58 = (uVar58 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar58 & 0x5555555555555555) << 1;
                            uVar58 = (uVar58 & 0xcccccccccccccccc) >> 2 |
                                     (uVar58 & 0x3333333333333333) << 2;
                            uVar58 = (uVar58 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar58 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar58 = (uVar58 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar58 & 0xff00ff00ff00ff) << 8;
                            uVar58 = (uVar58 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar58 & 0xffff0000ffff) << 0x10;
                            iVar30 = (int)((ulong)LZCOUNT(uVar58 >> 0x20 | uVar58 << 0x20) >> 3);
                          }
                        }
                        else {
LAB_1006f9b50:
                          if (puVar19 < puVar42) {
                            if ((uint)*puVar17 == (uint)*puVar19) {
                              puVar17 = (ulong *)((long)puVar17 + 4);
                              puVar19 = (ulong *)((long)puVar19 + 4);
                            }
                          }
                          if (puVar19 < puVar34) {
                            if (*(short *)puVar17 == *(short *)puVar19) {
                              puVar19 = (ulong *)((long)puVar19 + 2);
                              puVar17 = (ulong *)((long)puVar17 + 2);
                            }
                          }
                          if ((puVar19 < puVar3) && ((char)*puVar17 == (char)*puVar19)) {
                            puVar19 = (ulong *)((long)puVar19 + 1);
                          }
                          iVar30 = (int)puVar19 - (int)puVar20;
                        }
                        uVar47 = iVar30 + 4;
                        uVar58 = (ulong)uVar47;
                        if (uVar63 < uVar47) {
LAB_1006f9c0c:
                          uVar63 = uVar58;
                          piVar6[uVar24 * 2] = (int)uVar40 - (uint)bVar16;
                          (piVar6 + uVar24 * 2)[1] = uVar47;
                          uVar39 = (int)uVar24 + 1;
                          uVar24 = (ulong)uVar39;
                          if ((uVar67 < uVar47) || ((ulong *)((long)puVar56 + uVar63) == puVar3))
                          goto joined_r0x0001006fb5f8;
                        }
                      }
                    }
LAB_1006f99e0:
                    uVar39 = (uint)uVar24;
                    uVar40 = uVar40 + 1;
                  } while (uVar40 < uVar65);
                  *(uint *)(lVar53 + uVar21 * 4) = uVar27;
                  uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
                  if (uVar4 <= uVar22) {
                    uVar40 = 0;
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar65 = uVar40;
                      if (uVar21 <= uVar40) {
                        uVar65 = uVar21;
                      }
                      uVar58 = (ulong)uVar22;
                      puVar20 = (ulong *)(lVar43 + uVar58 + uVar65);
                      puVar66 = (ulong *)((long)puVar56 + uVar65);
                      puVar17 = puVar66;
                      if (puVar66 < puVar33) {
                        if (*puVar20 == *puVar66) {
                          lVar53 = 0;
                          do {
                            puVar20 = (ulong *)((long)local_e0 + lVar53 + uVar65 + uVar62 + 8);
                            if (puVar33 <= puVar20) {
                              puVar20 = (ulong *)(lVar43 + 8 + uVar65 + uVar58 + lVar53);
                              puVar17 = (ulong *)((long)local_e0 + lVar53 + uVar65 + uVar62 + 8);
                              goto joined_r0x0001006faa48;
                            }
                            uVar23 = *(ulong *)(lVar43 + 8 + uVar65 + uVar58 + lVar53);
                            uVar25 = *puVar20;
                            lVar53 = lVar53 + 8;
                          } while (uVar23 == uVar25);
                          uVar25 = uVar25 ^ uVar23;
                          uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar25 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = lVar53 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                        }
                        else {
                          uVar23 = *puVar66 ^ *puVar20;
                          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar23 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                        }
                        uVar23 = uVar23 + uVar65;
                      }
                      else {
joined_r0x0001006faa48:
                        if (puVar17 < puVar42) {
                          if ((uint)*puVar20 == (uint)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 4);
                            puVar17 = (ulong *)((long)puVar17 + 4);
                          }
                        }
                        if (puVar17 < puVar34) {
                          if ((short)*puVar20 == (short)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 2);
                            puVar17 = (ulong *)((long)puVar17 + 2);
                          }
                        }
                        if ((puVar17 < puVar3) && ((char)*puVar20 == (char)*puVar17)) {
                          puVar17 = (ulong *)((long)puVar17 + 1);
                        }
                        uVar23 = (long)puVar17 + (uVar65 - (long)puVar66);
                      }
                      iVar41 = iVar30;
                      if (uVar63 < uVar23) {
                        iVar41 = uVar22 + (int)uVar23;
                        if (uVar23 <= iVar30 - uVar22) {
                          iVar41 = iVar30;
                        }
                        piVar6[uVar24 * 2] = (uVar27 + 2) - uVar22;
                        (piVar6 + uVar24 * 2)[1] = (int)uVar23;
                        uVar39 = (int)uVar24 + 1;
                        uVar24 = (ulong)uVar39;
                        uVar63 = uVar23;
                        if (0x1000 < uVar23 || (ulong *)((long)puVar56 + uVar23) == puVar3) {
                          *local_158 = 0;
                          *puVar54 = 0;
                          goto LAB_1006fb2f0;
                        }
                      }
                      uVar39 = (uint)uVar24;
                      puVar55 = (uint *)(lVar60 + (ulong)((uVar22 & uVar48) << 1) * 4);
                      if (*(byte *)(lVar43 + uVar58 + uVar23) < *(byte *)((long)puVar56 + uVar23)) {
                        *puVar54 = uVar22;
                        if (uVar22 <= uVar44) {
                          puVar54 = &local_94;
                          break;
                        }
                        puVar55 = puVar55 + 1;
                        uVar40 = uVar23;
                        puVar54 = puVar55;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      else {
                        *local_158 = uVar22;
                        if (uVar22 <= uVar44) {
                          local_158 = &local_94;
                          break;
                        }
                        uVar21 = uVar23;
                        local_158 = puVar55;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      uVar67 = uVar67 - 1;
                      uVar22 = *puVar55;
                      iVar30 = iVar41;
                    } while (uVar4 <= uVar22);
                  }
                  *local_158 = 0;
                  *puVar54 = 0;
                  if ((uVar67 != 0) &&
                     (uVar44 = *(uint *)(plVar51[6] +
                                        (*puVar56 * -0x30e4432345000000 >>
                                        ((ulong)(uint)-(int)lVar15 & 0x3f)) * 4), uVar11 < uVar44))
                  {
                    uVar24 = 0;
                    lVar60 = plVar51[8];
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar67 = uVar67 - 1;
                      uVar40 = uVar21;
                      if (uVar24 <= uVar21) {
                        uVar40 = uVar24;
                      }
                      uVar65 = (ulong)uVar44;
                      lVar53 = (long)puVar56 + uVar40;
                      FUN_1006c7460(lVar53,lVar9 + uVar65 + uVar40,puVar3,lVar7,
                                    lVar43 + (ulong)uVar14);
                      uVar40 = lVar53 + uVar40;
                      lVar53 = lVar9 + uVar65;
                      if ((lVar7 - lVar9 & 0xffffffffU) <= uVar40 + uVar65) {
                        lVar53 = lVar43 + (ulong)uVar28 + uVar65;
                      }
                      iVar41 = iVar30;
                      if (uVar63 < uVar40) {
                        iVar57 = uVar44 + uVar28;
                        iVar41 = iVar57 + (int)uVar40;
                        if (uVar40 <= (uint)(iVar30 - iVar57)) {
                          iVar41 = iVar30;
                        }
                        piVar6[(ulong)uVar39 * 2] = (uVar27 + 2) - iVar57;
                        (piVar6 + (ulong)uVar39 * 2)[1] = (int)uVar40;
                        uVar39 = uVar39 + 1;
                        if ((0x1000 < uVar40) ||
                           (uVar63 = uVar40, (ulong *)((long)puVar56 + uVar40) == puVar3)) break;
                      }
                      if (uVar44 <= uVar13) break;
                      bVar16 = *(byte *)(lVar53 + uVar40) < *(byte *)((long)puVar56 + uVar40);
                      uVar65 = uVar40;
                      if (!bVar16) {
                        uVar65 = uVar21;
                        uVar24 = uVar40;
                      }
                      if ((uVar67 == 0) ||
                         (uVar44 = *(uint *)(lVar60 + (ulong)((uVar44 & uVar10) << 1) * 4 +
                                            (ulong)bVar16 * 4), uVar21 = uVar65, iVar30 = iVar41,
                         uVar44 <= uVar11)) break;
                    } while( true );
                  }
                  goto LAB_1006fb2f0;
                }
                if (iVar41 != 3) {
                  uVar24 = 0;
                  uVar67 = *(uint *)(param_1 + 0xcc);
                  if (0xffe < uVar67) {
                    uVar67 = 0xfff;
                  }
                  lVar43 = *(long *)(param_1 + 8);
                  lVar53 = *(long *)(param_1 + 0x30);
                  puVar20 = (ulong *)((long)puVar56 + 4);
                  uVar46 = *(uint *)(param_1 + 0xc4);
                  uVar48 = (uint)*puVar56 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f)
                  ;
                  uVar22 = *(uint *)(lVar53 + (ulong)uVar48 * 4);
                  lVar60 = *(long *)(param_1 + 0x40);
                  uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                  uVar27 = ~uVar47;
                  uVar28 = iVar30 - (int)lVar43;
                  uVar44 = 0;
                  if (uVar27 <= uVar28) {
                    uVar44 = uVar28 - uVar27;
                  }
                  uVar4 = *(uint *)(param_1 + 0x18);
                  uVar13 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                  uVar14 = uVar28 - uVar13;
                  if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar13 || *(int *)(param_1 + 0x20) != 0)
                  {
                    uVar14 = *(uint *)(param_1 + 0x1c);
                  }
                  uVar13 = uVar14;
                  if (uVar14 < 2) {
                    uVar13 = 1;
                  }
                  plVar51 = *(long **)(param_1 + 0xb0);
                  lVar7 = *plVar51;
                  lVar9 = plVar51[1];
                  iVar41 = (int)(lVar7 - lVar9);
                  uVar14 = uVar14 - iVar41;
                  lVar15 = plVar51[0x18];
                  uVar38 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
                  uVar10 = *(uint *)((long)plVar51 + 0x1c);
                  uVar11 = iVar41 - uVar38;
                  if (iVar41 - uVar10 <= uVar38) {
                    uVar11 = uVar10;
                  }
                  bVar16 = iVar71 != 0;
                  uVar21 = (ulong)bVar16;
                  local_160 = (uint *)(lVar60 + (ulong)((uVar28 & (uVar47 ^ 0xffffffff)) << 1) * 4);
                  local_168 = local_160 + 1;
                  iVar41 = uVar28 + 9;
                  uVar40 = 3;
                  if (bVar16) {
                    uVar40 = 4;
                  }
                  uVar65 = uVar32;
                  do {
                    if (uVar21 == 3) {
                      uVar47 = *piVar49 - 1;
                      uVar39 = *piVar49 - 2;
                      if (uVar39 < uVar28 - uVar4) goto LAB_1006f9e70;
LAB_1006f9dd4:
                      if ((uVar39 < (uVar28 - uVar10) - uVar14 &&
                           (uVar28 - uVar47) - uVar4 < 0xfffffffd) &&
                         (puVar54 = (uint *)((lVar9 - (ulong)uVar14) + (ulong)(uVar28 - uVar47)),
                         (uint)*puVar56 == *puVar54)) {
                        puVar17 = puVar20;
                        FUN_1006c7460(puVar20,puVar54 + 1,puVar3,lVar7,lVar43 + (ulong)uVar4);
                        uVar47 = (int)puVar17 + 4;
                        uVar63 = (ulong)uVar47;
                        if (uVar47 <= uVar65) goto LAB_1006f9dac;
                        goto LAB_1006f9fd4;
                      }
                    }
                    else {
                      uVar47 = piVar49[uVar21];
                      uVar39 = uVar47 - 1;
                      if (uVar28 - uVar4 <= uVar39) goto LAB_1006f9dd4;
LAB_1006f9e70:
                      if ((uint)*puVar56 == *(uint *)((long)puVar56 - (ulong)uVar47)) {
                        lVar36 = -(ulong)uVar47;
                        puVar17 = (ulong *)((long)puVar20 + lVar36);
                        puVar19 = puVar20;
                        if (puVar20 < puVar33) {
                          if (*puVar17 == *puVar20) {
                            iVar30 = 0;
                            puVar17 = (ulong *)((long)local_e0 + lVar36 + uVar62 + 0xc);
                            puVar19 = puVar66;
                            do {
                              if (puVar33 <= puVar19) goto LAB_1006f9f18;
                              uVar58 = *puVar17;
                              uVar63 = *puVar19;
                              iVar30 = iVar30 + 8;
                              puVar17 = puVar17 + 1;
                              puVar19 = puVar19 + 1;
                            } while (uVar58 == uVar63);
                            uVar63 = uVar63 ^ uVar58;
                            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar63 & 0x5555555555555555) << 1;
                            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 |
                                     (uVar63 & 0x3333333333333333) << 2;
                            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar63 & 0xff00ff00ff00ff) << 8;
                            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar63 & 0xffff0000ffff) << 0x10;
                            iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20)
                                                   >> 3);
                          }
                          else {
                            uVar63 = *puVar20 ^ *puVar17;
                            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                     (uVar63 & 0x5555555555555555) << 1;
                            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 |
                                     (uVar63 & 0x3333333333333333) << 2;
                            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                     (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 |
                                     (uVar63 & 0xff00ff00ff00ff) << 8;
                            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 |
                                     (uVar63 & 0xffff0000ffff) << 0x10;
                            iVar30 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
                          }
                        }
                        else {
LAB_1006f9f18:
                          if (puVar19 < puVar42) {
                            if ((uint)*puVar17 == (uint)*puVar19) {
                              puVar17 = (ulong *)((long)puVar17 + 4);
                              puVar19 = (ulong *)((long)puVar19 + 4);
                            }
                          }
                          if (puVar19 < puVar34) {
                            if (*(short *)puVar17 == *(short *)puVar19) {
                              puVar19 = (ulong *)((long)puVar19 + 2);
                              puVar17 = (ulong *)((long)puVar17 + 2);
                            }
                          }
                          if ((puVar19 < puVar3) && ((char)*puVar17 == (char)*puVar19)) {
                            puVar19 = (ulong *)((long)puVar19 + 1);
                          }
                          iVar30 = (int)puVar19 - (int)puVar20;
                        }
                        uVar47 = iVar30 + 4;
                        uVar63 = (ulong)uVar47;
                        if (uVar65 < uVar47) {
LAB_1006f9fd4:
                          uVar65 = uVar63;
                          piVar6[uVar24 * 2] = (int)uVar21 - (uint)bVar16;
                          (piVar6 + uVar24 * 2)[1] = uVar47;
                          uVar39 = (int)uVar24 + 1;
                          uVar24 = (ulong)uVar39;
                          if ((uVar67 < uVar47) || ((ulong *)((long)puVar56 + uVar65) == puVar3))
                          goto joined_r0x0001006fb5f8;
                        }
                      }
                    }
LAB_1006f9dac:
                    uVar39 = (uint)uVar24;
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < uVar40);
                  *(uint *)(lVar53 + (ulong)uVar48 * 4) = uVar28;
                  uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
                  if (uVar13 <= uVar22) {
                    uVar40 = 0;
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar63 = uVar40;
                      if (uVar21 <= uVar40) {
                        uVar63 = uVar21;
                      }
                      uVar58 = (ulong)uVar22;
                      puVar20 = (ulong *)(lVar43 + uVar58 + uVar63);
                      puVar66 = (ulong *)((long)puVar56 + uVar63);
                      puVar17 = puVar66;
                      if (puVar66 < puVar33) {
                        if (*puVar20 == *puVar66) {
                          lVar53 = 0;
                          do {
                            puVar20 = (ulong *)((long)local_e0 + lVar53 + uVar63 + uVar62 + 8);
                            if (puVar33 <= puVar20) {
                              puVar20 = (ulong *)(lVar43 + 8 + uVar63 + uVar58 + lVar53);
                              puVar17 = (ulong *)((long)local_e0 + lVar53 + uVar63 + uVar62 + 8);
                              goto joined_r0x0001006facac;
                            }
                            uVar23 = *(ulong *)(lVar43 + 8 + uVar63 + uVar58 + lVar53);
                            uVar25 = *puVar20;
                            lVar53 = lVar53 + 8;
                          } while (uVar23 == uVar25);
                          uVar25 = uVar25 ^ uVar23;
                          uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar25 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = lVar53 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                        }
                        else {
                          uVar23 = *puVar66 ^ *puVar20;
                          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar23 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                        }
                        uVar23 = uVar23 + uVar63;
                      }
                      else {
joined_r0x0001006facac:
                        if (puVar17 < puVar42) {
                          if ((uint)*puVar20 == (uint)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 4);
                            puVar17 = (ulong *)((long)puVar17 + 4);
                          }
                        }
                        if (puVar17 < puVar34) {
                          if ((short)*puVar20 == (short)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 2);
                            puVar17 = (ulong *)((long)puVar17 + 2);
                          }
                        }
                        if ((puVar17 < puVar3) && ((char)*puVar20 == (char)*puVar17)) {
                          puVar17 = (ulong *)((long)puVar17 + 1);
                        }
                        uVar23 = (long)puVar17 + (uVar63 - (long)puVar66);
                      }
                      iVar41 = iVar30;
                      if (uVar65 < uVar23) {
                        iVar41 = uVar22 + (int)uVar23;
                        if (uVar23 <= iVar30 - uVar22) {
                          iVar41 = iVar30;
                        }
                        piVar6[uVar24 * 2] = (uVar28 + 2) - uVar22;
                        (piVar6 + uVar24 * 2)[1] = (int)uVar23;
                        uVar39 = (int)uVar24 + 1;
                        uVar24 = (ulong)uVar39;
                        uVar65 = uVar23;
                        if (0x1000 < uVar23 || (ulong *)((long)puVar56 + uVar23) == puVar3) {
                          *local_168 = 0;
                          *local_160 = 0;
                          iVar41 = iVar41 + -8;
                          goto LAB_1006fb2f4;
                        }
                      }
                      uVar39 = (uint)uVar24;
                      puVar54 = (uint *)(lVar60 + (ulong)((uVar22 & uVar27) << 1) * 4);
                      if (*(byte *)(lVar43 + uVar58 + uVar23) < *(byte *)((long)puVar56 + uVar23)) {
                        *local_160 = uVar22;
                        if (uVar22 <= uVar44) {
                          local_160 = &local_94;
                          break;
                        }
                        puVar54 = puVar54 + 1;
                        uVar40 = uVar23;
                        local_160 = puVar54;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      else {
                        *local_168 = uVar22;
                        if (uVar22 <= uVar44) {
                          local_168 = &local_94;
                          break;
                        }
                        uVar21 = uVar23;
                        local_168 = puVar54;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      uVar67 = uVar67 - 1;
                      uVar22 = *puVar54;
                      iVar30 = iVar41;
                    } while (uVar13 <= uVar22);
                  }
                  *local_168 = 0;
                  *local_160 = 0;
                  if ((uVar67 != 0) &&
                     (uVar44 = *(uint *)(plVar51[6] +
                                        (ulong)((uint)*puVar56 * -0x61c8864f >>
                                               (ulong)(-(int)lVar15 & 0x1f)) * 4), uVar10 < uVar44))
                  {
                    uVar24 = 0;
                    lVar60 = plVar51[8];
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar67 = uVar67 - 1;
                      uVar40 = uVar21;
                      if (uVar24 <= uVar21) {
                        uVar40 = uVar24;
                      }
                      uVar63 = (ulong)uVar44;
                      lVar53 = (long)puVar56 + uVar40;
                      FUN_1006c7460(lVar53,lVar9 + uVar63 + uVar40,puVar3,lVar7,
                                    lVar43 + (ulong)uVar4);
                      uVar40 = lVar53 + uVar40;
                      lVar53 = lVar9 + uVar63;
                      if ((lVar7 - lVar9 & 0xffffffffU) <= uVar40 + uVar63) {
                        lVar53 = lVar43 + (ulong)uVar14 + uVar63;
                      }
                      iVar41 = iVar30;
                      if (uVar65 < uVar40) {
                        iVar57 = uVar44 + uVar14;
                        iVar41 = iVar57 + (int)uVar40;
                        if (uVar40 <= (uint)(iVar30 - iVar57)) {
                          iVar41 = iVar30;
                        }
                        piVar6[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar57;
                        (piVar6 + (ulong)uVar39 * 2)[1] = (int)uVar40;
                        uVar39 = uVar39 + 1;
                        if (0x1000 < uVar40) {
                          iVar41 = iVar41 + -8;
                          goto LAB_1006fb2f4;
                        }
                        uVar65 = uVar40;
                        if ((ulong *)((long)puVar56 + uVar40) == puVar3) break;
                      }
                      if (uVar44 <= uVar11) break;
                      bVar16 = *(byte *)(lVar53 + uVar40) < *(byte *)((long)puVar56 + uVar40);
                      uVar63 = uVar40;
                      if (!bVar16) {
                        uVar63 = uVar21;
                        uVar24 = uVar40;
                      }
                      if ((uVar67 == 0) ||
                         (uVar44 = *(uint *)(lVar60 + (ulong)((uVar44 & uVar38) << 1) * 4 +
                                            (ulong)bVar16 * 4), uVar21 = uVar63, iVar30 = iVar41,
                         uVar44 <= uVar10)) break;
                    } while( true );
                  }
                  iVar41 = iVar41 + -8;
                  goto LAB_1006fb2f4;
                }
                uVar24 = 0;
                uVar67 = *(uint *)(param_1 + 0xcc);
                if (0xffe < uVar67) {
                  uVar67 = 0xfff;
                }
                lVar43 = *(long *)(param_1 + 8);
                lVar53 = *(long *)(param_1 + 0x30);
                puVar66 = (ulong *)((long)puVar56 + 3);
                uVar46 = *(uint *)(param_1 + 0xc4);
                uVar48 = (uint)*puVar56 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
                uVar22 = *(uint *)(lVar53 + (ulong)uVar48 * 4);
                lVar60 = *(long *)(param_1 + 0x40);
                uVar47 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                uVar27 = ~uVar47;
                uVar28 = iVar30 - (int)lVar43;
                uVar44 = 0;
                if (uVar27 <= uVar28) {
                  uVar44 = uVar28 - uVar27;
                }
                uVar4 = *(uint *)(param_1 + 0x18);
                uVar13 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                uVar14 = uVar28 - uVar13;
                if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar13 || *(int *)(param_1 + 0x20) != 0) {
                  uVar14 = *(uint *)(param_1 + 0x1c);
                }
                uVar13 = uVar14;
                if (uVar14 < 2) {
                  uVar13 = 1;
                }
                plVar51 = *(long **)(param_1 + 0xb0);
                lVar7 = *plVar51;
                lVar9 = plVar51[1];
                iVar41 = (int)(lVar7 - lVar9);
                uVar14 = uVar14 - iVar41;
                lVar15 = plVar51[0x18];
                uVar38 = ~(-1 << (ulong)(*(int *)((long)plVar51 + 0xbc) - 1U & 0x1f));
                uVar10 = *(uint *)((long)plVar51 + 0x1c);
                uVar11 = iVar41 - uVar38;
                if (iVar41 - uVar10 <= uVar38) {
                  uVar11 = uVar10;
                }
                bVar16 = iVar71 != 0;
                uVar21 = (ulong)bVar16;
                puVar54 = (uint *)(lVar60 + (ulong)((uVar28 & (uVar47 ^ 0xffffffff)) << 1) * 4);
                local_150 = puVar54 + 1;
                iVar41 = uVar28 + 9;
                uVar40 = 3;
                if (bVar16) {
                  uVar40 = 4;
                }
                uVar65 = uVar32;
                do {
                  if (uVar21 == 3) {
                    uVar47 = *piVar49 - 1;
                    uVar39 = *piVar49 - 2;
                    if (uVar39 < uVar28 - uVar4) goto LAB_1006f90ec;
LAB_1006f9048:
                    if ((uVar39 < (uVar28 - uVar10) - uVar14 &&
                         (uVar28 - uVar47) - uVar4 < 0xfffffffd) &&
                       (puVar55 = (uint *)((lVar9 - (ulong)uVar14) + (ulong)(uVar28 - uVar47)),
                       ((*puVar55 ^ (uint)*puVar56) & 0xffffff) == 0)) {
                      puVar20 = puVar66;
                      FUN_1006c7460(puVar66,(long)puVar55 + 3,puVar3,lVar7,lVar43 + (ulong)uVar4);
                      uVar47 = (int)puVar20 + 3;
                      uVar63 = (ulong)uVar47;
                      if (uVar47 <= uVar65) goto LAB_1006f9020;
                      goto LAB_1006f9118;
                    }
                  }
                  else {
                    uVar47 = piVar49[uVar21];
                    uVar39 = uVar47 - 1;
                    if (uVar28 - uVar4 <= uVar39) goto LAB_1006f9048;
LAB_1006f90ec:
                    if (((*(uint *)((long)puVar56 - (ulong)uVar47) ^ (uint)*puVar56) & 0xffffff) ==
                        0) {
                      lVar36 = -(ulong)uVar47;
                      puVar20 = (ulong *)((long)puVar66 + lVar36);
                      puVar17 = puVar66;
                      if (puVar66 < puVar33) {
                        if (*puVar20 == *puVar66) {
                          iVar30 = 0;
                          puVar20 = (ulong *)((long)local_e0 + lVar36 + uVar62 + 0xb);
                          puVar17 = (ulong *)((long)local_e0 + uVar62 + 0xb);
                          do {
                            if (puVar33 <= puVar17) goto LAB_1006f91c4;
                            uVar58 = *puVar20;
                            uVar63 = *puVar17;
                            iVar30 = iVar30 + 8;
                            puVar20 = puVar20 + 1;
                            puVar17 = puVar17 + 1;
                          } while (uVar58 == uVar63);
                          uVar63 = uVar63 ^ uVar58;
                          uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar63 & 0x5555555555555555) << 1;
                          uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 |
                                   (uVar63 & 0x3333333333333333) << 2;
                          uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar63 & 0xff00ff00ff00ff) << 8;
                          uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar63 & 0xffff0000ffff) << 0x10;
                          iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >>
                                                 3);
                        }
                        else {
                          uVar63 = *puVar66 ^ *puVar20;
                          uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar63 & 0x5555555555555555) << 1;
                          uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 |
                                   (uVar63 & 0x3333333333333333) << 2;
                          uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar63 & 0xff00ff00ff00ff) << 8;
                          uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar63 & 0xffff0000ffff) << 0x10;
                          iVar30 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
                        }
                      }
                      else {
LAB_1006f91c4:
                        if (puVar17 < puVar42) {
                          if ((uint)*puVar20 == (uint)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 4);
                            puVar17 = (ulong *)((long)puVar17 + 4);
                          }
                        }
                        if (puVar17 < puVar34) {
                          if (*(short *)puVar20 == *(short *)puVar17) {
                            puVar17 = (ulong *)((long)puVar17 + 2);
                            puVar20 = (ulong *)((long)puVar20 + 2);
                          }
                        }
                        if ((puVar17 < puVar3) && ((char)*puVar20 == (char)*puVar17)) {
                          puVar17 = (ulong *)((long)puVar17 + 1);
                        }
                        iVar30 = (int)puVar17 - (int)puVar66;
                      }
                      uVar47 = iVar30 + 3;
                      uVar63 = (ulong)uVar47;
                      if (uVar65 < uVar47) {
LAB_1006f9118:
                        uVar65 = uVar63;
                        piVar6[uVar24 * 2] = (int)uVar21 - (uint)bVar16;
                        (piVar6 + uVar24 * 2)[1] = uVar47;
                        uVar39 = (int)uVar24 + 1;
                        uVar24 = (ulong)uVar39;
                        if ((uVar67 < uVar47) || ((ulong *)((long)puVar56 + uVar65) == puVar3))
                        goto joined_r0x0001006fb5f8;
                      }
                    }
                  }
LAB_1006f9020:
                  uVar21 = uVar21 + 1;
                } while (uVar21 < uVar40);
                if (2 < uVar65) {
LAB_1006fa730:
                  uVar39 = (uint)uVar24;
                  *(uint *)(lVar53 + (ulong)uVar48 * 4) = uVar28;
                  uVar67 = ~(-1 << (ulong)(uVar46 & 0x1f));
                  if (uVar13 <= uVar22) {
                    uVar40 = 0;
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar63 = uVar40;
                      if (uVar21 <= uVar40) {
                        uVar63 = uVar21;
                      }
                      uVar58 = (ulong)uVar22;
                      puVar20 = (ulong *)(lVar43 + uVar58 + uVar63);
                      puVar66 = (ulong *)((long)puVar56 + uVar63);
                      puVar17 = puVar66;
                      if (puVar66 < puVar33) {
                        if (*puVar20 == *puVar66) {
                          lVar53 = 0;
                          do {
                            puVar20 = (ulong *)((long)local_e0 + lVar53 + uVar63 + uVar62 + 8);
                            if (puVar33 <= puVar20) {
                              puVar20 = (ulong *)(lVar43 + 8 + uVar63 + uVar58 + lVar53);
                              puVar17 = (ulong *)((long)local_e0 + lVar53 + uVar63 + uVar62 + 8);
                              goto joined_r0x0001006faf28;
                            }
                            uVar23 = *(ulong *)(lVar43 + 8 + uVar63 + uVar58 + lVar53);
                            uVar25 = *puVar20;
                            lVar53 = lVar53 + 8;
                          } while (uVar23 == uVar25);
                          uVar25 = uVar25 ^ uVar23;
                          uVar23 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar25 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = lVar53 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                        }
                        else {
                          uVar23 = *puVar66 ^ *puVar20;
                          uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar23 & 0x5555555555555555) << 1;
                          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 |
                                   (uVar23 & 0x3333333333333333) << 2;
                          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar23 & 0xff00ff00ff00ff) << 8;
                          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar23 & 0xffff0000ffff) << 0x10;
                          uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                        }
                        uVar23 = uVar23 + uVar63;
                      }
                      else {
joined_r0x0001006faf28:
                        if (puVar17 < puVar42) {
                          if ((uint)*puVar20 == (uint)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 4);
                            puVar17 = (ulong *)((long)puVar17 + 4);
                          }
                        }
                        if (puVar17 < puVar34) {
                          if ((short)*puVar20 == (short)*puVar17) {
                            puVar20 = (ulong *)((long)puVar20 + 2);
                            puVar17 = (ulong *)((long)puVar17 + 2);
                          }
                        }
                        if ((puVar17 < puVar3) && ((char)*puVar20 == (char)*puVar17)) {
                          puVar17 = (ulong *)((long)puVar17 + 1);
                        }
                        uVar23 = (long)puVar17 + (uVar63 - (long)puVar66);
                      }
                      iVar41 = iVar30;
                      if (uVar65 < uVar23) {
                        iVar41 = uVar22 + (int)uVar23;
                        if (uVar23 <= iVar30 - uVar22) {
                          iVar41 = iVar30;
                        }
                        piVar6[uVar24 * 2] = (uVar28 + 2) - uVar22;
                        (piVar6 + uVar24 * 2)[1] = (int)uVar23;
                        uVar39 = (int)uVar24 + 1;
                        uVar24 = (ulong)uVar39;
                        uVar65 = uVar23;
                        if (0x1000 < uVar23 || (ulong *)((long)puVar56 + uVar23) == puVar3) {
                          *local_150 = 0;
                          *puVar54 = 0;
                          goto LAB_1006fb254;
                        }
                      }
                      uVar39 = (uint)uVar24;
                      puVar55 = (uint *)(lVar60 + (ulong)((uVar22 & uVar27) << 1) * 4);
                      if (*(byte *)(lVar43 + uVar58 + uVar23) < *(byte *)((long)puVar56 + uVar23)) {
                        *puVar54 = uVar22;
                        if (uVar22 <= uVar44) {
                          puVar54 = &local_94;
                          break;
                        }
                        puVar55 = puVar55 + 1;
                        uVar40 = uVar23;
                        puVar54 = puVar55;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      else {
                        *local_150 = uVar22;
                        if (uVar22 <= uVar44) {
                          local_150 = &local_94;
                          break;
                        }
                        uVar21 = uVar23;
                        local_150 = puVar55;
                        if (uVar67 == 0) {
                          uVar67 = 0xffffffff;
                          break;
                        }
                      }
                      uVar67 = uVar67 - 1;
                      uVar22 = *puVar55;
                      iVar30 = iVar41;
                    } while (uVar13 <= uVar22);
                  }
                  *local_150 = 0;
                  *puVar54 = 0;
                  if ((uVar67 != 0) &&
                     (uVar44 = *(uint *)(plVar51[6] +
                                        (ulong)((uint)*puVar56 * -0x61c8864f >>
                                               (ulong)(-(int)lVar15 & 0x1f)) * 4), uVar10 < uVar44))
                  {
                    uVar24 = 0;
                    lVar60 = plVar51[8];
                    uVar21 = 0;
                    iVar30 = iVar41;
                    do {
                      uVar67 = uVar67 - 1;
                      uVar40 = uVar21;
                      if (uVar24 <= uVar21) {
                        uVar40 = uVar24;
                      }
                      uVar63 = (ulong)uVar44;
                      lVar53 = (long)puVar56 + uVar40;
                      FUN_1006c7460(lVar53,lVar9 + uVar63 + uVar40,puVar3,lVar7,
                                    lVar43 + (ulong)uVar4);
                      uVar40 = lVar53 + uVar40;
                      lVar53 = lVar9 + uVar63;
                      if ((lVar7 - lVar9 & 0xffffffffU) <= uVar40 + uVar63) {
                        lVar53 = lVar43 + (ulong)uVar14 + uVar63;
                      }
                      iVar41 = iVar30;
                      if (uVar65 < uVar40) {
                        iVar57 = uVar44 + uVar14;
                        iVar41 = iVar57 + (int)uVar40;
                        if (uVar40 <= (uint)(iVar30 - iVar57)) {
                          iVar41 = iVar30;
                        }
                        piVar6[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar57;
                        (piVar6 + (ulong)uVar39 * 2)[1] = (int)uVar40;
                        uVar39 = uVar39 + 1;
                        if (0x1000 < uVar40) {
                          *(int *)(param_1 + 0x24) = iVar41 + -8;
                          goto joined_r0x0001006fb5f8;
                        }
                        uVar65 = uVar40;
                        if ((ulong *)((long)puVar56 + uVar40) == puVar3) break;
                      }
                      if (uVar44 <= uVar11) break;
                      bVar16 = *(byte *)(lVar53 + uVar40) < *(byte *)((long)puVar56 + uVar40);
                      uVar63 = uVar40;
                      if (!bVar16) {
                        uVar63 = uVar21;
                        uVar24 = uVar40;
                      }
                      if ((uVar67 == 0) ||
                         (uVar44 = *(uint *)(lVar60 + (ulong)((uVar44 & uVar38) << 1) * 4 +
                                            (ulong)bVar16 * 4), uVar21 = uVar63, iVar30 = iVar41,
                         uVar44 <= uVar10)) break;
                    } while( true );
                  }
LAB_1006fb254:
                  *(int *)(param_1 + 0x24) = iVar41 + -8;
                  goto joined_r0x0001006fb5f8;
                }
                lVar36 = *(long *)(param_1 + 0x38);
                uVar21 = *puVar56;
                uVar47 = 0x20 - *(int *)(param_1 + 0x28);
                if (local_284 < uVar28) {
                  uVar40 = (ulong)local_284;
                  do {
                    *(int *)(lVar36 + (ulong)((uint)(*(int *)(lVar43 + uVar40) * 0x35a7bd00) >>
                                             (ulong)(uVar47 & 0x1f)) * 4) = (int)uVar40;
                    uVar40 = uVar40 + 1;
                  } while ((uint)(iVar37 - (int)lVar43) != uVar40);
                }
                uVar47 = *(uint *)(lVar36 + (ulong)((uint)uVar21 * 0x35a7bd00 >>
                                                   (ulong)(uVar47 & 0x1f)) * 4);
                local_284 = uVar28;
                if (uVar47 < uVar13 || uVar28 - uVar47 >> 0x12 != 0) goto LAB_1006fa730;
                puVar66 = (ulong *)(lVar43 + (ulong)uVar47);
                puVar20 = puVar56;
                if (puVar56 < puVar33) {
                  if (*puVar66 == *puVar56) {
                    lVar36 = 0;
                    puVar66 = (ulong *)(lVar43 + (ulong)uVar47);
                    puVar20 = (ulong *)((long)local_e0 + uVar62 + 8);
                    do {
                      puVar66 = puVar66 + 1;
                      if (puVar33 <= puVar20) goto LAB_1006fb144;
                      uVar21 = *puVar20;
                      lVar36 = lVar36 + 8;
                      puVar20 = puVar20 + 1;
                    } while (*puVar66 == uVar21);
                    uVar21 = uVar21 ^ *puVar66;
                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1
                    ;
                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2
                    ;
                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    uVar21 = lVar36 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                  }
                  else {
                    uVar21 = *puVar56 ^ *puVar66;
                    uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1
                    ;
                    uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2
                    ;
                    uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                    uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar21 & 0xffff0000ffff) << 0x10;
                    uVar21 = (ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006fb144:
                  if (puVar20 < puVar42) {
                    if ((uint)*puVar66 == (uint)*puVar20) {
                      puVar66 = (ulong *)((long)puVar66 + 4);
                      puVar20 = (ulong *)((long)puVar20 + 4);
                    }
                  }
                  if (puVar20 < puVar34) {
                    if (*(short *)puVar66 == *(short *)puVar20) {
                      puVar20 = (ulong *)((long)puVar20 + 2);
                      puVar66 = (ulong *)((long)puVar66 + 2);
                    }
                  }
                  if ((puVar20 < puVar3) && ((char)*puVar66 == (char)*puVar20)) {
                    puVar20 = (ulong *)((long)puVar20 + 1);
                  }
                  uVar21 = (long)puVar20 - (long)puVar56;
                }
                if (uVar21 < 3) goto LAB_1006fa730;
                *piVar6 = (uVar28 - uVar47) + 2;
                piVar6[1] = (int)uVar21;
                if (uVar21 <= uVar67 && (ulong *)((long)puVar56 + uVar21) != puVar3) {
                  uVar24 = 1;
                  uVar65 = uVar21;
                  goto LAB_1006fa730;
                }
                uVar39 = 1;
                *(uint *)(param_1 + 0x24) = uVar28 + 1;
              }
              uVar67 = (piVar6 + (ulong)(uVar39 - 1) * 2)[1];
              if ((uVar5 < uVar67) || (0xfff < uVar67 + iVar69)) {
                if (piVar18[2] == 0) {
                  iVar37 = piVar18[3];
                }
                else {
                  iVar37 = 0;
                }
                iVar71 = piVar6[(ulong)(uVar39 - 1) * 2];
                uVar44 = 0;
                if ((uint)(iVar69 - iVar37) < 0x1001) {
                  uVar44 = iVar69 - iVar37;
                }
                goto LAB_1006fb648;
              }
              uVar24 = 0;
              piVar49 = piVar8 + uVar62 * 7 + 4;
              do {
                puVar54 = (uint *)(piVar6 + uVar24 * 2);
                uVar67 = *puVar54;
                if (uVar67 < 3) {
                  uVar44 = uVar67 + (iVar71 != 0);
                  if (uVar44 == 0) {
                    iVar41 = *piVar49;
                    iVar30 = piVar8[uVar62 * 7 + 5];
                    piVar18 = piVar8 + uVar62 * 7 + 6;
                  }
                  else {
                    if (uVar44 == 3) {
                      iVar30 = *piVar49;
                      iVar41 = iVar30 + -1;
                    }
                    else {
                      iVar41 = piVar49[uVar44];
                      iVar30 = *piVar49;
                    }
                    lVar60 = 8;
                    if (uVar44 != 1) {
                      lVar60 = 4;
                    }
                    piVar18 = (int *)((long)piVar49 + lVar60);
                  }
                }
                else {
                  iVar30 = *piVar49;
                  iVar41 = uVar67 - 2;
                  piVar18 = piVar8 + uVar62 * 7 + 5;
                }
                uVar44 = uVar29;
                if (uVar24 != 0) {
                  uVar44 = puVar54[-1] + 1;
                }
                uVar46 = puVar54[1];
                if (uVar44 <= uVar46) {
                  iVar57 = 0;
                  iVar12 = *piVar18;
                  uVar47 = (uint)LZCOUNT(uVar67 + 1) ^ 0x1f;
                  uVar22 = iVar69 + uVar46;
                  uVar48 = uVar22;
                  do {
                    if (*(int *)(param_1 + 0x98) == 1) {
                      uVar27 = (uint)LZCOUNT(uVar46 - 2) ^ 0x1f;
                      iVar26 = iVar50 + iVar45 +
                               ((uVar46 - 2) * 0x100 >> (ulong)(uVar27 & 0x1f)) +
                               (uVar27 + uVar47) * 0x100 + 0x1000;
                      uVar21 = (ulong)(uVar46 + iVar69);
                      if ((uint)uVar61 < uVar46 + iVar69) goto LAB_1006fb548;
LAB_1006fb48c:
                      if (iVar26 < piVar8[uVar21 * 7]) goto LAB_1006fb41c;
                    }
                    else {
                      uVar27 = uVar46 - 3;
                      if (uVar27 < 0x80) {
                        uVar27 = (uint)(byte)(&DAT_10084ff08)[uVar27];
                      }
                      else {
                        uVar27 = 0x43 - (int)LZCOUNT(uVar27);
                      }
                      iVar26 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar47 * 4) + 1;
                      uVar28 = (uint)LZCOUNT(iVar26) ^ 0x1f;
                      iVar1 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar27 * 4) + 1;
                      uVar14 = (uint)LZCOUNT(iVar1) ^ 0x1f;
                      iVar26 = iVar50 + iVar45 +
                               (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                                ((uint)(iVar26 * 0x100) >> (ulong)(uVar28 & 0x1f))) -
                               ((uint)(iVar1 * 0x100) >> (ulong)(uVar14 & 0x1f))) +
                               (((uVar47 + *(int *)(&DAT_10084fe34 + (ulong)uVar27 * 4)) - uVar28) -
                               uVar14) * 0x100 + 0x33;
                      uVar21 = (ulong)(uVar46 + iVar69);
                      if (uVar46 + iVar69 <= (uint)uVar61) goto LAB_1006fb48c;
LAB_1006fb548:
                      uVar65 = uVar61 & 0xffffffff;
                      uVar40 = (uVar22 - iVar57) - uVar65;
                      uVar61 = uVar65;
                      if (uVar40 < 4) {
LAB_1006fb5a8:
                        piVar18 = piVar2 + uVar61 * 7;
                        do {
                          uVar61 = uVar61 + 1;
                          *piVar18 = 0x40000000;
                          piVar18 = piVar18 + 7;
                        } while (uVar61 < uVar21);
                      }
                      else {
                        uVar61 = (uVar40 & 0xfffffffffffffffc) + uVar65;
                        uVar63 = uVar48 - uVar65 & 0xfffffffffffffffc;
                        piVar18 = piVar8 + uVar65 * 7 + 0xe;
                        do {
                          piVar18[-7] = 0x40000000;
                          *piVar18 = 0x40000000;
                          piVar18[7] = 0x40000000;
                          piVar18[0xe] = 0x40000000;
                          piVar18 = piVar18 + 0x1c;
                          uVar63 = uVar63 - 4;
                        } while (uVar63 != 0);
                        if (uVar40 != (uVar40 & 0xfffffffffffffffc)) goto LAB_1006fb5a8;
                      }
LAB_1006fb41c:
                      piVar18 = piVar8 + uVar21 * 7;
                      piVar18[2] = uVar46;
                      piVar18[3] = local_a4;
                      *piVar18 = iVar26;
                      piVar18[1] = uVar67;
                      *(ulong *)(piVar18 + 4) = CONCAT44(iVar30,iVar41);
                      piVar18[6] = iVar12;
                    }
                    uVar46 = uVar46 - 1;
                    iVar57 = iVar57 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar44 <= uVar46);
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar39);
            }
          }
LAB_1006f8ba8:
          uVar62 = uVar61;
          uVar24 = (ulong)(iVar69 + 1U);
        } while (iVar69 + 1U <= (uint)uVar61);
      }
      piVar49 = piVar8 + (uVar62 & 0xffffffff) * 7;
      local_224 = *piVar49;
      iVar71 = piVar49[1];
      uVar67 = piVar49[2];
      local_a4 = piVar49[3];
      local_90 = *(undefined8 *)(piVar49 + 4);
      local_88 = piVar49[6];
      uVar44 = 0;
      if (local_a4 + uVar67 <= (uint)uVar62) {
        uVar44 = (uint)uVar62 - (local_a4 + uVar67);
      }
    }
LAB_1006fb648:
    uVar46 = uVar44 + 1;
    piVar49 = piVar8 + (ulong)uVar46 * 7;
    *piVar49 = local_224;
    piVar49[1] = iVar71;
    piVar49[2] = uVar67;
    piVar49[3] = local_a4;
    *(undefined8 *)(piVar49 + 4) = local_90;
    piVar49[6] = local_88;
    uVar67 = uVar44;
    if (uVar44 == 0) {
      uVar22 = 1;
      goto LAB_1006fb764;
    }
    do {
      uVar22 = uVar67;
      piVar49 = piVar8 + (ulong)uVar44 * 7;
      iVar37 = piVar49[2];
      iVar69 = piVar49[3];
      piVar18 = piVar8 + (ulong)uVar22 * 7;
      uVar72 = *(undefined8 *)(piVar49 + 2);
      uVar70 = *(undefined8 *)piVar49;
      uVar73 = *(undefined8 *)(piVar49 + 3);
      *(undefined8 *)(piVar18 + 5) = *(undefined8 *)(piVar49 + 5);
      *(undefined8 *)(piVar18 + 3) = uVar73;
      *(undefined8 *)(piVar18 + 2) = uVar72;
      *(undefined8 *)piVar18 = uVar70;
      uVar47 = iVar69 + iVar37;
      bVar16 = uVar47 <= uVar44;
      uVar47 = uVar44 - uVar47;
      uVar44 = 0;
      if (bVar16) {
        uVar44 = uVar47;
      }
      uVar67 = uVar22 - 1;
    } while (bVar16 && uVar47 != 0);
    for (; uVar22 <= uVar46; uVar22 = uVar22 + 1) {
LAB_1006fb764:
      while( true ) {
        iVar37 = piVar8[(ulong)uVar22 * 7 + 2];
        uVar67 = piVar8[(ulong)uVar22 * 7 + 3];
        uVar61 = (ulong)uVar67;
        if (iVar37 != 0) break;
        local_e0 = (ulong *)((long)param_4 + uVar61);
        uVar22 = uVar22 + 1;
        if (uVar46 < uVar22) goto LAB_1006fbaf0;
      }
      uVar44 = piVar8[(ulong)uVar22 * 7 + 1];
      if (uVar44 < 3) {
        uVar47 = uVar44;
        if (uVar67 == 0) {
          uVar47 = uVar44 + 1;
        }
        if (uVar47 != 0) {
          if (uVar47 == 3) {
            iVar69 = *param_3 + -1;
LAB_1006fb7e0:
            param_3[2] = param_3[1];
          }
          else {
            iVar69 = param_3[uVar47];
            if (uVar47 != 1) goto LAB_1006fb7e0;
          }
          param_3[1] = *param_3;
          goto LAB_1006fb7f4;
        }
      }
      else {
        *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
        iVar69 = uVar44 - 2;
LAB_1006fb7f4:
        *param_3 = iVar69;
      }
      if (*(int *)(param_1 + 0xa8) != 2) {
        if (uVar67 != 0) {
          lVar60 = *(long *)(param_1 + 0x48);
          puVar56 = param_4;
          uVar62 = uVar61;
          do {
            *(int *)(lVar60 + (ulong)(byte)*puVar56 * 4) =
                 *(int *)(lVar60 + (ulong)(byte)*puVar56 * 4) + 2;
            uVar62 = uVar62 - 1;
            puVar56 = (ulong *)((long)puVar56 + 1);
          } while (uVar62 != 0);
        }
        *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar67 * 2;
      }
      if (uVar67 < 0x40) {
        uVar47 = (uint)(byte)(&DAT_10084fdf4)[uVar61];
      }
      else {
        uVar47 = 0x32 - (int)LZCOUNT(uVar67);
      }
      *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar47 * 4) =
           *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar47 * 4) + 1;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      uVar47 = (uint)LZCOUNT(uVar44 + 1) ^ 0x1f;
      *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar47 * 4) =
           *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar47 * 4) + 1;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      uVar47 = iVar37 - 3;
      if (uVar47 < 0x80) {
        uVar48 = (uint)(byte)(&DAT_10084ff08)[uVar47];
      }
      else {
        uVar48 = 0x43 - (int)LZCOUNT(uVar47);
      }
      *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar48 * 4) =
           *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar48 * 4) + 1;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      puVar56 = (ulong *)param_2[3];
      puVar66 = (ulong *)((long)param_4 + uVar61);
      if (puVar35 < puVar66) {
        puVar20 = param_4;
        puVar17 = puVar56;
        if (param_4 <= puVar35) {
          puVar17 = (ulong *)((long)puVar56 + ((long)puVar35 - (long)param_4));
          uVar62 = *param_4;
          puVar56[1] = param_4[1];
          *puVar56 = uVar62;
          uVar62 = param_4[2];
          puVar56[3] = param_4[3];
          puVar56[2] = uVar62;
          puVar20 = puVar35;
          if (0x20 < (long)puVar35 - (long)param_4) {
            puVar56 = puVar56 + 4;
            puVar19 = param_4 + 6;
            do {
              uVar62 = puVar19[-2];
              puVar56[1] = puVar19[-1];
              *puVar56 = uVar62;
              uVar62 = *puVar19;
              puVar56[3] = puVar19[1];
              puVar56[2] = uVar62;
              puVar56 = puVar56 + 4;
              puVar19 = puVar19 + 4;
            } while (puVar56 < puVar17);
          }
        }
        if (puVar20 < puVar66) {
          uVar62 = (long)puVar66 - (long)puVar20;
          if ((7 < uVar62) && (0x3f < (ulong)((long)puVar17 - (long)puVar20))) {
            if (uVar62 < 0x40) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar62 & 0xffffffffffffffc0;
              puVar56 = puVar17 + 4;
              puVar19 = puVar20 + 4;
              uVar24 = uVar21;
              do {
                uVar40 = puVar19[-4];
                uVar63 = puVar19[-1];
                uVar65 = puVar19[-2];
                uVar23 = puVar19[1];
                uVar58 = *puVar19;
                uVar74 = puVar19[3];
                uVar25 = puVar19[2];
                puVar56[-3] = puVar19[-3];
                puVar56[-4] = uVar40;
                puVar56[-1] = uVar63;
                puVar56[-2] = uVar65;
                puVar56[1] = uVar23;
                *puVar56 = uVar58;
                puVar56[3] = uVar74;
                puVar56[2] = uVar25;
                uVar24 = uVar24 - 0x40;
                puVar56 = puVar56 + 8;
                puVar19 = puVar19 + 8;
              } while (uVar24 != 0);
              if (uVar62 == uVar21) goto LAB_1006fba80;
              if ((uVar62 & 0x38) == 0) {
                puVar20 = (ulong *)((long)puVar20 + uVar21);
                puVar17 = (ulong *)((long)puVar17 + uVar21);
                goto LAB_1006fba70;
              }
            }
            uVar24 = uVar62 & 0xfffffffffffffff8;
            lVar60 = uVar21 - uVar24;
            puVar52 = (undefined8 *)((long)puVar17 + uVar21);
            puVar59 = (undefined8 *)((long)puVar20 + uVar21);
            do {
              *puVar52 = *puVar59;
              lVar60 = lVar60 + 8;
              puVar52 = puVar52 + 1;
              puVar59 = puVar59 + 1;
            } while (lVar60 != 0);
            puVar17 = (ulong *)((long)puVar17 + uVar24);
            puVar20 = (ulong *)((long)puVar20 + uVar24);
            if (uVar62 == uVar24) goto LAB_1006fba80;
          }
LAB_1006fba70:
          do {
            puVar56 = (ulong *)((long)puVar20 + 1);
            *(char *)puVar17 = (char)*puVar20;
            puVar17 = (ulong *)((long)puVar17 + 1);
            puVar20 = puVar56;
          } while (puVar56 != puVar66);
        }
LAB_1006fba80:
        param_2[3] = param_2[3] + uVar61;
        piVar49 = (int *)param_2[1];
        if (0xffff < uVar67) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar49 - *param_2) >> 3);
        }
      }
      else {
        uVar62 = *param_4;
        puVar56[1] = param_4[1];
        *puVar56 = uVar62;
        if (0x10 < uVar67) {
          lVar60 = param_2[3];
          uVar62 = param_4[2];
          *(ulong *)(lVar60 + 0x18) = param_4[3];
          *(ulong *)(lVar60 + 0x10) = uVar62;
          uVar62 = param_4[4];
          *(ulong *)(lVar60 + 0x28) = param_4[5];
          *(ulong *)(lVar60 + 0x20) = uVar62;
          if (uVar61 - 0x31 < 0xffffffffffffffdf) {
            puVar56 = (ulong *)(lVar60 + 0x30);
            puVar66 = param_4 + 8;
            do {
              uVar62 = puVar66[-2];
              puVar56[1] = puVar66[-1];
              *puVar56 = uVar62;
              uVar62 = *puVar66;
              puVar56[3] = puVar66[1];
              puVar56[2] = uVar62;
              puVar56 = puVar56 + 4;
              puVar66 = puVar66 + 4;
            } while (puVar56 < (ulong *)(lVar60 + uVar61));
            goto LAB_1006fba80;
          }
        }
        param_2[3] = param_2[3] + uVar61;
        piVar49 = (int *)param_2[1];
      }
      *(short *)(piVar49 + 1) = (short)uVar67;
      *piVar49 = uVar44 + 1;
      if (0xffff < uVar47) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar49 - *param_2) >> 3);
      }
      *(short *)((long)piVar49 + 6) = (short)uVar47;
      param_2[1] = (long)(piVar49 + 2);
      local_e0 = (ulong *)((long)param_4 + (ulong)(iVar37 + uVar67));
      param_4 = local_e0;
    }
LAB_1006fbaf0:
    if (*(int *)(param_1 + 0xa8) != 2) {
      iVar37 = *(int *)(param_1 + 0x78) + 1;
      uVar67 = (uint)LZCOUNT(iVar37) ^ 0x1f;
      *(uint *)(param_1 + 0x88) =
           ((uint)(iVar37 * 0x100) >> (ulong)(uVar67 & 0x1f)) + uVar67 * 0x100;
    }
    iVar37 = *(int *)(param_1 + 0x84) + 1;
    uVar67 = (uint)LZCOUNT(iVar37) ^ 0x1f;
    iVar69 = (int)*(undefined8 *)(param_1 + 0x7c) + 1;
    iVar71 = (int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1;
    uVar44 = (uint)(byte)((byte)LZCOUNT(iVar69) ^ 0x1f);
    uVar46 = (uint)(byte)((byte)LZCOUNT(iVar71) ^ 0x1f);
    uVar70 = NEON_ushl(CONCAT44(iVar71 * 0x100,iVar69 * 0x100),CONCAT44(-uVar46,-uVar44),4);
    *(ulong *)(param_1 + 0x8c) =
         CONCAT44(uVar46 * 0x100 + (int)((ulong)uVar70 >> 0x20),uVar44 * 0x100 + (int)uVar70);
    *(uint *)(param_1 + 0x94) = ((uint)(iVar37 * 0x100) >> (ulong)(uVar67 & 0x1f)) + uVar67 * 0x100;
  }
  if (puVar64 <= local_e0) goto LAB_1006fbb7c;
  goto LAB_1006f65c4;
}

