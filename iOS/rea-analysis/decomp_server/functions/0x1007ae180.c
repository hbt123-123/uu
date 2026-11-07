// rea decompile_all
// name: SentryCrashInstallation::sendAllReportsWithCompletion:
// address: 0x1007ae180
// body: available
// range: 0x1007ae180-0x1007ae2eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ae2e8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashInstallation::sendAllReportsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_1007f7fe0(param_1,param_3,(ulong)param_4);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_1007f59e0(param_1);
    if (IVar1 == 0) {
      IVar1 = objc_stub::class(param_1);
      IVar1 = objc_stub::description(IVar1);
      FUN_10079f85c(IVar1,0,&cf_Sinkwasnil_subclassesmustimplementmethod_sink__);
      (**(code **)(param_3 + 0x10))(param_3,0,0,IVar1);
    }
    else {
      IVar1 = objc_stub::filterWithFilters_
                        ((ID)&objc::class_t::SentryCrashReportFilterPipeline,IVar1);
      IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
      IVar2 = objc_stub::crashReporter(IVar2);
      objc_stub::FUN_1007f4b60(IVar2,IVar1);
      objc_stub::FUN_1007f1080(IVar2,param_3);
    }
  }
  else if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,0,0,IVar1);
  }
  return;
}

