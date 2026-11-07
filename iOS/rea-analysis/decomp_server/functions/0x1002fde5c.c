// rea decompile_all
// name: FUN_1002fde5c
// address: 0x1002fde5c
// body: available
// range: 0x1002fde5c-0x1002fdf13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1002fde5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined1 *puVar3;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  FUN_1000b142c(param_3,auStack_90);
  thunk_FUN_1000a0074(auStack_90,auStack_68);
  lVar1 = 0;
  FUN_100300894(0,param_6,param_7);
  pTVar2 = &TargetProtocolConformanceDescriptor_100819630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100819630,lVar1);
  puVar3 = auStack_68;
  FUN_1002fd668(puVar3,param_2,param_4,param_5,lVar1,pTVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_68,lVar1);
  return puVar3;
}

