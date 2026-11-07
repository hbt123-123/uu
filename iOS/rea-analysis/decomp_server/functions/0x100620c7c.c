// rea decompile_all
// name: FUN_100620c7c
// address: 0x100620c7c
// body: available
// range: 0x100620c7c-0x100620eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100620c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_a0;
  undefined *local_98;
  
  puVar2 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar7 = (long)&local_a0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ab0268;
  FUN_100626130(&DAT_100ab0268,&DAT_1008485b8,&DAT_100ab06a0,&DAT_100848a30);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  uVar8 = param_3;
  FUN_100619ef0(param_3,param_5);
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  uVar8 = param_4;
  FUN_100619ef0(param_4,param_6);
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  puVar3 = puVar2;
  FUN_10061e4c4();
  local_98 = puVar3;
  _swift_setDeallocating(puVar2);
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  puVar3 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  local_a0 = puVar3;
  _swift_arrayDestroy(puVar2 + 0x20,uVar8,puVar3);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar7,1,1,lVar4);
  puVar2 = &DAT_1009e06b0;
  _swift_allocObject(&DAT_1009e06b0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  puVar3 = &DAT_1009e06d8;
  _swift_allocObject(&DAT_1009e06d8,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  *(code **)(puVar3 + 0x30) = FUN_1006268f8;
  *(undefined **)(puVar3 + 0x38) = puVar2;
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,0x100904f48,&TargetProtocolRequirement_100904f50);
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  uVar6 = 0;
  _swift_getTupleTypeMetadata2(0,uVar8,uVar5,0,0);
  puVar2 = &DAT_100ab0648;
  FUN_10003f840(&DAT_100ab0648,&DAT_100ab0268,&DAT_1008485b8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  puVar1 = local_98;
  uVar8 = 0;
  FUN_100617950(0,lVar7,FUN_10062692c,puVar3,local_a0,uVar6,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar3);
  FUN_1006070b4(lVar7);
  return uVar8;
}

