// rea decompile_all
// name: FUN_100547938
// address: 0x100547938
// body: available
// range: 0x100547938-0x10054799b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100547938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  puVar1 = &DAT_100aab708;
  FUN_100004bb4(&DAT_100aab708,&DAT_100838028);
  FUN_100546cb4(param_1,&local_40,param_2,puVar1);
  return;
}

