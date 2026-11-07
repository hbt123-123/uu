// rea decompile_all
// name: FUN_1006fbbc0
// address: 0x1006fbbc0
// body: available
// range: 0x1006fbbc0-0x1007007cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007007cc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100700750) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006fbbc0(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  int *piVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  int iVar17;
  ulong *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  long lVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  ulong *puVar35;
  long lVar36;
  ulong *puVar37;
  ulong *puVar38;
  int iVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  uint uVar46;
  byte *pbVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  ulong *puVar51;
  int *piVar52;
  int iVar53;
  undefined8 *puVar54;
  ulong *puVar55;
  int iVar56;
  int iVar57;
  undefined8 *puVar58;
  long lVar59;
  ulong *puVar60;
  ulong uVar61;
  ulong uVar62;
  ulong *puVar63;
  ulong uVar64;
  ulong *puVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  ulong uVar72;
  ulong uVar73;
  uint local_21c;
  int local_17c;
  uint *local_170;
  uint *local_168;
  uint *local_160;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  int local_124;
  ulong *local_e0;
  uint local_94;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar60 = puVar3 + -1;
  lVar28 = *(long *)(param_1 + 8);
  uVar27 = *(uint *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar5) {
    uVar5 = 0xfff;
  }
  uVar22 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar22 = 4;
  }
  local_21c = *(uint *)(param_1 + 0x24);
  piVar7 = *(int **)(param_1 + 0x68);
  piVar8 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,0);
  puVar55 = param_4;
  if ((ulong *)(lVar28 + (ulong)uVar27) == param_4) {
    puVar55 = (ulong *)((long)param_4 + 1);
  }
  if (puVar60 <= puVar55) {
LAB_10070078c:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return (long)puVar3 - (long)param_4;
  }
  puVar29 = (ulong *)(ulong)(uVar22 - 1);
  puVar51 = (ulong *)((long)puVar3 - 7);
  puVar35 = (ulong *)((long)puVar3 - 3);
  puVar30 = (ulong *)((long)puVar3 - 1);
  puVar31 = puVar3 + -4;
  piVar1 = piVar8 + 7;
  lVar28 = (ulong)uVar22 - 1;
