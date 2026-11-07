// rea decompile_all
// name: FUN_100115224
// address: 0x100115224
// body: available
// range: 0x100115224-0x1001157f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100115224(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ID IVar4;
  void *aBlock;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_100 [16];
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)0x0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _TtC14UURemoteServer22ClipboardMobileManager::pasteboard;
  if (param_2 == 0) {
    return;
  }
  local_d8 = lVar14;
  local_d0 = puVar3;
  local_c8 = lVar11;
  IVar4 = _objc_msgSend(*(ID *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::pasteboard),
                        "changeCount");
  if (IVar4 == *(ID *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::lastChangeCount)) {
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_10099d818;
    _swift_allocObject(&DAT_10099d818,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,param_2);
    local_98 = thunk_FUN_1001166f4;
    local_b8 = PTR___NSConcreteStackBlock_100995490;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000acdb4;
    puStack_a0 = &DAT_10099d948;
    local_90 = puVar10;
    aBlock = __Block_copy(&local_b8);
    _swift_release(local_90);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  }
  else {
    *(ID *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::lastChangeCount) = IVar4;
    IVar4 = _objc_msgSend(*(ID *)(param_2 + lVar1),"types");
    if (IVar4 != 0) {
      uVar5 = 0;
      FUN_100005b8c(0);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar4,uVar5);
      puVar10 = *(undefined **)PTR__NSPasteboardTypeString_100995440;
      local_b8 = puVar10;
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(undefined ***)(lVar13 + -0x10) = &local_b8;
      uVar6 = 0;
      FUN_100152d90(FUN_100116798,lVar13 + -0x20,IVar4);
      _swift_bridgeObjectRelease(IVar4);
      if ((uVar6 & 1) != 0) {
        _CFAbsoluteTimeGetCurrent();
        dVar15 = param_1;
        _CFAbsoluteTimeGetCurrent();
        pcVar9 = "stringForType:";
        dVar16 = dVar15;
        IVar4 = _objc_msgSend(*(ID *)(param_2 + lVar1),"stringForType:",puVar10);
        if (IVar4 == 0) {
          IVar4 = 0;
          pcVar9 = (char *)0x0;
        }
        else {
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        }
        puVar7 = local_d0;
        _CFAbsoluteTimeGetCurrent(0);
        FUN_100004b70(0);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
        puVar10 = &DAT_10099d818;
        _swift_allocObject(&DAT_10099d818,0x18,7);
        _swift_unknownObjectWeakInit(puVar10 + 0x10,param_2);
        puVar8 = &DAT_10099d908;
        _swift_allocObject(&DAT_10099d908,0x38,7);
        *(undefined **)(puVar8 + 0x10) = puVar10;
        *(ID *)(puVar8 + 0x18) = IVar4;
        *(char **)(puVar8 + 0x20) = pcVar9;
        *(double *)(puVar8 + 0x28) = param_1;
        *(double *)(puVar8 + 0x30) = dVar16 - dVar15;
        local_98 = FUN_1001167f4;
        local_b8 = PTR___NSConcreteStackBlock_100995490;
        local_b0 = 0x42000000;
        local_a8 = FUN_1000acdb4;
        puStack_a0 = &DAT_10099d920;
        local_90 = puVar8;
        aBlock = __Block_copy(&local_b8);
        _swift_release(local_90);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
        local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar3 = &DAT_100a75a90;
        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
        puVar10 = &DAT_100a75a98;
        local_d0 = puVar3;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar3 = &DAT_100a75aa0;
        FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar12,&local_b8,puVar10,puVar3,lVar2,local_d0);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,puVar12,aBlock);
        goto LAB_100115638;
      }
    }
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar10 = &DAT_10099d818;
    _swift_allocObject(&DAT_10099d818,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,param_2);
    local_98 = FUN_1001166f4;
    local_b8 = PTR___NSConcreteStackBlock_100995490;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000acdb4;
    puStack_a0 = &DAT_10099d8d0;
    local_90 = puVar10;
    aBlock = __Block_copy(&local_b8);
    _swift_release(local_90);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar10 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
  }
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar12,&local_b8,puVar10,puVar7,lVar2,puVar3);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar13,puVar12,aBlock);
  puVar7 = local_d0;
LAB_100115638:
  __Block_release(aBlock);
  (**(code **)(local_c8 + 8))(puVar12,lVar2);
  (**(code **)(local_d8 + 8))(lVar13,puVar7);
  return;
}

