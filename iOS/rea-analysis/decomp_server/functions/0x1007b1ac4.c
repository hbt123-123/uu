// rea decompile_all
// name: SentryEvent::isAppHangEvent
// address: 0x1007b1ac4
// body: available
// range: 0x1007b1ac4-0x1007b1b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryEvent::isAppHangEvent(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::exceptions(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 == 1) {
    IVar2 = objc_stub::exceptions(param_1);
    IVar2 = objc_stub::firstObject(IVar2);
    IVar2 = objc_stub::type(IVar2);
    IVar2 = objc_stub::FUN_1007ecf20((ID)&objc::class_t::_TtC6Sentry23SentryAppHangTypeMapper,IVar2)
    ;
    bVar1 = (bool)IVar2;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}