LAB_1006fbcf4:
  uVar61 = (long)puVar55 - (long)param_4;
  uVar42 = (uint)uVar61;
  lVar59 = *(long *)(param_1 + 8);
  uVar27 = *(uint *)(param_1 + 0x24);
  uVar62 = (ulong)uVar27;
  if (puVar55 < (ulong *)(lVar59 + uVar62)) goto LAB_1006fbce0;
  iVar25 = *(int *)(param_1 + 200);
  iVar56 = (int)puVar55;
  uVar46 = iVar56 - (int)lVar59;
  while (uVar27 < uVar46) {
    lVar40 = param_1;
    FUN_100705148(param_1,lVar59 + uVar62,puVar3,iVar25,1);
    uVar27 = (int)lVar40 + (int)uVar62;
    uVar62 = (ulong)uVar27;
  }
  *(uint *)(param_1 + 0x24) = uVar46;
  if (iVar25 - 6U < 2) {
    uVar62 = 0;
    uVar27 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar27) {
      uVar27 = 0xfff;
    }
    uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar48 = ~uVar23;
    lVar59 = *(long *)(param_1 + 8);
    lVar40 = *(long *)(param_1 + 0x10);
    uVar50 = iVar56 - (int)lVar59;
    uVar46 = 0;
    if (uVar48 <= uVar50) {
      uVar46 = uVar50 - uVar48;
    }
    uVar19 = *(uint *)(param_1 + 0x18);
    uVar41 = (ulong)uVar19;
    uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = uVar50 - uVar21;
    if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    uVar21 = uVar2;
    if (uVar2 < 2) {
      uVar21 = 1;
    }
    bVar12 = uVar42 == 0;
    uVar66 = (ulong)bVar12;
    lVar43 = *(long *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0xc4);
    uVar68 = *puVar55 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar10 = *(uint *)(lVar43 + uVar68 * 4);
    lVar36 = *(long *)(param_1 + 0x40);
    local_138 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
    local_130 = local_138 + 1;
    local_124 = uVar50 + 9;
    uVar64 = 3;
    if (bVar12) {
      uVar64 = 4;
    }
    puVar18 = (ulong *)((long)puVar55 + 4);
    puVar63 = puVar29;
    do {
      if (uVar66 == 3) {
        uVar23 = *param_3 - 1;
        uVar34 = *param_3 - 2;
        if (uVar34 < uVar50 - uVar19) goto LAB_1006fc2fc;
LAB_1006fc248:
        if ((uVar34 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
           (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar55 == *puVar4)) {
          puVar65 = puVar18;
          FUN_1006c7460(puVar18,puVar4 + 1,puVar3,lVar40 + uVar41,lVar59 + uVar41);
          uVar23 = (int)puVar65 + 4;
          puVar65 = (ulong *)(ulong)uVar23;
          if (puVar65 <= puVar63) goto LAB_1006fc220;
          goto LAB_1006fc458;
        }
      }
      else {
        uVar23 = param_3[uVar66];
        uVar34 = uVar23 - 1;
        if (uVar50 - uVar19 <= uVar34) goto LAB_1006fc248;
LAB_1006fc2fc:
        if ((uint)*puVar55 == *(uint *)((long)puVar55 - (ulong)uVar23)) {
          lVar32 = -(ulong)uVar23;
          puVar65 = (ulong *)((long)puVar18 + lVar32);
          puVar14 = puVar18;
          if (puVar18 < puVar51) {
            if (*puVar65 == *puVar18) {
              iVar25 = 0;
              puVar65 = (ulong *)((long)puVar55 + 0xc + lVar32);
              puVar14 = (ulong *)((long)puVar55 + 0xc);
              do {
                if (puVar51 <= puVar14) goto LAB_1006fc39c;
                uVar44 = *puVar65;
                uVar67 = *puVar14;
                iVar25 = iVar25 + 8;
                puVar65 = puVar65 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar44 == uVar67);
              uVar67 = uVar67 ^ uVar44;
              uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1;
              uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2;
              uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
              uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 | (uVar67 & 0xffff0000ffff) << 0x10;
              iVar25 = iVar25 + (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
            }
            else {
              uVar67 = *puVar18 ^ *puVar65;
              uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1;
              uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2;
              uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
              uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 | (uVar67 & 0xffff0000ffff) << 0x10;
              iVar25 = (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
            }
          }
          else {
LAB_1006fc39c:
            if (puVar14 < puVar35) {
              if ((uint)*puVar65 == (uint)*puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < puVar30) {
              if (*(short *)puVar65 == *(short *)puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < puVar3) && ((char)*puVar65 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            iVar25 = (int)puVar14 - (int)puVar18;
          }
          uVar23 = iVar25 + 4;
          puVar65 = (ulong *)(ulong)uVar23;
          if (puVar63 < puVar65) {
LAB_1006fc458:
            piVar7[uVar62 * 2] = (int)uVar66 - (uint)bVar12;
            (piVar7 + uVar62 * 2)[1] = uVar23;
            uVar62 = (ulong)((int)uVar62 + 1);
            if ((uVar27 < uVar23) ||
               (puVar63 = puVar65, (ulong *)((long)puVar55 + (long)puVar65) == puVar3))
            goto LAB_1006fd8ac;
          }
        }
      }
LAB_1006fc220:
      uVar66 = uVar66 + 1;
    } while (uVar66 < uVar64);
    *(uint *)(lVar43 + uVar68 * 4) = uVar50;
    if (uVar21 <= uVar10) {
      puVar18 = (ulong *)0x0;
      puVar65 = (ulong *)0x0;
      uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
      iVar25 = local_124;
      do {
        puVar14 = puVar18;
        if (puVar65 <= puVar18) {
          puVar14 = puVar65;
        }
        uVar66 = (ulong)uVar10;
        puVar13 = (ulong *)((long)puVar55 + (long)puVar14);
        if ((long)puVar14 + uVar66 < uVar41) {
          FUN_1006c7460(puVar13,lVar40 + uVar66 + (long)puVar14,puVar3,lVar40 + uVar41,
                        lVar59 + uVar41);
          puVar13 = (ulong *)((long)puVar13 + (long)puVar14);
          lVar43 = lVar40 + uVar66;
          if (uVar41 <= (long)puVar13 + uVar66) {
            lVar43 = lVar59 + uVar66;
          }
        }
        else {
          lVar43 = lVar59 + uVar66;
          puVar15 = (ulong *)(lVar43 + (long)puVar14);
          puVar37 = puVar13;
          if (puVar13 < puVar51) {
            if (*puVar15 == *puVar13) {
              lVar32 = 0;
              puVar37 = (ulong *)((long)(puVar55 + 1) + (long)puVar14);
              puVar15 = (ulong *)((long)puVar14 + lVar59 + 8 + uVar66);
              do {
                if (puVar51 <= puVar37) goto LAB_1006fd0a8;
                uVar64 = *puVar15;
                uVar66 = *puVar37;
                lVar32 = lVar32 + 8;
                puVar37 = puVar37 + 1;
                puVar15 = puVar15 + 1;
              } while (uVar64 == uVar66);
              uVar66 = uVar66 ^ uVar64;
              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
              puVar13 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                 (long)puVar14);
              goto joined_r0x0001006fd1e8;
            }
            uVar66 = *puVar13 ^ *puVar15;
            uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
            uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
            uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
            uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
            uVar66 = (ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
          }
          else {
LAB_1006fd0a8:
            if (puVar37 < puVar35) {
              if ((uint)*puVar15 == (uint)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar15 = (ulong *)((long)puVar15 + 4);
              }
            }
            if (puVar37 < puVar30) {
              if (*(short *)puVar15 == *(short *)puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar15 = (ulong *)((long)puVar15 + 2);
              }
            }
            if ((puVar37 < puVar3) && ((char)*puVar15 == (char)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 1);
            }
            uVar66 = (long)puVar37 - (long)puVar13;
          }
          puVar13 = (ulong *)(uVar66 + (long)puVar14);
        }
joined_r0x0001006fd1e8:
        local_124 = iVar25;
        if (puVar63 < puVar13) {
          local_124 = uVar10 + (int)puVar13;
          if (puVar13 <= (ulong *)(ulong)(iVar25 - uVar10)) {
            local_124 = iVar25;
          }
          piVar7[uVar62 * 2] = (uVar50 + 2) - uVar10;
          (piVar7 + uVar62 * 2)[1] = (int)puVar13;
          uVar62 = (ulong)((int)uVar62 + 1);
          if (((ulong *)0x1000 < puVar13) ||
             (puVar63 = puVar13, (ulong *)((long)puVar55 + (long)puVar13) == puVar3)) break;
        }
        puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar55 + (long)puVar13)) {
          *local_138 = uVar10;
          if (uVar10 <= uVar46) {
            local_138 = &local_94;
            break;
          }
          puVar4 = puVar4 + 1;
          puVar18 = puVar13;
          local_138 = puVar4;
        }
        else {
          *local_130 = uVar10;
          local_130 = puVar4;
          puVar65 = puVar13;
          if (uVar10 <= uVar46) {
            local_130 = &local_94;
            break;
          }
        }
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        uVar10 = *puVar4;
        iVar25 = local_124;
      } while (uVar21 <= uVar10);
    }
    *local_130 = 0;
    *local_138 = 0;
    goto LAB_1006fd8a4;
  }
  if (iVar25 == 5) {
    uVar62 = 0;
    uVar27 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar27) {
      uVar27 = 0xfff;
    }
    uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar48 = ~uVar23;
    lVar59 = *(long *)(param_1 + 8);
    lVar40 = *(long *)(param_1 + 0x10);
    uVar50 = iVar56 - (int)lVar59;
    uVar46 = 0;
    if (uVar48 <= uVar50) {
      uVar46 = uVar50 - uVar48;
    }
    uVar19 = *(uint *)(param_1 + 0x18);
    uVar41 = (ulong)uVar19;
    uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = uVar50 - uVar21;
    if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    uVar21 = uVar2;
    if (uVar2 < 2) {
      uVar21 = 1;
    }
    bVar12 = uVar42 == 0;
    uVar66 = (ulong)bVar12;
    lVar43 = *(long *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0xc4);
    uVar68 = *puVar55 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar10 = *(uint *)(lVar43 + uVar68 * 4);
    lVar36 = *(long *)(param_1 + 0x40);
    local_140 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
    local_138 = local_140 + 1;
    local_124 = uVar50 + 9;
    uVar64 = 3;
    if (bVar12) {
      uVar64 = 4;
    }
    puVar18 = (ulong *)((long)puVar55 + 4);
    puVar63 = puVar29;
    do {
      if (uVar66 == 3) {
        uVar23 = *param_3 - 1;
        uVar34 = *param_3 - 2;
        if (uVar34 < uVar50 - uVar19) goto LAB_1006fc69c;
LAB_1006fc5fc:
        if ((uVar34 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
           (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar55 == *puVar4)) {
          puVar65 = puVar18;
          FUN_1006c7460(puVar18,puVar4 + 1,puVar3,lVar40 + uVar41,lVar59 + uVar41);
          iVar25 = (int)puVar65;
          goto joined_r0x0001006fc71c;
        }
      }
      else {
        uVar23 = param_3[uVar66];
        uVar34 = uVar23 - 1;
        if (uVar50 - uVar19 <= uVar34) goto LAB_1006fc5fc;
LAB_1006fc69c:
        if ((uint)*puVar55 == *(uint *)((long)puVar55 - (ulong)uVar23)) {
          lVar32 = -(ulong)uVar23;
          puVar65 = (ulong *)((long)puVar18 + lVar32);
          puVar14 = puVar18;
          if (puVar18 < puVar51) {
            if (*puVar65 == *puVar18) {
              iVar25 = 0;
              puVar65 = (ulong *)((long)puVar55 + 0xc + lVar32);
              puVar14 = (ulong *)((long)puVar55 + 0xc);
              do {
                if (puVar51 <= puVar14) goto LAB_1006fc73c;
                uVar44 = *puVar65;
                uVar67 = *puVar14;
                iVar25 = iVar25 + 8;
                puVar65 = puVar65 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar44 == uVar67);
              uVar67 = uVar67 ^ uVar44;
              uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1;
              uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2;
              uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
              uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 | (uVar67 & 0xffff0000ffff) << 0x10;
              iVar25 = iVar25 + (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
            }
            else {
              uVar67 = *puVar18 ^ *puVar65;
              uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1;
              uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2;
              uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
              uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 | (uVar67 & 0xffff0000ffff) << 0x10;
              iVar25 = (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
            }
          }
          else {
LAB_1006fc73c:
            if (puVar14 < puVar35) {
              if ((uint)*puVar65 == (uint)*puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < puVar30) {
              if (*(short *)puVar65 == *(short *)puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < puVar3) && ((char)*puVar65 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            iVar25 = (int)puVar14 - (int)puVar18;
          }
joined_r0x0001006fc71c:
          uVar11 = iVar25 + 4;
          uVar69 = ZEXT48((uint)uVar11);
          if (puVar63 < (ulong)uVar69) {
            piVar7[uVar62 * 2] = (int)uVar66 - (uint)bVar12;
            (piVar7 + uVar62 * 2)[1] = uVar11;
            uVar62 = (ulong)((int)uVar62 + 1);
            if ((uVar27 < (uint)uVar11) ||
               (puVar63 = (ulong *)uVar69, (ulong *)((long)puVar55 + uVar69) == puVar3))
            goto LAB_1006fd8ac;
          }
        }
      }
      uVar66 = uVar66 + 1;
    } while (uVar66 < uVar64);
    *(uint *)(lVar43 + uVar68 * 4) = uVar50;
    if (uVar21 <= uVar10) {
      puVar65 = (ulong *)0x0;
      puVar18 = (ulong *)0x0;
      uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
      do {
        puVar14 = puVar65;
        if (puVar18 <= puVar65) {
          puVar14 = puVar18;
        }
        uVar66 = (ulong)uVar10;
        puVar13 = (ulong *)((long)puVar55 + (long)puVar14);
        if ((long)puVar14 + uVar66 < uVar41) {
          FUN_1006c7460(puVar13,lVar40 + uVar66 + (long)puVar14,puVar3,lVar40 + uVar41,
                        lVar59 + uVar41);
          puVar13 = (ulong *)((long)puVar13 + (long)puVar14);
          lVar43 = lVar40 + uVar66;
          if (uVar41 <= (long)puVar13 + uVar66) {
            lVar43 = lVar59 + uVar66;
          }
        }
        else {
          lVar43 = lVar59 + uVar66;
          puVar15 = (ulong *)(lVar43 + (long)puVar14);
          puVar37 = puVar13;
          if (puVar13 < puVar51) {
            if (*puVar15 == *puVar13) {
              lVar32 = 0;
              puVar37 = (ulong *)((long)(puVar55 + 1) + (long)puVar14);
              puVar15 = (ulong *)((long)puVar14 + lVar59 + 8 + uVar66);
              do {
                if (puVar51 <= puVar37) goto LAB_1006fcdd0;
                uVar64 = *puVar15;
                uVar66 = *puVar37;
                lVar32 = lVar32 + 8;
                puVar37 = puVar37 + 1;
                puVar15 = puVar15 + 1;
              } while (uVar64 == uVar66);
              uVar66 = uVar66 ^ uVar64;
              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
              puVar13 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                 (long)puVar14);
              goto joined_r0x0001006fccfc;
            }
            uVar66 = *puVar13 ^ *puVar15;
            uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
            uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
            uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
            uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
            uVar66 = (ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
          }
          else {
LAB_1006fcdd0:
            if (puVar37 < puVar35) {
              if ((uint)*puVar15 == (uint)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar15 = (ulong *)((long)puVar15 + 4);
              }
            }
            if (puVar37 < puVar30) {
              if (*(short *)puVar15 == *(short *)puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar15 = (ulong *)((long)puVar15 + 2);
              }
            }
            if ((puVar37 < puVar3) && ((char)*puVar15 == (char)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 1);
            }
            uVar66 = (long)puVar37 - (long)puVar13;
          }
          puVar13 = (ulong *)(uVar66 + (long)puVar14);
        }
joined_r0x0001006fccfc:
        if (puVar63 < puVar13) {
          iVar25 = uVar10 + (int)puVar13;
          if (puVar13 <= (ulong *)(ulong)(local_124 - uVar10)) {
            iVar25 = local_124;
          }
          piVar7[uVar62 * 2] = (uVar50 + 2) - uVar10;
          (piVar7 + uVar62 * 2)[1] = (int)puVar13;
          uVar62 = (ulong)((int)uVar62 + 1);
          local_124 = iVar25;
          if (((ulong *)0x1000 < puVar13) ||
             (puVar63 = puVar13, (ulong *)((long)puVar55 + (long)puVar13) == puVar3)) break;
        }
        puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar55 + (long)puVar13)) {
          *local_140 = uVar10;
          if (uVar10 <= uVar46) goto LAB_1006fd88c;
          puVar4 = puVar4 + 1;
          puVar65 = puVar13;
          local_140 = puVar4;
        }
        else {
          *local_138 = uVar10;
          local_138 = puVar4;
          puVar18 = puVar13;
          if (uVar10 <= uVar46) goto LAB_1006fd880;
        }
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        uVar10 = *puVar4;
      } while (uVar21 <= uVar10);
    }
    goto LAB_1006fd894;
  }
  uVar62 = 0;
  if (iVar25 != 3) {
    uVar27 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar27) {
      uVar27 = 0xfff;
    }
    uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar48 = ~uVar23;
    lVar59 = *(long *)(param_1 + 8);
    lVar40 = *(long *)(param_1 + 0x10);
    uVar50 = iVar56 - (int)lVar59;
    uVar46 = 0;
    if (uVar48 <= uVar50) {
      uVar46 = uVar50 - uVar48;
    }
    uVar19 = *(uint *)(param_1 + 0x18);
    uVar41 = (ulong)uVar19;
    uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar2 = uVar50 - uVar21;
    if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
      uVar2 = *(uint *)(param_1 + 0x1c);
    }
    uVar21 = uVar2;
    if (uVar2 < 2) {
      uVar21 = 1;
    }
    bVar12 = uVar42 == 0;
    uVar66 = (ulong)bVar12;
    lVar43 = *(long *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0xc4);
    uVar34 = (uint)*puVar55 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
    uVar10 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
    lVar36 = *(long *)(param_1 + 0x40);
    local_140 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
    local_138 = local_140 + 1;
    local_124 = uVar50 + 9;
    uVar64 = 3;
    if (bVar12) {
      uVar64 = 4;
    }
    puVar18 = (ulong *)((long)puVar55 + 4);
    puVar63 = puVar29;
    do {
      if (uVar66 == 3) {
        uVar23 = *param_3 - 1;
        uVar33 = *param_3 - 2;
        if (uVar33 < uVar50 - uVar19) goto LAB_1006fca04;
LAB_1006fc964:
        if ((uVar33 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
           (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar55 == *puVar4)) {
          puVar65 = puVar18;
          FUN_1006c7460(puVar18,puVar4 + 1,puVar3,lVar40 + uVar41,lVar59 + uVar41);
          iVar25 = (int)puVar65;
          goto joined_r0x0001006fcb04;
        }
      }
      else {
        uVar23 = param_3[uVar66];
        uVar33 = uVar23 - 1;
        if (uVar50 - uVar19 <= uVar33) goto LAB_1006fc964;
LAB_1006fca04:
        if ((uint)*puVar55 == *(uint *)((long)puVar55 - (ulong)uVar23)) {
          lVar32 = -(ulong)uVar23;
          puVar65 = (ulong *)((long)puVar18 + lVar32);
          puVar14 = puVar18;
          if (puVar18 < puVar51) {
            if (*puVar65 == *puVar18) {
              iVar25 = 0;
              puVar65 = (ulong *)((long)puVar55 + 0xc + lVar32);
              puVar14 = (ulong *)((long)puVar55 + 0xc);
              do {
                if (puVar51 <= puVar14) goto LAB_1006fcaa4;
                uVar67 = *puVar65;
                uVar68 = *puVar14;
                iVar25 = iVar25 + 8;
                puVar65 = puVar65 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar67 == uVar68);
              uVar68 = uVar68 ^ uVar67;
              uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
              uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
              uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
              uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
              iVar25 = iVar25 + (int)((ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3);
            }
            else {
              uVar68 = *puVar18 ^ *puVar65;
              uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
              uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
              uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
              uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
              iVar25 = (int)((ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3);
            }
          }
          else {
LAB_1006fcaa4:
            if (puVar14 < puVar35) {
              if ((uint)*puVar65 == (uint)*puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 4);
                puVar14 = (ulong *)((long)puVar14 + 4);
              }
            }
            if (puVar14 < puVar30) {
              if (*(short *)puVar65 == *(short *)puVar14) {
                puVar65 = (ulong *)((long)puVar65 + 2);
                puVar14 = (ulong *)((long)puVar14 + 2);
              }
            }
            if ((puVar14 < puVar3) && ((char)*puVar65 == (char)*puVar14)) {
              puVar14 = (ulong *)((long)puVar14 + 1);
            }
            iVar25 = (int)puVar14 - (int)puVar18;
          }
joined_r0x0001006fcb04:
          uVar11 = iVar25 + 4;
          uVar69 = ZEXT48((uint)uVar11);
          if (puVar63 < (ulong)uVar69) {
            piVar7[uVar62 * 2] = (int)uVar66 - (uint)bVar12;
            (piVar7 + uVar62 * 2)[1] = uVar11;
            uVar62 = (ulong)((int)uVar62 + 1);
            if ((uVar27 < (uint)uVar11) ||
               (puVar63 = (ulong *)uVar69, (ulong *)((long)puVar55 + uVar69) == puVar3))
            goto LAB_1006fd8ac;
          }
        }
      }
      uVar66 = uVar66 + 1;
    } while (uVar66 < uVar64);
    *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar50;
    if (uVar21 <= uVar10) {
      puVar65 = (ulong *)0x0;
      puVar18 = (ulong *)0x0;
      uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
      do {
        puVar14 = puVar65;
        if (puVar18 <= puVar65) {
          puVar14 = puVar18;
        }
        uVar66 = (ulong)uVar10;
        puVar13 = (ulong *)((long)puVar55 + (long)puVar14);
        if ((long)puVar14 + uVar66 < uVar41) {
          FUN_1006c7460(puVar13,lVar40 + uVar66 + (long)puVar14,puVar3,lVar40 + uVar41,
                        lVar59 + uVar41);
          puVar13 = (ulong *)((long)puVar13 + (long)puVar14);
          lVar43 = lVar40 + uVar66;
          if (uVar41 <= (long)puVar13 + uVar66) {
            lVar43 = lVar59 + uVar66;
          }
        }
        else {
          lVar43 = lVar59 + uVar66;
          puVar15 = (ulong *)(lVar43 + (long)puVar14);
          puVar37 = puVar13;
          if (puVar13 < puVar51) {
            if (*puVar15 == *puVar13) {
              lVar32 = 0;
              puVar37 = (ulong *)((long)(puVar55 + 1) + (long)puVar14);
              puVar15 = (ulong *)((long)puVar14 + lVar59 + 8 + uVar66);
              do {
                if (puVar51 <= puVar37) goto LAB_1006fd3a4;
                uVar64 = *puVar15;
                uVar66 = *puVar37;
                lVar32 = lVar32 + 8;
                puVar37 = puVar37 + 1;
                puVar15 = puVar15 + 1;
              } while (uVar64 == uVar66);
              uVar66 = uVar66 ^ uVar64;
              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
              puVar13 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                 (long)puVar14);
              goto joined_r0x0001006fd2d0;
            }
            uVar66 = *puVar13 ^ *puVar15;
            uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
            uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
            uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
            uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
            uVar66 = (ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
          }
          else {
LAB_1006fd3a4:
            if (puVar37 < puVar35) {
              if ((uint)*puVar15 == (uint)*puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 4);
                puVar15 = (ulong *)((long)puVar15 + 4);
              }
            }
            if (puVar37 < puVar30) {
              if (*(short *)puVar15 == *(short *)puVar37) {
                puVar37 = (ulong *)((long)puVar37 + 2);
                puVar15 = (ulong *)((long)puVar15 + 2);
              }
            }
            if ((puVar37 < puVar3) && ((char)*puVar15 == (char)*puVar37)) {
              puVar37 = (ulong *)((long)puVar37 + 1);
            }
            uVar66 = (long)puVar37 - (long)puVar13;
          }
          puVar13 = (ulong *)(uVar66 + (long)puVar14);
        }
joined_r0x0001006fd2d0:
        if (puVar63 < puVar13) {
          iVar25 = uVar10 + (int)puVar13;
          if (puVar13 <= (ulong *)(ulong)(local_124 - uVar10)) {
            iVar25 = local_124;
          }
          piVar7[uVar62 * 2] = (uVar50 + 2) - uVar10;
          (piVar7 + uVar62 * 2)[1] = (int)puVar13;
          uVar62 = (ulong)((int)uVar62 + 1);
          local_124 = iVar25;
          if (((ulong *)0x1000 < puVar13) ||
             (puVar63 = puVar13, (ulong *)((long)puVar55 + (long)puVar13) == puVar3)) break;
        }
        puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + (long)puVar13) < *(byte *)((long)puVar55 + (long)puVar13)) {
          *local_140 = uVar10;
          if (uVar10 <= uVar46) goto LAB_1006fd88c;
          puVar4 = puVar4 + 1;
          puVar65 = puVar13;
          local_140 = puVar4;
        }
        else {
          *local_138 = uVar10;
          local_138 = puVar4;
          puVar18 = puVar13;
          if (uVar10 <= uVar46) goto LAB_1006fd880;
        }
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        uVar10 = *puVar4;
      } while (uVar21 <= uVar10);
    }
    goto LAB_1006fd894;
  }
  uVar27 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar27) {
    uVar27 = 0xfff;
  }
  uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar48 = ~uVar23;
  lVar59 = *(long *)(param_1 + 8);
  lVar40 = *(long *)(param_1 + 0x10);
  uVar50 = (uint)((long)puVar55 - lVar59);
  uVar46 = 0;
  if (uVar48 <= uVar50) {
    uVar46 = uVar50 - uVar48;
  }
  uVar19 = *(uint *)(param_1 + 0x18);
  uVar41 = (ulong)uVar19;
  uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar2 = uVar50 - uVar21;
  if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  uVar21 = uVar2;
  if (uVar2 < 2) {
    uVar21 = 1;
  }
  bVar12 = uVar42 == 0;
  uVar66 = (ulong)bVar12;
  lVar43 = *(long *)(param_1 + 0x30);
  uVar6 = *(uint *)(param_1 + 0xc4);
  uVar34 = (uint)*puVar55 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
  uVar10 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
  lVar36 = *(long *)(param_1 + 0x40);
  local_138 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
  local_140 = local_138 + 1;
  iVar25 = uVar50 + 9;
  uVar64 = 3;
  if (bVar12) {
    uVar64 = 4;
  }
  puVar18 = (ulong *)((long)puVar55 + 3);
  local_e0 = puVar29;
  do {
    if (uVar66 == 3) {
      uVar23 = *param_3 - 1;
      uVar33 = *param_3 - 2;
      if (uVar33 < uVar50 - uVar19) goto LAB_1006fbf60;
LAB_1006fbec4:
      if ((uVar33 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
         (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)),
         ((*puVar4 ^ (uint)*puVar55) & 0xffffff) == 0)) {
        puVar63 = puVar18;
        FUN_1006c7460(puVar18,(long)puVar4 + 3,puVar3,lVar40 + uVar41,lVar59 + uVar41);
        iVar24 = (int)puVar63;
        goto joined_r0x0001006fc09c;
      }
    }
    else {
      uVar23 = param_3[uVar66];
      uVar33 = uVar23 - 1;
      if (uVar50 - uVar19 <= uVar33) goto LAB_1006fbec4;
LAB_1006fbf60:
      if (((*(uint *)((long)puVar55 - (ulong)uVar23) ^ (uint)*puVar55) & 0xffffff) == 0) {
        lVar32 = -(ulong)uVar23;
        puVar63 = (ulong *)((long)puVar18 + lVar32);
        puVar65 = puVar18;
        if (puVar18 < puVar51) {
          if (*puVar63 == *puVar18) {
            iVar24 = 0;
            puVar63 = (ulong *)((long)puVar55 + 0xb + lVar32);
            puVar65 = (ulong *)((long)puVar55 + 0xb);
            do {
              if (puVar51 <= puVar65) goto LAB_1006fc038;
              uVar67 = *puVar63;
              uVar68 = *puVar65;
              iVar24 = iVar24 + 8;
              puVar63 = puVar63 + 1;
              puVar65 = puVar65 + 1;
            } while (uVar67 == uVar68);
            uVar68 = uVar68 ^ uVar67;
            uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
            uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
            uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
            uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
            iVar24 = iVar24 + (int)((ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3);
          }
          else {
            uVar68 = *puVar18 ^ *puVar63;
            uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
            uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
            uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
            uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
            iVar24 = (int)((ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3);
          }
        }
        else {
LAB_1006fc038:
          if (puVar65 < puVar35) {
            if ((uint)*puVar63 == (uint)*puVar65) {
              puVar63 = (ulong *)((long)puVar63 + 4);
              puVar65 = (ulong *)((long)puVar65 + 4);
            }
          }
          if (puVar65 < puVar30) {
            if (*(short *)puVar63 == *(short *)puVar65) {
              puVar63 = (ulong *)((long)puVar63 + 2);
              puVar65 = (ulong *)((long)puVar65 + 2);
            }
          }
          if ((puVar65 < puVar3) && ((char)*puVar63 == (char)*puVar65)) {
            puVar65 = (ulong *)((long)puVar65 + 1);
          }
          iVar24 = (int)puVar65 - (int)puVar18;
        }
joined_r0x0001006fc09c:
        uVar11 = iVar24 + 3;
        uVar69 = ZEXT48((uint)uVar11);
        if (local_e0 < (ulong)uVar69) {
          piVar7[uVar62 * 2] = (int)uVar66 - (uint)bVar12;
          (piVar7 + uVar62 * 2)[1] = uVar11;
          uVar62 = (ulong)((int)uVar62 + 1);
          if ((uVar27 < (uint)uVar11) ||
             (local_e0 = (ulong *)uVar69, (ulong *)((long)puVar55 + uVar69) == puVar3))
          goto LAB_1006fd8ac;
        }
      }
    }
    uVar66 = uVar66 + 1;
  } while (uVar66 < uVar64);
  if ((ulong *)0x2 < local_e0) {
LAB_1006fd4e8:
    *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar50;
    if (uVar21 <= uVar10) {
      puVar63 = (ulong *)0x0;
      puVar18 = (ulong *)0x0;
      uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
      iVar24 = iVar25;
      do {
        puVar65 = puVar63;
        if (puVar18 <= puVar63) {
          puVar65 = puVar18;
        }
        uVar66 = (ulong)uVar10;
        puVar14 = (ulong *)((long)puVar55 + (long)puVar65);
        if ((long)puVar65 + uVar66 < uVar41) {
          FUN_1006c7460(puVar14,lVar40 + uVar66 + (long)puVar65,puVar3,lVar40 + uVar41,
                        lVar59 + uVar41);
          puVar14 = (ulong *)((long)puVar14 + (long)puVar65);
          lVar43 = lVar40 + uVar66;
          if (uVar41 <= (long)puVar14 + uVar66) {
            lVar43 = lVar59 + uVar66;
          }
        }
        else {
          lVar43 = lVar59 + uVar66;
          puVar13 = (ulong *)(lVar43 + (long)puVar65);
          puVar15 = puVar14;
          if (puVar14 < puVar51) {
            if (*puVar13 == *puVar14) {
              lVar32 = 0;
              puVar15 = (ulong *)((long)(puVar55 + 1) + (long)puVar65);
              puVar13 = (ulong *)((long)puVar65 + lVar59 + 8 + uVar66);
              do {
                if (puVar51 <= puVar15) goto LAB_1006fd6c0;
                uVar64 = *puVar13;
                uVar66 = *puVar15;
                lVar32 = lVar32 + 8;
                puVar15 = puVar15 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar64 == uVar66);
              uVar66 = uVar66 ^ uVar64;
              uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
              uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
              uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
              uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
              puVar14 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3) +
                                 (long)puVar65);
              goto joined_r0x0001006fd5f0;
            }
            uVar66 = *puVar14 ^ *puVar13;
            uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
            uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
            uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
            uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
            uVar66 = (ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3;
          }
          else {
LAB_1006fd6c0:
            if (puVar15 < puVar35) {
              if ((uint)*puVar13 == (uint)*puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar13 = (ulong *)((long)puVar13 + 4);
              }
            }
            if (puVar15 < puVar30) {
              if (*(short *)puVar13 == *(short *)puVar15) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar13 = (ulong *)((long)puVar13 + 2);
              }
            }
            if ((puVar15 < puVar3) && ((char)*puVar13 == (char)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 1);
            }
            uVar66 = (long)puVar15 - (long)puVar14;
          }
          puVar14 = (ulong *)(uVar66 + (long)puVar65);
        }
joined_r0x0001006fd5f0:
        iVar25 = iVar24;
        if (local_e0 < puVar14) {
          iVar25 = uVar10 + (int)puVar14;
          if (puVar14 <= (ulong *)(ulong)(iVar24 - uVar10)) {
            iVar25 = iVar24;
          }
          piVar7[uVar62 * 2] = (uVar50 + 2) - uVar10;
          (piVar7 + uVar62 * 2)[1] = (int)puVar14;
          uVar62 = (ulong)((int)uVar62 + 1);
          if (((ulong *)0x1000 < puVar14) ||
             (local_e0 = puVar14, (ulong *)((long)puVar55 + (long)puVar14) == puVar3)) break;
        }
        puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
        if (*(byte *)(lVar43 + (long)puVar14) < *(byte *)((long)puVar55 + (long)puVar14)) {
          *local_138 = uVar10;
          if (uVar10 <= uVar46) {
            local_138 = &local_94;
            break;
          }
          puVar4 = puVar4 + 1;
          puVar63 = puVar14;
          local_138 = puVar4;
        }
        else {
          *local_140 = uVar10;
          local_140 = puVar4;
          puVar18 = puVar14;
          if (uVar10 <= uVar46) {
            local_140 = &local_94;
            break;
          }
        }
        if (uVar27 == 0) break;
        uVar27 = uVar27 - 1;
        uVar10 = *puVar4;
        iVar24 = iVar25;
      } while (uVar21 <= uVar10);
    }
    *local_140 = 0;
    *local_138 = 0;
    *(int *)(param_1 + 0x24) = iVar25 + -8;
    iVar25 = (int)uVar62;
    goto joined_r0x0001006fd8b8;
  }
  lVar32 = *(long *)(param_1 + 0x38);
  uVar66 = *puVar55;
  uVar23 = 0x20 - *(int *)(param_1 + 0x28);
  if (local_21c < uVar50) {
    uVar64 = (ulong)local_21c;
    do {
      *(int *)(lVar32 + (ulong)((uint)(*(int *)(lVar59 + uVar64) * 0x35a7bd00) >>
                               (ulong)(uVar23 & 0x1f)) * 4) = (int)uVar64;
      uVar64 = uVar64 + 1;
    } while (((long)puVar55 - lVar59 & 0xffffffffU) != uVar64);
  }
  uVar23 = *(uint *)(lVar32 + (ulong)((uint)uVar66 * 0x35a7bd00 >> (ulong)(uVar23 & 0x1f)) * 4);
  uVar66 = (ulong)uVar23;
  local_21c = uVar50;
  if (uVar23 < uVar21 || uVar50 - uVar23 >> 0x12 != 0) goto LAB_1006fd4e8;
  if (uVar23 < uVar19) {
    puVar18 = puVar55;
    FUN_1006c7460(puVar55,lVar40 + uVar66,puVar3,lVar40 + uVar41,lVar59 + uVar41);
  }
  else {
    puVar63 = (ulong *)(lVar59 + uVar66);
    puVar18 = puVar55;
    if (puVar55 < puVar51) {
      if (*puVar63 == *puVar55) {
        lVar32 = 0;
        puVar63 = (ulong *)(lVar59 + uVar66);
        do {
          puVar63 = puVar63 + 1;
          puVar18 = puVar18 + 1;
          if (puVar51 <= puVar18) goto LAB_100700664;
          lVar32 = lVar32 + 8;
        } while (*puVar63 == *puVar18);
        uVar66 = *puVar18 ^ *puVar63;
        uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
        uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
        uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
        uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
        puVar18 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3));
      }
      else {
        uVar66 = *puVar55 ^ *puVar63;
        uVar66 = (uVar66 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar66 & 0x5555555555555555) << 1;
        uVar66 = (uVar66 & 0xcccccccccccccccc) >> 2 | (uVar66 & 0x3333333333333333) << 2;
        uVar66 = (uVar66 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar66 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar66 = (uVar66 & 0xff00ff00ff00ff00) >> 8 | (uVar66 & 0xff00ff00ff00ff) << 8;
        uVar66 = (uVar66 & 0xffff0000ffff0000) >> 0x10 | (uVar66 & 0xffff0000ffff) << 0x10;
        puVar18 = (ulong *)((ulong)LZCOUNT(uVar66 >> 0x20 | uVar66 << 0x20) >> 3);
      }
    }
    else {
LAB_100700664:
      if (puVar18 < puVar35) {
        if ((uint)*puVar63 == (uint)*puVar18) {
          puVar18 = (ulong *)((long)puVar18 + 4);
          puVar63 = (ulong *)((long)puVar63 + 4);
        }
      }
      if (puVar18 < puVar30) {
        if (*(short *)puVar63 == *(short *)puVar18) {
          puVar18 = (ulong *)((long)puVar18 + 2);
          puVar63 = (ulong *)((long)puVar63 + 2);
        }
      }
      if ((puVar18 < puVar3) && ((char)*puVar63 == (char)*puVar18)) {
        puVar18 = (ulong *)((long)puVar18 + 1);
      }
      puVar18 = (ulong *)((long)puVar18 - (long)puVar55);
    }
  }
  if (puVar18 < (ulong *)0x3) goto LAB_1006fd4e8;
  *piVar7 = (uVar50 - uVar23) + 2;
  piVar7[1] = (int)puVar18;
  if (puVar18 <= (ulong *)(ulong)uVar27 && (ulong *)((long)puVar55 + (long)puVar18) != puVar3) {
    uVar62 = 1;
    local_e0 = puVar18;
    goto LAB_1006fd4e8;
  }
  uVar62 = 1;
  *(uint *)(param_1 + 0x24) = uVar50 + 1;
  goto LAB_1006fd8bc;
