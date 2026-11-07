// rea decompile_all
// name: SentryTransportAdapter::sendEvent:traceContext:attachments:additionalEnvelopeItems:
// address: 0x10074c7a0
// body: available
// range: 0x10074c7a0-0x10074c8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074c8b0 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void SentryTransportAdapter::sendEvent_traceContext_attachments_additionalEnvelopeItems_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_1007e5fe0(param_1,param_3,param_5);
  objc_stub::addObjectsFromArray_(IVar1,param_6);
  pcVar2 = &objc::class_t::SentryEnvelopeHeader;
  _objc_alloc();
  IVar3 = objc_stub::eventId(param_3);
  IVar3 = objc_stub::FUN_1007ebb20((ID)pcVar2,IVar3,param_4);
  pcVar2 = &objc::class_t::SentryEnvelope;
  _objc_alloc();
  IVar1 = objc_stub::initWithHeader_items_((ID)pcVar2,IVar3,IVar1);
  objc_stub::sendEnvelope_(param_1,IVar1);
  return;
}

