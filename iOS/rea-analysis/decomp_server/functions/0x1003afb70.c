// rea decompile_all
// name: FUN_1003afb70
// address: 0x1003afb70
// body: available
// range: 0x1003afb70-0x1003afbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003afb70(void)

{
  class_t *pcVar1;
  
  if (DAT_100a8ba60 != (class_t *)0x0) {
    return;
  }
  pcVar1 = &objc::class_t::SAConfigOptions;
  _swift_getObjCClassMetadata();
  DAT_100a8ba60 = pcVar1;
  return;
}

