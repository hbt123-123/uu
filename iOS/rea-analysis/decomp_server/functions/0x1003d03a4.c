// rea decompile_all
// name: FUN_1003d03a4
// address: 0x1003d03a4
// body: available
// range: 0x1003d03a4-0x1003d09f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003d03a4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong local_c0;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  lVar5 = 0;
  FUN_1003c63e0();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar12 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar16 - extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar11 - extraout_x13_01;
  lVar9 = *(long *)(extraout_x12 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d09ec);
    (*pcVar4)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d09f0);
    (*pcVar4)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003d09f4);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar9;
  }
  lVar3 = 0;
  if (lVar9 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar9;
  }
  local_68 = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar12 = lVar2 * lVar9;
    if ((param_4 < param_1) || (param_1 + lVar12 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar5);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar5);
    }
    uVar10 = param_4 + lVar12;
    local_70 = uVar10;
    uVar6 = local_58;
    if (0 < lVar12 && param_2 < param_3) {
      do {
        FUN_100082394(param_2,lVar14,FUN_1003c63e0);
        FUN_100082394(param_4,lVar11,FUN_1003c63e0);
        lVar16 = (long)*(int *)(lVar5 + 0x14);
        uVar6 = lVar14 + lVar16;
        lVar12 = lVar11 + lVar16;
        __s10Foundation4DateV2eeoiySbAC_ACtFZ();
        if ((uVar6 & 1) == 0) {
          uVar7 = lVar14 + lVar16;
          __s10Foundation4DateV1goiySbAC_ACtFZ(uVar7,lVar11 + lVar16);
LAB_1003d0658:
          FUN_1000d27dc(lVar11,FUN_1003c63e0);
          FUN_1000d27dc(lVar14,FUN_1003c63e0);
          if ((uVar7 & 1) == 0) goto LAB_1003d06ac;
          uVar7 = param_2 + lVar9;
          uVar17 = param_4;
          if ((param_1 < param_2) || (uVar7 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar5);
            uVar6 = local_68;
          }
          else {
            uVar6 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar5);
              uVar6 = local_68;
            }
          }
        }
        else {
          __s10Foundation3URLV4pathSSvg();
          uVar7 = uVar6;
          lVar16 = lVar12;
          __s10Foundation3URLV4pathSSvg();
          if ((uVar7 != uVar6) || (lVar16 != lVar12)) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease(lVar12);
            _swift_bridgeObjectRelease(lVar16);
            goto LAB_1003d0658;
          }
          _swift_bridgeObjectRelease(lVar12);
          _swift_bridgeObjectRelease(lVar16);
          FUN_1000d27dc(lVar11,FUN_1003c63e0);
          FUN_1000d27dc(lVar14,FUN_1003c63e0);
LAB_1003d06ac:
          uVar17 = param_4 + lVar9;
          uVar7 = param_2;
          uVar6 = uVar17;
          if ((param_1 < param_4) || (uVar17 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar5);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar5);
          }
        }
        local_68 = uVar6;
        param_1 = param_1 + lVar9;
        uVar6 = param_1;
      } while ((uVar17 < uVar10) &&
              (param_4 = uVar17, param_2 = uVar7, uVar6 = param_1, local_58 = param_1,
              uVar7 < param_3));
    }
  }
  else {
    lVar11 = lVar3 * lVar9;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar5);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar5);
    }
    uVar10 = param_4 + lVar11;
    local_70 = uVar10;
    uVar6 = param_2;
    if (0 < lVar11) {
      lVar9 = -lVar9;
      uVar7 = uVar10;
      do {
        uVar17 = param_2 + lVar9;
        uVar13 = param_3;
        local_c0 = uVar10;
        while( true ) {
          uVar6 = param_2;
          if (param_2 <= param_1) {
            local_70 = local_c0;
            goto LAB_1003d09b0;
          }
          uVar1 = uVar7 + lVar9;
          FUN_100082394(uVar1,lVar16,FUN_1003c63e0);
          FUN_100082394(uVar17,lVar12,FUN_1003c63e0);
          lVar14 = (long)*(int *)(lVar5 + 0x14);
          uVar8 = lVar16 + lVar14;
          lVar11 = lVar12 + lVar14;
          __s10Foundation4DateV2eeoiySbAC_ACtFZ();
          if ((uVar8 & 1) == 0) {
            uVar15 = lVar16 + lVar14;
            __s10Foundation4DateV1goiySbAC_ACtFZ(uVar15,lVar12 + lVar14);
          }
          else {
            __s10Foundation3URLV4pathSSvg();
            uVar15 = uVar8;
            lVar14 = lVar11;
            __s10Foundation3URLV4pathSSvg();
            if ((uVar15 == uVar8) && (lVar14 == lVar11)) {
              _swift_bridgeObjectRelease(lVar11);
              _swift_bridgeObjectRelease(lVar14);
              uVar15 = 0;
            }
            else {
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(lVar11);
              _swift_bridgeObjectRelease(lVar14);
            }
          }
          param_3 = uVar13 + lVar9;
          FUN_1000d27dc(lVar12,FUN_1003c63e0);
          FUN_1000d27dc(lVar16,FUN_1003c63e0);
          if ((uVar15 & 1) != 0) break;
          if ((uVar13 < uVar7) || (uVar7 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar5);
          }
          else if (uVar13 != uVar7) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar5);
          }
          uVar10 = uVar1;
          uVar13 = param_3;
          uVar7 = uVar1;
          local_70 = uVar1;
          if (uVar1 <= param_4) goto LAB_1003d09b0;
        }
        if ((uVar13 < param_2) || (param_2 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar17,1,lVar5);
        }
        else if (uVar13 != param_2) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar17,1,lVar5);
        }
        param_2 = uVar17;
        local_70 = uVar10;
        uVar6 = uVar17;
      } while (param_4 < uVar7);
    }
  }
LAB_1003d09b0:
  local_58 = uVar6;
  FUN_10040019c(&local_58,&local_68,&local_70);
  return 1;
}

