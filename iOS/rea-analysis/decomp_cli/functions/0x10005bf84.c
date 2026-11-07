// rea decompile_all
// name: FUN_10005bf84
// address: 0x10005bf84
// body: available
// range: 0x10005bf84-0x10005c1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10005bf84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined8 auStack_190 [2];
  undefined1 auStack_180 [8];
  undefined8 auStack_178 [3];
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined8 local_150;
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
  
  lVar3 = 0;
  local_158 = param_4;
  local_150 = param_6;
  local_148 = param_1;
  __sSqMa(0,param_9);
  lVar9 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_160 + lVar1;
  uVar4 = 0;
  local_140 = lVar3;
  FUN_1000872e8(0,param_9);
  lVar3 = *(long *)(param_9 + -8);
  (**(code **)(lVar3 + 0x10))(puVar10,param_5,param_9);
  (**(code **)(lVar3 + 0x38))(puVar10,0,1,param_9);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  uVar8 = local_158;
  FUN_10005f4d0(local_158,&local_138);
  uVar2 = local_150;
  FUN_10005f520(local_150,param_7,param_8);
  pTVar5 = &TargetProtocolConformanceDescriptor_1000d565c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d565c,uVar4,&stack0x00000008);
  *(undefined8 *)((long)auStack_178 + lVar1) = uVar4;
  *(TargetProtocolConformanceDescriptor **)((long)auStack_178 + lVar1 + 8) = pTVar5;
  auStack_180[lVar1] = (char)param_8;
  *(undefined8 *)((long)auStack_190 + lVar1) = uVar2;
  *(undefined8 *)((long)auStack_190 + lVar1 + 8) = param_7;
  FUN_100086c1c(&local_138,uVar4,local_148,param_2,param_3,0,uVar8,0,puVar10);
  (**(code **)(lVar9 + 8))(puVar10,local_140);
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
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = puVar7;
  return auVar11;
}

