// rea decompile_all
// name: FUN_1003cedb4
// address: 0x1003cedb4
// body: available
// range: 0x1003cedb4-0x1003cf6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cedb4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long *local_e0;
  ulong local_a0;
  undefined *local_58;
  
  lVar4 = 0;
  local_f8 = param_1;
  FUN_1003c63e0();
  local_f0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  puVar10 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar27 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar21 = lVar27 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = (lVar21 - extraout_x12_02) - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_108 = lVar26 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar9 = param_3[1];
  local_e0 = param_3;
  if (0 < lVar9) {
    lVar12 = 0;
    local_100 = param_4;
    local_e8 = (lVar26 - extraout_x12_04) - extraout_x12_05;
    do {
      lVar24 = local_e8;
      lVar25 = lVar12 + 1;
      if (lVar25 < lVar9) {
        lVar22 = *param_3;
        lVar19 = *(long *)(local_f0 + 0x48);
        FUN_100082394(lVar22 + lVar19 * lVar25,local_e8,FUN_1003c63e0);
        lVar17 = local_108;
        FUN_100082394(lVar22 + lVar19 * lVar12,local_108,FUN_1003c63e0);
        lVar15 = (long)*(int *)(lVar4 + 0x14);
        uVar18 = lVar24 + lVar15;
        lVar20 = lVar17 + lVar15;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ();
        if ((uVar18 & 1) == 0) {
          local_a0 = lVar24 + lVar15;
          __s10Foundation4DateV1goiySbAC_ACtFZ(local_a0,lVar17 + lVar15);
          local_a0 = local_a0 & 0xffffffff;
        }
        else {
          __s10Foundation3URLV4pathSSvg();
          local_a0 = uVar18;
          lVar24 = lVar20;
          __s10Foundation3URLV4pathSSvg();
          if ((local_a0 == uVar18) && (lVar24 == lVar20)) {
            _swift_bridgeObjectRelease(lVar20);
            _swift_bridgeObjectRelease(lVar24);
            local_a0 = 0;
            lVar24 = local_e8;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            local_a0 = local_a0 & 0xffffffff;
            _swift_bridgeObjectRelease(lVar20);
            _swift_bridgeObjectRelease(lVar24);
            lVar24 = local_e8;
          }
        }
        FUN_1000d27dc(lVar17,FUN_1003c63e0);
        FUN_1000d27dc(lVar24,FUN_1003c63e0);
        lVar15 = lVar19 * (lVar12 + 2);
        lVar24 = lVar22 + lVar15;
        lVar22 = lVar22 + lVar19 * lVar25;
        lVar20 = lVar12 + 2;
        lVar17 = 0;
        lVar13 = lVar19 * lVar25;
        do {
          lVar16 = lVar13;
          lVar14 = lVar15;
          lVar23 = lVar17;
          lVar25 = lVar20;
          if (lVar9 <= lVar25) break;
          FUN_100082394(lVar24,lVar26,FUN_1003c63e0);
          FUN_100082394(lVar22,extraout_x13,FUN_1003c63e0);
          lVar17 = (long)*(int *)(lVar4 + 0x14);
          uVar18 = lVar26 + lVar17;
          lVar20 = extraout_x13 + lVar17;
          __s10Foundation4DateV2eeoiySbAC_ACtFZ();
          if ((uVar18 & 1) == 0) {
            lVar20 = lVar26 + lVar17;
            __s10Foundation4DateV1goiySbAC_ACtFZ(lVar20,extraout_x13 + lVar17);
            uVar3 = (uint)lVar20;
          }
          else {
            __s10Foundation3URLV4pathSSvg();
            uVar5 = uVar18;
            lVar17 = lVar20;
            __s10Foundation3URLV4pathSSvg();
            if ((uVar5 == uVar18) && (lVar17 == lVar20)) {
              _swift_bridgeObjectRelease(lVar20);
              _swift_bridgeObjectRelease(lVar17);
              uVar3 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              uVar3 = (uint)uVar5;
              _swift_bridgeObjectRelease(lVar20);
              _swift_bridgeObjectRelease(lVar17);
            }
          }
          FUN_1000d27dc(extraout_x13,FUN_1003c63e0);
          FUN_1000d27dc(lVar26,FUN_1003c63e0);
          lVar24 = lVar24 + lVar19;
          lVar22 = lVar22 + lVar19;
          lVar20 = lVar25 + 1;
          lVar17 = lVar23 + 1;
          lVar15 = lVar14 + lVar19;
          lVar13 = lVar16 + lVar19;
        } while ((((uint)local_a0 ^ uVar3) & 1) == 0);
        param_3 = local_e0;
        param_4 = local_100;
        if ((local_a0 & 1) != 0) {
          if (lVar25 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6c0);
            (*pcVar1)();
          }
          if (lVar12 < lVar25) {
            lVar9 = 0;
            lVar20 = *local_e0;
            lVar24 = lVar12 * lVar19;
            do {
              if (lVar12 + lVar9 != lVar12 + lVar23 + 1) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6e0);
                  (*pcVar1)();
                }
                uVar18 = lVar20 + lVar24;
                FUN_1000823d8(uVar18,puVar10,FUN_1003c63e0);
                if ((lVar24 < lVar16) || ((ulong)(lVar20 + lVar14) <= uVar18)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar18,lVar20 + lVar16,1,lVar4);
                }
                else if (lVar24 != lVar16) {
                  _swift_arrayInitWithTakeBackToFront(uVar18,lVar20 + lVar16,1,lVar4);
                }
                FUN_1000823d8(puVar10,lVar20 + lVar16,FUN_1003c63e0);
              }
              lVar23 = lVar23 + -1;
              lVar9 = lVar9 + 1;
              lVar16 = lVar16 - lVar19;
              lVar14 = lVar14 - lVar19;
              lVar24 = lVar24 + lVar19;
              param_3 = local_e0;
              param_4 = local_100;
            } while (lVar9 + lVar12 < lVar12 + lVar23 + 2);
          }
        }
      }
      lVar9 = param_3[1];
      lVar24 = lVar25;
      if (lVar25 < lVar9) {
        if (SBORROW8(lVar25,lVar12)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6bc);
          (*pcVar1)();
        }
        if (lVar25 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6c4);
            (*pcVar1)();
          }
          lVar20 = lVar12 + param_4;
          if (lVar9 <= lVar12 + param_4) {
            lVar20 = lVar9;
          }
          if (lVar20 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6c8);
            (*pcVar1)();
          }
          if (lVar25 != lVar20) {
            lVar23 = *param_3;
            lVar14 = *(long *)(local_f0 + 0x48);
            lVar22 = lVar23 + lVar14 * (lVar25 + -1);
            lVar9 = lVar12 - lVar25;
            lVar17 = lVar23 + lVar25 * lVar14;
            lVar15 = lVar22;
            lVar19 = lVar17;
            lVar13 = lVar9;
LAB_1003cf36c:
            do {
              FUN_100082394(lVar17,lVar21,FUN_1003c63e0);
              FUN_100082394(lVar22,lVar27,FUN_1003c63e0);
              lVar16 = (long)*(int *)(lVar4 + 0x14);
              uVar18 = lVar21 + lVar16;
              lVar24 = lVar27 + lVar16;
              __s10Foundation4DateV2eeoiySbAC_ACtFZ();
              if ((uVar18 & 1) == 0) {
                uVar5 = lVar21 + lVar16;
                __s10Foundation4DateV1goiySbAC_ACtFZ(uVar5,lVar27 + lVar16);
LAB_1003cf40c:
                FUN_1000d27dc(lVar27,FUN_1003c63e0);
                FUN_1000d27dc(lVar21,FUN_1003c63e0);
                if ((uVar5 & 1) != 0) {
                  if (lVar23 == 0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6cc);
                    (*pcVar1)();
                  }
                  FUN_1000823d8(lVar17,lVar11,FUN_1003c63e0);
                  _swift_arrayInitWithTakeFrontToBack(lVar17,lVar22,1,lVar4);
                  FUN_1000823d8(lVar11,lVar22,FUN_1003c63e0);
                  lVar22 = lVar22 + -lVar14;
                  lVar17 = lVar17 + -lVar14;
                  bVar2 = lVar9 != -1;
                  lVar9 = lVar9 + 1;
                  if (bVar2) goto LAB_1003cf36c;
                }
              }
              else {
                __s10Foundation3URLV4pathSSvg();
                uVar5 = uVar18;
                lVar16 = lVar24;
                __s10Foundation3URLV4pathSSvg();
                if ((uVar5 != uVar18) || (lVar16 != lVar24)) {
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            ();
                  _swift_bridgeObjectRelease(lVar24);
                  _swift_bridgeObjectRelease(lVar16);
                  goto LAB_1003cf40c;
                }
                _swift_bridgeObjectRelease(lVar24);
                _swift_bridgeObjectRelease(lVar16);
                FUN_1000d27dc(lVar27,FUN_1003c63e0);
                FUN_1000d27dc(lVar21,FUN_1003c63e0);
              }
              lVar25 = lVar25 + 1;
              lVar22 = lVar15 + lVar14;
              lVar9 = lVar13 + -1;
              lVar17 = lVar19 + lVar14;
              param_3 = local_e0;
              param_4 = local_100;
              lVar24 = lVar20;
              lVar15 = lVar22;
              lVar19 = lVar17;
              lVar13 = lVar9;
            } while (lVar25 != lVar20);
          }
        }
      }
      puVar8 = local_58;
      if (lVar24 < lVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6b0);
        (*pcVar1)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar18 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar18) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033870(puVar8,uVar18 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar18 + 1;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar8 + uVar18 * 0x10 + 0x28) = lVar24;
      local_58 = puVar8;
      if (*local_f8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6e4);
        (*pcVar1)();
      }
      FUN_1003cfb88(&local_58,*local_f8,param_3,FUN_1003c63e0,FUN_1003d03a4);
      puVar8 = local_58;
      if (unaff_x21 != 0) goto LAB_1003cf680;
      lVar9 = param_3[1];
      lVar12 = lVar24;
    } while (lVar24 < lVar9);
  }
  puVar8 = local_58;
  lVar4 = *local_f8;
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6ec);
    (*pcVar1)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10006f924();
  }
  uVar18 = *(ulong *)(puVar8 + 0x10);
  while (local_58 = puVar8, 1 < uVar18) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6e8);
      (*pcVar1)();
    }
    lVar26 = uVar18 - 1;
    lVar27 = *(long *)(puVar8 + uVar18 * 0x10);
    lVar11 = *(long *)(puVar8 + lVar26 * 0x10 + 0x28);
    lVar21 = *(long *)(local_f0 + 0x48);
    FUN_1003d03a4(lVar9 + lVar21 * lVar27,lVar9 + lVar21 * *(long *)(puVar8 + lVar26 * 0x10 + 0x20),
                  lVar9 + lVar21 * lVar11,lVar4);
    if (unaff_x21 != 0) break;
    if (lVar11 < lVar27) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6b4);
      (*pcVar1)();
    }
    puVar6 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar18 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cf6b8);
      (*pcVar1)();
    }
    *(long *)(puVar8 + uVar18 * 0x10) = lVar27;
    *(long *)((long)(puVar8 + uVar18 * 0x10) + 8) = lVar11;
    local_58 = puVar8;
    FUN_10005fd60(lVar26);
    puVar8 = local_58;
    param_3 = local_e0;
    uVar18 = *(ulong *)(local_58 + 0x10);
  }
LAB_1003cf680:
  _swift_bridgeObjectRelease(puVar8);
  return;
}

