// rea decompile_all
// name: SADelegateProxy::addObserver:forKeyPath:options:context:
// address: 0x10072ee20
// body: available
// range: 0x10072ee20-0x10072eec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SADelegateProxy::addObserver_forKeyPath_options_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,
               void *param_6)

{
  ID IVar1;
  class_t *pcVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SADelegateProxy;
  local_40 = param_1;
  NSObject::addObserver_forKeyPath_options_context_
            ((ID)&local_40,"addObserver:forKeyPath:options:context:");
  IVar1 = objc_stub::sensorsdata_delegateObject(param_1);
  if (IVar1 != 0) {
    pcVar2 = &objc::class_t::SADelegateProxy;
    _objc_opt_class();
    _object_getClass();
    SAMethodHelper::replaceInstanceMethodWithDestinationSelector_sourceSelector_fromClass_toClass_
              ((ID)&objc::class_t::SAMethodHelper,"class","class",(CLASS)pcVar2,param_1);
  }
  return;
}

