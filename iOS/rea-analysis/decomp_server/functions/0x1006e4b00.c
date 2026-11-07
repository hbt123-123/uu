// rea decompile_all
// name: FUN_1006e4b00
// address: 0x1006e4b00
// body: available
// range: 0x1006e4b00-0x1006e8917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006e8914 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006e6e30) */
/* WARNING: Removing unreachable block (ram,0x0001006e889c) */
/* WARNING: Removing unreachable block (ram,0x0001006e8210) */
/* WARNING: Removing unreachable block (ram,0x0001006e7118) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006e4b00(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  ulong *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  ulong *puVar11;
  int *piVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  int iVar30;
  uint uVar31;
  ulong *puVar32;
  long lVar33;
  int iVar34;
  int iVar35;
  ulong *puVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint *puVar41;
  ulong uVar42;
  uint uVar43;
  uint *puVar44;
  uint uVar45;
  int *piVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 *puVar50;
  uint uVar51;
  ulong *puVar52;
  ulong *puVar53;
  undefined8 *puVar54;
  uint uVar55;
  long lVar56;
  ulong uVar57;
  ulong *puVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  int iVar62;
  int iVar64;
  undefined8 uVar63;
  undefined8 uVar65;
  undefined8 uVar66;
  ulong uVar67;
  int local_15c;
  uint *local_158;
  uint local_13c;
  uint local_94;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar4 = (ulong *)((long)param_4 + param_5);
  puVar58 = puVar4 + -1;
  lVar25 = *(long *)(param_1 + 8);
  uVar55 = *(uint *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar5) {
    uVar5 = 0xfff;
  }
  uVar23 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar23 = 4;
  }
  local_13c = *(uint *)(param_1 + 0x24);
  piVar6 = *(int **)(param_1 + 0x68);
  piVar7 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,2);
  puVar53 = param_4;
  if ((ulong *)(lVar25 + (ulong)uVar55) == param_4) {
    puVar53 = (ulong *)((long)param_4 + 1);
  }
  if (puVar58 <= puVar53) {
LAB_1006e88d4:
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_80) {
      return (long)puVar4 - (long)param_4;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar26 = (ulong)(uVar23 - 1);
  puVar27 = (ulong *)((long)puVar4 - 7);
  puVar32 = (ulong *)((long)puVar4 - 3);
  puVar28 = (ulong *)((long)puVar4 - 1);
  puVar29 = puVar4 + -4;
  piVar3 = piVar7 + 7;
  lVar25 = (ulong)uVar23 - 1;
LAB_1006e4c28:
  iVar62 = (int)puVar53;
  iVar35 = iVar62 - (int)param_4;
  lVar56 = *(long *)(param_1 + 8);
  uVar55 = *(uint *)(param_1 + 0x24);
  uVar60 = (ulong)uVar55;
  if (puVar53 < (ulong *)(lVar56 + uVar60)) goto LAB_1006e4c18;
  iVar64 = *(int *)(param_1 + 200);
  uVar38 = iVar62 - (int)lVar56;
  while (uVar55 < uVar38) {
    lVar47 = param_1;
    FUN_100705148(param_1,lVar56 + uVar60,puVar4,iVar64,0);
    uVar55 = (int)lVar47 + (int)uVar60;
    uVar60 = (ulong)uVar55;
  }
  *(uint *)(param_1 + 0x24) = uVar38;
  if (iVar64 - 6U < 2) {
    uVar60 = 0;
    uVar55 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar55) {
      uVar55 = 0xfff;
    }
    lVar56 = *(long *)(param_1 + 8);
    uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar31 = ~uVar39;
    uVar43 = iVar62 - (int)lVar56;
    uVar38 = 0;
    if (uVar31 <= uVar43) {
      uVar38 = uVar43 - uVar31;
    }
    iVar64 = *(int *)(param_1 + 0x18);
    uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar45 = uVar43 - uVar19;
    if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
      uVar45 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar45 < 2) {
      uVar45 = 1;
    }
    bVar10 = iVar35 == 0;
    uVar20 = (ulong)bVar10;
    lVar47 = *(long *)(param_1 + 0x30);
    uVar19 = *(uint *)(param_1 + 0xc4);
    uVar17 = *puVar53 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar51 = *(uint *)(lVar47 + uVar17 * 4);
    lVar48 = *(long *)(param_1 + 0x40);
    puVar41 = (uint *)(lVar48 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
    puVar44 = puVar41 + 1;
    iVar37 = uVar43 + 9;
    uVar16 = 3;
    if (bVar10) {
      uVar16 = 4;
    }
    puVar11 = (ulong *)((long)puVar53 + 4);
    uVar22 = uVar26;
    do {
      if (uVar20 == 3) {
        uVar39 = *param_3 - 1;
        uVar24 = *param_3 - 2;
      }
      else {
        uVar39 = param_3[uVar20];
        uVar24 = uVar39 - 1;
      }
      if ((uVar24 < uVar43 - iVar64) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar39))
         ) {
        lVar33 = -(ulong)uVar39;
        puVar52 = (ulong *)((long)puVar11 + lVar33);
        puVar36 = puVar11;
        if (puVar11 < puVar27) {
          if (*puVar52 == *puVar11) {
            iVar14 = 0;
            puVar36 = (ulong *)((long)puVar53 + 0xc);
            puVar52 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar27 <= puVar36) goto LAB_1006e5154;
              uVar57 = *puVar52;
              uVar59 = *puVar36;
              iVar14 = iVar14 + 8;
              puVar36 = puVar36 + 1;
              puVar52 = puVar52 + 1;
            } while (uVar57 == uVar59);
            uVar59 = uVar59 ^ uVar57;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = iVar14 + (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar11 ^ *puVar52;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e5154:
          if (puVar36 < puVar32) {
            if ((uint)*puVar52 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar52 = (ulong *)((long)puVar52 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if (*(short *)puVar52 == *(short *)puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar52 = (ulong *)((long)puVar52 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar52 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          iVar14 = (int)puVar36 - (int)puVar11;
        }
        uVar39 = iVar14 + 4;
        uVar59 = (ulong)uVar39;
        if (uVar22 < uVar59) {
          piVar6[uVar60 * 2] = (int)uVar20 - (uint)bVar10;
          (piVar6 + uVar60 * 2)[1] = uVar39;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          if ((uVar55 < uVar39) || (uVar22 = uVar59, (ulong *)((long)puVar53 + uVar59) == puVar4))
          goto joined_r0x0001006e6188;
        }
      }
      uVar24 = (uint)uVar60;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar16);
    *(uint *)(lVar47 + uVar17 * 4) = uVar43;
    if (uVar45 <= uVar51) {
      uVar20 = 0;
      uVar16 = 0;
      uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
      iVar64 = iVar37;
      do {
        uVar17 = uVar20;
        if (uVar16 <= uVar20) {
          uVar17 = uVar16;
        }
        lVar47 = lVar56 + (ulong)uVar51;
        puVar11 = (ulong *)(lVar47 + uVar17);
        puVar52 = (ulong *)((long)puVar53 + uVar17);
        puVar36 = puVar52;
        if (puVar52 < puVar27) {
          if (*puVar11 == *puVar52) {
            lVar33 = 0;
            puVar36 = (ulong *)((long)puVar53 + uVar17 + 8);
            puVar11 = (ulong *)(lVar56 + 8 + uVar17 + uVar51);
            do {
              if (puVar27 <= puVar36) goto joined_r0x0001006e530c;
              uVar57 = *puVar11;
              uVar59 = *puVar36;
              lVar33 = lVar33 + 8;
              puVar36 = puVar36 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar57 == uVar59);
            uVar59 = uVar59 ^ uVar57;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = lVar33 + ((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar52 ^ *puVar11;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = (ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e530c:
          if (puVar36 < puVar32) {
            if ((uint)*puVar11 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if ((short)*puVar11 == (short)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar11 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          uVar59 = (long)puVar36 - (long)puVar52;
        }
        uVar59 = uVar59 + uVar17;
        iVar37 = iVar64;
        if (uVar22 < uVar59) {
          iVar37 = uVar51 + (int)uVar59;
          if (uVar59 <= iVar64 - uVar51) {
            iVar37 = iVar64;
          }
          piVar6[uVar60 * 2] = (uVar43 + 2) - uVar51;
          (piVar6 + uVar60 * 2)[1] = (int)uVar59;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          uVar22 = uVar59;
          if (0x1000 < uVar59 || (ulong *)((long)puVar53 + uVar59) == puVar4) break;
        }
        uVar24 = (uint)uVar60;
        puVar1 = (uint *)(lVar48 + (ulong)((uVar51 & uVar31) << 1) * 4);
        if (*(byte *)(lVar47 + uVar59) < *(byte *)((long)puVar53 + uVar59)) {
          *puVar41 = uVar51;
          if (uVar51 <= uVar38) goto LAB_1006e616c;
          puVar1 = puVar1 + 1;
          uVar20 = uVar59;
          puVar41 = puVar1;
        }
        else {
          *puVar44 = uVar51;
          puVar44 = puVar1;
          uVar16 = uVar59;
          if (uVar51 <= uVar38) goto LAB_1006e6164;
        }
        if (uVar55 == 0) break;
        uVar55 = uVar55 - 1;
        uVar51 = *puVar1;
        iVar64 = iVar37;
      } while (uVar45 <= uVar51);
    }
    goto LAB_1006e6170;
  }
  if (iVar64 == 5) {
    uVar60 = 0;
    uVar55 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar55) {
      uVar55 = 0xfff;
    }
    lVar56 = *(long *)(param_1 + 8);
    uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar31 = ~uVar39;
    uVar43 = iVar62 - (int)lVar56;
    uVar38 = 0;
    if (uVar31 <= uVar43) {
      uVar38 = uVar43 - uVar31;
    }
    iVar64 = *(int *)(param_1 + 0x18);
    uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar45 = uVar43 - uVar19;
    if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
      uVar45 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar45 < 2) {
      uVar45 = 1;
    }
    bVar10 = iVar35 == 0;
    uVar20 = (ulong)bVar10;
    lVar47 = *(long *)(param_1 + 0x30);
    uVar19 = *(uint *)(param_1 + 0xc4);
    uVar17 = *puVar53 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
    uVar51 = *(uint *)(lVar47 + uVar17 * 4);
    lVar48 = *(long *)(param_1 + 0x40);
    puVar41 = (uint *)(lVar48 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
    puVar44 = puVar41 + 1;
    iVar37 = uVar43 + 9;
    uVar16 = 3;
    if (bVar10) {
      uVar16 = 4;
    }
    puVar11 = (ulong *)((long)puVar53 + 4);
    uVar22 = uVar26;
    do {
      if (uVar20 == 3) {
        uVar39 = *param_3 - 1;
        uVar24 = *param_3 - 2;
      }
      else {
        uVar39 = param_3[uVar20];
        uVar24 = uVar39 - 1;
      }
      if ((uVar24 < uVar43 - iVar64) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar39))
         ) {
        lVar33 = -(ulong)uVar39;
        puVar52 = (ulong *)((long)puVar11 + lVar33);
        puVar36 = puVar11;
        if (puVar11 < puVar27) {
          if (*puVar52 == *puVar11) {
            iVar14 = 0;
            puVar36 = (ulong *)((long)puVar53 + 0xc);
            puVar52 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar27 <= puVar36) goto LAB_1006e5650;
              uVar59 = *puVar52;
              uVar57 = *puVar36;
              iVar14 = iVar14 + 8;
              puVar36 = puVar36 + 1;
              puVar52 = puVar52 + 1;
            } while (uVar59 == uVar57);
            uVar57 = uVar57 ^ uVar59;
            uVar59 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar57 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = iVar14 + (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar11 ^ *puVar52;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e5650:
          if (puVar36 < puVar32) {
            if ((uint)*puVar52 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar52 = (ulong *)((long)puVar52 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if (*(short *)puVar52 == *(short *)puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar52 = (ulong *)((long)puVar52 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar52 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          iVar14 = (int)puVar36 - (int)puVar11;
        }
        uVar39 = iVar14 + 4;
        uVar59 = (ulong)uVar39;
        if (uVar22 < uVar59) {
          piVar6[uVar60 * 2] = (int)uVar20 - (uint)bVar10;
          (piVar6 + uVar60 * 2)[1] = uVar39;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          if ((uVar55 < uVar39) || (uVar22 = uVar59, (ulong *)((long)puVar53 + uVar59) == puVar4))
          goto joined_r0x0001006e6188;
        }
      }
      uVar24 = (uint)uVar60;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar16);
    *(uint *)(lVar47 + uVar17 * 4) = uVar43;
    if (uVar45 <= uVar51) {
      uVar20 = 0;
      uVar16 = 0;
      uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
      iVar64 = iVar37;
      do {
        uVar17 = uVar20;
        if (uVar16 <= uVar20) {
          uVar17 = uVar16;
        }
        lVar47 = lVar56 + (ulong)uVar51;
        puVar11 = (ulong *)(lVar47 + uVar17);
        puVar52 = (ulong *)((long)puVar53 + uVar17);
        puVar36 = puVar52;
        if (puVar52 < puVar27) {
          if (*puVar11 == *puVar52) {
            lVar33 = 0;
            puVar36 = (ulong *)((long)puVar53 + uVar17 + 8);
            puVar11 = (ulong *)(lVar56 + 8 + uVar17 + uVar51);
            do {
              if (puVar27 <= puVar36) goto joined_r0x0001006e5b40;
              uVar59 = *puVar11;
              uVar57 = *puVar36;
              lVar33 = lVar33 + 8;
              puVar36 = puVar36 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar59 == uVar57);
            uVar57 = uVar57 ^ uVar59;
            uVar59 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar57 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = lVar33 + ((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar52 ^ *puVar11;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = (ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e5b40:
          if (puVar36 < puVar32) {
            if ((uint)*puVar11 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if ((short)*puVar11 == (short)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar11 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          uVar59 = (long)puVar36 - (long)puVar52;
        }
        uVar59 = uVar59 + uVar17;
        iVar37 = iVar64;
        if (uVar22 < uVar59) {
          iVar37 = uVar51 + (int)uVar59;
          if (uVar59 <= iVar64 - uVar51) {
            iVar37 = iVar64;
          }
          piVar6[uVar60 * 2] = (uVar43 + 2) - uVar51;
          (piVar6 + uVar60 * 2)[1] = (int)uVar59;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          uVar22 = uVar59;
          if (0x1000 < uVar59 || (ulong *)((long)puVar53 + uVar59) == puVar4) break;
        }
        uVar24 = (uint)uVar60;
        puVar1 = (uint *)(lVar48 + (ulong)((uVar51 & uVar31) << 1) * 4);
        if (*(byte *)(lVar47 + uVar59) < *(byte *)((long)puVar53 + uVar59)) {
          *puVar41 = uVar51;
          if (uVar51 <= uVar38) goto LAB_1006e616c;
          puVar1 = puVar1 + 1;
          uVar20 = uVar59;
          puVar41 = puVar1;
        }
        else {
          *puVar44 = uVar51;
          puVar44 = puVar1;
          uVar16 = uVar59;
          if (uVar51 <= uVar38) goto LAB_1006e6164;
        }
        if (uVar55 == 0) break;
        uVar55 = uVar55 - 1;
        uVar51 = *puVar1;
        iVar64 = iVar37;
      } while (uVar45 <= uVar51);
    }
    goto LAB_1006e6170;
  }
  if (iVar64 != 3) {
    uVar60 = 0;
    uVar55 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar55) {
      uVar55 = 0xfff;
    }
    lVar56 = *(long *)(param_1 + 8);
    uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar31 = ~uVar39;
    uVar43 = iVar62 - (int)lVar56;
    uVar38 = 0;
    if (uVar31 <= uVar43) {
      uVar38 = uVar43 - uVar31;
    }
    iVar64 = *(int *)(param_1 + 0x18);
    uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar45 = uVar43 - uVar19;
    if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
      uVar45 = *(uint *)(param_1 + 0x1c);
    }
    if (uVar45 < 2) {
      uVar45 = 1;
    }
    bVar10 = iVar35 == 0;
    uVar20 = (ulong)bVar10;
    lVar47 = *(long *)(param_1 + 0x30);
    uVar19 = *(uint *)(param_1 + 0xc4);
    uVar17 = (ulong)((uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
    uVar51 = *(uint *)(lVar47 + uVar17 * 4);
    lVar48 = *(long *)(param_1 + 0x40);
    puVar41 = (uint *)(lVar48 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
    puVar44 = puVar41 + 1;
    iVar37 = uVar43 + 9;
    uVar16 = 3;
    if (bVar10) {
      uVar16 = 4;
    }
    puVar11 = (ulong *)((long)puVar53 + 4);
    uVar22 = uVar26;
    do {
      if (uVar20 == 3) {
        uVar39 = *param_3 - 1;
        uVar24 = *param_3 - 2;
      }
      else {
        uVar39 = param_3[uVar20];
        uVar24 = uVar39 - 1;
      }
      if ((uVar24 < uVar43 - iVar64) && ((uint)*puVar53 == *(uint *)((long)puVar53 - (ulong)uVar39))
         ) {
        lVar33 = -(ulong)uVar39;
        puVar52 = (ulong *)((long)puVar11 + lVar33);
        puVar36 = puVar11;
        if (puVar11 < puVar27) {
          if (*puVar52 == *puVar11) {
            iVar14 = 0;
            puVar36 = (ulong *)((long)puVar53 + 0xc);
            puVar52 = (ulong *)((long)puVar53 + 0xc + lVar33);
            do {
              if (puVar27 <= puVar36) goto LAB_1006e5904;
              uVar59 = *puVar52;
              uVar57 = *puVar36;
              iVar14 = iVar14 + 8;
              puVar36 = puVar36 + 1;
              puVar52 = puVar52 + 1;
            } while (uVar59 == uVar57);
            uVar57 = uVar57 ^ uVar59;
            uVar59 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar57 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = iVar14 + (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar11 ^ *puVar52;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            iVar14 = (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
        }
        else {
LAB_1006e5904:
          if (puVar36 < puVar32) {
            if ((uint)*puVar52 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar52 = (ulong *)((long)puVar52 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if (*(short *)puVar52 == *(short *)puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar52 = (ulong *)((long)puVar52 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar52 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          iVar14 = (int)puVar36 - (int)puVar11;
        }
        uVar39 = iVar14 + 4;
        uVar59 = (ulong)uVar39;
        if (uVar22 < uVar59) {
          piVar6[uVar60 * 2] = (int)uVar20 - (uint)bVar10;
          (piVar6 + uVar60 * 2)[1] = uVar39;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          if ((uVar55 < uVar39) || (uVar22 = uVar59, (ulong *)((long)puVar53 + uVar59) == puVar4))
          goto joined_r0x0001006e6188;
        }
      }
      uVar24 = (uint)uVar60;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar16);
    *(uint *)(lVar47 + uVar17 * 4) = uVar43;
    if (uVar45 <= uVar51) {
      uVar20 = 0;
      uVar16 = 0;
      uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
      do {
        uVar17 = uVar20;
        if (uVar16 <= uVar20) {
          uVar17 = uVar16;
        }
        lVar47 = lVar56 + (ulong)uVar51;
        puVar11 = (ulong *)(lVar47 + uVar17);
        puVar52 = (ulong *)((long)puVar53 + uVar17);
        puVar36 = puVar52;
        if (puVar52 < puVar27) {
          if (*puVar11 == *puVar52) {
            lVar33 = 0;
            puVar36 = (ulong *)((long)puVar53 + uVar17 + 8);
            puVar11 = (ulong *)(lVar56 + 8 + uVar17 + uVar51);
            do {
              if (puVar27 <= puVar36) goto joined_r0x0001006e5dbc;
              uVar59 = *puVar11;
              uVar57 = *puVar36;
              lVar33 = lVar33 + 8;
              puVar36 = puVar36 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar59 == uVar57);
            uVar57 = uVar57 ^ uVar59;
            uVar59 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar57 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = lVar33 + ((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar52 ^ *puVar11;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = (ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e5dbc:
          if (puVar36 < puVar32) {
            if ((uint)*puVar11 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if ((short)*puVar11 == (short)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar11 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          uVar59 = (long)puVar36 - (long)puVar52;
        }
        uVar59 = uVar59 + uVar17;
        if (uVar22 < uVar59) {
          iVar64 = uVar51 + (int)uVar59;
          if (uVar59 <= iVar37 - uVar51) {
            iVar64 = iVar37;
          }
          piVar6[uVar60 * 2] = (uVar43 + 2) - uVar51;
          (piVar6 + uVar60 * 2)[1] = (int)uVar59;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          uVar22 = uVar59;
          iVar37 = iVar64;
          if (0x1000 < uVar59 || (ulong *)((long)puVar53 + uVar59) == puVar4) break;
        }
        uVar24 = (uint)uVar60;
        puVar1 = (uint *)(lVar48 + (ulong)((uVar51 & uVar31) << 1) * 4);
        if (*(byte *)(lVar47 + uVar59) < *(byte *)((long)puVar53 + uVar59)) {
          *puVar41 = uVar51;
          if (uVar51 <= uVar38) {
            puVar41 = &local_94;
            *puVar44 = 0;
            goto LAB_1006e6174;
          }
          puVar1 = puVar1 + 1;
          uVar20 = uVar59;
          puVar41 = puVar1;
        }
        else {
          *puVar44 = uVar51;
          puVar44 = puVar1;
          uVar16 = uVar59;
          if (uVar51 <= uVar38) {
            local_94 = 0;
            goto LAB_1006e6174;
          }
        }
        if (uVar55 == 0) break;
        uVar55 = uVar55 - 1;
        uVar51 = *puVar1;
      } while (uVar45 <= uVar51);
    }
    *puVar44 = 0;
    goto LAB_1006e6174;
  }
  uVar60 = 0;
  uVar55 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar55) {
    uVar55 = 0xfff;
  }
  lVar56 = *(long *)(param_1 + 8);
  uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
  uVar31 = ~uVar39;
  uVar43 = (uint)((long)puVar53 - lVar56);
  uVar38 = 0;
  if (uVar31 <= uVar43) {
    uVar38 = uVar43 - uVar31;
  }
  iVar64 = *(int *)(param_1 + 0x18);
  uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
  uVar45 = uVar43 - uVar19;
  if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
    uVar45 = *(uint *)(param_1 + 0x1c);
  }
  if (uVar45 < 2) {
    uVar45 = 1;
  }
  bVar10 = iVar35 == 0;
  uVar20 = (ulong)bVar10;
  lVar47 = *(long *)(param_1 + 0x30);
  uVar19 = *(uint *)(param_1 + 0xc4);
  uVar17 = (ulong)((uint)*puVar53 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f));
  uVar51 = *(uint *)(lVar47 + uVar17 * 4);
  lVar48 = *(long *)(param_1 + 0x40);
  puVar41 = (uint *)(lVar48 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
  puVar44 = puVar41 + 1;
  iVar37 = uVar43 + 9;
  uVar16 = 3;
  if (bVar10) {
    uVar16 = 4;
  }
  puVar11 = (ulong *)((long)puVar53 + 3);
  uVar22 = uVar26;
  do {
    if (uVar20 == 3) {
      uVar39 = *param_3 - 1;
      uVar24 = *param_3 - 2;
    }
    else {
      uVar39 = param_3[uVar20];
      uVar24 = uVar39 - 1;
    }
    if ((uVar24 < uVar43 - iVar64) &&
       (((*(uint *)((long)puVar53 - (ulong)uVar39) ^ (uint)*puVar53) & 0xffffff) == 0)) {
      lVar33 = -(ulong)uVar39;
      puVar52 = (ulong *)((long)puVar11 + lVar33);
      puVar36 = puVar11;
      if (puVar11 < puVar27) {
        if (*puVar52 == *puVar11) {
          iVar14 = 0;
          puVar36 = (ulong *)((long)puVar53 + 0xb);
          puVar52 = (ulong *)((long)puVar53 + 0xb + lVar33);
          do {
            if (puVar27 <= puVar36) goto LAB_1006e4e94;
            uVar59 = *puVar52;
            uVar57 = *puVar36;
            iVar14 = iVar14 + 8;
            puVar36 = puVar36 + 1;
            puVar52 = puVar52 + 1;
          } while (uVar59 == uVar57);
          uVar57 = uVar57 ^ uVar59;
          uVar59 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar57 & 0x5555555555555555) << 1;
          uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
          uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
          uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
          iVar14 = iVar14 + (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
        }
        else {
          uVar59 = *puVar11 ^ *puVar52;
          uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
          uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
          uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
          uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
          iVar14 = (int)((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
        }
      }
      else {
LAB_1006e4e94:
        if (puVar36 < puVar32) {
          if ((uint)*puVar52 == (uint)*puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 4);
            puVar52 = (ulong *)((long)puVar52 + 4);
          }
        }
        if (puVar36 < puVar28) {
          if (*(short *)puVar52 == *(short *)puVar36) {
            puVar36 = (ulong *)((long)puVar36 + 2);
            puVar52 = (ulong *)((long)puVar52 + 2);
          }
        }
        if ((puVar36 < puVar4) && ((char)*puVar52 == (char)*puVar36)) {
          puVar36 = (ulong *)((long)puVar36 + 1);
        }
        iVar14 = (int)puVar36 - (int)puVar11;
      }
      uVar39 = iVar14 + 3;
      uVar59 = (ulong)uVar39;
      if (uVar22 < uVar59) {
        piVar6[uVar60 * 2] = (int)uVar20 - (uint)bVar10;
        (piVar6 + uVar60 * 2)[1] = uVar39;
        uVar24 = (int)uVar60 + 1;
        uVar60 = (ulong)uVar24;
        if ((uVar55 < uVar39) || (uVar22 = uVar59, (ulong *)((long)puVar53 + uVar59) == puVar4))
        goto joined_r0x0001006e6188;
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < uVar16);
  if (2 < uVar22) {
LAB_1006e5cbc:
    uVar24 = (uint)uVar60;
    *(uint *)(lVar47 + uVar17 * 4) = uVar43;
    if (uVar45 <= uVar51) {
      uVar20 = 0;
      uVar16 = 0;
      uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
      iVar64 = iVar37;
      do {
        uVar17 = uVar20;
        if (uVar16 <= uVar20) {
          uVar17 = uVar16;
        }
        lVar47 = lVar56 + (ulong)uVar51;
        puVar11 = (ulong *)(lVar47 + uVar17);
        puVar52 = (ulong *)((long)puVar53 + uVar17);
        puVar36 = puVar52;
        if (puVar52 < puVar27) {
          if (*puVar11 == *puVar52) {
            lVar33 = 0;
            puVar36 = (ulong *)((long)puVar53 + uVar17 + 8);
            puVar11 = (ulong *)(lVar56 + 8 + uVar17 + uVar51);
            do {
              if (puVar27 <= puVar36) goto joined_r0x0001006e5ff8;
              uVar57 = *puVar11;
              uVar59 = *puVar36;
              lVar33 = lVar33 + 8;
              puVar36 = puVar36 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar57 == uVar59);
            uVar59 = uVar59 ^ uVar57;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = lVar33 + ((ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3);
          }
          else {
            uVar59 = *puVar52 ^ *puVar11;
            uVar59 = (uVar59 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar59 & 0x5555555555555555) << 1;
            uVar59 = (uVar59 & 0xcccccccccccccccc) >> 2 | (uVar59 & 0x3333333333333333) << 2;
            uVar59 = (uVar59 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar59 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar59 = (uVar59 & 0xff00ff00ff00ff00) >> 8 | (uVar59 & 0xff00ff00ff00ff) << 8;
            uVar59 = (uVar59 & 0xffff0000ffff0000) >> 0x10 | (uVar59 & 0xffff0000ffff) << 0x10;
            uVar59 = (ulong)LZCOUNT(uVar59 >> 0x20 | uVar59 << 0x20) >> 3;
          }
        }
        else {
joined_r0x0001006e5ff8:
          if (puVar36 < puVar32) {
            if ((uint)*puVar11 == (uint)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
          }
          if (puVar36 < puVar28) {
            if ((short)*puVar11 == (short)*puVar36) {
              puVar36 = (ulong *)((long)puVar36 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
          }
          if ((puVar36 < puVar4) && ((char)*puVar11 == (char)*puVar36)) {
            puVar36 = (ulong *)((long)puVar36 + 1);
          }
          uVar59 = (long)puVar36 - (long)puVar52;
        }
        uVar59 = uVar59 + uVar17;
        iVar37 = iVar64;
        if (uVar22 < uVar59) {
          iVar37 = uVar51 + (int)uVar59;
          if (uVar59 <= iVar64 - uVar51) {
            iVar37 = iVar64;
          }
          piVar6[uVar60 * 2] = (uVar43 + 2) - uVar51;
          (piVar6 + uVar60 * 2)[1] = (int)uVar59;
          uVar24 = (int)uVar60 + 1;
          uVar60 = (ulong)uVar24;
          uVar22 = uVar59;
          if (0x1000 < uVar59 || (ulong *)((long)puVar53 + uVar59) == puVar4) break;
        }
        uVar24 = (uint)uVar60;
        puVar1 = (uint *)(lVar48 + (ulong)((uVar51 & uVar31) << 1) * 4);
        if (*(byte *)(lVar47 + uVar59) < *(byte *)((long)puVar53 + uVar59)) {
          *puVar41 = uVar51;
          if (uVar51 <= uVar38) {
            puVar41 = &local_94;
            break;
          }
          puVar1 = puVar1 + 1;
          uVar20 = uVar59;
          puVar41 = puVar1;
        }
        else {
          *puVar44 = uVar51;
          puVar44 = puVar1;
          uVar16 = uVar59;
          if (uVar51 <= uVar38) {
            puVar44 = &local_94;
            break;
          }
        }
        if (uVar55 == 0) break;
        uVar55 = uVar55 - 1;
        uVar51 = *puVar1;
        iVar64 = iVar37;
      } while (uVar45 <= uVar51);
    }
    *puVar44 = 0;
    *puVar41 = 0;
    *(int *)(param_1 + 0x24) = iVar37 + -8;
    goto joined_r0x0001006e6188;
  }
  lVar33 = *(long *)(param_1 + 0x38);
  uVar20 = *puVar53;
  uVar39 = 0x20 - *(int *)(param_1 + 0x28);
  if (local_13c < uVar43) {
    uVar16 = (ulong)local_13c;
    do {
      *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar56 + uVar16) * 0x35a7bd00) >>
                               (ulong)(uVar39 & 0x1f)) * 4) = (int)uVar16;
      uVar16 = uVar16 + 1;
    } while (((long)puVar53 - lVar56 & 0xffffffffU) != uVar16);
  }
  uVar39 = *(uint *)(lVar33 + (ulong)((uint)uVar20 * 0x35a7bd00 >> (ulong)(uVar39 & 0x1f)) * 4);
  local_13c = uVar43;
  if (uVar39 < uVar45 || uVar43 - uVar39 >> 0x12 != 0) goto LAB_1006e5cbc;
  puVar11 = (ulong *)(lVar56 + (ulong)uVar39);
  puVar52 = puVar53;
  if (puVar53 < puVar27) {
    if (*puVar11 == *puVar53) {
      lVar33 = 0;
      puVar11 = (ulong *)(lVar56 + (ulong)uVar39);
      do {
        puVar11 = puVar11 + 1;
        puVar52 = puVar52 + 1;
        if (puVar27 <= puVar52) goto LAB_1006e8784;
        lVar33 = lVar33 + 8;
      } while (*puVar11 == *puVar52);
      uVar20 = *puVar52 ^ *puVar11;
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = lVar33 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
    }
    else {
      uVar20 = *puVar53 ^ *puVar11;
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar20 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
    }
  }
  else {
LAB_1006e8784:
    if (puVar52 < puVar32) {
      if ((uint)*puVar11 == (uint)*puVar52) {
        puVar52 = (ulong *)((long)puVar52 + 4);
        puVar11 = (ulong *)((long)puVar11 + 4);
      }
    }
    if (puVar52 < puVar28) {
      if (*(short *)puVar11 == *(short *)puVar52) {
        puVar52 = (ulong *)((long)puVar52 + 2);
        puVar11 = (ulong *)((long)puVar11 + 2);
      }
    }
    if ((puVar52 < puVar4) && ((char)*puVar11 == (char)*puVar52)) {
      puVar52 = (ulong *)((long)puVar52 + 1);
    }
    uVar20 = (long)puVar52 - (long)puVar53;
  }
  if (uVar20 < 3) goto LAB_1006e5cbc;
  *piVar6 = (uVar43 - uVar39) + 2;
  piVar6[1] = (int)uVar20;
  if (uVar20 <= uVar55 && (ulong *)((long)puVar53 + uVar20) != puVar4) {
    uVar60 = 1;
    uVar22 = uVar20;
    goto LAB_1006e5cbc;
  }
  *(uint *)(param_1 + 0x24) = uVar43 + 1;
  uVar24 = 1;
  goto LAB_1006e618c;
LAB_1006e6164:
  puVar44 = &local_94;
  goto LAB_1006e6170;
LAB_1006e616c:
  puVar41 = &local_94;
LAB_1006e6170:
  *puVar44 = 0;
LAB_1006e6174:
  *puVar41 = 0;
  *(int *)(param_1 + 0x24) = iVar37 + -8;
joined_r0x0001006e6188:
  if (uVar24 == 0) {
LAB_1006e4c18:
    puVar53 = (ulong *)((long)puVar53 + 1);
  }
  else {
LAB_1006e618c:
    piVar7[4] = *param_3;
    piVar7[5] = param_3[1];
    piVar7[6] = param_3[2];
    piVar7[2] = 0;
    piVar7[3] = iVar35;
    puVar11 = param_4;
    FUN_100705be0(param_4,iVar35,param_1 + 0x48,2);
    *piVar7 = (int)puVar11;
    uVar55 = (piVar6 + (ulong)(uVar24 - 1) * 2)[1];
    if (uVar5 < uVar55) {
      iVar37 = piVar6[(ulong)(uVar24 - 1) * 2];
      uVar38 = 0;
    }
    else {
      lVar56 = lVar25;
      piVar46 = piVar3;
      if (*(int *)(param_1 + 0x98) == 1) {
        iVar64 = 0x100;
      }
      else {
        iVar64 = **(int **)(param_1 + 0x50) + 1;
        uVar55 = (uint)LZCOUNT(iVar64) ^ 0x1f;
        iVar64 = *(int *)(param_1 + 0x8c) -
                 (((uint)(iVar64 * 0x100) >> (ulong)(uVar55 & 0x1f)) + uVar55 * 0x100);
      }
      do {
        *piVar46 = 0x40000000;
        lVar56 = lVar56 + -1;
        piVar46 = piVar46 + 7;
      } while (lVar56 != 0);
      uVar60 = 0;
      uVar20 = (ulong)uVar23;
      do {
        uVar55 = piVar6[uVar60 * 2];
        uVar38 = (piVar6 + uVar60 * 2)[1];
        if (uVar55 < 3) {
          uVar39 = uVar55 + (iVar35 == 0);
          if (uVar39 == 0) {
            iVar37 = *param_3;
            iVar14 = param_3[1];
            piVar46 = param_3 + 2;
          }
          else {
            if (uVar39 == 3) {
              iVar14 = *param_3;
              iVar37 = iVar14 + -1;
            }
            else {
              iVar37 = param_3[uVar39];
              iVar14 = *param_3;
            }
            lVar56 = 8;
            if (uVar39 != 1) {
              lVar56 = 4;
            }
            piVar46 = (int *)((long)param_3 + lVar56);
          }
        }
        else {
          iVar14 = *param_3;
          iVar37 = uVar55 - 2;
          piVar46 = param_3 + 1;
        }
        if ((uint)uVar20 <= uVar38) {
          iVar30 = *piVar46;
          uVar31 = (uint)LZCOUNT(uVar55 + 1) ^ 0x1f;
          uVar39 = (uint)uVar20 * 0x100 - 0x200;
          do {
            iVar34 = (int)uVar20;
            if (*(int *)(param_1 + 0x98) == 1) {
              uVar43 = (uint)LZCOUNT(iVar34 + -2) ^ 0x1f;
              iVar15 = (uVar39 >> (ulong)(uVar43 & 0x1f)) + (uVar43 + uVar31) * 0x100 + 0x1000;
            }
            else {
              uVar43 = iVar34 - 3;
              if (uVar43 < 0x80) {
                uVar43 = (uint)(byte)(&DAT_10084ff08)[uVar43];
              }
              else {
                uVar43 = 0x43 - (int)LZCOUNT(uVar43);
              }
              iVar15 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar31 * 4) + 1;
              uVar45 = (uint)LZCOUNT(iVar15) ^ 0x1f;
              iVar40 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar43 * 4) + 1;
              uVar19 = (uint)LZCOUNT(iVar40) ^ 0x1f;
              iVar15 = (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                        ((uint)(iVar15 * 0x100) >> (ulong)(uVar45 & 0x1f))) -
                       ((uint)(iVar40 * 0x100) >> (ulong)(uVar19 & 0x1f))) +
                       (((uVar31 + *(int *)(&DAT_10084fe34 + (ulong)uVar43 * 4)) - uVar45) - uVar19)
                       * 0x100 + 0x33;
            }
            piVar46 = piVar7 + uVar20 * 7;
            piVar46[2] = iVar34;
            piVar46[3] = iVar35;
            *piVar46 = iVar64 + (int)puVar11 + iVar15;
            piVar46[1] = uVar55;
            *(ulong *)(piVar46 + 4) = CONCAT44(iVar14,iVar37);
            piVar46[6] = iVar30;
            uVar20 = (ulong)(iVar34 + 1U);
            uVar39 = uVar39 + 0x100;
          } while (iVar34 + 1U <= uVar38);
        }
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar24);
      uVar55 = (int)uVar20 - 1;
      uVar60 = (ulong)uVar55;
      uVar20 = uVar60;
      if (uVar55 != 0) {
        uVar16 = 1;
        do {
          iVar62 = iVar62 + 1;
          iVar64 = (int)uVar16;
          piVar46 = piVar7 + (ulong)(iVar64 - 1) * 7;
          if (piVar46[2] == 0) {
            uVar55 = piVar46[3] + 1;
          }
          else {
            uVar55 = 1;
          }
          puVar11 = (ulong *)((long)puVar53 + uVar16);
          iVar35 = *piVar46;
          if (*(int *)(param_1 + 0xa8) == 2) {
            iVar35 = iVar35 + 0x800;
            if (*(int *)(param_1 + 0x98) != 1) {
              if (0x3f < uVar55) goto LAB_1006e6470;
LAB_1006e6528:
              uVar38 = (uint)(byte)(&DAT_10084fdf4)[uVar55];
              if (0x3f < uVar55 - 1) goto LAB_1006e6540;
LAB_1006e6488:
              uVar39 = (uint)(byte)(&DAT_10084fdf4)[uVar55 - 1];
              goto LAB_1006e654c;
            }
LAB_1006e64a4:
            uVar38 = (uint)LZCOUNT(uVar55 + 1) ^ 0x1f;
            uVar39 = (uint)LZCOUNT(uVar55) ^ 0x1f;
            iVar35 = iVar35 + ((((uVar55 + 1) * 0x100 >> (ulong)(uVar38 & 0x1f)) + uVar38 * 0x100) -
                              (((uVar55 << 8) >> (ulong)(uVar39 & 0x1f)) + uVar39 * 0x100));
            piVar12 = piVar7 + uVar16 * 7;
            iVar37 = *piVar12;
            if (iVar35 <= iVar37) goto LAB_1006e65c8;
          }
          else {
            if (*(int *)(param_1 + 0x98) == 1) {
              iVar35 = iVar35 + 0x600;
              goto LAB_1006e64a4;
            }
            iVar37 = *(int *)(*(long *)(param_1 + 0x48) + (ulong)*(byte *)((long)puVar11 - 1) * 4) +
                     1;
            uVar38 = (uint)LZCOUNT(iVar37) ^ 0x1f;
            iVar35 = (*(int *)(param_1 + 0x88) -
                     (((uint)(iVar37 * 0x100) >> (ulong)(uVar38 & 0x1f)) + uVar38 * 0x100)) + iVar35
            ;
            if (uVar55 < 0x40) goto LAB_1006e6528;
LAB_1006e6470:
            uVar38 = 0x32 - (int)LZCOUNT(uVar55);
            if (uVar55 - 1 < 0x40) goto LAB_1006e6488;
LAB_1006e6540:
            uVar39 = 0x32 - (int)LZCOUNT(uVar55 - 1);
LAB_1006e654c:
            iVar37 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar38 * 4) + 1;
            uVar31 = (uint)LZCOUNT(iVar37) ^ 0x1f;
            iVar14 = *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar39 * 4) + 1;
            uVar43 = (uint)LZCOUNT(iVar14) ^ 0x1f;
            iVar35 = iVar35 + ((*(int *)(&DAT_10084fd64 + (ulong)uVar38 * 4) - uVar31) * 0x100 -
                              ((uint)(iVar37 * 0x100) >> (ulong)(uVar31 & 0x1f))) +
                              ((uint)(iVar14 * 0x100) >> (ulong)(uVar43 & 0x1f)) +
                              (uVar43 - *(int *)(&DAT_10084fd64 + (ulong)uVar39 * 4)) * 0x100;
            piVar12 = piVar7 + uVar16 * 7;
            iVar37 = *piVar12;
            if (iVar35 <= iVar37) {
LAB_1006e65c8:
              iVar37 = iVar35;
              piVar12[2] = 0;
              piVar12[3] = uVar55;
              *piVar12 = iVar37;
              piVar12[1] = 0;
              *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(piVar46 + 4);
              piVar12[6] = piVar46[6];
            }
          }
          if (puVar11 <= puVar58) {
            uVar20 = uVar16;
            if (iVar64 == (int)uVar60) break;
            iVar14 = piVar12[2];
            if (iVar14 == 0) {
              iVar35 = piVar12[3];
              if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006e664c;
LAB_1006e6620:
              iVar30 = 0x100;
              lVar56 = *(long *)(param_1 + 8);
              uVar20 = (ulong)*(uint *)(param_1 + 0x24);
              puVar52 = (ulong *)(lVar56 + uVar20);
            }
            else {
              iVar35 = 0;
              if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006e6620;
LAB_1006e664c:
              iVar30 = **(int **)(param_1 + 0x50) + 1;
              uVar55 = (uint)LZCOUNT(iVar30) ^ 0x1f;
              iVar30 = *(int *)(param_1 + 0x8c) -
                       (((uint)(iVar30 * 0x100) >> (ulong)(uVar55 & 0x1f)) + uVar55 * 0x100);
              lVar56 = *(long *)(param_1 + 8);
              uVar20 = (ulong)*(uint *)(param_1 + 0x24);
              puVar52 = (ulong *)(lVar56 + uVar20);
            }
            if (puVar52 <= puVar11) {
              iVar34 = *(int *)(param_1 + 200);
              iVar15 = (int)puVar11;
              uVar38 = iVar15 - (int)lVar56;
              uVar55 = (uint)uVar20;
              while (uVar55 < uVar38) {
                lVar47 = param_1;
                FUN_100705148(param_1,lVar56 + uVar20,puVar4,iVar34,0);
                uVar55 = (int)lVar47 + (int)uVar20;
                uVar20 = (ulong)uVar55;
              }
              puVar52 = (ulong *)((long)puVar53 + uVar16 + 0xc);
              piVar46 = piVar12 + 4;
              *(uint *)(param_1 + 0x24) = uVar38;
              if (iVar34 - 6U < 2) {
                uVar20 = 0;
                uVar55 = *(uint *)(param_1 + 0xcc);
                if (0xffe < uVar55) {
                  uVar55 = 0xfff;
                }
                lVar56 = *(long *)(param_1 + 8);
                uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                uVar31 = ~uVar39;
                uVar43 = iVar15 - (int)lVar56;
                uVar38 = 0;
                if (uVar31 <= uVar43) {
                  uVar38 = uVar43 - uVar31;
                }
                iVar34 = *(int *)(param_1 + 0x18);
                uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                uVar45 = uVar43 - uVar19;
                if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
                  uVar45 = *(uint *)(param_1 + 0x1c);
                }
                if (uVar45 < 2) {
                  uVar45 = 1;
                }
                bVar10 = iVar14 != 0;
                uVar17 = (ulong)bVar10;
                puVar36 = (ulong *)((long)puVar11 + 4);
                lVar48 = *(long *)(param_1 + 0x30);
                uVar19 = *(uint *)(param_1 + 0xc4);
                uVar59 = *puVar11 * -0x30e4432340650000 >>
                         ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
                uVar51 = *(uint *)(lVar48 + uVar59 * 4);
                lVar47 = *(long *)(param_1 + 0x40);
                puVar41 = (uint *)(lVar47 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
                puVar44 = puVar41 + 1;
                iVar15 = uVar43 + 9;
                uVar22 = 3;
                if (bVar10) {
                  uVar22 = 4;
                }
                uVar57 = uVar26;
                do {
                  if (uVar17 == 3) {
                    uVar39 = *piVar46 - 1;
                    uVar24 = *piVar46 - 2;
                  }
                  else {
                    uVar39 = piVar46[uVar17];
                    uVar24 = uVar39 - 1;
                  }
                  if ((uVar24 < uVar43 - iVar34) &&
                     ((uint)*puVar11 == *(uint *)((long)puVar11 - (ulong)uVar39))) {
                    lVar33 = -(ulong)uVar39;
                    puVar13 = (ulong *)((long)puVar36 + lVar33);
                    puVar21 = puVar36;
                    if (puVar36 < puVar27) {
                      if (*puVar13 == *puVar36) {
                        iVar40 = 0;
                        puVar21 = puVar52;
                        puVar13 = (ulong *)((long)puVar53 + lVar33 + uVar16 + 0xc);
                        do {
                          if (puVar27 <= puVar21) goto joined_r0x0001006e6cc4;
                          uVar61 = *puVar13;
                          uVar42 = *puVar21;
                          iVar40 = iVar40 + 8;
                          puVar21 = puVar21 + 1;
                          puVar13 = puVar13 + 1;
                        } while (uVar61 == uVar42);
                        uVar42 = uVar42 ^ uVar61;
                        uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar42 & 0x5555555555555555) << 1;
                        uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                 (uVar42 & 0x3333333333333333) << 2;
                        uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar42 & 0xff00ff00ff00ff) << 8;
                        uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar42 & 0xffff0000ffff) << 0x10;
                        iVar40 = iVar40 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3
                                               );
                      }
                      else {
                        uVar42 = *puVar36 ^ *puVar13;
                        uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar42 & 0x5555555555555555) << 1;
                        uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                 (uVar42 & 0x3333333333333333) << 2;
                        uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar42 & 0xff00ff00ff00ff) << 8;
                        uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar42 & 0xffff0000ffff) << 0x10;
                        iVar40 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                      }
                    }
                    else {
joined_r0x0001006e6cc4:
                      if (puVar21 < puVar32) {
                        if ((uint)*puVar13 == (uint)*puVar21) {
                          puVar21 = (ulong *)((long)puVar21 + 4);
                          puVar13 = (ulong *)((long)puVar13 + 4);
                        }
                      }
                      if (puVar21 < puVar28) {
                        if ((short)*puVar13 == (short)*puVar21) {
                          puVar21 = (ulong *)((long)puVar21 + 2);
                          puVar13 = (ulong *)((long)puVar13 + 2);
                        }
                      }
                      if ((puVar21 < puVar4) && ((char)*puVar13 == (char)*puVar21)) {
                        puVar21 = (ulong *)((long)puVar21 + 1);
                      }
                      iVar40 = (int)puVar21 - (int)puVar36;
                    }
                    uVar39 = iVar40 + 4;
                    uVar42 = (ulong)uVar39;
                    if (uVar57 < uVar42) {
                      piVar6[uVar20 * 2] = (int)uVar17 - (uint)bVar10;
                      (piVar6 + uVar20 * 2)[1] = uVar39;
                      uVar24 = (int)uVar20 + 1;
                      uVar20 = (ulong)uVar24;
                      if ((uVar55 < uVar39) ||
                         (uVar57 = uVar42, (ulong *)((long)puVar11 + uVar42) == puVar4))
                      goto joined_r0x0001006e7638;
                    }
                  }
                  uVar24 = (uint)uVar20;
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar22);
                *(uint *)(lVar48 + uVar59 * 4) = uVar43;
                if (uVar45 <= uVar51) {
                  uVar17 = 0;
                  uVar22 = 0;
                  uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
                  iVar34 = iVar15;
                  do {
                    uVar59 = uVar17;
                    if (uVar22 <= uVar17) {
                      uVar59 = uVar22;
                    }
                    uVar42 = (ulong)uVar51;
                    puVar36 = (ulong *)(lVar56 + uVar42 + uVar59);
                    puVar52 = (ulong *)((long)puVar11 + uVar59);
                    puVar13 = puVar52;
                    if (puVar52 < puVar27) {
                      if (*puVar36 == *puVar52) {
                        lVar48 = 0;
                        do {
                          puVar36 = (ulong *)((long)puVar53 + lVar48 + uVar59 + uVar16 + 8);
                          if (puVar27 <= puVar36) {
                            puVar36 = (ulong *)(lVar56 + 8 + uVar59 + uVar42 + lVar48);
                            puVar13 = (ulong *)((long)puVar53 + lVar48 + uVar59 + uVar16 + 8);
                            goto joined_r0x0001006e7474;
                          }
                          uVar61 = *(ulong *)(lVar56 + 8 + uVar59 + uVar42 + lVar48);
                          uVar49 = *puVar36;
                          lVar48 = lVar48 + 8;
                        } while (uVar61 == uVar49);
                        uVar49 = uVar49 ^ uVar61;
                        uVar61 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar49 & 0x5555555555555555) << 1;
                        uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                 (uVar61 & 0x3333333333333333) << 2;
                        uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar61 & 0xff00ff00ff00ff) << 8;
                        uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar61 & 0xffff0000ffff) << 0x10;
                        uVar61 = lVar48 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                      }
                      else {
                        uVar61 = *puVar52 ^ *puVar36;
                        uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar61 & 0x5555555555555555) << 1;
                        uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                 (uVar61 & 0x3333333333333333) << 2;
                        uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar61 & 0xff00ff00ff00ff) << 8;
                        uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar61 & 0xffff0000ffff) << 0x10;
                        uVar61 = (ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3;
                      }
                      uVar61 = uVar61 + uVar59;
                    }
                    else {
joined_r0x0001006e7474:
                      if (puVar13 < puVar32) {
                        if ((uint)*puVar36 == (uint)*puVar13) {
                          puVar13 = (ulong *)((long)puVar13 + 4);
                          puVar36 = (ulong *)((long)puVar36 + 4);
                        }
                      }
                      if (puVar13 < puVar28) {
                        if ((short)*puVar36 == (short)*puVar13) {
                          puVar13 = (ulong *)((long)puVar13 + 2);
                          puVar36 = (ulong *)((long)puVar36 + 2);
                        }
                      }
                      if ((puVar13 < puVar4) && ((char)*puVar36 == (char)*puVar13)) {
                        puVar13 = (ulong *)((long)puVar13 + 1);
                      }
                      uVar61 = (long)puVar13 + (uVar59 - (long)puVar52);
                    }
                    iVar15 = iVar34;
                    if (uVar57 < uVar61) {
                      iVar15 = uVar51 + (int)uVar61;
                      if (uVar61 <= iVar34 - uVar51) {
                        iVar15 = iVar34;
                      }
                      piVar6[uVar20 * 2] = (uVar43 + 2) - uVar51;
                      (piVar6 + uVar20 * 2)[1] = (int)uVar61;
                      uVar24 = (int)uVar20 + 1;
                      uVar20 = (ulong)uVar24;
                      uVar57 = uVar61;
                      if (0x1000 < uVar61 || (ulong *)((long)puVar11 + uVar61) == puVar4) break;
                    }
                    uVar24 = (uint)uVar20;
                    puVar1 = (uint *)(lVar47 + (ulong)((uVar51 & uVar31) << 1) * 4);
                    if (*(byte *)(lVar56 + uVar42 + uVar61) < *(byte *)((long)puVar11 + uVar61)) {
                      *puVar41 = uVar51;
                      if (uVar51 <= uVar38) {
                        puVar41 = &local_94;
                        break;
                      }
                      puVar1 = puVar1 + 1;
                      uVar17 = uVar61;
                      puVar41 = puVar1;
                    }
                    else {
                      *puVar44 = uVar51;
                      puVar44 = puVar1;
                      uVar22 = uVar61;
                      if (uVar51 <= uVar38) {
                        puVar44 = &local_94;
                        break;
                      }
                    }
                    if (uVar55 == 0) break;
                    uVar55 = uVar55 - 1;
                    uVar51 = *puVar1;
                    iVar34 = iVar15;
                  } while (uVar45 <= uVar51);
                }
                *puVar44 = 0;
                *puVar41 = 0;
                *(int *)(param_1 + 0x24) = iVar15 + -8;
joined_r0x0001006e7638:
                if (uVar24 == 0) goto LAB_1006e6410;
              }
              else {
                if (iVar34 == 5) {
                  uVar20 = 0;
                  uVar55 = *(uint *)(param_1 + 0xcc);
                  if (0xffe < uVar55) {
                    uVar55 = 0xfff;
                  }
                  lVar56 = *(long *)(param_1 + 8);
                  uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                  uVar31 = ~uVar39;
                  uVar43 = iVar15 - (int)lVar56;
                  uVar38 = 0;
                  if (uVar31 <= uVar43) {
                    uVar38 = uVar43 - uVar31;
                  }
                  iVar34 = *(int *)(param_1 + 0x18);
                  uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                  uVar45 = uVar43 - uVar19;
                  if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0)
                  {
                    uVar45 = *(uint *)(param_1 + 0x1c);
                  }
                  if (uVar45 < 2) {
                    uVar45 = 1;
                  }
                  bVar10 = iVar14 != 0;
                  uVar17 = (ulong)bVar10;
                  puVar36 = (ulong *)((long)puVar11 + 4);
                  lVar48 = *(long *)(param_1 + 0x30);
                  uVar19 = *(uint *)(param_1 + 0xc4);
                  uVar59 = *puVar11 * -0x30e4432345000000 >>
                           ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
                  uVar51 = *(uint *)(lVar48 + uVar59 * 4);
                  lVar47 = *(long *)(param_1 + 0x40);
                  puVar41 = (uint *)(lVar47 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
                  puVar44 = puVar41 + 1;
                  iVar15 = uVar43 + 9;
                  uVar22 = 3;
                  if (bVar10) {
                    uVar22 = 4;
                  }
                  uVar57 = uVar26;
                  do {
                    if (uVar17 == 3) {
                      uVar39 = *piVar46 - 1;
                      uVar24 = *piVar46 - 2;
                    }
                    else {
                      uVar39 = piVar46[uVar17];
                      uVar24 = uVar39 - 1;
                    }
                    if ((uVar24 < uVar43 - iVar34) &&
                       ((uint)*puVar11 == *(uint *)((long)puVar11 - (ulong)uVar39))) {
                      lVar33 = -(ulong)uVar39;
                      puVar13 = (ulong *)((long)puVar36 + lVar33);
                      puVar21 = puVar36;
                      if (puVar36 < puVar27) {
                        if (*puVar13 == *puVar36) {
                          iVar40 = 0;
                          puVar21 = puVar52;
                          puVar13 = (ulong *)((long)puVar53 + lVar33 + uVar16 + 0xc);
                          do {
                            if (puVar27 <= puVar21) goto joined_r0x0001006e6ff8;
                            uVar61 = *puVar13;
                            uVar42 = *puVar21;
                            iVar40 = iVar40 + 8;
                            puVar21 = puVar21 + 1;
                            puVar13 = puVar13 + 1;
                          } while (uVar61 == uVar42);
                          uVar42 = uVar42 ^ uVar61;
                          uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar42 & 0x5555555555555555) << 1;
                          uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                   (uVar42 & 0x3333333333333333) << 2;
                          uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar42 & 0xff00ff00ff00ff) << 8;
                          uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar42 & 0xffff0000ffff) << 0x10;
                          iVar40 = iVar40 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >>
                                                 3);
                        }
                        else {
                          uVar42 = *puVar36 ^ *puVar13;
                          uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar42 & 0x5555555555555555) << 1;
                          uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 |
                                   (uVar42 & 0x3333333333333333) << 2;
                          uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar42 & 0xff00ff00ff00ff) << 8;
                          uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar42 & 0xffff0000ffff) << 0x10;
                          iVar40 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                        }
                      }
                      else {
joined_r0x0001006e6ff8:
                        if (puVar21 < puVar32) {
                          if ((uint)*puVar13 == (uint)*puVar21) {
                            puVar21 = (ulong *)((long)puVar21 + 4);
                            puVar13 = (ulong *)((long)puVar13 + 4);
                          }
                        }
                        if (puVar21 < puVar28) {
                          if ((short)*puVar13 == (short)*puVar21) {
                            puVar21 = (ulong *)((long)puVar21 + 2);
                            puVar13 = (ulong *)((long)puVar13 + 2);
                          }
                        }
                        if ((puVar21 < puVar4) && ((char)*puVar13 == (char)*puVar21)) {
                          puVar21 = (ulong *)((long)puVar21 + 1);
                        }
                        iVar40 = (int)puVar21 - (int)puVar36;
                      }
                      uVar39 = iVar40 + 4;
                      uVar42 = (ulong)uVar39;
                      if (uVar57 < uVar42) {
                        piVar6[uVar20 * 2] = (int)uVar17 - (uint)bVar10;
                        (piVar6 + uVar20 * 2)[1] = uVar39;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulong)uVar24;
                        if ((uVar55 < uVar39) ||
                           (uVar57 = uVar42, (ulong *)((long)puVar11 + uVar42) == puVar4))
                        goto joined_r0x0001006e7638;
                      }
                    }
                    uVar24 = (uint)uVar20;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar22);
                  *(uint *)(lVar48 + uVar59 * 4) = uVar43;
                  if (uVar45 <= uVar51) {
                    uVar17 = 0;
                    uVar22 = 0;
                    uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
                    iVar34 = iVar15;
                    do {
                      uVar59 = uVar17;
                      if (uVar22 <= uVar17) {
                        uVar59 = uVar22;
                      }
                      uVar42 = (ulong)uVar51;
                      puVar36 = (ulong *)(lVar56 + uVar42 + uVar59);
                      puVar52 = (ulong *)((long)puVar11 + uVar59);
                      puVar13 = puVar52;
                      if (puVar52 < puVar27) {
                        if (*puVar36 == *puVar52) {
                          lVar48 = 0;
                          do {
                            puVar36 = (ulong *)((long)puVar53 + lVar48 + uVar59 + uVar16 + 8);
                            if (puVar27 <= puVar36) {
                              puVar36 = (ulong *)(lVar56 + 8 + uVar59 + uVar42 + lVar48);
                              puVar13 = (ulong *)((long)puVar53 + lVar48 + uVar59 + uVar16 + 8);
                              goto joined_r0x0001006e7a20;
                            }
                            uVar61 = *(ulong *)(lVar56 + 8 + uVar59 + uVar42 + lVar48);
                            uVar49 = *puVar36;
                            lVar48 = lVar48 + 8;
                          } while (uVar61 == uVar49);
                          uVar49 = uVar49 ^ uVar61;
                          uVar61 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar49 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = lVar48 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                        }
                        else {
                          uVar61 = *puVar52 ^ *puVar36;
                          uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar61 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = (ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3;
                        }
                        uVar61 = uVar61 + uVar59;
                      }
                      else {
joined_r0x0001006e7a20:
                        if (puVar13 < puVar32) {
                          if ((uint)*puVar36 == (uint)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 4);
                            puVar36 = (ulong *)((long)puVar36 + 4);
                          }
                        }
                        if (puVar13 < puVar28) {
                          if ((short)*puVar36 == (short)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 2);
                            puVar36 = (ulong *)((long)puVar36 + 2);
                          }
                        }
                        if ((puVar13 < puVar4) && ((char)*puVar36 == (char)*puVar13)) {
                          puVar13 = (ulong *)((long)puVar13 + 1);
                        }
                        uVar61 = (long)puVar13 + (uVar59 - (long)puVar52);
                      }
                      iVar15 = iVar34;
                      if (uVar57 < uVar61) {
                        iVar15 = uVar51 + (int)uVar61;
                        if (uVar61 <= iVar34 - uVar51) {
                          iVar15 = iVar34;
                        }
                        piVar6[uVar20 * 2] = (uVar43 + 2) - uVar51;
                        (piVar6 + uVar20 * 2)[1] = (int)uVar61;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulong)uVar24;
                        uVar57 = uVar61;
                        if (0x1000 < uVar61 || (ulong *)((long)puVar11 + uVar61) == puVar4) break;
                      }
                      uVar24 = (uint)uVar20;
                      puVar1 = (uint *)(lVar47 + (ulong)((uVar51 & uVar31) << 1) * 4);
                      if (*(byte *)(lVar56 + uVar42 + uVar61) < *(byte *)((long)puVar11 + uVar61)) {
                        *puVar41 = uVar51;
                        if (uVar51 <= uVar38) {
                          puVar41 = &local_94;
                          *puVar44 = 0;
                          goto LAB_1006e7604;
                        }
                        puVar1 = puVar1 + 1;
                        uVar17 = uVar61;
                        puVar41 = puVar1;
                      }
                      else {
                        *puVar44 = uVar51;
                        puVar44 = puVar1;
                        uVar22 = uVar61;
                        if (uVar51 <= uVar38) {
                          local_94 = 0;
                          goto LAB_1006e7604;
                        }
                      }
                      if (uVar55 == 0) break;
                      uVar55 = uVar55 - 1;
                      uVar51 = *puVar1;
                      iVar34 = iVar15;
                    } while (uVar45 <= uVar51);
                  }
                  *puVar44 = 0;
LAB_1006e7604:
                  *puVar41 = 0;
                  *(int *)(param_1 + 0x24) = iVar15 + -8;
                  goto joined_r0x0001006e7638;
                }
                uVar20 = 0;
                if (iVar34 != 3) {
                  uVar55 = *(uint *)(param_1 + 0xcc);
                  if (0xffe < uVar55) {
                    uVar55 = 0xfff;
                  }
                  lVar56 = *(long *)(param_1 + 8);
                  uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                  uVar31 = ~uVar39;
                  uVar43 = iVar15 - (int)lVar56;
                  uVar38 = 0;
                  if (uVar31 <= uVar43) {
                    uVar38 = uVar43 - uVar31;
                  }
                  iVar34 = *(int *)(param_1 + 0x18);
                  uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                  uVar45 = uVar43 - uVar19;
                  if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0)
                  {
                    uVar45 = *(uint *)(param_1 + 0x1c);
                  }
                  if (uVar45 < 2) {
                    uVar45 = 1;
                  }
                  bVar10 = iVar14 != 0;
                  uVar17 = (ulong)bVar10;
                  puVar36 = (ulong *)((long)puVar11 + 4);
                  lVar48 = *(long *)(param_1 + 0x30);
                  uVar19 = *(uint *)(param_1 + 0xc4);
                  uVar9 = (uint)*puVar11 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
                  uVar51 = *(uint *)(lVar48 + (ulong)uVar9 * 4);
                  lVar47 = *(long *)(param_1 + 0x40);
                  puVar41 = (uint *)(lVar47 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
                  puVar44 = puVar41 + 1;
                  iVar15 = uVar43 + 9;
                  uVar22 = 3;
                  if (bVar10) {
                    uVar22 = 4;
                  }
                  uVar59 = uVar26;
                  do {
                    if (uVar17 == 3) {
                      uVar39 = *piVar46 - 1;
                      uVar24 = *piVar46 - 2;
                    }
                    else {
                      uVar39 = piVar46[uVar17];
                      uVar24 = uVar39 - 1;
                    }
                    if ((uVar24 < uVar43 - iVar34) &&
                       ((uint)*puVar11 == *(uint *)((long)puVar11 - (ulong)uVar39))) {
                      lVar33 = -(ulong)uVar39;
                      puVar13 = (ulong *)((long)puVar36 + lVar33);
                      puVar21 = puVar36;
                      if (puVar36 < puVar27) {
                        if (*puVar13 == *puVar36) {
                          iVar40 = 0;
                          puVar21 = puVar52;
                          puVar13 = (ulong *)((long)puVar53 + lVar33 + uVar16 + 0xc);
                          do {
                            if (puVar27 <= puVar21) goto joined_r0x0001006e72e0;
                            uVar42 = *puVar13;
                            uVar57 = *puVar21;
                            iVar40 = iVar40 + 8;
                            puVar21 = puVar21 + 1;
                            puVar13 = puVar13 + 1;
                          } while (uVar42 == uVar57);
                          uVar57 = uVar57 ^ uVar42;
                          uVar57 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar57 & 0x5555555555555555) << 1;
                          uVar57 = (uVar57 & 0xcccccccccccccccc) >> 2 |
                                   (uVar57 & 0x3333333333333333) << 2;
                          uVar57 = (uVar57 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar57 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar57 = (uVar57 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar57 & 0xff00ff00ff00ff) << 8;
                          uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar57 & 0xffff0000ffff) << 0x10;
                          iVar40 = iVar40 + (int)((ulong)LZCOUNT(uVar57 >> 0x20 | uVar57 << 0x20) >>
                                                 3);
                        }
                        else {
                          uVar57 = *puVar36 ^ *puVar13;
                          uVar57 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar57 & 0x5555555555555555) << 1;
                          uVar57 = (uVar57 & 0xcccccccccccccccc) >> 2 |
                                   (uVar57 & 0x3333333333333333) << 2;
                          uVar57 = (uVar57 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar57 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar57 = (uVar57 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar57 & 0xff00ff00ff00ff) << 8;
                          uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar57 & 0xffff0000ffff) << 0x10;
                          iVar40 = (int)((ulong)LZCOUNT(uVar57 >> 0x20 | uVar57 << 0x20) >> 3);
                        }
                      }
                      else {
joined_r0x0001006e72e0:
                        if (puVar21 < puVar32) {
                          if ((uint)*puVar13 == (uint)*puVar21) {
                            puVar21 = (ulong *)((long)puVar21 + 4);
                            puVar13 = (ulong *)((long)puVar13 + 4);
                          }
                        }
                        if (puVar21 < puVar28) {
                          if ((short)*puVar13 == (short)*puVar21) {
                            puVar21 = (ulong *)((long)puVar21 + 2);
                            puVar13 = (ulong *)((long)puVar13 + 2);
                          }
                        }
                        if ((puVar21 < puVar4) && ((char)*puVar13 == (char)*puVar21)) {
                          puVar21 = (ulong *)((long)puVar21 + 1);
                        }
                        iVar40 = (int)puVar21 - (int)puVar36;
                      }
                      uVar39 = iVar40 + 4;
                      uVar57 = (ulong)uVar39;
                      if (uVar59 < uVar57) {
                        piVar6[uVar20 * 2] = (int)uVar17 - (uint)bVar10;
                        (piVar6 + uVar20 * 2)[1] = uVar39;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulong)uVar24;
                        if ((uVar55 < uVar39) ||
                           (uVar59 = uVar57, (ulong *)((long)puVar11 + uVar57) == puVar4))
                        goto joined_r0x0001006e7638;
                      }
                    }
                    uVar24 = (uint)uVar20;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 < uVar22);
                  *(uint *)(lVar48 + (ulong)uVar9 * 4) = uVar43;
                  if (uVar45 <= uVar51) {
                    uVar17 = 0;
                    uVar22 = 0;
                    uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
                    iVar34 = iVar15;
                    do {
                      uVar57 = uVar17;
                      if (uVar22 <= uVar17) {
                        uVar57 = uVar22;
                      }
                      uVar42 = (ulong)uVar51;
                      puVar36 = (ulong *)(lVar56 + uVar42 + uVar57);
                      puVar52 = (ulong *)((long)puVar11 + uVar57);
                      puVar13 = puVar52;
                      if (puVar52 < puVar27) {
                        if (*puVar36 == *puVar52) {
                          lVar48 = 0;
                          do {
                            puVar36 = (ulong *)((long)puVar53 + lVar48 + uVar57 + uVar16 + 8);
                            if (puVar27 <= puVar36) {
                              puVar36 = (ulong *)(lVar56 + 8 + uVar57 + uVar42 + lVar48);
                              puVar13 = (ulong *)((long)puVar53 + lVar48 + uVar57 + uVar16 + 8);
                              goto joined_r0x0001006e7c8c;
                            }
                            uVar61 = *(ulong *)(lVar56 + 8 + uVar57 + uVar42 + lVar48);
                            uVar49 = *puVar36;
                            lVar48 = lVar48 + 8;
                          } while (uVar61 == uVar49);
                          uVar49 = uVar49 ^ uVar61;
                          uVar61 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar49 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = lVar48 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                        }
                        else {
                          uVar61 = *puVar52 ^ *puVar36;
                          uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar61 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = (ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3;
                        }
                        uVar61 = uVar61 + uVar57;
                      }
                      else {
joined_r0x0001006e7c8c:
                        if (puVar13 < puVar32) {
                          if ((uint)*puVar36 == (uint)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 4);
                            puVar36 = (ulong *)((long)puVar36 + 4);
                          }
                        }
                        if (puVar13 < puVar28) {
                          if ((short)*puVar36 == (short)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 2);
                            puVar36 = (ulong *)((long)puVar36 + 2);
                          }
                        }
                        if ((puVar13 < puVar4) && ((char)*puVar36 == (char)*puVar13)) {
                          puVar13 = (ulong *)((long)puVar13 + 1);
                        }
                        uVar61 = (long)puVar13 + (uVar57 - (long)puVar52);
                      }
                      iVar15 = iVar34;
                      if (uVar59 < uVar61) {
                        iVar15 = uVar51 + (int)uVar61;
                        if (uVar61 <= iVar34 - uVar51) {
                          iVar15 = iVar34;
                        }
                        piVar6[uVar20 * 2] = (uVar43 + 2) - uVar51;
                        (piVar6 + uVar20 * 2)[1] = (int)uVar61;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulong)uVar24;
                        uVar59 = uVar61;
                        if (0x1000 < uVar61 || (ulong *)((long)puVar11 + uVar61) == puVar4) break;
                      }
                      uVar24 = (uint)uVar20;
                      puVar1 = (uint *)(lVar47 + (ulong)((uVar51 & uVar31) << 1) * 4);
                      if (*(byte *)(lVar56 + uVar42 + uVar61) < *(byte *)((long)puVar11 + uVar61)) {
                        *puVar41 = uVar51;
                        if (uVar51 <= uVar38) {
                          puVar41 = &local_94;
                          break;
                        }
                        puVar1 = puVar1 + 1;
                        uVar17 = uVar61;
                        puVar41 = puVar1;
                      }
                      else {
                        *puVar44 = uVar51;
                        puVar44 = puVar1;
                        uVar22 = uVar61;
                        if (uVar51 <= uVar38) {
                          puVar44 = &local_94;
                          break;
                        }
                      }
                      if (uVar55 == 0) break;
                      uVar55 = uVar55 - 1;
                      uVar51 = *puVar1;
                      iVar34 = iVar15;
                    } while (uVar45 <= uVar51);
                  }
                  *puVar44 = 0;
                  goto LAB_1006e7604;
                }
                uVar55 = *(uint *)(param_1 + 0xcc);
                if (0xffe < uVar55) {
                  uVar55 = 0xfff;
                }
                lVar56 = *(long *)(param_1 + 8);
                uVar39 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
                uVar31 = ~uVar39;
                uVar43 = iVar15 - (int)lVar56;
                uVar38 = 0;
                if (uVar31 <= uVar43) {
                  uVar38 = uVar43 - uVar31;
                }
                iVar34 = *(int *)(param_1 + 0x18);
                uVar19 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
                uVar45 = uVar43 - uVar19;
                if (uVar43 - *(uint *)(param_1 + 0x1c) <= uVar19 || *(int *)(param_1 + 0x20) != 0) {
                  uVar45 = *(uint *)(param_1 + 0x1c);
                }
                if (uVar45 < 2) {
                  uVar45 = 1;
                }
                bVar10 = iVar14 != 0;
                uVar17 = (ulong)bVar10;
                puVar52 = (ulong *)((long)puVar11 + 3);
                lVar47 = *(long *)(param_1 + 0x30);
                uVar19 = *(uint *)(param_1 + 0xc4);
                uVar9 = (uint)*puVar11 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
                uVar51 = *(uint *)(lVar47 + (ulong)uVar9 * 4);
                lVar48 = *(long *)(param_1 + 0x40);
                puVar41 = (uint *)(lVar48 + (ulong)((uVar43 & (uVar39 ^ 0xffffffff)) << 1) * 4);
                local_158 = puVar41 + 1;
                iVar15 = uVar43 + 9;
                uVar22 = 3;
                if (bVar10) {
                  uVar22 = 4;
                }
                uVar59 = uVar26;
                do {
                  if (uVar17 == 3) {
                    uVar39 = *piVar46 - 1;
                    uVar24 = *piVar46 - 2;
                  }
                  else {
                    uVar39 = piVar46[uVar17];
                    uVar24 = uVar39 - 1;
                  }
                  if ((uVar24 < uVar43 - iVar34) &&
                     (((*(uint *)((long)puVar11 - (ulong)uVar39) ^ (uint)*puVar11) & 0xffffff) == 0)
                     ) {
                    lVar33 = -(ulong)uVar39;
                    puVar36 = (ulong *)((long)puVar52 + lVar33);
                    puVar13 = puVar52;
                    if (puVar52 < puVar27) {
                      if (*puVar36 == *puVar52) {
                        iVar40 = 0;
                        puVar36 = (ulong *)((long)puVar53 + lVar33 + uVar16 + 0xb);
                        puVar13 = (ulong *)((long)puVar53 + uVar16 + 0xb);
                        do {
                          if (puVar27 <= puVar13) goto joined_r0x0001006e69f8;
                          uVar42 = *puVar36;
                          uVar57 = *puVar13;
                          iVar40 = iVar40 + 8;
                          puVar36 = puVar36 + 1;
                          puVar13 = puVar13 + 1;
                        } while (uVar42 == uVar57);
                        uVar57 = uVar57 ^ uVar42;
                        uVar57 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar57 & 0x5555555555555555) << 1;
                        uVar57 = (uVar57 & 0xcccccccccccccccc) >> 2 |
                                 (uVar57 & 0x3333333333333333) << 2;
                        uVar57 = (uVar57 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar57 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar57 = (uVar57 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar57 & 0xff00ff00ff00ff) << 8;
                        uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar57 & 0xffff0000ffff) << 0x10;
                        iVar40 = iVar40 + (int)((ulong)LZCOUNT(uVar57 >> 0x20 | uVar57 << 0x20) >> 3
                                               );
                      }
                      else {
                        uVar57 = *puVar52 ^ *puVar36;
                        uVar57 = (uVar57 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                 (uVar57 & 0x5555555555555555) << 1;
                        uVar57 = (uVar57 & 0xcccccccccccccccc) >> 2 |
                                 (uVar57 & 0x3333333333333333) << 2;
                        uVar57 = (uVar57 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar57 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar57 = (uVar57 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar57 & 0xff00ff00ff00ff) << 8;
                        uVar57 = (uVar57 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar57 & 0xffff0000ffff) << 0x10;
                        iVar40 = (int)((ulong)LZCOUNT(uVar57 >> 0x20 | uVar57 << 0x20) >> 3);
                      }
                    }
                    else {
joined_r0x0001006e69f8:
                      if (puVar13 < puVar32) {
                        if ((uint)*puVar36 == (uint)*puVar13) {
                          puVar36 = (ulong *)((long)puVar36 + 4);
                          puVar13 = (ulong *)((long)puVar13 + 4);
                        }
                      }
                      if (puVar13 < puVar28) {
                        if ((short)*puVar36 == (short)*puVar13) {
                          puVar36 = (ulong *)((long)puVar36 + 2);
                          puVar13 = (ulong *)((long)puVar13 + 2);
                        }
                      }
                      if ((puVar13 < puVar4) && ((char)*puVar36 == (char)*puVar13)) {
                        puVar13 = (ulong *)((long)puVar13 + 1);
                      }
                      iVar40 = (int)puVar13 - (int)puVar52;
                    }
                    uVar39 = iVar40 + 3;
                    uVar57 = (ulong)uVar39;
                    if (uVar59 < uVar57) {
                      piVar6[uVar20 * 2] = (int)uVar17 - (uint)bVar10;
                      (piVar6 + uVar20 * 2)[1] = uVar39;
                      uVar24 = (int)uVar20 + 1;
                      uVar20 = (ulong)uVar24;
                      if ((uVar55 < uVar39) ||
                         (uVar59 = uVar57, (ulong *)((long)puVar11 + uVar57) == puVar4))
                      goto joined_r0x0001006e7638;
                    }
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 < uVar22);
                if (2 < uVar59) {
LAB_1006e7644:
                  uVar24 = (uint)uVar20;
                  *(uint *)(lVar47 + (ulong)uVar9 * 4) = uVar43;
                  if (uVar45 <= uVar51) {
                    uVar17 = 0;
                    uVar22 = 0;
                    uVar55 = ~(-1 << (ulong)(uVar19 & 0x1f));
                    iVar34 = iVar15;
                    do {
                      uVar57 = uVar17;
                      if (uVar22 <= uVar17) {
                        uVar57 = uVar22;
                      }
                      uVar42 = (ulong)uVar51;
                      puVar36 = (ulong *)(lVar56 + uVar42 + uVar57);
                      puVar52 = (ulong *)((long)puVar11 + uVar57);
                      puVar13 = puVar52;
                      if (puVar52 < puVar27) {
                        if (*puVar36 == *puVar52) {
                          lVar47 = 0;
                          do {
                            puVar36 = (ulong *)((long)puVar53 + lVar47 + uVar57 + uVar16 + 8);
                            if (puVar27 <= puVar36) {
                              puVar36 = (ulong *)(lVar56 + 8 + uVar57 + uVar42 + lVar47);
                              puVar13 = (ulong *)((long)puVar53 + lVar47 + uVar57 + uVar16 + 8);
                              goto joined_r0x0001006e7eec;
                            }
                            uVar49 = *(ulong *)(lVar56 + 8 + uVar57 + uVar42 + lVar47);
                            uVar61 = *puVar36;
                            lVar47 = lVar47 + 8;
                          } while (uVar49 == uVar61);
                          uVar61 = uVar61 ^ uVar49;
                          uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar61 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = lVar47 + ((ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3);
                        }
                        else {
                          uVar61 = *puVar52 ^ *puVar36;
                          uVar61 = (uVar61 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar61 & 0x5555555555555555) << 1;
                          uVar61 = (uVar61 & 0xcccccccccccccccc) >> 2 |
                                   (uVar61 & 0x3333333333333333) << 2;
                          uVar61 = (uVar61 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar61 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar61 = (uVar61 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar61 & 0xff00ff00ff00ff) << 8;
                          uVar61 = (uVar61 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar61 & 0xffff0000ffff) << 0x10;
                          uVar61 = (ulong)LZCOUNT(uVar61 >> 0x20 | uVar61 << 0x20) >> 3;
                        }
                        uVar61 = uVar61 + uVar57;
                      }
                      else {
joined_r0x0001006e7eec:
                        if (puVar13 < puVar32) {
                          if ((uint)*puVar36 == (uint)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 4);
                            puVar36 = (ulong *)((long)puVar36 + 4);
                          }
                        }
                        if (puVar13 < puVar28) {
                          if ((short)*puVar36 == (short)*puVar13) {
                            puVar13 = (ulong *)((long)puVar13 + 2);
                            puVar36 = (ulong *)((long)puVar36 + 2);
                          }
                        }
                        if ((puVar13 < puVar4) && ((char)*puVar36 == (char)*puVar13)) {
                          puVar13 = (ulong *)((long)puVar13 + 1);
                        }
                        uVar61 = (long)puVar13 + (uVar57 - (long)puVar52);
                      }
                      iVar15 = iVar34;
                      if (uVar59 < uVar61) {
                        iVar15 = uVar51 + (int)uVar61;
                        if (uVar61 <= iVar34 - uVar51) {
                          iVar15 = iVar34;
                        }
                        piVar6[uVar20 * 2] = (uVar43 + 2) - uVar51;
                        (piVar6 + uVar20 * 2)[1] = (int)uVar61;
                        uVar24 = (int)uVar20 + 1;
                        uVar20 = (ulong)uVar24;
                        uVar59 = uVar61;
                        if (0x1000 < uVar61 || (ulong *)((long)puVar11 + uVar61) == puVar4) break;
                      }
                      uVar24 = (uint)uVar20;
                      puVar44 = (uint *)(lVar48 + (ulong)((uVar51 & uVar31) << 1) * 4);
                      if (*(byte *)(lVar56 + uVar42 + uVar61) < *(byte *)((long)puVar11 + uVar61)) {
                        *puVar41 = uVar51;
                        if (uVar51 <= uVar38) {
                          puVar41 = &local_94;
                          break;
                        }
                        puVar44 = puVar44 + 1;
                        uVar17 = uVar61;
                        puVar41 = puVar44;
                      }
                      else {
                        *local_158 = uVar51;
                        local_158 = puVar44;
                        uVar22 = uVar61;
                        if (uVar51 <= uVar38) {
                          local_158 = &local_94;
                          break;
                        }
                      }
                      if (uVar55 == 0) break;
                      uVar55 = uVar55 - 1;
                      uVar51 = *puVar44;
                      iVar34 = iVar15;
                    } while (uVar45 <= uVar51);
                  }
                  *local_158 = 0;
                  *puVar41 = 0;
                  *(int *)(param_1 + 0x24) = iVar15 + -8;
                  goto joined_r0x0001006e7638;
                }
                lVar33 = *(long *)(param_1 + 0x38);
                uVar17 = *puVar11;
                uVar39 = 0x20 - *(int *)(param_1 + 0x28);
                if (local_13c < uVar43) {
                  uVar22 = (ulong)local_13c;
                  do {
                    *(int *)(lVar33 + (ulong)((uint)(*(int *)(lVar56 + uVar22) * 0x35a7bd00) >>
                                             (ulong)(uVar39 & 0x1f)) * 4) = (int)uVar22;
                    uVar22 = uVar22 + 1;
                  } while ((uint)(iVar62 - (int)lVar56) != uVar22);
                }
                uVar39 = *(uint *)(lVar33 + (ulong)((uint)uVar17 * 0x35a7bd00 >>
                                                   (ulong)(uVar39 & 0x1f)) * 4);
                local_13c = uVar43;
                if (uVar39 < uVar45 || uVar43 - uVar39 >> 0x12 != 0) goto LAB_1006e7644;
                puVar52 = (ulong *)(lVar56 + (ulong)uVar39);
                puVar36 = puVar11;
                if (puVar11 < puVar27) {
                  if (*puVar52 == *puVar11) {
                    lVar33 = 0;
                    puVar52 = (ulong *)(lVar56 + (ulong)uVar39);
                    puVar36 = (ulong *)((long)puVar53 + uVar16 + 8);
                    do {
                      puVar52 = puVar52 + 1;
                      if (puVar27 <= puVar36) goto LAB_1006e80e0;
                      uVar17 = *puVar36;
                      lVar33 = lVar33 + 8;
                      puVar36 = puVar36 + 1;
                    } while (*puVar52 == uVar17);
                    uVar17 = uVar17 ^ *puVar52;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = lVar33 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                  }
                  else {
                    uVar17 = *puVar11 ^ *puVar52;
                    uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1
                    ;
                    uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2
                    ;
                    uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                    uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar17 & 0xffff0000ffff) << 0x10;
                    uVar17 = (ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3;
                  }
                }
                else {
LAB_1006e80e0:
                  if (puVar36 < puVar32) {
                    if ((uint)*puVar52 == (uint)*puVar36) {
                      puVar36 = (ulong *)((long)puVar36 + 4);
                      puVar52 = (ulong *)((long)puVar52 + 4);
                    }
                  }
                  if (puVar36 < puVar28) {
                    if (*(short *)puVar52 == *(short *)puVar36) {
                      puVar36 = (ulong *)((long)puVar36 + 2);
                      puVar52 = (ulong *)((long)puVar52 + 2);
                    }
                  }
                  if ((puVar36 < puVar4) && ((char)*puVar52 == (char)*puVar36)) {
                    puVar36 = (ulong *)((long)puVar36 + 1);
                  }
                  uVar17 = (long)puVar36 - (long)puVar11;
                }
                if (uVar17 < 3) goto LAB_1006e7644;
                *piVar6 = (uVar43 - uVar39) + 2;
                piVar6[1] = (int)uVar17;
                if (uVar17 <= uVar55 && (ulong *)((long)puVar11 + uVar17) != puVar4) {
                  uVar20 = 1;
                  uVar59 = uVar17;
                  goto LAB_1006e7644;
                }
                *(uint *)(param_1 + 0x24) = uVar43 + 1;
                uVar24 = 1;
              }
              uVar55 = (piVar6 + (ulong)(uVar24 - 1) * 2)[1];
              if ((uVar5 < uVar55) || (0xfff < uVar55 + iVar64)) {
                if (piVar12[2] == 0) {
                  iVar62 = piVar12[3];
                }
                else {
                  iVar62 = 0;
                }
                iVar37 = piVar6[(ulong)(uVar24 - 1) * 2];
                uVar38 = 0;
                if ((uint)(iVar64 - iVar62) < 0x1001) {
                  uVar38 = iVar64 - iVar62;
                }
                goto LAB_1006e8258;
              }
              uVar20 = 0;
              piVar46 = piVar7 + uVar16 * 7 + 4;
              do {
                puVar41 = (uint *)(piVar6 + uVar20 * 2);
                uVar55 = *puVar41;
                if (uVar55 < 3) {
                  uVar38 = uVar55 + (iVar14 != 0);
                  if (uVar38 == 0) {
                    iVar34 = *piVar46;
                    iVar15 = piVar7[uVar16 * 7 + 5];
                    piVar12 = piVar7 + uVar16 * 7 + 6;
                  }
                  else {
                    if (uVar38 == 3) {
                      iVar15 = *piVar46;
                      iVar34 = iVar15 + -1;
                    }
                    else {
                      iVar34 = piVar46[uVar38];
                      iVar15 = *piVar46;
                    }
                    lVar56 = 8;
                    if (uVar38 != 1) {
                      lVar56 = 4;
                    }
                    piVar12 = (int *)((long)piVar46 + lVar56);
                  }
                }
                else {
                  iVar15 = *piVar46;
                  iVar34 = uVar55 - 2;
                  piVar12 = piVar7 + uVar16 * 7 + 5;
                }
                uVar38 = uVar23;
                if (uVar20 != 0) {
                  uVar38 = puVar41[-1] + 1;
                }
                uVar39 = puVar41[1];
                if (uVar38 <= uVar39) {
                  iVar40 = 0;
                  iVar8 = *piVar12;
                  uVar43 = (uint)LZCOUNT(uVar55 + 1) ^ 0x1f;
                  uVar31 = iVar64 + uVar39;
                  uVar45 = uVar31;
                  do {
                    if (*(int *)(param_1 + 0x98) == 1) {
                      uVar19 = (uint)LZCOUNT(uVar39 - 2) ^ 0x1f;
                      iVar18 = iVar30 + iVar37 +
                               ((uVar39 - 2) * 0x100 >> (ulong)(uVar19 & 0x1f)) +
                               (uVar19 + uVar43) * 0x100 + 0x1000;
                      uVar17 = (ulong)(uVar39 + iVar64);
                      if (uVar39 + iVar64 <= (uint)uVar60) goto LAB_1006e77f8;
LAB_1006e78b0:
                      uVar59 = uVar60 & 0xffffffff;
                      uVar22 = (uVar31 - iVar40) - uVar59;
                      uVar60 = uVar59;
                      if (uVar22 < 4) {
LAB_1006e7910:
                        piVar12 = piVar3 + uVar60 * 7;
                        do {
                          uVar60 = uVar60 + 1;
                          *piVar12 = 0x40000000;
                          piVar12 = piVar12 + 7;
                        } while (uVar60 < uVar17);
                      }
                      else {
                        uVar60 = (uVar22 & 0xfffffffffffffffc) + uVar59;
                        uVar57 = uVar45 - uVar59 & 0xfffffffffffffffc;
                        piVar12 = piVar7 + uVar59 * 7 + 0xe;
                        do {
                          piVar12[-7] = 0x40000000;
                          *piVar12 = 0x40000000;
                          piVar12[7] = 0x40000000;
                          piVar12[0xe] = 0x40000000;
                          piVar12 = piVar12 + 0x1c;
                          uVar57 = uVar57 - 4;
                        } while (uVar57 != 0);
                        if (uVar22 != (uVar22 & 0xfffffffffffffffc)) goto LAB_1006e7910;
                      }
LAB_1006e7790:
                      piVar12 = piVar7 + uVar17 * 7;
                      piVar12[2] = uVar39;
                      piVar12[3] = iVar35;
                      *piVar12 = iVar18;
                      piVar12[1] = uVar55;
                      *(ulong *)(piVar12 + 4) = CONCAT44(iVar15,iVar34);
                      piVar12[6] = iVar8;
                    }
                    else {
                      uVar19 = uVar39 - 3;
                      if (uVar19 < 0x80) {
                        uVar19 = (uint)(byte)(&DAT_10084ff08)[uVar19];
                      }
                      else {
                        uVar19 = 0x43 - (int)LZCOUNT(uVar19);
                      }
                      iVar18 = *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar43 * 4) + 1;
                      uVar51 = (uint)LZCOUNT(iVar18) ^ 0x1f;
                      iVar2 = *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar19 * 4) + 1;
                      uVar9 = (uint)LZCOUNT(iVar2) ^ 0x1f;
                      iVar18 = iVar30 + iVar37 +
                               (((*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90)) -
                                ((uint)(iVar18 * 0x100) >> (ulong)(uVar51 & 0x1f))) -
                               ((uint)(iVar2 * 0x100) >> (ulong)(uVar9 & 0x1f))) +
                               (((uVar43 + *(int *)(&DAT_10084fe34 + (ulong)uVar19 * 4)) - uVar51) -
                               uVar9) * 0x100 + 0x33;
                      uVar17 = (ulong)(uVar39 + iVar64);
                      if ((uint)uVar60 < uVar39 + iVar64) goto LAB_1006e78b0;
LAB_1006e77f8:
                      if (iVar18 < piVar7[uVar17 * 7]) goto LAB_1006e7790;
                    }
                    uVar39 = uVar39 - 1;
                    iVar40 = iVar40 + 1;
                    uVar45 = uVar45 - 1;
                  } while (uVar38 <= uVar39);
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar24);
            }
          }
LAB_1006e6410:
          uVar16 = (ulong)(iVar64 + 1U);
          uVar20 = uVar60;
        } while (iVar64 + 1U <= (uint)uVar60);
      }
      piVar46 = piVar7 + (uVar20 & 0xffffffff) * 7;
      local_15c = *piVar46;
      iVar37 = piVar46[1];
      uVar55 = piVar46[2];
      iVar35 = piVar46[3];
      local_90 = *(undefined8 *)(piVar46 + 4);
      local_88 = piVar46[6];
      uVar38 = 0;
      if (iVar35 + uVar55 <= (uint)uVar20) {
        uVar38 = (uint)uVar20 - (iVar35 + uVar55);
      }
    }
LAB_1006e8258:
    uVar39 = uVar38 + 1;
    piVar46 = piVar7 + (ulong)uVar39 * 7;
    *piVar46 = local_15c;
    piVar46[1] = iVar37;
    piVar46[2] = uVar55;
    piVar46[3] = iVar35;
    *(undefined8 *)(piVar46 + 4) = local_90;
    piVar46[6] = local_88;
    uVar55 = uVar38;
    if (uVar38 == 0) {
      uVar31 = 1;
      goto LAB_1006e8380;
    }
    do {
      uVar31 = uVar55;
      piVar46 = piVar7 + (ulong)uVar38 * 7;
      iVar35 = piVar46[2];
      iVar62 = piVar46[3];
      piVar12 = piVar7 + (ulong)uVar31 * 7;
      uVar65 = *(undefined8 *)(piVar46 + 2);
      uVar63 = *(undefined8 *)piVar46;
      uVar66 = *(undefined8 *)(piVar46 + 3);
      *(undefined8 *)(piVar12 + 5) = *(undefined8 *)(piVar46 + 5);
      *(undefined8 *)(piVar12 + 3) = uVar66;
      *(undefined8 *)(piVar12 + 2) = uVar65;
      *(undefined8 *)piVar12 = uVar63;
      uVar43 = iVar62 + iVar35;
      bVar10 = uVar43 <= uVar38;
      uVar43 = uVar38 - uVar43;
      uVar38 = 0;
      if (bVar10) {
        uVar38 = uVar43;
      }
      uVar55 = uVar31 - 1;
    } while (bVar10 && uVar43 != 0);
    for (; uVar31 <= uVar39; uVar31 = uVar31 + 1) {
LAB_1006e8380:
      while( true ) {
        iVar35 = piVar7[(ulong)uVar31 * 7 + 2];
        uVar55 = piVar7[(ulong)uVar31 * 7 + 3];
        uVar60 = (ulong)uVar55;
        if (iVar35 != 0) break;
        puVar53 = (ulong *)((long)param_4 + uVar60);
        uVar31 = uVar31 + 1;
        if (uVar39 < uVar31) goto LAB_1006e82c8;
      }
      uVar38 = piVar7[(ulong)uVar31 * 7 + 1];
      if (uVar38 < 3) {
        uVar43 = uVar38;
        if (uVar55 == 0) {
          uVar43 = uVar38 + 1;
        }
        if (uVar43 != 0) {
          if (uVar43 == 3) {
            iVar62 = *param_3 + -1;
LAB_1006e83e8:
            param_3[2] = param_3[1];
          }
          else {
            iVar62 = param_3[uVar43];
            if (uVar43 != 1) goto LAB_1006e83e8;
          }
          param_3[1] = *param_3;
          goto LAB_1006e8400;
        }
      }
      else {
        *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
        iVar62 = uVar38 - 2;
LAB_1006e8400:
        *param_3 = iVar62;
      }
      if (*(int *)(param_1 + 0xa8) != 2) {
        if (uVar55 != 0) {
          lVar56 = *(long *)(param_1 + 0x48);
          puVar53 = param_4;
          uVar20 = uVar60;
          do {
            *(int *)(lVar56 + (ulong)(byte)*puVar53 * 4) =
                 *(int *)(lVar56 + (ulong)(byte)*puVar53 * 4) + 2;
            uVar20 = uVar20 - 1;
            puVar53 = (ulong *)((long)puVar53 + 1);
          } while (uVar20 != 0);
        }
        *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar55 * 2;
      }
      if (uVar55 < 0x40) {
        uVar43 = (uint)(byte)(&DAT_10084fdf4)[uVar60];
      }
      else {
        uVar43 = 0x32 - (int)LZCOUNT(uVar55);
      }
      *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar43 * 4) =
           *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar43 * 4) + 1;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      uVar43 = (uint)LZCOUNT(uVar38 + 1) ^ 0x1f;
      *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar43 * 4) =
           *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar43 * 4) + 1;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      uVar43 = iVar35 - 3;
      if (uVar43 < 0x80) {
        uVar45 = (uint)(byte)(&DAT_10084ff08)[uVar43];
      }
      else {
        uVar45 = 0x43 - (int)LZCOUNT(uVar43);
      }
      *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar45 * 4) =
           *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar45 * 4) + 1;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      puVar53 = (ulong *)param_2[3];
      puVar11 = (ulong *)((long)param_4 + uVar60);
      if (puVar29 < puVar11) {
        puVar52 = param_4;
        puVar36 = puVar53;
        if (param_4 <= puVar29) {
          puVar36 = (ulong *)((long)puVar53 + ((long)puVar29 - (long)param_4));
          uVar20 = *param_4;
          puVar53[1] = param_4[1];
          *puVar53 = uVar20;
          uVar20 = param_4[2];
          puVar53[3] = param_4[3];
          puVar53[2] = uVar20;
          puVar52 = puVar29;
          if (0x20 < (long)puVar29 - (long)param_4) {
            puVar53 = puVar53 + 4;
            puVar13 = param_4 + 6;
            do {
              uVar20 = puVar13[-2];
              puVar53[1] = puVar13[-1];
              *puVar53 = uVar20;
              uVar20 = *puVar13;
              puVar53[3] = puVar13[1];
              puVar53[2] = uVar20;
              puVar53 = puVar53 + 4;
              puVar13 = puVar13 + 4;
            } while (puVar53 < puVar36);
          }
        }
        if (puVar52 < puVar11) {
          uVar20 = (long)puVar11 - (long)puVar52;
          if ((7 < uVar20) && (0x3f < (ulong)((long)puVar36 - (long)puVar52))) {
            if (uVar20 < 0x40) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar20 & 0xffffffffffffffc0;
              puVar53 = puVar36 + 4;
              puVar13 = puVar52 + 4;
              uVar16 = uVar17;
              do {
                uVar22 = puVar13[-4];
                uVar57 = puVar13[-1];
                uVar59 = puVar13[-2];
                uVar61 = puVar13[1];
                uVar42 = *puVar13;
                uVar67 = puVar13[3];
                uVar49 = puVar13[2];
                puVar53[-3] = puVar13[-3];
                puVar53[-4] = uVar22;
                puVar53[-1] = uVar57;
                puVar53[-2] = uVar59;
                puVar53[1] = uVar61;
                *puVar53 = uVar42;
                puVar53[3] = uVar67;
                puVar53[2] = uVar49;
                uVar16 = uVar16 - 0x40;
                puVar53 = puVar53 + 8;
                puVar13 = puVar13 + 8;
              } while (uVar16 != 0);
              if (uVar20 == uVar17) goto LAB_1006e86a8;
              if ((uVar20 & 0x38) == 0) {
                puVar52 = (ulong *)((long)puVar52 + uVar17);
                puVar36 = (ulong *)((long)puVar36 + uVar17);
                goto LAB_1006e8698;
              }
            }
            uVar16 = uVar20 & 0xfffffffffffffff8;
            lVar56 = uVar17 - uVar16;
            puVar50 = (undefined8 *)((long)puVar36 + uVar17);
            puVar54 = (undefined8 *)((long)puVar52 + uVar17);
            do {
              *puVar50 = *puVar54;
              lVar56 = lVar56 + 8;
              puVar50 = puVar50 + 1;
              puVar54 = puVar54 + 1;
            } while (lVar56 != 0);
            puVar36 = (ulong *)((long)puVar36 + uVar16);
            puVar52 = (ulong *)((long)puVar52 + uVar16);
            if (uVar20 == uVar16) goto LAB_1006e86a8;
          }
LAB_1006e8698:
          do {
            puVar53 = (ulong *)((long)puVar52 + 1);
            *(char *)puVar36 = (char)*puVar52;
            puVar36 = (ulong *)((long)puVar36 + 1);
            puVar52 = puVar53;
          } while (puVar53 != puVar11);
        }
LAB_1006e86a8:
        param_2[3] = param_2[3] + uVar60;
        piVar46 = (int *)param_2[1];
        if (0xffff < uVar55) {
          *(undefined4 *)(param_2 + 9) = 1;
          *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar46 - *param_2) >> 3);
        }
      }
      else {
        uVar20 = *param_4;
        puVar53[1] = param_4[1];
        *puVar53 = uVar20;
        if (0x10 < uVar55) {
          lVar56 = param_2[3];
          uVar20 = param_4[2];
          *(ulong *)(lVar56 + 0x18) = param_4[3];
          *(ulong *)(lVar56 + 0x10) = uVar20;
          uVar20 = param_4[4];
          *(ulong *)(lVar56 + 0x28) = param_4[5];
          *(ulong *)(lVar56 + 0x20) = uVar20;
          if (uVar60 - 0x31 < 0xffffffffffffffdf) {
            puVar53 = (ulong *)(lVar56 + 0x30);
            puVar11 = param_4 + 8;
            do {
              uVar20 = puVar11[-2];
              puVar53[1] = puVar11[-1];
              *puVar53 = uVar20;
              uVar20 = *puVar11;
              puVar53[3] = puVar11[1];
              puVar53[2] = uVar20;
              puVar53 = puVar53 + 4;
              puVar11 = puVar11 + 4;
            } while (puVar53 < (ulong *)(lVar56 + uVar60));
            goto LAB_1006e86a8;
          }
        }
        param_2[3] = param_2[3] + uVar60;
        piVar46 = (int *)param_2[1];
      }
      *(short *)(piVar46 + 1) = (short)uVar55;
      *piVar46 = uVar38 + 1;
      if (0xffff < uVar43) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar46 - *param_2) >> 3);
      }
      *(short *)((long)piVar46 + 6) = (short)uVar43;
      param_2[1] = (long)(piVar46 + 2);
      puVar53 = (ulong *)((long)param_4 + (ulong)(iVar35 + uVar55));
      param_4 = puVar53;
    }
LAB_1006e82c8:
    if (*(int *)(param_1 + 0xa8) != 2) {
      iVar35 = *(int *)(param_1 + 0x78) + 1;
      uVar55 = (uint)LZCOUNT(iVar35) ^ 0x1f;
      *(uint *)(param_1 + 0x88) =
           ((uint)(iVar35 * 0x100) >> (ulong)(uVar55 & 0x1f)) + uVar55 * 0x100;
    }
    iVar35 = *(int *)(param_1 + 0x84) + 1;
    uVar55 = (uint)LZCOUNT(iVar35) ^ 0x1f;
    iVar62 = (int)*(undefined8 *)(param_1 + 0x7c) + 1;
    iVar64 = (int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1;
    uVar38 = (uint)(byte)((byte)LZCOUNT(iVar62) ^ 0x1f);
    uVar39 = (uint)(byte)((byte)LZCOUNT(iVar64) ^ 0x1f);
    uVar63 = NEON_ushl(CONCAT44(iVar64 * 0x100,iVar62 * 0x100),CONCAT44(-uVar39,-uVar38),4);
    *(ulong *)(param_1 + 0x8c) =
         CONCAT44(uVar39 * 0x100 + (int)((ulong)uVar63 >> 0x20),uVar38 * 0x100 + (int)uVar63);
    *(uint *)(param_1 + 0x94) = ((uint)(iVar35 * 0x100) >> (ulong)(uVar55 & 0x1f)) + uVar55 * 0x100;
  }
  if (puVar58 <= puVar53) goto LAB_1006e88d4;
  goto LAB_1006e4c28;
}

