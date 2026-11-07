// rea decompile_all
// name: FUN_10071b500
// address: 0x10071b500
// body: available
// range: 0x10071b500-0x10071b70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

undefined8
FUN_10071b500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  
  lVar1 = param_1;
  _class_getInstanceMethod(param_1,param_3);
  if (lVar1 == 0) {
    if (param_5 == (ID *)0x0) {
      return 0;
    }
    _NSStringFromSelector();
    _objc_opt_class();
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf__s_originalmethod__notfoundforclass__);
  }
  else {
    lVar2 = param_1;
    _class_getInstanceMethod(param_1,param_4);
    if (lVar2 != 0) {
      lVar3 = param_1;
      _class_getMethodImplementation(param_1,param_3);
      _method_getTypeEncoding(lVar1);
      _class_addMethod(param_1,param_3,lVar3,lVar1);
      lVar1 = param_1;
      _class_getMethodImplementation(param_1,param_4);
      _method_getTypeEncoding(lVar2);
      _class_addMethod(param_1,param_4,lVar1,lVar2);
      lVar1 = param_1;
      _class_getInstanceMethod(param_1,param_3);
      _class_getInstanceMethod(param_1,param_4);
      _method_exchangeImplementations(lVar1,param_1);
      return 1;
    }
    if (param_5 == (ID *)0x0) {
      return 0;
    }
    _NSStringFromSelector();
    _objc_opt_class();
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf__s_alternatemethod__notfoundforclass__);
  }
  IVar4 = NSDictionary::dictionaryWithObject_forKey_
                    ((ID)&_OBJC_CLASS___NSDictionary,IVar4,
                     *(undefined8 *)PTR__NSLocalizedDescriptionKey_100995300);
  IVar4 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_NSCocoaErrorDomain,0xffffffffffffffff,IVar4);
  *param_5 = IVar4;
  return 0;
}

