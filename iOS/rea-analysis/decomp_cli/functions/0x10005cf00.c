// rea decompile_all
// name: FUN_10005cf00
// address: 0x10005cf00
// body: available
// range: 0x10005cf00-0x10005d0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10005cf00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [8];
  long alStack_158 [3];
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
  local_140 = param_1;
  __sSqMa(0,param_8);
  lVar7 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_140 + lVar1;
  (**(code **)(*(long *)(param_8 + -8) + 0x38))(lVar8,1,1,param_8);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f4d0(param_4,&local_138);
  FUN_10005f520(param_5,param_6,param_7);
  pTVar3 = &TargetProtocolConformanceDescriptor_1000d54cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d54cc,lVar2,&stack0x00000000);
  *(long *)((long)alStack_158 + lVar1) = lVar2;
  *(TargetProtocolConformanceDescriptor **)((long)alStack_158 + lVar1 + 8) = pTVar3;
  auStack_160[lVar1] = (char)param_7;
  *(undefined8 *)((long)auStack_170 + lVar1) = param_5;
  *(undefined8 *)((long)auStack_170 + lVar1 + 8) = param_6;
  FUN_100086c1c(&local_138,lVar2,local_140,param_2,param_3,0,param_4,0,lVar8);
  (**(code **)(lVar7 + 8))(lVar8,lVar2);
  puVar4 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar6 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar4 + 0xb0) = local_a8;
  *(undefined8 *)(puVar4 + 200) = uStack_90;
  *(undefined8 *)(puVar4 + 0xc0) = local_98;
  *(undefined8 *)(puVar4 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar4 + 0xd0) = local_88;
  *(undefined8 *)(puVar4 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar4 + 0xe0) = local_78;
  *(undefined8 *)(puVar4 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x70) = local_e8;
  *(undefined8 *)(puVar4 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x80) = local_d8;
  *(undefined8 *)(puVar4 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x90) = local_c8;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar4 + 0xa0) = local_b8;
  *(undefined8 *)(puVar4 + 0x38) = uStack_120;
  *(undefined8 *)(puVar4 + 0x30) = local_128;
  *(undefined8 *)(puVar4 + 0x48) = uStack_110;
  *(undefined8 *)(puVar4 + 0x40) = local_118;
  *(undefined8 *)(puVar4 + 0x58) = uStack_100;
  *(undefined8 *)(puVar4 + 0x50) = local_108;
  *(undefined8 *)(puVar4 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x60) = local_f8;
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x28) = uStack_130;
  *(undefined8 *)(puVar4 + 0x20) = local_138;
  puVar5 = puVar4;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar4);
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = puVar5;
  return auVar9;
}

