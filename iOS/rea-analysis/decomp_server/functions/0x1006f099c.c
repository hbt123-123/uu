// rea decompile_all
// name: FUN_1006f099c
// address: 0x1006f099c
// body: available
// range: 0x1006f099c-0x1006f6483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f6480 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006f5b10) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1006f099c(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  int *piVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong *puVar36;
  uint *puVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong *puVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ulong *puVar47;
  uint uVar48;
  long lVar49;
  uint uVar50;
  long lVar51;
  byte *pbVar52;
  uint uVar53;
  ulong extraout_x13;
  ulong uVar54;
  int iVar55;
  uint uVar56;
  int *piVar57;
  int iVar58;
  undefined8 *puVar59;
  long *plVar60;
  uint *puVar61;
  ulong *puVar62;
  uint uVar63;
  int iVar64;
  ulong uVar65;
  undefined8 *puVar66;
  long lVar67;
  ulong uVar68;
  ulong *puVar69;
  ulong uVar70;
  ulong uVar71;
  uint *puVar72;
  ulong uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  ulong uVar77;
  uint local_23c;
  uint *local_170;
  uint *local_150;
  uint *local_128;
  uint local_94;
  undefined8 local_90;
  uint local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar69 = puVar2 + -1;
  lVar32 = *(long *)(param_1 + 8);
  uVar40 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0xcc);
  if (0xffe < uVar4) {
    uVar4 = 0xfff;
  }
  uVar29 = 3;
  if (*(int *)(param_1 + 200) != 3) {
    uVar29 = 4;
  }
  local_23c = *(uint *)(param_1 + 0x24);
  piVar5 = *(int **)(param_1 + 0x68);
  piVar6 = *(int **)(param_1 + 0x70);
  FUN_100705568(param_1 + 0x48,param_4,param_5,0);
  puVar62 = param_4;
  if ((ulong *)(lVar32 + (ulong)uVar40) == param_4) {
    puVar62 = (ulong *)((long)param_4 + 1);
  }
  if (puVar69 <= puVar62) {
LAB_1006f643c:
    if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return (long)puVar2 - (long)param_4;
  }
  uVar33 = (ulong)(uVar29 - 1);
  puVar34 = (ulong *)((long)puVar2 - 7);
  puVar47 = (ulong *)((long)puVar2 - 3);
  puVar35 = (ulong *)((long)puVar2 - 1);
  puVar36 = puVar2 + -4;
  piVar1 = piVar6 + 7;
  lVar32 = (ulong)uVar29 - 1;
  uVar54 = extraout_x13;
LAB_1006f0acc:
  uVar41 = (long)puVar62 - (long)param_4;
  uVar48 = (uint)uVar41;
  lVar67 = *(long *)(param_1 + 8);
  uVar40 = *(uint *)(param_1 + 0x24);
  uVar70 = (ulong)uVar40;
  uVar68 = uVar54;
  if ((ulong *)(lVar67 + uVar70) <= puVar62) {
    iVar44 = *(int *)(param_1 + 200);
    iVar64 = (int)puVar62;
    uVar50 = iVar64 - (int)lVar67;
    while (uVar40 < uVar50) {
      lVar25 = param_1;
      FUN_100705148(param_1,lVar67 + uVar70,puVar2,iVar44,0);
      uVar40 = (int)lVar25 + (int)uVar70;
      uVar70 = (ulong)uVar40;
    }
    *(uint *)(param_1 + 0x24) = uVar50;
    if (iVar44 - 6U < 2) {
      uVar70 = 0;
      uVar40 = *(uint *)(param_1 + 0xcc);
      if (0xffe < uVar40) {
        uVar40 = 0xfff;
      }
      lVar25 = *(long *)(param_1 + 8);
      lVar49 = *(long *)(param_1 + 0x30);
      uVar53 = *(uint *)(param_1 + 0xc4);
      uVar68 = *puVar62 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
      uVar20 = *(uint *)(lVar49 + uVar68 * 4);
      lVar67 = *(long *)(param_1 + 0x40);
      uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar26 = ~uVar56;
      uVar28 = iVar64 - (int)lVar25;
      uVar50 = 0;
      if (uVar26 <= uVar28) {
        uVar50 = uVar28 - uVar26;
      }
      uVar12 = *(uint *)(param_1 + 0x18);
      uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar63 = uVar28 - uVar3;
      if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar3 || *(int *)(param_1 + 0x20) != 0) {
        uVar63 = *(uint *)(param_1 + 0x1c);
      }
      uVar3 = uVar63;
      if (uVar63 < 2) {
        uVar3 = 1;
      }
      plVar60 = *(long **)(param_1 + 0xb0);
      lVar51 = *plVar60;
      lVar7 = plVar60[1];
      iVar44 = (int)(lVar51 - lVar7);
      uVar63 = uVar63 - iVar44;
      lVar13 = plVar60[0x18];
      uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
      uVar9 = *(uint *)((long)plVar60 + 0x1c);
      uVar10 = iVar44 - uVar8;
      if (iVar44 - uVar9 <= uVar8) {
        uVar10 = uVar9;
      }
      bVar14 = uVar48 == 0;
      uVar22 = (ulong)bVar14;
      puVar37 = (uint *)(lVar67 + (ulong)((uVar28 & (uVar56 ^ 0xffffffff)) << 1) * 4);
      puVar61 = puVar37 + 1;
      iVar44 = uVar28 + 9;
      uVar71 = 3;
      if (bVar14) {
        uVar71 = 4;
      }
      puVar15 = (ulong *)((long)puVar62 + 4);
      uVar73 = uVar33;
      do {
        if (uVar22 == 3) {
          uVar56 = *param_3 - 1;
          uVar39 = *param_3 - 2;
          if (uVar39 < uVar28 - uVar12) goto LAB_1006f11a0;
LAB_1006f10ec:
          if ((uVar39 < (uVar28 - uVar9) - uVar63 && (uVar28 - uVar56) - uVar12 < 0xfffffffd) &&
             (puVar72 = (uint *)((lVar7 - (ulong)uVar63) + (ulong)(uVar28 - uVar56)),
             (uint)*puVar62 == *puVar72)) {
            puVar21 = puVar15;
            FUN_1006c7460(puVar15,puVar72 + 1,puVar2,lVar51,lVar25 + (ulong)uVar12);
            uVar56 = (int)puVar21 + 4;
            uVar42 = (ulong)uVar56;
            if (uVar42 <= uVar73) goto LAB_1006f10c4;
            goto LAB_1006f130c;
          }
        }
        else {
          uVar56 = param_3[uVar22];
          uVar39 = uVar56 - 1;
          if (uVar28 - uVar12 <= uVar39) goto LAB_1006f10ec;
LAB_1006f11a0:
          if ((uint)*puVar62 == *(uint *)((long)puVar62 - (ulong)uVar56)) {
            lVar38 = -(ulong)uVar56;
            puVar21 = (ulong *)((long)puVar15 + lVar38);
            puVar17 = puVar15;
            if (puVar15 < puVar34) {
              if (*puVar21 == *puVar15) {
                iVar30 = 0;
                puVar21 = (ulong *)((long)puVar62 + 0xc + lVar38);
                puVar17 = (ulong *)((long)puVar62 + 0xc);
                do {
                  if (puVar34 <= puVar17) goto LAB_1006f1248;
                  uVar65 = *puVar21;
                  uVar42 = *puVar17;
                  iVar30 = iVar30 + 8;
                  puVar21 = puVar21 + 1;
                  puVar17 = puVar17 + 1;
                } while (uVar65 == uVar42);
                uVar42 = uVar42 ^ uVar65;
                uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
                iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
              }
              else {
                uVar42 = *puVar15 ^ *puVar21;
                uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
                iVar30 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
              }
            }
            else {
LAB_1006f1248:
              if (puVar17 < puVar47) {
                if ((uint)*puVar21 == (uint)*puVar17) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar17 = (ulong *)((long)puVar17 + 4);
                }
              }
              if (puVar17 < puVar35) {
                if (*(short *)puVar21 == *(short *)puVar17) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
              }
              if ((puVar17 < puVar2) && ((char)*puVar21 == (char)*puVar17)) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
              iVar30 = (int)puVar17 - (int)puVar15;
            }
            uVar56 = iVar30 + 4;
            uVar42 = (ulong)uVar56;
            if (uVar73 < uVar42) {
LAB_1006f130c:
              piVar5[uVar70 * 2] = (int)uVar22 - (uint)bVar14;
              (piVar5 + uVar70 * 2)[1] = uVar56;
              uVar39 = (int)uVar70 + 1;
              uVar70 = (ulong)uVar39;
              if ((uVar40 < uVar56) ||
                 (uVar73 = uVar42, (ulong *)((long)puVar62 + uVar42) == puVar2)) goto LAB_1006f2e90;
            }
          }
        }
LAB_1006f10c4:
        uVar39 = (uint)uVar70;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar71);
      *(uint *)(lVar49 + uVar68 * 4) = uVar28;
      uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
      if (uVar3 <= uVar20) {
        uVar22 = 0;
        uVar68 = 0;
        puVar72 = puVar61;
        iVar30 = iVar44;
        do {
          uVar71 = uVar22;
          if (uVar68 <= uVar22) {
            uVar71 = uVar68;
          }
          lVar49 = lVar25 + (ulong)uVar20;
          puVar15 = (ulong *)(lVar49 + uVar71);
          puVar21 = (ulong *)((long)puVar62 + uVar71);
          puVar17 = puVar21;
          if (puVar21 < puVar34) {
            if (*puVar15 == *puVar21) {
              lVar38 = 0;
              puVar15 = (ulong *)(lVar25 + 8 + uVar71 + uVar20);
              puVar17 = (ulong *)((long)puVar62 + uVar71 + 8);
              do {
                if (puVar34 <= puVar17) goto joined_r0x0001006f207c;
                uVar42 = *puVar15;
                uVar65 = *puVar17;
                lVar38 = lVar38 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar42 == uVar65);
              uVar65 = uVar65 ^ uVar42;
              uVar42 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = lVar38 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
            }
            else {
              uVar42 = *puVar21 ^ *puVar15;
              uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = (ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3;
            }
            uVar42 = uVar42 + uVar71;
          }
          else {
joined_r0x0001006f207c:
            if (puVar17 < puVar47) {
              if ((uint)*puVar15 == (uint)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < puVar35) {
              if ((short)*puVar15 == (short)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar2) && ((char)*puVar15 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            uVar42 = (long)puVar17 + (uVar71 - (long)puVar21);
          }
          iVar44 = iVar30;
          if (uVar73 < uVar42) {
            iVar44 = uVar20 + (int)uVar42;
            if (uVar42 <= iVar30 - uVar20) {
              iVar44 = iVar30;
            }
            piVar5[uVar70 * 2] = (uVar28 + 2) - uVar20;
            (piVar5 + uVar70 * 2)[1] = (int)uVar42;
            uVar39 = (int)uVar70 + 1;
            uVar70 = (ulong)uVar39;
            uVar73 = uVar42;
            if (0x1000 < uVar42 || (ulong *)((long)puVar62 + uVar42) == puVar2) {
              *puVar72 = 0;
              *puVar37 = 0;
              goto LAB_1006f2e5c;
            }
          }
          uVar39 = (uint)uVar70;
          puVar61 = (uint *)(lVar67 + (ulong)((uVar20 & uVar26) << 1) * 4);
          if (*(byte *)(lVar49 + uVar42) < *(byte *)((long)puVar62 + uVar42)) {
            *puVar37 = uVar20;
            if (uVar20 <= uVar50) {
              puVar37 = &local_94;
              puVar61 = puVar72;
              break;
            }
            puVar61 = puVar61 + 1;
            uVar22 = uVar42;
            puVar37 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              puVar61 = puVar72;
              break;
            }
          }
          else {
            *puVar72 = uVar20;
            if (uVar20 <= uVar50) {
              puVar61 = &local_94;
              break;
            }
            uVar68 = uVar42;
            puVar72 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              break;
            }
          }
          uVar40 = uVar40 - 1;
          uVar20 = *puVar61;
          puVar61 = puVar72;
          iVar30 = iVar44;
        } while (uVar3 <= uVar20);
      }
      *puVar61 = 0;
      *puVar37 = 0;
      if ((uVar40 != 0) &&
         (uVar50 = *(uint *)(plVar60[6] +
                            (*puVar62 * -0x30e4432340650000 >> ((ulong)(uint)-(int)lVar13 & 0x3f)) *
                            4), uVar9 < uVar50)) {
        uVar70 = 0;
        lVar67 = plVar60[8];
        uVar68 = 0;
        iVar30 = iVar44;
        do {
          uVar40 = uVar40 - 1;
          uVar22 = uVar68;
          if (uVar70 <= uVar68) {
            uVar22 = uVar70;
          }
          uVar71 = (ulong)uVar50;
          lVar49 = (long)puVar62 + uVar22;
          FUN_1006c7460(lVar49,lVar7 + uVar71 + uVar22,puVar2,lVar51,lVar25 + (ulong)uVar12);
          uVar22 = lVar49 + uVar22;
          lVar49 = lVar7 + uVar71;
          if ((lVar51 - lVar7 & 0xffffffffU) <= uVar22 + uVar71) {
            lVar49 = lVar25 + (ulong)uVar63 + uVar71;
          }
          iVar44 = iVar30;
          if (uVar73 < uVar22) {
            iVar55 = uVar50 + uVar63;
            iVar44 = iVar55 + (int)uVar22;
            if (uVar22 <= (uint)(iVar30 - iVar55)) {
              iVar44 = iVar30;
            }
            piVar5[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar55;
            (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar22;
            uVar39 = uVar39 + 1;
            if ((0x1000 < uVar22) || (uVar73 = uVar22, (ulong *)((long)puVar62 + uVar22) == puVar2))
            break;
          }
          if (uVar50 <= uVar10) break;
          bVar14 = *(byte *)(lVar49 + uVar22) < *(byte *)((long)puVar62 + uVar22);
          uVar71 = uVar22;
          if (!bVar14) {
            uVar71 = uVar68;
            uVar70 = uVar22;
          }
          if ((uVar40 == 0) ||
             (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar8) << 1) * 4 + (ulong)bVar14 * 4),
             uVar68 = uVar71, iVar30 = iVar44, uVar50 <= uVar9)) break;
        } while( true );
      }
      goto LAB_1006f2e5c;
    }
    if (iVar44 == 5) {
      uVar70 = 0;
      uVar40 = *(uint *)(param_1 + 0xcc);
      if (0xffe < uVar40) {
        uVar40 = 0xfff;
      }
      lVar49 = *(long *)(param_1 + 8);
      lVar67 = *(long *)(param_1 + 0x30);
      uVar53 = *(uint *)(param_1 + 0xc4);
      uVar68 = *puVar62 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f);
      uVar20 = *(uint *)(lVar67 + uVar68 * 4);
      lVar25 = *(long *)(param_1 + 0x40);
      uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar26 = ~uVar56;
      uVar28 = iVar64 - (int)lVar49;
      uVar50 = 0;
      if (uVar26 <= uVar28) {
        uVar50 = uVar28 - uVar26;
      }
      uVar12 = *(uint *)(param_1 + 0x18);
      uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar63 = uVar28 - uVar3;
      if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar3 || *(int *)(param_1 + 0x20) != 0) {
        uVar63 = *(uint *)(param_1 + 0x1c);
      }
      uVar3 = uVar63;
      if (uVar63 < 2) {
        uVar3 = 1;
      }
      plVar60 = *(long **)(param_1 + 0xb0);
      lVar51 = *plVar60;
      lVar7 = plVar60[1];
      iVar44 = (int)(lVar51 - lVar7);
      uVar63 = uVar63 - iVar44;
      lVar13 = plVar60[0x18];
      uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
      uVar9 = *(uint *)((long)plVar60 + 0x1c);
      uVar10 = iVar44 - uVar8;
      if (iVar44 - uVar9 <= uVar8) {
        uVar10 = uVar9;
      }
      bVar14 = uVar48 == 0;
      uVar22 = (ulong)bVar14;
      puVar37 = (uint *)(lVar25 + (ulong)((uVar28 & (uVar56 ^ 0xffffffff)) << 1) * 4);
      puVar61 = puVar37 + 1;
      iVar44 = uVar28 + 9;
      uVar71 = 3;
      if (bVar14) {
        uVar71 = 4;
      }
      puVar15 = (ulong *)((long)puVar62 + 4);
      uVar73 = uVar33;
      do {
        if (uVar22 == 3) {
          uVar56 = *param_3 - 1;
          uVar39 = *param_3 - 2;
          if (uVar39 < uVar28 - uVar12) goto LAB_1006f1780;
LAB_1006f16d4:
          if ((uVar39 < (uVar28 - uVar9) - uVar63 && (uVar28 - uVar56) - uVar12 < 0xfffffffd) &&
             (puVar72 = (uint *)((lVar7 - (ulong)uVar63) + (ulong)(uVar28 - uVar56)),
             (uint)*puVar62 == *puVar72)) {
            puVar21 = puVar15;
            FUN_1006c7460(puVar15,puVar72 + 1,puVar2,lVar51,lVar49 + (ulong)uVar12);
            uVar56 = (int)puVar21 + 4;
            uVar42 = (ulong)uVar56;
            if (uVar42 <= uVar73) goto LAB_1006f16ac;
            goto LAB_1006f18ec;
          }
        }
        else {
          uVar56 = param_3[uVar22];
          uVar39 = uVar56 - 1;
          if (uVar28 - uVar12 <= uVar39) goto LAB_1006f16d4;
LAB_1006f1780:
          if ((uint)*puVar62 == *(uint *)((long)puVar62 - (ulong)uVar56)) {
            lVar38 = -(ulong)uVar56;
            puVar21 = (ulong *)((long)puVar15 + lVar38);
            puVar17 = puVar15;
            if (puVar15 < puVar34) {
              if (*puVar21 == *puVar15) {
                iVar30 = 0;
                puVar21 = (ulong *)((long)puVar62 + 0xc + lVar38);
                puVar17 = (ulong *)((long)puVar62 + 0xc);
                do {
                  if (puVar34 <= puVar17) goto LAB_1006f1828;
                  uVar65 = *puVar21;
                  uVar42 = *puVar17;
                  iVar30 = iVar30 + 8;
                  puVar21 = puVar21 + 1;
                  puVar17 = puVar17 + 1;
                } while (uVar65 == uVar42);
                uVar42 = uVar42 ^ uVar65;
                uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
                iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
              }
              else {
                uVar42 = *puVar15 ^ *puVar21;
                uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
                iVar30 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
              }
            }
            else {
LAB_1006f1828:
              if (puVar17 < puVar47) {
                if ((uint)*puVar21 == (uint)*puVar17) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar17 = (ulong *)((long)puVar17 + 4);
                }
              }
              if (puVar17 < puVar35) {
                if (*(short *)puVar21 == *(short *)puVar17) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
              }
              if ((puVar17 < puVar2) && ((char)*puVar21 == (char)*puVar17)) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
              iVar30 = (int)puVar17 - (int)puVar15;
            }
            uVar56 = iVar30 + 4;
            uVar42 = (ulong)uVar56;
            if (uVar73 < uVar42) {
LAB_1006f18ec:
              piVar5[uVar70 * 2] = (int)uVar22 - (uint)bVar14;
              (piVar5 + uVar70 * 2)[1] = uVar56;
              uVar39 = (int)uVar70 + 1;
              uVar70 = (ulong)uVar39;
              if ((uVar40 < uVar56) ||
                 (uVar73 = uVar42, (ulong *)((long)puVar62 + uVar42) == puVar2)) goto LAB_1006f2e90;
            }
          }
        }
