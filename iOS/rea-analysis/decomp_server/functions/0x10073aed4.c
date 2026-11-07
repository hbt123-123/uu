// rea decompile_all
// name: SentryDsn::getEnvelopeEndpoint
// address: 0x10073aed4
// body: available
// range: 0x10073aed4-0x10073af6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073af68 to 0x1007dea4c _objc_retainAutoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::getEnvelopeEndpoint(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = *(ID *)(param_1 + 0x10);
  if (IVar1 == 0) {
    _objc_sync_enter();
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      IVar1 = getBaseEndpoint(param_1);
      IVar1 = objc_stub::URLByAppendingPathComponent_(IVar1,&cf_envelope_);
      lVar2 = *(long *)(param_1 + 0x10);
      *(ID *)(param_1 + 0x10) = IVar1;
    }
    _objc_sync_exit(lVar2,param_1);
    IVar1 = *(ID *)(param_1 + 0x10);
  }
  return IVar1;
}

