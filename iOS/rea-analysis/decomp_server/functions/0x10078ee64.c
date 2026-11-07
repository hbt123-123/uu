// rea decompile_all
// name: SentryCrashInstallationReporter::initWithInAppLogic:crashWrapper:dispatchQueue:
// address: 0x10078ee64
// body: available
// range: 0x10078ee64-0x10078ef43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryCrashInstallationReporter::initWithInAppLogic_crashWrapper_dispatchQueue_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  objc_super local_50;
  
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___NSArray);
  local_50.super_class = &objc::class_t::SentryCrashInstallationReporter;
  local_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_50,"initWithRequiredProperties:",IVar1);
  if (IVar1 != 0) {
    objc_stub::setInAppLogic_(IVar1,param_3);
    objc_stub::FUN_1007f2180(IVar1,param_4);
    objc_stub::FUN_1007f2680(IVar1,param_5);
  }
  return IVar1;
}

