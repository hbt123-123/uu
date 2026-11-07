// rea decompile_all
// name: FUN_1000221f4
// address: 0x1000221f4
// body: available
// range: 0x1000221f4-0x100022243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000221f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100102c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100102c38;
  FUN_10000ec94(&DAT_100102c38,&DAT_1000d1b90);
  puVar2 = PTR___sSayxGSKsMc_1000f0378;
  _swift_getWitnessTable(PTR___sSayxGSKsMc_1000f0378,puVar1);
  DAT_100102c40 = puVar2;
  return;
}

