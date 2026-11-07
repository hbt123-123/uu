// rea decompile_all
// name: FUN_1001ea518
// address: 0x1001ea518
// body: available
// range: 0x1001ea518-0x1001ea853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ea518(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  code *local_c0;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar15 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE12ProcessEventVMa();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(uint *)(unaff_x20 + 0x1c);
  uVar18 = (ulong)uVar1;
  FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
  __sSo18OS_dispatch_sourceC8DispatchE12ProcessEventV4exitAEvgZ(lVar16);
  __sSo18OS_dispatch_sourceC8DispatchE17makeProcessSource10identifier9eventMask5queueSo0a1_b1_C5_proc_ps5Int32V_AbCE0F5EventVSo0a1_b1_K0CSgtFZ
            (uVar18,lVar16,
             *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::ioQueue));
  (**(code **)(lVar17 + 8))(lVar16,lVar4);
  uVar5 = uVar18;
  _swift_getObjectType(uVar18);
  puVar9 = &DAT_1009a43d0;
  puVar6 = puVar9;
  _swift_allocObject(&DAT_1009a43d0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar7 = &DAT_1009a4718;
  _swift_allocObject(&DAT_1009a4718,0x1c,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(uint *)(puVar7 + 0x18) = uVar1;
  local_80 = FUN_1001f8cf8;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009a4730;
  local_78 = puVar7;
  pvVar8 = __Block_copy(&local_a0);
  _swift_retain(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
  FUN_1001e7cc4(lVar12,uVar5);
  __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar15,lVar12,pvVar8,uVar5);
  __Block_release(pvVar8);
  local_c0 = *(code **)(lVar11 + 8);
  (*local_c0)(lVar12,lVar2);
  pcVar14 = *(code **)(lVar13 + 8);
  (*pcVar14)(lVar15,lVar3);
  puVar7 = local_78;
  _swift_release(puVar6);
  _swift_release(puVar7);
  _swift_allocObject(&DAT_1009a43d0,0x18,7);
  _swift_weakInit(puVar9 + 0x10,unaff_x20);
  local_80 = FUN_1001f8d04;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009a4758;
  local_78 = puVar9;
  pvVar8 = __Block_copy(&local_a0);
  _swift_retain(puVar9);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
  FUN_1001e7cc4(lVar12,uVar5);
  __sSo18OS_dispatch_sourceP8DispatchE16setCancelHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar15,lVar12,pvVar8,uVar5);
  __Block_release(pvVar8);
  (*local_c0)(lVar12,lVar2);
  (*pcVar14)(lVar15,lVar3);
  puVar7 = local_78;
  _swift_release(puVar9);
  _swift_release(puVar7);
  __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(uVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource);
  *(ulong *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource) = uVar18;
  _swift_unknownObjectRelease(uVar10);
  return;
}