LAB_1006fd880:
  local_138 = &local_94;
  goto LAB_1006fd894;
LAB_1006fd88c:
  local_140 = &local_94;
LAB_1006fd894:
  *local_138 = 0;
  *local_140 = 0;
LAB_1006fd8a4:
  *(int *)(param_1 + 0x24) = local_124 + -8;
LAB_1006fd8ac:
  iVar25 = (int)uVar62;
joined_r0x0001006fd8b8:
  if (iVar25 == 0) {
LAB_1006fbce0:
    puVar55 = (ulong *)((long)puVar55 + 1);
    goto joined_r0x0001006fbcf0;
  }
LAB_1006fd8bc:
  piVar8[4] = *param_3;
  piVar8[5] = param_3[1];
  piVar8[6] = param_3[2];
  piVar8[2] = 0;
  piVar8[3] = uVar42;
  lVar59 = lVar28;
  piVar52 = piVar1;
  if (uVar42 == 0) {
    iVar25 = 0;
    iVar24 = *(int *)(param_1 + 0x98);
    if (iVar24 != 0) goto LAB_1006fd9f4;
LAB_1006fda50:
    uVar27 = (uint)(byte)(&DAT_10084fdf4)[uVar61 & 0xffffffff];
LAB_1006fda5c:
    iVar25 = ((int)LZCOUNT((*(int **)(param_1 + 0x50))[uVar27] + 1) << 8 ^ 0xffffe0ffU) +
             (((uint)LZCOUNT(**(int **)(param_1 + 0x50) + 1) ^ 0x1f) +
             *(int *)(&DAT_10084fd64 + (ulong)uVar27 * 4)) * 0x100 + iVar25 + 1;
    *piVar8 = iVar25;
    piVar16 = piVar7 + (ulong)((int)uVar62 - 1) * 2;
    uVar27 = piVar16[1];
    if (uVar5 < uVar27) goto LAB_1006fdac0;
LAB_1006fdacc:
    iVar24 = *(int *)(param_1 + 0x8c) +
             ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
LAB_1006fdaf8:
    do {
      *piVar52 = 0x40000000;
      lVar59 = lVar59 + -1;
      piVar52 = piVar52 + 7;
    } while (lVar59 != 0);
    uVar61 = 0;
    uVar41 = (ulong)uVar22;
    do {
      uVar27 = piVar7[uVar61 * 2];
      uVar46 = (piVar7 + uVar61 * 2)[1];
      if (uVar27 < 3) {
        uVar23 = uVar27 + (uVar42 == 0);
        if (uVar23 == 0) {
          iVar49 = *param_3;
          iVar53 = param_3[1];
          piVar52 = param_3 + 2;
        }
        else {
          if (uVar23 == 3) {
            iVar53 = *param_3;
            iVar49 = iVar53 + -1;
          }
          else {
            iVar49 = param_3[uVar23];
            iVar53 = *param_3;
          }
          lVar59 = 8;
          if (uVar23 != 1) {
            lVar59 = 4;
          }
          piVar52 = (int *)((long)param_3 + lVar59);
        }
      }
      else {
        iVar53 = *param_3;
        iVar49 = uVar27 - 2;
        piVar52 = param_3 + 1;
      }
      if ((uint)uVar41 <= uVar46) {
        iVar26 = *piVar52;
        uVar23 = (uint)LZCOUNT(uVar27 + 1) ^ 0x1f;
        iVar57 = uVar23 * 0x200 + -0x25cd;
        if (uVar23 < 0x14) {
          iVar57 = 0x33;
        }
        do {
          iVar39 = (int)uVar41;
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar17 = uVar23 * 0x100 + 0x1000 + ((int)LZCOUNT(iVar39 + -2) << 8 ^ 0x1f00U);
          }
          else {
            uVar48 = iVar39 - 3;
            if (uVar48 < 0x80) {
              uVar48 = (uint)(byte)(&DAT_10084ff08)[uVar48];
            }
            else {
              uVar48 = 0x43 - (int)LZCOUNT(uVar48);
            }
            iVar17 = ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar48 * 4) + 1) << 8
                     ^ 0xffffe0ffU) +
                     iVar57 + *(int *)(param_1 + 0x94) +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar23 * 4) + 1) << 8
                     ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                     (*(int *)(&DAT_10084fe34 + (ulong)uVar48 * 4) + uVar23) * 0x100 + 2;
          }
          piVar52 = piVar8 + uVar41 * 7;
          piVar52[2] = iVar39;
          piVar52[3] = uVar42;
          *piVar52 = iVar24 + iVar25 + iVar17;
          piVar52[1] = uVar27;
          *(ulong *)(piVar52 + 4) = CONCAT44(iVar53,iVar49);
          piVar52[6] = iVar26;
          uVar41 = (ulong)(iVar39 + 1U);
        } while (iVar39 + 1U <= uVar46);
      }
      uVar61 = uVar61 + 1;
    } while (uVar61 != uVar62);
    uVar27 = (int)uVar41 - 1;
    uVar62 = (ulong)uVar27;
    uVar61 = uVar62;
    if (uVar27 != 0) {
      uVar41 = 1;
LAB_1006fdcd4:
      iVar56 = iVar56 + 1;
      iVar25 = (int)uVar41;
      piVar52 = piVar8 + (ulong)(iVar25 - 1) * 7;
      if (piVar52[2] == 0) {
        uVar27 = piVar52[3] + 1;
      }
      else {
        uVar27 = 1;
      }
      puVar18 = (ulong *)((long)puVar55 + uVar41);
      iVar24 = *piVar52;
      if (*(int *)(param_1 + 0xa8) == 2) {
        iVar24 = iVar24 + 0x800;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006fdd58;
        if (uVar27 < 0x40) goto LAB_1006fddc4;
LAB_1006fdd24:
        uVar42 = 0x32 - (int)LZCOUNT(uVar27);
        if (0x3f < uVar27 - 1) goto LAB_1006fdddc;
LAB_1006fdd3c:
        uVar46 = (uint)(byte)(&DAT_10084fdf4)[uVar27 - 1];
LAB_1006fdde8:
        iVar24 = iVar24 + *(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar42 * 4) * 0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar42 * 4) + 1)
                           << 8 ^ 0xffffe0ffU) + 1 +
                          ~*(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar46 * 4) * -0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar46 * 4) + 1)
                           << 8 ^ 0x1f01U);
        piVar16 = piVar8 + uVar41 * 7;
        iVar49 = *piVar16;
        if (iVar24 <= iVar49) goto LAB_1006fde5c;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 1) {
          iVar24 = (*(int *)(param_1 + 0x88) -
                   ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x48) +
                                         (ulong)*(byte *)((long)puVar18 - 1) * 4) + 1) << 8 ^
                   0x1f00U)) + iVar24;
          if (0x3f < uVar27) goto LAB_1006fdd24;
