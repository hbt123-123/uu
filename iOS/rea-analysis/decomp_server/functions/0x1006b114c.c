// rea decompile_all
// name: FUN_1006b114c
// address: 0x1006b114c
// body: available
// range: 0x1006b114c-0x1006b11a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b114c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_8;
  
  *param_1 = 0;
  param_1[2] = param_2 + -0x3d4d51c2d82b14b1;
  param_1[1] = param_2 + 0x60ea27eeadc0b5d6;
  param_1[3] = param_2;
  param_1[4] = param_2 + 0x61c8864e7a143579;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = uStack_8;
  param_1[9] = 0;
  return 0;
}

