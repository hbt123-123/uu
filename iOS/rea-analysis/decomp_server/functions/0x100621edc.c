// rea decompile_all
// name: FUN_100621edc
// address: 0x100621edc
// body: available
// range: 0x100621edc-0x10062232f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100621edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  local_e8 = param_15;
  local_128 = param_10;
  local_160 = param_14;
  local_110 = param_13;
  local_150 = param_12;
  local_140 = param_11;
  puVar7 = &DAT_100aaffc0;
  local_158 = param_8;
  local_148 = param_6;
  local_120 = param_7;
  local_118 = param_2;
  local_108 = param_3;
  local_100 = param_1;
  local_f0 = param_4;
  local_e0 = param_5;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  local_f8 = auStack_170 + -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100ab0268;
  FUN_100626130(&DAT_100ab0268,&DAT_1008485b8,&DAT_100ab06a0,&DAT_100848a30);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 0xb;
  *(undefined8 *)(puVar7 + 0x10) = 5;
  FUN_100619ef0(param_6,param_11);
  *(undefined8 *)(puVar7 + 0x20) = param_6;
  FUN_100619ef0(param_7,param_12);
  uVar12 = local_158;
  *(undefined8 *)(puVar7 + 0x28) = param_7;
  uVar14 = local_158;
  FUN_100619ef0(local_158,param_13);
  uVar13 = local_160;
  *(undefined8 *)(puVar7 + 0x30) = uVar14;
  uVar14 = param_9;
  FUN_100619ef0(param_9,local_160);
  uVar10 = local_128;
  *(undefined8 *)(puVar7 + 0x38) = uVar14;
  uVar14 = local_128;
  FUN_100619ef0(local_128,local_e8);
  *(undefined8 *)(puVar7 + 0x40) = uVar14;
  puVar8 = puVar7;
  FUN_10061e4c4();
  local_130 = puVar8;
  _swift_setDeallocating(puVar7);
  uVar14 = *(undefined8 *)(puVar7 + 0x10);
  puVar8 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  local_138 = puVar8;
  _swift_arrayDestroy(puVar7 + 0x20,uVar14,puVar8);
  lVar9 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(local_f8,1,1,lVar9);
  puVar7 = &DAT_1009e07a0;
  _swift_allocObject(&DAT_1009e07a0,0x88,7);
  uVar3 = local_120;
  uVar1 = local_140;
  uVar11 = local_148;
  uVar14 = local_150;
  *(undefined8 *)(puVar7 + 0x10) = local_148;
  *(undefined8 *)(puVar7 + 0x18) = local_120;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(undefined8 *)(puVar7 + 0x28) = param_9;
  local_168 = param_9;
  *(undefined8 *)(puVar7 + 0x30) = uVar10;
  *(undefined8 *)(puVar7 + 0x38) = local_140;
  *(undefined8 *)(puVar7 + 0x40) = local_150;
  *(undefined8 *)(puVar7 + 0x48) = local_110;
  *(undefined8 *)(puVar7 + 0x50) = uVar13;
  *(undefined8 *)(puVar7 + 0x58) = local_e8;
  *(undefined8 *)(puVar7 + 0x60) = local_100;
  *(undefined8 *)(puVar7 + 0x68) = local_118;
  *(undefined8 *)(puVar7 + 0x70) = local_108;
  *(undefined8 *)(puVar7 + 0x78) = local_f0;
  *(undefined8 *)(puVar7 + 0x80) = local_e0;
  puVar8 = &DAT_1009e07c8;
  _swift_allocObject(&DAT_1009e07c8,0x70,7);
  uVar6 = local_e8;
  uVar4 = local_110;
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar12;
  *(undefined8 *)(puVar8 + 0x28) = param_9;
  *(undefined8 *)(puVar8 + 0x30) = uVar10;
  *(undefined8 *)(puVar8 + 0x38) = uVar1;
  *(undefined8 *)(puVar8 + 0x40) = uVar14;
  *(undefined8 *)(puVar8 + 0x48) = local_110;
  *(undefined8 *)(puVar8 + 0x50) = uVar13;
  *(undefined8 *)(puVar8 + 0x58) = local_e8;
  *(code **)(puVar8 + 0x60) = FUN_100626b28;
  *(undefined **)(puVar8 + 0x68) = puVar7;
  _swift_unknownObjectRetain(local_100);
  _swift_unknownObjectRetain(local_118);
  _swift_unknownObjectRetain(local_108);
  _swift_unknownObjectRetain(local_f0);
  _swift_unknownObjectRetain(local_e0);
  uVar10 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar11,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar11 = 0xff;
  local_d8 = uVar10;
  _swift_getAssociatedTypeWitness
            (0xff,uVar14,local_120,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar14 = 0xff;
  local_d0 = uVar11;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,uVar12,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar12 = 0xff;
  local_c8 = uVar14;
  _swift_getAssociatedTypeWitness
            (0xff,uVar13,local_168,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar13 = 0xff;
  local_c0 = uVar12;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,local_128,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar12 = 0;
  local_b8 = uVar13;
  _swift_getTupleTypeMetadata(0,5,&local_d8,0,0);
  puVar7 = &DAT_100ab0648;
  FUN_10003f840(&DAT_100ab0648,&DAT_100ab0268,&DAT_1008485b8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  puVar5 = local_f8;
  puVar2 = local_130;
  uVar13 = 0;
  FUN_100617950(0,local_f8,FUN_100626b90,puVar8,local_138,uVar12,puVar7);
  _swift_release(puVar2);
  _swift_release(puVar8);
  FUN_1006070b4(puVar5);
  return uVar13;
}

