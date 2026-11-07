// rea decompile_all
// name: FUN_100407880
// address: 0x100407880
// body: available
// range: 0x100407880-0x1004078d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100407880(void)

{
  long lVar1;
  
  lVar1 = -0x7ffffffeff749c80;
  FUN_1004077b4(&DAT_d000000000000013);
  if (lVar1 != 0) {
    return;
  }
  FUN_1004077b4(0x656c646e75424643,0xec000000656d614e);
  return;
}

