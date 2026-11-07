// rea decompile_all
// name: FUN_10061b6d0
// address: 0x10061b6d0
// body: available
// range: 0x10061b6d0-0x10061b7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061b6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_1009e0138;
  _swift_allocObject(&DAT_1009e0138,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,uVar2,PTR___sSTTL_100995860,PTR___s7ElementSTTl_1009956f8);
  uVar2 = 0;
  __sSaMa(0,uVar3);
  FUN_100617950(param_1,param_2,FUN_10061be50,puVar1,param_3,uVar2,param_4);
  _swift_release(puVar1);
  return param_1;
}

