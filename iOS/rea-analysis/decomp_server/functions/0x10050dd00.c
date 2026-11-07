// rea decompile_all
// name: FUN_10050dd00
// address: 0x10050dd00
// body: available
// range: 0x10050dd00-0x10050ddf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050dd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar2 = *(undefined8 *)(param_5 + 8);
  uVar1 = 0;
  local_120 = param_3;
  uStack_118 = param_4;
  local_110 = param_5;
  uStack_108 = param_6;
  local_100 = param_7;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_3;
  _swift_getAssociatedTypeWitness(0,uVar2,param_3,0x100900ffc,&TargetProtocolRequirement_10090100c);
  _swift_getAssociatedConformanceWitness
            (uVar2,param_3,uVar1,0x100900ffc,&TargetProtocolRequirement_100901004);
  FUN_10050d094(param_1,param_2,FUN_10050e658,auStack_b0,FUN_10050e688,auStack_f0,FUN_10050e6a8,
                auStack_130,uVar1,param_4,uVar2);
  return;
}

