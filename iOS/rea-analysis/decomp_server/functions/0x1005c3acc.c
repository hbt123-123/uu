// rea decompile_all
// name: FUN_1005c3acc
// address: 0x1005c3acc
// body: available
// range: 0x1005c3acc-0x1005c3b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c3acc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  local_50 = *(long *)(param_1 + 0x30);
  if (local_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    local_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1004f9c30();
    (*pcVar1)(&local_60,2,&DAT_1009d2420,param_1,param_3,param_4);
  }
  return;
}

