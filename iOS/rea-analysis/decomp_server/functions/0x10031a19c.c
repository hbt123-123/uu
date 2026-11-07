// rea decompile_all
// name: FUN_10031a19c
// address: 0x10031a19c
// body: available
// range: 0x10031a19c-0x10031a26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_10031a19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined1 *puVar3;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  
  FUN_1000b142c(param_3,auStack_b8);
  FUN_1000b142c(param_4,auStack_e0);
  FUN_100295c4c(auStack_90,auStack_b8,auStack_e0,param_5,param_6);
  lVar1 = 0;
  FUN_100297f60(0,param_5,param_6);
  pTVar2 = &TargetProtocolConformanceDescriptor_1008175c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008175c8,lVar1);
  puVar3 = auStack_90;
  FUN_10031a004(puVar3,param_2,lVar1,pTVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_90,lVar1);
  return puVar3;
}

