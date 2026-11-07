// rea decompile_all
// name: FUN_10019151c
// address: 0x10019151c
// body: available
// range: 0x10019151c-0x100191733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100191730 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10019151c(void)

{
  undefined *puVar1;
  int iVar2;
  ID self;
  ID IVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  iVar2 = (int)local_70;
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar7 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = self;
  _NSHomeDirectory();
  if (IVar3 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar7);
  }
  local_60 = 0;
  IVar3 = NSFileManager::attributesOfFileSystemForPath_error_
                    (self,"attributesOfFileSystemForPath:error:",IVar3,&local_60);
  if (IVar3 == 0) {
    uVar6 = local_60;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_60);
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
  }
  else {
    uVar4 = 0;
    FUN_100006050();
    puVar5 = &DAT_100a752f0;
    FUN_100005c90(&DAT_100a752f0,FUN_100006050,&TargetProtocolConformanceDescriptor_1008511b8);
    puVar1 = PTR___sypN_100995e88;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (IVar3,uVar4,PTR___sypN_100995e88 + 8,puVar5);
    if (*(long *)(IVar3 + 0x10) == 0) {
LAB_1001916a8:
      uStack_58 = 0;
      local_60 = 0;
      local_48 = 0;
      uStack_50 = 0;
    }
    else {
      lVar8 = *(long *)PTR__NSFileSystemFreeSize_1009952d0;
      _swift_bridgeObjectRetain(IVar3);
      thunk_FUN_1001a2e90(lVar8);
      if ((uVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(IVar3);
        goto LAB_1001916a8;
      }
      FUN_10003e8bc(*(long *)(IVar3 + 0x38) + lVar8 * 0x20,&local_60);
      _swift_bridgeObjectRelease(IVar3);
    }
    _swift_bridgeObjectRelease(IVar3);
    if (local_48 == 0) {
      FUN_100040bb4(&local_60,&DAT_100a766e0,&DAT_10080bdb0);
    }
    else {
      _swift_dynamicCast(local_70,&local_60,puVar1 + 8,PTR___ss6UInt64VN_100995e10,6);
      if (iVar2 != 0) goto LAB_100191704;
    }
  }
  local_70[0] = 0;
LAB_100191704:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70[0]);
  }
  return;
}

