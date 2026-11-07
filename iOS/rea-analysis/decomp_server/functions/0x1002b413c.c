// rea decompile_all
// name: FUN_1002b413c
// address: 0x1002b413c
// body: available
// range: 0x1002b413c-0x1002b4237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1002b413c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [40];
  undefined8 ***local_88 [5];
  
  uVar1 = 0;
  FUN_100347e78(0,param_9,param_10);
  FUN_1000b142c(param_3,local_88);
  FUN_1000b142c(param_4,auStack_b0);
  ppppuVar2 = local_88;
  FUN_100343100(ppppuVar2,auStack_b0,param_5,param_6);
  local_88[0] = ppppuVar2;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  pTVar3 = &TargetProtocolConformanceDescriptor_10081b3b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081b3b8,uVar1);
  uVar4._0_4_ = pTVar3[1].Protocol;
  uVar4._4_4_ = pTVar3[1].TypeRef;
  FUN_1002b4804(param_2,local_88,param_7,param_8,uVar1,uVar4);
  _swift_retain();
  _swift_release(ppppuVar2);
  return param_2;
}

