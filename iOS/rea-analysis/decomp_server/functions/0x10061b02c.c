// rea decompile_all
// name: FUN_10061b02c
// address: 0x10061b02c
// body: available
// range: 0x10061b02c-0x10061b123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061b02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_1009e00e8;
  _swift_allocObject(&DAT_1009e00e8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(long *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  uVar4 = *(undefined8 *)(param_7 + 8);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar2,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8)
  ;
  _swift_retain(param_4);
  FUN_100617950(param_1,param_2,FUN_10061be04,puVar1,param_5,uVar3,param_6);
  _swift_release(puVar1);
  return param_1;
}

