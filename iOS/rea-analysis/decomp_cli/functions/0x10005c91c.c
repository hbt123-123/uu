// rea decompile_all
// name: FUN_10005c91c
// address: 0x10005c91c
// body: available
// range: 0x10005c91c-0x10005cb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10005c91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_1a0 [4];
  undefined1 auStack_180 [8];
  undefined8 auStack_178 [3];
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  local_158 = param_6;
  local_150 = param_1;
  local_140 = param_5;
  __sSqMa(0,param_11);
  lVar8 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_160 + lVar1;
  uVar3 = 0;
  local_148 = lVar2;
  FUN_1000872e8(0,param_11);
  (**(code **)(*(long *)(param_11 + -8) + 0x38))(puVar9,1,1,param_11);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f4d0(param_4,&local_138);
  FUN_10005f520(param_7,param_8,param_9);
  uVar7 = local_158;
  _swift_retain(local_158);
  pTVar4 = &TargetProtocolConformanceDescriptor_1000d5684;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d5684,uVar3);
  *(undefined8 *)((long)auStack_178 + lVar1) = uVar3;
  *(TargetProtocolConformanceDescriptor **)((long)auStack_178 + lVar1 + 8) = pTVar4;
  auStack_180[lVar1] = param_9;
  *(undefined8 *)((long)auStack_1a0 + lVar1 + 0x10) = param_7;
  *(undefined8 *)((long)auStack_1a0 + lVar1 + 0x18) = param_8;
  *(undefined8 *)((long)auStack_1a0 + lVar1) = uVar7;
  *(undefined1 **)((long)auStack_1a0 + lVar1 + 8) = puVar9;
  FUN_100086ee4(&local_138,uVar3,local_150,param_2,param_3,0,param_4,0,local_140);
  (**(code **)(lVar8 + 8))(puVar9,local_148);
  puVar5 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar7 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar5 + 0xb0) = local_a8;
  *(undefined8 *)(puVar5 + 200) = uStack_90;
  *(undefined8 *)(puVar5 + 0xc0) = local_98;
  *(undefined8 *)(puVar5 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar5 + 0xd0) = local_88;
  *(undefined8 *)(puVar5 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar5 + 0xe0) = local_78;
  *(undefined8 *)(puVar5 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar5 + 0x70) = local_e8;
  *(undefined8 *)(puVar5 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar5 + 0x80) = local_d8;
  *(undefined8 *)(puVar5 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar5 + 0x90) = local_c8;
  *(undefined8 *)(puVar5 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar5 + 0xa0) = local_b8;
  *(undefined8 *)(puVar5 + 0x38) = uStack_120;
  *(undefined8 *)(puVar5 + 0x30) = local_128;
  *(undefined8 *)(puVar5 + 0x48) = uStack_110;
  *(undefined8 *)(puVar5 + 0x40) = local_118;
  *(undefined8 *)(puVar5 + 0x58) = uStack_100;
  *(undefined8 *)(puVar5 + 0x50) = local_108;
  *(undefined8 *)(puVar5 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar5 + 0x60) = local_f8;
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x28) = uStack_130;
  *(undefined8 *)(puVar5 + 0x20) = local_138;
  puVar6 = puVar5;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar5);
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = puVar6;
  return auVar10;
}

