// rea decompile_all
// name: FUN_100325a38
// address: 0x100325a38
// body: available
// range: 0x100325a38-0x100325b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100325a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined1 auStack_e0 [24];
  undefined *local_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [80];
  
  FUN_1002fde08(auStack_b8,param_6,param_7);
  local_c8 = &DAT_1009b38b0;
  ppuStack_c0 = &PTR_PTR_1009b3790;
  FUN_100295c4c(auStack_90,auStack_b8,auStack_e0,param_6,param_7);
  lVar1 = 0;
  FUN_100297f60(0,param_6,param_7);
  pTVar2 = &TargetProtocolConformanceDescriptor_1008175c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008175c8,lVar1);
  FUN_100325b14(param_1,auStack_90,param_3,param_4,param_5,lVar1,pTVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_90,lVar1);
  return;
}

