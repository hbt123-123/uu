// rea decompile_all
// name: SentryCrashIntegration::installWithOptions:
// address: 0x10078ae80
// body: available
// range: 0x10078ae80-0x10078b003 inclusive
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

bool SentryCrashIntegration::installWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryCrashIntegration;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"installWithOptions:",param_3);
  if ((bool)IVar1 != 0) {
    objc_stub::setOptions_(param_1,param_3);
    pcVar2 = &objc::class_t::SentryCrashIntegrationSessionHandler;
    _objc_alloc();
    IVar3 = objc_stub::FUN_1007e7460(param_1);
    IVar3 = objc_stub::FUN_1007eb680((ID)pcVar2,IVar3);
    objc_stub::FUN_1007f4a80(param_1,IVar3);
    pcVar2 = &objc::class_t::SentryCrashScopeObserver;
    _objc_alloc();
    IVar3 = objc_stub::maxBreadcrumbs(param_3);
    IVar3 = objc_stub::FUN_1007ebce0((ID)pcVar2,IVar3);
    objc_stub::FUN_1007f47e0(param_1,IVar3);
    IVar3 = objc_stub::FUN_1007e8e20(param_3);
    IVar4 = objc_stub::enableSwizzling(param_3);
    if ((int)IVar4 == 0) {
      IVar4 = 0;
    }
    else {
      IVar4 = objc_stub::FUN_1007e8ea0(param_3);
    }
    IVar5 = objc_stub::cacheDirectoryPath(param_3);
    objc_stub::FUN_1007f5e80(param_1,IVar5,IVar3,IVar4);
    objc_stub::FUN_1007e6f20(param_1);
    IVar3 = objc_stub::FUN_1007e8dc0(param_3);
    if ((int)IVar3 != 0) {
      objc_stub::FUN_1007e6f60(param_1);
    }
  }
  return (bool)IVar1;
}

