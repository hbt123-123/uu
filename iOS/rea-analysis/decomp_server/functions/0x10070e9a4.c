// rea decompile_all
// name: SATrackTimer::handleEventResume:mapping:currentSystemUpTime:
// address: 0x10070e9a4
// body: available
// range: 0x10070e9a4-0x10070eafb inclusive
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

bool SATrackTimer::handleEventResume_mapping_currentSystemUpTime_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::objectForKeyedSubscript_(param_4,param_3);
  IVar2 = objc_stub::mutableCopy(IVar2);
  IVar3 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_isPause);
  IVar3 = objc_stub::boolValue(IVar3);
  uVar1 = (uint)(IVar2 != 0) & (uint)IVar3;
  if (uVar1 == 1) {
    IVar3 = NSNumber::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,param_5);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_eventBegin);
    IVar3 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
    objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_isPause);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::setObject_forKeyedSubscript_(param_4,IVar2,param_3);
  }
  return uVar1;
}

