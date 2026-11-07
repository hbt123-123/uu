// rea decompile_all
// name: FUN_100665380
// address: 0x100665380
// body: available
// range: 0x100665380-0x1006653bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100665380(void)

{
  undefined *puVar1;
  
  if (DAT_100ab92d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_100995830;
  _swift_getWitnessTable(PTR___sSSSysMc_100995830,PTR___sSSN_1009957f8);
  DAT_100ab92d0 = puVar1;
  return;
}

