// rea decompile_all
// name: FUN_10007b498
// address: 0x10007b498
// body: available
// range: 0x10007b498-0x10007b52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long unaff_x20;
  undefined8 uVar4;
  long local_38;
  
  lVar1 = 0;
  FUN_10007c4cc();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(long *)(lVar2 + 0x18) = unaff_x20;
  local_38 = lVar2;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar4);
  pTVar3 = &TargetProtocolConformanceDescriptor_1000d4fac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4fac,lVar1);
  __ss22KeyedDecodingContainerVyAByxGqd__c3KeyQyd__Rszs0abC8ProtocolRd__lufC
            (param_1,&local_38,param_3,lVar1,pTVar3);
  return;
}

