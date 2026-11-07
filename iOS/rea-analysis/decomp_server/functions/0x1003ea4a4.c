// rea decompile_all
// name: FUN_1003ea4a4
// address: 0x1003ea4a4
// body: available
// range: 0x1003ea4a4-0x1003ea88b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ea4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_d0 [8];
  code *local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar3 = 0;
  local_b0 = param_3;
  local_a8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar3 + -8);
  local_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a78708,&PTR__OBJC_CLASS___OS_dispatch_source_100a658f0);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  __sSo18OS_dispatch_sourceC8DispatchE26makeFileSystemObjectSource14fileDescriptor9eventMask5queueSo0a1_b1_C6_vnode_ps5Int32V_AbCE0fG5EventVSo0a1_b1_N0CSgtFZ
            (param_1,param_2,param_3,uVar5);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_getObjectType();
  puVar6 = &DAT_1009bb3c0;
  _swift_allocObject(&DAT_1009bb3c0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  local_80 = FUN_1003eacd8;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009bb3d8;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  _swift_retain();
  _swift_retain(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,param_1);
  thunk_FUN_1001e7cc4(puVar9,param_1);
  __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar12,puVar9,pvVar7,param_1);
  __Block_release(pvVar7);
  lVar3 = local_b8;
  local_c8 = *(code **)(lVar8 + 8);
  (*local_c8)(puVar9,local_b8);
  pcVar11 = *(code **)(lVar10 + 8);
  local_c0 = lVar4;
  (*pcVar11)(lVar12,lVar4);
  puVar2 = local_78;
  _swift_release(puVar6);
  _swift_release(puVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_getObjectType(uVar5);
  puVar6 = &DAT_1009bb3c0;
  _swift_allocObject(&DAT_1009bb3c0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  local_80 = FUN_1003eace0;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009bb400;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  _swift_retain(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  FUN_1003eaa60(puVar9,uVar5);
  __sSo18OS_dispatch_sourceP8DispatchE16setCancelHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar12,puVar9,pvVar7,uVar5);
  __Block_release(pvVar7);
  pcVar1 = local_c8;
  (*local_c8)(puVar9,lVar3);
  (*pcVar11)(lVar12,lVar4);
  puVar2 = local_78;
  _swift_release(puVar6);
  _swift_release(puVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_getObjectType(uVar5);
  puVar6 = &DAT_1009bb3c0;
  _swift_allocObject(&DAT_1009bb3c0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  _swift_release();
  local_80 = FUN_1003eace8;
  local_a0 = PTR___NSConcreteStackBlock_100995490;
  local_98 = 0x42000000;
  local_90 = FUN_1000acdb4;
  puStack_88 = &DAT_1009bb428;
  local_78 = puVar6;
  pvVar7 = __Block_copy(&local_a0);
  _swift_retain(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  FUN_1003eaa60(puVar9,uVar5);
  __sSo18OS_dispatch_sourceP8DispatchE22setRegistrationHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
            (lVar12,puVar9,pvVar7,uVar5);
  __Block_release(pvVar7);
  lVar4 = 0;
  __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(local_a8,lVar4);
  (*pcVar1)(puVar9,lVar3);
  (*pcVar11)(lVar12,local_c0);
  puVar2 = local_78;
  _swift_release(puVar6);
  _swift_release(puVar2);
  return;
}

