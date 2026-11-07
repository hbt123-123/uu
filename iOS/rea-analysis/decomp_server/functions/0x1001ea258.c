// rea decompile_all
// name: FUN_1001ea258
// address: 0x1001ea258
// body: available
// range: 0x1001ea258-0x1001ea517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ea258(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined1 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar3 + -8);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar14 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
  __sSo18OS_dispatch_sourceC8DispatchE14makeReadSource14fileDescriptor5queueSo0a1_b1_C5_read_ps5Int32V_So0a1_b1_J0CSgtFZ
            (uVar5,*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::ioQueue),uVar4
            );
  uVar6 = uVar5;
  _swift_getObjectType();
  puVar7 = &DAT_1009a43d0;
  _swift_allocObject(&DAT_1009a43d0,0x18,7);
  _swift_weakInit(puVar7 + 0x10);
  local_80 = FUN_1001f8db4;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009a47d0;
  local_78 = puVar7;
  pvVar8 = __Block_copy(&local_a0);
  _swift_retain(puVar7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  FUN_1001e7cc4(puVar12,uVar6);
  __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar14,puVar12,pvVar8,uVar6);
  __Block_release(pvVar8);
  pcVar13 = *(code **)(lVar9 + 8);
  (*pcVar13)(puVar12,lVar2);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar14,lVar3);
  puVar1 = local_78;
  _swift_release(puVar7);
  _swift_release(puVar1);
  puVar7 = &DAT_1009a43d0;
  _swift_allocObject(&DAT_1009a43d0,0x18,7);
  _swift_weakInit(puVar7 + 0x10,unaff_x20);
  local_80 = FUN_1001f8dbc;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009a47f8;
  local_78 = puVar7;
  pvVar8 = __Block_copy(&local_a0);
  _swift_retain(puVar7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
  FUN_1001e7cc4(puVar12,uVar6);
  __sSo18OS_dispatch_sourceP8DispatchE16setCancelHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar14,puVar12,pvVar8,uVar6);
  __Block_release(pvVar8);
  (*pcVar13)(puVar12,lVar2);
  (*pcVar11)(lVar14,local_b8);
  puVar1 = local_78;
  _swift_release(puVar7);
  _swift_release(puVar1);
  __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(uVar6);
  uVar4 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource);
  *(ulong *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource) = uVar5;
  _swift_unknownObjectRelease(uVar4);
  return;
}

