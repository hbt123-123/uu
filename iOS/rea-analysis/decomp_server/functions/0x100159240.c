// rea decompile_all
// name: FUN_100159240
// address: 0x100159240
// body: available
// range: 0x100159240-0x100159aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100159240(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  void *aBlock;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long lVar14;
  long extraout_x8_02;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  undefined8 *local_170;
  undefined *local_168;
  undefined8 local_160;
  void *local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined1 auStack_110 [16];
  long local_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined4 local_9c;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_130 = *(long *)(lVar2 + -8);
  local_128 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_130 + 0x40));
  lVar13 = (long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_138 = lVar13;
  __s8Dispatch0A3QoSVMa();
  local_148 = *(long *)(lVar2 + -8);
  local_140 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a766c8;
  local_150 = lVar13;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8_01;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  local_120 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  uVar15 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_100401b14();
  local_118 = uVar4;
  local_100 = param_2 + 0x10;
  uStack_f8 = param_1;
  FUN_1003fb4ec(FUN_10016c0d8,auStack_110,0xd0000000000000a4,0x800000010088d870,0xd00000000000002e,
                0x8000000100893030,299,0);
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_3 == 0) ||
     (_swift_beginAccess(param_2 + 0x10,auStack_98,0,0), *(char *)(param_2 + 0x14) == '\x01')) {
    FUN_1003fb48c(FUN_100159be0,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000002e,
                  0x8000000100893030,0x12d,0);
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  FUN_1001533d4();
  FUN_1001426bc(lVar13,uVar1);
  lVar2 = local_120;
  lVar5 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,local_120);
  if ((int)lVar5 == 1) {
    FUN_100040bb4(lVar13,&DAT_100a766c8,&DAT_10080b1d0);
  }
  else {
    uVar16 = uVar15;
    (**(code **)(lVar14 + 0x20))(uVar15,lVar13,lVar2);
    FUN_100153164();
    uVar6 = uVar16;
    FUN_100189010();
    _swift_release(uVar16);
    puVar3 = &DAT_100a75a28;
    FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
    uVar16 = (ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    (**(code **)(lVar14 + 0x10))(puVar3 + uVar16,uVar15,lVar2);
    if (uVar6 == 0) {
      _swift_setDeallocating(puVar3);
      pcVar17 = *(code **)(lVar14 + 8);
      (*pcVar17)(puVar3 + uVar16,lVar2);
      _swift_deallocClassInstance(puVar3,0x20,7);
    }
    else {
      uVar7 = uVar6;
      FUN_1000e4118(uVar6,puVar3);
      _swift_bridgeObjectRelease(uVar6);
      _swift_setDeallocating(puVar3);
      _swift_arrayDestroy(puVar3 + uVar16,*(undefined8 *)(puVar3 + 0x10),lVar2);
      _swift_deallocClassInstance(puVar3,0x20,7);
      if ((uVar7 & 1) != 0) {
        uVar4 = *(undefined8 *)
                 (param_3 +
                 _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility);
        puVar3 = &DAT_10099f8b8;
        _swift_allocObject(&DAT_10099f8b8,0x18,7);
        _swift_weakInit(puVar3 + 0x10,uVar4);
        puVar8 = &DAT_10099fe08;
        _swift_allocObject(&DAT_10099fe08,0x28,7);
        *(undefined **)(puVar8 + 0x10) = puVar3;
        *(code **)(puVar8 + 0x18) = FUN_100008290;
        *(undefined8 *)(puVar8 + 0x20) = 0;
        _swift_retain(uVar4);
        _swift_retain(puVar3);
        IVar9 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar9 == 0) {
          uVar10 = 0;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          local_b0 = thunk_FUN_10016bbb8;
          local_d0 = PTR___NSConcreteStackBlock_100995490;
          local_c8 = 0x42000000;
          local_c0 = FUN_1000acdb4;
          puStack_b8 = &DAT_10099fe20;
          local_118 = uVar10;
          local_a8 = puVar8;
          local_158 = __Block_copy(&local_d0);
          puVar12 = local_a8;
          _swift_retain(puVar8);
          _swift_release(puVar12);
          lVar2 = local_150;
          local_160 = uVar4;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_150);
          local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar11 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar12 = &DAT_100a75a98;
          local_170 = puVar11;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar11 = &DAT_100a75aa0;
          local_168 = puVar8;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar5 = local_128;
          lVar13 = local_138;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_138,&local_d0,puVar12,puVar11,local_128,local_170);
          aBlock = local_158;
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar2,lVar13,local_158);
          __Block_release(aBlock);
          _swift_release(local_160);
          _swift_release(local_168);
          (**(code **)(local_130 + 8))(lVar13,lVar5);
          (**(code **)(local_148 + 8))(lVar2,local_140);
          (**(code **)(lVar14 + 8))(uVar15,local_120);
          _swift_release(puVar3);
        }
        else {
          _swift_beginAccess(puVar3 + 0x10,auStack_e8,0,0);
          puVar12 = puVar3 + 0x10;
          _swift_weakLoadStrong();
          lVar2 = local_120;
          if (puVar12 == (undefined *)0x0) {
            _swift_release(uVar4);
          }
          else {
            FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000015,
                          0x8000000100893c60,0x82,7);
            _objc_msgSend(*(ID *)(puVar12 + 0x20),"clearContents");
            _swift_release(uVar4);
            _swift_release(puVar8);
            puVar8 = puVar12;
          }
          _swift_release(puVar8);
          (**(code **)(lVar14 + 8))(uVar15,lVar2);
          _swift_release(puVar3);
        }
        goto LAB_100159728;
      }
      pcVar17 = *(code **)(lVar14 + 8);
      lVar2 = local_120;
    }
    (*pcVar17)(uVar15,lVar2);
  }
LAB_100159728:
  lVar2 = *(long *)(param_3 +
                   _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel);
  uVar4 = *(undefined8 *)
           (lVar2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_9c = uVar1;
  _swift_retain(uVar4);
  FUN_1003e37e8(&local_d0,&local_9c);
  _swift_release(uVar4);
  puVar3 = local_d0;
  if (local_d0 != (undefined *)0x0) {
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar8 = &DAT_10099f868;
    _swift_allocObject(&DAT_10099f868,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10,lVar2);
    puVar12 = &DAT_10099fde0;
    _swift_allocObject(&DAT_10099fde0,0x20,7);
    *(undefined **)(puVar12 + 0x10) = puVar3;
    *(undefined **)(puVar12 + 0x18) = puVar8;
    _swift_retain(puVar3);
    _swift_retain(puVar8);
    pcVar17 = thunk_FUN_10016bb80;
    FUN_1003f1064(0x3ff0000000000000,thunk_FUN_10016bb80,puVar12);
    _swift_release(puVar3);
    _swift_release(pcVar17);
    _swift_release(puVar8);
    _swift_release(puVar12);
  }
  _swift_beginAccess(param_3 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,&local_d0,0x21,0)
  ;
  FUN_10006d93c(&local_9c,uVar1);
  FUN_10006d93c(&local_9c,uVar1);
  _swift_endAccess(&local_d0);
  FUN_100161224(uVar1);
  return;
}

