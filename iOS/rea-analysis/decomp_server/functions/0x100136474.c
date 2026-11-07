// rea decompile_all
// name: FUN_100136474
// address: 0x100136474
// body: available
// range: 0x100136474-0x1001364d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100136474(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_30 = param_1;
  FUN_100004bb4(&DAT_100a79fc8,&DAT_10080eaa8);
  _swift_allocObject();
  FUN_100615648(FUN_100139c1c,auStack_40);
  return;
}

