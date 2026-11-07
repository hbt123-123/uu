// rea decompile_all
// name: SANodeObject::initWithDictionary:
// address: 0x100732f44
// body: available
// range: 0x100732f44-0x1007330c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SANodeObject::initWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SANodeObject;
  local_40 = param_1;
  self = NSObject::init((ID)&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_id);
    uVar3 = *(undefined8 *)(self + 8);
    *(ID *)(self + 8) = IVar1;
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,uVar3,&cf_name);
    uVar3 = *(undefined8 *)(self + 0x10);
    *(ID *)(self + 0x10) = IVar1;
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,uVar3,&cf_interceptor);
    uVar3 = *(undefined8 *)(self + 0x18);
    *(ID *)(self + 0x18) = IVar1;
    IVar1 = objc_stub::objectForKeyedSubscript_(param_3,uVar3,&cf_param);
    uVar3 = *(undefined8 *)(self + 0x20);
    *(ID *)(self + 0x20) = IVar1;
    IVar1 = NSObject::interceptorClassName(self,uVar3);
    _NSClassFromString();
    if ((IVar1 != 0) &&
       (IVar2 = IVar1, _objc_opt_respondsToSelector(IVar1,"interceptorWithParam:"), (IVar2 & 1) != 0
       )) {
      IVar2 = NSObject::param(self);
      IVar1 = objc_stub::interceptorWithParam_(IVar1,IVar2);
      *(ID *)(self + 0x28) = IVar1;
    }
  }
  return self;
}

