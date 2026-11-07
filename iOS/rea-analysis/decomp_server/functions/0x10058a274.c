// rea decompile_all
// name: FUN_10058a274
// address: 0x10058a274
// body: available
// range: 0x10058a274-0x10058a313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058a274(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  local_90 = *(long *)(param_1 + 0x20);
  if (local_90 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    local_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    local_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    local_58 = *(undefined8 *)(param_1 + 0x58);
    local_48 = *(undefined1 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    local_88 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1005a8be8();
    (*pcVar1)(&local_90,3,&DAT_1009d4858,param_1,param_3,param_4);
  }
  return;
}

