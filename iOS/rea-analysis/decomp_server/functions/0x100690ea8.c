// rea decompile_all
// name: FUN_100690ea8
// address: 0x100690ea8
// body: available
// range: 0x100690ea8-0x100690ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100690ea8(void)

{
  undefined *puVar1;
  
  if (DAT_100ab9fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSis17FixedWidthIntegersMc_1009959b0;
  _swift_getWitnessTable(PTR___sSis17FixedWidthIntegersMc_1009959b0,PTR___sSiN_100995968);
  DAT_100ab9fc0 = puVar1;
  return;
}

