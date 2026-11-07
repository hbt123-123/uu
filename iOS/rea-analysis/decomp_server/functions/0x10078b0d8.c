// rea decompile_all
// name: FUN_10078b0d8
// address: 0x10078b0d8
// body: available
// range: 0x10078b0d8-0x10078b28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078b288 to 0x1007f10a0 objc_stub::FUN_1007f10a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10078b0d8(ID param_1,long param_2)

{
  class_t *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  IVar5 = DAT_100b2e108;
  if (DAT_100b2e108 == 0) {
    pcVar1 = &objc::class_t::SentryInAppLogic;
    _objc_alloc();
    IVar2 = objc_stub::options(*(ID *)(param_2 + 0x20));
    IVar2 = objc_stub::inAppIncludes(IVar2);
    IVar3 = objc_stub::options(*(ID *)(param_2 + 0x20));
    IVar3 = objc_stub::inAppExcludes(IVar3);
    IVar2 = objc_stub::initWithInAppIncludes_inAppExcludes_((ID)pcVar1,IVar2,IVar3);
    pcVar1 = &objc::class_t::SentryCrashInstallationReporter;
    _objc_alloc();
    IVar3 = objc_stub::FUN_1007e7460(*(ID *)(param_2 + 0x20));
    IVar4 = objc_stub::dispatchQueueWrapper(*(ID *)(param_2 + 0x20));
    IVar2 = objc_stub::FUN_1007ebb80((ID)pcVar1,IVar2,IVar3,IVar4);
    param_1 = DAT_100b2e108;
    DAT_100b2e108 = IVar2;
  }
  FUN_1007b20f4(param_1,*(undefined1 *)(param_2 + 0x30));
  objc_stub::FUN_1007ec8a0(DAT_100b2e108,*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_2 + 0x31) != '\0') {
    objc_stub::FUN_1007e6f00((ID)&objc::class_t::SentryUncaughtNSExceptions);
    objc_stub::FUN_1007f6b20((ID)&objc::class_t::SentryUncaughtNSExceptions);
  }
  IVar2 = objc_stub::FUN_1007f1840(*(ID *)(param_2 + 0x20));
  objc_stub::FUN_1007e9040(IVar2);
  if (IVar5 != 0) {
    return 0;
  }
  IVar5 = objc_stub::FUN_1007f10a0((ID)&objc::class_t::SentryCrashIntegration);
  return IVar5;
}

