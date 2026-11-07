// rea decompile_all
// name: FUN_1000683a8
// address: 0x1000683a8
// body: available
// range: 0x1000683a8-0x100068607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000683a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             long param_13)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long alStack_1b0 [4];
  undefined1 auStack_190 [8];
  undefined8 auStack_188 [3];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined4 local_144;
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
  
  lVar3 = 0;
  local_170 = param_5;
  local_168 = param_3;
  local_160 = param_8;
  local_144 = param_6;
  local_140 = param_7;
  __sSqMa(0,param_13);
  local_158 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_170 + lVar1;
  uVar4 = 0;
  local_150 = lVar3;
  FUN_1000872e8(0,param_13);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  uVar5 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  (**(code **)(*(long *)(param_13 + -8) + 0x38))(lVar10,1,1,param_13);
  uVar9 = local_170;
  FUN_10005f4d0(local_170,&local_138);
  FUN_10005f520(param_9,param_10,param_11);
  uVar2 = local_160;
  _swift_retain(local_160);
  pTVar6 = &TargetProtocolConformanceDescriptor_1000d5684;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d5684,uVar4);
  *(undefined8 *)((long)auStack_188 + lVar1) = uVar4;
  *(TargetProtocolConformanceDescriptor **)((long)auStack_188 + lVar1 + 8) = pTVar6;
  auStack_190[lVar1] = param_11;
  *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x10) = param_9;
  *(undefined8 *)((long)alStack_1b0 + lVar1 + 0x18) = param_10;
  *(undefined8 *)((long)alStack_1b0 + lVar1) = uVar2;
  *(long *)((long)alStack_1b0 + lVar1 + 8) = lVar10;
  FUN_100086ee4(&local_138,uVar4,param_1,param_2,local_168,uVar5,uVar9,local_144,local_140);
  (**(code **)(local_158 + 8))(lVar10,local_150);
  puVar7 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar9 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar7 + 0xb0) = local_a8;
  *(undefined8 *)(puVar7 + 200) = uStack_90;
  *(undefined8 *)(puVar7 + 0xc0) = local_98;
  *(undefined8 *)(puVar7 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar7 + 0xd0) = local_88;
  *(undefined8 *)(puVar7 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar7 + 0xe0) = local_78;
  *(undefined8 *)(puVar7 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar7 + 0x70) = local_e8;
  *(undefined8 *)(puVar7 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar7 + 0x80) = local_d8;
  *(undefined8 *)(puVar7 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar7 + 0x90) = local_c8;
  *(undefined8 *)(puVar7 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar7 + 0xa0) = local_b8;
  *(undefined8 *)(puVar7 + 0x38) = uStack_120;
  *(undefined8 *)(puVar7 + 0x30) = local_128;
  *(undefined8 *)(puVar7 + 0x48) = uStack_110;
  *(undefined8 *)(puVar7 + 0x40) = local_118;
  *(undefined8 *)(puVar7 + 0x58) = uStack_100;
  *(undefined8 *)(puVar7 + 0x50) = local_108;
  *(undefined8 *)(puVar7 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar7 + 0x60) = local_f8;
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined8 *)(puVar7 + 0x28) = uStack_130;
  *(undefined8 *)(puVar7 + 0x20) = local_138;
  puVar8 = puVar7;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar7);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = puVar8;
  return auVar11;
}

