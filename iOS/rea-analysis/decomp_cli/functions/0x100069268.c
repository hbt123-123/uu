// rea decompile_all
// name: FUN_100069268
// address: 0x100069268
// body: available
// range: 0x100069268-0x1000694af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100069268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             long param_13)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined8 auStack_1b0 [4];
  undefined1 auStack_190 [8];
  long alStack_188 [3];
  undefined1 auStack_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
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
  local_168 = param_5;
  local_160 = param_3;
  local_158 = param_8;
  local_144 = param_6;
  local_140 = param_7;
  __sSqMa(0,param_13);
  local_150 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_170 + lVar1;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  uVar4 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  (**(code **)(*(long *)(param_13 + -8) + 0x38))(puVar9,1,1,param_13);
  uVar8 = local_168;
  FUN_10005f4d0(local_168,&local_138);
  FUN_10005f520(param_9,param_10,param_11);
  uVar2 = local_158;
  _swift_retain(local_158);
  pTVar5 = &TargetProtocolConformanceDescriptor_1000d54b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d54b0,lVar3);
  *(long *)((long)alStack_188 + lVar1) = lVar3;
  *(TargetProtocolConformanceDescriptor **)((long)alStack_188 + lVar1 + 8) = pTVar5;
  auStack_190[lVar1] = param_11;
  *(undefined8 *)((long)auStack_1b0 + lVar1 + 0x10) = param_9;
  *(undefined8 *)((long)auStack_1b0 + lVar1 + 0x18) = param_10;
  *(undefined8 *)((long)auStack_1b0 + lVar1) = uVar2;
  *(undefined1 **)((long)auStack_1b0 + lVar1 + 8) = puVar9;
  FUN_100086ee4(&local_138,lVar3,param_1,param_2,local_160,uVar4,uVar8,local_144,local_140);
  (**(code **)(local_150 + 8))(puVar9,lVar3);
  puVar6 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar8 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar6 + 0xb0) = local_a8;
  *(undefined8 *)(puVar6 + 200) = uStack_90;
  *(undefined8 *)(puVar6 + 0xc0) = local_98;
  *(undefined8 *)(puVar6 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar6 + 0xd0) = local_88;
  *(undefined8 *)(puVar6 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar6 + 0xe0) = local_78;
  *(undefined8 *)(puVar6 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar6 + 0x70) = local_e8;
  *(undefined8 *)(puVar6 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x80) = local_d8;
  *(undefined8 *)(puVar6 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar6 + 0x90) = local_c8;
  *(undefined8 *)(puVar6 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar6 + 0xa0) = local_b8;
  *(undefined8 *)(puVar6 + 0x38) = uStack_120;
  *(undefined8 *)(puVar6 + 0x30) = local_128;
  *(undefined8 *)(puVar6 + 0x48) = uStack_110;
  *(undefined8 *)(puVar6 + 0x40) = local_118;
  *(undefined8 *)(puVar6 + 0x58) = uStack_100;
  *(undefined8 *)(puVar6 + 0x50) = local_108;
  *(undefined8 *)(puVar6 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar6 + 0x60) = local_f8;
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x28) = uStack_130;
  *(undefined8 *)(puVar6 + 0x20) = local_138;
  puVar7 = puVar6;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar6);
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = puVar7;
  return auVar10;
}

