// rea decompile_all
// name: SentryClient::exceptionForError:
// address: 0x10073d008
// body: available
// range: 0x10073d008-0x10073d2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073d2dc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClient::exceptionForError_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  
  IVar1 = objc_stub::userInfo(param_3);
  IVar1 = objc_stub::valueForKey_(IVar1,*(undefined8 *)PTR__NSDebugDescriptionErrorKey_1009952a8);
  IVar2 = objc_stub::class(param_3);
  _NSStringFromClass();
  IVar2 = objc_stub::containsString_(IVar2,&cf_SwiftNativeNSError);
  if ((int)IVar2 == 0) {
    if (IVar1 == 0) {
LAB_10073d110:
      objc_stub::code(param_3);
      IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_Code__ld);
      goto LAB_10073d140;
    }
LAB_10073d0d4:
    objc_stub::code(param_3);
  }
  else {
    IVar2 = objc_stub::getSwiftErrorDescription_
                      ((ID)&objc::class_t::_TtC6Sentry15SwiftDescriptor,param_3);
    if (IVar1 != 0) goto LAB_10073d0d4;
    if (IVar2 == 0) goto LAB_10073d110;
    objc_stub::code(param_3);
  }
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____Code__ld_);
LAB_10073d140:
  pcVar3 = &objc::class_t::SentryException;
  _objc_alloc();
  IVar2 = objc_stub::domain(param_3);
  IVar1 = objc_stub::initWithValue_type_((ID)pcVar3,IVar1,IVar2);
  pcVar3 = &objc::class_t::SentryMechanism;
  _objc_alloc();
  IVar2 = objc_stub::initWithType_((ID)pcVar3,&cf_NSError);
  pcVar3 = &objc::class_t::SentryMechanismMeta;
  _objc_alloc();
  IVar4 = objc_stub::init((ID)pcVar3);
  pcVar3 = &objc::class_t::SentryNSError;
  _objc_alloc();
  IVar5 = objc_stub::domain(param_3);
  IVar6 = objc_stub::code(param_3);
  IVar5 = objc_stub::initWithDomain_code_((ID)pcVar3,IVar5,IVar6);
  objc_stub::setError_(IVar4,IVar5);
  objc_stub::setMeta_(IVar2,IVar4);
  IVar4 = objc_stub::description(param_3);
  objc_stub::setDesc_(IVar2,IVar4);
  IVar4 = objc_stub::userInfo(param_3);
  FUN_10077cc54(IVar4);
  objc_stub::setData_(IVar2,IVar4);
  objc_stub::setMechanism_(IVar1,IVar2);
  return IVar1;
}

