// rea decompile_all
// name: FUN_1007519d4
// address: 0x1007519d4
// body: available
// range: 0x1007519d4-0x100751b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100751b8c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1007519d4(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  FUN_10078a958();
  if (param_3 == 0) {
    IVar3 = 0;
  }
  else {
    IVar3 = objc_stub::state(param_3);
    IVar3 = objc_stub::copyProfilingData(IVar3);
    IVar4 = objc_stub::FUN_1007f7800(param_3);
    pcVar1 = &cf_backgrounded;
    if (IVar4 != 2) {
      pcVar1 = &cf_normal;
    }
    pcVar2 = &cf_timeout;
    if (IVar4 != 1) {
      pcVar2 = pcVar1;
    }
    IVar4 = objc_stub::FUN_1007ee460(param_3);
    IVar4 = objc_stub::FUN_1007f1740(IVar4,param_1,param_2);
    IVar5 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar5 = objc_stub::debugImageProvider(IVar5);
    IVar5 = objc_stub::FUN_1007ea500(IVar5);
    FUN_10074f98c(IVar3,param_1,param_2,pcVar2,IVar4,IVar5,param_4);
  }
  return IVar3;
}

