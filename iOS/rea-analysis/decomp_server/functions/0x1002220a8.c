// rea decompile_all
// name: FUN_1002220a8
// address: 0x1002220a8
// body: available
// range: 0x1002220a8-0x1002222df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002222dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002220a8(void)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  uVar6 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar7 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = self;
  _NSHomeDirectory();
  if (IVar2 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar7);
  }
  local_60 = 0;
  IVar2 = NSFileManager::attributesOfFileSystemForPath_error_
                    (self,"attributesOfFileSystemForPath:error:",IVar2,&local_60);
  if (IVar2 == 0) {
    uVar5 = local_60;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_60);
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
    goto LAB_1002222b0;
  }
  uVar3 = 0;
  FUN_10021c308();
  puVar4 = &DAT_100a7e0c0;
  FUN_100005c90(&DAT_100a7e0c0,FUN_10021c308,&TargetProtocolConformanceDescriptor_100813228);
  puVar1 = PTR___sypN_100995e88;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (IVar2,uVar3,PTR___sypN_100995e88 + 8,puVar4);
  if (*(long *)(IVar2 + 0x10) == 0) {
LAB_100222234:
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
  }
  else {
    lVar8 = *(long *)PTR__NSFileSystemSize_1009952d8;
    _swift_bridgeObjectRetain(IVar2);
    FUN_100234398(lVar8);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar2);
      goto LAB_100222234;
    }
    FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar8 * 0x20,&local_60);
    _swift_bridgeObjectRelease(IVar2);
  }
  _swift_bridgeObjectRelease(IVar2);
  if (local_48 == 0) {
    FUN_100040bb4(&local_60,&DAT_100a7e460,&DAT_1008134b8);
  }
  else {
    _swift_dynamicCast(local_70,&local_60,puVar1 + 8,PTR___ss5Int64VN_100995cc0,6);
    if ((uVar6 & 1) != 0) {
      local_60 = local_70[0];
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
    }
  }
LAB_1002222b0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

