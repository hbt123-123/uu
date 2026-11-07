// rea decompile_all
// name: FUN_1003ce558
// address: 0x1003ce558
// body: available
// range: 0x1003ce558-0x1003cedb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ce558(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x21;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong auStack_110 [2];
  ulong *local_100;
  ulong *local_f8;
  long *local_f0;
  long local_e8;
  long *local_e0;
  ulong local_a8;
  undefined *local_58;
  
  lVar3 = 0;
  local_f0 = param_1;
  FUN_1003c5f68();
  local_e8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar9 = (long)auStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar28 = (ulong *)(lVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar29 = (ulong *)((long)puVar28 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100995498)();
  plVar11 = (long *)((long)puVar29 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100995498)();
  plVar12 = (long *)((long)plVar11 - extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_f8 = (ulong *)((long)plVar12 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_100 = (ulong *)(((long)plVar12 - extraout_x12_04) - extraout_x12_05);
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar13 = param_3[1];
  local_e0 = param_3;
  if (0 < lVar13) {
    lVar21 = 0;
    auStack_110[1] = param_4;
    do {
      puVar20 = local_100;
      lVar24 = lVar21 + 1;
      if (lVar24 < lVar13) {
        lVar17 = *param_3;
        lVar22 = *(long *)(local_e8 + 0x48);
        FUN_100082394(lVar17 + lVar22 * lVar24,local_100,FUN_1003c5f68);
        puVar4 = local_f8;
        FUN_100082394(lVar17 + lVar22 * lVar21,local_f8,FUN_1003c5f68);
        lVar15 = (long)*(int *)(lVar3 + 0x14);
        uVar19 = (long)puVar20 + lVar15;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar19,(long)puVar4 + lVar15);
        if ((uVar19 & 1) == 0) {
          local_a8 = (long)puVar20 + lVar15;
          __s10Foundation4DateV1goiySbAC_ACtFZ(local_a8,(long)puVar4 + lVar15);
          local_a8 = local_a8 & 0xffffffff;
        }
        else {
          local_a8 = *puVar20;
          if ((local_a8 == *puVar4) && (puVar20[1] == puVar4[1])) {
            local_a8 = 0;
            puVar4 = local_f8;
            puVar20 = local_100;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            local_a8 = local_a8 & 0xffffffff;
            puVar4 = local_f8;
            puVar20 = local_100;
          }
        }
        FUN_1000d27dc(puVar4,FUN_1003c5f68);
        FUN_1000d27dc(puVar20,FUN_1003c5f68);
        lVar14 = lVar22 * (lVar21 + 2);
        lVar15 = lVar17 + lVar14;
        lVar17 = lVar17 + lVar22 * lVar24;
        lVar26 = lVar21 + 2;
        lVar5 = 0;
        lVar16 = lVar22 * lVar24;
        do {
          lVar27 = lVar16;
          lVar23 = lVar14;
          lVar18 = lVar5;
          lVar24 = lVar26;
          if (lVar13 <= lVar24) break;
          FUN_100082394(lVar15,plVar12,FUN_1003c5f68);
          FUN_100082394(lVar17,plVar11,FUN_1003c5f68);
          lVar26 = (long)*(int *)(lVar3 + 0x14);
          uVar19 = (long)plVar12 + lVar26;
          __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar19,(long)plVar11 + lVar26);
          if ((uVar19 & 1) == 0) {
            lVar5 = (long)plVar12 + lVar26;
            __s10Foundation4DateV1goiySbAC_ACtFZ(lVar5,(long)plVar11 + lVar26);
            uVar25 = (uint)lVar5;
          }
          else {
            lVar26 = *plVar12;
            if ((lVar26 == *plVar11) && (plVar12[1] == plVar11[1])) {
              uVar25 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              uVar25 = (uint)lVar26;
            }
          }
          FUN_1000d27dc(plVar11,FUN_1003c5f68);
          FUN_1000d27dc(plVar12,FUN_1003c5f68);
          lVar15 = lVar15 + lVar22;
          lVar17 = lVar17 + lVar22;
          lVar26 = lVar24 + 1;
          lVar5 = lVar18 + 1;
          lVar14 = lVar23 + lVar22;
          lVar16 = lVar27 + lVar22;
        } while ((((uint)local_a8 ^ uVar25) & 1) == 0);
        param_3 = local_e0;
        if ((local_a8 & 1) != 0) {
          if (lVar24 < lVar21) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced88);
            (*pcVar1)();
          }
          if (lVar21 < lVar24) {
            lVar13 = 0;
            lVar15 = *local_e0;
            lVar17 = lVar21 * lVar22;
            do {
              if (lVar21 + lVar13 != lVar21 + lVar18 + 1) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ceda8);
                  (*pcVar1)();
                }
                uVar19 = lVar15 + lVar17;
                FUN_1000823d8(uVar19,lVar9,FUN_1003c5f68);
                if ((lVar17 < lVar27) || ((ulong)(lVar15 + lVar23) <= uVar19)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar19,lVar15 + lVar27,1,lVar3);
                }
                else if (lVar17 != lVar27) {
                  _swift_arrayInitWithTakeBackToFront(uVar19,lVar15 + lVar27,1,lVar3);
                }
                FUN_1000823d8(lVar9,lVar15 + lVar27,FUN_1003c5f68);
              }
              lVar18 = lVar18 + -1;
              lVar13 = lVar13 + 1;
              lVar27 = lVar27 - lVar22;
              lVar23 = lVar23 - lVar22;
              lVar17 = lVar17 + lVar22;
              param_3 = local_e0;
            } while (lVar13 + lVar21 < lVar21 + lVar18 + 2);
          }
        }
      }
      lVar13 = param_3[1];
      lVar17 = lVar24;
      if (lVar24 < lVar13) {
        if (SBORROW8(lVar24,lVar21)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced84);
          (*pcVar1)();
        }
        if (lVar24 - lVar21 < (long)auStack_110[1]) {
          if (SCARRY8(lVar21,auStack_110[1])) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced8c);
            (*pcVar1)();
          }
          lVar15 = lVar21 + auStack_110[1];
          if (lVar13 <= (long)(lVar21 + auStack_110[1])) {
            lVar15 = lVar13;
          }
          if (lVar15 < lVar21) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced90);
            (*pcVar1)();
          }
          if (lVar24 != lVar15) {
            lVar18 = *param_3;
            lVar23 = *(long *)(local_e8 + 0x48);
            lVar22 = lVar18 + lVar23 * (lVar24 + -1);
            lVar13 = lVar21 - lVar24;
            lVar26 = lVar18 + lVar24 * lVar23;
            lVar5 = lVar22;
            lVar14 = lVar13;
            lVar16 = lVar26;
LAB_1003ceab8:
            do {
              FUN_100082394(lVar26,puVar29,FUN_1003c5f68);
              FUN_100082394(lVar22,puVar28,FUN_1003c5f68);
              lVar17 = (long)*(int *)(lVar3 + 0x14);
              uVar19 = (long)puVar29 + lVar17;
              __s10Foundation4DateV2eeoiySbAC_ACtFZ(uVar19,(long)puVar28 + lVar17);
              if ((uVar19 & 1) == 0) {
                uVar19 = (long)puVar29 + lVar17;
                __s10Foundation4DateV1goiySbAC_ACtFZ(uVar19,(long)puVar28 + lVar17);
LAB_1003ceb18:
                FUN_1000d27dc(puVar28,FUN_1003c5f68);
                FUN_1000d27dc(puVar29,FUN_1003c5f68);
                if ((uVar19 & 1) != 0) {
                  if (lVar18 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced94);
                    (*pcVar1)();
                  }
                  FUN_1000823d8(lVar26,lVar10,FUN_1003c5f68);
                  _swift_arrayInitWithTakeFrontToBack(lVar26,lVar22,1,lVar3);
                  FUN_1000823d8(lVar10,lVar22,FUN_1003c5f68);
                  lVar22 = lVar22 + -lVar23;
                  lVar26 = lVar26 + -lVar23;
                  bVar2 = lVar13 != -1;
                  lVar13 = lVar13 + 1;
                  if (bVar2) goto LAB_1003ceab8;
                }
              }
              else {
                uVar19 = *puVar29;
                if (uVar19 != *puVar28 || puVar29[1] != puVar28[1]) {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            ();
                  goto LAB_1003ceb18;
                }
                FUN_1000d27dc(puVar28,FUN_1003c5f68);
                FUN_1000d27dc(puVar29,FUN_1003c5f68);
              }
              lVar24 = lVar24 + 1;
              lVar22 = lVar5 + lVar23;
              lVar13 = lVar14 + -1;
              lVar26 = lVar16 + lVar23;
              lVar17 = lVar15;
              param_3 = local_e0;
              lVar5 = lVar22;
              lVar14 = lVar13;
              lVar16 = lVar26;
            } while (lVar24 != lVar15);
          }
        }
      }
      puVar8 = local_58;
      if (lVar17 < lVar21) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced78);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar19 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar19 + 1,1,puVar7);
        puVar7 = puVar8;
      }
      *(ulong *)(puVar7 + 0x10) = uVar19 + 1;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x20) = lVar21;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x28) = lVar17;
      local_58 = puVar7;
      if (*local_f0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cedac);
        (*pcVar1)();
      }
      FUN_1003cfb88(&local_58,*local_f0,param_3,FUN_1003c5f68,FUN_1003cfe18);
      puVar8 = local_58;
      if (unaff_x21 != 0) goto LAB_1003ced48;
      lVar13 = param_3[1];
      lVar21 = lVar17;
    } while (lVar17 < lVar13);
  }
  puVar8 = local_58;
  lVar3 = *local_f0;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cedb4);
    (*pcVar1)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10006f924();
  }
  uVar19 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar19) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cedb0);
      (*pcVar1)();
    }
    lVar21 = uVar19 - 1;
    lVar24 = *(long *)(puVar8 + uVar19 * 0x10);
    lVar10 = *(long *)(puVar8 + lVar21 * 0x10 + 0x28);
    lVar13 = *(long *)(local_e8 + 0x48);
    FUN_1003cfe18(lVar9 + lVar13 * lVar24,lVar9 + lVar13 * *(long *)(puVar8 + lVar21 * 0x10 + 0x20),
                  lVar9 + lVar13 * lVar10,lVar3);
    if (unaff_x21 != 0) break;
    if (lVar10 < lVar24) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced7c);
      (*pcVar1)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ced80);
      (*pcVar1)();
    }
    *(long *)(puVar8 + uVar19 * 0x10) = lVar24;
    *(long *)((long)(puVar8 + uVar19 * 0x10) + 8) = lVar10;
    local_58 = puVar8;
    FUN_10005fd60(lVar21);
    puVar8 = local_58;
    param_3 = local_e0;
    uVar19 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003ced48:
  _swift_bridgeObjectRelease(puVar8);
  return;
}

