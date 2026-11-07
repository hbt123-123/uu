// rea decompile_all
// name: FUN_10009acd0
// address: 0x10009acd0
// body: available
// range: 0x10009acd0-0x10009b4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009b4d0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009acd0(long param_1,ID param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  long extraout_x8;
  long lVar17;
  long lVar18;
  long extraout_x8_00;
  ulong *puVar19;
  long extraout_x8_01;
  ulong uVar20;
  long lVar21;
  long extraout_x12;
  undefined8 extraout_x13;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auStack_150 [16];
  long alStack_140 [4];
  ulong local_120;
  char *local_118;
  char *local_110;
  ID local_f0;
  ID local_a8;
  undefined *local_90;
  undefined *puStack_88;
  ID local_80;
  char *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar23 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar23 + 0x40));
  lVar17 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a766f8;
  FUN_100004bb4(&DAT_100a766f8,&DAT_10080b1f8);
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = (ulong *)(lVar17 - extraout_x8_00);
  puVar6 = &DAT_100a76700;
  FUN_100004bb4(&DAT_100a76700,&DAT_10080b200);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar22 = (long)puVar19 + (-extraout_x12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar22 + -0x10) = param_4;
    *(ulong *)(lVar22 + -8) = param_5;
    FUN_1003fb48c(FUN_1000a0000,lVar22 + -0x20,0xd000000000000093,0x800000010087fc10,
                  0xd000000000000020,0x8000000100880450,0x12e,0);
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    uVar14 = param_4;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
    pcVar13 = "stringByAppendingPathComponent:";
    IVar7 = _objc_msgSend(param_2,"stringByAppendingPathComponent:",uVar14);
    local_f0 = IVar7;
    local_a8 = IVar7;
    if (IVar7 == 0) {
      IVar7 = 0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
      pcVar15 = pcVar13;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar13);
      local_a8 = 0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      pcVar13 = pcVar15;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar15);
      local_f0 = 0;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar13);
    }
    IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    local_80 = 0;
    IVar7 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (IVar8,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                       IVar7,1,0,&local_80);
    if ((int)IVar7 == 0) {
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
      _swift_willThrow(0);
    }
    else {
      local_120 = param_5;
      IVar7 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      local_118 = "rver11LogUploader";
      local_110 = " log_registry not found at ";
      uVar24 = 0;
      while( true ) {
        if (uVar24 == uVar20) {
          uVar14 = 1;
          uVar25 = uVar20;
        }
        else {
          if (uVar20 <= uVar24) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009b4cc);
            (*pcVar3)();
          }
          uVar25 = uVar24 + 1;
          if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10009b4d0);
            (*pcVar3)();
          }
          bVar1 = *(byte *)(lVar23 + 0x50);
          lVar21 = *(long *)(lVar23 + 0x48);
          iVar2 = *(int *)(puVar5 + 0x30);
          *puVar19 = uVar24;
          (**(code **)(lVar23 + 0x10))
                    ((long)puVar19 + (long)iVar2,
                     param_1 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                     lVar21 * uVar24,lVar4);
          FUN_1000a00a8(puVar19,extraout_x13,&DAT_100a766f8,&DAT_10080b1f8);
          uVar14 = 0;
        }
        (**(code **)(lVar18 + 0x38))(extraout_x13,uVar14,1,puVar5);
        FUN_1000a00a8(extraout_x13,lVar22,&DAT_100a76700,&DAT_10080b200);
        lVar21 = lVar22;
        (**(code **)(lVar18 + 0x30))(lVar22,1,puVar5);
        if ((int)lVar21 == 1) break;
        lVar21 = lVar22 + *(int *)(puVar5 + 0x30);
        lVar9 = lVar17;
        (**(code **)(lVar23 + 0x20))(lVar17,lVar21,lVar4);
        __s10Foundation3URLV17lastPathComponentSSvg();
        lVar10 = lVar9;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        pcVar15 = "stringByAppendingPathComponent:";
        IVar11 = _objc_msgSend(local_a8,"stringByAppendingPathComponent:",lVar10);
        pcVar13 = pcVar15;
        IVar8 = IVar11;
        if (IVar11 == 0) {
          IVar8 = 0;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
          pcVar13 = pcVar15;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(pcVar15);
        }
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        pcVar15 = "fileExistsAtPath:";
        local_80 = IVar11;
        local_78 = pcVar13;
        IVar8 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",IVar8);
        pcVar16 = pcVar13;
        if ((int)IVar8 != 0) {
          puVar6 = PTR___sSiN_100995968;
          puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
          __ss23CustomStringConvertibleP11descriptionSSvgTj();
          local_90 = puVar6;
          puStack_88 = puVar12;
          __sSS6appendyySSF(0x5f,0xe100000000000000);
          __sSS6appendyySSF(lVar9,lVar21);
          puVar6 = puStack_88;
          puVar12 = local_90;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_90,puStack_88);
          _swift_bridgeObjectRelease(puVar6);
          pcVar16 = "stringByAppendingPathComponent:";
          IVar11 = _objc_msgSend(local_f0,"stringByAppendingPathComponent:",puVar12);
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          pcVar15 = pcVar16;
          _swift_bridgeObjectRelease(pcVar13);
          local_80 = IVar11;
          local_78 = pcVar16;
        }
        uVar14 = 0;
        __s10Foundation3URLV4pathSSvg(0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar15);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar11,pcVar16);
        local_90 = (undefined *)0x0;
        IVar8 = NSFileManager::copyItemAtPath_toPath_error_
                          (IVar7,"copyItemAtPath:toPath:error:",uVar14,IVar11,&local_90);
        if ((int)IVar8 == 0) {
          puVar6 = local_90;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _swift_willThrow(0);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(lVar22 + -0x20) = lVar9;
          *(long *)(lVar22 + -0x18) = lVar21;
          *(ID **)(lVar22 + -0x10) = &local_80;
          *(undefined **)(lVar22 + -8) = puVar6;
          FUN_1003fb4ec(FUN_10009fff4,lVar22 + -0x30,0xd000000000000093,
                        (ulong)local_118 | 0x8000000000000000,0xd000000000000020,
                        (ulong)local_110 | 0x8000000000000000,0x13d,0);
          _swift_errorRelease(puVar6);
          _swift_bridgeObjectRelease(lVar21);
          (**(code **)(lVar23 + 8))(lVar17,lVar4);
        }
        else {
          (**(code **)(lVar23 + 8))(lVar17,lVar4);
          _swift_bridgeObjectRelease(lVar21);
        }
        _swift_bridgeObjectRelease(local_78);
        uVar24 = uVar25;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar22 + -0x20) = param_1;
      *(undefined8 *)(lVar22 + -0x18) = param_4;
      *(ulong *)(lVar22 + -0x10) = local_120;
      FUN_1003fb48c(FUN_10009ffe8,lVar22 + -0x30,0xd000000000000093,
                    (ulong)local_118 | 0x8000000000000000,0xd000000000000020,
                    (ulong)local_110 | 0x8000000000000000,0x140,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

