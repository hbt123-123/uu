// rea decompile_all
// name: FUN_10061a910
// address: 0x10061a910
// body: available
// range: 0x10061a910-0x10061ab1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061a910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = param_9;
  puVar1 = &DAT_100aaffc0;
  local_80 = param_1;
  uStack_78 = param_2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar8 = auStack_90 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_1009e0048;
  _swift_allocObject(&DAT_1009e0048,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  uVar2 = 0xff;
  local_88 = param_8;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar3 = 0xff;
  __sSaMa(0xff,uVar2);
  uVar4 = 0;
  FUN_100616218(0,uVar3);
  _swift_retain(param_4);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar4);
  uVar3 = local_80;
  FUN_1006177ec(local_80,uStack_78,FUN_10061bd34,puVar1,param_5,uVar4,param_7,pTVar5);
  _swift_release(puVar1);
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar8,1,1,lVar6);
  puVar1 = &DAT_1009e0070;
  _swift_allocObject(&DAT_1009e0070,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = local_88;
  *(undefined8 *)(puVar1 + 0x30) = local_70;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,uVar2,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8);
  uVar2 = 0;
  __sSaMa(0,uVar7);
  uVar7 = 0;
  FUN_100617950(0,puVar8,FUN_10061bd74,puVar1,uVar4,uVar2,pTVar5);
  _swift_release(uVar3);
  _swift_release(puVar1);
  FUN_1006070b4(puVar8);
  return uVar7;
}