LAB_1006fddc4:
          uVar42 = (uint)(byte)(&DAT_10084fdf4)[uVar27];
          if (uVar27 - 1 < 0x40) goto LAB_1006fdd3c;
LAB_1006fdddc:
          uVar46 = 0x32 - (int)LZCOUNT(uVar27 - 1);
          goto LAB_1006fdde8;
        }
        iVar24 = iVar24 + 0x600;
LAB_1006fdd58:
        iVar24 = iVar24 + ((int)LZCOUNT(uVar27 + 1) << 8 ^ 0x1f00U) +
                          ((int)LZCOUNT(uVar27) << 8 ^ 0xffffe0ffU) + 1;
        piVar16 = piVar8 + uVar41 * 7;
        iVar49 = *piVar16;
        if (iVar24 <= iVar49) {
LAB_1006fde5c:
          iVar49 = iVar24;
          piVar16[2] = 0;
          piVar16[3] = uVar27;
          *piVar16 = iVar49;
          piVar16[1] = 0;
          *(undefined8 *)(piVar16 + 4) = *(undefined8 *)(piVar52 + 4);
          piVar16[6] = piVar52[6];
        }
      }
      if (puVar60 < puVar18) {
        uVar66 = (ulong)(iVar25 + 1);
        goto LAB_1006fdcc4;
      }
      uVar61 = uVar41;
      if (iVar25 != (int)uVar62) {
        uVar66 = (ulong)(iVar25 + 1U);
        if (piVar8[uVar66 * 7] <= iVar49 + 0x80) goto LAB_1006fdcc4;
        iVar24 = piVar16[2];
        if (iVar24 == 0) {
          uVar42 = piVar16[3];
          if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006fded0;
LAB_1006fe330:
          iVar53 = *(int *)(param_1 + 0x8c) +
                   ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
          lVar59 = *(long *)(param_1 + 8);
          uVar61 = (ulong)*(uint *)(param_1 + 0x24);
          puVar63 = (ulong *)(lVar59 + uVar61);
        }
        else {
          uVar42 = 0;
          if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006fe330;
LAB_1006fded0:
          iVar53 = 0;
          lVar59 = *(long *)(param_1 + 8);
          uVar61 = (ulong)*(uint *)(param_1 + 0x24);
          puVar63 = (ulong *)(lVar59 + uVar61);
        }
        if (puVar18 < puVar63) goto LAB_1006fdcc4;
        iVar57 = *(int *)(param_1 + 200);
        iVar26 = (int)puVar18;
        uVar46 = iVar26 - (int)lVar59;
        uVar27 = (uint)uVar61;
        while (uVar27 < uVar46) {
          lVar40 = param_1;
          FUN_100705148(param_1,lVar59 + uVar61,puVar3,iVar57,1);
          uVar27 = (int)lVar40 + (int)uVar61;
          uVar61 = (ulong)uVar27;
        }
        piVar52 = piVar16 + 4;
        *(uint *)(param_1 + 0x24) = uVar46;
        if (iVar57 - 6U < 2) {
          uVar61 = 0;
          uVar27 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar27) {
            uVar27 = 0xfff;
          }
          uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar48 = ~uVar23;
          lVar59 = *(long *)(param_1 + 8);
          lVar40 = *(long *)(param_1 + 0x10);
          uVar50 = iVar26 - (int)lVar59;
          uVar46 = 0;
          if (uVar48 <= uVar50) {
            uVar46 = uVar50 - uVar48;
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          uVar66 = (ulong)uVar19;
          uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar2 = uVar50 - uVar21;
          if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
            uVar2 = *(uint *)(param_1 + 0x1c);
          }
          uVar21 = uVar2;
          if (uVar2 < 2) {
            uVar21 = 1;
          }
          bVar12 = iVar24 != 0;
          uVar64 = (ulong)bVar12;
          puVar63 = (ulong *)((long)puVar18 + 4);
          lVar43 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0xc4);
          uVar67 = *puVar18 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar10 = *(uint *)(lVar43 + uVar67 * 4);
          lVar36 = *(long *)(param_1 + 0x40);
          local_160 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
          local_168 = local_160 + 1;
          iVar57 = uVar50 + 9;
          uVar68 = 3;
          if (bVar12) {
            uVar68 = 4;
          }
          puVar65 = (ulong *)((long)puVar55 + uVar41 + 0xc);
          puVar14 = puVar29;
          do {
            if (uVar64 == 3) {
              uVar23 = *piVar52 - 1;
              uVar34 = *piVar52 - 2;
              if (uVar34 < uVar50 - uVar19) goto LAB_1006fe58c;
LAB_1006fe4d0:
              if ((uVar34 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
                 (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar18 == *puVar4))
              {
                puVar13 = puVar63;
                FUN_1006c7460(puVar63,puVar4 + 1,puVar3,lVar40 + uVar66,lVar59 + uVar66);
                iVar26 = (int)puVar13;
                goto joined_r0x0001006fe610;
              }
            }
            else {
              uVar23 = piVar52[uVar64];
              uVar34 = uVar23 - 1;
              if (uVar50 - uVar19 <= uVar34) goto LAB_1006fe4d0;
LAB_1006fe58c:
              if ((uint)*puVar18 == *(uint *)((long)puVar18 - (ulong)uVar23)) {
                lVar32 = -(ulong)uVar23;
                puVar13 = (ulong *)((long)puVar63 + lVar32);
                puVar15 = puVar63;
                if (puVar63 < puVar51) {
                  if (*puVar13 == *puVar63) {
                    iVar26 = 0;
                    puVar13 = (ulong *)((long)puVar65 + lVar32);
                    puVar15 = puVar65;
                    do {
                      if (puVar51 <= puVar15) goto joined_r0x0001006fe638;
                      uVar45 = *puVar13;
                      uVar44 = *puVar15;
                      iVar26 = iVar26 + 8;
                      puVar13 = puVar13 + 1;
                      puVar15 = puVar15 + 1;
                    } while (uVar45 == uVar44);
                    uVar44 = uVar44 ^ uVar45;
                    uVar44 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1
                    ;
                    uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2
                    ;
                    uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
                    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar44 & 0xffff0000ffff) << 0x10;
                    iVar26 = iVar26 + (int)((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3);
                  }
                  else {
                    uVar44 = *puVar63 ^ *puVar13;
                    uVar44 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1
                    ;
                    uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2
                    ;
                    uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
                    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar44 & 0xffff0000ffff) << 0x10;
                    iVar26 = (int)((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006fe638:
                  if (puVar15 < puVar35) {
                    if (*(uint *)puVar13 == *(uint *)puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar15 < puVar30) {
                    if ((short)*puVar13 == (short)*puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                  if ((puVar15 < puVar3) && ((char)*puVar13 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  iVar26 = (int)puVar15 - (int)puVar63;
                }
joined_r0x0001006fe610:
                uVar11 = iVar26 + 4;
                uVar69 = ZEXT48((uint)uVar11);
                if (puVar14 < (ulong)uVar69) {
                  piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar12;
                  (piVar7 + uVar61 * 2)[1] = uVar11;
                  uVar23 = (int)uVar61 + 1;
                  uVar61 = (ulong)uVar23;
                  if ((uVar27 < (uint)uVar11) ||
                     (puVar14 = (ulong *)uVar69, (ulong *)((long)puVar18 + uVar69) == puVar3))
                  goto LAB_1006ffaf8;
                }
              }
            }
            uVar23 = (uint)uVar61;
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar68);
          *(uint *)(lVar43 + uVar67 * 4) = uVar50;
          if (uVar21 <= uVar10) {
            puVar65 = (ulong *)0x0;
            puVar63 = (ulong *)0x0;
            uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
            iVar26 = iVar57;
            do {
              puVar13 = puVar65;
              if (puVar63 <= puVar65) {
                puVar13 = puVar63;
              }
              uVar64 = (ulong)uVar10;
              puVar15 = (ulong *)((long)puVar18 + (long)puVar13);
              if ((long)puVar13 + uVar64 < uVar66) {
                FUN_1006c7460(puVar15,lVar40 + uVar64 + (long)puVar13,puVar3,lVar40 + uVar66,
                              lVar59 + uVar66);
                puVar15 = (ulong *)((long)puVar15 + (long)puVar13);
                lVar43 = lVar40 + uVar64;
                if (uVar66 <= (long)puVar15 + uVar64) {
                  lVar43 = lVar59 + uVar64;
                }
              }
              else {
                lVar43 = lVar59 + uVar64;
                puVar37 = (ulong *)(lVar43 + (long)puVar13);
                puVar38 = puVar15;
                if (puVar15 < puVar51) {
                  if (*puVar37 == *puVar15) {
                    lVar32 = 0;
                    do {
                      puVar37 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                      if (puVar51 <= puVar37) {
                        puVar37 = (ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                        puVar38 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                        goto joined_r0x0001006fe908;
                      }
                      uVar67 = *(ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                      uVar68 = *puVar37;
                      lVar32 = lVar32 + 8;
                    } while (uVar67 == uVar68);
                    uVar68 = uVar68 ^ uVar67;
                    uVar64 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >>
                                                 3) + (long)puVar13);
                  }
                  else {
                    uVar64 = *puVar15 ^ *puVar37;
                    uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3) +
                                       (long)puVar13);
                  }
                }
                else {
joined_r0x0001006fe908:
                  if (puVar38 < puVar35) {
                    if (*(uint *)puVar37 == *(uint *)puVar38) {
                      puVar38 = (ulong *)((long)puVar38 + 4);
                      puVar37 = (ulong *)((long)puVar37 + 4);
                    }
                  }
                  if (puVar38 < puVar30) {
                    if ((short)*puVar37 == (short)*puVar38) {
                      puVar38 = (ulong *)((long)puVar38 + 2);
                      puVar37 = (ulong *)((long)puVar37 + 2);
                    }
                  }
                  if ((puVar38 < puVar3) && ((char)*puVar37 == (char)*puVar38)) {
                    puVar38 = (ulong *)((long)puVar38 + 1);
                  }
                  puVar15 = (ulong *)(((long)puVar38 - (long)puVar15) + (long)puVar13);
                }
              }
              iVar57 = iVar26;
              if (puVar14 < puVar15) {
                iVar57 = uVar10 + (int)puVar15;
                if (puVar15 <= (ulong *)(ulong)(iVar26 - uVar10)) {
                  iVar57 = iVar26;
                }
                piVar7[uVar61 * 2] = (uVar50 + 2) - uVar10;
                (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                uVar23 = (int)uVar61 + 1;
                uVar61 = (ulong)uVar23;
                if (((ulong *)0x1000 < puVar15) ||
                   (puVar14 = puVar15, (ulong *)((long)puVar18 + (long)puVar15) == puVar3)) break;
              }
              uVar23 = (uint)uVar61;
              puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
              if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar18 + (long)puVar15)) {
                *local_160 = uVar10;
                if (uVar10 <= uVar46) goto LAB_1006ff8e8;
                puVar4 = puVar4 + 1;
                puVar65 = puVar15;
                local_160 = puVar4;
              }
              else {
                *local_168 = uVar10;
                local_168 = puVar4;
                puVar63 = puVar15;
                if (uVar10 <= uVar46) goto LAB_1006ff8dc;
              }
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              uVar10 = *puVar4;
              iVar26 = iVar57;
            } while (uVar21 <= uVar10);
          }
          goto LAB_1006ff8f0;
        }
        if (iVar57 == 5) {
          uVar61 = 0;
          uVar27 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar27) {
            uVar27 = 0xfff;
          }
          uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar48 = ~uVar23;
          lVar59 = *(long *)(param_1 + 8);
          lVar40 = *(long *)(param_1 + 0x10);
          uVar50 = iVar26 - (int)lVar59;
          uVar46 = 0;
          if (uVar48 <= uVar50) {
            uVar46 = uVar50 - uVar48;
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          uVar66 = (ulong)uVar19;
          uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar2 = uVar50 - uVar21;
          if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
            uVar2 = *(uint *)(param_1 + 0x1c);
          }
          uVar21 = uVar2;
          if (uVar2 < 2) {
            uVar21 = 1;
          }
          bVar12 = iVar24 != 0;
          uVar64 = (ulong)bVar12;
          puVar63 = (ulong *)((long)puVar18 + 4);
          lVar43 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0xc4);
          uVar67 = *puVar18 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar10 = *(uint *)(lVar43 + uVar67 * 4);
          lVar36 = *(long *)(param_1 + 0x40);
          local_160 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
          local_170 = local_160 + 1;
          iVar57 = uVar50 + 9;
          uVar68 = 3;
          if (bVar12) {
            uVar68 = 4;
          }
          puVar65 = (ulong *)((long)puVar55 + uVar41 + 0xc);
          puVar14 = puVar29;
          do {
            if (uVar64 == 3) {
              uVar23 = *piVar52 - 1;
              uVar34 = *piVar52 - 2;
              if (uVar34 < uVar50 - uVar19) goto LAB_1006fec78;
LAB_1006febbc:
              if ((uVar34 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
                 (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar18 == *puVar4))
              {
                puVar13 = puVar63;
                FUN_1006c7460(puVar63,puVar4 + 1,puVar3,lVar40 + uVar66,lVar59 + uVar66);
                iVar26 = (int)puVar13;
                goto joined_r0x0001006fecfc;
              }
            }
            else {
              uVar23 = piVar52[uVar64];
              uVar34 = uVar23 - 1;
              if (uVar50 - uVar19 <= uVar34) goto LAB_1006febbc;
LAB_1006fec78:
              if ((uint)*puVar18 == *(uint *)((long)puVar18 - (ulong)uVar23)) {
                lVar32 = -(ulong)uVar23;
                puVar13 = (ulong *)((long)puVar63 + lVar32);
                puVar15 = puVar63;
                if (puVar63 < puVar51) {
                  if (*puVar13 == *puVar63) {
                    iVar26 = 0;
                    puVar13 = (ulong *)((long)puVar65 + lVar32);
                    puVar15 = puVar65;
                    do {
                      if (puVar51 <= puVar15) goto joined_r0x0001006fed24;
                      uVar45 = *puVar13;
                      uVar44 = *puVar15;
                      iVar26 = iVar26 + 8;
                      puVar13 = puVar13 + 1;
                      puVar15 = puVar15 + 1;
                    } while (uVar45 == uVar44);
                    uVar44 = uVar44 ^ uVar45;
                    uVar44 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1
                    ;
                    uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2
                    ;
                    uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
                    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar44 & 0xffff0000ffff) << 0x10;
                    iVar26 = iVar26 + (int)((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3);
                  }
                  else {
                    uVar44 = *puVar63 ^ *puVar13;
                    uVar44 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1
                    ;
                    uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2
                    ;
                    uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
                    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar44 & 0xffff0000ffff) << 0x10;
                    iVar26 = (int)((ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006fed24:
                  if (puVar15 < puVar35) {
                    if (*(uint *)puVar13 == *(uint *)puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar15 < puVar30) {
                    if ((short)*puVar13 == (short)*puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                  if ((puVar15 < puVar3) && ((char)*puVar13 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  iVar26 = (int)puVar15 - (int)puVar63;
                }
joined_r0x0001006fecfc:
                uVar11 = iVar26 + 4;
                uVar69 = ZEXT48((uint)uVar11);
                if (puVar14 < (ulong)uVar69) {
                  piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar12;
                  (piVar7 + uVar61 * 2)[1] = uVar11;
                  uVar23 = (int)uVar61 + 1;
                  uVar61 = (ulong)uVar23;
                  if ((uVar27 < (uint)uVar11) ||
                     (puVar14 = (ulong *)uVar69, (ulong *)((long)puVar18 + uVar69) == puVar3))
                  goto LAB_1006ffaf8;
                }
              }
            }
            uVar23 = (uint)uVar61;
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar68);
          *(uint *)(lVar43 + uVar67 * 4) = uVar50;
          if (uVar21 <= uVar10) {
            puVar65 = (ulong *)0x0;
            puVar63 = (ulong *)0x0;
            uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
            iVar26 = iVar57;
            local_168 = local_170;
            do {
              uVar64 = (ulong)uVar10;
              puVar13 = puVar65;
              if (puVar63 <= puVar65) {
                puVar13 = puVar63;
              }
              puVar15 = (ulong *)((long)puVar18 + (long)puVar13);
              if ((long)puVar13 + uVar64 < uVar66) {
                FUN_1006c7460(puVar15,lVar40 + uVar64 + (long)puVar13,puVar3,lVar40 + uVar66,
                              lVar59 + uVar66);
                puVar15 = (ulong *)((long)puVar15 + (long)puVar13);
                lVar43 = lVar40 + uVar64;
                if (uVar66 <= (long)puVar15 + uVar64) {
                  lVar43 = lVar59 + uVar64;
                }
              }
              else {
                lVar43 = lVar59 + uVar64;
                puVar37 = (ulong *)(lVar43 + (long)puVar13);
                puVar38 = puVar15;
                if (puVar15 < puVar51) {
                  if (*puVar37 == *puVar15) {
                    lVar32 = 0;
                    do {
                      puVar37 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                      if (puVar51 <= puVar37) {
                        puVar37 = (ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                        puVar38 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                        goto joined_r0x0001006ff780;
                      }
                      uVar67 = *(ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                      uVar68 = *puVar37;
                      lVar32 = lVar32 + 8;
                    } while (uVar67 == uVar68);
                    uVar68 = uVar68 ^ uVar67;
                    uVar64 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >>
                                                 3) + (long)puVar13);
                  }
                  else {
                    uVar64 = *puVar15 ^ *puVar37;
                    uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1
                    ;
                    uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2
                    ;
                    uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                    uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar64 & 0xffff0000ffff) << 0x10;
                    puVar15 = (ulong *)(((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3) +
                                       (long)puVar13);
                  }
                }
                else {
joined_r0x0001006ff780:
                  if (puVar38 < puVar35) {
                    if (*(uint *)puVar37 == *(uint *)puVar38) {
                      puVar38 = (ulong *)((long)puVar38 + 4);
                      puVar37 = (ulong *)((long)puVar37 + 4);
                    }
                  }
                  if (puVar38 < puVar30) {
                    if ((short)*puVar37 == (short)*puVar38) {
                      puVar38 = (ulong *)((long)puVar38 + 2);
                      puVar37 = (ulong *)((long)puVar37 + 2);
                    }
                  }
                  if ((puVar38 < puVar3) && ((char)*puVar37 == (char)*puVar38)) {
                    puVar38 = (ulong *)((long)puVar38 + 1);
                  }
                  puVar15 = (ulong *)(((long)puVar38 - (long)puVar15) + (long)puVar13);
                }
              }
              iVar57 = iVar26;
              local_170 = local_168;
              if (puVar14 < puVar15) {
                iVar57 = uVar10 + (int)puVar15;
                if (puVar15 <= (ulong *)(ulong)(iVar26 - uVar10)) {
                  iVar57 = iVar26;
                }
                piVar7[uVar61 * 2] = (uVar50 + 2) - uVar10;
                (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                uVar23 = (int)uVar61 + 1;
                uVar61 = (ulong)uVar23;
                if (((ulong *)0x1000 < puVar15) ||
                   (puVar14 = puVar15, (ulong *)((long)puVar18 + (long)puVar15) == puVar3)) break;
              }
              uVar23 = (uint)uVar61;
              puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
              if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar18 + (long)puVar15)) {
                *local_160 = uVar10;
                if (uVar10 <= uVar46) {
                  local_160 = &local_94;
                  break;
                }
                puVar4 = puVar4 + 1;
                local_170 = local_168;
                puVar65 = puVar15;
                local_160 = puVar4;
              }
              else {
                *local_168 = uVar10;
                local_170 = puVar4;
                puVar63 = puVar15;
                if (uVar10 <= uVar46) {
                  local_170 = &local_94;
                  break;
                }
              }
              if (uVar27 == 0) break;
              uVar27 = uVar27 - 1;
              uVar10 = *puVar4;
              iVar26 = iVar57;
              local_168 = local_170;
            } while (uVar21 <= uVar10);
          }
LAB_1006ffae8:
          *local_170 = 0;
          *local_160 = 0;
          iVar57 = iVar57 + -8;
        }
        else {
          if (iVar57 != 3) {
            uVar61 = 0;
            uVar27 = *(uint *)(param_1 + 0xcc);
            if (0xffe < uVar27) {
              uVar27 = 0xfff;
            }
            uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
            uVar48 = ~uVar23;
            lVar59 = *(long *)(param_1 + 8);
            lVar40 = *(long *)(param_1 + 0x10);
            uVar50 = iVar26 - (int)lVar59;
            uVar46 = 0;
            if (uVar48 <= uVar50) {
              uVar46 = uVar50 - uVar48;
            }
            uVar19 = *(uint *)(param_1 + 0x18);
            uVar66 = (ulong)uVar19;
            uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
            uVar2 = uVar50 - uVar21;
            if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
              uVar2 = *(uint *)(param_1 + 0x1c);
            }
            uVar21 = uVar2;
            if (uVar2 < 2) {
              uVar21 = 1;
            }
            bVar12 = iVar24 != 0;
            uVar64 = (ulong)bVar12;
            puVar63 = (ulong *)((long)puVar18 + 4);
            lVar43 = *(long *)(param_1 + 0x30);
            uVar6 = *(uint *)(param_1 + 0xc4);
            uVar34 = (uint)*puVar18 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
            uVar10 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
            lVar36 = *(long *)(param_1 + 0x40);
            local_160 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
            local_168 = local_160 + 1;
            iVar57 = uVar50 + 9;
            uVar68 = 3;
            if (bVar12) {
              uVar68 = 4;
            }
            puVar65 = (ulong *)((long)puVar55 + uVar41 + 0xc);
            puVar14 = puVar29;
            do {
              if (uVar64 == 3) {
                uVar23 = *piVar52 - 1;
                uVar33 = *piVar52 - 2;
                if (uVar33 < uVar50 - uVar19) goto LAB_1006ff024;
LAB_1006fef68:
                if ((uVar33 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
                   (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)), (uint)*puVar18 == *puVar4)
                   ) {
                  puVar13 = puVar63;
                  FUN_1006c7460(puVar63,puVar4 + 1,puVar3,lVar40 + uVar66,lVar59 + uVar66);
                  iVar26 = (int)puVar13;
                  goto joined_r0x0001006ff0a8;
                }
              }
              else {
                uVar23 = piVar52[uVar64];
                uVar33 = uVar23 - 1;
                if (uVar50 - uVar19 <= uVar33) goto LAB_1006fef68;
LAB_1006ff024:
                if ((uint)*puVar18 == *(uint *)((long)puVar18 - (ulong)uVar23)) {
                  lVar32 = -(ulong)uVar23;
                  puVar13 = (ulong *)((long)puVar63 + lVar32);
                  puVar15 = puVar63;
                  if (puVar63 < puVar51) {
                    if (*puVar13 == *puVar63) {
                      iVar26 = 0;
                      puVar13 = (ulong *)((long)puVar65 + lVar32);
                      puVar15 = puVar65;
                      do {
                        if (puVar51 <= puVar15) goto joined_r0x0001006ff0d0;
                        uVar44 = *puVar13;
                        uVar67 = *puVar15;
                        iVar26 = iVar26 + 8;
                        puVar13 = puVar13 + 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar44 == uVar67);
                      uVar67 = uVar67 ^ uVar44;
                      uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar67 & 0x5555555555555555) << 1;
                      uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 |
                               (uVar67 & 0x3333333333333333) << 2;
                      uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar67 & 0xffff0000ffff) << 0x10;
                      iVar26 = iVar26 + (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
                    }
                    else {
                      uVar67 = *puVar63 ^ *puVar13;
                      uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar67 & 0x5555555555555555) << 1;
                      uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 |
                               (uVar67 & 0x3333333333333333) << 2;
                      uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar67 & 0xffff0000ffff) << 0x10;
                      iVar26 = (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
                    }
                  }
                  else {
joined_r0x0001006ff0d0:
                    if (puVar15 < puVar35) {
                      if (*(uint *)puVar13 == *(uint *)puVar15) {
                        puVar13 = (ulong *)((long)puVar13 + 4);
                        puVar15 = (ulong *)((long)puVar15 + 4);
                      }
                    }
                    if (puVar15 < puVar30) {
                      if ((short)*puVar13 == (short)*puVar15) {
                        puVar13 = (ulong *)((long)puVar13 + 2);
                        puVar15 = (ulong *)((long)puVar15 + 2);
                      }
                    }
                    if ((puVar15 < puVar3) && ((char)*puVar13 == (char)*puVar15)) {
                      puVar15 = (ulong *)((long)puVar15 + 1);
                    }
                    iVar26 = (int)puVar15 - (int)puVar63;
                  }
joined_r0x0001006ff0a8:
                  uVar11 = iVar26 + 4;
                  uVar69 = ZEXT48((uint)uVar11);
                  if (puVar14 < (ulong)uVar69) {
                    piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar12;
                    (piVar7 + uVar61 * 2)[1] = uVar11;
                    uVar23 = (int)uVar61 + 1;
                    uVar61 = (ulong)uVar23;
                    if ((uVar27 < (uint)uVar11) ||
                       (puVar14 = (ulong *)uVar69, (ulong *)((long)puVar18 + uVar69) == puVar3))
                    goto LAB_1006ffaf8;
                  }
                }
              }
              uVar23 = (uint)uVar61;
              uVar64 = uVar64 + 1;
            } while (uVar64 < uVar68);
            *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar50;
            if (uVar21 <= uVar10) {
              puVar65 = (ulong *)0x0;
              puVar63 = (ulong *)0x0;
              uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
              iVar26 = iVar57;
              do {
                puVar13 = puVar65;
                if (puVar63 <= puVar65) {
                  puVar13 = puVar63;
                }
                uVar64 = (ulong)uVar10;
                puVar15 = (ulong *)((long)puVar18 + (long)puVar13);
                if ((long)puVar13 + uVar64 < uVar66) {
                  FUN_1006c7460(puVar15,lVar40 + uVar64 + (long)puVar13,puVar3,lVar40 + uVar66,
                                lVar59 + uVar66);
                  puVar15 = (ulong *)((long)puVar15 + (long)puVar13);
                  lVar43 = lVar40 + uVar64;
                  if (uVar66 <= (long)puVar15 + uVar64) {
                    lVar43 = lVar59 + uVar64;
                  }
                }
                else {
                  lVar43 = lVar59 + uVar64;
                  puVar37 = (ulong *)(lVar43 + (long)puVar13);
                  puVar38 = puVar15;
                  if (puVar15 < puVar51) {
                    if (*puVar37 == *puVar15) {
                      lVar32 = 0;
                      do {
                        puVar37 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                        if (puVar51 <= puVar37) {
                          puVar37 = (ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                          puVar38 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                          goto joined_r0x0001006ff454;
                        }
                        uVar67 = *(ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                        uVar68 = *puVar37;
                        lVar32 = lVar32 + 8;
                      } while (uVar67 == uVar68);
                      uVar68 = uVar68 ^ uVar67;
                      uVar64 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar68 & 0x5555555555555555) << 1;
                      uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 |
                               (uVar64 & 0x3333333333333333) << 2;
                      uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar64 & 0xffff0000ffff) << 0x10;
                      puVar15 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20)
                                                   >> 3) + (long)puVar13);
                    }
                    else {
                      uVar64 = *puVar15 ^ *puVar37;
                      uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar64 & 0x5555555555555555) << 1;
                      uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 |
                               (uVar64 & 0x3333333333333333) << 2;
                      uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar64 & 0xffff0000ffff) << 0x10;
                      puVar15 = (ulong *)(((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3) +
                                         (long)puVar13);
                    }
                  }
                  else {
joined_r0x0001006ff454:
                    if (puVar38 < puVar35) {
                      if (*(uint *)puVar37 == *(uint *)puVar38) {
                        puVar38 = (ulong *)((long)puVar38 + 4);
                        puVar37 = (ulong *)((long)puVar37 + 4);
                      }
                    }
                    if (puVar38 < puVar30) {
                      if ((short)*puVar37 == (short)*puVar38) {
                        puVar38 = (ulong *)((long)puVar38 + 2);
                        puVar37 = (ulong *)((long)puVar37 + 2);
                      }
                    }
                    if ((puVar38 < puVar3) && ((char)*puVar37 == (char)*puVar38)) {
                      puVar38 = (ulong *)((long)puVar38 + 1);
                    }
                    puVar15 = (ulong *)(((long)puVar38 - (long)puVar15) + (long)puVar13);
                  }
                }
                iVar57 = iVar26;
                if (puVar14 < puVar15) {
                  iVar57 = uVar10 + (int)puVar15;
                  if (puVar15 <= (ulong *)(ulong)(iVar26 - uVar10)) {
                    iVar57 = iVar26;
                  }
                  piVar7[uVar61 * 2] = (uVar50 + 2) - uVar10;
                  (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                  uVar23 = (int)uVar61 + 1;
                  uVar61 = (ulong)uVar23;
                  if (((ulong *)0x1000 < puVar15) ||
                     (puVar14 = puVar15, (ulong *)((long)puVar18 + (long)puVar15) == puVar3)) break;
                }
                uVar23 = (uint)uVar61;
                puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
                if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar18 + (long)puVar15)) {
                  *local_160 = uVar10;
                  if (uVar10 <= uVar46) goto LAB_1006ff8e8;
                  puVar4 = puVar4 + 1;
                  puVar65 = puVar15;
                  local_160 = puVar4;
                }
                else {
                  *local_168 = uVar10;
                  local_168 = puVar4;
                  puVar63 = puVar15;
                  if (uVar10 <= uVar46) goto LAB_1006ff8dc;
                }
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                uVar10 = *puVar4;
                iVar26 = iVar57;
              } while (uVar21 <= uVar10);
            }
            goto LAB_1006ff8f0;
          }
          uVar61 = 0;
          uVar27 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar27) {
            uVar27 = 0xfff;
          }
          uVar23 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar48 = ~uVar23;
          lVar59 = *(long *)(param_1 + 8);
          lVar40 = *(long *)(param_1 + 0x10);
          uVar50 = iVar26 - (int)lVar59;
          uVar46 = 0;
          if (uVar48 <= uVar50) {
            uVar46 = uVar50 - uVar48;
          }
          uVar19 = *(uint *)(param_1 + 0x18);
          uVar66 = (ulong)uVar19;
          uVar21 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar2 = uVar50 - uVar21;
          if (uVar50 - *(uint *)(param_1 + 0x1c) <= uVar21 || *(int *)(param_1 + 0x20) != 0) {
            uVar2 = *(uint *)(param_1 + 0x1c);
          }
          uVar21 = uVar2;
          if (uVar2 < 2) {
            uVar21 = 1;
          }
          bVar12 = iVar24 != 0;
          uVar64 = (ulong)bVar12;
          puVar63 = (ulong *)((long)puVar18 + 3);
          lVar43 = *(long *)(param_1 + 0x30);
          uVar6 = *(uint *)(param_1 + 0xc4);
          uVar34 = (uint)*puVar18 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar10 = *(uint *)(lVar43 + (ulong)uVar34 * 4);
          lVar36 = *(long *)(param_1 + 0x40);
          local_160 = (uint *)(lVar36 + (ulong)((uVar50 & (uVar23 ^ 0xffffffff)) << 1) * 4);
          local_170 = local_160 + 1;
          iVar57 = uVar50 + 9;
          uVar68 = 3;
          if (bVar12) {
            uVar68 = 4;
          }
          puVar65 = (ulong *)((long)puVar55 + uVar41 + 0xb);
          puVar14 = puVar29;
          do {
            if (uVar64 == 3) {
              uVar23 = *piVar52 - 1;
              uVar33 = *piVar52 - 2;
              if (uVar33 < uVar50 - uVar19) goto LAB_1006fe180;
LAB_1006fe0c0:
              if ((uVar33 < uVar50 - uVar2 && (uVar50 - uVar23) - uVar19 < 0xfffffffd) &&
                 (puVar4 = (uint *)(lVar40 + (ulong)(uVar50 - uVar23)),
                 ((*puVar4 ^ (uint)*puVar18) & 0xffffff) == 0)) {
                puVar13 = puVar63;
                FUN_1006c7460(puVar63,(long)puVar4 + 3,puVar3,lVar40 + uVar66,lVar59 + uVar66);
                iVar26 = (int)puVar13;
                goto joined_r0x0001006fe24c;
              }
            }
            else {
              uVar23 = piVar52[uVar64];
              uVar33 = uVar23 - 1;
              if (uVar50 - uVar19 <= uVar33) goto LAB_1006fe0c0;
LAB_1006fe180:
              if (((*(uint *)((long)puVar18 - (ulong)uVar23) ^ (uint)*puVar18) & 0xffffff) == 0) {
                lVar32 = -(ulong)uVar23;
                puVar13 = (ulong *)((long)puVar63 + lVar32);
                puVar15 = puVar63;
                if (puVar63 < puVar51) {
                  if (*puVar13 == *puVar63) {
                    iVar26 = 0;
                    puVar13 = (ulong *)((long)puVar65 + lVar32);
                    puVar15 = puVar65;
                    do {
                      if (puVar51 <= puVar15) goto joined_r0x0001006fe260;
                      uVar44 = *puVar13;
                      uVar67 = *puVar15;
                      iVar26 = iVar26 + 8;
                      puVar13 = puVar13 + 1;
                      puVar15 = puVar15 + 1;
                    } while (uVar44 == uVar67);
                    uVar67 = uVar67 ^ uVar44;
                    uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1
                    ;
                    uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2
                    ;
                    uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
                    uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar67 & 0xffff0000ffff) << 0x10;
                    iVar26 = iVar26 + (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
                  }
                  else {
                    uVar67 = *puVar63 ^ *puVar13;
                    uVar67 = (uVar67 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar67 & 0x5555555555555555) << 1
                    ;
                    uVar67 = (uVar67 & 0xcccccccccccccccc) >> 2 | (uVar67 & 0x3333333333333333) << 2
                    ;
                    uVar67 = (uVar67 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar67 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar67 = (uVar67 & 0xff00ff00ff00ff00) >> 8 | (uVar67 & 0xff00ff00ff00ff) << 8;
                    uVar67 = (uVar67 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar67 & 0xffff0000ffff) << 0x10;
                    iVar26 = (int)((ulong)LZCOUNT(uVar67 >> 0x20 | uVar67 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006fe260:
                  if (puVar15 < puVar35) {
                    if (*(uint *)puVar13 == *(uint *)puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 4);
                      puVar15 = (ulong *)((long)puVar15 + 4);
                    }
                  }
                  if (puVar15 < puVar30) {
                    if ((short)*puVar13 == (short)*puVar15) {
                      puVar13 = (ulong *)((long)puVar13 + 2);
                      puVar15 = (ulong *)((long)puVar15 + 2);
                    }
                  }
                  if ((puVar15 < puVar3) && ((char)*puVar13 == (char)*puVar15)) {
                    puVar15 = (ulong *)((long)puVar15 + 1);
                  }
                  iVar26 = (int)puVar15 - (int)puVar63;
                }
joined_r0x0001006fe24c:
                uVar11 = iVar26 + 3;
                uVar69 = ZEXT48((uint)uVar11);
                if (puVar14 < (ulong)uVar69) {
                  piVar7[uVar61 * 2] = (int)uVar64 - (uint)bVar12;
                  (piVar7 + uVar61 * 2)[1] = uVar11;
                  uVar23 = (int)uVar61 + 1;
                  uVar61 = (ulong)uVar23;
                  if ((uVar27 < (uint)uVar11) ||
                     (puVar14 = (ulong *)uVar69, (ulong *)((long)puVar18 + uVar69) == puVar3))
                  goto LAB_1006ffaf8;
                }
              }
            }
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar68);
          if ((ulong *)0x2 < puVar14) {
LAB_1006ffac4:
            uVar23 = (uint)uVar61;
            *(uint *)(lVar43 + (ulong)uVar34 * 4) = uVar50;
            if (uVar21 <= uVar10) {
              puVar65 = (ulong *)0x0;
              puVar63 = (ulong *)0x0;
              uVar27 = ~(-1 << (ulong)(uVar6 & 0x1f));
              iVar26 = iVar57;
              local_168 = local_160;
              do {
                uVar64 = (ulong)uVar10;
                puVar13 = puVar65;
                if (puVar63 <= puVar65) {
                  puVar13 = puVar63;
                }
                puVar15 = (ulong *)((long)puVar18 + (long)puVar13);
                if ((long)puVar13 + uVar64 < uVar66) {
                  FUN_1006c7460(puVar15,lVar40 + uVar64 + (long)puVar13,puVar3,lVar40 + uVar66,
                                lVar59 + uVar66);
                  puVar15 = (ulong *)((long)puVar15 + (long)puVar13);
                  lVar43 = lVar40 + uVar64;
                  if (uVar66 <= (long)puVar15 + uVar64) {
                    lVar43 = lVar59 + uVar64;
                  }
                }
                else {
                  lVar43 = lVar59 + uVar64;
                  puVar37 = (ulong *)(lVar43 + (long)puVar13);
                  puVar38 = puVar15;
                  if (puVar15 < puVar51) {
                    if (*puVar37 == *puVar15) {
                      lVar32 = 0;
                      do {
                        puVar37 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                        if (puVar51 <= puVar37) {
                          puVar37 = (ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                          puVar38 = (ulong *)((long)puVar13 + (long)puVar55 + lVar32 + uVar41 + 8);
                          goto joined_r0x0001006fffa8;
                        }
                        uVar67 = *(ulong *)((long)puVar13 + lVar32 + lVar59 + 8 + uVar64);
                        uVar68 = *puVar37;
                        lVar32 = lVar32 + 8;
                      } while (uVar67 == uVar68);
                      uVar68 = uVar68 ^ uVar67;
                      uVar64 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar68 & 0x5555555555555555) << 1;
                      uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 |
                               (uVar64 & 0x3333333333333333) << 2;
                      uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar64 & 0xffff0000ffff) << 0x10;
                      puVar15 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20)
                                                   >> 3) + (long)puVar13);
                    }
                    else {
                      uVar64 = *puVar15 ^ *puVar37;
                      uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar64 & 0x5555555555555555) << 1;
                      uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 |
                               (uVar64 & 0x3333333333333333) << 2;
                      uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar64 & 0xffff0000ffff) << 0x10;
                      puVar15 = (ulong *)(((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3) +
                                         (long)puVar13);
                    }
                  }
                  else {
joined_r0x0001006fffa8:
                    if (puVar38 < puVar35) {
                      if (*(uint *)puVar37 == *(uint *)puVar38) {
                        puVar38 = (ulong *)((long)puVar38 + 4);
                        puVar37 = (ulong *)((long)puVar37 + 4);
                      }
                    }
                    if (puVar38 < puVar30) {
                      if ((short)*puVar37 == (short)*puVar38) {
                        puVar38 = (ulong *)((long)puVar38 + 2);
                        puVar37 = (ulong *)((long)puVar37 + 2);
                      }
                    }
                    if ((puVar38 < puVar3) && ((char)*puVar37 == (char)*puVar38)) {
                      puVar38 = (ulong *)((long)puVar38 + 1);
                    }
                    puVar15 = (ulong *)(((long)puVar38 - (long)puVar15) + (long)puVar13);
                  }
                }
                iVar57 = iVar26;
                local_160 = local_168;
                if (puVar14 < puVar15) {
                  iVar57 = uVar10 + (int)puVar15;
                  if (puVar15 <= (ulong *)(ulong)(iVar26 - uVar10)) {
                    iVar57 = iVar26;
                  }
                  piVar7[uVar61 * 2] = (uVar50 + 2) - uVar10;
                  (piVar7 + uVar61 * 2)[1] = (int)puVar15;
                  uVar23 = (int)uVar61 + 1;
                  uVar61 = (ulong)uVar23;
                  if (((ulong *)0x1000 < puVar15) ||
                     (puVar14 = puVar15, (ulong *)((long)puVar18 + (long)puVar15) == puVar3)) break;
                }
                uVar23 = (uint)uVar61;
                puVar4 = (uint *)(lVar36 + (ulong)((uVar10 & uVar48) << 1) * 4);
                if (*(byte *)(lVar43 + (long)puVar15) < *(byte *)((long)puVar18 + (long)puVar15)) {
                  *local_168 = uVar10;
                  if (uVar10 <= uVar46) {
                    local_160 = &local_94;
                    break;
                  }
                  puVar4 = puVar4 + 1;
                  puVar65 = puVar15;
                  local_160 = puVar4;
                }
                else {
                  *local_170 = uVar10;
                  local_170 = puVar4;
                  puVar63 = puVar15;
                  if (uVar10 <= uVar46) {
                    local_170 = &local_94;
                    break;
                  }
                }
                if (uVar27 == 0) break;
                uVar27 = uVar27 - 1;
                uVar10 = *puVar4;
                iVar26 = iVar57;
                local_168 = local_160;
              } while (uVar21 <= uVar10);
            }
            goto LAB_1006ffae8;
          }
          lVar32 = *(long *)(param_1 + 0x38);
          uVar64 = *puVar18;
          uVar23 = 0x20 - *(int *)(param_1 + 0x28);
          if (local_21c < uVar50) {
            uVar68 = (ulong)local_21c;
            do {
              *(int *)(lVar32 + (ulong)((uint)(*(int *)(lVar59 + uVar68) * 0x35a7bd00) >>
                                       (ulong)(uVar23 & 0x1f)) * 4) = (int)uVar68;
              uVar68 = uVar68 + 1;
            } while ((uint)(iVar56 - (int)lVar59) != uVar68);
          }
          uVar23 = *(uint *)(lVar32 + (ulong)((uint)uVar64 * 0x35a7bd00 >> (ulong)(uVar23 & 0x1f)) *
                                      4);
          uVar64 = (ulong)uVar23;
          local_21c = uVar50;
          if (uVar23 < uVar21 || uVar50 - uVar23 >> 0x12 != 0) goto LAB_1006ffac4;
          if (uVar23 < uVar19) {
            puVar65 = puVar18;
            FUN_1006c7460(puVar18,lVar40 + uVar64,puVar3,lVar40 + uVar66,lVar59 + uVar66);
          }
          else {
            puVar63 = (ulong *)(lVar59 + uVar64);
            puVar65 = puVar18;
            if (puVar18 < puVar51) {
              if (*puVar63 == *puVar18) {
                lVar32 = 0;
                puVar63 = (ulong *)(lVar59 + uVar64);
                puVar65 = (ulong *)((long)puVar55 + uVar41 + 8);
                do {
                  puVar63 = puVar63 + 1;
                  if (puVar51 <= puVar65) goto LAB_1006ff9f8;
                  uVar64 = *puVar65;
                  lVar32 = lVar32 + 8;
                  puVar65 = puVar65 + 1;
                } while (*puVar63 == uVar64);
                uVar64 = uVar64 ^ *puVar63;
                uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
                puVar65 = (ulong *)(lVar32 + ((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3))
                ;
              }
              else {
                uVar64 = *puVar18 ^ *puVar63;
                uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
                uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
                uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
                uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
                puVar65 = (ulong *)((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3);
              }
            }
            else {
LAB_1006ff9f8:
              if (puVar65 < puVar35) {
                if ((uint)*puVar63 == (uint)*puVar65) {
                  puVar65 = (ulong *)((long)puVar65 + 4);
                  puVar63 = (ulong *)((long)puVar63 + 4);
                }
              }
              if (puVar65 < puVar30) {
                if (*(short *)puVar63 == *(short *)puVar65) {
                  puVar65 = (ulong *)((long)puVar65 + 2);
                  puVar63 = (ulong *)((long)puVar63 + 2);
                }
              }
              if ((puVar65 < puVar3) && ((char)*puVar63 == (char)*puVar65)) {
                puVar65 = (ulong *)((long)puVar65 + 1);
              }
              puVar65 = (ulong *)((long)puVar65 - (long)puVar18);
            }
          }
          if (puVar65 < (ulong *)0x3) goto LAB_1006ffac4;
          *piVar7 = (uVar50 - uVar23) + 2;
          piVar7[1] = (int)puVar65;
          if (puVar65 <= (ulong *)(ulong)uVar27 &&
              (ulong *)((long)puVar18 + (long)puVar65) != puVar3) {
            uVar61 = 1;
            puVar14 = puVar65;
            goto LAB_1006ffac4;
          }
          iVar57 = uVar50 + 1;
          uVar23 = 1;
        }
        goto LAB_1006ffaf4;
      }
    }
