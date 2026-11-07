// rea decompile_all
// name: FUN_1003514a0
// address: 0x1003514a0
// body: available
// range: 0x1003514a0-0x10035158f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003514a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  TargetProtocolConformanceDescriptor *pTVar13;
  long unaff_x20;
  long local_68;
  
  lVar11 = 0;
  FUN_100357c5c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined1 *)(unaff_x20 + 0x48);
  lVar12 = lVar11;
  _swift_allocObject();
  *(undefined8 *)(lVar12 + 0x10) = uVar1;
  *(undefined8 *)(lVar12 + 0x18) = uVar5;
  *(undefined1 *)(lVar12 + 0x20) = uVar9;
  *(undefined8 *)(lVar12 + 0x28) = uVar2;
  *(undefined8 *)(lVar12 + 0x30) = uVar6;
  *(undefined8 *)(lVar12 + 0x38) = uVar3;
  *(undefined8 *)(lVar12 + 0x40) = uVar7;
  *(undefined1 *)(lVar12 + 0x48) = uVar10;
  *(undefined8 *)(lVar12 + 0x50) = uVar4;
  *(undefined8 *)(lVar12 + 0x58) = uVar8;
  local_68 = lVar12;
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  FUN_100317824(uVar2,uVar6);
  FUN_100357714(uVar3,uVar7,uVar10);
  _swift_retain(uVar8);
  pTVar13 = &TargetProtocolConformanceDescriptor_10081c2d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081c2d8,lVar11);
  __ss22KeyedEncodingContainerVyAByxGqd__c3KeyQyd__Rszs0abC8ProtocolRd__lufC
            (param_1,&local_68,param_3,lVar11,pTVar13);
  return;
}

