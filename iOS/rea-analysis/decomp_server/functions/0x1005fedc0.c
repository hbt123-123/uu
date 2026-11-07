// rea decompile_all
// name: FUN_1005fedc0
// address: 0x1005fedc0
// body: available
// range: 0x1005fedc0-0x1005fee0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fedc0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined1 local_24;
  
  FUN_100600b18(&local_64);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_3c;
    param_1[4] = local_44;
    param_1[7] = uStack_2c;
    param_1[6] = local_34;
    *(undefined1 *)(param_1 + 8) = local_24;
    param_1[1] = uStack_5c;
    *param_1 = local_64;
    param_1[3] = uStack_4c;
    param_1[2] = local_54;
  }
  return;
}

