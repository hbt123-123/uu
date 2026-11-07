// rea decompile_all
// name: FUN_100363d24
// address: 0x100363d24
// body: available
// range: 0x100363d24-0x100363d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100363d24(long param_1)

{
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_38 = &DAT_10081ccf8;
  puStack_30 = &DAT_10081cd10;
  local_28 = PTR___sBi64_WV_100995738 + 0x40;
  puStack_20 = &DAT_10081cd28;
  local_18 = &DAT_10081cd28;
  _swift_updateClassMetadata2(param_1,0x100,5,&local_38,param_1 + 0x270);
  return;
}