LAB_100700134:
    piVar52 = piVar8 + (uVar61 & 0xffffffff) * 7;
    local_17c = *piVar52;
    iVar24 = piVar52[1];
    uVar27 = piVar52[2];
    uVar42 = piVar52[3];
    local_90 = *(undefined8 *)(piVar52 + 4);
    local_88 = piVar52[6];
    uVar46 = 0;
    if (uVar42 + uVar27 <= (uint)uVar61) {
      uVar46 = (uint)uVar61 - (uVar42 + uVar27);
    }
  }
  else {
    if (*(int *)(param_1 + 0xa8) == 2) {
      iVar25 = uVar42 << 0xb;
      iVar24 = *(int *)(param_1 + 0x98);
    }
    else {
      iVar24 = *(int *)(param_1 + 0x98);
      if (iVar24 == 1) {
        iVar25 = uVar42 * 0x600;
        goto LAB_1006fd9f4;
      }
      iVar25 = *(int *)(param_1 + 0x88) * uVar42;
      lVar40 = *(long *)(param_1 + 0x48);
      uVar41 = uVar61 & 0xffffffff;
      if (uVar41 < 2) {
        lVar43 = 0;
      }
      else {
        iVar49 = 0;
        lVar43 = uVar41 - (uVar61 & 1);
        pbVar47 = (byte *)((long)param_4 + 1);
        lVar36 = lVar43;
        do {
          iVar25 = iVar25 - ((int)LZCOUNT(*(int *)(lVar40 + (ulong)pbVar47[-1] * 4) + 1) << 8 ^
                            0x1f00U);
          iVar49 = iVar49 - ((int)LZCOUNT(*(int *)(lVar40 + (ulong)*pbVar47 * 4) + 1) << 8 ^ 0x1f00U
                            );
          lVar36 = lVar36 + -2;
          pbVar47 = pbVar47 + 2;
        } while (lVar36 != 0);
        iVar25 = iVar49 + iVar25;
        if ((uVar61 & 1) == 0) goto LAB_1006fd9f0;
      }
      lVar36 = uVar41 - lVar43;
      pbVar47 = (byte *)((long)param_4 + lVar43);
      do {
        iVar25 = iVar25 - ((int)LZCOUNT(*(int *)(lVar40 + (ulong)*pbVar47 * 4) + 1) << 8 ^ 0x1f00U);
        lVar36 = lVar36 + -1;
        pbVar47 = pbVar47 + 1;
      } while (lVar36 != 0);
    }
LAB_1006fd9f0:
    if (iVar24 == 0) {
      if (uVar42 < 0x40) goto LAB_1006fda50;
      uVar27 = 0x32 - (int)LZCOUNT(uVar42);
      goto LAB_1006fda5c;
    }
LAB_1006fd9f4:
    iVar25 = ((int)LZCOUNT(uVar42 + 1) << 8 ^ 0x1f00U) + iVar25;
    *piVar8 = iVar25;
    piVar16 = piVar7 + (ulong)((int)uVar62 - 1) * 2;
    uVar27 = piVar16[1];
    if (uVar27 <= uVar5) {
      if (iVar24 != 1) goto LAB_1006fdacc;
      iVar24 = 0;
      goto LAB_1006fdaf8;
    }
LAB_1006fdac0:
    iVar24 = *piVar16;
    uVar46 = 0;
  }
