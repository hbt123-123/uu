// rea decompile_all
// name: FUN_1000b6294
// address: 0x1000b6294
// body: available
// range: 0x1000b6294-0x1000b62db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6294(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1000bb7c8(&local_80);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_58;
    param_1[4] = local_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
    param_1[9] = uStack_38;
    param_1[8] = local_40;
    param_1[0xb] = uStack_28;
    param_1[10] = uStack_30;
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
  }
  return;
}

