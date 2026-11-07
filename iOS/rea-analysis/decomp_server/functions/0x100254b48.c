// rea decompile_all
// name: FUN_100254b48
// address: 0x100254b48
// body: available
// range: 0x100254b48-0x100254d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100254c84 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100254cb4 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100254d14 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100254b48(ID param_1,undefined8 param_2)

{
  ulong uVar1;
  ID IVar2;
  ID self;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100254688();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
  pcVar4 = "stringByDeletingLastPathComponent";
  uVar1 = _objc_msgSend(param_1,"stringByDeletingLastPathComponent");
  pcVar5 = pcVar4;
  IVar2 = uVar1;
  if (uVar1 == 0) {
    IVar2 = 0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(0);
    pcVar5 = pcVar4;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar4);
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _swift_bridgeObjectRelease(pcVar5);
  uVar1 = uVar1 & 0xffffffffffff;
  if (((ulong)pcVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pcVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
      return 0;
    }
  }
  else {
    self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    local_40 = 0;
    IVar2 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                      (self,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
                       IVar2,1,0,&local_40);
    if ((int)IVar2 == 0) {
      uVar3 = local_40;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_40);
      _swift_willThrow(0);
      _swift_errorRelease(uVar3);
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
        return uVar3;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
      return local_40;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

