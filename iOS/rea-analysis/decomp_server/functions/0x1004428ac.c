// rea decompile_all
// name: FUN_1004428ac
// address: 0x1004428ac
// body: available
// range: 0x1004428ac-0x1004428e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004428ac(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100a9fb20;
  FUN_100004bb4(&DAT_100a9fb20,&DAT_100829720);
  _swift_initStaticObject();
  DAT_100b37438 = puVar1;
  return;
}

