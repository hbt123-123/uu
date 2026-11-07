// rea decompile_all
// name: FUN_100068f64
// address: 0x100068f64
// body: available
// range: 0x100068f64-0x100069117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100068f64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
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
  
  uVar1 = 0;
  __sSqMa(0,param_14);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  uVar4 = param_1;
  FUN_100067074(param_1,param_2,param_4);
  FUN_10005f4d0(param_5,&local_138);
  FUN_10005f520(param_10,param_11,param_12);
  _swift_retain(param_8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d54b0,uVar1);
  FUN_100086ee4(&local_138,uVar1,param_1,param_2,param_3,uVar4,param_5,param_6,param_7,param_8,
                param_9,param_10,param_11,param_12);
  puVar2 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar4 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0xb8) = uStack_a0;
  *(undefined8 *)(puVar2 + 0xb0) = local_a8;
  *(undefined8 *)(puVar2 + 200) = uStack_90;
  *(undefined8 *)(puVar2 + 0xc0) = local_98;
  *(undefined8 *)(puVar2 + 0xd8) = uStack_80;
  *(undefined8 *)(puVar2 + 0xd0) = local_88;
  *(undefined8 *)(puVar2 + 0xe8) = uStack_70;
  *(undefined8 *)(puVar2 + 0xe0) = local_78;
  *(undefined8 *)(puVar2 + 0x78) = uStack_e0;
  *(undefined8 *)(puVar2 + 0x70) = local_e8;
  *(undefined8 *)(puVar2 + 0x88) = uStack_d0;
  *(undefined8 *)(puVar2 + 0x80) = local_d8;
  *(undefined8 *)(puVar2 + 0x98) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x90) = local_c8;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_b0;
  *(undefined8 *)(puVar2 + 0xa0) = local_b8;
  *(undefined8 *)(puVar2 + 0x38) = uStack_120;
  *(undefined8 *)(puVar2 + 0x30) = local_128;
  *(undefined8 *)(puVar2 + 0x48) = uStack_110;
  *(undefined8 *)(puVar2 + 0x40) = local_118;
  *(undefined8 *)(puVar2 + 0x58) = uStack_100;
  *(undefined8 *)(puVar2 + 0x50) = local_108;
  *(undefined8 *)(puVar2 + 0x68) = uStack_f0;
  *(undefined8 *)(puVar2 + 0x60) = local_f8;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x28) = uStack_130;
  *(undefined8 *)(puVar2 + 0x20) = local_138;
  puVar3 = puVar2;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar2);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = puVar3;
  return auVar5;
}

