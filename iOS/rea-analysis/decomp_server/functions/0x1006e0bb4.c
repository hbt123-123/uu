// rea decompile_all
// name: FUN_1006e0bb4
// address: 0x1006e0bb4
// body: available
// range: 0x1006e0bb4-0x1006e4aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006e4afc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006e4a88) */
/* WARNING: Removing unreachable block (ram,0x0001006e410c) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006e0bb4(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint *puVar1;
  int *piVar2;
  ulong *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  ulong *puVar12;
  int iVar13;
  ulong *puVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong *puVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ulong *puVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  uint *puVar42;
  byte *pbVar43;
  uint uVar44;
  uint *puVar45;
  int *piVar46;
  int iVar47;
  undefined8 *puVar48;
  uint uVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  ulong *puVar53;
  ulong *puVar54;
  uint uVar55;
  int iVar56;
  undefined8 *puVar57;
  long lVar58;
  ulong uVar59;
  ulong uVar60;
  ulong *puVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  ulong uVar68;
  uint local_1b4;
  uint *local_158;
  int local_144;
  uint local_94;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar61 = puVar3 + -1;
  lVar27 = *(long *)(param_1 + 8);
  uVar34 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar4) {
    uVar4 = 0xfff;
  }
  uVar25 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar25 = 4;
  }
  local_1b4 = *(uint *)(param_1 + 0x24);
  piVar5 = *(int **)(param_1 + 0x68);
  piVar6 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,0);
  puVar53 = param_4;
  if ((ulong *)(lVar27 + (ulong)uVar34) == param_4) {
    puVar53 = (ulong *)((long)param_4 + 1);
  }
  if (puVar61 <= puVar53) {
LAB_1006e4ab8:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return (long)puVar3 - (long)param_4;
  }
  uVar28 = (ulong)(uVar25 - 1);
  puVar29 = (ulong *)((long)puVar3 - 7);
  puVar31 = (ulong *)((long)puVar3 - 3);
  puVar30 = (ulong *)((long)puVar3 - 1);
  puVar32 = puVar3 + -4;
  piVar2 = piVar6 + 7;
  lVar27 = (ulong)uVar25 - 1;
LAB_1006e0cdc:
  uVar59 = (long)puVar53 - (long)param_4;
  uVar35 = (uint)uVar59;
  lVar58 = *(long *)(param_1 + 8);
  uVar34 = *(uint *)(param_1 + 0x24);
  uVar60 = (ulong)uVar34;
  if (puVar53 < (ulong *)(lVar58 + uVar60)) goto LAB_1006e0cc8;
  iVar10 = *(int *)(param_1 + 200);
  iVar56 = (int)puVar53;
  uVar37 = iVar56 - (int)lVar58;
  while (uVar34 < uVar37) {
    lVar50 = param_1;
    FUN_100705148(param_1,lVar58 + uVar60,puVar3,iVar10,0);
    uVar34 = (int)lVar50 + (int)uVar60;
    uVar60 = (ulong)uVar34;
  }
  *(uint *)(param_1 + 0x24) = uVar37;
  if (iVar10 - 6U < 2) {
    uVar60 = 0;
    uVar34 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar34) {
      uVar34 = 0xfff;
    }
    lVar58 = *(long *)(param_1 + 8);
    uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar41 = ~uVar49;
    uVar44 = iVar56 - (int)lVar58;
    uVar37 = 0;
    if (uVar41 <= uVar44) {
      uVar37 = uVar44 - uVar41;
    }
    iVar10 = *(int *)(param_1 + 0x18);
    uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar20 = uVar44 - uVar23;
    if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
      uVar20 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    bVar9 = uVar35 == 0;
    uVar24 = (ulong)bVar9;
    lVar50 = *(long *)(param_1 + 0x30);
    uVar23 = *(uint *)(param_1 + 0xc4);
    uVar62 = *puVar53 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar55 = *(uint *)(lVar50 + uVar62 * 4);
    lVar51 = *(long *)(param_1 + 0x40);
    puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
    puVar45 = puVar42 + 1;
    iVar36 = uVar44 + 9;
    uVar16 = 3;
    if (bVar9) {
      uVar16 = 4;
    }
    puVar54 = (ulong *)((long)puVar53 + 4);
    uVar64 = uVar28;
    do {
      if (uVar24 == 3) {
        uVar49 = *param_3 - 1;
        uVar26 = *param_3 - 2;
      }
      else {
        uVar49 = param_3[uVar24];
        uVar26 = uVar49 - 1;
      }
      if ((uVar26 < uVar44 - iVar10) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar49))
         ) {
        lVar33 = -(ulong)uVar49;
        puVar38 = (ulong *)((long)puVar54 + lVar33);
        puVar12 = puVar54;
        if (puVar54 < puVar29) {
          if (*puVar38 == *puVar54) {
            iVar17 = 0;
            puVar12 = (ulong *)((long)puVar53 + 0xc);
            puVar38 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar29 <= puVar12) goto LAB_1006e1228;
              uVar39 = *puVar38;
              uVar63 = *puVar12;
              iVar17 = iVar17 + 8;
              puVar12 = puVar12 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar39 == uVar63);
            uVar63 = uVar63 ^ uVar39;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            iVar17 = iVar17 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar54 ^ *puVar38;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            iVar17 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e1228:
          if (puVar12 < puVar31) {
            if ((uint)*puVar38 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar38 = (ulong *)((long)puVar38 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if (*(short *)puVar38 == *(short *)puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar38 = (ulong *)((long)puVar38 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar38 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          iVar17 = (int)puVar12 - (int)puVar54;
        }
        uVar49 = iVar17 + 4;
        uVar63 = (ulong)uVar49;
        if (uVar64 < uVar63) {
          piVar5[uVar60 * 2] = (int)uVar24 - (uint)bVar9;
          (piVar5 + uVar60 * 2)[1] = uVar49;
          uVar60 = (ulong)((int)uVar60 + 1);
          if ((uVar34 < uVar49) || (uVar64 = uVar63, (ulong *)((long)puVar53 + uVar63) == puVar3))
          goto LAB_1006e2264;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar16);
    *(uint *)(lVar50 + uVar62 * 4) = uVar44;
    if (uVar20 <= uVar55) {
      uVar24 = 0;
      uVar16 = 0;
      uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
      iVar10 = iVar36;
      do {
        uVar62 = uVar24;
        if (uVar16 <= uVar24) {
          uVar62 = uVar16;
        }
        lVar50 = lVar58 + (ulong)uVar55;
        puVar54 = (ulong *)(lVar50 + uVar62);
        puVar38 = (ulong *)((long)puVar53 + uVar62);
        puVar12 = puVar38;
        if (puVar38 < puVar29) {
          if (*puVar54 == *puVar38) {
            lVar33 = 0;
            puVar12 = (ulong *)((long)puVar53 + uVar62 + 8);
            puVar54 = (ulong *)(lVar58 + 8 + uVar62 + uVar55);
            do {
              if (puVar29 <= puVar12) goto joined_r0x0001006e13d4;
              uVar39 = *puVar54;
              uVar63 = *puVar12;
              lVar33 = lVar33 + 8;
              puVar12 = puVar12 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar39 == uVar63);
            uVar63 = uVar63 ^ uVar39;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = lVar33 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar38 ^ *puVar54;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = (ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e13d4:
          if (puVar12 < puVar31) {
            if ((uint)*puVar54 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if ((short)*puVar54 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar54 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          uVar63 = (long)puVar12 - (long)puVar38;
        }
        uVar63 = uVar63 + uVar62;
        iVar36 = iVar10;
        if (uVar64 < uVar63) {
          iVar36 = uVar55 + (int)uVar63;
          if (uVar63 <= iVar10 - uVar55) {
            iVar36 = iVar10;
          }
          piVar5[uVar60 * 2] = (uVar44 + 2) - uVar55;
          (piVar5 + uVar60 * 2)[1] = (int)uVar63;
          uVar60 = (ulong)((int)uVar60 + 1);
          uVar64 = uVar63;
          if (0x1000 < uVar63 || (ulong *)((long)puVar53 + uVar63) == puVar3) break;
        }
        puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
        if (*(byte *)(lVar50 + uVar63) < *(byte *)((long)puVar53 + uVar63)) {
          *puVar42 = uVar55;
          if (uVar55 <= uVar37) goto LAB_1006e2250;
          puVar1 = puVar1 + 1;
          uVar24 = uVar63;
          puVar42 = puVar1;
        }
        else {
          *puVar45 = uVar55;
          puVar45 = puVar1;
          uVar16 = uVar63;
          if (uVar55 <= uVar37) goto LAB_1006e2248;
        }
        if (uVar34 == 0) break;
        uVar34 = uVar34 - 1;
        uVar55 = *puVar1;
        iVar10 = iVar36;
      } while (uVar20 <= uVar55);
    }
    goto LAB_1006e2254;
  }
  if (iVar10 == 5) {
    uVar60 = 0;
    uVar34 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar34) {
      uVar34 = 0xfff;
    }
    lVar58 = *(long *)(param_1 + 8);
    uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar41 = ~uVar49;
    uVar44 = iVar56 - (int)lVar58;
    uVar37 = 0;
    if (uVar41 <= uVar44) {
      uVar37 = uVar44 - uVar41;
    }
    iVar10 = *(int *)(param_1 + 0x18);
    uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar20 = uVar44 - uVar23;
    if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
      uVar20 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    bVar9 = uVar35 == 0;
    uVar24 = (ulong)bVar9;
    lVar50 = *(long *)(param_1 + 0x30);
    uVar23 = *(uint *)(param_1 + 0xc4);
    uVar62 = *puVar53 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar55 = *(uint *)(lVar50 + uVar62 * 4);
    lVar51 = *(long *)(param_1 + 0x40);
    puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
    puVar45 = puVar42 + 1;
    iVar36 = uVar44 + 9;
    uVar16 = 3;
    if (bVar9) {
      uVar16 = 4;
    }
    puVar54 = (ulong *)((long)puVar53 + 4);
    uVar64 = uVar28;
    do {
      if (uVar24 == 3) {
        uVar49 = *param_3 - 1;
        uVar26 = *param_3 - 2;
      }
      else {
        uVar49 = param_3[uVar24];
        uVar26 = uVar49 - 1;
      }
      if ((uVar26 < uVar44 - iVar10) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar49))
         ) {
        lVar33 = -(ulong)uVar49;
        puVar38 = (ulong *)((long)puVar54 + lVar33);
        puVar12 = puVar54;
        if (puVar54 < puVar29) {
          if (*puVar38 == *puVar54) {
            iVar17 = 0;
            puVar12 = (ulong *)((long)puVar53 + 0xc);
            puVar38 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar29 <= puVar12) goto LAB_1006e1734;
              uVar63 = *puVar38;
              uVar39 = *puVar12;
              iVar17 = iVar17 + 8;
              puVar12 = puVar12 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar63 == uVar39);
            uVar39 = uVar39 ^ uVar63;
            uVar63 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            iVar17 = iVar17 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar54 ^ *puVar38;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            iVar17 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e1734:
          if (puVar12 < puVar31) {
            if ((uint)*puVar38 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar38 = (ulong *)((long)puVar38 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if (*(short *)puVar38 == *(short *)puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar38 = (ulong *)((long)puVar38 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar38 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          iVar17 = (int)puVar12 - (int)puVar54;
        }
        uVar49 = iVar17 + 4;
        uVar63 = (ulong)uVar49;
        if (uVar64 < uVar63) {
          piVar5[uVar60 * 2] = (int)uVar24 - (uint)bVar9;
          (piVar5 + uVar60 * 2)[1] = uVar49;
          uVar60 = (ulong)((int)uVar60 + 1);
          if ((uVar34 < uVar49) || (uVar64 = uVar63, (ulong *)((long)puVar53 + uVar63) == puVar3))
          goto LAB_1006e2264;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar16);
    *(uint *)(lVar50 + uVar62 * 4) = uVar44;
    if (uVar20 <= uVar55) {
      uVar24 = 0;
      uVar16 = 0;
      uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
      iVar10 = iVar36;
      do {
        uVar62 = uVar24;
        if (uVar16 <= uVar24) {
          uVar62 = uVar16;
        }
        lVar50 = lVar58 + (ulong)uVar55;
        puVar54 = (ulong *)(lVar50 + uVar62);
        puVar38 = (ulong *)((long)puVar53 + uVar62);
        puVar12 = puVar38;
        if (puVar38 < puVar29) {
          if (*puVar54 == *puVar38) {
            lVar33 = 0;
            puVar12 = (ulong *)((long)puVar53 + uVar62 + 8);
            puVar54 = (ulong *)(lVar58 + 8 + uVar62 + uVar55);
            do {
              if (puVar29 <= puVar12) goto joined_r0x0001006e1c30;
              uVar63 = *puVar54;
              uVar39 = *puVar12;
              lVar33 = lVar33 + 8;
              puVar12 = puVar12 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar63 == uVar39);
            uVar39 = uVar39 ^ uVar63;
            uVar63 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = lVar33 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar38 ^ *puVar54;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = (ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e1c30:
          if (puVar12 < puVar31) {
            if ((uint)*puVar54 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if ((short)*puVar54 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar54 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          uVar63 = (long)puVar12 - (long)puVar38;
        }
        uVar63 = uVar63 + uVar62;
        iVar36 = iVar10;
        if (uVar64 < uVar63) {
          iVar36 = uVar55 + (int)uVar63;
          if (uVar63 <= iVar10 - uVar55) {
            iVar36 = iVar10;
          }
          piVar5[uVar60 * 2] = (uVar44 + 2) - uVar55;
          (piVar5 + uVar60 * 2)[1] = (int)uVar63;
          uVar60 = (ulong)((int)uVar60 + 1);
          uVar64 = uVar63;
          if (0x1000 < uVar63 || (ulong *)((long)puVar53 + uVar63) == puVar3) break;
        }
        puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
        if (*(byte *)(lVar50 + uVar63) < *(byte *)((long)puVar53 + uVar63)) {
          *puVar42 = uVar55;
          if (uVar55 <= uVar37) goto LAB_1006e2250;
          puVar1 = puVar1 + 1;
          uVar24 = uVar63;
          puVar42 = puVar1;
        }
        else {
          *puVar45 = uVar55;
          puVar45 = puVar1;
          uVar16 = uVar63;
          if (uVar55 <= uVar37) goto LAB_1006e2248;
        }
        if (uVar34 == 0) break;
        uVar34 = uVar34 - 1;
        uVar55 = *puVar1;
        iVar10 = iVar36;
      } while (uVar20 <= uVar55);
    }
    goto LAB_1006e2254;
  }
  if (iVar10 != 3) {
    uVar60 = 0;
    uVar34 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar34) {
      uVar34 = 0xfff;
    }
    lVar58 = *(long *)(param_1 + 8);
    uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar41 = ~uVar49;
    uVar44 = iVar56 - (int)lVar58;
    uVar37 = 0;
    if (uVar41 <= uVar44) {
      uVar37 = uVar44 - uVar41;
    }
    iVar10 = *(int *)(param_1 + 0x18);
    uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar20 = uVar44 - uVar23;
    if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
      uVar20 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    bVar9 = uVar35 == 0;
    uVar24 = (ulong)bVar9;
    lVar50 = *(long *)(param_1 + 0x30);
    uVar23 = *(uint *)(param_1 + 0xc4);
    uVar26 = (uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
    uVar55 = *(uint *)(lVar50 + (ulong)uVar26 * 4);
    lVar51 = *(long *)(param_1 + 0x40);
    puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
    puVar45 = puVar42 + 1;
    iVar36 = uVar44 + 9;
    uVar16 = 3;
    if (bVar9) {
      uVar16 = 4;
    }
    puVar54 = (ulong *)((long)puVar53 + 4);
    uVar62 = uVar28;
    do {
      if (uVar24 == 3) {
        uVar49 = *param_3 - 1;
        uVar8 = *param_3 - 2;
      }
      else {
        uVar49 = param_3[uVar24];
        uVar8 = uVar49 - 1;
      }
      if ((uVar8 < uVar44 - iVar10) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar49)))
      {
        lVar33 = -(ulong)uVar49;
        puVar38 = (ulong *)((long)puVar54 + lVar33);
        puVar12 = puVar54;
        if (puVar54 < puVar29) {
          if (*puVar38 == *puVar54) {
            iVar17 = 0;
            puVar12 = (ulong *)((long)puVar53 + 0xc);
            puVar38 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar29 <= puVar12) goto LAB_1006e19fc;
              uVar64 = *puVar38;
              uVar63 = *puVar12;
              iVar17 = iVar17 + 8;
              puVar12 = puVar12 + 1;
              puVar38 = puVar38 + 1;
            } while (uVar64 == uVar63);
            uVar63 = uVar63 ^ uVar64;
            uVar64 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
            uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
            uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
            iVar17 = iVar17 + (int)((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3);
          }
          else {
            uVar64 = *puVar54 ^ *puVar38;
            uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
            uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
            uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
            uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
            iVar17 = (int)((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e19fc:
          if (puVar12 < puVar31) {
            if ((uint)*puVar38 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar38 = (ulong *)((long)puVar38 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if (*(short *)puVar38 == *(short *)puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar38 = (ulong *)((long)puVar38 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar38 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          iVar17 = (int)puVar12 - (int)puVar54;
        }
        uVar49 = iVar17 + 4;
        uVar64 = (ulong)uVar49;
        if (uVar62 < uVar64) {
          piVar5[uVar60 * 2] = (int)uVar24 - (uint)bVar9;
          (piVar5 + uVar60 * 2)[1] = uVar49;
          uVar60 = (ulong)((int)uVar60 + 1);
          if ((uVar34 < uVar49) || (uVar62 = uVar64, (ulong *)((long)puVar53 + uVar64) == puVar3))
          goto LAB_1006e2264;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar16);
    *(uint *)(lVar50 + (ulong)uVar26 * 4) = uVar44;
    if (uVar20 <= uVar55) {
      uVar24 = 0;
      uVar16 = 0;
      uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
      do {
        uVar64 = uVar24;
        if (uVar16 <= uVar24) {
          uVar64 = uVar16;
        }
        lVar50 = lVar58 + (ulong)uVar55;
        puVar54 = (ulong *)(lVar50 + uVar64);
        puVar38 = (ulong *)((long)puVar53 + uVar64);
        puVar12 = puVar38;
        if (puVar38 < puVar29) {
          if (*puVar54 == *puVar38) {
            lVar33 = 0;
            puVar12 = (ulong *)((long)puVar53 + uVar64 + 8);
            puVar54 = (ulong *)(lVar58 + 8 + uVar64 + uVar55);
            do {
              if (puVar29 <= puVar12) goto joined_r0x0001006e1eac;
              uVar63 = *puVar54;
              uVar39 = *puVar12;
              lVar33 = lVar33 + 8;
              puVar12 = puVar12 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar63 == uVar39);
            uVar39 = uVar39 ^ uVar63;
            uVar63 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = lVar33 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar38 ^ *puVar54;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = (ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e1eac:
          if (puVar12 < puVar31) {
            if ((uint)*puVar54 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if ((short)*puVar54 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar54 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          uVar63 = (long)puVar12 - (long)puVar38;
        }
        uVar63 = uVar63 + uVar64;
        if (uVar62 < uVar63) {
          iVar10 = uVar55 + (int)uVar63;
          if (uVar63 <= iVar36 - uVar55) {
            iVar10 = iVar36;
          }
          piVar5[uVar60 * 2] = (uVar44 + 2) - uVar55;
          (piVar5 + uVar60 * 2)[1] = (int)uVar63;
          uVar60 = (ulong)((int)uVar60 + 1);
          uVar62 = uVar63;
          iVar36 = iVar10;
          if (0x1000 < uVar63 || (ulong *)((long)puVar53 + uVar63) == puVar3) break;
        }
        puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
        if (*(byte *)(lVar50 + uVar63) < *(byte *)((long)puVar53 + uVar63)) {
          *puVar42 = uVar55;
          if (uVar55 <= uVar37) {
            puVar42 = &local_94;
            *puVar45 = 0;
            goto LAB_1006e2258;
          }
          puVar1 = puVar1 + 1;
          uVar24 = uVar63;
          puVar42 = puVar1;
        }
        else {
          *puVar45 = uVar55;
          puVar45 = puVar1;
          uVar16 = uVar63;
          if (uVar55 <= uVar37) {
            local_94 = 0;
            goto LAB_1006e2258;
          }
        }
        if (uVar34 == 0) break;
        uVar34 = uVar34 - 1;
        uVar55 = *puVar1;
      } while (uVar20 <= uVar55);
    }
    *puVar45 = 0;
    goto LAB_1006e2258;
  }
  uVar60 = 0;
  uVar34 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar34) {
    uVar34 = 0xfff;
  }
  lVar58 = *(long *)(param_1 + 8);
  uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar41 = ~uVar49;
  uVar44 = (uint)((long)puVar53 - lVar58);
  uVar37 = 0;
  if (uVar41 <= uVar44) {
    uVar37 = uVar44 - uVar41;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar20 = uVar44 - uVar23;
  if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
    uVar20 = *(uint *)(param_1 + 0x1c);
  }
  if (uVar20 < 2) {
    uVar20 = 1;
  }
  bVar9 = uVar35 == 0;
  uVar24 = (ulong)bVar9;
  lVar50 = *(long *)(param_1 + 0x30);
  uVar23 = *(uint *)(param_1 + 0xc4);
  uVar26 = (uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
  uVar55 = *(uint *)(lVar50 + (ulong)uVar26 * 4);
  lVar51 = *(long *)(param_1 + 0x40);
  puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
  puVar45 = puVar42 + 1;
  iVar36 = uVar44 + 9;
  uVar16 = 3;
  if (bVar9) {
    uVar16 = 4;
  }
  puVar54 = (ulong *)((long)puVar53 + 3);
  uVar62 = uVar28;
  do {
    if (uVar24 == 3) {
      uVar49 = *param_3 - 1;
      uVar8 = *param_3 - 2;
    }
    else {
      uVar49 = param_3[uVar24];
      uVar8 = uVar49 - 1;
    }
    if ((uVar8 < uVar44 - iVar10) &&
       (((*(uint *)((long)puVar53 - (ulong)uVar49) ^ (uint)*puVar53) & 0xffffff) == 0)) {
      lVar33 = -(ulong)uVar49;
      puVar38 = (ulong *)((long)puVar54 + lVar33);
      puVar12 = puVar54;
      if (puVar54 < puVar29) {
        if (*puVar38 == *puVar54) {
          iVar17 = 0;
          puVar12 = (ulong *)((long)puVar53 + 0xb);
          puVar38 = (ulong *)((long)puVar53 + 0xb + lVar33);
          do {
            if (puVar29 <= puVar12) goto LAB_1006e0f5c;
            uVar64 = *puVar38;
            uVar63 = *puVar12;
            iVar17 = iVar17 + 8;
            puVar12 = puVar12 + 1;
            puVar38 = puVar38 + 1;
          } while (uVar64 == uVar63);
          uVar63 = uVar63 ^ uVar64;
          uVar64 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
          uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
          uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
          uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
          iVar17 = iVar17 + (int)((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3);
        }
        else {
          uVar64 = *puVar54 ^ *puVar38;
          uVar64 = (uVar64 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar64 & 0x5555555555555555) << 1;
          uVar64 = (uVar64 & 0xcccccccccccccccc) >> 2 | (uVar64 & 0x3333333333333333) << 2;
          uVar64 = (uVar64 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar64 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar64 = (uVar64 & 0xff00ff00ff00ff00) >> 8 | (uVar64 & 0xff00ff00ff00ff) << 8;
          uVar64 = (uVar64 & 0xffff0000ffff0000) >> 0x10 | (uVar64 & 0xffff0000ffff) << 0x10;
          iVar17 = (int)((ulong)LZCOUNT(uVar64 >> 0x20 | uVar64 << 0x20) >> 3);
        }
      }
      else {
LAB_1006e0f5c:
        if (puVar12 < puVar31) {
          if ((uint)*puVar38 == (uint)*puVar12) {
            puVar12 = (ulong *)((long)puVar12 + 4);
            puVar38 = (ulong *)((long)puVar38 + 4);
          }
        }
        if (puVar12 < puVar30) {
          if (*(short *)puVar38 == *(short *)puVar12) {
            puVar12 = (ulong *)((long)puVar12 + 2);
            puVar38 = (ulong *)((long)puVar38 + 2);
          }
        }
        if ((puVar12 < puVar3) && ((char)*puVar38 == (char)*puVar12)) {
          puVar12 = (ulong *)((long)puVar12 + 1);
        }
        iVar17 = (int)puVar12 - (int)puVar54;
      }
      uVar49 = iVar17 + 3;
      uVar64 = (ulong)uVar49;
      if (uVar62 < uVar64) {
        piVar5[uVar60 * 2] = (int)uVar24 - (uint)bVar9;
        (piVar5 + uVar60 * 2)[1] = uVar49;
        uVar60 = (ulong)((int)uVar60 + 1);
        if ((uVar34 < uVar49) || (uVar62 = uVar64, (ulong *)((long)puVar53 + uVar64) == puVar3))
        goto LAB_1006e2264;
      }
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 < uVar16);
  if (2 < uVar62) {
LAB_1006e1dac:
    *(uint *)(lVar50 + (ulong)uVar26 * 4) = uVar44;
    if (uVar20 <= uVar55) {
      uVar24 = 0;
      uVar16 = 0;
      uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
      iVar10 = iVar36;
      do {
        uVar64 = uVar24;
        if (uVar16 <= uVar24) {
          uVar64 = uVar16;
        }
        lVar50 = lVar58 + (ulong)uVar55;
        puVar54 = (ulong *)(lVar50 + uVar64);
        puVar38 = (ulong *)((long)puVar53 + uVar64);
        puVar12 = puVar38;
        if (puVar38 < puVar29) {
          if (*puVar54 == *puVar38) {
            lVar33 = 0;
            puVar12 = (ulong *)((long)puVar53 + uVar64 + 8);
            puVar54 = (ulong *)(lVar58 + 8 + uVar64 + uVar55);
            do {
              if (puVar29 <= puVar12) goto joined_r0x0001006e20e4;
              uVar63 = *puVar54;
              uVar39 = *puVar12;
              lVar33 = lVar33 + 8;
              puVar12 = puVar12 + 1;
              puVar54 = puVar54 + 1;
            } while (uVar63 == uVar39);
            uVar39 = uVar39 ^ uVar63;
            uVar63 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = lVar33 + ((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
          }
          else {
            uVar63 = *puVar38 ^ *puVar54;
            uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
            uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
            uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
            uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
            uVar63 = (ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e20e4:
          if (puVar12 < puVar31) {
            if ((uint)*puVar54 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar54 = (ulong *)((long)puVar54 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if ((short)*puVar54 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar54 = (ulong *)((long)puVar54 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar54 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          uVar63 = (long)puVar12 - (long)puVar38;
        }
        uVar63 = uVar63 + uVar64;
        iVar36 = iVar10;
        if (uVar62 < uVar63) {
          iVar36 = uVar55 + (int)uVar63;
          if (uVar63 <= iVar10 - uVar55) {
            iVar36 = iVar10;
          }
          piVar5[uVar60 * 2] = (uVar44 + 2) - uVar55;
          (piVar5 + uVar60 * 2)[1] = (int)uVar63;
          uVar60 = (ulong)((int)uVar60 + 1);
          uVar62 = uVar63;
          if (0x1000 < uVar63 || (ulong *)((long)puVar53 + uVar63) == puVar3) break;
        }
        puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
        if (*(byte *)(lVar50 + uVar63) < *(byte *)((long)puVar53 + uVar63)) {
          *puVar42 = uVar55;
          if (uVar55 <= uVar37) {
            puVar42 = &local_94;
            break;
          }
          puVar1 = puVar1 + 1;
          uVar24 = uVar63;
          puVar42 = puVar1;
        }
        else {
          *puVar45 = uVar55;
          puVar45 = puVar1;
          uVar16 = uVar63;
          if (uVar55 <= uVar37) {
            puVar45 = &local_94;
            break;
          }
        }
        if (uVar34 == 0) break;
        uVar34 = uVar34 - 1;
        uVar55 = *puVar1;
        iVar10 = iVar36;
      } while (uVar20 <= uVar55);
    }
    *puVar45 = 0;
    *puVar42 = 0;
    *(int *)(param_1 + 0x24) = iVar36 + -8;
    iVar10 = (int)uVar60;
    goto joined_r0x0001006e2270;
  }
  lVar33 = *(long *)(param_1 + 0x38);
  uVar24 = *puVar53;
  uVar49 = 0x20 - *(int *)(param_1 + 0x28);
  if (local_1b4 < uVar44) {
    uVar16 = (ulong)local_1b4;
    do {
      *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar58 + uVar16) * 0x35a7bd00) >>
                               (ulong)(uVar49 & 0x1f)) * 4) = (int)uVar16;
      uVar16 = uVar16 + 1;
    } while (((long)puVar53 - lVar58 & 0xffffffffU) != uVar16);
  }
  uVar49 = *(uint *)(lVar33 + (ulong)((uint)uVar24 * 0x35a7bd00 >> (ulong)(uVar49 & 0x1f)) * 4);
  local_1b4 = uVar44;
  if (uVar49 < uVar20 || uVar44 - uVar49 >> 0x12 != 0) goto LAB_1006e1dac;
  puVar54 = (ulong *)(lVar58 + (ulong)uVar49);
  puVar38 = puVar53;
  if (puVar53 < puVar29) {
    if (*puVar54 == *puVar53) {
      lVar33 = 0;
      puVar54 = (ulong *)(lVar58 + (ulong)uVar49);
      do {
        puVar54 = puVar54 + 1;
        puVar38 = puVar38 + 1;
        if (puVar29 <= puVar38) goto LAB_1006e4950;
        lVar33 = lVar33 + 8;
      } while (*puVar54 == *puVar38);
      uVar24 = *puVar38 ^ *puVar54;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = lVar33 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
    }
    else {
      uVar24 = *puVar53 ^ *puVar54;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
    }
  }
  else {
LAB_1006e4950:
    if (puVar38 < puVar31) {
      if ((uint)*puVar54 == (uint)*puVar38) {
        puVar38 = (ulong *)((long)puVar38 + 4);
        puVar54 = (ulong *)((long)puVar54 + 4);
      }
    }
    if (puVar38 < puVar30) {
      if (*(short *)puVar54 == *(short *)puVar38) {
        puVar38 = (ulong *)((long)puVar38 + 2);
        puVar54 = (ulong *)((long)puVar54 + 2);
      }
    }
    if ((puVar38 < puVar3) && ((char)*puVar54 == (char)*puVar38)) {
      puVar38 = (ulong *)((long)puVar38 + 1);
    }
    uVar24 = (long)puVar38 - (long)puVar53;
  }
  if (uVar24 < 3) goto LAB_1006e1dac;
  *piVar5 = (uVar44 - uVar49) + 2;
  piVar5[1] = (int)uVar24;
  if (uVar24 <= uVar34 && (ulong *)((long)puVar53 + uVar24) != puVar3) {
    uVar60 = 1;
    uVar62 = uVar24;
    goto LAB_1006e1dac;
  }
  uVar60 = 1;
  *(uint *)(param_1 + 0x24) = uVar44 + 1;
  goto LAB_1006e2274;
LAB_1006e2248:
  puVar45 = &local_94;
  goto LAB_1006e2254;
LAB_1006e2250:
  puVar42 = &local_94;
LAB_1006e2254:
  *puVar45 = 0;
LAB_1006e2258:
  *puVar42 = 0;
  *(int *)(param_1 + 0x24) = iVar36 + -8;
LAB_1006e2264:
  iVar10 = (int)uVar60;
joined_r0x0001006e2270:
  if (iVar10 == 0) {
LAB_1006e0cc8:
    puVar53 = (ulong *)((long)puVar53 + 1);
    goto joined_r0x0001006e0cd8;
  }
LAB_1006e2274:
  piVar6[4] = *param_3;
  piVar6[5] = param_3[1];
  piVar6[6] = param_3[2];
  piVar6[2] = 0;
  piVar6[3] = uVar35;
  lVar58 = lVar27;
  piVar46 = piVar2;
  if (uVar35 == 0) {
    iVar10 = 0;
    iVar36 = *(int *)(param_1 + 0x98);
    if (iVar36 != 0) goto LAB_1006e2388;
LAB_1006e23ec:
    uVar34 = (uint)(byte)(&DAT_10084fdf4)[uVar59 & 0xffffffff];
LAB_1006e23f8:
    iVar10 = ((int)LZCOUNT((*(int **)(param_1 + 0x50))[uVar34] + 1) << 8 ^ 0xffffe0ffU) +
             (((uint)LZCOUNT(**(int **)(param_1 + 0x50) + 1) ^ 0x1f) +
             *(int *)(&DAT_10084fd64 + (ulong)uVar34 * 4)) * 0x100 + iVar10 + 1;
    *piVar6 = iVar10;
    piVar11 = piVar5 + (ulong)((int)uVar60 - 1) * 2;
    uVar34 = piVar11[1];
    if (uVar4 < uVar34) goto LAB_1006e2460;
LAB_1006e246c:
    iVar36 = *(int *)(param_1 + 0x8c) +
             ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
LAB_1006e2498:
    do {
      *piVar46 = 0x40000000;
      lVar58 = lVar58 + -1;
      piVar46 = piVar46 + 7;
    } while (lVar58 != 0);
    uVar59 = 0;
    uVar24 = (ulong)uVar25;
    do {
      uVar34 = piVar5[uVar59 * 2];
      uVar37 = (piVar5 + uVar59 * 2)[1];
      if (uVar34 < 3) {
        uVar49 = uVar34 + (uVar35 == 0);
        if (uVar49 == 0) {
          iVar17 = *param_3;
          iVar47 = param_3[1];
          piVar46 = param_3 + 2;
        }
        else {
          if (uVar49 == 3) {
            iVar47 = *param_3;
            iVar17 = iVar47 + -1;
          }
          else {
            iVar17 = param_3[uVar49];
            iVar47 = *param_3;
          }
          lVar58 = 8;
          if (uVar49 != 1) {
            lVar58 = 4;
          }
          piVar46 = (int *)((long)param_3 + lVar58);
        }
      }
      else {
        iVar47 = *param_3;
        iVar17 = uVar34 - 2;
        piVar46 = param_3 + 1;
      }
      if ((uint)uVar24 <= uVar37) {
        iVar15 = *piVar46;
        uVar49 = (uint)LZCOUNT(uVar34 + 1) ^ 0x1f;
        iVar40 = uVar49 * 0x200 + -0x25cd;
        if (uVar49 < 0x14) {
          iVar40 = 0x33;
        }
        do {
          iVar19 = (int)uVar24;
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar13 = uVar49 * 0x100 + 0x1000 + ((int)LZCOUNT(iVar19 + -2) << 8 ^ 0x1f00U);
          }
          else {
            uVar41 = iVar19 - 3;
            if (uVar41 < 0x80) {
              uVar41 = (uint)(byte)(&DAT_10084ff08)[uVar41];
            }
            else {
              uVar41 = 0x43 - (int)LZCOUNT(uVar41);
            }
            iVar13 = ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar41 * 4) + 1) << 8
                     ^ 0xffffe0ffU) +
                     iVar40 + *(int *)(param_1 + 0x94) +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar49 * 4) + 1) << 8
                     ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                     (*(int *)(&DAT_10084fe34 + (ulong)uVar41 * 4) + uVar49) * 0x100 + 2;
          }
          piVar46 = piVar6 + uVar24 * 7;
          piVar46[2] = iVar19;
          piVar46[3] = uVar35;
          *piVar46 = iVar36 + iVar10 + iVar13;
          piVar46[1] = uVar34;
          *(ulong *)(piVar46 + 4) = CONCAT44(iVar47,iVar17);
          piVar46[6] = iVar15;
          uVar24 = (ulong)(iVar19 + 1U);
        } while (iVar19 + 1U <= uVar37);
      }
      uVar59 = uVar59 + 1;
    } while (uVar59 != uVar60);
    uVar34 = (int)uVar24 - 1;
    uVar60 = (ulong)uVar34;
    uVar59 = uVar60;
    if (uVar34 != 0) {
      uVar24 = 1;
LAB_1006e2678:
      iVar56 = iVar56 + 1;
      iVar10 = (int)uVar24;
      piVar46 = piVar6 + (ulong)(iVar10 - 1) * 7;
      if (piVar46[2] == 0) {
        uVar34 = piVar46[3] + 1;
      }
      else {
        uVar34 = 1;
      }
      puVar54 = (ulong *)((long)puVar53 + uVar24);
      iVar36 = *piVar46;
      if (*(int *)(param_1 + 0xa8) == 2) {
        iVar36 = iVar36 + 0x800;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006e26fc;
        if (uVar34 < 0x40) goto LAB_1006e2768;
LAB_1006e26c8:
        uVar35 = 0x32 - (int)LZCOUNT(uVar34);
        if (0x3f < uVar34 - 1) goto LAB_1006e2780;
LAB_1006e26e0:
        uVar37 = (uint)(byte)(&DAT_10084fdf4)[uVar34 - 1];
LAB_1006e278c:
        iVar36 = iVar36 + *(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar35 * 4) * 0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar35 * 4) + 1)
                           << 8 ^ 0xffffe0ffU) + 1 +
                          ~*(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar37 * 4) * -0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar37 * 4) + 1)
                           << 8 ^ 0x1f01U);
        piVar11 = piVar6 + uVar24 * 7;
        iVar17 = *piVar11;
        if (iVar36 <= iVar17) goto LAB_1006e2800;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 1) {
          iVar36 = (*(int *)(param_1 + 0x88) -
                   ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x48) +
                                         (ulong)*(byte *)((long)puVar54 - 1) * 4) + 1) << 8 ^
                   0x1f00U)) + iVar36;
          if (0x3f < uVar34) goto LAB_1006e26c8;
LAB_1006e2768:
          uVar35 = (uint)(byte)(&DAT_10084fdf4)[uVar34];
          if (uVar34 - 1 < 0x40) goto LAB_1006e26e0;
LAB_1006e2780:
          uVar37 = 0x32 - (int)LZCOUNT(uVar34 - 1);
          goto LAB_1006e278c;
        }
        iVar36 = iVar36 + 0x600;
LAB_1006e26fc:
        iVar36 = iVar36 + ((int)LZCOUNT(uVar34 + 1) << 8 ^ 0x1f00U) +
                          ((int)LZCOUNT(uVar34) << 8 ^ 0xffffe0ffU) + 1;
        piVar11 = piVar6 + uVar24 * 7;
        iVar17 = *piVar11;
        if (iVar36 <= iVar17) {
LAB_1006e2800:
          iVar17 = iVar36;
          piVar11[2] = 0;
          piVar11[3] = uVar34;
          *piVar11 = iVar17;
          piVar11[1] = 0;
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar46 + 4);
          piVar11[6] = piVar46[6];
        }
      }
      if (puVar61 < puVar54) {
        uVar59 = (ulong)(iVar10 + 1);
        goto LAB_1006e2668;
      }
      uVar59 = uVar24;
      if (iVar10 != (int)uVar60) {
        uVar59 = (ulong)(iVar10 + 1U);
        if (piVar6[uVar59 * 7] <= iVar17 + 0x80) goto LAB_1006e2668;
        iVar36 = piVar11[2];
        if (iVar36 == 0) {
          uVar35 = piVar11[3];
          if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006e2870;
LAB_1006e2bf8:
          iVar47 = *(int *)(param_1 + 0x8c) +
                   ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
          lVar58 = *(long *)(param_1 + 8);
          uVar16 = (ulong)*(uint *)(param_1 + 0x24);
          puVar38 = (ulong *)(lVar58 + uVar16);
        }
        else {
          uVar35 = 0;
          if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006e2bf8;
LAB_1006e2870:
          iVar47 = 0;
          lVar58 = *(long *)(param_1 + 8);
          uVar16 = (ulong)*(uint *)(param_1 + 0x24);
          puVar38 = (ulong *)(lVar58 + uVar16);
        }
        if (puVar54 < puVar38) goto LAB_1006e2668;
        iVar40 = *(int *)(param_1 + 200);
        iVar15 = (int)puVar54;
        uVar37 = iVar15 - (int)lVar58;
        uVar34 = (uint)uVar16;
        while (uVar34 < uVar37) {
          lVar50 = param_1;
          FUN_100705148(param_1,lVar58 + uVar16,puVar3,iVar40,0);
          uVar34 = (int)lVar50 + (int)uVar16;
          uVar16 = (ulong)uVar34;
        }
        piVar46 = piVar11 + 4;
        *(uint *)(param_1 + 0x24) = uVar37;
        if (iVar40 - 6U < 2) {
          uVar59 = 0;
          uVar34 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar34) {
            uVar34 = 0xfff;
          }
          lVar58 = *(long *)(param_1 + 8);
          uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar41 = ~uVar49;
          uVar44 = iVar15 - (int)lVar58;
          uVar37 = 0;
          if (uVar41 <= uVar44) {
            uVar37 = uVar44 - uVar41;
          }
          iVar40 = *(int *)(param_1 + 0x18);
          uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar20 = uVar44 - uVar23;
          if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
            uVar20 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          bVar9 = iVar36 != 0;
          uVar16 = (ulong)bVar9;
          puVar38 = (ulong *)((long)puVar54 + 4);
          lVar50 = *(long *)(param_1 + 0x30);
          uVar23 = *(uint *)(param_1 + 0xc4);
          uVar64 = *puVar54 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar55 = *(uint *)(lVar50 + uVar64 * 4);
          lVar51 = *(long *)(param_1 + 0x40);
          puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
          puVar45 = puVar42 + 1;
          iVar15 = uVar44 + 9;
          uVar62 = 3;
          if (bVar9) {
            uVar62 = 4;
          }
          puVar12 = (ulong *)((long)puVar53 + uVar24 + 0xc);
          uVar63 = uVar28;
          do {
            if (uVar16 == 3) {
              uVar49 = *piVar46 - 1;
              uVar26 = *piVar46 - 2;
            }
            else {
              uVar49 = piVar46[uVar16];
              uVar26 = uVar49 - 1;
            }
            if ((uVar26 < uVar44 - iVar40) &&
               ((uint)*puVar54 == *(uint *)((long)puVar54 - (ulong)uVar49))) {
              lVar33 = -(ulong)uVar49;
              puVar14 = (ulong *)((long)puVar38 + lVar33);
              puVar21 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar14 == *puVar38) {
                  iVar19 = 0;
                  puVar21 = puVar12;
                  puVar14 = (ulong *)((long)puVar12 + lVar33);
                  do {
                    if (puVar29 <= puVar21) goto joined_r0x0001006e2f08;
                    uVar18 = *puVar14;
                    uVar39 = *puVar21;
                    iVar19 = iVar19 + 8;
                    puVar21 = puVar21 + 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar18 == uVar39);
                  uVar39 = uVar39 ^ uVar18;
                  uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                  uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                  uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                  uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = iVar19 + (int)((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
                }
                else {
                  uVar39 = *puVar38 ^ *puVar14;
                  uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                  uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                  uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                  uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = (int)((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006e2f08:
                if (puVar21 < puVar31) {
                  if ((uint)*puVar14 == (uint)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 4);
                    puVar14 = (ulong *)((long)puVar14 + 4);
                  }
                }
                if (puVar21 < puVar30) {
                  if ((short)*puVar14 == (short)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 2);
                    puVar14 = (ulong *)((long)puVar14 + 2);
                  }
                }
                if ((puVar21 < puVar3) && ((char)*puVar14 == (char)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 1);
                }
                iVar19 = (int)puVar21 - (int)puVar38;
              }
              uVar49 = iVar19 + 4;
              uVar39 = (ulong)uVar49;
              if (uVar63 < uVar39) {
                piVar5[uVar59 * 2] = (int)uVar16 - (uint)bVar9;
                (piVar5 + uVar59 * 2)[1] = uVar49;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                if ((uVar34 < uVar49) ||
                   (uVar63 = uVar39, (ulong *)((long)puVar54 + uVar39) == puVar3))
                goto joined_r0x0001006e3fb4;
              }
            }
            uVar26 = (uint)uVar59;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar62);
          *(uint *)(lVar50 + uVar64 * 4) = uVar44;
          if (uVar20 <= uVar55) {
            uVar16 = 0;
            uVar62 = 0;
            uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
            iVar40 = iVar15;
            do {
              uVar64 = uVar16;
              if (uVar62 <= uVar16) {
                uVar64 = uVar62;
              }
              uVar39 = (ulong)uVar55;
              puVar12 = (ulong *)(lVar58 + uVar39 + uVar64);
              puVar38 = (ulong *)((long)puVar54 + uVar64);
              puVar14 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar12 == *puVar38) {
                  lVar50 = 0;
                  do {
                    puVar12 = (ulong *)((long)puVar53 + lVar50 + uVar64 + uVar24 + 8);
                    if (puVar29 <= puVar12) {
                      puVar12 = (ulong *)(lVar58 + 8 + uVar64 + uVar39 + lVar50);
                      puVar14 = (ulong *)((long)puVar53 + lVar50 + uVar64 + uVar24 + 8);
                      goto joined_r0x0001006e3010;
                    }
                    uVar52 = *(ulong *)(lVar58 + 8 + uVar64 + uVar39 + lVar50);
                    uVar18 = *puVar12;
                    lVar50 = lVar50 + 8;
                  } while (uVar52 == uVar18);
                  uVar18 = uVar18 ^ uVar52;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar50 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                }
                else {
                  uVar18 = *puVar38 ^ *puVar12;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
                uVar18 = uVar18 + uVar64;
              }
              else {
joined_r0x0001006e3010:
                if (puVar14 < puVar31) {
                  if ((uint)*puVar12 == (uint)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 4);
                    puVar12 = (ulong *)((long)puVar12 + 4);
                  }
                }
                if (puVar14 < puVar30) {
                  if ((short)*puVar12 == (short)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 2);
                    puVar12 = (ulong *)((long)puVar12 + 2);
                  }
                }
                if ((puVar14 < puVar3) && ((char)*puVar12 == (char)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 1);
                }
                uVar18 = (long)puVar14 + (uVar64 - (long)puVar38);
              }
              iVar15 = iVar40;
              if (uVar63 < uVar18) {
                iVar15 = uVar55 + (int)uVar18;
                if (uVar18 <= iVar40 - uVar55) {
                  iVar15 = iVar40;
                }
                piVar5[uVar59 * 2] = (uVar44 + 2) - uVar55;
                (piVar5 + uVar59 * 2)[1] = (int)uVar18;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                uVar63 = uVar18;
                if (0x1000 < uVar18 || (ulong *)((long)puVar54 + uVar18) == puVar3) break;
              }
              uVar26 = (uint)uVar59;
              puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
              if (*(byte *)(lVar58 + uVar39 + uVar18) < *(byte *)((long)puVar54 + uVar18)) {
                *puVar42 = uVar55;
                if (uVar55 <= uVar37) goto LAB_1006e3cb4;
                puVar1 = puVar1 + 1;
                uVar16 = uVar18;
                puVar42 = puVar1;
              }
              else {
                *puVar45 = uVar55;
                puVar45 = puVar1;
                uVar62 = uVar18;
                if (uVar55 <= uVar37) goto LAB_1006e3cac;
              }
              if (uVar34 == 0) break;
              uVar34 = uVar34 - 1;
              uVar55 = *puVar1;
              iVar40 = iVar15;
            } while (uVar20 <= uVar55);
          }
          goto LAB_1006e3cb8;
        }
        if (iVar40 == 5) {
          uVar59 = 0;
          uVar34 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar34) {
            uVar34 = 0xfff;
          }
          lVar58 = *(long *)(param_1 + 8);
          uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar41 = ~uVar49;
          uVar44 = iVar15 - (int)lVar58;
          uVar37 = 0;
          if (uVar41 <= uVar44) {
            uVar37 = uVar44 - uVar41;
          }
          iVar40 = *(int *)(param_1 + 0x18);
          uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar20 = uVar44 - uVar23;
          if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
            uVar20 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          bVar9 = iVar36 != 0;
          uVar16 = (ulong)bVar9;
          puVar38 = (ulong *)((long)puVar54 + 4);
          lVar50 = *(long *)(param_1 + 0x30);
          uVar23 = *(uint *)(param_1 + 0xc4);
          uVar64 = *puVar54 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar55 = *(uint *)(lVar50 + uVar64 * 4);
          lVar51 = *(long *)(param_1 + 0x40);
          puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
          puVar45 = puVar42 + 1;
          iVar15 = uVar44 + 9;
          uVar62 = 3;
          if (bVar9) {
            uVar62 = 4;
          }
          puVar12 = (ulong *)((long)puVar53 + uVar24 + 0xc);
          uVar63 = uVar28;
          do {
            if (uVar16 == 3) {
              uVar49 = *piVar46 - 1;
              uVar26 = *piVar46 - 2;
            }
            else {
              uVar49 = piVar46[uVar16];
              uVar26 = uVar49 - 1;
            }
            if ((uVar26 < uVar44 - iVar40) &&
               ((uint)*puVar54 == *(uint *)((long)puVar54 - (ulong)uVar49))) {
              lVar33 = -(ulong)uVar49;
              puVar14 = (ulong *)((long)puVar38 + lVar33);
              puVar21 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar14 == *puVar38) {
                  iVar19 = 0;
                  puVar21 = puVar12;
                  puVar14 = (ulong *)((long)puVar12 + lVar33);
                  do {
                    if (puVar29 <= puVar21) goto joined_r0x0001006e3450;
                    uVar18 = *puVar14;
                    uVar39 = *puVar21;
                    iVar19 = iVar19 + 8;
                    puVar21 = puVar21 + 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar18 == uVar39);
                  uVar39 = uVar39 ^ uVar18;
                  uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                  uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                  uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                  uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = iVar19 + (int)((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
                }
                else {
                  uVar39 = *puVar38 ^ *puVar14;
                  uVar39 = (uVar39 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar39 & 0x5555555555555555) << 1;
                  uVar39 = (uVar39 & 0xcccccccccccccccc) >> 2 | (uVar39 & 0x3333333333333333) << 2;
                  uVar39 = (uVar39 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar39 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar39 = (uVar39 & 0xff00ff00ff00ff00) >> 8 | (uVar39 & 0xff00ff00ff00ff) << 8;
                  uVar39 = (uVar39 & 0xffff0000ffff0000) >> 0x10 | (uVar39 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = (int)((ulong)LZCOUNT(uVar39 >> 0x20 | uVar39 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006e3450:
                if (puVar21 < puVar31) {
                  if ((uint)*puVar14 == (uint)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 4);
                    puVar14 = (ulong *)((long)puVar14 + 4);
                  }
                }
                if (puVar21 < puVar30) {
                  if ((short)*puVar14 == (short)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 2);
                    puVar14 = (ulong *)((long)puVar14 + 2);
                  }
                }
                if ((puVar21 < puVar3) && ((char)*puVar14 == (char)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 1);
                }
                iVar19 = (int)puVar21 - (int)puVar38;
              }
              uVar49 = iVar19 + 4;
              uVar39 = (ulong)uVar49;
              if (uVar63 < uVar39) {
                piVar5[uVar59 * 2] = (int)uVar16 - (uint)bVar9;
                (piVar5 + uVar59 * 2)[1] = uVar49;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                if ((uVar34 < uVar49) ||
                   (uVar63 = uVar39, (ulong *)((long)puVar54 + uVar39) == puVar3))
                goto joined_r0x0001006e3fb4;
              }
            }
            uVar26 = (uint)uVar59;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar62);
          *(uint *)(lVar50 + uVar64 * 4) = uVar44;
          if (uVar20 <= uVar55) {
            uVar16 = 0;
            uVar62 = 0;
            uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
            iVar40 = iVar15;
            do {
              uVar64 = uVar16;
              if (uVar62 <= uVar16) {
                uVar64 = uVar62;
              }
              uVar39 = (ulong)uVar55;
              puVar12 = (ulong *)(lVar58 + uVar39 + uVar64);
              puVar38 = (ulong *)((long)puVar54 + uVar64);
              puVar14 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar12 == *puVar38) {
                  lVar50 = 0;
                  do {
                    puVar12 = (ulong *)((long)puVar53 + lVar50 + uVar64 + uVar24 + 8);
                    if (puVar29 <= puVar12) {
                      puVar12 = (ulong *)(lVar58 + 8 + uVar64 + uVar39 + lVar50);
                      puVar14 = (ulong *)((long)puVar53 + lVar50 + uVar64 + uVar24 + 8);
                      goto joined_r0x0001006e38bc;
                    }
                    uVar52 = *(ulong *)(lVar58 + 8 + uVar64 + uVar39 + lVar50);
                    uVar18 = *puVar12;
                    lVar50 = lVar50 + 8;
                  } while (uVar52 == uVar18);
                  uVar18 = uVar18 ^ uVar52;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar50 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                }
                else {
                  uVar18 = *puVar38 ^ *puVar12;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
                uVar18 = uVar18 + uVar64;
              }
              else {
joined_r0x0001006e38bc:
                if (puVar14 < puVar31) {
                  if ((uint)*puVar12 == (uint)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 4);
                    puVar12 = (ulong *)((long)puVar12 + 4);
                  }
                }
                if (puVar14 < puVar30) {
                  if ((short)*puVar12 == (short)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 2);
                    puVar12 = (ulong *)((long)puVar12 + 2);
                  }
                }
                if ((puVar14 < puVar3) && ((char)*puVar12 == (char)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 1);
                }
                uVar18 = (long)puVar14 + (uVar64 - (long)puVar38);
              }
              iVar15 = iVar40;
              if (uVar63 < uVar18) {
                iVar15 = uVar55 + (int)uVar18;
                if (uVar18 <= iVar40 - uVar55) {
                  iVar15 = iVar40;
                }
                piVar5[uVar59 * 2] = (uVar44 + 2) - uVar55;
                (piVar5 + uVar59 * 2)[1] = (int)uVar18;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                uVar63 = uVar18;
                if (0x1000 < uVar18 || (ulong *)((long)puVar54 + uVar18) == puVar3) break;
              }
              uVar26 = (uint)uVar59;
              puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
              if (*(byte *)(lVar58 + uVar39 + uVar18) < *(byte *)((long)puVar54 + uVar18)) {
                *puVar42 = uVar55;
                if (uVar55 <= uVar37) goto LAB_1006e3cb4;
                puVar1 = puVar1 + 1;
                uVar16 = uVar18;
                puVar42 = puVar1;
              }
              else {
                *puVar45 = uVar55;
                puVar45 = puVar1;
                uVar62 = uVar18;
                if (uVar55 <= uVar37) goto LAB_1006e3cac;
              }
              if (uVar34 == 0) break;
              uVar34 = uVar34 - 1;
              uVar55 = *puVar1;
              iVar40 = iVar15;
            } while (uVar20 <= uVar55);
          }
          goto LAB_1006e3cb8;
        }
        if (iVar40 != 3) {
          uVar59 = 0;
          uVar34 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar34) {
            uVar34 = 0xfff;
          }
          lVar58 = *(long *)(param_1 + 8);
          uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar41 = ~uVar49;
          uVar44 = iVar15 - (int)lVar58;
          uVar37 = 0;
          if (uVar41 <= uVar44) {
            uVar37 = uVar44 - uVar41;
          }
          iVar40 = *(int *)(param_1 + 0x18);
          uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar20 = uVar44 - uVar23;
          if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
            uVar20 = *(uint *)(param_1 + 0x1c);
          }
          if (uVar20 < 2) {
            uVar20 = 1;
          }
          bVar9 = iVar36 != 0;
          uVar16 = (ulong)bVar9;
          puVar38 = (ulong *)((long)puVar54 + 4);
          lVar50 = *(long *)(param_1 + 0x30);
          uVar23 = *(uint *)(param_1 + 0xc4);
          uVar8 = (uint)*puVar54 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar55 = *(uint *)(lVar50 + (ulong)uVar8 * 4);
          lVar51 = *(long *)(param_1 + 0x40);
          puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
          puVar45 = puVar42 + 1;
          iVar15 = uVar44 + 9;
          uVar62 = 3;
          if (bVar9) {
            uVar62 = 4;
          }
          puVar12 = (ulong *)((long)puVar53 + uVar24 + 0xc);
          uVar64 = uVar28;
          do {
            if (uVar16 == 3) {
              uVar49 = *piVar46 - 1;
              uVar26 = *piVar46 - 2;
            }
            else {
              uVar49 = piVar46[uVar16];
              uVar26 = uVar49 - 1;
            }
            if ((uVar26 < uVar44 - iVar40) &&
               ((uint)*puVar54 == *(uint *)((long)puVar54 - (ulong)uVar49))) {
              lVar33 = -(ulong)uVar49;
              puVar14 = (ulong *)((long)puVar38 + lVar33);
              puVar21 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar14 == *puVar38) {
                  iVar19 = 0;
                  puVar21 = puVar12;
                  puVar14 = (ulong *)((long)puVar12 + lVar33);
                  do {
                    if (puVar29 <= puVar21) goto joined_r0x0001006e3720;
                    uVar39 = *puVar14;
                    uVar63 = *puVar21;
                    iVar19 = iVar19 + 8;
                    puVar21 = puVar21 + 1;
                    puVar14 = puVar14 + 1;
                  } while (uVar39 == uVar63);
                  uVar63 = uVar63 ^ uVar39;
                  uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
                  uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
                  uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
                  uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = iVar19 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
                }
                else {
                  uVar63 = *puVar38 ^ *puVar14;
                  uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
                  uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
                  uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
                  uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10
                  ;
                  iVar19 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
                }
              }
              else {
joined_r0x0001006e3720:
                if (puVar21 < puVar31) {
                  if ((uint)*puVar14 == (uint)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 4);
                    puVar14 = (ulong *)((long)puVar14 + 4);
                  }
                }
                if (puVar21 < puVar30) {
                  if ((short)*puVar14 == (short)*puVar21) {
                    puVar21 = (ulong *)((long)puVar21 + 2);
                    puVar14 = (ulong *)((long)puVar14 + 2);
                  }
                }
                if ((puVar21 < puVar3) && ((char)*puVar14 == (char)*puVar21)) {
                  puVar21 = (ulong *)((long)puVar21 + 1);
                }
                iVar19 = (int)puVar21 - (int)puVar38;
              }
              uVar49 = iVar19 + 4;
              uVar63 = (ulong)uVar49;
              if (uVar64 < uVar63) {
                piVar5[uVar59 * 2] = (int)uVar16 - (uint)bVar9;
                (piVar5 + uVar59 * 2)[1] = uVar49;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                if ((uVar34 < uVar49) ||
                   (uVar64 = uVar63, (ulong *)((long)puVar54 + uVar63) == puVar3))
                goto joined_r0x0001006e3fb4;
              }
            }
            uVar26 = (uint)uVar59;
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar62);
          *(uint *)(lVar50 + (ulong)uVar8 * 4) = uVar44;
          if (uVar20 <= uVar55) {
            uVar16 = 0;
            uVar62 = 0;
            uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
            do {
              uVar63 = uVar16;
              if (uVar62 <= uVar16) {
                uVar63 = uVar62;
              }
              uVar39 = (ulong)uVar55;
              puVar12 = (ulong *)(lVar58 + uVar39 + uVar63);
              puVar38 = (ulong *)((long)puVar54 + uVar63);
              puVar14 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar12 == *puVar38) {
                  lVar50 = 0;
                  do {
                    puVar12 = (ulong *)((long)puVar53 + lVar50 + uVar63 + uVar24 + 8);
                    if (puVar29 <= puVar12) {
                      puVar12 = (ulong *)(lVar58 + 8 + uVar63 + uVar39 + lVar50);
                      puVar14 = (ulong *)((long)puVar53 + lVar50 + uVar63 + uVar24 + 8);
                      goto joined_r0x0001006e3b38;
                    }
                    uVar52 = *(ulong *)(lVar58 + 8 + uVar63 + uVar39 + lVar50);
                    uVar18 = *puVar12;
                    lVar50 = lVar50 + 8;
                  } while (uVar52 == uVar18);
                  uVar18 = uVar18 ^ uVar52;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar50 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                }
                else {
                  uVar18 = *puVar38 ^ *puVar12;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
                uVar18 = uVar18 + uVar63;
              }
              else {
joined_r0x0001006e3b38:
                if (puVar14 < puVar31) {
                  if ((uint)*puVar12 == (uint)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 4);
                    puVar12 = (ulong *)((long)puVar12 + 4);
                  }
                }
                if (puVar14 < puVar30) {
                  if ((short)*puVar12 == (short)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 2);
                    puVar12 = (ulong *)((long)puVar12 + 2);
                  }
                }
                if ((puVar14 < puVar3) && ((char)*puVar12 == (char)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 1);
                }
                uVar18 = (long)puVar14 + (uVar63 - (long)puVar38);
              }
              if (uVar64 < uVar18) {
                iVar40 = uVar55 + (int)uVar18;
                if (uVar18 <= iVar15 - uVar55) {
                  iVar40 = iVar15;
                }
                piVar5[uVar59 * 2] = (uVar44 + 2) - uVar55;
                (piVar5 + uVar59 * 2)[1] = (int)uVar18;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                uVar64 = uVar18;
                iVar15 = iVar40;
                if (0x1000 < uVar18 || (ulong *)((long)puVar54 + uVar18) == puVar3) break;
              }
              uVar26 = (uint)uVar59;
              puVar1 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
              if (*(byte *)(lVar58 + uVar39 + uVar18) < *(byte *)((long)puVar54 + uVar18)) {
                *puVar42 = uVar55;
                if (uVar55 <= uVar37) {
                  puVar42 = &local_94;
                  *puVar45 = 0;
                  goto LAB_1006e3cbc;
                }
                puVar1 = puVar1 + 1;
                uVar16 = uVar18;
                puVar42 = puVar1;
              }
              else {
                *puVar45 = uVar55;
                puVar45 = puVar1;
                uVar62 = uVar18;
                if (uVar55 <= uVar37) {
                  local_94 = 0;
                  goto LAB_1006e3cbc;
                }
              }
              if (uVar34 == 0) break;
              uVar34 = uVar34 - 1;
              uVar55 = *puVar1;
            } while (uVar20 <= uVar55);
          }
          *puVar45 = 0;
          goto LAB_1006e3cbc;
        }
        uVar59 = 0;
        uVar34 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar34) {
          uVar34 = 0xfff;
        }
        lVar58 = *(long *)(param_1 + 8);
        uVar49 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar41 = ~uVar49;
        uVar44 = iVar15 - (int)lVar58;
        uVar37 = 0;
        if (uVar41 <= uVar44) {
          uVar37 = uVar44 - uVar41;
        }
        iVar40 = *(int *)(param_1 + 0x18);
        uVar23 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar20 = uVar44 - uVar23;
        if (uVar44 - *(uint *)(param_1 + 0x1c) <= uVar23 || *(int *)(param_1 + 0x20) != 0) {
          uVar20 = *(uint *)(param_1 + 0x1c);
        }
        if (uVar20 < 2) {
          uVar20 = 1;
        }
        bVar9 = iVar36 != 0;
        uVar16 = (ulong)bVar9;
        puVar38 = (ulong *)((long)puVar54 + 3);
        lVar50 = *(long *)(param_1 + 0x30);
        uVar23 = *(uint *)(param_1 + 0xc4);
        uVar8 = (uint)*puVar54 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
        uVar55 = *(uint *)(lVar50 + (ulong)uVar8 * 4);
        lVar51 = *(long *)(param_1 + 0x40);
        puVar42 = (uint *)(lVar51 + (ulong)((uVar44 & (uVar49 ^ 0xffffffff)) << 1) * 4);
        local_158 = puVar42 + 1;
        iVar15 = uVar44 + 9;
        uVar62 = 3;
        if (bVar9) {
          uVar62 = 4;
        }
        puVar12 = (ulong *)((long)puVar53 + uVar24 + 0xb);
        uVar64 = uVar28;
        do {
          if (uVar16 == 3) {
            uVar49 = *piVar46 - 1;
            uVar26 = *piVar46 - 2;
          }
          else {
            uVar49 = piVar46[uVar16];
            uVar26 = uVar49 - 1;
          }
          if ((uVar26 < uVar44 - iVar40) &&
             (((*(uint *)((long)puVar54 - (ulong)uVar49) ^ (uint)*puVar54) & 0xffffff) == 0)) {
            lVar33 = -(ulong)uVar49;
            puVar14 = (ulong *)((long)puVar38 + lVar33);
            puVar21 = puVar38;
            if (puVar38 < puVar29) {
              if (*puVar14 == *puVar38) {
                iVar19 = 0;
                puVar14 = (ulong *)((long)puVar12 + lVar33);
                puVar21 = puVar12;
                do {
                  if (puVar29 <= puVar21) goto LAB_1006e2b14;
                  uVar39 = *puVar14;
                  uVar63 = *puVar21;
                  iVar19 = iVar19 + 8;
                  puVar14 = puVar14 + 1;
                  puVar21 = puVar21 + 1;
                } while (uVar39 == uVar63);
                uVar63 = uVar63 ^ uVar39;
                uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
                uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
                uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
                uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
                iVar19 = iVar19 + (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
              }
              else {
                uVar63 = *puVar38 ^ *puVar14;
                uVar63 = (uVar63 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar63 & 0x5555555555555555) << 1;
                uVar63 = (uVar63 & 0xcccccccccccccccc) >> 2 | (uVar63 & 0x3333333333333333) << 2;
                uVar63 = (uVar63 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar63 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar63 = (uVar63 & 0xff00ff00ff00ff00) >> 8 | (uVar63 & 0xff00ff00ff00ff) << 8;
                uVar63 = (uVar63 & 0xffff0000ffff0000) >> 0x10 | (uVar63 & 0xffff0000ffff) << 0x10;
                iVar19 = (int)((ulong)LZCOUNT(uVar63 >> 0x20 | uVar63 << 0x20) >> 3);
              }
            }
            else {
LAB_1006e2b14:
              if (puVar21 < puVar31) {
                if ((uint)*puVar14 == (uint)*puVar21) {
                  puVar14 = (ulong *)((long)puVar14 + 4);
                  puVar21 = (ulong *)((long)puVar21 + 4);
                }
              }
              if (puVar21 < puVar30) {
                if (*(short *)puVar14 == *(short *)puVar21) {
                  puVar14 = (ulong *)((long)puVar14 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
              }
              if ((puVar21 < puVar3) && ((char)*puVar14 == (char)*puVar21)) {
                puVar21 = (ulong *)((long)puVar21 + 1);
              }
              iVar19 = (int)puVar21 - (int)puVar38;
            }
            uVar49 = iVar19 + 3;
            uVar63 = (ulong)uVar49;
            if (uVar64 < uVar63) {
              piVar5[uVar59 * 2] = (int)uVar16 - (uint)bVar9;
              (piVar5 + uVar59 * 2)[1] = uVar49;
              uVar26 = (int)uVar59 + 1;
              uVar59 = (ulong)uVar26;
              if ((uVar34 < uVar49) ||
                 (uVar64 = uVar63, (ulong *)((long)puVar54 + uVar63) == puVar3))
              goto joined_r0x0001006e3fb4;
            }
          }
          uVar26 = (uint)uVar59;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar62);
        if (2 < uVar64) {
LAB_1006e4144:
          *(uint *)(lVar50 + (ulong)uVar8 * 4) = uVar44;
          uVar16 = uVar64;
joined_r0x0001006e37b4:
          if (uVar20 <= uVar55) {
            uVar62 = 0;
            uVar64 = 0;
            uVar34 = ~(-1 << (ulong)(uVar23 & 0x1f));
            iVar40 = iVar15;
            do {
              uVar63 = uVar62;
              if (uVar64 <= uVar62) {
                uVar63 = uVar64;
              }
              uVar39 = (ulong)uVar55;
              puVar12 = (ulong *)(lVar58 + uVar39 + uVar63);
              puVar38 = (ulong *)((long)puVar54 + uVar63);
              puVar14 = puVar38;
              if (puVar38 < puVar29) {
                if (*puVar12 == *puVar38) {
                  lVar50 = 0;
                  do {
                    puVar12 = (ulong *)((long)puVar53 + lVar50 + uVar63 + uVar24 + 8);
                    if (puVar29 <= puVar12) {
                      puVar12 = (ulong *)(lVar58 + 8 + uVar63 + uVar39 + lVar50);
                      puVar14 = (ulong *)((long)puVar53 + lVar50 + uVar63 + uVar24 + 8);
                      goto joined_r0x0001006e4280;
                    }
                    uVar52 = *(ulong *)(lVar58 + 8 + uVar63 + uVar39 + lVar50);
                    uVar18 = *puVar12;
                    lVar50 = lVar50 + 8;
                  } while (uVar52 == uVar18);
                  uVar18 = uVar18 ^ uVar52;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = lVar50 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                }
                else {
                  uVar18 = *puVar38 ^ *puVar12;
                  uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                  uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                  uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                  uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10
                  ;
                  uVar18 = (ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3;
                }
                uVar18 = uVar18 + uVar63;
              }
              else {
joined_r0x0001006e4280:
                if (puVar14 < puVar31) {
                  if ((uint)*puVar12 == (uint)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 4);
                    puVar12 = (ulong *)((long)puVar12 + 4);
                  }
                }
                if (puVar14 < puVar30) {
                  if ((short)*puVar12 == (short)*puVar14) {
                    puVar14 = (ulong *)((long)puVar14 + 2);
                    puVar12 = (ulong *)((long)puVar12 + 2);
                  }
                }
                if ((puVar14 < puVar3) && ((char)*puVar12 == (char)*puVar14)) {
                  puVar14 = (ulong *)((long)puVar14 + 1);
                }
                uVar18 = (long)puVar14 + (uVar63 - (long)puVar38);
              }
              iVar15 = iVar40;
              if (uVar16 < uVar18) {
                iVar15 = uVar55 + (int)uVar18;
                if (uVar18 <= iVar40 - uVar55) {
                  iVar15 = iVar40;
                }
                piVar5[uVar59 * 2] = (uVar44 + 2) - uVar55;
                (piVar5 + uVar59 * 2)[1] = (int)uVar18;
                uVar26 = (int)uVar59 + 1;
                uVar59 = (ulong)uVar26;
                uVar16 = uVar18;
                if (0x1000 < uVar18 || (ulong *)((long)puVar54 + uVar18) == puVar3) break;
              }
              uVar26 = (uint)uVar59;
              puVar45 = (uint *)(lVar51 + (ulong)((uVar55 & uVar41) << 1) * 4);
              if (*(byte *)(lVar58 + uVar39 + uVar18) < *(byte *)((long)puVar54 + uVar18)) {
                *puVar42 = uVar55;
                if (uVar55 <= uVar37) {
                  puVar42 = &local_94;
                  break;
                }
                puVar45 = puVar45 + 1;
                uVar62 = uVar18;
                puVar42 = puVar45;
              }
              else {
                *local_158 = uVar55;
                local_158 = puVar45;
                uVar64 = uVar18;
                if (uVar55 <= uVar37) {
                  local_158 = &local_94;
                  break;
                }
              }
              if (uVar34 == 0) break;
              uVar34 = uVar34 - 1;
              uVar55 = *puVar45;
              iVar40 = iVar15;
            } while (uVar20 <= uVar55);
          }
          *local_158 = 0;
          *puVar42 = 0;
          *(int *)(param_1 + 0x24) = iVar15 + -8;
          goto joined_r0x0001006e3fb4;
        }
        lVar33 = *(long *)(param_1 + 0x38);
        uVar16 = *puVar54;
        uVar49 = 0x20 - *(int *)(param_1 + 0x28);
        if (local_1b4 < uVar44) {
          uVar62 = (ulong)local_1b4;
          do {
            *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar58 + uVar62) * 0x35a7bd00) >>
                                     (ulong)(uVar49 & 0x1f)) * 4) = (int)uVar62;
            uVar62 = uVar62 + 1;
          } while ((uint)(iVar56 - (int)lVar58) != uVar62);
        }
        uVar49 = *(uint *)(lVar33 + (ulong)((uint)uVar16 * 0x35a7bd00 >> (ulong)(uVar49 & 0x1f)) * 4
                          );
        local_1b4 = uVar44;
        if (uVar49 < uVar20 || uVar44 - uVar49 >> 0x12 != 0) {
          *(uint *)(lVar50 + (ulong)uVar8 * 4) = uVar44;
          uVar16 = uVar64;
          goto joined_r0x0001006e37b4;
        }
        puVar38 = (ulong *)(lVar58 + (ulong)uVar49);
        puVar12 = puVar54;
        if (puVar54 < puVar29) {
          if (*puVar38 == *puVar54) {
            lVar33 = 0;
            puVar38 = (ulong *)(lVar58 + (ulong)uVar49);
            puVar12 = (ulong *)((long)puVar53 + uVar24 + 8);
            do {
              puVar38 = puVar38 + 1;
              if (puVar29 <= puVar12) goto joined_r0x0001006e4048;
              uVar16 = *puVar12;
              lVar33 = lVar33 + 8;
              puVar12 = puVar12 + 1;
            } while (*puVar38 == uVar16);
            uVar16 = uVar16 ^ *puVar38;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = lVar33 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
          }
          else {
            uVar16 = *puVar54 ^ *puVar38;
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar16 = (ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e4048:
          if (puVar12 < puVar31) {
            if ((uint)*puVar38 == (uint)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 4);
              puVar38 = (ulong *)((long)puVar38 + 4);
            }
          }
          if (puVar12 < puVar30) {
            if ((short)*puVar38 == (short)*puVar12) {
              puVar12 = (ulong *)((long)puVar12 + 2);
              puVar38 = (ulong *)((long)puVar38 + 2);
            }
          }
          if ((puVar12 < puVar3) && ((char)*puVar38 == (char)*puVar12)) {
            puVar12 = (ulong *)((long)puVar12 + 1);
          }
          uVar16 = (long)puVar12 - (long)puVar54;
        }
        if (uVar16 < 3) goto LAB_1006e4144;
        *piVar5 = (uVar44 - uVar49) + 2;
        piVar5[1] = (int)uVar16;
        if (uVar16 <= uVar34 && (ulong *)((long)puVar54 + uVar16) != puVar3) {
          uVar59 = 1;
          uVar26 = 1;
          *(uint *)(lVar50 + (ulong)uVar8 * 4) = uVar44;
          goto joined_r0x0001006e37b4;
        }
        *(uint *)(param_1 + 0x24) = uVar44 + 1;
        uVar26 = 1;
        goto LAB_1006e3cdc;
      }
    }
LAB_1006e442c:
    piVar46 = piVar6 + (uVar59 & 0xffffffff) * 7;
    local_144 = *piVar46;
    iVar36 = piVar46[1];
    uVar34 = piVar46[2];
    uVar35 = piVar46[3];
    local_90 = *(undefined8 *)(piVar46 + 4);
    local_88 = piVar46[6];
    uVar37 = 0;
    if (uVar35 + uVar34 <= (uint)uVar59) {
      uVar37 = (uint)uVar59 - (uVar35 + uVar34);
    }
  }
  else {
    if (*(int *)(param_1 + 0xa8) == 2) {
      iVar10 = uVar35 << 0xb;
      iVar36 = *(int *)(param_1 + 0x98);
    }
    else {
      iVar36 = *(int *)(param_1 + 0x98);
      if (iVar36 == 1) {
        iVar10 = uVar35 * 0x600;
        goto LAB_1006e2388;
      }
      iVar10 = *(int *)(param_1 + 0x88) * uVar35;
      lVar50 = *(long *)(param_1 + 0x48);
      uVar24 = uVar59 & 0xffffffff;
      if (uVar24 < 2) {
        lVar33 = 0;
      }
      else {
        iVar17 = 0;
        lVar33 = uVar24 - (uVar59 & 1);
        pbVar43 = (byte *)((long)param_4 + 1);
        lVar51 = lVar33;
        do {
          iVar10 = iVar10 - ((int)LZCOUNT(*(int *)(lVar50 + (ulong)pbVar43[-1] * 4) + 1) << 8 ^
                            0x1f00U);
          iVar17 = iVar17 - ((int)LZCOUNT(*(int *)(lVar50 + (ulong)*pbVar43 * 4) + 1) << 8 ^ 0x1f00U
                            );
          lVar51 = lVar51 + -2;
          pbVar43 = pbVar43 + 2;
        } while (lVar51 != 0);
        iVar10 = iVar17 + iVar10;
        if ((uVar59 & 1) == 0) goto LAB_1006e2384;
      }
      lVar51 = uVar24 - lVar33;
      pbVar43 = (byte *)((long)param_4 + lVar33);
      do {
        iVar10 = iVar10 - ((int)LZCOUNT(*(int *)(lVar50 + (ulong)*pbVar43 * 4) + 1) << 8 ^ 0x1f00U);
        lVar51 = lVar51 + -1;
        pbVar43 = pbVar43 + 1;
      } while (lVar51 != 0);
    }
LAB_1006e2384:
    if (iVar36 == 0) {
      if (uVar35 < 0x40) goto LAB_1006e23ec;
      uVar34 = 0x32 - (int)LZCOUNT(uVar35);
      goto LAB_1006e23f8;
    }
LAB_1006e2388:
    iVar10 = ((int)LZCOUNT(uVar35 + 1) << 8 ^ 0x1f00U) + iVar10;
    *piVar6 = iVar10;
    piVar11 = piVar5 + (ulong)((int)uVar60 - 1) * 2;
    uVar34 = piVar11[1];
    if (uVar34 <= uVar4) {
      if (iVar36 != 1) goto LAB_1006e246c;
      iVar36 = 0;
      goto LAB_1006e2498;
    }
LAB_1006e2460:
    iVar36 = *piVar11;
    uVar37 = 0;
  }
LAB_1006e4458:
  uVar49 = uVar37 + 1;
  piVar46 = piVar6 + (ulong)uVar49 * 7;
  *piVar46 = local_144;
  piVar46[1] = iVar36;
  piVar46[2] = uVar34;
  piVar46[3] = uVar35;
  *(undefined8 *)(piVar46 + 4) = local_90;
  piVar46[6] = local_88;
  uVar34 = uVar37;
  if (uVar37 == 0) {
    uVar35 = 1;
    goto LAB_1006e455c;
  }
  do {
    uVar35 = uVar34;
    piVar46 = piVar6 + (ulong)uVar37 * 7;
    iVar10 = piVar46[2];
    iVar56 = piVar46[3];
    piVar11 = piVar6 + (ulong)uVar35 * 7;
    uVar66 = *(undefined8 *)(piVar46 + 2);
    uVar65 = *(undefined8 *)piVar46;
    uVar67 = *(undefined8 *)(piVar46 + 3);
    *(undefined8 *)(piVar11 + 5) = *(undefined8 *)(piVar46 + 5);
    *(undefined8 *)(piVar11 + 3) = uVar67;
    *(undefined8 *)(piVar11 + 2) = uVar66;
    *(undefined8 *)piVar11 = uVar65;
    uVar41 = iVar56 + iVar10;
    bVar9 = uVar41 <= uVar37;
    uVar41 = uVar37 - uVar41;
    uVar37 = 0;
    if (bVar9) {
      uVar37 = uVar41;
    }
    uVar34 = uVar35 - 1;
  } while (bVar9 && uVar41 != 0);
  for (; uVar35 <= uVar49; uVar35 = uVar35 + 1) {
LAB_1006e455c:
    while( true ) {
      iVar10 = piVar6[(ulong)uVar35 * 7 + 2];
      uVar34 = piVar6[(ulong)uVar35 * 7 + 3];
      uVar60 = (ulong)uVar34;
      if (iVar10 != 0) break;
      puVar53 = (ulong *)((long)param_4 + uVar60);
      uVar35 = uVar35 + 1;
      if (uVar49 < uVar35) goto LAB_1006e44c8;
    }
    uVar37 = piVar6[(ulong)uVar35 * 7 + 1];
    if (uVar37 < 3) {
      uVar41 = uVar37;
      if (uVar34 == 0) {
        uVar41 = uVar37 + 1;
      }
      if (uVar41 != 0) {
        if (uVar41 == 3) {
          iVar56 = *param_3 + -1;
LAB_1006e45c4:
          param_3[2] = param_3[1];
        }
        else {
          iVar56 = param_3[uVar41];
          if (uVar41 != 1) goto LAB_1006e45c4;
        }
        param_3[1] = *param_3;
        goto LAB_1006e45dc;
      }
    }
    else {
      *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
      iVar56 = uVar37 - 2;
LAB_1006e45dc:
      *param_3 = iVar56;
    }
    if (*(int *)(param_1 + 0xa8) != 2) {
      if (uVar34 != 0) {
        lVar58 = *(long *)(param_1 + 0x48);
        puVar53 = param_4;
        uVar59 = uVar60;
        do {
          *(int *)(lVar58 + (ulong)(byte)*puVar53 * 4) =
               *(int *)(lVar58 + (ulong)(byte)*puVar53 * 4) + 2;
          uVar59 = uVar59 - 1;
          puVar53 = (ulong *)((long)puVar53 + 1);
        } while (uVar59 != 0);
      }
      *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar34 * 2;
    }
    if (uVar34 < 0x40) {
      uVar41 = (uint)(byte)(&DAT_10084fdf4)[uVar60];
    }
    else {
      uVar41 = 0x32 - (int)LZCOUNT(uVar34);
    }
    *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar41 * 4) =
         *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar41 * 4) + 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    uVar41 = (uint)LZCOUNT(uVar37 + 1) ^ 0x1f;
    *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar41 * 4) =
         *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar41 * 4) + 1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    uVar41 = iVar10 - 3;
    if (uVar41 < 0x80) {
      uVar44 = (uint)(byte)(&DAT_10084ff08)[uVar41];
    }
    else {
      uVar44 = 0x43 - (int)LZCOUNT(uVar41);
    }
    *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar44 * 4) =
         *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar44 * 4) + 1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    puVar53 = (ulong *)param_2[3];
    puVar54 = (ulong *)((long)param_4 + uVar60);
    if (puVar32 < puVar54) {
      puVar38 = param_4;
      puVar12 = puVar53;
      if (param_4 <= puVar32) {
        puVar12 = (ulong *)((long)puVar53 + ((long)puVar32 - (long)param_4));
        uVar59 = *param_4;
        puVar53[1] = param_4[1];
        *puVar53 = uVar59;
        uVar59 = param_4[2];
        puVar53[3] = param_4[3];
        puVar53[2] = uVar59;
        puVar38 = puVar32;
        if (0x20 < (long)puVar32 - (long)param_4) {
          puVar53 = puVar53 + 4;
          puVar14 = param_4 + 6;
          do {
            uVar59 = puVar14[-2];
            puVar53[1] = puVar14[-1];
            *puVar53 = uVar59;
            uVar59 = *puVar14;
            puVar53[3] = puVar14[1];
            puVar53[2] = uVar59;
            puVar53 = puVar53 + 4;
            puVar14 = puVar14 + 4;
          } while (puVar53 < puVar12);
        }
      }
      if (puVar38 < puVar54) {
        uVar59 = (long)puVar54 - (long)puVar38;
        if ((7 < uVar59) && (0x3f < (ulong)((long)puVar12 - (long)puVar38))) {
          if (uVar59 < 0x40) {
            uVar16 = 0;
          }
          else {
            uVar16 = uVar59 & 0xffffffffffffffc0;
            puVar53 = puVar12 + 4;
            puVar14 = puVar38 + 4;
            uVar24 = uVar16;
            do {
              uVar62 = puVar14[-4];
              uVar63 = puVar14[-1];
              uVar64 = puVar14[-2];
              uVar18 = puVar14[1];
              uVar39 = *puVar14;
              uVar68 = puVar14[3];
              uVar52 = puVar14[2];
              puVar53[-3] = puVar14[-3];
              puVar53[-4] = uVar62;
              puVar53[-1] = uVar63;
              puVar53[-2] = uVar64;
              puVar53[1] = uVar18;
              *puVar53 = uVar39;
              puVar53[3] = uVar68;
              puVar53[2] = uVar52;
              uVar24 = uVar24 - 0x40;
              puVar53 = puVar53 + 8;
              puVar14 = puVar14 + 8;
            } while (uVar24 != 0);
            if (uVar59 == uVar16) goto LAB_1006e4884;
            if ((uVar59 & 0x38) == 0) {
              puVar38 = (ulong *)((long)puVar38 + uVar16);
              puVar12 = (ulong *)((long)puVar12 + uVar16);
              goto LAB_1006e4874;
            }
          }
          uVar24 = uVar59 & 0xfffffffffffffff8;
          lVar58 = uVar16 - uVar24;
          puVar48 = (undefined8 *)((long)puVar12 + uVar16);
          puVar57 = (undefined8 *)((long)puVar38 + uVar16);
          do {
            *puVar48 = *puVar57;
            lVar58 = lVar58 + 8;
            puVar48 = puVar48 + 1;
            puVar57 = puVar57 + 1;
          } while (lVar58 != 0);
          puVar12 = (ulong *)((long)puVar12 + uVar24);
          puVar38 = (ulong *)((long)puVar38 + uVar24);
          if (uVar59 == uVar24) goto LAB_1006e4884;
        }
LAB_1006e4874:
        do {
          puVar53 = (ulong *)((long)puVar38 + 1);
          *(char *)puVar12 = (char)*puVar38;
          puVar12 = (ulong *)((long)puVar12 + 1);
          puVar38 = puVar53;
        } while (puVar53 != puVar54);
      }
LAB_1006e4884:
      param_2[3] = param_2[3] + uVar60;
      piVar46 = (int *)param_2[1];
      if (0xffff < uVar34) {
        *(undefined4 *)(param_2 + 9) = 1;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar46 - *param_2) >> 3);
      }
    }
    else {
      uVar59 = *param_4;
      puVar53[1] = param_4[1];
      *puVar53 = uVar59;
      if (0x10 < uVar34) {
        lVar58 = param_2[3];
        uVar59 = param_4[2];
        *(ulong *)(lVar58 + 0x18) = param_4[3];
        *(ulong *)(lVar58 + 0x10) = uVar59;
        uVar59 = param_4[4];
        *(ulong *)(lVar58 + 0x28) = param_4[5];
        *(ulong *)(lVar58 + 0x20) = uVar59;
        if (uVar60 - 0x31 < 0xffffffffffffffdf) {
          puVar53 = (ulong *)(lVar58 + 0x30);
          puVar54 = param_4 + 8;
          do {
            uVar59 = puVar54[-2];
            puVar53[1] = puVar54[-1];
            *puVar53 = uVar59;
            uVar59 = *puVar54;
            puVar53[3] = puVar54[1];
            puVar53[2] = uVar59;
            puVar53 = puVar53 + 4;
            puVar54 = puVar54 + 4;
          } while (puVar53 < (ulong *)(lVar58 + uVar60));
          goto LAB_1006e4884;
        }
      }
      param_2[3] = param_2[3] + uVar60;
      piVar46 = (int *)param_2[1];
    }
    *(short *)(piVar46 + 1) = (short)uVar34;
    *piVar46 = uVar37 + 1;
    if (0xffff < uVar41) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar46 - *param_2) >> 3);
    }
    *(short *)((long)piVar46 + 6) = (short)uVar41;
    param_2[1] = (long)(piVar46 + 2);
    puVar53 = (ulong *)((long)param_4 + (ulong)(iVar10 + uVar34));
    param_4 = puVar53;
  }
LAB_1006e44c8:
  if (*(int *)(param_1 + 0xa8) != 2) {
    *(uint *)(param_1 + 0x88) = (int)LZCOUNT(*(int *)(param_1 + 0x78) + 1) << 8 ^ 0x1f00;
  }
  *(ulong *)(param_1 + 0x8c) =
       (ulong)CONCAT15((char)LZCOUNT((int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1),
                       (uint5)(uint3)LZCOUNT((int)*(undefined8 *)(param_1 + 0x7c) + 1) << 8) ^
       0x1f0000001f00;
  *(uint *)(param_1 + 0x94) = (int)LZCOUNT(*(int *)(param_1 + 0x84) + 1) << 8 ^ 0x1f00;
joined_r0x0001006e0cd8:
  if (puVar61 <= puVar53) goto LAB_1006e4ab8;
  goto LAB_1006e0cdc;
LAB_1006e3cac:
  puVar45 = &local_94;
  goto LAB_1006e3cb8;
LAB_1006e3cb4:
  puVar42 = &local_94;
LAB_1006e3cb8:
  *puVar45 = 0;
LAB_1006e3cbc:
  *puVar42 = 0;
  *(int *)(param_1 + 0x24) = iVar15 + -8;
joined_r0x0001006e3fb4:
  if (uVar26 != 0) {
LAB_1006e3cdc:
    uVar34 = (piVar5 + (ulong)(uVar26 - 1) * 2)[1];
    if ((uVar4 < uVar34) || (0xfff < uVar34 + iVar10)) {
      if (piVar11[2] == 0) {
        iVar56 = piVar11[3];
      }
      else {
        iVar56 = 0;
      }
      iVar36 = piVar5[(ulong)(uVar26 - 1) * 2];
      uVar37 = 0;
      if ((uint)(iVar10 - iVar56) < 0x1001) {
        uVar37 = iVar10 - iVar56;
      }
      goto LAB_1006e4458;
    }
    uVar59 = 0;
    piVar46 = piVar6 + uVar24 * 7 + 4;
    do {
      puVar42 = (uint *)(piVar5 + uVar59 * 2);
      uVar34 = *puVar42;
      if (uVar34 < 3) {
        uVar37 = uVar34 + (iVar36 != 0);
        if (uVar37 == 0) {
          iVar40 = *piVar46;
          iVar15 = piVar6[uVar24 * 7 + 5];
          piVar11 = piVar6 + uVar24 * 7 + 6;
        }
        else {
          if (uVar37 == 3) {
            iVar15 = *piVar46;
            iVar40 = iVar15 + -1;
          }
          else {
            iVar40 = piVar46[uVar37];
            iVar15 = *piVar46;
          }
          lVar58 = 8;
          if (uVar37 != 1) {
            lVar58 = 4;
          }
          piVar11 = (int *)((long)piVar46 + lVar58);
        }
      }
      else {
        iVar15 = *piVar46;
        iVar40 = uVar34 - 2;
        piVar11 = piVar6 + uVar24 * 7 + 5;
      }
      uVar37 = uVar25;
      if (uVar59 != 0) {
        uVar37 = puVar42[-1] + 1;
      }
      uVar49 = puVar42[1];
      if (uVar37 <= uVar49) {
        iVar19 = 0;
        iVar7 = *piVar11;
        uVar41 = (uint)LZCOUNT(uVar34 + 1) ^ 0x1f;
        iVar13 = uVar41 * 0x200 + -0x25cd;
        if (uVar41 < 0x14) {
          iVar13 = 0x33;
        }
        uVar44 = iVar10 + uVar49;
        uVar20 = uVar44;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar22 = iVar47 + iVar17 +
                     uVar41 * 0x100 + 0x1000 + ((int)LZCOUNT(uVar49 - 2) << 8 ^ 0x1f00U);
            uVar16 = (ulong)(uVar49 + iVar10);
            if (uVar49 + iVar10 <= (uint)uVar60) goto LAB_1006e3e0c;
LAB_1006e3f14:
            uVar64 = uVar60 & 0xffffffff;
            uVar62 = (uVar44 - iVar19) - uVar64;
            uVar60 = uVar64;
            if (uVar62 < 4) {
LAB_1006e3f78:
              piVar11 = piVar2 + uVar60 * 7;
              do {
                uVar60 = uVar60 + 1;
                *piVar11 = 0x40000000;
                piVar11 = piVar11 + 7;
              } while (uVar60 < uVar16);
            }
            else {
              uVar60 = (uVar62 & 0xfffffffffffffffc) + uVar64;
              uVar63 = uVar20 - uVar64 & 0xfffffffffffffffc;
              piVar11 = piVar6 + uVar64 * 7 + 0xe;
              do {
                piVar11[-7] = 0x40000000;
                *piVar11 = 0x40000000;
                piVar11[7] = 0x40000000;
                piVar11[0xe] = 0x40000000;
                piVar11 = piVar11 + 0x1c;
                uVar63 = uVar63 - 4;
              } while (uVar63 != 0);
              if (uVar62 != (uVar62 & 0xfffffffffffffffc)) goto LAB_1006e3f78;
            }
          }
          else {
            uVar23 = uVar49 - 3;
            if (uVar23 < 0x80) {
              uVar23 = (uint)(byte)(&DAT_10084ff08)[uVar23];
            }
            else {
              uVar23 = 0x43 - (int)LZCOUNT(uVar23);
            }
            iVar22 = iVar47 + iVar17 +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar23 * 4) + 1) << 8
                     ^ 0xffffe0ffU) +
                     iVar13 + *(int *)(param_1 + 0x94) +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar41 * 4) + 1) << 8
                     ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                     (*(int *)(&DAT_10084fe34 + (ulong)uVar23 * 4) + uVar41) * 0x100 + 2;
            uVar16 = (ulong)(uVar49 + iVar10);
            if ((uint)uVar60 < uVar49 + iVar10) goto LAB_1006e3f14;
LAB_1006e3e0c:
            if (piVar6[uVar16 * 7] <= iVar22) break;
          }
          piVar11 = piVar6 + uVar16 * 7;
          piVar11[2] = uVar49;
          piVar11[3] = uVar35;
          *piVar11 = iVar22;
          piVar11[1] = uVar34;
          *(ulong *)(piVar11 + 4) = CONCAT44(iVar15,iVar40);
          piVar11[6] = iVar7;
          uVar49 = uVar49 - 1;
          iVar19 = iVar19 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar37 <= uVar49);
      }
      uVar59 = uVar59 + 1;
    } while (uVar59 != uVar26);
  }
  uVar59 = (ulong)(iVar10 + 1U);
LAB_1006e2668:
  uVar24 = uVar59;
  uVar59 = uVar60;
  if ((uint)uVar60 < (uint)uVar24) goto LAB_1006e442c;
  goto LAB_1006e2678;
}

