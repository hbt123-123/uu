// rea decompile_all
// name: FUN_10061dd54
// address: 0x10061dd54
// body: available
// range: 0x10061dd54-0x10061defb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10061dd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar8 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_10061efa0(param_1,param_2,param_3);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar8,1,1,lVar3);
  puVar1 = &DAT_1009e05e8;
  _swift_allocObject(&DAT_1009e05e8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  puVar4 = &DAT_1009e0610;
  _swift_allocObject(&DAT_1009e0610,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(code **)(puVar4 + 0x20) = FUN_100620224;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  _swift_bridgeObjectRetain(param_1);
  puVar1 = &DAT_100ab0268;
  FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
  uVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar6 = 0;
  __sSaMa(0,uVar5);
  puVar7 = &DAT_100ab0648;
  FUN_10003f840(&DAT_100ab0648,&DAT_100ab0268,&DAT_1008485b8,
                &TargetProtocolConformanceDescriptor_1008488a0);
  uVar5 = 0;
  FUN_100617950(0,puVar8,FUN_100620618,puVar4,puVar1,uVar6,puVar7);
  _swift_release(uVar2);
  _swift_release(puVar4);
  FUN_1006070b4(puVar8);
  return uVar5;
}

