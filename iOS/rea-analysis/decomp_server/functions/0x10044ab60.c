// rea decompile_all
// name: FUN_10044ab60
// address: 0x10044ab60
// body: available
// range: 0x10044ab60-0x10044ab97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044ab60(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100a9fd60;
  FUN_100004bb4(&DAT_100a9fd60,&DAT_10082a1e8);
  _swift_initStaticObject();
  DAT_100b37668 = puVar1;
  return;
}

