// rea decompile_all
// name: SentryExtraContextProvider::getExtraDeviceContext
// address: 0x1007641c8
// body: available
// range: 0x1007641c8-0x10076442f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076434c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryExtraContextProvider::getExtraDeviceContext(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  cfstringStruct *pcVar2;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_1007e7520(param_1);
  IVar1 = objc_stub::FUN_1007ea180(IVar1);
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_free_memory);
  IVar1 = objc_stub::FUN_1007ef620(param_1);
  IVar1 = objc_stub::FUN_1007ef6c0(IVar1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_processor_count);
  IVar1 = objc_stub::FUN_1007ef620(param_1);
  IVar1 = objc_stub::FUN_1007f6e00(IVar1);
  switch(IVar1) {
  case 0:
    pcVar2 = &cf_nominal;
    break;
  case 1:
    pcVar2 = &cf_fair;
    break;
  case 2:
    pcVar2 = &cf_serious;
    break;
  case 3:
    pcVar2 = &cf_critical;
    break;
  default:
    IVar1 = objc_stub::willLogAtLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,3);
    if ((int)IVar1 == 0) {
      return self_00;
    }
    IVar1 = objc_stub::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,
                       "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryExtraContextProvider.m"
                      );
    IVar1 = objc_stub::lastPathComponent(IVar1);
    objc_stub::stringByDeletingPathExtension(IVar1);
    objc_stub::stringWithFormat_
              ((ID)&_OBJC_CLASS___NSString,&cf_Unexpectedthermalstateenumvalue__ld);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______d___);
    objc_stub::logWithMessage_andLevel_((ID)&objc::class_t::_TtC6Sentry9SentryLog,IVar1,3);
    return self_00;
  }
  objc_stub::setObject_forKeyedSubscript_(self_00,pcVar2,&cf_thermal_state);
  return self_00;
}

