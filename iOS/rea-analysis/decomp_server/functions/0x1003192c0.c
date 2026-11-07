// rea decompile_all
// name: FUN_1003192c0
// address: 0x1003192c0
// body: available
// range: 0x1003192c0-0x1003193bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ***
FUN_1003192c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_a0 [40];
  undefined8 **local_78 [5];
  
  uVar1 = 0;
  FUN_100347e78(0,param_7,param_8);
  FUN_1000b142c(param_3,local_78);
  FUN_1000b142c(param_4,auStack_a0);
  pppuVar2 = local_78;
  FUN_100343100(pppuVar2,auStack_a0,param_5,param_6);
  pTVar3 = &TargetProtocolConformanceDescriptor_10081b3b8;
  local_78[0] = pppuVar2;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081b3b8,uVar1);
  pppuVar4 = local_78;
  FUN_100318fe0(pppuVar4,param_2,uVar1,param_7,pTVar3);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  _swift_release(pppuVar2);
  return pppuVar4;
}

