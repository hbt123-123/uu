// rea decompile_all
// name: FUN_1002bc838
// address: 0x1002bc838
// body: available
// range: 0x1002bc838-0x1002bc88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bc838(undefined8 *param_1,undefined8 param_2)

{
  undefined *local_38;
  
  local_38 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1002bb8a0(param_2,&local_38);
  _swift_bridgeObjectRelease(param_2);
  *param_1 = local_38;
  return;
}

