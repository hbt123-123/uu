// rea decompile_all
// name: SentryCrashReportConverter::extractMechanismOfType:
// address: 0x100782284
// body: available
// range: 0x100782284-0x100782903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007828fc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100782900 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportConverter::extractMechanismOfType_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  cfstringStruct *local_90;
  ID local_88;
  char acStack_7b [19];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar4 = &objc::class_t::SentryMechanism;
  _objc_alloc();
  self = objc_stub::initWithType_((ID)pcVar4,param_3);
  IVar1 = objc_stub::FUN_1007e9640(param_1);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_mach);
  if (IVar1 != 0) {
    IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
    objc_stub::setHandled_(self,IVar1);
    pcVar4 = &objc::class_t::SentryMechanismMeta;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)pcVar4);
    IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar3 = objc_stub::FUN_1007e9640(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_mach);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_exception_name);
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_name);
    IVar3 = objc_stub::FUN_1007e9640(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_mach);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_exception);
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_exception);
    IVar3 = objc_stub::FUN_1007e9640(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_mach);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_subcode);
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_subcode);
    IVar3 = objc_stub::FUN_1007e9640(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_mach);
    IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_code);
    objc_stub::setValue_forKey_(IVar2,IVar3,&cf_code);
    objc_stub::FUN_1007f3a40(IVar1,IVar2);
    IVar2 = objc_stub::FUN_1007e9640(param_1);
    IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_signal);
    if (IVar2 != 0) {
      IVar2 = objc_stub::new((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar3 = objc_stub::FUN_1007e9640(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
      objc_stub::setValue_forKey_(IVar2,IVar3,&cf_number);
      IVar3 = objc_stub::FUN_1007e9640(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_code);
      objc_stub::setValue_forKey_(IVar2,IVar3,&cf_code);
      IVar3 = objc_stub::FUN_1007e9640(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_code_name);
      objc_stub::setValue_forKey_(IVar2,IVar3,&cf_code_name);
      IVar3 = objc_stub::FUN_1007e9640(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_signal);
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_name);
      objc_stub::setValue_forKey_(IVar2,IVar3,&cf_name);
      objc_stub::FUN_1007f4b40(IVar1,IVar2);
    }
    objc_stub::setMeta_(self,IVar1);
    IVar1 = objc_stub::FUN_1007e9640(param_1);
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
    if (IVar1 != 0) {
      IVar1 = objc_stub::FUN_1007e9640(param_1);
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
      IVar1 = objc_stub::integerValue(IVar1);
      if (0 < (long)IVar1) {
        local_90 = &cf_relevant_address;
        IVar1 = objc_stub::FUN_1007e9640(param_1);
        IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_address);
        objc_stub::unsignedLongLongValue(IVar1);
        _snprintf(acStack_7b,0x13,"0x%016llx");
        local_88 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_7b,1);
        IVar1 = objc_stub::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,&local_88,&local_90,1);
        objc_stub::setData_(self,IVar1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

