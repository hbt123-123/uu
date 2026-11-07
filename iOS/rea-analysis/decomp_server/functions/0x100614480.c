// rea decompile_all
// name: FUN_100614480
// address: 0x100614480
// body: available
// range: 0x100614480-0x1006144cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100614480(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_100614504(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  FUN_100608308();
  unaff_x20[2] = lVar1;
  return;
}

