// rea decompile_all
// name: SentryHttpTransport::recordLostSpans:reason:
// address: 0x10077a9e8
// body: available
// range: 0x10077a9e8-0x10077ab27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077ab24 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHttpTransport::recordLostSpans_reason_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::header(param_3);
  IVar1 = objc_stub::type(IVar1);
  IVar1 = objc_stub::isEqualToString_(0x100a092b0,IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = objc_stub::data(param_3);
    IVar1 = objc_stub::FUN_1007e84e0((ID)&objc::class_t::SentrySerialization,IVar1);
    if (IVar1 != 0) {
      IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_spans);
      if (IVar1 == 0) {
        IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSArray);
      }
      IVar1 = objc_stub::count(IVar1);
      objc_stub::recordLostEvent_reason_quantity_(param_1,0xb,param_4,IVar1 + 1);
    }
  }
  return;
}

