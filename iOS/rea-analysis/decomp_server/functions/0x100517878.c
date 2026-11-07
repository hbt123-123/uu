// rea decompile_all
// name: thunk_FUN_10051787c
// address: 0x100517878
// body: available
// range: 0x100517878-0x10051787b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10051787c(void)

{
  undefined *puVar1;
  
  if (DAT_100aab000 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSHAAMc_1009961f8;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSHAAMc_1009961f8,PTR___s10Foundation4DataVN_1009961e8);
  DAT_100aab000 = puVar1;
  return;
}

