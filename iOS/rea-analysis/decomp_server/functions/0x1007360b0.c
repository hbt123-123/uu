// rea decompile_all
// name: FUN_1007360b0
// address: 0x1007360b0
// body: available
// range: 0x1007360b0-0x10073617b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007360b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  
  (**(code **)(param_1 + 0x70))(param_1,"report");
  (**(code **)(param_1 + 0x20))(param_1,"version","3.2.0");
  (**(code **)(param_1 + 0x20))(param_1,"id",param_3);
  (**(code **)(param_1 + 0x20))(param_1,"process_name",param_4);
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar1 = 0;
  _time(0);
  (*pcVar2)(param_1,"timestamp",uVar1);
  (**(code **)(param_1 + 0x20))(param_1,"type",param_2);
                    /* WARNING: Could not recover jumptable at 0x000100736178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}

