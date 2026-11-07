// rea decompile_all
// name: SentryCoreDataTracker::addExtraInfoToSpan:withContext:
// address: 0x1007b2f70
// body: available
// range: 0x1007b2f70-0x1007b31af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007b31ac to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCoreDataTracker::addExtraInfoToSpan_withContext_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  ID local_58;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread);
  IVar2 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_blocked_main_thread);
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar3 = objc_stub::FUN_1007ef1a0(param_4);
  IVar3 = objc_stub::FUN_1007ef1c0(IVar3);
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0xc2000000;
  local_70 = FUN_1007b31b0;
  puStack_68 = &DAT_1009eaab8;
  local_60 = IVar2;
  local_58 = self;
  objc_stub::enumerateObjectsUsingBlock_(IVar3,&local_80);
  IVar2 = objc_stub::componentsJoinedByString_(IVar2,&cf__);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_db_system);
  IVar2 = objc_stub::componentsJoinedByString_(self,&cf__);
  objc_stub::setDataValue_forKey_(param_3,IVar2,&cf_db_name);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::stacktraceForCurrentThreadAsyncUnsafe(*(ID *)(param_1 + 0x10));
    IVar1 = objc_stub::frames(IVar1);
    objc_stub::setFrames_(param_3,IVar1);
  }
  return;
}

