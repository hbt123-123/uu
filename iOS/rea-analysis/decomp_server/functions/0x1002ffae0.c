// rea decompile_all
// name: FUN_1002ffae0
// address: 0x1002ffae0
// body: available
// range: 0x1002ffae0-0x1002ffd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ffae0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar3 = 0;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  lVar9 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar9);
  pcVar13 = *(code **)(lVar12 + 0x10);
  (*pcVar13)(puVar10,param_2,lVar3);
  puVar4 = puVar10;
  (**(code **)(lVar12 + 0x58))(puVar10,lVar3);
  if ((PTR___sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageO4datayAeC4DataVcAEmFWC_100996338
       == (undefined *)0x0) ||
     ((int)puVar4 !=
      *(int *)
       PTR___sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageO4datayAeC4DataVcAEmFWC_100996338))
  {
    if ((PTR___sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageO6stringyAESScAEmFWC_100996340 ==
         (undefined *)0x0) ||
       ((int)puVar4 !=
        *(int *)
         PTR___sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageO6stringyAESScAEmFWC_100996340))
    {
      lVar11 = (long)puVar10 - (lVar11 + 0xfU & 0xfffffffffffffff0);
      (*pcVar13)(lVar11,param_2,lVar3);
      lVar9 = lVar3;
      __sSS10describingSSx_tclufC();
      uVar6 = 0;
      FUN_100300988(0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
      pTVar7 = &TargetProtocolConformanceDescriptor_1008195f0;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008195f0,uVar6);
      _swift_allocError(uVar6,pTVar7,0,0);
      pTVar7->Protocol = (int)lVar11;
      pTVar7->TypeRef = (int)((ulong)lVar11 >> 0x20);
      pTVar7->WitnessTablePattern = (int)lVar9;
      pTVar7->Flags = (ConformanceFlags)(int)((ulong)lVar9 >> 0x20);
      *(undefined1 *)&pTVar7[1].Protocol = 1;
      _swift_willThrow();
      (**(code **)(lVar12 + 8))(puVar10,lVar3);
      return;
    }
    (**(code **)(lVar12 + 0x60))(puVar10,lVar3);
    uVar6 = *puVar10;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
    FUN_1002bd428(uVar6,uVar8);
  }
  else {
    (**(code **)(lVar12 + 0x60))(puVar10,lVar3);
    uVar6 = *puVar10;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar9);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  FUN_10003f030();
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  (**(code **)(lVar9 + 8))(param_1,uVar1,uVar6,uVar8,uVar1,uVar2,uVar5,lVar9);
  if (unaff_x21 == 0) {
    FUN_100006cdc(uVar6,uVar8);
  }
  else {
    uVar5 = 0;
    FUN_100300988(0,uVar1,uVar2);
    pTVar7 = &TargetProtocolConformanceDescriptor_1008195f0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008195f0,uVar5);
    _swift_allocError(uVar5,pTVar7,0,0);
    pTVar7->Protocol = (int)unaff_x21;
    pTVar7->TypeRef = (int)((ulong)unaff_x21 >> 0x20);
    pTVar7->WitnessTablePattern = 0;
    (pTVar7->Flags).field_0x0 = 0;
    (pTVar7->Flags).NumConditionalRequirements = 0;
    (pTVar7->Flags).field_0x2 = 0;
    (pTVar7->Flags).NumConditionalPackDescriptor = 0;
    *(undefined1 *)&pTVar7[1].Protocol = 0;
    _swift_willThrow();
    FUN_100006cdc(uVar6,uVar8);
  }
  return;
}

