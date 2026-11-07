// rea decompile_all
// name: FUN_100319508
// address: 0x100319508
// body: available
// range: 0x100319508-0x100319677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100319508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar1 = 0xff;
  FUN_10031ba94(0xff,param_4);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  uVar4 = 0xff;
  __ss6ResultOMa(0xff,param_4,uVar2,puVar3);
  pTVar5 = &TargetProtocolConformanceDescriptor_100819e70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100819e70,uVar1);
  lVar6 = 0;
  __s7Combine10PublishersO10CompactMapVMa(0,uVar1,uVar4,pTVar5);
  lVar10 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  puVar7 = &DAT_1009b08e0;
  local_78 = param_1;
  uStack_70 = param_2;
  local_68 = param_3;
  _swift_allocObject(&DAT_1009b08e0,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_4;
  __s7Combine9PublisherPAAE10compactMapyAA10PublishersO07CompactD0Vy_xqd__Gqd__Sg6OutputQzclF
            (auStack_80 + -(lVar9 + 0xfU & 0xfffffffffffffff0),FUN_10031baa0,puVar7,uVar1,uVar4,
             pTVar5);
  _swift_release(puVar7);
  puVar7 = PTR___s7Combine10PublishersO10CompactMapVy_xq_GAA9PublisherAAMc_1009954e0;
  _swift_getWitnessTable
            (PTR___s7Combine10PublishersO10CompactMapVy_xq_GAA9PublisherAAMc_1009954e0,lVar6);
  lVar8 = lVar6;
  __s7Combine9PublisherPAAE010eraseToAnyB0AA0eB0Vy6OutputQz7FailureQzGyF(lVar6,puVar7);
  (**(code **)(lVar10 + 8))(auStack_80 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar6);
  return lVar8;
}

