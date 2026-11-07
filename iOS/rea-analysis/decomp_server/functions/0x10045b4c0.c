// rea decompile_all
// name: FUN_10045b4c0
// address: 0x10045b4c0
// body: available
// range: 0x10045b4c0-0x10045b56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045b4c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_a0 = *(long *)(param_1 + 0x60);
  if (local_a0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x58);
    local_b0 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    local_78 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    local_68 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    uStack_90 = *(undefined8 *)(param_1 + 0x70);
    local_98 = *(undefined8 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x80);
    local_88 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_100461314();
    (*pcVar1)(&local_b0,4,&DAT_1009c45f8,param_1,param_3,param_4);
  }
  return;
}