LAB_100700168:
  uVar23 = uVar46 + 1;
  piVar52 = piVar8 + (ulong)uVar23 * 7;
  *piVar52 = local_17c;
  piVar52[1] = iVar24;
  piVar52[2] = uVar27;
  piVar52[3] = uVar42;
  *(undefined8 *)(piVar52 + 4) = local_90;
  piVar52[6] = local_88;
  uVar27 = uVar46;
  if (uVar46 == 0) {
    uVar42 = 1;
    goto LAB_10070026c;
  }
  do {
    uVar42 = uVar27;
    piVar52 = piVar8 + (ulong)uVar46 * 7;
    iVar25 = piVar52[2];
    iVar56 = piVar52[3];
    piVar16 = piVar8 + (ulong)uVar42 * 7;
    uVar70 = *(undefined8 *)(piVar52 + 2);
    uVar69 = *(undefined8 *)piVar52;
    uVar71 = *(undefined8 *)(piVar52 + 3);
    *(undefined8 *)(piVar16 + 5) = *(undefined8 *)(piVar52 + 5);
    *(undefined8 *)(piVar16 + 3) = uVar71;
    *(undefined8 *)(piVar16 + 2) = uVar70;
    *(undefined8 *)piVar16 = uVar69;
    uVar48 = iVar56 + iVar25;
    bVar12 = uVar48 <= uVar46;
    uVar48 = uVar46 - uVar48;
    uVar46 = 0;
    if (bVar12) {
      uVar46 = uVar48;
    }
    uVar27 = uVar42 - 1;
  } while (bVar12 && uVar48 != 0);
  for (; uVar42 <= uVar23; uVar42 = uVar42 + 1) {
LAB_10070026c:
    while( true ) {
      iVar25 = piVar8[(ulong)uVar42 * 7 + 2];
      uVar27 = piVar8[(ulong)uVar42 * 7 + 3];
      uVar62 = (ulong)uVar27;
      if (iVar25 != 0) break;
      puVar55 = (ulong *)((long)param_4 + uVar62);
      uVar42 = uVar42 + 1;
      if (uVar23 < uVar42) goto LAB_1007001d8;
    }
    uVar46 = piVar8[(ulong)uVar42 * 7 + 1];
    if (uVar46 < 3) {
      uVar48 = uVar46;
      if (uVar27 == 0) {
        uVar48 = uVar46 + 1;
      }
      if (uVar48 != 0) {
        if (uVar48 == 3) {
          iVar56 = *param_3 + -1;
LAB_1007002d4:
          param_3[2] = param_3[1];
        }
        else {
          iVar56 = param_3[uVar48];
          if (uVar48 != 1) goto LAB_1007002d4;
        }
        param_3[1] = *param_3;
        goto LAB_1007002e8;
      }
    }
    else {
      *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
      iVar56 = uVar46 - 2;
LAB_1007002e8:
      *param_3 = iVar56;
    }
    if (*(int *)(param_1 + 0xa8) != 2) {
      if (uVar27 != 0) {
        lVar59 = *(long *)(param_1 + 0x48);
        puVar55 = param_4;
        uVar61 = uVar62;
        do {
          *(int *)(lVar59 + (ulong)(byte)*puVar55 * 4) =
               *(int *)(lVar59 + (ulong)(byte)*puVar55 * 4) + 2;
          uVar61 = uVar61 - 1;
          puVar55 = (ulong *)((long)puVar55 + 1);
        } while (uVar61 != 0);
      }
      *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar27 * 2;
    }
    if (uVar27 < 0x40) {
      uVar48 = (uint)(byte)(&DAT_10084fdf4)[uVar62];
    }
    else {
      uVar48 = 0x32 - (int)LZCOUNT(uVar27);
    }
    *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar48 * 4) =
         *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar48 * 4) + 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    uVar48 = (uint)LZCOUNT(uVar46 + 1) ^ 0x1f;
    *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar48 * 4) =
         *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar48 * 4) + 1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    uVar48 = iVar25 - 3;
    if (uVar48 < 0x80) {
      uVar50 = (uint)(byte)(&DAT_10084ff08)[uVar48];
    }
    else {
      uVar50 = 0x43 - (int)LZCOUNT(uVar48);
    }
    *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar50 * 4) =
         *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar50 * 4) + 1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    puVar55 = (ulong *)param_2[3];
    puVar18 = (ulong *)((long)param_4 + uVar62);
    if (puVar31 < puVar18) {
      puVar63 = param_4;
      puVar65 = puVar55;
      if (param_4 <= puVar31) {
        puVar65 = (ulong *)((long)puVar55 + ((long)puVar31 - (long)param_4));
        uVar61 = *param_4;
        puVar55[1] = param_4[1];
        *puVar55 = uVar61;
        uVar61 = param_4[2];
        puVar55[3] = param_4[3];
        puVar55[2] = uVar61;
        puVar63 = puVar31;
        if (0x20 < (long)puVar31 - (long)param_4) {
          puVar55 = puVar55 + 4;
          puVar14 = param_4 + 6;
          do {
            uVar61 = puVar14[-2];
            puVar55[1] = puVar14[-1];
            *puVar55 = uVar61;
            uVar61 = *puVar14;
            puVar55[3] = puVar14[1];
            puVar55[2] = uVar61;
            puVar55 = puVar55 + 4;
            puVar14 = puVar14 + 4;
          } while (puVar55 < puVar65);
        }
      }
      if (puVar63 < puVar18) {
        uVar61 = (long)puVar18 - (long)puVar63;
        if ((7 < uVar61) && (0x3f < (ulong)((long)puVar65 - (long)puVar63))) {
          if (uVar61 < 0x40) {
            uVar66 = 0;
          }
          else {
            uVar66 = uVar61 & 0xffffffffffffffc0;
            puVar55 = puVar65 + 4;
            puVar14 = puVar63 + 4;
            uVar41 = uVar66;
            do {
              uVar64 = puVar14[-4];
              uVar67 = puVar14[-1];
              uVar68 = puVar14[-2];
              uVar45 = puVar14[1];
              uVar44 = *puVar14;
              uVar73 = puVar14[3];
              uVar72 = puVar14[2];
              puVar55[-3] = puVar14[-3];
              puVar55[-4] = uVar64;
              puVar55[-1] = uVar67;
              puVar55[-2] = uVar68;
              puVar55[1] = uVar45;
              *puVar55 = uVar44;
              puVar55[3] = uVar73;
              puVar55[2] = uVar72;
              uVar41 = uVar41 - 0x40;
              puVar55 = puVar55 + 8;
              puVar14 = puVar14 + 8;
            } while (uVar41 != 0);
            if (uVar61 == uVar66) goto LAB_100700578;
            if ((uVar61 & 0x38) == 0) {
              puVar63 = (ulong *)((long)puVar63 + uVar66);
              puVar65 = (ulong *)((long)puVar65 + uVar66);
              goto LAB_100700568;
            }
          }
          uVar41 = uVar61 & 0xfffffffffffffff8;
          lVar59 = uVar66 - uVar41;
          puVar54 = (undefined8 *)((long)puVar65 + uVar66);
          puVar58 = (undefined8 *)((long)puVar63 + uVar66);
          do {
            *puVar54 = *puVar58;
            lVar59 = lVar59 + 8;
            puVar54 = puVar54 + 1;
            puVar58 = puVar58 + 1;
          } while (lVar59 != 0);
          puVar65 = (ulong *)((long)puVar65 + uVar41);
          puVar63 = (ulong *)((long)puVar63 + uVar41);
          if (uVar61 == uVar41) goto LAB_100700578;
        }
LAB_100700568:
        do {
          puVar55 = (ulong *)((long)puVar63 + 1);
          *(char *)puVar65 = (char)*puVar63;
          puVar65 = (ulong *)((long)puVar65 + 1);
          puVar63 = puVar55;
        } while (puVar55 != puVar18);
      }
LAB_100700578:
      param_2[3] = param_2[3] + uVar62;
      piVar52 = (int *)param_2[1];
      if (0xffff < uVar27) {
        *(undefined4 *)(param_2 + 9) = 1;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar52 - *param_2) >> 3);
      }
    }
    else {
      uVar61 = *param_4;
      puVar55[1] = param_4[1];
      *puVar55 = uVar61;
      if (0x10 < uVar27) {
        lVar59 = param_2[3];
        uVar61 = param_4[2];
        *(ulong *)(lVar59 + 0x18) = param_4[3];
        *(ulong *)(lVar59 + 0x10) = uVar61;
        uVar61 = param_4[4];
        *(ulong *)(lVar59 + 0x28) = param_4[5];
        *(ulong *)(lVar59 + 0x20) = uVar61;
        if (uVar62 - 0x31 < 0xffffffffffffffdf) {
          puVar55 = (ulong *)(lVar59 + 0x30);
          puVar18 = param_4 + 8;
          do {
            uVar61 = puVar18[-2];
            puVar55[1] = puVar18[-1];
            *puVar55 = uVar61;
            uVar61 = *puVar18;
            puVar55[3] = puVar18[1];
            puVar55[2] = uVar61;
            puVar55 = puVar55 + 4;
            puVar18 = puVar18 + 4;
          } while (puVar55 < (ulong *)(lVar59 + uVar62));
          goto LAB_100700578;
        }
      }
      param_2[3] = param_2[3] + uVar62;
      piVar52 = (int *)param_2[1];
    }
    *(short *)(piVar52 + 1) = (short)uVar27;
    *piVar52 = uVar46 + 1;
    if (0xffff < uVar48) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar52 - *param_2) >> 3);
    }
    *(short *)((long)piVar52 + 6) = (short)uVar48;
    param_2[1] = (long)(piVar52 + 2);
    puVar55 = (ulong *)((long)param_4 + (ulong)(iVar25 + uVar27));
    param_4 = puVar55;
  }
