// rea decompile_all
// name: FUN_1004fa70c
// address: 0x1004fa70c
// body: available
// range: 0x1004fa70c-0x1004fa80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa70c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_7 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_ac = param_6;
  (**(code **)(lVar3 + 0x10))(auStack_b0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  FUN_1004f9894(param_3,&local_a8);
  (**(code **)(lVar3 + 0x20))(param_1,auStack_b0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_7);
  uStack_68 = param_10;
  lVar2 = 0;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1004fa8d0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  puVar1[1] = uStack_a0;
  *puVar1 = local_a8;
  puVar1[3] = uStack_90;
  puVar1[2] = local_98;
  puVar1[4] = local_88;
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(char *)(puVar1 + 1) = (char)local_ac;
  return;
}

