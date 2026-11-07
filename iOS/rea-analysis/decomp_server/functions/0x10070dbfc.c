// rea decompile_all
// name: SATrackTimer::trackTimerStart:timeUnit:currentSysUpTime:
// address: 0x10070dbfc
// body: available
// range: 0x10070dbfc-0x10070dd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070dd9c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SATrackTimer::trackTimerStart_timeUnit_currentSysUpTime_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  ID self;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *pcStack_78;
  cfstringStruct *local_70;
  ID local_68;
  undefined **ppuStack_60;
  ID local_58;
  undefined *puStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_88 = &cf_eventBegin;
  local_68 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_5);
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_100a12968;
  local_80 = &cf_eventAccumulatedDuration;
  pcStack_78 = &cf_timeUnit;
  local_58 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,param_4);
  local_70 = &cf_isPause;
  puStack_50 = PTR____kCFBooleanFalse_1009953c0;
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,&local_68,&local_88,4);
  IVar2 = eventIds(param_1);
  objc_stub::setObject_forKeyedSubscript_(IVar2,IVar1,param_3);
  IVar2 = eventNameFromEventId_(param_1,param_3);
  self = eventNames(param_1);
  objc_stub::setObject_forKeyedSubscript_(self,IVar1,IVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

