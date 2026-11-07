// rea decompile_all
// name: SentryEnvelopeRateLimit::removeRateLimitedItems:
// address: 0x1007384b0
// body: available
// range: 0x1007384b0-0x1007385db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007385d8 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEnvelopeRateLimit::removeRateLimitedItems_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    IVar1 = objc_stub::items(param_3);
    IVar1 = getEnvelopeItemsToDrop_(param_1,IVar1);
    IVar2 = objc_stub::count(IVar1);
    if (IVar2 != 0) {
      IVar2 = objc_stub::items(param_3);
      IVar1 = getItemsToSend_withItemsToDrop_(param_1,IVar2,IVar1);
      self = &objc::class_t::SentryEnvelope;
      _objc_alloc();
      IVar2 = objc_stub::header(param_3);
      param_3 = objc_stub::initWithHeader_items_((ID)self,IVar2,IVar1);
    }
  }
  return param_3;
}

