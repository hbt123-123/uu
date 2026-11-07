// rea decompile_all
// name: FUN_1000a001c
// address: 0x1000a001c
// body: available
// range: 0x1000a001c-0x1000a0073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a001c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 *local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_50;
  local_30 = **(undefined8 **)(unaff_x20 + 0x10);
  uStack_28 = (*(undefined8 **)(unaff_x20 + 0x10))[1];
  local_40 = &local_30;
  pcVar1 = FUN_1000a008c;
  FUN_10009a1b0();
  *param_1 = pcVar1;
  param_1[1] = puVar2;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}

