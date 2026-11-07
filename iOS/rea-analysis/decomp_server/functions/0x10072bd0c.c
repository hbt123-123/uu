// rea decompile_all
// name: SAAppLifecycle::setState:
// address: 0x10072bd0c
// body: available
// range: 0x10072bd0c-0x10072be3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072be3c to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAAppLifecycle::setState_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  ID IVar1;
  
  if (*(unsigned_long_long *)(param_1 + 8) == param_3) {
    return;
  }
  self = NSMutableDictionary::dictionaryWithCapacity_((ID)&_OBJC_CLASS___NSMutableDictionary,2);
  IVar1 = NSNumber::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,param_3);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_new);
  IVar1 = NSNumber::numberWithUnsignedInteger_
                    ((ID)&_OBJC_CLASS___NSNumber,*(undefined8 *)(param_1 + 8));
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar1,&cf_old);
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::postNotificationName_object_userInfo_
            (IVar1,&cf_com_sensorsdata_SAAppLifecycleStateWillChange,param_1,self);
  *(unsigned_long_long *)(param_1 + 8) = param_3;
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::postNotificationName_object_userInfo_
            (IVar1,&cf_com_sensorsdata_SAAppLifecycleStateDidChange,param_1,self);
  return;
}

