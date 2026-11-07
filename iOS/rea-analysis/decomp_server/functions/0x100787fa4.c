// rea decompile_all
// name: SentrySessionTracker::didBecomeActive
// address: 0x100787fa4
// body: available
// range: 0x100787fa4-0x1007881cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007881c8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySessionTracker::didBecomeActive(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double extraout_d0;
  
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_1007f8200(param_1);
  if ((IVar1 & 1) != 0) {
    _objc_sync_exit(param_1);
    return;
  }
  objc_stub::FUN_1007f56e0(param_1,1);
  _objc_sync_exit(param_1);
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDK);
  IVar2 = objc_stub::getClient(IVar1);
  IVar2 = objc_stub::fileManager(IVar2);
  IVar2 = objc_stub::FUN_1007efce0(IVar2);
  objc_stub::FUN_1007f38c0(param_1,IVar2);
  IVar2 = objc_stub::FUN_1007ed900(param_1);
  if (IVar2 != 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::dateProvider(IVar2);
    IVar2 = objc_stub::date(IVar2);
    IVar3 = objc_stub::FUN_1007ed900(param_1);
    objc_stub::FUN_1007f6fc0(IVar2,IVar3);
    IVar2 = objc_stub::options(param_1);
    IVar2 = objc_stub::FUN_1007f1940(IVar2);
    if (extraout_d0 * 1000.0 < (double)IVar2) goto LAB_10078816c;
    IVar2 = objc_stub::FUN_1007ed900(param_1);
    objc_stub::FUN_1007e90e0(IVar1,IVar2);
  }
  objc_stub::FUN_1007f5f20(IVar1);
LAB_10078816c:
  IVar1 = objc_stub::getClient(IVar1);
  IVar1 = objc_stub::fileManager(IVar1);
  objc_stub::FUN_1007e83e0(IVar1);
  objc_stub::FUN_1007f38c0(param_1,0);
  return;
}

