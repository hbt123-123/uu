// rea decompile_all
// name: FUN_100189bc4
// address: 0x100189bc4
// body: available
// range: 0x100189bc4-0x100189fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100189bc4(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined1 *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_98 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_98 + 0x40));
  lVar3 = 0;
  local_b0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_a8 = *(long *)(lVar3 + -8);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar3 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100189fd4,0,0xd0000000000000a2,0x8000000100893bb0,&DAT_d000000000000018,
                0x80000001008984f0,0x65,7);
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  puVar6 = &DAT_1009a10b0;
  puVar4 = puVar6;
  _swift_allocObject(&DAT_1009a10b0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &DAT_1009a10d8;
  _swift_allocObject(&DAT_1009a10d8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  _swift_allocObject(&DAT_1009a10b0,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar7 = &DAT_1009a1100;
  _swift_allocObject(&DAT_1009a1100,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(code **)(puVar7 + 0x18) = FUN_10018b6a8;
  *(undefined **)(puVar7 + 0x20) = puVar5;
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(puVar5);
  _swift_retain(puVar6);
  IVar8 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar8 == 0) {
    uVar9 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    local_70 = FUN_10016bbb8;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a1118;
    local_b8 = uVar9;
    local_68 = puVar7;
    aBlock = __Block_copy(&local_90);
    puVar11 = local_68;
    _swift_retain(puVar7);
    _swift_release(puVar11);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar10 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar11 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar12 = puVar11;
    FUN_10004eec4();
    puVar1 = local_b0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_b0,&local_90,puVar11,puVar12,lVar2,puVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,puVar1,aBlock);
    __Block_release(aBlock);
    _swift_release(puVar5);
    _swift_release(puVar7);
    (**(code **)(local_98 + 8))(puVar1,lVar2);
    (**(code **)(local_a8 + 8))(lVar3,lStack_a0);
    _swift_release(puVar4);
  }
  else {
    _swift_beginAccess(puVar6 + 0x10,&local_90,0,0);
    puVar11 = puVar6 + 0x10;
    _swift_weakLoadStrong();
    if (puVar11 == (undefined *)0x0) {
      _swift_release(puVar4);
    }
    else {
      FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000015,
                    0x8000000100893c60,0x82,7);
      _objc_msgSend(*(ID *)(puVar11 + 0x20),"clearContents");
      FUN_10018a000(param_1,puVar4);
      _swift_release(puVar4);
      _swift_release(puVar6);
      puVar6 = puVar11;
    }
    _swift_release(puVar6);
    _swift_release(puVar7);
    puVar6 = puVar5;
  }
  _swift_release(puVar6);
  return;
}

