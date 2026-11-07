// rea decompile_all
// name: FUN_1004ee68c
// address: 0x1004ee68c
// body: available
// range: 0x1004ee68c-0x1004ee73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ee68c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(ulong *)(param_1 + 0x20);
  if (local_80 >> 0x3c < 0xf) {
    FUN_1004f5120(&local_90,auStack_70);
    puVar1 = auStack_70;
    FUN_1004f5120(puVar1,&local_58);
    uStack_a8 = uStack_50;
    local_b0 = local_58;
    local_a0 = local_48;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1004f2f2c();
    (*pcVar2)(&local_b0,4,&DAT_1009cd418,puVar1,param_3,param_4);
  }
  return;
}

