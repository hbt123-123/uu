// rea decompile_all
// name: SATrackTimer::handleEventPause:mapping:currentSystemUpTime:
// address: 0x10070e758
// body: available
// range: 0x10070e758-0x10070e9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool SATrackTimer::handleEventPause_mapping_currentSystemUpTime_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  float fVar5;
  float extraout_s0;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_4,param_3);
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_isPause);
  IVar2 = objc_stub::boolValue(IVar2);
  if ((IVar1 == 0) == 0 && (IVar2 & 1) == 0) {
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_eventBegin);
    IVar3 = objc_stub::longValue(IVar3);
    IVar4 = objc_stub::valueForKey_(IVar1,&cf_timeUnit);
    IVar4 = objc_stub::intValue(IVar4);
    fVar5 = eventTimerDurationWithCurrentTime_eventStart_timeUnit_
                      (param_1,param_5,IVar3,(long)(int)IVar4);
    IVar3 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_eventBegin);
    IVar3 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_isPause);
    if (0.0 < fVar5) {
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_eventAccumulatedDuration);
      objc_stub::floatValue(IVar3);
      IVar3 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,fVar5 + extraout_s0);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_eventAccumulatedDuration);
    }
    IVar3 = objc_stub::copy(IVar1);
    objc_stub::setObject_forKeyedSubscript_(param_4,IVar3,param_3);
  }
  return (((uint)(IVar1 == 0) | (uint)IVar2) ^ 0xffffffff) & 1;
}

