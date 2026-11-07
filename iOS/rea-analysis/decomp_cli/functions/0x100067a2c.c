// rea decompile_all
// name: FUN_100067a2c
// address: 0x100067a2c
// body: available
// range: 0x100067a2c-0x100067b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100067a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_80 [2];
  undefined8 local_70;
  undefined4 local_64;
  
  lVar2 = *(long *)(param_9 + -8);
  lVar1 = -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&local_70 + lVar1;
  local_70 = param_8;
  local_64 = param_7;
  (**(code **)(lVar2 + 0x10))(lVar3,param_2,param_9);
  *(undefined8 *)((long)auStack_80 + lVar1) = param_10;
  FUN_1000675f8(param_1,lVar3,param_3,param_4,local_70,param_5,param_6,local_64,param_9);
  (**(code **)(lVar2 + 8))(param_2,param_9);
  return;
}

