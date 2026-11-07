// rea decompile_all
// name: FUN_100352c2c
// address: 0x100352c2c
// body: available
// range: 0x100352c2c-0x100352d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100352c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  TargetProtocolConformanceDescriptor *pTVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long local_88 [3];
  long local_70;
  undefined8 uStack_68;
  
  lVar13 = *unaff_x20;
  lVar8 = 0;
  FUN_100357c5c(0,param_4,param_5);
  lVar12 = unaff_x20[3];
  uStack_68 = *(undefined8 *)(lVar13 + 0x58);
  lVar13 = *(long *)(lVar13 + 0x50);
  local_70 = lVar13;
  FUN_1000efc08(local_88);
  (**(code **)(*(long *)(lVar13 + -8) + 0x10))();
  _swift_retain(lVar12);
  plVar9 = local_88;
  FUN_100352338();
  FUN_10003f094(local_88);
  lVar6 = unaff_x20[4];
  lVar13 = unaff_x20[5];
  lVar3 = unaff_x20[6];
  lVar1 = unaff_x20[7];
  lVar4 = unaff_x20[8];
  lVar2 = unaff_x20[10];
  lVar5 = unaff_x20[0xb];
  lVar7 = unaff_x20[9];
  lVar10 = lVar8;
  _swift_allocObject(lVar8,0x60,7);
  *(long **)(lVar10 + 0x10) = plVar9;
  *(long *)(lVar10 + 0x18) = lVar12;
  *(char *)(lVar10 + 0x20) = (char)lVar6;
  *(long *)(lVar10 + 0x28) = lVar13;
  *(long *)(lVar10 + 0x30) = lVar3;
  *(long *)(lVar10 + 0x38) = lVar1;
  *(long *)(lVar10 + 0x40) = lVar4;
  *(char *)(lVar10 + 0x48) = (char)lVar7;
  *(long *)(lVar10 + 0x50) = lVar2;
  *(long *)(lVar10 + 0x58) = lVar5;
  local_88[0] = lVar10;
  FUN_100317824(lVar13,lVar3);
  FUN_100357714(lVar1,lVar4,(char)lVar7);
  _swift_retain(lVar5);
  pTVar11 = &TargetProtocolConformanceDescriptor_10081c2d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081c2d8,lVar8);
  __ss22KeyedEncodingContainerVyAByxGqd__c3KeyQyd__Rszs0abC8ProtocolRd__lufC
            (param_1,local_88,param_4,lVar8,pTVar11);
  return;
}

