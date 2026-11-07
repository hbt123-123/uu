// rea decompile_all
// name: FUN_1001662c8
// address: 0x1001662c8
// body: available
// range: 0x1001662c8-0x10016694b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001662c8(long param_1)

{
  void *aBlock;
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_f0 [8];
  undefined8 *local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  puVar16 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lStack_b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar18 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar18 - extraout_x8_01;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  uVar14 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1001533d4();
  FUN_1001426bc(lVar19,*(undefined4 *)(param_1 + 0x28));
  lVar2 = lVar19;
  (**(code **)(lVar17 + 0x30))(lVar19,1,lVar4);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar19,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    uVar15 = uVar14;
    local_c0 = param_1;
    (**(code **)(lVar17 + 0x20))(uVar14,lVar19,lVar4);
    FUN_100153164();
    uVar5 = uVar15;
    FUN_100189010();
    _swift_release(uVar15);
    puVar3 = &DAT_100a75a28;
    FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
    uVar15 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    (**(code **)(lVar17 + 0x10))(puVar3 + uVar15,uVar14,lVar4);
    if (uVar5 == 0) {
      _swift_setDeallocating(puVar3);
      pcVar12 = *(code **)(lVar17 + 8);
      (*pcVar12)(puVar3 + uVar15,lVar4);
      _swift_deallocClassInstance(puVar3,0x20,7);
    }
    else {
      uVar6 = uVar5;
      local_c8 = lVar1;
      FUN_1000e4118(uVar5,puVar3);
      _swift_bridgeObjectRelease(uVar5);
      _swift_setDeallocating(puVar3);
      _swift_arrayDestroy(puVar3 + uVar15,*(undefined8 *)(puVar3 + 0x10),lVar4);
      _swift_deallocClassInstance(puVar3,0x20,7);
      if ((uVar6 & 1) != 0) {
        uVar13 = *(undefined8 *)
                  (unaff_x20 +
                  _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility);
        puVar3 = &DAT_10099f8b8;
        _swift_allocObject(&DAT_10099f8b8,0x18,7);
        _swift_weakInit(puVar3 + 0x10,uVar13);
        puVar7 = &DAT_10099f8e0;
        _swift_allocObject(&DAT_10099f8e0,0x28,7);
        *(undefined **)(puVar7 + 0x10) = puVar3;
        *(code **)(puVar7 + 0x18) = FUN_100008290;
        *(undefined8 *)(puVar7 + 0x20) = 0;
        _swift_retain(uVar13);
        _swift_retain(puVar3);
        IVar8 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar8 == 0) {
          uVar9 = 0;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          local_d0 = uVar13;
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          local_80 = FUN_10016bbb8;
          local_a0 = PTR___NSConcreteStackBlock_100995490;
          local_98 = 0x42000000;
          local_90 = FUN_1000acdb4;
          puStack_88 = &DAT_10099f8f8;
          local_d8 = uVar9;
          local_78 = puVar7;
          local_e0 = __Block_copy(&local_a0);
          puVar11 = local_78;
          _swift_retain(puVar7);
          _swift_release(puVar11);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
          local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar10 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar11 = &DAT_100a75a98;
          local_e8 = puVar10;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar10 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar2 = local_c8;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (puVar16,&local_a0,puVar11,puVar10,local_c8,local_e8);
          aBlock = local_e0;
          local_e8 = (undefined8 *)puVar7;
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar18,puVar16,local_e0);
          __Block_release(aBlock);
          _swift_release(local_d0);
          _swift_release(local_e8);
          (**(code **)(local_a8 + 8))(puVar16,lVar2);
          (**(code **)(local_b8 + 8))(lVar18,lStack_b0);
          (**(code **)(lVar17 + 8))(uVar14,lVar4);
        }
        else {
          _swift_beginAccess(puVar3 + 0x10,&local_a0,0,0);
          puVar11 = puVar3 + 0x10;
          _swift_weakLoadStrong();
          if (puVar11 == (undefined *)0x0) {
            _swift_release(uVar13);
          }
          else {
            FUN_100401b14(0);
            FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000015,
                          0x8000000100893c60,0x82,7);
            _objc_msgSend(*(ID *)(puVar11 + 0x20),"clearContents");
            _swift_release(uVar13);
            _swift_release(puVar7);
            puVar7 = puVar11;
          }
          _swift_release(puVar7);
          (**(code **)(lVar17 + 8))(uVar14,lVar4);
        }
        _swift_release(puVar3);
        param_1 = local_c0;
        goto LAB_100166834;
      }
      pcVar12 = *(code **)(lVar17 + 8);
    }
    param_1 = local_c0;
    (*pcVar12)(uVar14,lVar4);
  }
LAB_100166834:
  lVar2 = *(long *)(unaff_x20 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel);
  local_6c = *(undefined4 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)
            (lVar2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  _swift_retain(uVar13);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar13);
  if (local_68 != 0) {
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar3 = &DAT_10099f868;
    _swift_allocObject(&DAT_10099f868,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,lVar2);
    puVar7 = &DAT_10099f890;
    _swift_allocObject(&DAT_10099f890,0x20,7);
    *(long *)(puVar7 + 0x10) = local_68;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    _swift_retain(local_68);
    _swift_retain(puVar3);
    pcVar12 = FUN_10016bb80;
    FUN_1003f1064(0x3ff0000000000000,FUN_10016bb80,puVar7);
    _swift_release(local_68);
    _swift_release(pcVar12);
    _swift_release(puVar3);
    _swift_release(puVar7);
  }
  return 0;
}

