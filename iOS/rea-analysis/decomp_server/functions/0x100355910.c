// rea decompile_all
// name: FUN_100355910
// address: 0x100355910
// body: available
// range: 0x100355910-0x100355ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  TargetProtocolConformanceDescriptor *pTVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long local_b0 [10];
  
  lVar10 = 0;
  FUN_100357c5c();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar18 = *(long *)(unaff_x20 + 0x10);
  puVar11 = &DAT_100a832d0;
  FUN_100004bb4(&DAT_100a832d0,&DAT_1008177d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  lVar17 = *(long *)(unaff_x20 + 0x18);
  local_b0[0] = lVar17;
  _swift_retain(uVar16);
  _swift_bridgeObjectRetain(lVar18);
  puVar12 = PTR___sSiN_100995968;
  puVar15 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar11 + 0x38) = &DAT_1009b4410;
  puVar13 = puVar12;
  FUN_1003581dc();
  *(undefined **)(puVar11 + 0x40) = puVar13;
  puVar13 = &DAT_1009b4390;
  _swift_allocObject(&DAT_1009b4390,0x29,7);
  *(undefined **)(puVar11 + 0x20) = puVar13;
  *(undefined **)(puVar13 + 0x10) = puVar12;
  *(undefined **)(puVar13 + 0x18) = puVar15;
  *(long *)(puVar13 + 0x20) = lVar17;
  puVar13[0x28] = 0;
  local_b0[0] = lVar18;
  FUN_1002c5b4c(puVar11);
  lVar17 = local_b0[0];
  uVar7 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined1 *)(unaff_x20 + 0x50);
  lVar18 = lVar10;
  _swift_allocObject(lVar10,0x60,7);
  *(long *)(lVar18 + 0x10) = lVar17;
  *(undefined8 *)(lVar18 + 0x18) = uVar16;
  *(undefined1 *)(lVar18 + 0x20) = uVar7;
  *(undefined8 *)(lVar18 + 0x28) = uVar1;
  *(undefined8 *)(lVar18 + 0x30) = uVar4;
  *(undefined8 *)(lVar18 + 0x38) = uVar2;
  *(undefined8 *)(lVar18 + 0x40) = uVar5;
  *(undefined1 *)(lVar18 + 0x48) = uVar8;
  *(undefined8 *)(lVar18 + 0x50) = uVar3;
  *(undefined8 *)(lVar18 + 0x58) = uVar6;
  local_b0[0] = lVar18;
  FUN_100317824(uVar1,uVar4);
  FUN_100357714(uVar2,uVar5,uVar8);
  _swift_retain(uVar6);
  pTVar14 = &TargetProtocolConformanceDescriptor_10081c2d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_10081c2d8,lVar10);
  __ss22KeyedEncodingContainerVyAByxGqd__c3KeyQyd__Rszs0abC8ProtocolRd__lufC
            (param_1,local_b0,param_3,lVar10,pTVar14);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100355ac4);
  (*pcVar9)();
}

