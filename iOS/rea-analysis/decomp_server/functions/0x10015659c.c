// rea decompile_all
// name: FUN_10015659c
// address: 0x10015659c
// body: available
// range: 0x10015659c-0x100156d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10015659c(undefined8 param_1,undefined8 param_2)

{
  void *aBlock;
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  ID IVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar16;
  ulong uVar17;
  long extraout_x12;
  long unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auStack_150 [16];
  long alStack_140 [4];
  undefined1 auStack_120 [8];
  undefined *local_118;
  void *local_110;
  undefined8 local_108;
  undefined *local_100;
  long local_f8;
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined4 local_7c;
  long local_78 [3];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a766c8;
  local_c8 = lVar15;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar15 - extraout_x8_01;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar18 = _TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
  uVar17 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar21 = *(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
  if (lVar21 == 0) {
    return;
  }
  local_f8 = lVar4;
  local_f0 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e8 = lVar19;
  local_e0 = lVar3;
  local_d8 = uVar17;
  local_d0 = lVar6;
  local_b8 = extraout_x12;
  _swift_retain(lVar21);
  FUN_100407cdc(FUN_10016c5e0,lVar21,PTR___sytN_100995e90 + 8);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar18);
  *(undefined8 *)(unaff_x20 + lVar18) = 0;
  _swift_release(uVar7);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)(uVar17 - 0x20) = lVar21;
  *(undefined8 *)(uVar17 - 0x18) = param_1;
  *(undefined8 *)(uVar17 - 0x10) = param_2;
  FUN_1003fb4bc(FUN_10016c0e0,uVar17 - 0x30,0xd0000000000000a4,0x800000010088d870,0xd00000000000001b
                ,0x8000000100894f30,0x462,0);
  puVar5 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  FUN_100407cdc(&local_b0,FUN_10016c5cc,lVar21,puVar5);
  if (((ulong)local_b0 & 0x100000000) != 0) goto LAB_100156b8c;
  uVar2 = local_b0._0_4_;
  uVar20 = (ulong)local_b0 & 0xffffffff;
  FUN_1001533d4();
  FUN_1001426bc(lVar15,uVar20);
  lVar3 = local_b8;
  lVar18 = local_d0;
  lVar4 = lVar15;
  (**(code **)(local_b8 + 0x30))(lVar15,1,local_d0);
  uVar17 = local_d8;
  if ((int)lVar4 == 1) {
    FUN_100040bb4(lVar15,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    uVar22 = local_d8;
    (**(code **)(lVar3 + 0x20))(local_d8,lVar15,lVar18);
    FUN_100153164();
    uVar8 = uVar22;
    FUN_100189010();
    _swift_release(uVar22);
    puVar5 = &DAT_100a75a28;
    FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
    uVar22 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    (**(code **)(lVar3 + 0x10))(puVar5 + uVar22,uVar17,lVar18);
    if (uVar8 == 0) {
      _swift_setDeallocating(puVar5);
      pcVar16 = *(code **)(lVar3 + 8);
      (*pcVar16)(puVar5 + uVar22,lVar18);
      _swift_deallocClassInstance(puVar5,0x20,7);
    }
    else {
      uVar17 = uVar8;
      FUN_1000e4118(uVar8,puVar5);
      _swift_bridgeObjectRelease(uVar8);
      _swift_setDeallocating(puVar5);
      _swift_arrayDestroy(puVar5 + uVar22,*(undefined8 *)(puVar5 + 0x10),lVar18);
      _swift_deallocClassInstance(puVar5,0x20,7);
      if ((uVar17 & 1) != 0) {
        uVar7 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility);
        puVar5 = &DAT_10099f8b8;
        _swift_allocObject(&DAT_10099f8b8,0x18,7);
        _swift_weakInit(puVar5 + 0x10,uVar7);
        puVar9 = &DAT_10099fe80;
        _swift_allocObject(&DAT_10099fe80,0x28,7);
        *(undefined **)(puVar9 + 0x10) = puVar5;
        *(code **)(puVar9 + 0x18) = FUN_100008290;
        *(undefined8 *)(puVar9 + 0x20) = 0;
        _swift_retain(uVar7);
        _swift_retain(puVar5);
        IVar10 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar10 == 0) {
          uVar12 = 0;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          local_90 = thunk_FUN_10016bbb8;
          local_b0 = PTR___NSConcreteStackBlock_100995490;
          local_a8 = 0x42000000;
          local_a0 = FUN_1000acdb4;
          puStack_98 = &DAT_10099fe98;
          local_108 = uVar12;
          local_88 = puVar9;
          local_110 = __Block_copy(&local_b0);
          puVar11 = local_88;
          _swift_retain(puVar9);
          _swift_release(puVar11);
          lVar3 = local_c8;
          local_100 = puVar5;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
          local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar13 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar5 = &DAT_100a75a98;
          local_118 = puVar9;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar14 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar18 = local_e0;
          puVar1 = local_f0;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_f0,&local_b0,puVar5,puVar14,local_e0,puVar13);
          aBlock = local_110;
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar3,puVar1,local_110);
          __Block_release(aBlock);
          _swift_release(uVar7);
          _swift_release(local_118);
          (**(code **)(local_e8 + 8))(puVar1,lVar18);
          (**(code **)(local_c0 + 8))(lVar3,local_f8);
          (**(code **)(local_b8 + 8))(local_d8,local_d0);
          _swift_release(local_100);
        }
        else {
          _swift_beginAccess(puVar5 + 0x10,&local_b0,0,0);
          puVar11 = puVar5 + 0x10;
          _swift_weakLoadStrong();
          uVar17 = local_d8;
          if (puVar11 == (undefined *)0x0) {
            _swift_release(uVar7);
            _swift_release(puVar9);
            pcVar16 = *(code **)(local_b8 + 8);
          }
          else {
            FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000015,
                          0x8000000100893c60,0x82,7);
            _objc_msgSend(*(ID *)(puVar11 + 0x20),"clearContents");
            _swift_release(uVar7);
            _swift_release(puVar9);
            _swift_release(puVar11);
            pcVar16 = *(code **)(local_b8 + 8);
            uVar17 = local_d8;
          }
          (*pcVar16)(uVar17,local_d0);
          _swift_release(puVar5);
        }
        goto LAB_100156a88;
      }
      pcVar16 = *(code **)(local_b8 + 8);
      uVar17 = local_d8;
    }
    (*pcVar16)(uVar17,lVar18);
  }
LAB_100156a88:
  lVar18 = *(long *)(unaff_x20 +
                    _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel);
  uVar7 = *(undefined8 *)
           (lVar18 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_7c = uVar2;
  _swift_retain(uVar7);
  FUN_1003e37e8(local_78,&local_7c);
  _swift_release(uVar7);
  if (local_78[0] != 0) {
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar5 = &DAT_10099f868;
    _swift_allocObject(&DAT_10099f868,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,lVar18);
    puVar9 = &DAT_10099fe58;
    _swift_allocObject(&DAT_10099fe58,0x20,7);
    *(long *)(puVar9 + 0x10) = local_78[0];
    *(undefined **)(puVar9 + 0x18) = puVar5;
    _swift_retain(local_78[0]);
    _swift_retain(puVar5);
    pcVar16 = thunk_FUN_10016bb80;
    FUN_1003f1064(0x3ff0000000000000,thunk_FUN_10016bb80,puVar9);
    _swift_release(local_78[0]);
    _swift_release(pcVar16);
    _swift_release(puVar5);
    _swift_release(puVar9);
  }
  FUN_100161224(uVar20);
LAB_100156b8c:
  _swift_release(lVar21);
  return;
}

