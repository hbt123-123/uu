// rea decompile_all
// name: SentryThreadInspector::initWithOptions:
// address: 0x10074b4c4
// body: available
// range: 0x10074b4c4-0x10074b60b inclusive
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

ID SentryThreadInspector::initWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  
  pcVar4 = &objc::class_t::SentryInAppLogic;
  _objc_alloc();
  IVar1 = objc_stub::inAppIncludes(param_3);
  IVar2 = objc_stub::inAppExcludes(param_3);
  IVar1 = objc_stub::initWithInAppIncludes_inAppExcludes_((ID)pcVar4,IVar1,IVar2);
  pcVar4 = &objc::class_t::SentryCrashStackEntryMapper;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007ebb60((ID)pcVar4,IVar1);
  pcVar4 = &objc::class_t::SentryStacktraceBuilder;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007eb660((ID)pcVar4,IVar1);
  IVar2 = objc_stub::FUN_1007e7de0(param_3);
  objc_stub::FUN_1007f4ea0(IVar1,IVar2);
  pcVar4 = &objc::class_t::SentryCrashDefaultMachineContextWrapper;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)pcVar4);
  IVar3 = objc_stub::FUN_1007e7de0(param_3);
  IVar1 = objc_stub::FUN_1007ec2c0(param_1,IVar1,IVar2,IVar3);
  return IVar1;
}

