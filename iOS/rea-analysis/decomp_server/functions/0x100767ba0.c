// rea decompile_all
// name: SentryHub::startTransactionWithContext:bindToScope:customSamplingContext:configuration:
// address: 0x100767ba0
// body: available
// range: 0x100767ba0-0x100767dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100767dfc to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x2c bytes */

ID SentryHub::startTransactionWithContext_bindToScope_customSamplingContext_configuration_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  class_t *pcVar6;
  
  pcVar6 = &objc::class_t::SentrySamplingContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_1007ec520((ID)pcVar6,param_3,param_5);
  IVar2 = objc_stub::FUN_1007e6ba0(param_1);
  IVar3 = objc_stub::options(IVar2);
  IVar2 = IVar1;
  FUN_100797824(IVar1,IVar3);
  IVar3 = objc_stub::decision(IVar2);
  IVar4 = objc_stub::sampleRate(IVar2);
  IVar5 = objc_stub::FUN_1007f0be0(IVar2);
  IVar3 = objc_stub::FUN_1007f7720(param_1,param_3,IVar3,IVar4,IVar5);
  IVar4 = objc_stub::FUN_1007e6ba0(param_1);
  IVar4 = objc_stub::options(IVar4);
  IVar4 = objc_stub::isContinuousProfilingEnabled(IVar4);
  if ((IVar4 & 1) == 0) {
    IVar4 = objc_stub::FUN_1007e6ba0(param_1);
    IVar4 = objc_stub::options(IVar4);
    FUN_100797ae0(IVar1,IVar2,IVar4);
    objc_stub::setProfilesSamplerDecision_(param_6,IVar1);
  }
  pcVar6 = &objc::class_t::SentryTracer;
  _objc_alloc();
  IVar2 = objc_stub::FUN_1007ec540((ID)pcVar6,IVar3,param_1,param_6);
  if (param_4 != 0) {
    IVar3 = objc_stub::scope(param_1);
    objc_stub::FUN_1007f4c00(IVar3,IVar2);
  }
  return IVar2;
}

