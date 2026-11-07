// rea decompile_all
// name: FUN_1005fc634
// address: 0x1005fc634
// body: available
// range: 0x1005fc634-0x1005fc673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fc634(void)

{
  undefined *puVar1;
  
  if (DAT_100aaf820 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s10Foundation4DataVSeAAMc_100996200;
  _swift_getWitnessTable
            (PTR___s10Foundation4DataVSeAAMc_100996200,PTR___s10Foundation4DataVN_1009961e8);
  DAT_100aaf820 = puVar1;
  return;
}

