// rea decompile_all
// name: SADelegateProxyObject::initWithDelegate:proxy:
// address: 0x10071af10
// body: available
// range: 0x10071af10-0x10071b0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SADelegateProxyObject::initWithDelegate_proxy_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::SADelegateProxyObject;
  local_50 = param_1;
  IVar1 = NSObject::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x28) = param_4;
    IVar2 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet);
    uVar4 = *(undefined8 *)(IVar1 + 0x30);
    *(ID *)(IVar1 + 0x30) = IVar2;
    IVar2 = param_3;
    _objc_opt_class(uVar4);
    uVar4 = *(undefined8 *)(IVar1 + 0x20);
    *(ID *)(IVar1 + 0x20) = IVar2;
    _object_getClass(uVar4);
    IVar2 = param_3;
    _NSStringFromClass();
    IVar3 = objc_stub::containsString_(IVar2,&cf_KVONotifying_);
    if ((int)IVar3 == 0) {
      IVar3 = objc_stub::containsString_(IVar2,&cf__CN_SENSORSDATA);
      if ((int)IVar3 == 0) {
        *(ID *)(IVar1 + 8) = param_3;
        IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____);
      }
      else {
        _class_getSuperclass();
        *(ID *)(IVar1 + 8) = param_3;
      }
      *(ID *)(IVar1 + 0x18) = IVar2;
    }
    else {
      IVar2 = param_3;
      _class_getSuperclass();
      *(ID *)(IVar1 + 8) = IVar2;
      *(ID *)(IVar1 + 0x10) = param_3;
    }
  }
  return IVar1;
}

