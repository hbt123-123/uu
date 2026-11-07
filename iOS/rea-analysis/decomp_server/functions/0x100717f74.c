// rea decompile_all
// name: SAEventValidateInterceptor::processWithInput:completion:
// address: 0x100717f74
// body: available
// range: 0x100717f74-0x1007180db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAEventValidateInterceptor::processWithInput_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID self;
  ID IVar2;
  ID local_48;
  
  IVar1 = objc_stub::eventObject(param_3,param_3,param_4,(ulong)param_5);
  local_48 = 0;
  objc_stub::validateEventWithError_(IVar1,&local_48);
  IVar1 = local_48;
  if (local_48 != 0) {
    self = ::SAModuleManager::sharedInstance((ID)&objc::class_t::SAModuleManager);
    IVar2 = objc_stub::localizedDescription(IVar1);
    objc_stub::showDebugModeWarning_(self,IVar2);
  }
  IVar1 = objc_stub::localizedDescription(IVar1);
  objc_stub::setMessage_(param_3,IVar1);
  IVar1 = objc_stub::properties(param_3);
  IVar1 = SAPropertyValidator::validProperties_((ID)&objc::class_t::SAPropertyValidator,IVar1);
  objc_stub::setProperties_(param_3,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  return;
}

