// rea decompile_all
// name: FUN_1007ba248
// address: 0x1007ba248
// body: available
// range: 0x1007ba248-0x1007ba2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007ba248(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100a8e510 == (undefined *)0x0) {
    puVar1 = &DAT_100abc978;
    FUN_1007b5df4(&DAT_100abc978);
    local_20 = PTR___sSSSesWP_100995828;
    puStack_18 = PTR___sSSSesWP_100995828;
    puVar2 = PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790;
    _swift_getWitnessTable(PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790,puVar1,&local_20);
    DAT_100a8e510 = puVar2;
  }
  return;
}

