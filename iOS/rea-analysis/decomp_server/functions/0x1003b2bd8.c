// rea decompile_all
// name: FUN_1003b2bd8
// address: 0x1003b2bd8
// body: available
// range: 0x1003b2bd8-0x1003b2c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b2bd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[2] = param_3;
  param_1[3] = unaff_x20;
  param_1[1] = param_2;
  FUN_1003b2984(param_2,param_3);
  *param_1 = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1003b2c18;
  return auVar1;
}

