// rea decompile_all
// name: SentryFileIOTrackingIntegration::installWithOptions:
// address: 0x10074a174
// body: available
// range: 0x10074a174-0x10074a2e3 inclusive
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

bool SentryFileIOTrackingIntegration::installWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryFileIOTrackingIntegration;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"installWithOptions:",param_3);
  if ((bool)IVar1 != 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::fileIOTracker(IVar2);
    objc_stub::FUN_1007f52e0(param_1,IVar2);
    IVar2 = objc_stub::tracker(param_1);
    objc_stub::FUN_1007e8b00(IVar2);
    IVar2 = objc_stub::shared((ID)&objc::class_t::SentryNSDataSwizzling);
    IVar3 = objc_stub::tracker(param_1);
    objc_stub::FUN_1007f6140(IVar2,param_3,IVar3);
    IVar2 = objc_stub::shared((ID)&objc::class_t::SentryNSFileManagerSwizzling);
    IVar3 = objc_stub::tracker(param_1);
    objc_stub::FUN_1007f6140(IVar2,param_3,IVar3);
  }
  return (bool)IVar1;
}

