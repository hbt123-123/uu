// rea decompile_all
// name: FUN_1000854bc
// address: 0x1000854bc
// body: available
// range: 0x1000854bc-0x1000855d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000854bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  undefined8 auStack_b0 [2];
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  
  lVar2 = 0;
  local_98 = param_14;
  local_90 = param_15;
  local_88 = param_7;
  local_80 = param_3;
  local_74 = param_4;
  local_70 = param_5;
  _swift_getAssociatedTypeWitness();
  lVar4 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&local_a0 + lVar1;
  local_a0 = lVar2;
  *(undefined8 *)((long)auStack_b0 + lVar1) = param_6;
  (*param_8)(lVar3,param_11,param_12,param_13,param_1,param_2,local_80,local_74,local_70);
  if (unaff_x21 == 0) {
    (**(code **)(local_90 + 0x20))(local_88,lVar3,param_11,param_12,param_13,param_1,local_98);
    (**(code **)(lVar4 + 8))(lVar3,local_a0);
  }
  return;
}

