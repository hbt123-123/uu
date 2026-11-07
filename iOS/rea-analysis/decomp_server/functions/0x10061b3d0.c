// rea decompile_all
// name: FUN_10061b3d0
// address: 0x10061b3d0
// body: available
// range: 0x10061b3d0-0x10061b4ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061b3d0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar1 = &DAT_100aaffc0;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  puVar5 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar5,1,1,lVar2);
  _swift_allocObject(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_1;
  *(undefined8 *)(param_4 + 0x18) = param_2;
  *(long *)(param_4 + 0x20) = param_3;
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar6,uVar3,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8)
  ;
  uVar3 = 0;
  FUN_100617950(0,puVar5,param_5,param_4,param_1,uVar4,param_2);
  _swift_release(param_4);
  FUN_1006070b4(puVar5);
  return uVar3;
}

