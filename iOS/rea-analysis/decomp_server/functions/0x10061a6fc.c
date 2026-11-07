// rea decompile_all
// name: FUN_10061a6fc
// address: 0x10061a6fc
// body: available
// range: 0x10061a6fc-0x10061a817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  
  puVar1 = &DAT_1009e0020;
  _swift_allocObject(&DAT_1009e0020,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar3 = 0xff;
  __sSaMa(0xff,uVar2);
  uVar2 = 0;
  FUN_100616218(0,uVar3);
  _swift_retain(param_4);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar2);
  FUN_1006177ec(param_1,param_2,FUN_10061bcec,puVar1,param_5,uVar2,param_7,pTVar4);
  _swift_release(puVar1);
  return param_1;
}

