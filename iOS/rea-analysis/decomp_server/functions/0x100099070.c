// rea decompile_all
// name: FUN_100099070
// address: 0x100099070
// body: available
// range: 0x100099070-0x100099abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100099070(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x13;
  undefined8 extraout_x14;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  code *pcVar30;
  ulong uVar31;
  long lVar32;
  ulong local_78;
  ulong local_70 [2];
  ulong local_58;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar13 = &stack0xfffffffffffffed0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar14 = (long)puVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = uVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar10 = lVar15 - extraout_x12_01;
  puVar5 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar23 = uVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar23 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar27 = lVar16 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar27 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = lVar17 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = lVar18 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = lVar19 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar29 = lVar20 - extraout_x12_08;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar21 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar22 = lVar21 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100995498)();
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar32 = (lVar22 - extraout_x12_10) - extraout_x12_11;
  lVar11 = *(long *)(extraout_x13 + 0x48);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100099ab4);
    (*pcVar12)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100099ab8);
    (*pcVar12)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100099abc);
    (*pcVar12)();
  }
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = (long)(param_2 - param_1) / lVar11;
  }
  lVar3 = 0;
  if (lVar11 != 0) {
    lVar3 = (long)(param_3 - param_2) / lVar11;
  }
  local_70[0] = param_4;
  local_58 = param_1;
  if (lVar2 < lVar3) {
    lVar16 = lVar2 * lVar11;
    if ((param_4 < param_1) || (param_1 + lVar16 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar2,lVar6);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar2,lVar6);
    }
    uVar14 = param_4 + lVar16;
    local_78 = uVar14;
    uVar7 = local_58;
    if (0 < lVar16 && param_2 < param_3) {
      pcVar12 = *(code **)(extraout_x13 + 0x10);
      do {
        (*pcVar12)(lVar32,param_2,lVar6);
        (*pcVar12)(extraout_x14,param_4,lVar6);
        FUN_100401b14(0);
        FUN_100095700(lVar29,lVar32);
        FUN_100095700(lVar20,extraout_x14);
        FUN_10007f314(lVar29,lVar19,&DAT_100a76718,&DAT_10080ccc0);
        pcVar30 = *(code **)(lVar9 + 0x30);
        lVar16 = lVar19;
        (*pcVar30)(lVar19,1,lVar4);
        lVar17 = lVar19;
        if ((int)lVar16 == 1) {
LAB_100099538:
          FUN_100040bb4(lVar20,&DAT_100a76718,&DAT_10080ccc0);
          FUN_100040bb4(lVar29,&DAT_100a76718,&DAT_10080ccc0);
          FUN_100040bb4(lVar17,&DAT_100a76718,&DAT_10080ccc0);
          pcVar30 = *(code **)(extraout_x13 + 8);
          (*pcVar30)(extraout_x14,lVar6);
          (*pcVar30)(lVar32,lVar6);
LAB_100099590:
          uVar25 = param_4 + lVar11;
          uVar31 = param_2;
          uVar7 = uVar25;
          if ((param_1 < param_4) || (uVar25 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,lVar6);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,lVar6);
          }
        }
        else {
          pcVar24 = *(code **)(lVar9 + 0x20);
          (*pcVar24)(uVar10,lVar19,lVar4);
          FUN_10007f314(lVar20,lVar18,&DAT_100a76718,&DAT_10080ccc0);
          lVar16 = lVar18;
          (*pcVar30)(lVar18,1,lVar4);
          if ((int)lVar16 == 1) {
            (**(code **)(lVar9 + 8))(uVar10,lVar4);
            lVar17 = lVar18;
            goto LAB_100099538;
          }
          (*pcVar24)(lVar15,lVar18,lVar4);
          uVar7 = uVar10;
          __s10Foundation4DateV1goiySbAC_ACtFZ(uVar10,lVar15);
          pcVar30 = *(code **)(lVar9 + 8);
          (*pcVar30)(lVar15,lVar4);
          (*pcVar30)(uVar10,lVar4);
          FUN_100040bb4(lVar20,&DAT_100a76718,&DAT_10080ccc0);
          FUN_100040bb4(lVar29,&DAT_100a76718,&DAT_10080ccc0);
          pcVar30 = *(code **)(extraout_x13 + 8);
          (*pcVar30)(extraout_x14,lVar6);
          (*pcVar30)(lVar32,lVar6);
          if ((uVar7 & 1) == 0) goto LAB_100099590;
          uVar31 = param_2 + lVar11;
          uVar25 = param_4;
          if ((param_1 < param_2) || (uVar31 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,lVar6);
            uVar7 = local_70[0];
          }
          else {
            uVar7 = local_70[0];
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,lVar6);
              uVar7 = local_70[0];
            }
          }
        }
        local_70[0] = uVar7;
        param_1 = param_1 + lVar11;
        uVar7 = param_1;
      } while ((uVar25 < uVar14) &&
              (param_4 = uVar25, param_2 = uVar31, uVar7 = param_1, local_58 = param_1,
              uVar31 < param_3));
    }
  }
  else {
    lVar15 = lVar3 * lVar11;
    if ((param_4 < param_2) || (param_2 + lVar15 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar3,lVar6);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar3,lVar6);
    }
    uVar10 = param_4 + lVar15;
    local_78 = uVar10;
    uVar7 = param_2;
    if (0 < lVar15) {
      lVar11 = -lVar11;
      uVar25 = uVar10;
LAB_100099740:
      uVar31 = param_2 + lVar11;
      uVar26 = uVar25;
      uVar28 = param_3;
      do {
        local_78 = uVar25;
        uVar7 = param_2;
        if (param_2 <= param_1) break;
        uVar1 = uVar10 + lVar11;
        pcVar12 = *(code **)(extraout_x13 + 0x10);
        (*pcVar12)(lVar22,uVar1,lVar6);
        (*pcVar12)(lVar21,uVar31,lVar6);
        FUN_100401b14(0);
        FUN_100095700(lVar17,lVar22);
        FUN_100095700(lVar27,lVar21);
        FUN_10007f314(lVar17,lVar16,&DAT_100a76718,&DAT_10080ccc0);
        pcVar12 = *(code **)(lVar9 + 0x30);
        lVar15 = lVar16;
        (*pcVar12)(lVar16,1,lVar4);
        if ((int)lVar15 == 1) {
          FUN_100040bb4(lVar27,&DAT_100a76718,&DAT_10080ccc0);
          lVar15 = lVar16;
LAB_1000998f4:
          uVar8 = 0;
          lVar18 = lVar17;
        }
        else {
          pcVar30 = *(code **)(lVar9 + 0x20);
          (*pcVar30)(uVar14,lVar16,lVar4);
          FUN_10007f314(lVar27,lVar23,&DAT_100a76718,&DAT_10080ccc0);
          lVar15 = lVar23;
          (*pcVar12)(lVar23,1,lVar4);
          if ((int)lVar15 == 1) {
            (**(code **)(lVar9 + 8))(uVar14,lVar4);
            FUN_100040bb4(lVar27,&DAT_100a76718,&DAT_10080ccc0);
            lVar15 = lVar23;
            goto LAB_1000998f4;
          }
          (*pcVar30)(puVar13,lVar23,lVar4);
          uVar8 = uVar14;
          __s10Foundation4DateV1goiySbAC_ACtFZ(uVar14,puVar13);
          pcVar12 = *(code **)(lVar9 + 8);
          (*pcVar12)(puVar13,lVar4);
          (*pcVar12)(uVar14,lVar4);
          lVar18 = lVar27;
          lVar15 = lVar17;
        }
        FUN_100040bb4(lVar18,&DAT_100a76718,&DAT_10080ccc0);
        FUN_100040bb4(lVar15,&DAT_100a76718,&DAT_10080ccc0);
        param_3 = uVar28 + lVar11;
        pcVar12 = *(code **)(extraout_x13 + 8);
        (*pcVar12)(lVar21,lVar6);
        (*pcVar12)(lVar22,lVar6);
        if ((uVar8 & 1) != 0) goto LAB_1000999e8;
        if ((uVar28 < uVar10) || (uVar10 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,lVar6);
        }
        else if (uVar28 != uVar10) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,lVar6);
        }
        uVar10 = uVar1;
        uVar26 = uVar1;
        uVar28 = param_3;
        local_78 = uVar1;
        if (uVar1 <= param_4) break;
      } while( true );
    }
  }
LAB_100099a6c:
  local_58 = uVar7;
  FUN_100099ac8(&local_58,local_70,&local_78,PTR___s10Foundation3URLVMa_100996188);
  return 1;
LAB_1000999e8:
  if ((uVar28 < param_2) || (param_2 <= param_3)) {
    _swift_arrayInitWithTakeFrontToBack(param_3,uVar31,1,lVar6);
  }
  else if (uVar28 != param_2) {
    _swift_arrayInitWithTakeBackToFront(param_3,uVar31,1,lVar6);
  }
  uVar25 = uVar26;
  param_2 = uVar31;
  local_78 = uVar26;
  uVar7 = uVar31;
  if (uVar10 <= param_4) goto LAB_100099a6c;
  goto LAB_100099740;
}

