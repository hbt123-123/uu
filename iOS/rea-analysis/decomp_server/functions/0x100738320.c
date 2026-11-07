// rea decompile_all
// name: FUN_100738320
// address: 0x100738320
// body: available
// range: 0x100738320-0x100738437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100738320(undefined8 *param_1,long param_2)

{
  (**(code **)(param_2 + 0x70))(param_2,0);
  (**(code **)(param_2 + 0x18))(param_2,"image_addr",*param_1);
  (**(code **)(param_2 + 0x18))(param_2,"image_vmaddr",param_1[1]);
  (**(code **)(param_2 + 0x18))(param_2,"image_size",param_1[2]);
  (**(code **)(param_2 + 0x20))(param_2,"name",param_1[3]);
  (**(code **)(param_2 + 0x60))(param_2,"uuid",param_1[4]);
  (**(code **)(param_2 + 0x10))(param_2,"cpu_type",(long)*(int *)(param_1 + 5));
  (**(code **)(param_2 + 0x10))(param_2,"cpu_subtype",(long)*(int *)((long)param_1 + 0x2c));
  if (param_1[6] != 0) {
    (**(code **)(param_2 + 0x20))(param_2,"crash_info_message");
  }
  if (param_1[7] != 0) {
    (**(code **)(param_2 + 0x20))(param_2,"crash_info_message2");
  }
                    /* WARNING: Could not recover jumptable at 0x000100738434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x80))(param_2);
  return;
}

