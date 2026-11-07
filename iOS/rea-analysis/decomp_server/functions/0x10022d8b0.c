// rea decompile_all
// name: FUN_10022d8b0
// address: 0x10022d8b0
// body: available
// range: 0x10022d8b0-0x10022dbd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10022dbd0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10022d8b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  char *pcVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_90,0,0);
  lVar1 = DAT_100b36340;
  lVar3 = FCountAppConfig::uploadTimeInterval;
  _swift_beginAccess(DAT_100b36340 + FCountAppConfig::uploadTimeInterval,auStack_a8,0,0);
  uVar9 = *(undefined8 *)(lVar1 + lVar3);
  if (DAT_100a7ddf8 != -1) {
    _swift_once(&DAT_100a7ddf8,FUN_10022c3f4);
  }
  _swift_retain();
  FUN_100230d34();
  _swift_release();
  if (DAT_100a7de08 != -1) {
    _swift_once(&DAT_100a7de08,FUN_10022edc8);
  }
  lVar3 = lVar2;
  FUN_10021bec0(lVar2,&DAT_100a7f040);
  (**(code **)(lVar8 + 0x10))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3,lVar2);
  pcVar7 = "defaultManager";
  IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar5 = IVar4;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar7);
  IVar5 = NSFileManager::fileExistsAtPath_(IVar4,"fileExistsAtPath:",IVar5);
  if ((IVar5 & 1) == 0) {
    IVar4 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar5 = IVar4;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    local_b0 = 0;
    IVar5 = NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                      (IVar4,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                       IVar5,1,0,&local_b0);
    if ((int)IVar5 == 0) {
      uVar6 = local_b0;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_b0);
      _swift_willThrow(0);
      _swift_errorRelease(uVar6);
    }
  }
  IVar5 = NSTimer::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                    ((ID)&_OBJC_CLASS___NSTimer,
                     "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:",uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  *(ID *)(unaff_x20 + 0x18) = IVar5;
  FUN_10022dbd4(uVar9,0);
  (**(code **)(lVar8 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

