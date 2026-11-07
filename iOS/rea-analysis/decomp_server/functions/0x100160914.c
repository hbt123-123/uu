// rea decompile_all
// name: FUN_100160914
// address: 0x100160914
// body: available
// range: 0x100160914-0x100160fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100160914(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_160 [16];
  long lStack_150;
  undefined4 auStack_148 [2];
  long alStack_140 [2];
  undefined8 local_130;
  code *local_128;
  ulong local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  lVar1 = 0;
  local_c0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar15 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar14 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  local_d0 = *(long *)(lVar2 + -8);
  local_c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar14 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_100 = extraout_x12;
  local_f8 = lVar10;
  __s8Dispatch0A4TimeVMa();
  local_108 = *(long *)(lVar2 + -8);
  local_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_108 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar10;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar10 - extraout_x12_00;
  lVar2 = 0;
  local_e0 = lVar10;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_b8 = (code *)_TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
  if ((*(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0) &&
     (*(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) == param_1)) {
    __s10Foundation4DateVACycfC(lVar10);
    local_118 = lVar14;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar10 + -0x20) = param_1;
    *(undefined4 *)(lVar10 + -0x18) = param_3;
    *(long *)(lVar10 + -0x10) = lVar10;
    FUN_100407cdc(&local_a0,FUN_10016c534,lVar10 + -0x30,PTR___sSbN_1009958c8);
    lVar14 = local_118;
    (**(code **)(lVar12 + 8))(lVar10,lVar2);
    if ((char)local_a0 == '\x01') {
      uVar13 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
      _swift_unknownObjectWeakLoadStrong();
      if (uVar13 != 0) {
        uVar3 = 0;
        FUN_1001bc5d8(0);
        uVar6 = uVar13;
        _swift_dynamicCastClass(uVar13,uVar3);
        if (uVar6 == 0) {
          _swift_unknownObjectRelease(uVar13);
        }
        else {
          FUN_1001bbfbc();
          _swift_unknownObjectRelease();
          if ((uVar6 & 1) != 0) {
            FUN_100153164();
            uVar6 = uVar13;
            FUN_100189010();
            _swift_release(uVar13);
            puVar4 = &DAT_100a75a28;
            FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
            lVar2 = local_d0;
            local_120 = (ulong)*(byte *)(local_d0 + 0x50);
            uVar13 = local_120 + 0x20 & (local_120 ^ 0xffffffffffffffff);
            _swift_allocObject();
            lVar12 = local_c8;
            *(undefined8 *)(puVar4 + 0x18) = 2;
            *(undefined8 *)(puVar4 + 0x10) = 1;
            local_128 = *(code **)(lVar2 + 0x10);
            (*local_128)(puVar4 + uVar13,local_c0,local_c8);
            if (uVar6 == 0) {
              _swift_setDeallocating(puVar4);
              (**(code **)(lVar2 + 8))(puVar4 + uVar13,lVar12);
              _swift_deallocClassInstance(puVar4,0x20,7);
            }
            else {
              uVar5 = uVar6;
              FUN_1000e4118(uVar6,puVar4);
              _swift_bridgeObjectRelease(uVar6);
              _swift_setDeallocating(puVar4);
              _swift_arrayDestroy(puVar4 + uVar13,*(undefined8 *)(puVar4 + 0x10),lVar12);
              _swift_deallocClassInstance(puVar4,0x20,7);
              if ((uVar5 & 1) != 0) {
                uVar6 = (ulong)*(uint *)(param_1 + 0x10);
                FUN_10012acb0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                uVar13 = local_120;
                if ((uVar6 & 1) != 0) {
                  uVar6 = ~local_120;
                  uVar3 = 0;
                  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
                  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
                  lVar2 = local_110;
                  local_130 = uVar3;
                  __s8Dispatch0A4TimeV3nowACyFZ(local_110);
                  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_e0,0x3fc3333333333333,lVar2);
                  local_b8 = *(code **)(local_108 + 8);
                  (*local_b8)(lVar2,local_d8);
                  puVar4 = &DAT_10099f2e0;
                  _swift_allocObject(&DAT_10099f2e0,0x18,7);
                  _swift_unknownObjectWeakInit(puVar4 + 0x10,unaff_x20);
                  lVar10 = local_c8;
                  lVar2 = local_f8;
                  (*local_128)(local_f8,local_c0,local_c8);
                  uVar6 = uVar13 + 0x24 & uVar6;
                  puVar7 = &DAT_10099fc78;
                  _swift_allocObject(&DAT_10099fc78,uVar6 + local_100,uVar13 | 7);
                  *(undefined **)(puVar7 + 0x10) = puVar4;
                  *(long *)(puVar7 + 0x18) = param_1;
                  *(undefined4 *)(puVar7 + 0x20) = param_3;
                  (**(code **)(local_d0 + 0x20))(puVar7 + uVar6,lVar2,lVar10);
                  local_80 = FUN_10016bff4;
                  local_a0 = PTR___NSConcreteStackBlock_100995490;
                  local_98 = 0x42000000;
                  local_90 = FUN_1000acdb4;
                  puStack_88 = &DAT_10099fc90;
                  local_78 = puVar7;
                  aBlock = __Block_copy(&local_a0);
                  puVar4 = local_78;
                  _swift_retain(param_1);
                  _swift_release(puVar4);
                  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
                  local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
                  puVar8 = &DAT_100a75a90;
                  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                  puVar4 = &DAT_100a75a98;
                  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
                  puVar9 = &DAT_100a75aa0;
                  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,
                                PTR___sSayxGSTsMc_100995898);
                  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                            (lVar15,&local_a0,puVar4,puVar9,lVar1,puVar8);
                  lVar2 = local_e0;
                  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                            (local_e0,lVar14,lVar15,aBlock);
                  __Block_release(aBlock);
                  (**(code **)(lVar11 + 8))(lVar15,lVar1);
                  (**(code **)(local_f0 + 8))(lVar14,lStack_e8);
                  (*local_b8)(lVar2,local_d8);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined4 *)(lVar10 + -0x10) = param_3;
  FUN_1003fb4bc(FUN_10016bf78,lVar10 + -0x20,0xd0000000000000a4,0x800000010088d870,
                0xd000000000000025,0x8000000100894740,0x449,0);
  if ((*(long *)(unaff_x20 + (long)local_b8) != 0) &&
     (*(long *)(unaff_x20 + (long)local_b8) == param_1)) {
    FUN_10015659c(0x1000000000000015,0x8000000100894770);
  }
  return;
}

