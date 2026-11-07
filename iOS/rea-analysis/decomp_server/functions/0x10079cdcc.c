// rea decompile_all
// name: SentryDependencyContainer::metricKitManager
// address: 0x10079cdcc
// body: available
// range: 0x10079cdcc-0x10079ce43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079ce40 to 0x1007dea4c _objc_retainAutoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencyContainer::metricKitManager(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  class_t *self;
  long lVar3;
  
  uVar1 = DAT_100b2e250;
  IVar2 = *(ID *)(param_1 + 0xb8);
  if (IVar2 == 0) {
    _objc_sync_enter();
    lVar3 = *(long *)(param_1 + 0xb8);
    if (lVar3 == 0) {
      self = &objc::class_t::_TtC6Sentry15SentryMXManager;
      _objc_alloc();
      IVar2 = objc_stub::FUN_1007eb820((ID)self,1);
      lVar3 = *(long *)(param_1 + 0xb8);
      *(ID *)(param_1 + 0xb8) = IVar2;
    }
    _objc_sync_exit(lVar3,uVar1);
    IVar2 = *(ID *)(param_1 + 0xb8);
  }
  return IVar2;
}

