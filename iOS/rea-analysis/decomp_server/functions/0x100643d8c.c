// rea decompile_all
// name: FUN_100643d8c
// address: 0x100643d8c
// body: available
// range: 0x100643d8c-0x100643def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100643d8c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  FUN_1006526fc(&local_58);
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  *(undefined1 *)(param_1 + 4) = local_38;
  return;
}