LAB_1007001d8:
  if (*(int *)(param_1 + 0xa8) != 2) {
    *(uint *)(param_1 + 0x88) = (int)LZCOUNT(*(int *)(param_1 + 0x78) + 1) << 8 ^ 0x1f00;
  }
  *(ulong *)(param_1 + 0x8c) =
       (ulong)CONCAT15((char)LZCOUNT((int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1),
                       (uint5)(uint3)LZCOUNT((int)*(undefined8 *)(param_1 + 0x7c) + 1) << 8) ^
       0x1f0000001f00;
  *(uint *)(param_1 + 0x94) = (int)LZCOUNT(*(int *)(param_1 + 0x84) + 1) << 8 ^ 0x1f00;
joined_r0x0001006fbcf0:
  if (puVar60 <= puVar55) goto LAB_10070078c;
  goto LAB_1006fbcf4;
LAB_1006ff8dc:
  local_168 = &local_94;
  goto LAB_1006ff8f0;
LAB_1006ff8e8:
  local_160 = &local_94;
LAB_1006ff8f0:
  *local_168 = 0;
  *local_160 = 0;
  iVar57 = iVar57 + -8;
LAB_1006ffaf4:
  *(int *)(param_1 + 0x24) = iVar57;
LAB_1006ffaf8:
  if (uVar23 != 0) {
    uVar27 = (piVar7 + (ulong)(uVar23 - 1) * 2)[1];
    if ((uVar5 < uVar27) || (0xfff < uVar27 + iVar25)) {
      if (piVar16[2] == 0) {
        iVar56 = piVar16[3];
      }
      else {
        iVar56 = 0;
      }
      iVar24 = piVar7[(ulong)(uVar23 - 1) * 2];
      uVar46 = 0;
      if ((uint)(iVar25 - iVar56) < 0x1001) {
        uVar46 = iVar25 - iVar56;
      }
      goto LAB_100700168;
    }
    uVar61 = 0;
    piVar52 = piVar8 + uVar41 * 7 + 4;
    do {
      puVar4 = (uint *)(piVar7 + uVar61 * 2);
      uVar27 = *puVar4;
      if (uVar27 < 3) {
        uVar46 = uVar27 + (iVar24 != 0);
        if (uVar46 == 0) {
          iVar57 = *piVar52;
          iVar26 = piVar8[uVar41 * 7 + 5];
          piVar16 = piVar8 + uVar41 * 7 + 6;
        }
        else {
          if (uVar46 == 3) {
            iVar26 = *piVar52;
            iVar57 = iVar26 + -1;
          }
          else {
            iVar57 = piVar52[uVar46];
            iVar26 = *piVar52;
          }
          lVar59 = 8;
          if (uVar46 != 1) {
            lVar59 = 4;
          }
          piVar16 = (int *)((long)piVar52 + lVar59);
        }
      }
      else {
        iVar26 = *piVar52;
        iVar57 = uVar27 - 2;
        piVar16 = piVar8 + uVar41 * 7 + 5;
      }
      uVar46 = uVar22;
      if (uVar61 != 0) {
        uVar46 = puVar4[-1] + 1;
      }
      uVar48 = puVar4[1];
      if (uVar46 <= uVar48) {
        iVar39 = 0;
        iVar9 = *piVar16;
        uVar50 = (uint)LZCOUNT(uVar27 + 1) ^ 0x1f;
        iVar17 = uVar50 * 0x200 + -0x25cd;
        if (uVar50 < 0x14) {
          iVar17 = 0x33;
        }
        uVar2 = iVar25 + uVar48;
        uVar19 = uVar2;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar20 = iVar53 + iVar49 +
                     uVar50 * 0x100 + 0x1000 + ((int)LZCOUNT(uVar48 - 2) << 8 ^ 0x1f00U);
            uVar66 = (ulong)(uVar48 + iVar25);
            if (uVar48 + iVar25 <= (uint)uVar62) goto LAB_1006ffc44;
LAB_1006ffd4c:
            uVar68 = uVar62 & 0xffffffff;
            uVar64 = (uVar2 - iVar39) - uVar68;
            uVar62 = uVar68;
            if (uVar64 < 4) {
LAB_1006ffdb0:
              piVar16 = piVar1 + uVar62 * 7;
              do {
                uVar62 = uVar62 + 1;
                *piVar16 = 0x40000000;
                piVar16 = piVar16 + 7;
              } while (uVar62 < uVar66);
            }
            else {
              uVar62 = (uVar64 & 0xfffffffffffffffc) + uVar68;
              uVar67 = uVar19 - uVar68 & 0xfffffffffffffffc;
              piVar16 = piVar8 + uVar68 * 7 + 0xe;
              do {
                piVar16[-7] = 0x40000000;
                *piVar16 = 0x40000000;
                piVar16[7] = 0x40000000;
                piVar16[0xe] = 0x40000000;
                piVar16 = piVar16 + 0x1c;
                uVar67 = uVar67 - 4;
              } while (uVar67 != 0);
              if (uVar64 != (uVar64 & 0xfffffffffffffffc)) goto LAB_1006ffdb0;
            }
          }
          else {
            uVar21 = uVar48 - 3;
            if (uVar21 < 0x80) {
              uVar21 = (uint)(byte)(&DAT_10084ff08)[uVar21];
            }
            else {
              uVar21 = 0x43 - (int)LZCOUNT(uVar21);
            }
            iVar20 = iVar53 + iVar49 +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar21 * 4) + 1) << 8
                     ^ 0xffffe0ffU) +
                     iVar17 + *(int *)(param_1 + 0x94) +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar50 * 4) + 1) << 8
                     ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                     (*(int *)(&DAT_10084fe34 + (ulong)uVar21 * 4) + uVar50) * 0x100 + 2;
            uVar66 = (ulong)(uVar48 + iVar25);
            if ((uint)uVar62 < uVar48 + iVar25) goto LAB_1006ffd4c;
LAB_1006ffc44:
            if (piVar8[uVar66 * 7] <= iVar20) break;
          }
          piVar16 = piVar8 + uVar66 * 7;
          piVar16[2] = uVar48;
          piVar16[3] = uVar42;
          *piVar16 = iVar20;
          piVar16[1] = uVar27;
          *(ulong *)(piVar16 + 4) = CONCAT44(iVar26,iVar57);
          piVar16[6] = iVar9;
          uVar48 = uVar48 - 1;
          iVar39 = iVar39 + 1;
          uVar19 = uVar19 - 1;
        } while (uVar46 <= uVar48);
      }
      uVar61 = uVar61 + 1;
    } while (uVar61 != uVar23);
  }
  uVar66 = (ulong)(iVar25 + 1U);
LAB_1006fdcc4:
  uVar41 = uVar66;
  uVar61 = uVar62;
  if ((uint)uVar62 < (uint)uVar66) goto LAB_100700134;
  goto LAB_1006fdcd4;
}