LAB_1006f16ac:
        uVar39 = (uint)uVar70;
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar71);
      *(uint *)(lVar67 + uVar68 * 4) = uVar28;
      uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
      if (uVar3 <= uVar20) {
        uVar22 = 0;
        uVar68 = 0;
        puVar72 = puVar61;
        iVar30 = iVar44;
        do {
          uVar71 = uVar22;
          if (uVar68 <= uVar22) {
            uVar71 = uVar68;
          }
          lVar67 = lVar49 + (ulong)uVar20;
          puVar15 = (ulong *)(lVar67 + uVar71);
          puVar21 = (ulong *)((long)puVar62 + uVar71);
          puVar17 = puVar21;
          if (puVar21 < puVar34) {
            if (*puVar15 == *puVar21) {
              lVar38 = 0;
              puVar15 = (ulong *)(lVar49 + 8 + uVar71 + uVar20);
              puVar17 = (ulong *)((long)puVar62 + uVar71 + 8);
              do {
                if (puVar34 <= puVar17) goto joined_r0x0001006f26dc;
                uVar42 = *puVar15;
                uVar65 = *puVar17;
                lVar38 = lVar38 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar42 == uVar65);
              uVar65 = uVar65 ^ uVar42;
              uVar42 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = lVar38 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
            }
            else {
              uVar42 = *puVar21 ^ *puVar15;
              uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = (ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3;
            }
            uVar42 = uVar42 + uVar71;
          }
          else {
joined_r0x0001006f26dc:
            if (puVar17 < puVar47) {
              if ((uint)*puVar15 == (uint)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < puVar35) {
              if ((short)*puVar15 == (short)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar2) && ((char)*puVar15 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            uVar42 = (long)puVar17 + (uVar71 - (long)puVar21);
          }
          iVar44 = iVar30;
          if (uVar73 < uVar42) {
            iVar44 = uVar20 + (int)uVar42;
            if (uVar42 <= iVar30 - uVar20) {
              iVar44 = iVar30;
            }
            piVar5[uVar70 * 2] = (uVar28 + 2) - uVar20;
            (piVar5 + uVar70 * 2)[1] = (int)uVar42;
            uVar39 = (int)uVar70 + 1;
            uVar70 = (ulong)uVar39;
            uVar73 = uVar42;
            if (0x1000 < uVar42 || (ulong *)((long)puVar62 + uVar42) == puVar2) goto LAB_1006f2d90;
          }
          uVar39 = (uint)uVar70;
          puVar61 = (uint *)(lVar25 + (ulong)((uVar20 & uVar26) << 1) * 4);
          if (*(byte *)(lVar67 + uVar42) < *(byte *)((long)puVar62 + uVar42)) {
            *puVar37 = uVar20;
            if (uVar20 <= uVar50) {
              puVar37 = &local_94;
              puVar61 = puVar72;
              break;
            }
            puVar61 = puVar61 + 1;
            uVar22 = uVar42;
            puVar37 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              puVar61 = puVar72;
              break;
            }
          }
          else {
            *puVar72 = uVar20;
            if (uVar20 <= uVar50) {
              puVar61 = &local_94;
              break;
            }
            uVar68 = uVar42;
            puVar72 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              break;
            }
          }
          uVar40 = uVar40 - 1;
          uVar20 = *puVar61;
          puVar61 = puVar72;
          iVar30 = iVar44;
        } while (uVar3 <= uVar20);
      }
      *puVar61 = 0;
      *puVar37 = 0;
      if ((uVar40 != 0) &&
         (uVar50 = *(uint *)(plVar60[6] +
                            (*puVar62 * -0x30e4432345000000 >> ((ulong)(uint)-(int)lVar13 & 0x3f)) *
                            4), uVar9 < uVar50)) {
        uVar70 = 0;
        lVar67 = plVar60[8];
        uVar68 = 0;
        iVar30 = iVar44;
        do {
          uVar40 = uVar40 - 1;
          uVar22 = uVar68;
          if (uVar70 <= uVar68) {
            uVar22 = uVar70;
          }
          uVar71 = (ulong)uVar50;
          lVar25 = (long)puVar62 + uVar22;
          FUN_1006c7460(lVar25,lVar7 + uVar71 + uVar22,puVar2,lVar51,lVar49 + (ulong)uVar12);
          uVar22 = lVar25 + uVar22;
          lVar25 = lVar7 + uVar71;
          if ((lVar51 - lVar7 & 0xffffffffU) <= uVar22 + uVar71) {
            lVar25 = lVar49 + (ulong)uVar63 + uVar71;
          }
          iVar44 = iVar30;
          if (uVar73 < uVar22) {
            iVar55 = uVar50 + uVar63;
            iVar44 = iVar55 + (int)uVar22;
            if (uVar22 <= (uint)(iVar30 - iVar55)) {
              iVar44 = iVar30;
            }
            piVar5[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar55;
            (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar22;
            uVar39 = uVar39 + 1;
            if ((0x1000 < uVar22) || (uVar73 = uVar22, (ulong *)((long)puVar62 + uVar22) == puVar2))
            break;
          }
          if (uVar50 <= uVar10) break;
          bVar14 = *(byte *)(lVar25 + uVar22) < *(byte *)((long)puVar62 + uVar22);
          uVar71 = uVar22;
          if (!bVar14) {
            uVar71 = uVar68;
            uVar70 = uVar22;
          }
          if ((uVar40 == 0) ||
             (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar8) << 1) * 4 + (ulong)bVar14 * 4),
             uVar68 = uVar71, iVar30 = iVar44, uVar50 <= uVar9)) break;
        } while( true );
      }
      goto LAB_1006f2e5c;
    }
    if (iVar44 != 3) {
      uVar70 = 0;
      uVar40 = *(uint *)(param_1 + 0xcc);
      if (0xffe < uVar40) {
        uVar40 = 0xfff;
      }
      lVar49 = *(long *)(param_1 + 8);
      lVar67 = *(long *)(param_1 + 0x30);
      uVar53 = *(uint *)(param_1 + 0xc4);
      uVar26 = (uint)*puVar62 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
      uVar20 = *(uint *)(lVar67 + (ulong)uVar26 * 4);
      lVar25 = *(long *)(param_1 + 0x40);
      uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
      uVar28 = ~uVar56;
      uVar63 = iVar64 - (int)lVar49;
      uVar50 = 0;
      if (uVar28 <= uVar63) {
        uVar50 = uVar63 - uVar28;
      }
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
      uVar12 = uVar63 - uVar10;
      if (uVar63 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
        uVar12 = *(uint *)(param_1 + 0x1c);
      }
      uVar10 = uVar12;
      if (uVar12 < 2) {
        uVar10 = 1;
      }
      plVar60 = *(long **)(param_1 + 0xb0);
      lVar51 = *plVar60;
      lVar7 = plVar60[1];
      iVar44 = (int)(lVar51 - lVar7);
      uVar12 = uVar12 - iVar44;
      lVar13 = plVar60[0x18];
      uVar11 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
      uVar8 = *(uint *)((long)plVar60 + 0x1c);
      uVar9 = iVar44 - uVar11;
      if (iVar44 - uVar8 <= uVar11) {
        uVar9 = uVar8;
      }
      bVar14 = uVar48 == 0;
      uVar68 = (ulong)bVar14;
      puVar37 = (uint *)(lVar25 + (ulong)((uVar63 & (uVar56 ^ 0xffffffff)) << 1) * 4);
      puVar61 = puVar37 + 1;
      iVar44 = uVar63 + 9;
      uVar22 = 3;
      if (bVar14) {
        uVar22 = 4;
      }
      puVar15 = (ulong *)((long)puVar62 + 4);
      uVar71 = uVar33;
      do {
        if (uVar68 == 3) {
          uVar56 = *param_3 - 1;
          uVar39 = *param_3 - 2;
          if (uVar39 < uVar63 - uVar3) goto LAB_1006f1b68;
LAB_1006f1abc:
          if ((uVar39 < (uVar63 - uVar8) - uVar12 && (uVar63 - uVar56) - uVar3 < 0xfffffffd) &&
             (puVar72 = (uint *)((lVar7 - (ulong)uVar12) + (ulong)(uVar63 - uVar56)),
             (uint)*puVar62 == *puVar72)) {
            puVar21 = puVar15;
            FUN_1006c7460(puVar15,puVar72 + 1,puVar2,lVar51,lVar49 + (ulong)uVar3);
            uVar56 = (int)puVar21 + 4;
            uVar73 = (ulong)uVar56;
            if (uVar73 <= uVar71) goto LAB_1006f1a94;
            goto LAB_1006f1cd4;
          }
        }
        else {
          uVar56 = param_3[uVar68];
          uVar39 = uVar56 - 1;
          if (uVar63 - uVar3 <= uVar39) goto LAB_1006f1abc;
LAB_1006f1b68:
          if ((uint)*puVar62 == *(uint *)((long)puVar62 - (ulong)uVar56)) {
            lVar38 = -(ulong)uVar56;
            puVar21 = (ulong *)((long)puVar15 + lVar38);
            puVar17 = puVar15;
            if (puVar15 < puVar34) {
              if (*puVar21 == *puVar15) {
                iVar30 = 0;
                puVar21 = (ulong *)((long)puVar62 + 0xc + lVar38);
                puVar17 = (ulong *)((long)puVar62 + 0xc);
                do {
                  if (puVar34 <= puVar17) goto LAB_1006f1c10;
                  uVar42 = *puVar21;
                  uVar73 = *puVar17;
                  iVar30 = iVar30 + 8;
                  puVar21 = puVar21 + 1;
                  puVar17 = puVar17 + 1;
                } while (uVar42 == uVar73);
                uVar73 = uVar73 ^ uVar42;
                uVar73 = (uVar73 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar73 & 0x5555555555555555) << 1;
                uVar73 = (uVar73 & 0xcccccccccccccccc) >> 2 | (uVar73 & 0x3333333333333333) << 2;
                uVar73 = (uVar73 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar73 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar73 = (uVar73 & 0xff00ff00ff00ff00) >> 8 | (uVar73 & 0xff00ff00ff00ff) << 8;
                uVar73 = (uVar73 & 0xffff0000ffff0000) >> 0x10 | (uVar73 & 0xffff0000ffff) << 0x10;
                iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar73 >> 0x20 | uVar73 << 0x20) >> 3);
              }
              else {
                uVar73 = *puVar15 ^ *puVar21;
                uVar73 = (uVar73 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar73 & 0x5555555555555555) << 1;
                uVar73 = (uVar73 & 0xcccccccccccccccc) >> 2 | (uVar73 & 0x3333333333333333) << 2;
                uVar73 = (uVar73 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar73 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar73 = (uVar73 & 0xff00ff00ff00ff00) >> 8 | (uVar73 & 0xff00ff00ff00ff) << 8;
                uVar73 = (uVar73 & 0xffff0000ffff0000) >> 0x10 | (uVar73 & 0xffff0000ffff) << 0x10;
                iVar30 = (int)((ulong)LZCOUNT(uVar73 >> 0x20 | uVar73 << 0x20) >> 3);
              }
            }
            else {
LAB_1006f1c10:
              if (puVar17 < puVar47) {
                if ((uint)*puVar21 == (uint)*puVar17) {
                  puVar21 = (ulong *)((long)puVar21 + 4);
                  puVar17 = (ulong *)((long)puVar17 + 4);
                }
              }
              if (puVar17 < puVar35) {
                if (*(short *)puVar21 == *(short *)puVar17) {
                  puVar17 = (ulong *)((long)puVar17 + 2);
                  puVar21 = (ulong *)((long)puVar21 + 2);
                }
              }
              if ((puVar17 < puVar2) && ((char)*puVar21 == (char)*puVar17)) {
                puVar17 = (ulong *)((long)puVar17 + 1);
              }
              iVar30 = (int)puVar17 - (int)puVar15;
            }
            uVar56 = iVar30 + 4;
            uVar73 = (ulong)uVar56;
            if (uVar71 < uVar73) {
LAB_1006f1cd4:
              piVar5[uVar70 * 2] = (int)uVar68 - (uint)bVar14;
              (piVar5 + uVar70 * 2)[1] = uVar56;
              uVar39 = (int)uVar70 + 1;
              uVar70 = (ulong)uVar39;
              if ((uVar40 < uVar56) ||
                 (uVar71 = uVar73, (ulong *)((long)puVar62 + uVar73) == puVar2)) goto LAB_1006f2e90;
            }
          }
        }
LAB_1006f1a94:
        uVar39 = (uint)uVar70;
        uVar68 = uVar68 + 1;
      } while (uVar68 < uVar22);
      *(uint *)(lVar67 + (ulong)uVar26 * 4) = uVar63;
      uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
      if (uVar10 <= uVar20) {
        uVar22 = 0;
        uVar68 = 0;
        puVar72 = puVar61;
        iVar30 = iVar44;
        do {
          uVar73 = uVar22;
          if (uVar68 <= uVar22) {
            uVar73 = uVar68;
          }
          lVar67 = lVar49 + (ulong)uVar20;
          puVar15 = (ulong *)(lVar67 + uVar73);
          puVar21 = (ulong *)((long)puVar62 + uVar73);
          puVar17 = puVar21;
          if (puVar21 < puVar34) {
            if (*puVar15 == *puVar21) {
              lVar38 = 0;
              puVar15 = (ulong *)(lVar49 + 8 + uVar73 + uVar20);
              puVar17 = (ulong *)((long)puVar62 + uVar73 + 8);
              do {
                if (puVar34 <= puVar17) goto joined_r0x0001006f2928;
                uVar42 = *puVar15;
                uVar65 = *puVar17;
                lVar38 = lVar38 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar42 == uVar65);
              uVar65 = uVar65 ^ uVar42;
              uVar42 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = lVar38 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
            }
            else {
              uVar42 = *puVar21 ^ *puVar15;
              uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = (ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3;
            }
            uVar42 = uVar42 + uVar73;
          }
          else {
joined_r0x0001006f2928:
            if (puVar17 < puVar47) {
              if ((uint)*puVar15 == (uint)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < puVar35) {
              if ((short)*puVar15 == (short)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar2) && ((char)*puVar15 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            uVar42 = (long)puVar17 + (uVar73 - (long)puVar21);
          }
          iVar44 = iVar30;
          if (uVar71 < uVar42) {
            iVar44 = uVar20 + (int)uVar42;
            if (uVar42 <= iVar30 - uVar20) {
              iVar44 = iVar30;
            }
            piVar5[uVar70 * 2] = (uVar63 + 2) - uVar20;
            (piVar5 + uVar70 * 2)[1] = (int)uVar42;
            uVar39 = (int)uVar70 + 1;
            uVar70 = (ulong)uVar39;
            uVar71 = uVar42;
            if (0x1000 < uVar42 || (ulong *)((long)puVar62 + uVar42) == puVar2) goto LAB_1006f2d90;
          }
          uVar39 = (uint)uVar70;
          puVar61 = (uint *)(lVar25 + (ulong)((uVar20 & uVar28) << 1) * 4);
          if (*(byte *)(lVar67 + uVar42) < *(byte *)((long)puVar62 + uVar42)) {
            *puVar37 = uVar20;
            if (uVar20 <= uVar50) {
              puVar37 = &local_94;
              puVar61 = puVar72;
              break;
            }
            puVar61 = puVar61 + 1;
            uVar22 = uVar42;
            puVar37 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              puVar61 = puVar72;
              break;
            }
          }
          else {
            *puVar72 = uVar20;
            if (uVar20 <= uVar50) {
              puVar61 = &local_94;
              break;
            }
            uVar68 = uVar42;
            puVar72 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              break;
            }
          }
          uVar40 = uVar40 - 1;
          uVar20 = *puVar61;
          puVar61 = puVar72;
          iVar30 = iVar44;
        } while (uVar10 <= uVar20);
      }
      *puVar61 = 0;
      *puVar37 = 0;
      if ((uVar40 != 0) &&
         (uVar50 = *(uint *)(plVar60[6] +
                            (ulong)((uint)*puVar62 * -0x61c8864f >> (ulong)(-(int)lVar13 & 0x1f)) *
                            4), uVar8 < uVar50)) {
        uVar70 = 0;
        lVar67 = plVar60[8];
        uVar68 = 0;
        iVar30 = iVar44;
        do {
          uVar40 = uVar40 - 1;
          uVar22 = uVar68;
          if (uVar70 <= uVar68) {
            uVar22 = uVar70;
          }
          uVar73 = (ulong)uVar50;
          lVar25 = (long)puVar62 + uVar22;
          FUN_1006c7460(lVar25,lVar7 + uVar73 + uVar22,puVar2,lVar51,lVar49 + (ulong)uVar3);
          uVar22 = lVar25 + uVar22;
          lVar25 = lVar7 + uVar73;
          if ((lVar51 - lVar7 & 0xffffffffU) <= uVar22 + uVar73) {
            lVar25 = lVar49 + (ulong)uVar12 + uVar73;
          }
          iVar44 = iVar30;
          if (uVar71 < uVar22) {
            iVar55 = uVar50 + uVar12;
            iVar44 = iVar55 + (int)uVar22;
            if (uVar22 <= (uint)(iVar30 - iVar55)) {
              iVar44 = iVar30;
            }
            piVar5[(ulong)uVar39 * 2] = (uVar63 + 2) - iVar55;
            (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar22;
            uVar39 = uVar39 + 1;
            if ((0x1000 < uVar22) || (uVar71 = uVar22, (ulong *)((long)puVar62 + uVar22) == puVar2))
            break;
          }
          if (uVar50 <= uVar9) break;
          bVar14 = *(byte *)(lVar25 + uVar22) < *(byte *)((long)puVar62 + uVar22);
          uVar73 = uVar22;
          if (!bVar14) {
            uVar73 = uVar68;
            uVar70 = uVar22;
          }
          if ((uVar40 == 0) ||
             (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar11) << 1) * 4 + (ulong)bVar14 * 4),
             uVar68 = uVar73, iVar30 = iVar44, uVar50 <= uVar8)) break;
        } while( true );
      }
      goto LAB_1006f2e5c;
    }
    uVar70 = 0;
    uVar40 = *(uint *)(param_1 + 0xcc);
    if (0xffe < uVar40) {
      uVar40 = 0xfff;
    }
    lVar25 = *(long *)(param_1 + 8);
    lVar49 = *(long *)(param_1 + 0x30);
    uVar53 = *(uint *)(param_1 + 0xc4);
    uVar26 = (uint)*puVar62 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
    uVar20 = *(uint *)(lVar49 + (ulong)uVar26 * 4);
    lVar67 = *(long *)(param_1 + 0x40);
    uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
    uVar28 = ~uVar56;
    uVar63 = (uint)((long)puVar62 - lVar25);
    uVar50 = 0;
    if (uVar28 <= uVar63) {
      uVar50 = uVar63 - uVar28;
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
    uVar12 = uVar63 - uVar10;
    if (uVar63 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
      uVar12 = *(uint *)(param_1 + 0x1c);
    }
    uVar10 = uVar12;
    if (uVar12 < 2) {
      uVar10 = 1;
    }
    plVar60 = *(long **)(param_1 + 0xb0);
    lVar51 = *plVar60;
    lVar7 = plVar60[1];
    iVar44 = (int)(lVar51 - lVar7);
    uVar12 = uVar12 - iVar44;
    lVar13 = plVar60[0x18];
    uVar11 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
    uVar8 = *(uint *)((long)plVar60 + 0x1c);
    uVar9 = iVar44 - uVar11;
    if (iVar44 - uVar8 <= uVar11) {
      uVar9 = uVar8;
    }
    bVar14 = uVar48 == 0;
    uVar68 = (ulong)bVar14;
    puVar37 = (uint *)(lVar67 + (ulong)((uVar63 & (uVar56 ^ 0xffffffff)) << 1) * 4);
    local_128 = puVar37 + 1;
    iVar44 = uVar63 + 9;
    uVar22 = 3;
    if (bVar14) {
      uVar22 = 4;
    }
    puVar15 = (ulong *)((long)puVar62 + 3);
    uVar71 = uVar33;
    do {
      if (uVar68 == 3) {
        uVar56 = *param_3 - 1;
        uVar39 = *param_3 - 2;
        if (uVar39 < uVar63 - uVar3) goto LAB_1006f0da0;
LAB_1006f0cf8:
        if ((uVar39 < (uVar63 - uVar8) - uVar12 && (uVar63 - uVar56) - uVar3 < 0xfffffffd) &&
           (puVar61 = (uint *)((lVar7 - (ulong)uVar12) + (ulong)(uVar63 - uVar56)),
           ((*puVar61 ^ (uint)*puVar62) & 0xffffff) == 0)) {
          puVar21 = puVar15;
          FUN_1006c7460(puVar15,(long)puVar61 + 3,puVar2,lVar51,lVar25 + (ulong)uVar3);
          uVar56 = (int)puVar21 + 3;
          uVar73 = (ulong)uVar56;
          if (uVar56 <= uVar71) goto LAB_1006f0cd0;
          goto LAB_1006f0dcc;
        }
      }
      else {
        uVar56 = param_3[uVar68];
        uVar39 = uVar56 - 1;
        if (uVar63 - uVar3 <= uVar39) goto LAB_1006f0cf8;
LAB_1006f0da0:
        if (((*(uint *)((long)puVar62 - (ulong)uVar56) ^ (uint)*puVar62) & 0xffffff) == 0) {
          lVar38 = -(ulong)uVar56;
          puVar21 = (ulong *)((long)puVar15 + lVar38);
          puVar17 = puVar15;
          if (puVar15 < puVar34) {
            if (*puVar21 == *puVar15) {
              iVar30 = 0;
              puVar21 = (ulong *)((long)puVar62 + 0xb + lVar38);
              puVar17 = (ulong *)((long)puVar62 + 0xb);
              do {
                if (puVar34 <= puVar17) goto LAB_1006f0e78;
                uVar42 = *puVar21;
                uVar73 = *puVar17;
                iVar30 = iVar30 + 8;
                puVar21 = puVar21 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar42 == uVar73);
              uVar73 = uVar73 ^ uVar42;
              uVar73 = (uVar73 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar73 & 0x5555555555555555) << 1;
              uVar73 = (uVar73 & 0xcccccccccccccccc) >> 2 | (uVar73 & 0x3333333333333333) << 2;
              uVar73 = (uVar73 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar73 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar73 = (uVar73 & 0xff00ff00ff00ff00) >> 8 | (uVar73 & 0xff00ff00ff00ff) << 8;
              uVar73 = (uVar73 & 0xffff0000ffff0000) >> 0x10 | (uVar73 & 0xffff0000ffff) << 0x10;
              iVar30 = iVar30 + (int)((ulong)LZCOUNT(uVar73 >> 0x20 | uVar73 << 0x20) >> 3);
            }
            else {
              uVar73 = *puVar15 ^ *puVar21;
              uVar73 = (uVar73 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar73 & 0x5555555555555555) << 1;
              uVar73 = (uVar73 & 0xcccccccccccccccc) >> 2 | (uVar73 & 0x3333333333333333) << 2;
              uVar73 = (uVar73 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar73 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar73 = (uVar73 & 0xff00ff00ff00ff00) >> 8 | (uVar73 & 0xff00ff00ff00ff) << 8;
              uVar73 = (uVar73 & 0xffff0000ffff0000) >> 0x10 | (uVar73 & 0xffff0000ffff) << 0x10;
              iVar30 = (int)((ulong)LZCOUNT(uVar73 >> 0x20 | uVar73 << 0x20) >> 3);
            }
          }
          else {
LAB_1006f0e78:
            if (puVar17 < puVar47) {
              if ((uint)*puVar21 == (uint)*puVar17) {
                puVar21 = (ulong *)((long)puVar21 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < puVar35) {
              if (*(short *)puVar21 == *(short *)puVar17) {
                puVar17 = (ulong *)((long)puVar17 + 2);
                puVar21 = (ulong *)((long)puVar21 + 2);
              }
            }
            if ((puVar17 < puVar2) && ((char)*puVar21 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            iVar30 = (int)puVar17 - (int)puVar15;
          }
          uVar56 = iVar30 + 3;
          uVar73 = (ulong)uVar56;
          if (uVar71 < uVar56) {
LAB_1006f0dcc:
            uVar71 = uVar73;
            piVar5[uVar70 * 2] = (int)uVar68 - (uint)bVar14;
            (piVar5 + uVar70 * 2)[1] = uVar56;
            uVar39 = (int)uVar70 + 1;
            uVar70 = (ulong)uVar39;
            if ((uVar40 < uVar56) || ((ulong *)((long)puVar62 + uVar71) == puVar2))
            goto LAB_1006f2e90;
          }
        }
      }
LAB_1006f0cd0:
      uVar68 = uVar68 + 1;
    } while (uVar68 < uVar22);
    if (uVar71 < 3) {
      lVar38 = *(long *)(param_1 + 0x38);
      uVar68 = *puVar62;
      uVar56 = 0x20 - *(int *)(param_1 + 0x28);
      if (local_23c < uVar63) {
        uVar22 = (ulong)local_23c;
        do {
          *(int *)(lVar38 + (ulong)((uint)(*(int *)(lVar25 + uVar22) * 0x35a7bd00) >>
                                   (ulong)(uVar56 & 0x1f)) * 4) = (int)uVar22;
          uVar22 = uVar22 + 1;
        } while (((long)puVar62 - lVar25 & 0xffffffffU) != uVar22);
      }
      uVar56 = *(uint *)(lVar38 + (ulong)((uint)uVar68 * 0x35a7bd00 >> (ulong)(uVar56 & 0x1f)) * 4);
      local_23c = uVar63;
      if (uVar56 < uVar10 || uVar63 - uVar56 >> 0x12 != 0) goto LAB_1006f23e8;
      puVar15 = (ulong *)(lVar25 + (ulong)uVar56);
      puVar21 = puVar62;
      if (puVar62 < puVar34) {
        if (*puVar15 == *puVar62) {
          lVar38 = 0;
          puVar15 = (ulong *)(lVar25 + (ulong)uVar56);
          do {
            puVar15 = puVar15 + 1;
            puVar21 = puVar21 + 1;
            if (puVar34 <= puVar21) goto joined_r0x0001006f2dc0;
            lVar38 = lVar38 + 8;
          } while (*puVar15 == *puVar21);
          uVar68 = *puVar21 ^ *puVar15;
          uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
          uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
          uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
          uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
          uVar68 = lVar38 + ((ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3);
        }
        else {
          uVar68 = *puVar62 ^ *puVar15;
          uVar68 = (uVar68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar68 & 0x5555555555555555) << 1;
          uVar68 = (uVar68 & 0xcccccccccccccccc) >> 2 | (uVar68 & 0x3333333333333333) << 2;
          uVar68 = (uVar68 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar68 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar68 = (uVar68 & 0xff00ff00ff00ff00) >> 8 | (uVar68 & 0xff00ff00ff00ff) << 8;
          uVar68 = (uVar68 & 0xffff0000ffff0000) >> 0x10 | (uVar68 & 0xffff0000ffff) << 0x10;
          uVar68 = (ulong)LZCOUNT(uVar68 >> 0x20 | uVar68 << 0x20) >> 3;
        }
      }
      else {
joined_r0x0001006f2dc0:
        if (puVar21 < puVar47) {
          if ((uint)*puVar15 == (uint)*puVar21) {
            puVar21 = (ulong *)((long)puVar21 + 4);
            puVar15 = (ulong *)((long)puVar15 + 4);
          }
        }
        if (puVar21 < puVar35) {
          if ((short)*puVar15 == (short)*puVar21) {
            puVar21 = (ulong *)((long)puVar21 + 2);
            puVar15 = (ulong *)((long)puVar15 + 2);
          }
        }
        if ((puVar21 < puVar2) && ((char)*puVar15 == (char)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 1);
        }
        uVar68 = (long)puVar21 - (long)puVar62;
      }
      if (uVar68 < 3) goto LAB_1006f23e8;
      *piVar5 = (uVar63 - uVar56) + 2;
      piVar5[1] = (int)uVar68;
      if (uVar68 <= uVar40 && (ulong *)((long)puVar62 + uVar68) != puVar2) {
        uVar70 = 1;
        uVar71 = uVar68;
        goto LAB_1006f23e8;
      }
      uVar39 = 1;
      *(uint *)(param_1 + 0x24) = uVar63 + 1;
    }
    else {
LAB_1006f23e8:
      uVar39 = (uint)uVar70;
      *(uint *)(lVar49 + (ulong)uVar26 * 4) = uVar63;
      uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
      if (uVar10 <= uVar20) {
        uVar22 = 0;
        uVar68 = 0;
        iVar30 = iVar44;
        do {
          uVar73 = uVar22;
          if (uVar68 <= uVar22) {
            uVar73 = uVar68;
          }
          lVar49 = lVar25 + (ulong)uVar20;
          puVar15 = (ulong *)(lVar49 + uVar73);
          puVar21 = (ulong *)((long)puVar62 + uVar73);
          puVar17 = puVar21;
          if (puVar21 < puVar34) {
            if (*puVar15 == *puVar21) {
              lVar38 = 0;
              puVar15 = (ulong *)(lVar25 + 8 + uVar73 + uVar20);
              puVar17 = (ulong *)((long)puVar62 + uVar73 + 8);
              do {
                if (puVar34 <= puVar17) goto joined_r0x0001006f2b80;
                uVar42 = *puVar15;
                uVar65 = *puVar17;
                lVar38 = lVar38 + 8;
                puVar15 = puVar15 + 1;
                puVar17 = puVar17 + 1;
              } while (uVar42 == uVar65);
              uVar65 = uVar65 ^ uVar42;
              uVar42 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = lVar38 + ((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
            }
            else {
              uVar42 = *puVar21 ^ *puVar15;
              uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
              uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
              uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
              uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
              uVar42 = (ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3;
            }
            uVar42 = uVar42 + uVar73;
          }
          else {
joined_r0x0001006f2b80:
            if (puVar17 < puVar47) {
              if ((uint)*puVar15 == (uint)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar17 = (ulong *)((long)puVar17 + 4);
              }
            }
            if (puVar17 < puVar35) {
              if ((short)*puVar15 == (short)*puVar17) {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar17 = (ulong *)((long)puVar17 + 2);
              }
            }
            if ((puVar17 < puVar2) && ((char)*puVar15 == (char)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 1);
            }
            uVar42 = (long)puVar17 + (uVar73 - (long)puVar21);
          }
          iVar44 = iVar30;
          if (uVar71 < uVar42) {
            iVar44 = uVar20 + (int)uVar42;
            if (uVar42 <= iVar30 - uVar20) {
              iVar44 = iVar30;
            }
            piVar5[uVar70 * 2] = (uVar63 + 2) - uVar20;
            (piVar5 + uVar70 * 2)[1] = (int)uVar42;
            uVar39 = (int)uVar70 + 1;
            uVar70 = (ulong)uVar39;
            uVar71 = uVar42;
            if (0x1000 < uVar42 || (ulong *)((long)puVar62 + uVar42) == puVar2) {
              *local_128 = 0;
              *puVar37 = 0;
              goto LAB_1006f63dc;
            }
          }
          uVar39 = (uint)uVar70;
          puVar61 = (uint *)(lVar67 + (ulong)((uVar20 & uVar28) << 1) * 4);
          if (*(byte *)(lVar49 + uVar42) < *(byte *)((long)puVar62 + uVar42)) {
            *puVar37 = uVar20;
            if (uVar20 <= uVar50) {
              puVar37 = &local_94;
              break;
            }
            puVar61 = puVar61 + 1;
            uVar22 = uVar42;
            puVar37 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              break;
            }
          }
          else {
            *local_128 = uVar20;
            if (uVar20 <= uVar50) {
              local_128 = &local_94;
              break;
            }
            uVar68 = uVar42;
            local_128 = puVar61;
            if (uVar40 == 0) {
              uVar40 = 0xffffffff;
              break;
            }
          }
          uVar40 = uVar40 - 1;
          uVar20 = *puVar61;
          iVar30 = iVar44;
        } while (uVar10 <= uVar20);
      }
      *local_128 = 0;
      *puVar37 = 0;
      if ((uVar40 != 0) &&
         (uVar50 = *(uint *)(plVar60[6] +
                            (ulong)((uint)*puVar62 * -0x61c8864f >> (ulong)(-(int)lVar13 & 0x1f)) *
                            4), uVar8 < uVar50)) {
        uVar70 = 0;
        lVar67 = plVar60[8];
        uVar68 = 0;
        iVar30 = iVar44;
        do {
          uVar40 = uVar40 - 1;
          uVar22 = uVar68;
          if (uVar70 <= uVar68) {
            uVar22 = uVar70;
          }
          uVar73 = (ulong)uVar50;
          lVar49 = (long)puVar62 + uVar22;
          FUN_1006c7460(lVar49,lVar7 + uVar73 + uVar22,puVar2,lVar51,lVar25 + (ulong)uVar3);
          uVar22 = lVar49 + uVar22;
          lVar49 = lVar7 + uVar73;
          if ((lVar51 - lVar7 & 0xffffffffU) <= uVar22 + uVar73) {
            lVar49 = lVar25 + (ulong)uVar12 + uVar73;
          }
          iVar44 = iVar30;
          if (uVar71 < uVar22) {
            iVar55 = uVar50 + uVar12;
            iVar44 = iVar55 + (int)uVar22;
            if (uVar22 <= (uint)(iVar30 - iVar55)) {
              iVar44 = iVar30;
            }
            piVar5[(ulong)uVar39 * 2] = (uVar63 + 2) - iVar55;
            (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar22;
            uVar39 = uVar39 + 1;
            if ((0x1000 < uVar22) || (uVar71 = uVar22, (ulong *)((long)puVar62 + uVar22) == puVar2))
            break;
          }
          if (uVar50 <= uVar9) break;
          bVar14 = *(byte *)(lVar49 + uVar22) < *(byte *)((long)puVar62 + uVar22);
          uVar73 = uVar22;
          if (!bVar14) {
            uVar73 = uVar68;
            uVar70 = uVar22;
          }
          if ((uVar40 == 0) ||
             (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar11) << 1) * 4 + (ulong)bVar14 * 4),
             uVar68 = uVar73, iVar30 = iVar44, uVar50 <= uVar8)) break;
        } while( true );
      }
LAB_1006f63dc:
      *(int *)(param_1 + 0x24) = iVar44 + -8;
    }
    goto LAB_1006f2e90;
  }
  goto LAB_1006f0abc;
LAB_1006f2d90:
  *puVar72 = 0;
  *puVar37 = 0;
LAB_1006f2e5c:
  *(int *)(param_1 + 0x24) = iVar44 + -8;
LAB_1006f2e90:
  uVar68 = uVar54 & 0xffffffff;
  if (uVar39 == 0) {
LAB_1006f0abc:
    puVar62 = (ulong *)((long)puVar62 + 1);
    uVar54 = uVar68;
    goto joined_r0x0001006f5f64;
  }
  piVar6[4] = *param_3;
  piVar6[5] = param_3[1];
  piVar6[6] = param_3[2];
  piVar6[2] = 0;
  piVar6[3] = uVar48;
  lVar67 = lVar32;
  piVar57 = piVar1;
  if (uVar48 == 0) {
    iVar44 = 0;
    iVar30 = *(int *)(param_1 + 0x98);
    if (iVar30 != 0) goto LAB_1006f2fb4;
LAB_1006f300c:
    uVar40 = (uint)(byte)(&DAT_10084fdf4)[uVar41 & 0xffffffff];
LAB_1006f3018:
    iVar44 = ((int)LZCOUNT((*(int **)(param_1 + 0x50))[uVar40] + 1) << 8 ^ 0xffffe0ffU) +
             (((uint)LZCOUNT(**(int **)(param_1 + 0x50) + 1) ^ 0x1f) +
             *(int *)(&DAT_10084fd64 + (ulong)uVar40 * 4)) * 0x100 + iVar44 + 1;
    *piVar6 = iVar44;
    puVar37 = (uint *)(piVar5 + (ulong)(uVar39 - 1) * 2);
    uVar40 = puVar37[1];
    if (uVar4 < uVar40) goto LAB_1006f3078;
LAB_1006f3084:
    iVar30 = *(int *)(param_1 + 0x8c) +
             ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
LAB_1006f30b4:
    do {
      *piVar57 = 0x40000000;
      lVar67 = lVar67 + -1;
      piVar57 = piVar57 + 7;
    } while (lVar67 != 0);
    uVar70 = 0;
    uVar68 = (ulong)uVar29;
    do {
      uVar40 = piVar5[uVar70 * 2];
      uVar50 = (piVar5 + uVar70 * 2)[1];
      if (uVar40 < 3) {
        uVar53 = uVar40 + (uVar48 == 0);
        if (uVar53 == 0) {
          iVar55 = *param_3;
          iVar58 = param_3[1];
          piVar57 = param_3 + 2;
        }
        else {
          if (uVar53 == 3) {
            iVar58 = *param_3;
            iVar55 = iVar58 + -1;
          }
          else {
            iVar55 = param_3[uVar53];
            iVar58 = *param_3;
          }
          lVar67 = 8;
          if (uVar53 != 1) {
            lVar67 = 4;
          }
          piVar57 = (int *)((long)param_3 + lVar67);
        }
      }
      else {
        iVar58 = *param_3;
        iVar55 = uVar40 - 2;
        piVar57 = param_3 + 1;
      }
      if ((uint)uVar68 <= uVar50) {
        iVar31 = *piVar57;
        uVar53 = (uint)LZCOUNT(uVar40 + 1) ^ 0x1f;
        iVar46 = uVar53 * 0x200 + -0x25cd;
        if (uVar53 < 0x14) {
          iVar46 = 0x33;
        }
        do {
          iVar45 = (int)uVar68;
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar19 = uVar53 * 0x100 + 0x1000 + ((int)LZCOUNT(iVar45 + -2) << 8 ^ 0x1f00U);
          }
          else {
            uVar20 = iVar45 - 3;
            if (uVar20 < 0x80) {
              uVar20 = (uint)(byte)(&DAT_10084ff08)[uVar20];
            }
            else {
              uVar20 = 0x43 - (int)LZCOUNT(uVar20);
            }
            iVar19 = ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar20 * 4) + 1) << 8
                     ^ 0xffffe0ffU) +
                     iVar46 + *(int *)(param_1 + 0x94) +
                     ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar53 * 4) + 1) << 8
                     ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                     (*(int *)(&DAT_10084fe34 + (ulong)uVar20 * 4) + uVar53) * 0x100 + 2;
          }
          piVar57 = piVar6 + uVar68 * 7;
          piVar57[2] = iVar45;
          piVar57[3] = uVar48;
          *piVar57 = iVar30 + iVar44 + iVar19;
          piVar57[1] = uVar40;
          *(ulong *)(piVar57 + 4) = CONCAT44(iVar58,iVar55);
          piVar57[6] = iVar31;
          uVar68 = (ulong)(iVar45 + 1U);
        } while (iVar45 + 1U <= uVar50);
      }
      uVar70 = uVar70 + 1;
    } while (uVar70 != uVar39);
    uVar40 = (int)uVar68 - 1;
    uVar70 = (ulong)uVar40;
    uVar68 = uVar70;
    if (uVar40 != 0) {
      uVar41 = 1;
LAB_1006f3284:
      uVar68 = uVar41;
      iVar64 = iVar64 + 1;
      iVar44 = (int)uVar68;
      piVar57 = piVar6 + (ulong)(iVar44 - 1) * 7;
      if (piVar57[2] == 0) {
        uVar40 = piVar57[3] + 1;
      }
      else {
        uVar40 = 1;
      }
      puVar15 = (ulong *)((long)puVar62 + uVar68);
      iVar30 = *piVar57;
      if (*(int *)(param_1 + 0xa8) == 2) {
        iVar30 = iVar30 + 0x800;
        if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006f3308;
        if (uVar40 < 0x40) goto LAB_1006f3374;
LAB_1006f32d4:
        uVar48 = 0x32 - (int)LZCOUNT(uVar40);
        if (0x3f < uVar40 - 1) goto LAB_1006f338c;
LAB_1006f32ec:
        uVar50 = (uint)(byte)(&DAT_10084fdf4)[uVar40 - 1];
LAB_1006f3398:
        iVar30 = iVar30 + *(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar48 * 4) * 0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar48 * 4) + 1)
                           << 8 ^ 0xffffe0ffU) + 1 +
                          ~*(uint *)(param_1 + 0x8c) +
                          *(int *)(&DAT_10084fd64 + (ulong)uVar50 * 4) * -0x100 +
                          ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar50 * 4) + 1)
                           << 8 ^ 0x1f01U);
        piVar18 = piVar6 + uVar68 * 7;
        if (iVar30 <= *piVar18) goto LAB_1006f340c;
      }
      else {
        if (*(int *)(param_1 + 0x98) != 1) {
          iVar30 = (*(int *)(param_1 + 0x88) -
                   ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x48) +
                                         (ulong)*(byte *)((long)puVar15 - 1) * 4) + 1) << 8 ^
                   0x1f00U)) + iVar30;
          if (0x3f < uVar40) goto LAB_1006f32d4;
