// rea decompile_all
// name: FUN_1002234e0
// address: 0x1002234e0
// body: available
// range: 0x1002234e0-0x100223693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100223690 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002234e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_10003f030(param_1,*(undefined8 *)(param_1 + 0x18));
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  local_50 = 0;
  pcVar5 = "archivedDataWithRootObject:requiringSecureCoding:error:";
  IVar1 = NSKeyedArchiver::archivedDataWithRootObject_requiringSecureCoding_error_
                    ((ID)&_OBJC_CLASS___NSKeyedArchiver,
                     "archivedDataWithRootObject:requiringSecureCoding:error:",param_1,0,&local_50);
  _swift_unknownObjectRelease(param_1);
  if (IVar1 == 0) {
    uVar4 = local_50;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_50);
    _swift_willThrow(0);
    _swift_errorRelease(uVar4);
    IVar3 = 0;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar1);
    if (DAT_100a7ddd8 != -1) {
      _swift_once(&DAT_100a7ddd8,FUN_1002230c8);
    }
    IVar3 = DAT_100a7e490;
    IVar2 = IVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(IVar1,pcVar5);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
    _objc_msgSend(IVar3,"setObject:forKey:",IVar2,param_2);
    IVar3 = _objc_msgSend(IVar3,"synchronize");
    FUN_100006cdc(IVar1,pcVar5);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

