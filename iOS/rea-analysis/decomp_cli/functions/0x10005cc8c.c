// rea decompile_all
// name: FUN_10005cc8c
// address: 0x10005cc8c
// body: available
// range: 0x10005cc8c-0x10005cdef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10005cc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = 0;
  __sSqMa(0,param_9);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10005f4d0(param_4,&local_130);
  FUN_10005f520(param_6,param_7,param_8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d54cc,uVar1,&stack0x00000008);
  FUN_100086c1c(&local_130,uVar1,param_1,param_2,param_3,0,param_4,0,param_5,param_6,param_7,
                (char)param_8);
  puVar2 = &DAT_100104040;
  FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
  uVar1 = 0xf0;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0xb8) = uStack_98;
  *(undefined8 *)(puVar2 + 0xb0) = uStack_a0;
  *(undefined8 *)(puVar2 + 200) = uStack_88;
  *(undefined8 *)(puVar2 + 0xc0) = local_90;
  *(undefined8 *)(puVar2 + 0xd8) = uStack_78;
  *(undefined8 *)(puVar2 + 0xd0) = uStack_80;
  *(undefined8 *)(puVar2 + 0xe8) = uStack_68;
  *(undefined8 *)(puVar2 + 0xe0) = local_70;
  *(undefined8 *)(puVar2 + 0x78) = uStack_d8;
  *(undefined8 *)(puVar2 + 0x70) = uStack_e0;
  *(undefined8 *)(puVar2 + 0x88) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x80) = local_d0;
  *(undefined8 *)(puVar2 + 0x98) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x90) = uStack_c0;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_a8;
  *(undefined8 *)(puVar2 + 0xa0) = local_b0;
  *(undefined8 *)(puVar2 + 0x38) = uStack_118;
  *(undefined8 *)(puVar2 + 0x30) = uStack_120;
  *(undefined8 *)(puVar2 + 0x48) = uStack_108;
  *(undefined8 *)(puVar2 + 0x40) = local_110;
  *(undefined8 *)(puVar2 + 0x58) = uStack_f8;
  *(undefined8 *)(puVar2 + 0x50) = uStack_100;
  *(undefined8 *)(puVar2 + 0x68) = uStack_e8;
  *(undefined8 *)(puVar2 + 0x60) = local_f0;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x28) = uStack_128;
  *(undefined8 *)(puVar2 + 0x20) = local_130;
  puVar3 = puVar2;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar2);
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = puVar3;
  return auVar4;
}

