// rea decompile_all
// name: FUN_10004ddf8
// address: 0x10004ddf8
// body: available
// range: 0x10004ddf8-0x10004e0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004ddf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_98 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_98 + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1009985d0;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar6 = &DAT_100999930;
  _swift_allocObject(&DAT_100999930,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  _swift_retain(param_2);
  _swift_retain(puVar5);
  IVar7 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar7 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    local_70 = FUN_100082cc0;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_100999948;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    puVar9 = local_68;
    _swift_retain(puVar6);
    _swift_release(puVar9);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar8 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar9 = &DAT_100a75a98;
    local_a0 = lVar4;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = puVar9;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_90,puVar9,puVar10,lVar3,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,aBlock);
    __Block_release(aBlock);
    _swift_release(puVar6);
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    (**(code **)(local_98 + 8))(lVar12,local_a0);
  }
  else {
    _swift_beginAccess(puVar5 + 0x10,&local_90,0,0);
    puVar9 = puVar5 + 0x10;
    _swift_weakLoadStrong();
    if (puVar9 == (undefined *)0x0) {
      _swift_release(puVar5);
      puVar5 = puVar6;
    }
    else {
      uVar1 = *(undefined8 *)(puVar9 + 0x78);
      uVar2 = *(undefined8 *)(puVar9 + 0x80);
      *(undefined8 *)(puVar9 + 0x78) = param_1;
      *(undefined8 *)(puVar9 + 0x80) = param_2;
      FUN_10007ed2c(uVar1,uVar2);
      _swift_retain(param_2);
      _swift_release(puVar5);
      _swift_release(puVar6);
      puVar5 = puVar9;
    }
  }
  _swift_release(puVar5);
  return;
}

