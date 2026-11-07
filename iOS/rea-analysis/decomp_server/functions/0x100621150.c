// rea decompile_all
// name: FUN_100621150
// address: 0x100621150
// body: available
// range: 0x100621150-0x10062144f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100621150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  
  local_d8 = param_9;
  puVar3 = &DAT_100aaffc0;
  local_d0 = param_3;
  local_c8 = param_6;
  local_c0 = param_4;
  local_a0 = param_1;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar10 = (long)&local_e0 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ab0268;
  local_b8 = lVar10;
  FUN_100626130(&DAT_100ab0268,&DAT_1008485b8,&DAT_100ab06a0,&DAT_100848a30);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  FUN_100619ef0(param_4,param_7);
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  uVar11 = param_5;
  local_e0 = param_2;
  FUN_100619ef0(param_5,param_8);
  uVar1 = local_c8;
  uVar9 = local_d0;
  *(undefined8 *)(puVar3 + 0x28) = uVar11;
  uVar11 = local_c8;
  FUN_100619ef0(local_c8,param_9);
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  puVar4 = puVar3;
  FUN_10061e4c4();
  local_a8 = puVar4;
  _swift_setDeallocating(puVar3);
  uVar11 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  local_b0 = puVar4;
  _swift_arrayDestroy(puVar3 + 0x20,uVar11,puVar4);
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar10,1,1,lVar5);
  puVar3 = &DAT_1009e0700;
  _swift_allocObject(&DAT_1009e0700,0x58,7);
  uVar7 = local_c0;
  uVar11 = local_d8;
  *(undefined8 *)(puVar3 + 0x10) = local_c0;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_8;
  *(undefined8 *)(puVar3 + 0x38) = local_d8;
  *(undefined8 *)(puVar3 + 0x40) = local_a0;
  *(undefined8 *)(puVar3 + 0x48) = param_2;
  *(undefined8 *)(puVar3 + 0x50) = uVar9;
  puVar4 = &DAT_1009e0728;
  _swift_allocObject(&DAT_1009e0728,0x50,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = param_5;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = param_7;
  *(undefined8 *)(puVar4 + 0x30) = param_8;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(code **)(puVar4 + 0x40) = FUN_100626980;
  *(undefined **)(puVar4 + 0x48) = puVar3;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,uVar7,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar11,uVar1,0x100904f48,&TargetProtocolRequirement_100904f50);
  _swift_unknownObjectRetain(local_a0);
  _swift_unknownObjectRetain(local_e0);
  _swift_unknownObjectRetain(uVar9);
  uVar11 = 0;
  _swift_getTupleTypeMetadata3(0,uVar6,uVar7,uVar8,0,0);
  puVar3 = &DAT_100ab0648;
  FUN_10003f840(&DAT_100ab0648,&DAT_100ab0268,&DAT_1008485b8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  puVar2 = local_a8;
  lVar5 = local_b8;
  uVar9 = 0;
  FUN_100617950(0,local_b8,FUN_1006269dc,puVar4,local_b0,uVar11,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  FUN_1006070b4(lVar5);
  return uVar9;
}

