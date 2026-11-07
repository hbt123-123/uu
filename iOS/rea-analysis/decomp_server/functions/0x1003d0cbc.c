// rea decompile_all
// name: FUN_1003d0cbc
// address: 0x1003d0cbc
// body: available
// range: 0x1003d0cbc-0x1003d0d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d0cbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100a8c748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100a8c740;
  FUN_100004c48(&DAT_100a8c740,&DAT_1008224d8);
  puVar2 = &DAT_100a78008;
  FUN_100005c90(&DAT_100a78008,PTR___s10Foundation4DateVMa_100996208,
                PTR___s10Foundation4DateVSeAAMc_100996228);
  local_30 = PTR___sSSSesWP_100995828;
  puVar3 = PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790;
  puStack_28 = puVar2;
  _swift_getWitnessTable(PTR___sSDyxq_GSesSeRzSeR_rlMc_100995790,puVar1,&local_30);
  DAT_100a8c748 = puVar3;
  return;
}