LAB_1006f3374:
          uVar48 = (uint)(byte)(&DAT_10084fdf4)[uVar40];
          if (uVar40 - 1 < 0x40) goto LAB_1006f32ec;
LAB_1006f338c:
          uVar50 = 0x32 - (int)LZCOUNT(uVar40 - 1);
          goto LAB_1006f3398;
        }
        iVar30 = iVar30 + 0x600;
LAB_1006f3308:
        iVar30 = iVar30 + ((int)LZCOUNT(uVar40 + 1) << 8 ^ 0x1f00U) +
                          ((int)LZCOUNT(uVar40) << 8 ^ 0xffffe0ffU) + 1;
        piVar18 = piVar6 + uVar68 * 7;
        if (iVar30 <= *piVar18) {
LAB_1006f340c:
          piVar18[2] = 0;
          piVar18[3] = uVar40;
          *piVar18 = iVar30;
          piVar18[1] = 0;
          *(undefined8 *)(piVar18 + 4) = *(undefined8 *)(piVar57 + 4);
          piVar18[6] = piVar57[6];
        }
      }
      if (puVar69 < puVar15) {
        uVar41 = (ulong)(iVar44 + 1);
        goto LAB_1006f3274;
      }
      if (iVar44 != (int)uVar70) {
        uVar41 = (ulong)(iVar44 + 1U);
        iVar30 = *piVar18;
        if (piVar6[uVar41 * 7] <= iVar30 + 0x80) goto LAB_1006f3274;
        iVar55 = piVar18[2];
        if (iVar55 == 0) {
          uVar48 = piVar18[3];
          if (*(int *)(param_1 + 0x98) == 1) goto LAB_1006f3480;
LAB_1006f34b4:
          iVar58 = *(int *)(param_1 + 0x8c) +
                   ((int)LZCOUNT(**(int **)(param_1 + 0x50) + 1) << 8 ^ 0xffffe0ffU) + 1;
          lVar67 = *(long *)(param_1 + 8);
          uVar22 = (ulong)*(uint *)(param_1 + 0x24);
          puVar21 = (ulong *)(lVar67 + uVar22);
        }
        else {
          uVar48 = 0;
          if (*(int *)(param_1 + 0x98) != 1) goto LAB_1006f34b4;
LAB_1006f3480:
          iVar58 = 0;
          lVar67 = *(long *)(param_1 + 8);
          uVar22 = (ulong)*(uint *)(param_1 + 0x24);
          puVar21 = (ulong *)(lVar67 + uVar22);
        }
        if (puVar15 < puVar21) goto LAB_1006f3274;
        iVar46 = *(int *)(param_1 + 200);
        iVar31 = (int)puVar15;
        uVar50 = iVar31 - (int)lVar67;
        uVar40 = (uint)uVar22;
        while (uVar40 < uVar50) {
          lVar25 = param_1;
          FUN_100705148(param_1,lVar67 + uVar22,puVar2,iVar46,0);
          uVar40 = (int)lVar25 + (int)uVar22;
          uVar22 = (ulong)uVar40;
        }
        piVar57 = piVar18 + 4;
        *(uint *)(param_1 + 0x24) = uVar50;
        if (iVar46 - 6U < 2) {
          uVar41 = 0;
          uVar40 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar40) {
            uVar40 = 0xfff;
          }
          lVar67 = *(long *)(param_1 + 8);
          lVar25 = *(long *)(param_1 + 0x30);
          puVar21 = (ulong *)((long)puVar15 + 4);
          uVar53 = *(uint *)(param_1 + 0xc4);
          uVar22 = *puVar15 * -0x30e4432340650000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar20 = *(uint *)(lVar25 + uVar22 * 4);
          lVar49 = *(long *)(param_1 + 0x40);
          uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar26 = ~uVar56;
          uVar28 = iVar31 - (int)lVar67;
          uVar50 = 0;
          if (uVar26 <= uVar28) {
            uVar50 = uVar28 - uVar26;
          }
          uVar12 = *(uint *)(param_1 + 0x18);
          uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar63 = uVar28 - uVar3;
          if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar3 || *(int *)(param_1 + 0x20) != 0) {
            uVar63 = *(uint *)(param_1 + 0x1c);
          }
          uVar3 = uVar63;
          if (uVar63 < 2) {
            uVar3 = 1;
          }
          plVar60 = *(long **)(param_1 + 0xb0);
          lVar51 = *plVar60;
          lVar7 = plVar60[1];
          iVar46 = (int)(lVar51 - lVar7);
          uVar63 = uVar63 - iVar46;
          lVar13 = plVar60[0x18];
          uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
          uVar9 = *(uint *)((long)plVar60 + 0x1c);
          uVar10 = iVar46 - uVar8;
          if (iVar46 - uVar9 <= uVar8) {
            uVar10 = uVar9;
          }
          bVar14 = iVar55 != 0;
          uVar71 = (ulong)bVar14;
          puVar37 = (uint *)(lVar49 + (ulong)((uVar28 & (uVar56 ^ 0xffffffff)) << 1) * 4);
          local_170 = puVar37 + 1;
          iVar46 = uVar28 + 9;
          uVar73 = 3;
          if (bVar14) {
            uVar73 = 4;
          }
          puVar17 = (ulong *)((long)puVar62 + uVar68 + 0xc);
          uVar42 = uVar33;
          do {
            if (uVar71 == 3) {
              uVar56 = *piVar57 - 1;
              uVar39 = *piVar57 - 2;
              if (uVar39 < uVar28 - uVar12) goto LAB_1006f3bec;
LAB_1006f3b2c:
              if ((uVar39 < (uVar28 - uVar9) - uVar63 && (uVar28 - uVar56) - uVar12 < 0xfffffffd) &&
                 (puVar61 = (uint *)((lVar7 - (ulong)uVar63) + (ulong)(uVar28 - uVar56)),
                 (uint)*puVar15 == *puVar61)) {
                puVar16 = puVar21;
                FUN_1006c7460(puVar21,puVar61 + 1,puVar2,lVar51,lVar67 + (ulong)uVar12);
                uVar56 = (int)puVar16 + 4;
                uVar65 = (ulong)uVar56;
                if (uVar56 <= uVar42) goto LAB_1006f3b04;
                goto LAB_1006f3d58;
              }
            }
            else {
              uVar56 = piVar57[uVar71];
              uVar39 = uVar56 - 1;
              if (uVar28 - uVar12 <= uVar39) goto LAB_1006f3b2c;
LAB_1006f3bec:
              if ((uint)*puVar15 == *(uint *)((long)puVar15 - (ulong)uVar56)) {
                lVar38 = -(ulong)uVar56;
                puVar16 = (ulong *)((long)puVar21 + lVar38);
                puVar43 = puVar21;
                if (puVar21 < puVar34) {
                  if (*puVar16 == *puVar21) {
                    iVar31 = 0;
                    puVar16 = (ulong *)((long)puVar17 + lVar38);
                    puVar43 = puVar17;
                    do {
                      if (puVar34 <= puVar43) goto LAB_1006f3c94;
                      uVar23 = *puVar16;
                      uVar65 = *puVar43;
                      iVar31 = iVar31 + 8;
                      puVar16 = puVar16 + 1;
                      puVar43 = puVar43 + 1;
                    } while (uVar23 == uVar65);
                    uVar65 = uVar65 ^ uVar23;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    iVar31 = iVar31 + (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
                  }
                  else {
                    uVar65 = *puVar21 ^ *puVar16;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    iVar31 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
                  }
                }
                else {
LAB_1006f3c94:
                  if (puVar43 < puVar47) {
                    if ((uint)*puVar16 == (uint)*puVar43) {
                      puVar16 = (ulong *)((long)puVar16 + 4);
                      puVar43 = (ulong *)((long)puVar43 + 4);
                    }
                  }
                  if (puVar43 < puVar35) {
                    if (*(short *)puVar16 == *(short *)puVar43) {
                      puVar43 = (ulong *)((long)puVar43 + 2);
                      puVar16 = (ulong *)((long)puVar16 + 2);
                    }
                  }
                  if ((puVar43 < puVar2) && ((char)*puVar16 == (char)*puVar43)) {
                    puVar43 = (ulong *)((long)puVar43 + 1);
                  }
                  iVar31 = (int)puVar43 - (int)puVar21;
                }
                uVar56 = iVar31 + 4;
                uVar65 = (ulong)uVar56;
                if (uVar42 < uVar56) {
LAB_1006f3d58:
                  uVar42 = uVar65;
                  piVar5[uVar41 * 2] = (int)uVar71 - (uint)bVar14;
                  (piVar5 + uVar41 * 2)[1] = uVar56;
                  uVar39 = (int)uVar41 + 1;
                  uVar41 = (ulong)uVar39;
                  if ((uVar40 < uVar56) || ((ulong *)((long)puVar15 + uVar42) == puVar2))
                  goto joined_r0x0001006f5b7c;
                }
              }
            }
LAB_1006f3b04:
            uVar39 = (uint)uVar41;
            uVar71 = uVar71 + 1;
          } while (uVar71 < uVar73);
          *(uint *)(lVar25 + uVar22 * 4) = uVar28;
          uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
          if (uVar3 <= uVar20) {
            uVar71 = 0;
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar73 = uVar71;
              if (uVar22 <= uVar71) {
                uVar73 = uVar22;
              }
              uVar65 = (ulong)uVar20;
              puVar17 = (ulong *)(lVar67 + uVar65 + uVar73);
              puVar21 = (ulong *)((long)puVar15 + uVar73);
              puVar16 = puVar21;
              if (puVar21 < puVar34) {
                if (*puVar17 == *puVar21) {
                  lVar25 = 0;
                  do {
                    puVar17 = (ulong *)((long)puVar62 + lVar25 + uVar73 + uVar68 + 8);
                    if (puVar34 <= puVar17) {
                      puVar17 = (ulong *)(lVar67 + 8 + uVar73 + uVar65 + lVar25);
                      puVar16 = (ulong *)((long)puVar62 + lVar25 + uVar73 + uVar68 + 8);
                      goto joined_r0x0001006f4b78;
                    }
                    uVar23 = *(ulong *)(lVar67 + 8 + uVar73 + uVar65 + lVar25);
                    uVar24 = *puVar17;
                    lVar25 = lVar25 + 8;
                  } while (uVar23 == uVar24);
                  uVar24 = uVar24 ^ uVar23;
                  uVar23 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar25 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar21 ^ *puVar17;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
                uVar23 = uVar23 + uVar73;
              }
              else {
joined_r0x0001006f4b78:
                if (puVar16 < puVar47) {
                  if ((uint)*puVar17 == (uint)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar16 = (ulong *)((long)puVar16 + 4);
                  }
                }
                if (puVar16 < puVar35) {
                  if ((short)*puVar17 == (short)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar16 = (ulong *)((long)puVar16 + 2);
                  }
                }
                if ((puVar16 < puVar2) && ((char)*puVar17 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar23 = (long)puVar16 + (uVar73 - (long)puVar21);
              }
              iVar46 = iVar31;
              if (uVar42 < uVar23) {
                iVar46 = uVar20 + (int)uVar23;
                if (uVar23 <= iVar31 - uVar20) {
                  iVar46 = iVar31;
                }
                piVar5[uVar41 * 2] = (uVar28 + 2) - uVar20;
                (piVar5 + uVar41 * 2)[1] = (int)uVar23;
                uVar39 = (int)uVar41 + 1;
                uVar41 = (ulong)uVar39;
                uVar42 = uVar23;
                if (0x1000 < uVar23 || (ulong *)((long)puVar15 + uVar23) == puVar2)
                goto LAB_1006f58c4;
              }
              uVar39 = (uint)uVar41;
              puVar61 = (uint *)(lVar49 + (ulong)((uVar20 & uVar26) << 1) * 4);
              if (*(byte *)(lVar67 + uVar65 + uVar23) < *(byte *)((long)puVar15 + uVar23)) {
                *puVar37 = uVar20;
                if (uVar20 <= uVar50) {
                  puVar37 = &local_94;
                  break;
                }
                puVar61 = puVar61 + 1;
                uVar71 = uVar23;
                puVar37 = puVar61;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              else {
                *local_170 = uVar20;
                if (uVar20 <= uVar50) {
                  local_170 = &local_94;
                  break;
                }
                uVar22 = uVar23;
                local_170 = puVar61;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              uVar40 = uVar40 - 1;
              uVar20 = *puVar61;
              iVar31 = iVar46;
            } while (uVar3 <= uVar20);
          }
          *local_170 = 0;
          *puVar37 = 0;
          if ((uVar40 != 0) &&
             (uVar50 = *(uint *)(plVar60[6] +
                                (*puVar15 * -0x30e4432340650000 >>
                                ((ulong)(uint)-(int)lVar13 & 0x3f)) * 4), uVar9 < uVar50)) {
            uVar41 = 0;
            lVar25 = plVar60[8];
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar40 = uVar40 - 1;
              uVar71 = uVar22;
              if (uVar41 <= uVar22) {
                uVar71 = uVar41;
              }
              uVar73 = (ulong)uVar50;
              lVar49 = (long)puVar15 + uVar71;
              FUN_1006c7460(lVar49,lVar7 + uVar73 + uVar71,puVar2,lVar51,lVar67 + (ulong)uVar12);
              uVar71 = lVar49 + uVar71;
              lVar49 = lVar7 + uVar73;
              if ((lVar51 - lVar7 & 0xffffffffU) <= uVar71 + uVar73) {
                lVar49 = lVar67 + (ulong)uVar63 + uVar73;
              }
              iVar46 = iVar31;
              if (uVar42 < uVar71) {
                iVar45 = uVar50 + uVar63;
                iVar46 = iVar45 + (int)uVar71;
                if (uVar71 <= (uint)(iVar31 - iVar45)) {
                  iVar46 = iVar31;
                }
                piVar5[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar45;
                (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar71;
                uVar39 = uVar39 + 1;
                if ((0x1000 < uVar71) ||
                   (uVar42 = uVar71, (ulong *)((long)puVar15 + uVar71) == puVar2)) break;
              }
              if (uVar50 <= uVar10) break;
              bVar14 = *(byte *)(lVar49 + uVar71) < *(byte *)((long)puVar15 + uVar71);
              uVar73 = uVar71;
              if (!bVar14) {
                uVar73 = uVar22;
                uVar41 = uVar71;
              }
              if ((uVar40 == 0) ||
                 (uVar50 = *(uint *)(lVar25 + (ulong)((uVar50 & uVar8) << 1) * 4 + (ulong)bVar14 * 4
                                    ), uVar22 = uVar73, iVar31 = iVar46, uVar50 <= uVar9)) break;
            } while( true );
          }
          goto LAB_1006f5aa0;
        }
        if (iVar46 == 5) {
          uVar41 = 0;
          uVar40 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar40) {
            uVar40 = 0xfff;
          }
          lVar49 = *(long *)(param_1 + 8);
          lVar25 = *(long *)(param_1 + 0x30);
          puVar21 = (ulong *)((long)puVar15 + 4);
          uVar53 = *(uint *)(param_1 + 0xc4);
          uVar22 = *puVar15 * -0x30e4432345000000 >> ((ulong)(uint)-*(int *)(param_1 + 0xc0) & 0x3f)
          ;
          uVar20 = *(uint *)(lVar25 + uVar22 * 4);
          lVar67 = *(long *)(param_1 + 0x40);
          uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar26 = ~uVar56;
          uVar28 = iVar31 - (int)lVar49;
          uVar50 = 0;
          if (uVar26 <= uVar28) {
            uVar50 = uVar28 - uVar26;
          }
          uVar12 = *(uint *)(param_1 + 0x18);
          uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar63 = uVar28 - uVar3;
          if (uVar28 - *(uint *)(param_1 + 0x1c) <= uVar3 || *(int *)(param_1 + 0x20) != 0) {
            uVar63 = *(uint *)(param_1 + 0x1c);
          }
          uVar3 = uVar63;
          if (uVar63 < 2) {
            uVar3 = 1;
          }
          plVar60 = *(long **)(param_1 + 0xb0);
          lVar51 = *plVar60;
          lVar7 = plVar60[1];
          iVar46 = (int)(lVar51 - lVar7);
          uVar63 = uVar63 - iVar46;
          lVar13 = plVar60[0x18];
          uVar8 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
          uVar9 = *(uint *)((long)plVar60 + 0x1c);
          uVar10 = iVar46 - uVar8;
          if (iVar46 - uVar9 <= uVar8) {
            uVar10 = uVar9;
          }
          bVar14 = iVar55 != 0;
          uVar71 = (ulong)bVar14;
          local_150 = (uint *)(lVar67 + (ulong)((uVar28 & (uVar56 ^ 0xffffffff)) << 1) * 4);
          local_170 = local_150 + 1;
          iVar46 = uVar28 + 9;
          uVar73 = 3;
          if (bVar14) {
            uVar73 = 4;
          }
          puVar17 = (ulong *)((long)puVar62 + uVar68 + 0xc);
          uVar42 = uVar33;
          do {
            if (uVar71 == 3) {
              uVar56 = *piVar57 - 1;
              uVar39 = *piVar57 - 2;
              if (uVar39 < uVar28 - uVar12) goto LAB_1006f4220;
LAB_1006f4160:
              if ((uVar39 < (uVar28 - uVar9) - uVar63 && (uVar28 - uVar56) - uVar12 < 0xfffffffd) &&
                 (puVar37 = (uint *)((lVar7 - (ulong)uVar63) + (ulong)(uVar28 - uVar56)),
                 (uint)*puVar15 == *puVar37)) {
                puVar16 = puVar21;
                FUN_1006c7460(puVar21,puVar37 + 1,puVar2,lVar51,lVar49 + (ulong)uVar12);
                uVar56 = (int)puVar16 + 4;
                uVar65 = (ulong)uVar56;
                if (uVar56 <= uVar42) goto LAB_1006f4138;
                goto LAB_1006f4384;
              }
            }
            else {
              uVar56 = piVar57[uVar71];
              uVar39 = uVar56 - 1;
              if (uVar28 - uVar12 <= uVar39) goto LAB_1006f4160;
LAB_1006f4220:
              if ((uint)*puVar15 == *(uint *)((long)puVar15 - (ulong)uVar56)) {
                lVar38 = -(ulong)uVar56;
                puVar16 = (ulong *)((long)puVar21 + lVar38);
                puVar43 = puVar21;
                if (puVar21 < puVar34) {
                  if (*puVar16 == *puVar21) {
                    iVar31 = 0;
                    puVar16 = (ulong *)((long)puVar17 + lVar38);
                    puVar43 = puVar17;
                    do {
                      if (puVar34 <= puVar43) goto joined_r0x0001006f43c0;
                      uVar23 = *puVar16;
                      uVar65 = *puVar43;
                      iVar31 = iVar31 + 8;
                      puVar16 = puVar16 + 1;
                      puVar43 = puVar43 + 1;
                    } while (uVar23 == uVar65);
                    uVar65 = uVar65 ^ uVar23;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    iVar31 = iVar31 + (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
                  }
                  else {
                    uVar65 = *puVar21 ^ *puVar16;
                    uVar65 = (uVar65 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar65 & 0x5555555555555555) << 1
                    ;
                    uVar65 = (uVar65 & 0xcccccccccccccccc) >> 2 | (uVar65 & 0x3333333333333333) << 2
                    ;
                    uVar65 = (uVar65 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar65 = (uVar65 & 0xff00ff00ff00ff00) >> 8 | (uVar65 & 0xff00ff00ff00ff) << 8;
                    uVar65 = (uVar65 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar65 & 0xffff0000ffff) << 0x10;
                    iVar31 = (int)((ulong)LZCOUNT(uVar65 >> 0x20 | uVar65 << 0x20) >> 3);
                  }
                }
                else {
joined_r0x0001006f43c0:
                  if (puVar43 < puVar47) {
                    if ((uint)*puVar16 == (uint)*puVar43) {
                      puVar16 = (ulong *)((long)puVar16 + 4);
                      puVar43 = (ulong *)((long)puVar43 + 4);
                    }
                  }
                  if (puVar43 < puVar35) {
                    if ((short)*puVar16 == (short)*puVar43) {
                      puVar16 = (ulong *)((long)puVar16 + 2);
                      puVar43 = (ulong *)((long)puVar43 + 2);
                    }
                  }
                  if ((puVar43 < puVar2) && ((char)*puVar16 == (char)*puVar43)) {
                    puVar43 = (ulong *)((long)puVar43 + 1);
                  }
                  iVar31 = (int)puVar43 - (int)puVar21;
                }
                uVar56 = iVar31 + 4;
                uVar65 = (ulong)uVar56;
                if (uVar42 < uVar56) {
LAB_1006f4384:
                  uVar42 = uVar65;
                  piVar5[uVar41 * 2] = (int)uVar71 - (uint)bVar14;
                  (piVar5 + uVar41 * 2)[1] = uVar56;
                  uVar39 = (int)uVar41 + 1;
                  uVar41 = (ulong)uVar39;
                  if ((uVar40 < uVar56) || ((ulong *)((long)puVar15 + uVar42) == puVar2))
                  goto joined_r0x0001006f5b7c;
                }
              }
            }
LAB_1006f4138:
            uVar39 = (uint)uVar41;
            uVar71 = uVar71 + 1;
          } while (uVar71 < uVar73);
          *(uint *)(lVar25 + uVar22 * 4) = uVar28;
          uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
          if (uVar3 <= uVar20) {
            uVar71 = 0;
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar73 = uVar71;
              if (uVar22 <= uVar71) {
                uVar73 = uVar22;
              }
              uVar65 = (ulong)uVar20;
              puVar17 = (ulong *)(lVar49 + uVar65 + uVar73);
              puVar21 = (ulong *)((long)puVar15 + uVar73);
              puVar16 = puVar21;
              if (puVar21 < puVar34) {
                if (*puVar17 == *puVar21) {
                  lVar25 = 0;
                  do {
                    puVar17 = (ulong *)((long)puVar62 + lVar25 + uVar73 + uVar68 + 8);
                    if (puVar34 <= puVar17) {
                      puVar17 = (ulong *)(lVar49 + 8 + uVar73 + uVar65 + lVar25);
                      puVar16 = (ulong *)((long)puVar62 + lVar25 + uVar73 + uVar68 + 8);
                      goto joined_r0x0001006f5218;
                    }
                    uVar23 = *(ulong *)(lVar49 + 8 + uVar73 + uVar65 + lVar25);
                    uVar24 = *puVar17;
                    lVar25 = lVar25 + 8;
                  } while (uVar23 == uVar24);
                  uVar24 = uVar24 ^ uVar23;
                  uVar23 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar25 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar21 ^ *puVar17;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
                uVar23 = uVar23 + uVar73;
              }
              else {
joined_r0x0001006f5218:
                if (puVar16 < puVar47) {
                  if ((uint)*puVar17 == (uint)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar16 = (ulong *)((long)puVar16 + 4);
                  }
                }
                if (puVar16 < puVar35) {
                  if ((short)*puVar17 == (short)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar16 = (ulong *)((long)puVar16 + 2);
                  }
                }
                if ((puVar16 < puVar2) && ((char)*puVar17 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar23 = (long)puVar16 + (uVar73 - (long)puVar21);
              }
              iVar46 = iVar31;
              if (uVar42 < uVar23) {
                iVar46 = uVar20 + (int)uVar23;
                if (uVar23 <= iVar31 - uVar20) {
                  iVar46 = iVar31;
                }
                piVar5[uVar41 * 2] = (uVar28 + 2) - uVar20;
                (piVar5 + uVar41 * 2)[1] = (int)uVar23;
                uVar39 = (int)uVar41 + 1;
                uVar41 = (ulong)uVar39;
                uVar42 = uVar23;
                if (0x1000 < uVar23 || (ulong *)((long)puVar15 + uVar23) == puVar2) {
                  *local_170 = 0;
                  *local_150 = 0;
                  goto LAB_1006f5b34;
                }
              }
              uVar39 = (uint)uVar41;
              puVar37 = (uint *)(lVar67 + (ulong)((uVar20 & uVar26) << 1) * 4);
              if (*(byte *)(lVar49 + uVar65 + uVar23) < *(byte *)((long)puVar15 + uVar23)) {
                *local_150 = uVar20;
                if (uVar20 <= uVar50) {
                  local_150 = &local_94;
                  break;
                }
                puVar37 = puVar37 + 1;
                uVar71 = uVar23;
                local_150 = puVar37;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              else {
                *local_170 = uVar20;
                if (uVar20 <= uVar50) {
                  local_170 = &local_94;
                  break;
                }
                uVar22 = uVar23;
                local_170 = puVar37;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              uVar40 = uVar40 - 1;
              uVar20 = *puVar37;
              iVar31 = iVar46;
            } while (uVar3 <= uVar20);
          }
          *local_170 = 0;
          *local_150 = 0;
          if ((uVar40 != 0) &&
             (uVar50 = *(uint *)(plVar60[6] +
                                (*puVar15 * -0x30e4432345000000 >>
                                ((ulong)(uint)-(int)lVar13 & 0x3f)) * 4), uVar9 < uVar50)) {
            uVar41 = 0;
            lVar67 = plVar60[8];
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar40 = uVar40 - 1;
              uVar71 = uVar22;
              if (uVar41 <= uVar22) {
                uVar71 = uVar41;
              }
              uVar73 = (ulong)uVar50;
              lVar25 = (long)puVar15 + uVar71;
              FUN_1006c7460(lVar25,lVar7 + uVar73 + uVar71,puVar2,lVar51,lVar49 + (ulong)uVar12);
              uVar71 = lVar25 + uVar71;
              lVar25 = lVar7 + uVar73;
              if ((lVar51 - lVar7 & 0xffffffffU) <= uVar71 + uVar73) {
                lVar25 = lVar49 + (ulong)uVar63 + uVar73;
              }
              iVar46 = iVar31;
              if (uVar42 < uVar71) {
                iVar45 = uVar50 + uVar63;
                iVar46 = iVar45 + (int)uVar71;
                if (uVar71 <= (uint)(iVar31 - iVar45)) {
                  iVar46 = iVar31;
                }
                piVar5[(ulong)uVar39 * 2] = (uVar28 + 2) - iVar45;
                (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar71;
                uVar39 = uVar39 + 1;
                if ((0x1000 < uVar71) ||
                   (uVar42 = uVar71, (ulong *)((long)puVar15 + uVar71) == puVar2)) break;
              }
              if (uVar50 <= uVar10) break;
              bVar14 = *(byte *)(lVar25 + uVar71) < *(byte *)((long)puVar15 + uVar71);
              uVar73 = uVar71;
              if (!bVar14) {
                uVar73 = uVar22;
                uVar41 = uVar71;
              }
              if ((uVar40 == 0) ||
                 (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar8) << 1) * 4 + (ulong)bVar14 * 4
                                    ), uVar22 = uVar73, iVar31 = iVar46, uVar50 <= uVar9)) break;
            } while( true );
          }
LAB_1006f5b34:
          *(int *)(param_1 + 0x24) = iVar46 + -8;
          goto joined_r0x0001006f5b7c;
        }
        if (iVar46 != 3) {
          uVar41 = 0;
          uVar40 = *(uint *)(param_1 + 0xcc);
          if (0xffe < uVar40) {
            uVar40 = 0xfff;
          }
          lVar67 = *(long *)(param_1 + 8);
          lVar25 = *(long *)(param_1 + 0x30);
          puVar21 = (ulong *)((long)puVar15 + 4);
          uVar53 = *(uint *)(param_1 + 0xc4);
          uVar26 = (uint)*puVar15 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
          uVar20 = *(uint *)(lVar25 + (ulong)uVar26 * 4);
          lVar49 = *(long *)(param_1 + 0x40);
          uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
          uVar28 = ~uVar56;
          uVar63 = iVar31 - (int)lVar67;
          uVar50 = 0;
          if (uVar28 <= uVar63) {
            uVar50 = uVar63 - uVar28;
          }
          uVar3 = *(uint *)(param_1 + 0x18);
          uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
          uVar12 = uVar63 - uVar10;
          if (uVar63 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
            uVar12 = *(uint *)(param_1 + 0x1c);
          }
          uVar10 = uVar12;
          if (uVar12 < 2) {
            uVar10 = 1;
          }
          plVar60 = *(long **)(param_1 + 0xb0);
          lVar51 = *plVar60;
          lVar7 = plVar60[1];
          iVar46 = (int)(lVar51 - lVar7);
          uVar12 = uVar12 - iVar46;
          lVar13 = plVar60[0x18];
          uVar11 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
          uVar8 = *(uint *)((long)plVar60 + 0x1c);
          uVar9 = iVar46 - uVar11;
          if (iVar46 - uVar8 <= uVar11) {
            uVar9 = uVar8;
          }
          bVar14 = iVar55 != 0;
          uVar22 = (ulong)bVar14;
          puVar37 = (uint *)(lVar49 + (ulong)((uVar63 & (uVar56 ^ 0xffffffff)) << 1) * 4);
          local_170 = puVar37 + 1;
          iVar46 = uVar63 + 9;
          uVar71 = 3;
          if (bVar14) {
            uVar71 = 4;
          }
          puVar17 = (ulong *)((long)puVar62 + uVar68 + 0xc);
          uVar73 = uVar33;
          do {
            if (uVar22 == 3) {
              uVar56 = *piVar57 - 1;
              uVar39 = *piVar57 - 2;
              if (uVar39 < uVar63 - uVar3) goto LAB_1006f4628;
LAB_1006f4578:
              if ((uVar39 < (uVar63 - uVar8) - uVar12 && (uVar63 - uVar56) - uVar3 < 0xfffffffd) &&
                 (puVar61 = (uint *)((lVar7 - (ulong)uVar12) + (ulong)(uVar63 - uVar56)),
                 (uint)*puVar15 == *puVar61)) {
                puVar16 = puVar21;
                FUN_1006c7460(puVar21,puVar61 + 1,puVar2,lVar51,lVar67 + (ulong)uVar3);
                uVar56 = (int)puVar16 + 4;
                uVar42 = (ulong)uVar56;
                if (uVar56 <= uVar73) goto LAB_1006f4550;
                goto LAB_1006f4794;
              }
            }
            else {
              uVar56 = piVar57[uVar22];
              uVar39 = uVar56 - 1;
              if (uVar63 - uVar3 <= uVar39) goto LAB_1006f4578;
LAB_1006f4628:
              if ((uint)*puVar15 == *(uint *)((long)puVar15 - (ulong)uVar56)) {
                lVar38 = -(ulong)uVar56;
                puVar16 = (ulong *)((long)puVar21 + lVar38);
                puVar43 = puVar21;
                if (puVar21 < puVar34) {
                  if (*puVar16 == *puVar21) {
                    iVar31 = 0;
                    puVar16 = (ulong *)((long)puVar17 + lVar38);
                    puVar43 = puVar17;
                    do {
                      if (puVar34 <= puVar43) goto LAB_1006f46d0;
                      uVar65 = *puVar16;
                      uVar42 = *puVar43;
                      iVar31 = iVar31 + 8;
                      puVar16 = puVar16 + 1;
                      puVar43 = puVar43 + 1;
                    } while (uVar65 == uVar42);
                    uVar42 = uVar42 ^ uVar65;
                    uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1
                    ;
                    uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2
                    ;
                    uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                    uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar42 & 0xffff0000ffff) << 0x10;
                    iVar31 = iVar31 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                  }
                  else {
                    uVar42 = *puVar21 ^ *puVar16;
                    uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1
                    ;
                    uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2
                    ;
                    uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                    uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar42 & 0xffff0000ffff) << 0x10;
                    iVar31 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                  }
                }
                else {
LAB_1006f46d0:
                  if (puVar43 < puVar47) {
                    if ((uint)*puVar16 == (uint)*puVar43) {
                      puVar16 = (ulong *)((long)puVar16 + 4);
                      puVar43 = (ulong *)((long)puVar43 + 4);
                    }
                  }
                  if (puVar43 < puVar35) {
                    if (*(short *)puVar16 == *(short *)puVar43) {
                      puVar43 = (ulong *)((long)puVar43 + 2);
                      puVar16 = (ulong *)((long)puVar16 + 2);
                    }
                  }
                  if ((puVar43 < puVar2) && ((char)*puVar16 == (char)*puVar43)) {
                    puVar43 = (ulong *)((long)puVar43 + 1);
                  }
                  iVar31 = (int)puVar43 - (int)puVar21;
                }
                uVar56 = iVar31 + 4;
                uVar42 = (ulong)uVar56;
                if (uVar73 < uVar56) {
LAB_1006f4794:
                  uVar73 = uVar42;
                  piVar5[uVar41 * 2] = (int)uVar22 - (uint)bVar14;
                  (piVar5 + uVar41 * 2)[1] = uVar56;
                  uVar39 = (int)uVar41 + 1;
                  uVar41 = (ulong)uVar39;
                  if ((uVar40 < uVar56) || ((ulong *)((long)puVar15 + uVar73) == puVar2))
                  goto joined_r0x0001006f5b7c;
                }
              }
            }
LAB_1006f4550:
            uVar39 = (uint)uVar41;
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar71);
          *(uint *)(lVar25 + (ulong)uVar26 * 4) = uVar63;
          uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
          if (uVar10 <= uVar20) {
            uVar71 = 0;
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar42 = uVar71;
              if (uVar22 <= uVar71) {
                uVar42 = uVar22;
              }
              uVar65 = (ulong)uVar20;
              puVar17 = (ulong *)(lVar67 + uVar65 + uVar42);
              puVar21 = (ulong *)((long)puVar15 + uVar42);
              puVar16 = puVar21;
              if (puVar21 < puVar34) {
                if (*puVar17 == *puVar21) {
                  lVar25 = 0;
                  do {
                    puVar17 = (ulong *)((long)puVar62 + lVar25 + uVar42 + uVar68 + 8);
                    if (puVar34 <= puVar17) {
                      puVar17 = (ulong *)(lVar67 + 8 + uVar42 + uVar65 + lVar25);
                      puVar16 = (ulong *)((long)puVar62 + lVar25 + uVar42 + uVar68 + 8);
                      goto joined_r0x0001006f54b4;
                    }
                    uVar23 = *(ulong *)(lVar67 + 8 + uVar42 + uVar65 + lVar25);
                    uVar24 = *puVar17;
                    lVar25 = lVar25 + 8;
                  } while (uVar23 == uVar24);
                  uVar24 = uVar24 ^ uVar23;
                  uVar23 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar25 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar21 ^ *puVar17;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
                uVar23 = uVar23 + uVar42;
              }
              else {
joined_r0x0001006f54b4:
                if (puVar16 < puVar47) {
                  if ((uint)*puVar17 == (uint)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar16 = (ulong *)((long)puVar16 + 4);
                  }
                }
                if (puVar16 < puVar35) {
                  if ((short)*puVar17 == (short)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar16 = (ulong *)((long)puVar16 + 2);
                  }
                }
                if ((puVar16 < puVar2) && ((char)*puVar17 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar23 = (long)puVar16 + (uVar42 - (long)puVar21);
              }
              iVar46 = iVar31;
              if (uVar73 < uVar23) {
                iVar46 = uVar20 + (int)uVar23;
                if (uVar23 <= iVar31 - uVar20) {
                  iVar46 = iVar31;
                }
                piVar5[uVar41 * 2] = (uVar63 + 2) - uVar20;
                (piVar5 + uVar41 * 2)[1] = (int)uVar23;
                uVar39 = (int)uVar41 + 1;
                uVar41 = (ulong)uVar39;
                uVar73 = uVar23;
                if (0x1000 < uVar23 || (ulong *)((long)puVar15 + uVar23) == puVar2)
                goto LAB_1006f58c4;
              }
              uVar39 = (uint)uVar41;
              puVar61 = (uint *)(lVar49 + (ulong)((uVar20 & uVar28) << 1) * 4);
              if (*(byte *)(lVar67 + uVar65 + uVar23) < *(byte *)((long)puVar15 + uVar23)) {
                *puVar37 = uVar20;
                if (uVar20 <= uVar50) {
                  puVar37 = &local_94;
                  break;
                }
                puVar61 = puVar61 + 1;
                uVar71 = uVar23;
                puVar37 = puVar61;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              else {
                *local_170 = uVar20;
                if (uVar20 <= uVar50) {
                  local_170 = &local_94;
                  break;
                }
                uVar22 = uVar23;
                local_170 = puVar61;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              uVar40 = uVar40 - 1;
              uVar20 = *puVar61;
              iVar31 = iVar46;
            } while (uVar10 <= uVar20);
          }
          *local_170 = 0;
          *puVar37 = 0;
          if ((uVar40 != 0) &&
             (uVar50 = *(uint *)(plVar60[6] +
                                (ulong)((uint)*puVar15 * -0x61c8864f >> (ulong)(-(int)lVar13 & 0x1f)
                                       ) * 4), uVar8 < uVar50)) {
            uVar41 = 0;
            lVar25 = plVar60[8];
            uVar22 = 0;
            iVar31 = iVar46;
            do {
              uVar40 = uVar40 - 1;
              uVar71 = uVar22;
              if (uVar41 <= uVar22) {
                uVar71 = uVar41;
              }
              uVar42 = (ulong)uVar50;
              lVar49 = (long)puVar15 + uVar71;
              FUN_1006c7460(lVar49,lVar7 + uVar42 + uVar71,puVar2,lVar51,lVar67 + (ulong)uVar3);
              uVar71 = lVar49 + uVar71;
              lVar49 = lVar7 + uVar42;
              if ((lVar51 - lVar7 & 0xffffffffU) <= uVar71 + uVar42) {
                lVar49 = lVar67 + (ulong)uVar12 + uVar42;
              }
              iVar46 = iVar31;
              if (uVar73 < uVar71) {
                iVar45 = uVar50 + uVar12;
                iVar46 = iVar45 + (int)uVar71;
                if (uVar71 <= (uint)(iVar31 - iVar45)) {
                  iVar46 = iVar31;
                }
                piVar5[(ulong)uVar39 * 2] = (uVar63 + 2) - iVar45;
                (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar71;
                uVar39 = uVar39 + 1;
                if ((0x1000 < uVar71) ||
                   (uVar73 = uVar71, (ulong *)((long)puVar15 + uVar71) == puVar2)) break;
              }
              if (uVar50 <= uVar9) break;
              bVar14 = *(byte *)(lVar49 + uVar71) < *(byte *)((long)puVar15 + uVar71);
              uVar42 = uVar71;
              if (!bVar14) {
                uVar42 = uVar22;
                uVar41 = uVar71;
              }
              if ((uVar40 == 0) ||
                 (uVar50 = *(uint *)(lVar25 + (ulong)((uVar50 & uVar11) << 1) * 4 +
                                    (ulong)bVar14 * 4), uVar22 = uVar42, iVar31 = iVar46,
                 uVar50 <= uVar8)) break;
            } while( true );
          }
          goto LAB_1006f5aa0;
        }
        uVar41 = 0;
        uVar40 = *(uint *)(param_1 + 0xcc);
        if (0xffe < uVar40) {
          uVar40 = 0xfff;
        }
        lVar49 = *(long *)(param_1 + 8);
        lVar25 = *(long *)(param_1 + 0x30);
        puVar21 = (ulong *)((long)puVar15 + 3);
        uVar53 = *(uint *)(param_1 + 0xc4);
        uVar26 = (uint)*puVar15 * -0x61c8864f >> (ulong)(-*(int *)(param_1 + 0xc0) & 0x1f);
        uVar20 = *(uint *)(lVar25 + (ulong)uVar26 * 4);
        lVar67 = *(long *)(param_1 + 0x40);
        uVar56 = -1 << (ulong)(*(int *)(param_1 + 0xbc) - 1U & 0x1f);
        uVar28 = ~uVar56;
        uVar63 = iVar31 - (int)lVar49;
        uVar50 = 0;
        if (uVar28 <= uVar63) {
          uVar50 = uVar63 - uVar28;
        }
        uVar3 = *(uint *)(param_1 + 0x18);
        uVar10 = 1 << (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f);
        uVar12 = uVar63 - uVar10;
        if (uVar63 - *(uint *)(param_1 + 0x1c) <= uVar10 || *(int *)(param_1 + 0x20) != 0) {
          uVar12 = *(uint *)(param_1 + 0x1c);
        }
        uVar10 = uVar12;
        if (uVar12 < 2) {
          uVar10 = 1;
        }
        plVar60 = *(long **)(param_1 + 0xb0);
        lVar51 = *plVar60;
        lVar7 = plVar60[1];
        iVar46 = (int)(lVar51 - lVar7);
        uVar12 = uVar12 - iVar46;
        lVar13 = plVar60[0x18];
        uVar11 = ~(-1 << (ulong)(*(int *)((long)plVar60 + 0xbc) - 1U & 0x1f));
        uVar8 = *(uint *)((long)plVar60 + 0x1c);
        uVar9 = iVar46 - uVar11;
        if (iVar46 - uVar8 <= uVar11) {
          uVar9 = uVar8;
        }
        bVar14 = iVar55 != 0;
        uVar22 = (ulong)bVar14;
        local_150 = (uint *)(lVar67 + (ulong)((uVar63 & (uVar56 ^ 0xffffffff)) << 1) * 4);
        local_170 = local_150 + 1;
        iVar46 = uVar63 + 9;
        uVar71 = 3;
        if (bVar14) {
          uVar71 = 4;
        }
        puVar17 = (ulong *)((long)puVar62 + uVar68 + 0xb);
        uVar73 = uVar33;
        do {
          if (uVar22 == 3) {
            uVar56 = *piVar57 - 1;
            uVar39 = *piVar57 - 2;
            if (uVar39 < uVar63 - uVar3) goto LAB_1006f37d4;
LAB_1006f3718:
            if ((uVar39 < (uVar63 - uVar8) - uVar12 && (uVar63 - uVar56) - uVar3 < 0xfffffffd) &&
               (puVar37 = (uint *)((lVar7 - (ulong)uVar12) + (ulong)(uVar63 - uVar56)),
               ((*puVar37 ^ (uint)*puVar15) & 0xffffff) == 0)) {
              puVar16 = puVar21;
              FUN_1006c7460(puVar21,(long)puVar37 + 3,puVar2,lVar51,lVar49 + (ulong)uVar3);
              uVar56 = (int)puVar16 + 3;
              uVar42 = (ulong)uVar56;
              if (uVar42 <= uVar73) goto LAB_1006f36f0;
              goto LAB_1006f3800;
            }
          }
          else {
            uVar56 = piVar57[uVar22];
            uVar39 = uVar56 - 1;
            if (uVar63 - uVar3 <= uVar39) goto LAB_1006f3718;
LAB_1006f37d4:
            if (((*(uint *)((long)puVar15 - (ulong)uVar56) ^ (uint)*puVar15) & 0xffffff) == 0) {
              lVar38 = -(ulong)uVar56;
              puVar16 = (ulong *)((long)puVar21 + lVar38);
              puVar43 = puVar21;
              if (puVar21 < puVar34) {
                if (*puVar16 == *puVar21) {
                  iVar31 = 0;
                  puVar16 = (ulong *)((long)puVar17 + lVar38);
                  puVar43 = puVar17;
                  do {
                    if (puVar34 <= puVar43) goto LAB_1006f38ac;
                    uVar65 = *puVar16;
                    uVar42 = *puVar43;
                    iVar31 = iVar31 + 8;
                    puVar16 = puVar16 + 1;
                    puVar43 = puVar43 + 1;
                  } while (uVar65 == uVar42);
                  uVar42 = uVar42 ^ uVar65;
                  uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  iVar31 = iVar31 + (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                }
                else {
                  uVar42 = *puVar21 ^ *puVar16;
                  uVar42 = (uVar42 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar42 & 0x5555555555555555) << 1;
                  uVar42 = (uVar42 & 0xcccccccccccccccc) >> 2 | (uVar42 & 0x3333333333333333) << 2;
                  uVar42 = (uVar42 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar42 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar42 = (uVar42 & 0xff00ff00ff00ff00) >> 8 | (uVar42 & 0xff00ff00ff00ff) << 8;
                  uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10
                  ;
                  iVar31 = (int)((ulong)LZCOUNT(uVar42 >> 0x20 | uVar42 << 0x20) >> 3);
                }
              }
              else {
LAB_1006f38ac:
                if (puVar43 < puVar47) {
                  if ((uint)*puVar16 == (uint)*puVar43) {
                    puVar16 = (ulong *)((long)puVar16 + 4);
                    puVar43 = (ulong *)((long)puVar43 + 4);
                  }
                }
                if (puVar43 < puVar35) {
                  if (*(short *)puVar16 == *(short *)puVar43) {
                    puVar43 = (ulong *)((long)puVar43 + 2);
                    puVar16 = (ulong *)((long)puVar16 + 2);
                  }
                }
                if ((puVar43 < puVar2) && ((char)*puVar16 == (char)*puVar43)) {
                  puVar43 = (ulong *)((long)puVar43 + 1);
                }
                iVar31 = (int)puVar43 - (int)puVar21;
              }
              uVar56 = iVar31 + 3;
              uVar42 = (ulong)uVar56;
              if (uVar73 < uVar42) {
LAB_1006f3800:
                piVar5[uVar41 * 2] = (int)uVar22 - (uint)bVar14;
                (piVar5 + uVar41 * 2)[1] = uVar56;
                uVar39 = (int)uVar41 + 1;
                uVar41 = (ulong)uVar39;
                if ((uVar40 < uVar56) ||
                   (uVar73 = uVar42, (ulong *)((long)puVar15 + uVar42) == puVar2))
                goto joined_r0x0001006f5b7c;
              }
            }
          }
LAB_1006f36f0:
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar71);
        if (2 < uVar73) {
LAB_1006f4f24:
          uVar39 = (uint)uVar41;
          *(uint *)(lVar25 + (ulong)uVar26 * 4) = uVar63;
          uVar40 = ~(-1 << (ulong)(uVar53 & 0x1f));
          if (uVar10 <= uVar20) {
            uVar71 = 0;
            uVar22 = 0;
            do {
              uVar42 = uVar71;
              if (uVar22 <= uVar71) {
                uVar42 = uVar22;
              }
              uVar65 = (ulong)uVar20;
              puVar17 = (ulong *)(lVar49 + uVar65 + uVar42);
              puVar21 = (ulong *)((long)puVar15 + uVar42);
              puVar16 = puVar21;
              if (puVar21 < puVar34) {
                if (*puVar17 == *puVar21) {
                  lVar25 = 0;
                  do {
                    puVar17 = (ulong *)((long)puVar62 + lVar25 + uVar42 + uVar68 + 8);
                    if (puVar34 <= puVar17) {
                      puVar17 = (ulong *)(lVar49 + 8 + uVar42 + uVar65 + lVar25);
                      puVar16 = (ulong *)((long)puVar62 + lVar25 + uVar42 + uVar68 + 8);
                      goto joined_r0x0001006f5730;
                    }
                    uVar23 = *(ulong *)(lVar49 + 8 + uVar42 + uVar65 + lVar25);
                    uVar24 = *puVar17;
                    lVar25 = lVar25 + 8;
                  } while (uVar23 == uVar24);
                  uVar24 = uVar24 ^ uVar23;
                  uVar23 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = lVar25 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
                }
                else {
                  uVar23 = *puVar21 ^ *puVar17;
                  uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
                  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
                  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
                  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10
                  ;
                  uVar23 = (ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3;
                }
                uVar23 = uVar23 + uVar42;
              }
              else {
joined_r0x0001006f5730:
                if (puVar16 < puVar47) {
                  if ((uint)*puVar17 == (uint)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 4);
                    puVar16 = (ulong *)((long)puVar16 + 4);
                  }
                }
                if (puVar16 < puVar35) {
                  if ((short)*puVar17 == (short)*puVar16) {
                    puVar17 = (ulong *)((long)puVar17 + 2);
                    puVar16 = (ulong *)((long)puVar16 + 2);
                  }
                }
                if ((puVar16 < puVar2) && ((char)*puVar17 == (char)*puVar16)) {
                  puVar16 = (ulong *)((long)puVar16 + 1);
                }
                uVar23 = (long)puVar16 + (uVar42 - (long)puVar21);
              }
              if (uVar73 < uVar23) {
                iVar31 = uVar20 + (int)uVar23;
                if (uVar23 <= iVar46 - uVar20) {
                  iVar31 = iVar46;
                }
                piVar5[uVar41 * 2] = (uVar63 + 2) - uVar20;
                (piVar5 + uVar41 * 2)[1] = (int)uVar23;
                uVar39 = (int)uVar41 + 1;
                uVar41 = (ulong)uVar39;
                uVar73 = uVar23;
                iVar46 = iVar31;
                if (0x1000 < uVar23 || (ulong *)((long)puVar15 + uVar23) == puVar2) {
                  *local_170 = 0;
                  *local_150 = 0;
                  goto LAB_1006f5b64;
                }
              }
              uVar39 = (uint)uVar41;
              puVar37 = (uint *)(lVar67 + (ulong)((uVar20 & uVar28) << 1) * 4);
              if (*(byte *)(lVar49 + uVar65 + uVar23) < *(byte *)((long)puVar15 + uVar23)) {
                *local_150 = uVar20;
                if (uVar20 <= uVar50) {
                  local_150 = &local_94;
                  break;
                }
                puVar37 = puVar37 + 1;
                uVar71 = uVar23;
                local_150 = puVar37;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              else {
                *local_170 = uVar20;
                if (uVar20 <= uVar50) {
                  local_170 = &local_94;
                  break;
                }
                uVar22 = uVar23;
                local_170 = puVar37;
                if (uVar40 == 0) {
                  uVar40 = 0xffffffff;
                  break;
                }
              }
              uVar40 = uVar40 - 1;
              uVar20 = *puVar37;
            } while (uVar10 <= uVar20);
          }
          *local_170 = 0;
          *local_150 = 0;
          iVar31 = iVar46;
          if ((uVar40 != 0) &&
             (uVar50 = *(uint *)(plVar60[6] +
                                (ulong)((uint)*puVar15 * -0x61c8864f >> (ulong)(-(int)lVar13 & 0x1f)
                                       ) * 4), uVar8 < uVar50)) {
            uVar41 = 0;
            lVar67 = plVar60[8];
            uVar22 = 0;
            do {
              uVar40 = uVar40 - 1;
              uVar71 = uVar22;
              if (uVar41 <= uVar22) {
                uVar71 = uVar41;
              }
              uVar42 = (ulong)uVar50;
              lVar25 = (long)puVar15 + uVar71;
              FUN_1006c7460(lVar25,lVar7 + uVar42 + uVar71,puVar2,lVar51,lVar49 + (ulong)uVar3);
              uVar71 = lVar25 + uVar71;
              lVar25 = lVar7 + uVar42;
              if ((lVar51 - lVar7 & 0xffffffffU) <= uVar71 + uVar42) {
                lVar25 = lVar49 + (ulong)uVar12 + uVar42;
              }
              iVar31 = iVar46;
              if (uVar73 < uVar71) {
                iVar45 = uVar50 + uVar12;
                iVar31 = iVar45 + (int)uVar71;
                if (uVar71 <= (uint)(iVar46 - iVar45)) {
                  iVar31 = iVar46;
                }
                piVar5[(ulong)uVar39 * 2] = (uVar63 + 2) - iVar45;
                (piVar5 + (ulong)uVar39 * 2)[1] = (int)uVar71;
                uVar39 = uVar39 + 1;
                if ((0x1000 < uVar71) ||
                   (uVar73 = uVar71, (ulong *)((long)puVar15 + uVar71) == puVar2)) break;
              }
              if (uVar50 <= uVar9) break;
              bVar14 = *(byte *)(lVar25 + uVar71) < *(byte *)((long)puVar15 + uVar71);
              uVar42 = uVar71;
              if (!bVar14) {
                uVar42 = uVar22;
                uVar41 = uVar71;
              }
              if ((uVar40 == 0) ||
                 (uVar50 = *(uint *)(lVar67 + (ulong)((uVar50 & uVar11) << 1) * 4 +
                                    (ulong)bVar14 * 4), uVar22 = uVar42, iVar46 = iVar31,
                 uVar50 <= uVar8)) break;
            } while( true );
          }
LAB_1006f5b64:
          *(int *)(param_1 + 0x24) = iVar31 + -8;
          goto joined_r0x0001006f5b7c;
        }
        lVar38 = *(long *)(param_1 + 0x38);
        uVar22 = *puVar15;
        uVar56 = 0x20 - *(int *)(param_1 + 0x28);
        if (local_23c < uVar63) {
          uVar71 = (ulong)local_23c;
          do {
            *(int *)(lVar38 + (ulong)((uint)(*(int *)(lVar49 + uVar71) * 0x35a7bd00) >>
                                     (ulong)(uVar56 & 0x1f)) * 4) = (int)uVar71;
            uVar71 = uVar71 + 1;
          } while ((uint)(iVar64 - (int)lVar49) != uVar71);
        }
        uVar56 = *(uint *)(lVar38 + (ulong)((uint)uVar22 * 0x35a7bd00 >> (ulong)(uVar56 & 0x1f)) * 4
                          );
        local_23c = uVar63;
        if (uVar56 < uVar10 || uVar63 - uVar56 >> 0x12 != 0) goto LAB_1006f4f24;
        puVar21 = (ulong *)(lVar49 + (ulong)uVar56);
        puVar17 = puVar15;
        if (puVar15 < puVar34) {
          if (*puVar21 == *puVar15) {
            lVar38 = 0;
            puVar21 = (ulong *)(lVar49 + (ulong)uVar56);
            puVar17 = (ulong *)((long)puVar62 + uVar68 + 8);
            do {
              puVar21 = puVar21 + 1;
              if (puVar34 <= puVar17) goto LAB_1006f5970;
              uVar22 = *puVar17;
              lVar38 = lVar38 + 8;
              puVar17 = puVar17 + 1;
            } while (*puVar21 == uVar22);
            uVar22 = uVar22 ^ *puVar21;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = lVar38 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
          }
          else {
            uVar22 = *puVar15 ^ *puVar21;
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar22 = (ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3;
          }
        }
        else {
LAB_1006f5970:
          if (puVar17 < puVar47) {
            if ((uint)*puVar21 == (uint)*puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar21 = (ulong *)((long)puVar21 + 4);
            }
          }
          if (puVar17 < puVar35) {
            if (*(short *)puVar21 == *(short *)puVar17) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar21 = (ulong *)((long)puVar21 + 2);
            }
          }
          if ((puVar17 < puVar2) && ((char)*puVar21 == (char)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 1);
          }
          uVar22 = (long)puVar17 - (long)puVar15;
        }
        if (uVar22 < 3) goto LAB_1006f4f24;
        *piVar5 = (uVar63 - uVar56) + 2;
        piVar5[1] = (int)uVar22;
        if (uVar22 <= uVar40 && (ulong *)((long)puVar15 + uVar22) != puVar2) {
          uVar41 = 1;
          uVar73 = uVar22;
          goto LAB_1006f4f24;
        }
        uVar39 = 1;
        *(uint *)(param_1 + 0x24) = uVar63 + 1;
        goto LAB_1006f5b80;
      }
    }
LAB_1006f5e54:
    puVar37 = (uint *)(piVar6 + (uVar68 & 0xffffffff) * 7);
    uVar54 = (ulong)*puVar37;
    uVar53 = puVar37[1];
    uVar40 = puVar37[2];
    uVar48 = puVar37[3];
    local_90 = *(undefined8 *)(puVar37 + 4);
    local_88 = puVar37[6];
    uVar50 = 0;
    if (uVar48 + uVar40 <= (uint)uVar68) {
      uVar50 = (uint)uVar68 - (uVar48 + uVar40);
    }
  }
  else {
    if (*(int *)(param_1 + 0xa8) == 2) {
      iVar44 = uVar48 << 0xb;
      iVar30 = *(int *)(param_1 + 0x98);
    }
    else {
      iVar30 = *(int *)(param_1 + 0x98);
      if (iVar30 == 1) {
        iVar44 = uVar48 * 0x600;
        goto LAB_1006f2fb4;
      }
      iVar44 = *(int *)(param_1 + 0x88) * uVar48;
      lVar25 = *(long *)(param_1 + 0x48);
      uVar70 = uVar41 & 0xffffffff;
      if (uVar70 < 2) {
        lVar51 = 0;
      }
      else {
        iVar55 = 0;
        lVar51 = uVar70 - (uVar41 & 1);
        pbVar52 = (byte *)((long)param_4 + 1);
        lVar49 = lVar51;
        do {
          iVar44 = iVar44 - ((int)LZCOUNT(*(int *)(lVar25 + (ulong)pbVar52[-1] * 4) + 1) << 8 ^
                            0x1f00U);
          iVar55 = iVar55 - ((int)LZCOUNT(*(int *)(lVar25 + (ulong)*pbVar52 * 4) + 1) << 8 ^ 0x1f00U
                            );
          lVar49 = lVar49 + -2;
          pbVar52 = pbVar52 + 2;
        } while (lVar49 != 0);
        iVar44 = iVar55 + iVar44;
        if ((uVar41 & 1) == 0) goto joined_r0x0001006f2fb0;
      }
      lVar49 = uVar70 - lVar51;
      pbVar52 = (byte *)((long)param_4 + lVar51);
      do {
        iVar44 = iVar44 - ((int)LZCOUNT(*(int *)(lVar25 + (ulong)*pbVar52 * 4) + 1) << 8 ^ 0x1f00U);
        lVar49 = lVar49 + -1;
        pbVar52 = pbVar52 + 1;
      } while (lVar49 != 0);
    }
joined_r0x0001006f2fb0:
    if (iVar30 == 0) {
      if (uVar48 < 0x40) goto LAB_1006f300c;
      uVar40 = 0x32 - (int)LZCOUNT(uVar48);
      goto LAB_1006f3018;
    }
LAB_1006f2fb4:
    iVar44 = ((int)LZCOUNT(uVar48 + 1) << 8 ^ 0x1f00U) + iVar44;
    *piVar6 = iVar44;
    puVar37 = (uint *)(piVar5 + (ulong)(uVar39 - 1) * 2);
    uVar40 = puVar37[1];
    if (uVar40 <= uVar4) {
      if (iVar30 != 1) goto LAB_1006f3084;
      iVar30 = 0;
      goto LAB_1006f30b4;
    }
LAB_1006f3078:
    uVar54 = uVar54 & 0xffffffff;
    uVar53 = *puVar37;
    uVar50 = 0;
  }
LAB_1006f5e98:
  uVar20 = uVar50 + 1;
  piVar57 = piVar6 + (ulong)uVar20 * 7;
  *piVar57 = (int)uVar54;
  piVar57[1] = uVar53;
  piVar57[2] = uVar40;
  piVar57[3] = uVar48;
  *(undefined8 *)(piVar57 + 4) = local_90;
  piVar57[6] = local_88;
  uVar40 = uVar50;
  if (uVar50 == 0) {
    uVar48 = 1;
    goto LAB_1006f5f98;
  }
  do {
    uVar48 = uVar40;
    piVar57 = piVar6 + (ulong)uVar50 * 7;
    iVar44 = piVar57[2];
    iVar64 = piVar57[3];
    piVar18 = piVar6 + (ulong)uVar48 * 7;
    uVar75 = *(undefined8 *)(piVar57 + 2);
    uVar74 = *(undefined8 *)piVar57;
    uVar76 = *(undefined8 *)(piVar57 + 3);
    *(undefined8 *)(piVar18 + 5) = *(undefined8 *)(piVar57 + 5);
    *(undefined8 *)(piVar18 + 3) = uVar76;
    *(undefined8 *)(piVar18 + 2) = uVar75;
    *(undefined8 *)piVar18 = uVar74;
    uVar53 = iVar64 + iVar44;
    bVar14 = uVar53 <= uVar50;
    uVar53 = uVar50 - uVar53;
    uVar50 = 0;
    if (bVar14) {
      uVar50 = uVar53;
    }
    uVar40 = uVar48 - 1;
  } while (bVar14 && uVar53 != 0);
  for (; uVar48 <= uVar20; uVar48 = uVar48 + 1) {
LAB_1006f5f98:
    while( true ) {
      iVar44 = piVar6[(ulong)uVar48 * 7 + 2];
      uVar40 = piVar6[(ulong)uVar48 * 7 + 3];
      uVar70 = (ulong)uVar40;
      if (iVar44 != 0) break;
      puVar62 = (ulong *)((long)param_4 + uVar70);
      uVar48 = uVar48 + 1;
      if (uVar20 < uVar48) goto LAB_1006f5f04;
    }
    uVar50 = piVar6[(ulong)uVar48 * 7 + 1];
    if (uVar50 < 3) {
      uVar53 = uVar50;
      if (uVar40 == 0) {
        uVar53 = uVar50 + 1;
      }
      if (uVar53 != 0) {
        if (uVar53 == 3) {
          iVar64 = *param_3 + -1;
LAB_1006f6000:
          param_3[2] = param_3[1];
        }
        else {
          iVar64 = param_3[uVar53];
          if (uVar53 != 1) goto LAB_1006f6000;
        }
        param_3[1] = *param_3;
        goto LAB_1006f6010;
      }
    }
    else {
      *(undefined8 *)(param_3 + 1) = *(undefined8 *)param_3;
      iVar64 = uVar50 - 2;
LAB_1006f6010:
      *param_3 = iVar64;
    }
    if (*(int *)(param_1 + 0xa8) != 2) {
      if (uVar40 != 0) {
        lVar67 = *(long *)(param_1 + 0x48);
        puVar62 = param_4;
        uVar68 = uVar70;
        do {
          *(int *)(lVar67 + (ulong)(byte)*puVar62 * 4) =
               *(int *)(lVar67 + (ulong)(byte)*puVar62 * 4) + 2;
          uVar68 = uVar68 - 1;
          puVar62 = (ulong *)((long)puVar62 + 1);
        } while (uVar68 != 0);
      }
      *(uint *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar40 * 2;
    }
    if (uVar40 < 0x40) {
      uVar53 = (uint)(byte)(&DAT_10084fdf4)[uVar70];
    }
    else {
      uVar53 = 0x32 - (int)LZCOUNT(uVar40);
    }
    *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar53 * 4) =
         *(int *)(*(long *)(param_1 + 0x50) + (ulong)uVar53 * 4) + 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    uVar53 = (uint)LZCOUNT(uVar50 + 1) ^ 0x1f;
    *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar53 * 4) =
         *(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar53 * 4) + 1;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    uVar53 = iVar44 - 3;
    if (uVar53 < 0x80) {
      uVar56 = (uint)(byte)(&DAT_10084ff08)[uVar53];
    }
    else {
      uVar56 = 0x43 - (int)LZCOUNT(uVar53);
    }
    *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar56 * 4) =
         *(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar56 * 4) + 1;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    puVar62 = (ulong *)param_2[3];
    puVar15 = (ulong *)((long)param_4 + uVar70);
    if (puVar36 < puVar15) {
      puVar21 = param_4;
      puVar17 = puVar62;
      if (param_4 <= puVar36) {
        puVar17 = (ulong *)((long)puVar62 + ((long)puVar36 - (long)param_4));
        uVar68 = *param_4;
        puVar62[1] = param_4[1];
        *puVar62 = uVar68;
        uVar68 = param_4[2];
        puVar62[3] = param_4[3];
        puVar62[2] = uVar68;
        puVar21 = puVar36;
        if (0x20 < (long)puVar36 - (long)param_4) {
          puVar62 = puVar62 + 4;
          puVar16 = param_4 + 6;
          do {
            uVar68 = puVar16[-2];
            puVar62[1] = puVar16[-1];
            *puVar62 = uVar68;
            uVar68 = *puVar16;
            puVar62[3] = puVar16[1];
            puVar62[2] = uVar68;
            puVar62 = puVar62 + 4;
            puVar16 = puVar16 + 4;
          } while (puVar62 < puVar17);
        }
      }
      if (puVar21 < puVar15) {
        uVar68 = (long)puVar15 - (long)puVar21;
        if ((7 < uVar68) && (0x3f < (ulong)((long)puVar17 - (long)puVar21))) {
          if (uVar68 < 0x40) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar68 & 0xffffffffffffffc0;
            puVar62 = puVar17 + 4;
            puVar16 = puVar21 + 4;
            uVar41 = uVar22;
            do {
              uVar71 = puVar16[-4];
              uVar42 = puVar16[-1];
              uVar73 = puVar16[-2];
              uVar23 = puVar16[1];
              uVar65 = *puVar16;
              uVar77 = puVar16[3];
              uVar24 = puVar16[2];
              puVar62[-3] = puVar16[-3];
              puVar62[-4] = uVar71;
              puVar62[-1] = uVar42;
              puVar62[-2] = uVar73;
              puVar62[1] = uVar23;
              *puVar62 = uVar65;
              puVar62[3] = uVar77;
              puVar62[2] = uVar24;
              uVar41 = uVar41 - 0x40;
              puVar62 = puVar62 + 8;
              puVar16 = puVar16 + 8;
            } while (uVar41 != 0);
            if (uVar68 == uVar22) goto LAB_1006f6298;
            if ((uVar68 & 0x38) == 0) {
              puVar21 = (ulong *)((long)puVar21 + uVar22);
              puVar17 = (ulong *)((long)puVar17 + uVar22);
              goto LAB_1006f6288;
            }
          }
          uVar41 = uVar68 & 0xfffffffffffffff8;
          lVar67 = uVar22 - uVar41;
          puVar59 = (undefined8 *)((long)puVar17 + uVar22);
          puVar66 = (undefined8 *)((long)puVar21 + uVar22);
          do {
            *puVar59 = *puVar66;
            lVar67 = lVar67 + 8;
            puVar59 = puVar59 + 1;
            puVar66 = puVar66 + 1;
          } while (lVar67 != 0);
          puVar17 = (ulong *)((long)puVar17 + uVar41);
          puVar21 = (ulong *)((long)puVar21 + uVar41);
          if (uVar68 == uVar41) goto LAB_1006f6298;
        }
LAB_1006f6288:
        do {
          puVar62 = (ulong *)((long)puVar21 + 1);
          *(char *)puVar17 = (char)*puVar21;
          puVar17 = (ulong *)((long)puVar17 + 1);
          puVar21 = puVar62;
        } while (puVar62 != puVar15);
      }
LAB_1006f6298:
      param_2[3] = param_2[3] + uVar70;
      piVar57 = (int *)param_2[1];
      if (0xffff < uVar40) {
        *(undefined4 *)(param_2 + 9) = 1;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar57 - *param_2) >> 3);
      }
    }
    else {
      uVar68 = *param_4;
      puVar62[1] = param_4[1];
      *puVar62 = uVar68;
      if (0x10 < uVar40) {
        lVar67 = param_2[3];
        uVar68 = param_4[2];
        *(ulong *)(lVar67 + 0x18) = param_4[3];
        *(ulong *)(lVar67 + 0x10) = uVar68;
        uVar68 = param_4[4];
        *(ulong *)(lVar67 + 0x28) = param_4[5];
        *(ulong *)(lVar67 + 0x20) = uVar68;
        if (uVar70 - 0x31 < 0xffffffffffffffdf) {
          puVar62 = (ulong *)(lVar67 + 0x30);
          puVar15 = param_4 + 8;
          do {
            uVar68 = puVar15[-2];
            puVar62[1] = puVar15[-1];
            *puVar62 = uVar68;
            uVar68 = *puVar15;
            puVar62[3] = puVar15[1];
            puVar62[2] = uVar68;
            puVar62 = puVar62 + 4;
            puVar15 = puVar15 + 4;
          } while (puVar62 < (ulong *)(lVar67 + uVar70));
          goto LAB_1006f6298;
        }
      }
      param_2[3] = param_2[3] + uVar70;
      piVar57 = (int *)param_2[1];
    }
    *(short *)(piVar57 + 1) = (short)uVar40;
    *piVar57 = uVar50 + 1;
    if (0xffff < uVar53) {
      *(undefined4 *)(param_2 + 9) = 2;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar57 - *param_2) >> 3);
    }
    *(short *)((long)piVar57 + 6) = (short)uVar53;
    param_2[1] = (long)(piVar57 + 2);
    puVar62 = (ulong *)((long)param_4 + (ulong)(iVar44 + uVar40));
    param_4 = puVar62;
  }
LAB_1006f5f04:
  if (*(int *)(param_1 + 0xa8) != 2) {
    *(uint *)(param_1 + 0x88) = (int)LZCOUNT(*(int *)(param_1 + 0x78) + 1) << 8 ^ 0x1f00;
  }
  *(ulong *)(param_1 + 0x8c) =
       (ulong)CONCAT15((char)LZCOUNT((int)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) + 1),
                       (uint5)(uint3)LZCOUNT((int)*(undefined8 *)(param_1 + 0x7c) + 1) << 8) ^
       0x1f0000001f00;
  *(uint *)(param_1 + 0x94) = (int)LZCOUNT(*(int *)(param_1 + 0x84) + 1) << 8 ^ 0x1f00;
joined_r0x0001006f5f64:
  if (puVar69 <= puVar62) goto LAB_1006f643c;
  goto LAB_1006f0acc;
LAB_1006f58c4:
  *local_170 = 0;
  *puVar37 = 0;
LAB_1006f5aa0:
  *(int *)(param_1 + 0x24) = iVar46 + -8;
joined_r0x0001006f5b7c:
  if (uVar39 != 0) {
LAB_1006f5b80:
    uVar40 = (piVar5 + (ulong)(uVar39 - 1) * 2)[1];
    if ((uVar4 < uVar40) || (0xfff < uVar40 + iVar44)) {
      if (piVar18[2] == 0) {
        iVar64 = piVar18[3];
      }
      else {
        iVar64 = 0;
      }
      uVar54 = uVar54 & 0xffffffff;
      uVar53 = piVar5[(ulong)(uVar39 - 1) * 2];
      uVar50 = 0;
      if ((uint)(iVar44 - iVar64) < 0x1001) {
        uVar50 = iVar44 - iVar64;
      }
      goto LAB_1006f5e98;
    }
    uVar41 = 0;
    iVar58 = iVar58 + iVar30;
    piVar57 = piVar6 + uVar68 * 7 + 4;
    do {
      puVar37 = (uint *)(piVar5 + uVar41 * 2);
      uVar40 = *puVar37;
      if (uVar40 < 3) {
        uVar50 = uVar40 + (iVar55 != 0);
        if (uVar50 == 0) {
          iVar30 = *piVar57;
          iVar46 = piVar6[uVar68 * 7 + 5];
          piVar18 = piVar6 + uVar68 * 7 + 6;
        }
        else {
          if (uVar50 == 3) {
            iVar46 = *piVar57;
            iVar30 = iVar46 + -1;
          }
          else {
            iVar30 = piVar57[uVar50];
            iVar46 = *piVar57;
          }
          lVar67 = 8;
          if (uVar50 != 1) {
            lVar67 = 4;
          }
          piVar18 = (int *)((long)piVar57 + lVar67);
        }
      }
      else {
        iVar46 = *piVar57;
        iVar30 = uVar40 - 2;
        piVar18 = piVar6 + uVar68 * 7 + 5;
      }
      uVar50 = uVar29;
      if (uVar41 != 0) {
        uVar50 = puVar37[-1] + 1;
      }
      uVar53 = puVar37[1];
      if (uVar50 <= uVar53) {
        iVar31 = 0;
        iVar19 = *piVar18;
        uVar20 = (uint)LZCOUNT(uVar40 + 1) ^ 0x1f;
        iVar45 = uVar20 * 0x200 + -0x25cd;
        if (uVar20 < 0x14) {
          iVar45 = 0x33;
        }
        uVar56 = iVar44 + uVar53;
        uVar26 = uVar56;
        do {
          if (*(int *)(param_1 + 0x98) == 1) {
            iVar27 = iVar58 + uVar20 * 0x100 + 0x1000 + ((int)LZCOUNT(uVar53 - 2) << 8 ^ 0x1f00U);
            uVar22 = (ulong)(uVar53 + iVar44);
            if (uVar53 + iVar44 <= (uint)uVar70) goto LAB_1006f5cb0;
LAB_1006f5dbc:
            uVar73 = uVar70 & 0xffffffff;
            uVar71 = (uVar56 - iVar31) - uVar73;
            uVar70 = uVar73;
            if (uVar71 < 4) {
LAB_1006f5e28:
              piVar18 = piVar1 + uVar70 * 7;
              do {
                uVar70 = uVar70 + 1;
                *piVar18 = 0x40000000;
                piVar18 = piVar18 + 7;
              } while (uVar70 < uVar22);
            }
            else {
              uVar70 = (uVar71 & 0xfffffffffffffffc) + uVar73;
              uVar42 = uVar26 - uVar73 & 0xfffffffffffffffc;
              piVar18 = piVar6 + uVar73 * 7 + 0xe;
              do {
                piVar18[-7] = 0x40000000;
                *piVar18 = 0x40000000;
                piVar18[7] = 0x40000000;
                piVar18[0xe] = 0x40000000;
                piVar18 = piVar18 + 0x1c;
                uVar42 = uVar42 - 4;
              } while (uVar42 != 0);
              if (uVar71 != (uVar71 & 0xfffffffffffffffc)) goto LAB_1006f5e28;
            }
          }
          else {
            uVar28 = uVar53 - 3;
            if (uVar28 < 0x80) {
              uVar28 = (uint)(byte)(&DAT_10084ff08)[uVar28];
            }
            else {
              uVar28 = 0x43 - (int)LZCOUNT(uVar28);
            }
            iVar27 = iVar58 + ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x58) + (ulong)uVar28 * 4)
                                            + 1) << 8 ^ 0xffffe0ffU) +
                              iVar45 + *(int *)(param_1 + 0x94) +
                              ((int)LZCOUNT(*(int *)(*(long *)(param_1 + 0x60) + (ulong)uVar20 * 4)
                                            + 1) << 8 ^ 0xffffe0ffU) + *(int *)(param_1 + 0x90) +
                              (*(int *)(&DAT_10084fe34 + (ulong)uVar28 * 4) + uVar20) * 0x100 + 2;
            uVar22 = (ulong)(uVar53 + iVar44);
            if ((uint)uVar70 < uVar53 + iVar44) goto LAB_1006f5dbc;
LAB_1006f5cb0:
            if (piVar6[uVar22 * 7] <= iVar27) break;
          }
          piVar18 = piVar6 + uVar22 * 7;
          piVar18[2] = uVar53;
          piVar18[3] = uVar48;
          *piVar18 = iVar27;
          piVar18[1] = uVar40;
          *(ulong *)(piVar18 + 4) = CONCAT44(iVar46,iVar30);
          piVar18[6] = iVar19;
          uVar53 = uVar53 - 1;
          iVar31 = iVar31 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar50 <= uVar53);
      }
      uVar41 = uVar41 + 1;
    } while (uVar41 != uVar39);
  }
  uVar41 = (ulong)(iVar44 + 1U);
LAB_1006f3274:
  uVar68 = uVar70;
  if ((uint)uVar70 < (uint)uVar41) goto LAB_1006f5e54;
  goto LAB_1006f3284;
}

