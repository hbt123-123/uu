// rea decompile_all
// name: FUN_10067eda8
// address: 0x10067eda8
// body: available
// range: 0x10067eda8-0x10067ee17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067eda8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 uStack_39;
  
  FUN_10068e3b8(&local_68);
  FUN_100006cdc(param_2,param_3);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
    param_1[5] = CONCAT17((undefined1)uStack_39,uStack_40);
    param_1[4] = local_48;
    *(undefined4 *)((long)param_1 + 0x2f) = uStack_39;
  }
  return;
}

