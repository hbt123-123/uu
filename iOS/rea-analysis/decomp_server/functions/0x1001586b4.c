// rea decompile_all
// name: FUN_1001586b4
// address: 0x1001586b4
// body: available
// range: 0x1001586b4-0x100158fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001586b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ID IVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  void *aBlock;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long extraout_x8;
  long lVar22;
  long lVar23;
  long extraout_x8_00;
  long lVar24;
  long lVar25;
  long extraout_x8_01;
  long lVar26;
  long extraout_x8_02;
  long lVar27;
  long extraout_x8_03;
  code *pcVar28;
  long lVar29;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined1 auStack_270 [16];
  undefined8 auStack_260 [4];
  code *local_240;
  long local_238;
  undefined *local_230;
  undefined *local_1c8;
  undefined8 local_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  code *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [160];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  
  lVar4 = 0;
  uVar30 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = (long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar23 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar23 + 0x40));
  lVar24 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar25 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar25 + 0x40));
  lVar29 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar26 = lVar29 - extraout_x12;
  puVar13 = &DAT_100a77040;
  puVar15 = &DAT_10080e910;
  FUN_100004bb4();
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = lVar26 - extraout_x8_02;
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar31 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar31 + 0x40));
  lVar32 = lVar27 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = 0xc000000000000000;
  local_b0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  FUN_100193df4(auStack_150,&local_b0);
  lVar12 = _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  lVar8 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 != 0) {
    puVar15 = auStack_150;
    FUN_1001bddd8(param_1);
    _swift_unknownObjectRelease(lVar8);
  }
  FUN_10012a8e4();
  local_230 = (undefined *)param_2;
  if ((param_4 & 1) == 0) {
    uVar9 = unaff_x20 + lVar12;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar9 != 0) {
      uVar10 = 0;
      FUN_1001bc5d8(0);
      uVar11 = uVar9;
      _swift_dynamicCastClass(uVar9,uVar10);
      if (uVar11 == 0) {
        _swift_unknownObjectRelease(uVar9);
      }
      else {
        FUN_1001bbfbc();
        _swift_unknownObjectRelease(uVar9);
        if ((uVar11 & 1) != 0) {
          FUN_10015659c(0x100000000000002a,0x8000000100894bb0);
          __s10Foundation4DateVACycfC(lVar32);
          lVar12 = 0;
          FUN_100129300();
          _swift_allocObject();
          lVar8 = _TtC14UURemoteServer20DragDropPasteSession::lock;
          puVar13 = &_OBJC_CLASS___NSLock;
          _objc_allocWithZone();
          IVar14 = _objc_msgSend((ID)puVar13,"init");
          *(ID *)(lVar12 + lVar8) = IVar14;
          puVar1 = (undefined4 *)(lVar12 + _TtC14UURemoteServer20DragDropPasteSession::boundTaskID);
          *puVar1 = 0;
          *(undefined1 *)(puVar1 + 1) = 1;
          *(undefined1 *)(lVar12 + _TtC14UURemoteServer20DragDropPasteSession::preparing) = 0;
          *(undefined1 *)(lVar12 + _TtC14UURemoteServer20DragDropPasteSession::cancelled) = 0;
          *(int *)(lVar12 + 0x10) = (int)local_230;
          *(undefined **)(lVar12 + 0x18) = puVar15;
          *(undefined8 *)(lVar12 + 0x20) = uVar30;
          __s10Foundation4DateV18addingTimeIntervalyACSdF
                    (lVar12 + _TtC14UURemoteServer20DragDropPasteSession::deadline,
                     0x403e000000000000);
          (**(code **)(lVar31 + 8))(lVar32,lVar7);
          uVar30 = *(undefined8 *)
                    (unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
          *(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) = lVar12;
          _swift_retain(lVar12);
          _swift_release(uVar30);
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 *)(lVar32 + -0x10) = param_3;
          pcVar28 = FUN_10016c050;
          FUN_1003fb48c(FUN_10016c050,lVar32 + -0x20,0xd0000000000000a4,0x800000010088d870,
                        0xd000000000000029,0x8000000100894be0,0x42a,0);
          FUN_100153444();
          puVar13 = &DAT_10099fcc8;
          _swift_allocObject(&DAT_10099fcc8,0x20,7);
          *(long *)(puVar13 + 0x10) = lVar12;
          *(long *)(puVar13 + 0x18) = unaff_x20;
          puVar15 = puVar13;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(code **)(lVar32 + -0x20) = pcVar28;
          *(code **)(lVar32 + -0x18) = FUN_10016c05c;
          *(undefined **)(lVar32 + -0x10) = puVar15;
          puVar15 = &DAT_100a7a328;
          FUN_100004bb4(&DAT_100a7a328,&DAT_10080ecc0);
          local_230 = puVar15;
          _swift_allocObject();
          _swift_retain(lVar12);
          pcVar16 = FUN_10016c548;
          FUN_100615648(FUN_10016c548,lVar32 + -0x30);
          _swift_release(pcVar28);
          _swift_release(puVar13);
          local_240 = *(code **)(lVar21 + 0x38);
          (*local_240)(lVar27,1,1,lVar4);
          puVar13 = &DAT_10099f2e0;
          _swift_allocObject(&DAT_10099f2e0,0x18,7);
          _swift_unknownObjectWeakInit(puVar13 + 0x10);
          puVar15 = &DAT_10099fcf0;
          _swift_allocObject(&DAT_10099fcf0,0x20,7);
          *(undefined **)(puVar15 + 0x10) = puVar13;
          *(long *)(puVar15 + 0x18) = lVar12;
          local_238 = lVar12;
          _swift_retain();
          FUN_10060edd8();
          _swift_beginAccess();
          uVar30 = *(undefined8 *)(lVar12 + 8);
          puVar13 = &DAT_100a7a330;
          FUN_10003f840(&DAT_100a7a330,&DAT_100a7a328,&DAT_10080ecc0,
                        &TargetProtocolConformanceDescriptor_1008488a0);
          FUN_1006170a4(uVar30,lVar27,FUN_10016c064,puVar15,local_230,puVar13);
          local_230 = (undefined *)uVar30;
          _swift_release(pcVar16);
          _swift_release(puVar15);
          FUN_100040bb4(lVar27,&DAT_100a77040,&DAT_10080e910);
          (*local_240)(lVar27,1,1,lVar4);
          puVar13 = &DAT_10099f2e0;
          _swift_allocObject(&DAT_10099f2e0,0x18,7);
          _swift_unknownObjectWeakInit(puVar13 + 0x10);
          puVar15 = &DAT_10099fd18;
          _swift_allocObject(&DAT_10099fd18,0x20,7);
          lVar8 = local_238;
          *(undefined **)(puVar15 + 0x10) = puVar13;
          *(long *)(puVar15 + 0x18) = local_238;
          _swift_beginAccess(lVar12,auStack_180,0,0);
          uVar30 = *(undefined8 *)(lVar12 + 8);
          _swift_beginAccess(lVar12,auStack_198,0,0);
          uVar2 = *(undefined1 *)(lVar12 + 0x10);
          _swift_retain(lVar8);
          _swift_retain(puVar13);
          puVar17 = &DAT_100a77058;
          FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
          puVar18 = &DAT_100a77060;
          FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                        &TargetProtocolConformanceDescriptor_1008488bc);
          puVar3 = local_230;
          FUN_10060913c(uVar30,lVar27,uVar2,FUN_10016c07c,puVar15,puVar17,puVar18);
          _swift_release();
          _swift_release(puVar3);
          _swift_release(puVar15);
          FUN_100040bb4(lVar27,&DAT_100a77040,&DAT_10080e910);
          _swift_release(puVar13);
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          __s8Dispatch0A4TimeV3nowACyFZ(lVar29);
          __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar26,0x403e000000000000,lVar29);
          pcVar28 = *(code **)(lVar25 + 8);
          (*pcVar28)(lVar29,lVar6);
          puVar13 = &DAT_10099f2e0;
          _swift_allocObject(&DAT_10099f2e0,0x18,7);
          _swift_unknownObjectWeakInit(puVar13 + 0x10,unaff_x20);
          puVar15 = &DAT_10099fd40;
          _swift_allocObject(&DAT_10099fd40,0x20,7);
          lVar8 = local_238;
          *(undefined **)(puVar15 + 0x10) = puVar13;
          *(long *)(puVar15 + 0x18) = local_238;
          local_1a8 = FUN_10016c084;
          local_1c8 = PTR___NSConcreteStackBlock_100995490;
          local_1c0 = 0x42000000;
          local_1b8 = FUN_1000acdb4;
          puStack_1b0 = &DAT_10099fd58;
          local_1a0 = puVar15;
          aBlock = __Block_copy(&local_1c8);
          puVar13 = local_1a0;
          _swift_retain(lVar8);
          _swift_release(puVar13);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar24);
          local_1c8 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar19 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar13 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar20 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (lVar22,&local_1c8,puVar13,puVar20,lVar4,puVar19);
          __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (lVar26,lVar24,lVar22,aBlock);
          __Block_release(aBlock);
          FUN_10016b308(auStack_150);
          _swift_release(lVar8);
          (**(code **)(lVar21 + 8))(lVar22,lVar4);
          (**(code **)(lVar23 + 8))(lVar24,lVar5);
          (*pcVar28)(lVar26,lVar6);
          return;
        }
      }
    }
  }
  FUN_1001679bc(0x1000000000000030,0x8000000100894b70);
  FUN_10016b308(auStack_150);
  return;
}

