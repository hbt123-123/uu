// rea decompile_all
// name: SentryPropagationContext::init
// address: 0x10076997c
// body: available
// range: 0x10076997c-0x100769a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryPropagationContext::init(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryPropagationContext;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    pcVar2 = &objc::class_t::_TtC6Sentry8SentryId;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)pcVar2);
    *(ID *)(IVar1 + 8) = IVar3;
    pcVar2 = &objc::class_t::SentrySpanId;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)pcVar2);
    *(ID *)(IVar1 + 0x10) = IVar3;
  }
  return IVar1;
}

