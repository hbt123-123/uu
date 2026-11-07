// rea decompile_all
// name: FUN_100751fd8
// address: 0x100751fd8
// body: available
// range: 0x100751fd8-0x10075219b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100752198 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100751fd8(long param_1,ID param_2)

{
  int iVar1;
  ID self;
  ID IVar2;
  char *pcVar3;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  objc_stub::absoluteNSDateInterval(param_2);
  IVar2 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_timestamp);
  objc_stub::threadID(param_2);
  iVar1 = _snprintf((char *)0x0,0,"%llu");
  pcVar3 = _malloc((long)(iVar1 + 1));
  _snprintf(pcVar3,(long)(iVar1 + 1),"%llu");
  IVar2 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar3,1);
  _free(pcVar3);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_thread_id);
  IVar2 = objc_stub::stackIndex(param_2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_stack_id);
  IVar2 = objc_stub::queueAddress(param_2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::queueAddress(param_2);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_queue_address);
  }
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),self);
  return 0;
}

