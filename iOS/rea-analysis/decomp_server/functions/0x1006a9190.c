// rea decompile_all
// name: FUN_1006a9190
// address: 0x1006a9190
// body: available
// range: 0x1006a9190-0x1006a91f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006a9190(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_1006a8708();
  *puVar1 = &PTR_thunk_FUN_1006a91f8_1009e6e48;
  if (*(char *)(puVar1 + 5) == '\x01') {
    FUN_1006b60cc();
    param_1[9] = puVar1;
    FUN_1006b6990();
    FUN_1006b6990(param_1[9],0x65,0x10);
  }
  return param_1;
}

