// rea decompile_all
// name: FUN_10005c298
// address: 0x10005c298
// body: available
// range: 0x10005c298-0x10005c48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10005c298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [8];
  undefined8 auStack_168 [3];
  undefined1 auStack_150 [8];
  undefined8 local_148;
  long local_140;
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
  local_148 = param_1;
  __sSqMa(0,param_8);
  lVar7 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_150 + lVar1;
  uVar3 = 0;
  local_140 = lVar2;
  FUN_1000872e8(0,param_8);
  (**(code **)(*(long *)(param_8 + -8) + 0x38))(puVar8,1,1,param_8);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f4d0(param_4,&local_138);
  FUN_10005f520(param_5,param_6,param_7);
  pTVar4 = &TargetProtocolConformanceDescriptor_1000d565c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d565c,uVar3,&stack0x00000000);
  *(undefined8 *)((long)auStack_168 + lVar1) = uVar3;
  *(TargetProtocolConformanceDescriptor **)((long)auStack_168 + lVar1 + 8) = pTVar4;
  auStack_170[lVar1] = (char)param_7;
  *(undefined8 *)((long)auStack_180 + lVar1) = param_5;
  *(undefined8 *)((long)auStack_180 + lVar1 + 8) = param_6;
  FUN_100086c1c(&local_138,uVar3,local_148,param_2,param_3,0,param_4,0,puVar8);
  (**(code **)(lVar7 + 8))(puVar8,local_140);
  puVar5 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar3 = 0xf0;
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
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = puVar6;
  return auVar9;
}

