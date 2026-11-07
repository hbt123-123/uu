// rea decompile_all
// name: FUN_100357be0
// address: 0x100357be0
// body: available
// range: 0x100357be0-0x100357c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100357be0(long param_1)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_40 = PTR___sBbWV_100995728 + 0x40;
  puStack_38 = PTR___sBoWV_100995740 + 0x40;
  local_30 = &DAT_10081bde8;
  puStack_28 = &DAT_10081be18;
  puStack_18 = PTR___syycWV_100995e98 + 0x40;
  local_20 = &DAT_10081be30;
  _swift_initClassMetadata2(param_1,0,6,&local_40,param_1 + 0x60);
  return;
}

