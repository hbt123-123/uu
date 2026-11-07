// rea decompile_all
// name: SATrackTimer::handleEventDuration:mapping:currentSystemUpTime:
// address: 0x10070e578
// body: available
// range: 0x10070e578-0x10070e757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10070e754 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SATrackTimer::handleEventDuration_mapping_currentSystemUpTime_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_4,param_3);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    objc_stub::removeObjectForKey_(param_4,param_3);
    self = objc_stub::valueForKey_(IVar1,&cf_eventBegin);
    self_00 = objc_stub::objectForKey_(IVar1,&cf_eventAccumulatedDuration);
    IVar2 = objc_stub::valueForKey_(IVar1,&cf_timeUnit);
    IVar2 = objc_stub::intValue(IVar2);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_isPause);
    IVar1 = objc_stub::boolValue(IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::longValue(self);
      eventTimerDurationWithCurrentTime_eventStart_timeUnit_(param_1,param_5,IVar1,(long)(int)IVar2)
      ;
    }
    if (self_00 != 0) {
      objc_stub::floatValue(self_00);
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___3f);
    NSString::floatValue(IVar1);
    IVar1 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber);
  }
  return IVar1;
}

