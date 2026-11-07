// rea decompile_all
// name: FUN_100621758
// address: 0x100621758
// body: available
// range: 0x100621758-0x100621b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100621758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  local_138 = param_12;
  local_140 = param_11;
  local_e8 = param_10;
  local_118 = param_9;
  puVar6 = &DAT_100aaffc0;
  local_130 = param_6;
  local_128 = param_8;
  local_120 = param_5;
  local_110 = param_1;
  local_f0 = param_2;
  local_e0 = param_4;
  local_d8 = param_3;
  local_d0 = param_7;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = (long)&local_140 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar6 = &DAT_100ab0268;
  local_108 = lVar14;
  FUN_100626130(&DAT_100ab0268,&DAT_1008485b8,&DAT_100ab06a0,&DAT_100848a30);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 9;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  FUN_100619ef0(param_5,param_9);
  *(undefined8 *)(puVar6 + 0x20) = param_5;
  FUN_100619ef0(param_6,param_10);
  uVar11 = local_140;
  *(undefined8 *)(puVar6 + 0x28) = param_6;
  uVar13 = local_d0;
  FUN_100619ef0(local_d0,local_140);
  uVar1 = local_128;
  uVar12 = local_138;
  *(undefined8 *)(puVar6 + 0x30) = uVar13;
  uVar13 = local_128;
  FUN_100619ef0(local_128,local_138);
  *(undefined8 *)(puVar6 + 0x38) = uVar13;
  puVar7 = puVar6;
  FUN_10061e4c4();
  local_f8 = puVar7;
  _swift_setDeallocating(puVar6);
  uVar13 = *(undefined8 *)(puVar6 + 0x10);
  puVar7 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  local_100 = puVar7;
  _swift_arrayDestroy(puVar6 + 0x20,uVar13,puVar7);
  lVar8 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar14,1,1,lVar8);
  puVar6 = &DAT_1009e0750;
  _swift_allocObject(&DAT_1009e0750,0x70,7);
  uVar5 = local_d0;
  uVar9 = local_110;
  uVar2 = local_118;
  uVar10 = local_120;
  uVar13 = local_130;
  *(undefined8 *)(puVar6 + 0x10) = local_120;
  *(undefined8 *)(puVar6 + 0x18) = local_130;
  *(undefined8 *)(puVar6 + 0x20) = local_d0;
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  *(undefined8 *)(puVar6 + 0x30) = local_118;
  *(undefined8 *)(puVar6 + 0x38) = local_e8;
  *(undefined8 *)(puVar6 + 0x40) = uVar11;
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  *(undefined8 *)(puVar6 + 0x50) = local_110;
  *(undefined8 *)(puVar6 + 0x58) = local_f0;
  *(undefined8 *)(puVar6 + 0x60) = local_d8;
  *(undefined8 *)(puVar6 + 0x68) = local_e0;
  puVar7 = &DAT_1009e0778;
  _swift_allocObject(&DAT_1009e0778,0x60,7);
  uVar4 = local_e8;
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  *(undefined8 *)(puVar7 + 0x18) = uVar13;
  *(undefined8 *)(puVar7 + 0x20) = uVar5;
  *(undefined8 *)(puVar7 + 0x28) = uVar1;
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  *(undefined8 *)(puVar7 + 0x38) = local_e8;
  *(undefined8 *)(puVar7 + 0x40) = uVar11;
  *(undefined8 *)(puVar7 + 0x48) = uVar12;
  *(code **)(puVar7 + 0x50) = FUN_100626a48;
  *(undefined **)(puVar7 + 0x58) = puVar6;
  _swift_unknownObjectRetain(uVar9);
  _swift_unknownObjectRetain(local_f0);
  _swift_unknownObjectRetain(local_d8);
  _swift_unknownObjectRetain(local_e0);
  uVar9 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar10,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar10 = 0xff;
  local_c8 = uVar9;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar13,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar13 = 0xff;
  local_c0 = uVar10;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,local_d0,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar11 = 0xff;
  local_b8 = uVar13;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar1,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar12 = 0;
  local_b0 = uVar11;
  _swift_getTupleTypeMetadata(0,4,&local_c8,0,0);
  puVar6 = &DAT_100ab0648;
  FUN_10003f840(&DAT_100ab0648,&DAT_100ab0268,&DAT_1008485b8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  puVar3 = local_f8;
  lVar8 = local_108;
  uVar11 = 0;
  FUN_100617950(0,local_108,FUN_100626aa8,puVar7,local_100,uVar12,puVar6);
  _swift_release(puVar3);
  _swift_release(puVar7);
  FUN_1006070b4(lVar8);
  return uVar11;
}

