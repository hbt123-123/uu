// rea decompile_all
// name: FUN_1007c7c08
// address: 0x1007c7c08
// body: available
// range: 0x1007c7c08-0x1007c7c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c7c08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100abcfd0 == (undefined *)0x0) {
    puVar1 = &DAT_100abcfc8;
    FUN_1007b5df4();
    puVar2 = puVar1;
    FUN_1007c7c6c();
    puVar3 = PTR___sSayxGSesSeRzlMc_1009958a0;
    local_28 = puVar2;
    _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_1009958a0,puVar1,&local_28);
    DAT_100abcfd0 = puVar3;
  }
  return;
}

