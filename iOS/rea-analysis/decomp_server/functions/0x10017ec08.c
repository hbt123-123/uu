// rea decompile_all
// name: FUN_10017ec08
// address: 0x10017ec08
// body: available
// range: 0x10017ec08-0x10017f44f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10017f44c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10017ec08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ID IVar8;
  code *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long unaff_x20;
  long lVar17;
  ID self;
  code *pcVar18;
  long lVar19;
  byte *pbVar20;
  byte abStack_e0 [16];
  byte abStack_d0 [8];
  byte abStack_c8 [8];
  ulong uStack_c0;
  byte abStack_b8 [8];
  long local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = 0;
  local_90 = param_3;
  uStack_88 = param_4;
  __s10Foundation3URLVMa();
  local_80 = *(long *)(uVar2 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_80 + 0x40));
  lVar15 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar15 - extraout_x12;
  local_a0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = lVar15 - extraout_x12_00;
  local_a8 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = uVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_98 = uVar16 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = (uVar16 - extraout_x12_03) - extraout_x12_04;
  puVar3 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar15 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pbVar20 = (byte *)(lVar15 - extraout_x12_05);
  FUN_10017e5cc(pbVar20,param_1,param_2);
  pbVar4 = pbVar20;
  _swift_getEnumCaseMultiPayload(pbVar20,puVar3);
  if ((int)pbVar4 == 1) {
    pcVar11 = (char *)0x0;
    uVar16 = (ulong)*pbVar20;
    uVar14 = 1;
    goto LAB_10017f170;
  }
  pcVar18 = *(code **)(local_80 + 0x20);
  (*pcVar18)(lVar19,pbVar20,uVar2);
  FUN_10017f52c(lVar15,local_90,uStack_88);
  lVar5 = lVar15;
  _swift_getEnumCaseMultiPayload(lVar15,puVar3);
  lVar1 = local_98;
  if ((int)lVar5 == 1) {
    FUN_10017fce4(lVar15);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar10 = uStack_88;
    uVar14 = local_90;
    *(long *)(pbVar20 + -0x20) = lVar19;
    *(undefined8 *)(pbVar20 + -0x18) = uVar14;
    *(undefined8 *)(pbVar20 + -0x10) = uVar10;
    FUN_1003fb4ec(FUN_10017fd2c,pbVar20 + -0x30,0xd0000000000000b1,0x8000000100896e70,
                  0xd000000000000015,0x8000000100896f30,0x71,0);
    (**(code **)(local_80 + 8))(lVar19,uVar2);
  }
  else {
    (*pcVar18)(local_98,lVar15,uVar2);
    __s10Foundation3URLV25deletingLastPathComponentACyF(uVar16);
    __s10Foundation3URLV016standardizedFileB0ACvg(lVar17);
    pcVar18 = *(code **)(local_80 + 8);
    uVar7 = uVar2;
    (*pcVar18)();
    __s10Foundation3URLV4pathSSvg();
    (*pcVar18)(lVar17,uVar2);
    uVar6 = local_a8;
    __s10Foundation3URLV25deletingLastPathComponentACyF(local_a8);
    lVar15 = local_a0;
    __s10Foundation3URLV016standardizedFileB0ACvg(local_a0);
    uVar12 = uVar2;
    (*pcVar18)();
    __s10Foundation3URLV4pathSSvg();
    uVar13 = uVar2;
    (*pcVar18)(lVar15);
    if ((uVar16 == uVar6) && (uVar7 == uVar12)) {
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease();
LAB_10017efa8:
      __s10Foundation3URLV4pathSSvg();
      uVar16 = uVar7;
      uVar6 = uVar13;
      __s10Foundation3URLV4pathSSvg();
      if ((uVar7 == uVar16) && (uVar13 == uVar6)) {
        _swift_bridgeObjectRelease(uVar13);
        _swift_bridgeObjectRelease(uVar6);
      }
      else {
        uVar12 = uVar13;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,uVar13,uVar16,uVar6,0);
        _swift_bridgeObjectRelease(uVar13);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar7 & 1) == 0) {
          self = *(ID *)(unaff_x20 + 0x10);
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(uVar12);
          pcVar11 = "fileExistsAtPath:";
          IVar8 = _objc_msgSend(self,"fileExistsAtPath:",uVar6);
          lVar15 = local_b0;
          uVar14 = 0;
          if ((IVar8 & 1) == 0) {
            __s10Foundation3URLV25deletingLastPathComponentACyF(local_b0,0);
            __s10Foundation3URLV4pathSSvg();
            (*pcVar18)(lVar15,uVar2);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,pcVar11);
            _swift_bridgeObjectRelease(pcVar11);
            IVar8 = _objc_msgSend(self,"isWritableFileAtPath:",uVar14);
            uVar14 = 0;
            if ((int)IVar8 == 0) {
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              *(long *)(pbVar20 + -0x10) = lVar19;
              FUN_1003fb4ec(FUN_10017fd40,pbVar20 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                            0xd000000000000015,0x8000000100896f30,0x7e,0);
              (*pcVar18)(lVar1,uVar2);
              (*pcVar18)(lVar19,uVar2);
              pcVar11 = (char *)0x0;
              uVar14 = 1;
              uVar16 = 5;
            }
            else {
              __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
              uVar10 = uVar14;
              __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
              local_70 = 0;
              pcVar11 = "moveItemAtURL:toURL:error:";
              IVar8 = _objc_msgSend(self,"moveItemAtURL:toURL:error:",uVar14,uVar10,&local_70);
              lVar15 = local_b0;
              if ((int)IVar8 == 0) {
                uVar6 = local_70;
                __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                _swift_willThrow(0);
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(long *)(pbVar20 + -0x20) = lVar19;
                *(long *)(pbVar20 + -0x18) = lVar1;
                *(ulong *)(pbVar20 + -0x10) = uVar6;
                FUN_1003fb4ec(FUN_10017fd48,pbVar20 + -0x30,0xd0000000000000b1,0x8000000100896e70,
                              0xd000000000000015,0x8000000100896f30,0x86,0);
                uVar16 = uVar6;
                FUN_1001801a0(uVar6);
                _swift_errorRelease(uVar6);
                uVar16 = uVar16 & 0xff;
                (*pcVar18)(lVar1,uVar2);
                (*pcVar18)(lVar19,uVar2);
                pcVar11 = (char *)0x0;
                uVar14 = 1;
              }
              else {
                uVar16 = local_70;
                __s10Foundation3URLV016standardizedFileB0ACvg(local_b0,local_70);
                __s10Foundation3URLV4pathSSvg();
                (*pcVar18)(lVar15,uVar2);
                (*pcVar18)(lVar1,uVar2);
                (*pcVar18)(lVar19,uVar2);
                uVar14 = 0;
              }
            }
            goto LAB_10017f170;
          }
        }
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(pbVar20 + -0x10) = lVar19;
      *(long *)(pbVar20 + -8) = lVar1;
      pcVar9 = FUN_10018036c;
      uVar14 = 0x7a;
    }
    else {
      uVar13 = uVar7;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar16,uVar7,uVar6,uVar12,0);
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease();
      if ((uVar16 & 1) != 0) goto LAB_10017efa8;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(pbVar20 + -0x10) = lVar19;
      *(long *)(pbVar20 + -8) = lVar1;
      pcVar9 = FUN_10017fd38;
      uVar14 = 0x75;
    }
    FUN_1003fb4ec(pcVar9,pbVar20 + -0x20,0xd0000000000000b1,0x8000000100896e70,0xd000000000000015,
                  0x8000000100896f30,uVar14,0);
    (*pcVar18)(lVar1,uVar2);
    (*pcVar18)(lVar19,uVar2);
  }
  pcVar11 = (char *)0x0;
  uVar14 = 1;
  uVar16 = 4;
LAB_10017f170:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar16,pcVar11,uVar14);
}

