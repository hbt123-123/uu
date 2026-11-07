// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::maxRetryCount
// address: 0x10035e5f0
// body: available
// range: 0x10035e5f0-0x10035e633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC10Filepicker17FilePickerRequest::maxRetryCount(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = maxRetryCount;
  _swift_beginAccess(param_1 + maxRetryCount,auStack_38,0,0);
  return *(unsigned_long_long *)(param_1 + lVar1);
}

