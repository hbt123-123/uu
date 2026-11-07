// rea decompile_all
// name: FUN_1003fc044
// address: 0x1003fc044
// body: available
// range: 0x1003fc044-0x1003fc353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003fc350 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16]
FUN_1003fc044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined8 local_90;
  ID local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  local_90 = param_3;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar6 - extraout_x12;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  if (DAT_100a89288 != -1) {
    _swift_once(&DAT_100a89288,FUN_1003b1eec);
  }
  lVar3 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36820);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar6,param_1,param_2,lVar3);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar8,0x7265532f73676f4c,0xeb00000000726576);
  pcVar10 = *(code **)(lVar9 + 8);
  lVar9 = lVar6;
  lVar7 = lVar1;
  (*pcVar10)(lVar6,lVar1);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar10)(lVar8,lVar1);
  lVar3 = lVar9;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar9,lVar7);
  local_88 = IVar2;
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",lVar3);
  if ((IVar2 & 1) == 0) {
    lVar3 = lVar9;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar9,lVar7);
    local_80 = 0;
    IVar2 = _objc_msgSend(local_88,
                          "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                          lVar3,1,0,&local_80);
    if ((int)IVar2 == 0) {
      uVar4 = local_80;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
      _swift_willThrow(0);
      _swift_errorRelease(uVar4);
    }
  }
  uVar4 = local_90;
  uVar5 = 0;
  __sSS9hasSuffixySbSSF(0x676f6c2e,0xe400000000000000,local_90,param_4);
  if ((uVar5 & 1) == 0) {
    local_80 = uVar4;
    uStack_78 = param_4;
    _swift_bridgeObjectRetain(param_4);
    __sSS6appendyySSF(0x676f6c2e,0xe400000000000000);
    uVar4 = local_80;
    param_4 = uStack_78;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
  }
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar6,lVar9,lVar7);
  _swift_bridgeObjectRelease(lVar7);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar8,uVar4,param_4);
  _swift_bridgeObjectRelease(param_4);
  lVar9 = lVar1;
  (*pcVar10)(lVar6,lVar1);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar10)(lVar8,lVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar11._8_8_ = lVar9;
  auVar11._0_8_ = lVar6;
  return auVar11;
}

