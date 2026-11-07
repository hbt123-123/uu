// rea decompile_all
// name: FUN_100315174
// address: 0x100315174
// body: available
// range: 0x100315174-0x1003151cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100315174(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  puStack_20 = PTR___sBOWV_100995720 + 0x40;
  local_28 = &DAT_100819af0;
  local_18 = PTR___sBoWV_100995740 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x60);
  return;
}

