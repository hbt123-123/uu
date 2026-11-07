// rea decompile_all
// name: FUN_10040c454
// address: 0x10040c454
// body: available
// range: 0x10040c454-0x10040c72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040c454(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  undefined8 uVar7;
  ID self;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_e0 = param_4;
  uStack_d8 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar12 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_d0 = lVar12;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE12ProcessEventVMa();
  lVar11 = *(long *)(lVar1 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar12 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  FUN_10040c730(0);
  uVar3 = param_1;
  __sSo18OS_dispatch_sourceC8DispatchE17makeProcessSource10identifier9eventMask5queueSo0a1_b1_C5_proc_ps5Int32V_AbCE0F5EventVSo0a1_b1_K0CSgtFZ
            (param_1,param_2,param_3,uVar2);
  uVar4 = uVar3;
  _swift_getObjectType();
  (**(code **)(lVar11 + 0x10))(lVar10,param_2,lVar1);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar6 + 0x24 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009bc740;
  _swift_allocObject(&DAT_1009bc740,uVar8 + lVar9,uVar6 | 7);
  uVar7 = uStack_d8;
  uVar2 = local_e0;
  *(undefined8 *)(puVar5 + 0x10) = local_e0;
  *(undefined8 *)(puVar5 + 0x18) = uStack_d8;
  *(int *)(puVar5 + 0x20) = (int)param_1;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar8,lVar10,lVar1);
  local_70 = FUN_10040c7e8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009bc758;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  FUN_10004090c(uVar2,uVar7);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  lVar1 = local_d0;
  thunk_FUN_1001e7cc4(local_d0,uVar4);
  __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar12,lVar1,aBlock,uVar4);
  __Block_release(aBlock);
  (**(code **)(local_b8 + 8))(lVar1,lStack_b0);
  (**(code **)(local_c8 + 8))(lVar12,lStack_c0);
  _swift_release(local_68);
  __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF(uVar4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  self = *(ID *)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar3);
  _objc_msgSend(self,"lock");
  _swift_beginAccess(lVar1 + 0x18,&local_90,0x21,0);
  _swift_unknownObjectRetain(uVar3);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = 0x8000000000000000;
  FUN_1003a6afc(uVar3,param_1 & 0xffffffff,uVar2);
  *(undefined8 *)(lVar1 + 0x18) = uVar7;
  _swift_endAccess(&local_90);
  _objc_msgSend(self,"unlock");
  _swift_unknownObjectRelease_n(uVar3,2);
  return;
}

