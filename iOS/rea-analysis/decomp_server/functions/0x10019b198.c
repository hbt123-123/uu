// rea decompile_all
// name: FUN_10019b198
// address: 0x10019b198
// body: available
// range: 0x10019b198-0x10019b1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019b198(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  uStack_38 = puVar1[3];
  local_40 = puVar1[2];
  uStack_28 = puVar1[5];
  uStack_30 = puVar1[4];
  FUN_10061630c(param_1,&local_50);
  return;
}

