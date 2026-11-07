// rea decompile_all
// name: SentryTracer::traceContext
// address: 0x10076ebb4
// body: available
// range: 0x10076ebb4-0x10076ecdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10076ecd8 to 0x1007dea4c _objc_retainAutoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::traceContext(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_traceContext;
  IVar1 = *(ID *)(param_1 + lVar4);
  if (IVar1 == 0) {
    _objc_sync_enter();
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      self = &objc::class_t::SentryTraceContext;
      _objc_alloc();
      lVar3 = (long)_hub;
      IVar1 = objc_stub::scope(*(ID *)(param_1 + lVar3));
      IVar2 = objc_stub::FUN_1007e6ba0(*(ID *)(param_1 + lVar3));
      IVar2 = objc_stub::options(IVar2);
      if (IVar2 == 0) {
        IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDK);
      }
      IVar1 = objc_stub::initWithTracer_scope_options_((ID)self,param_1,IVar1,IVar2);
      lVar3 = *(long *)(param_1 + lVar4);
      *(ID *)(param_1 + lVar4) = IVar1;
    }
    _objc_sync_exit(lVar3,param_1);
    IVar1 = *(ID *)(param_1 + lVar4);
  }
  return IVar1;
}

