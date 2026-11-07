// rea decompile_all
// name: FUN_10007d584
// address: 0x10007d584
// body: available
// range: 0x10007d584-0x10007d58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007d584(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined8 extraout_x8;
  long unaff_x20;
  long lStack_68;
  
  FUN_10007c3ec();
  FUN_10007c434();
  lVar3 = 0;
  FUN_10007c4cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = lVar3;
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  lStack_68 = lVar4;
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  pTVar5 = &TargetProtocolConformanceDescriptor_1000d4fac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4fac,lVar3);
  __ss22KeyedDecodingContainerVyAByxGqd__c3KeyQyd__Rszs0abC8ProtocolRd__lufC
            (extraout_x8,&lStack_68,param_2,lVar3,pTVar5);
  return;
}

