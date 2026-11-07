// rea decompile_all
// name: FUN_100162c18
// address: 0x100162c18
// body: available
// range: 0x100162c18-0x10016336b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100162c18(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *aBlock;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_e0 [16];
  long alStack_d0 [4];
  char *local_b0;
  char *local_a8;
  long local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar16 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar22 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  lVar20 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar9 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar9 == 0) {
    uVar10 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_a0 = lVar16;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar11 = &DAT_10099f2e0;
    local_a8 = (char *)uVar10;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar11 + 0x10);
    puVar12 = &DAT_10099f638;
    _swift_allocObject(&DAT_10099f638,0x28,7);
    *(undefined **)(puVar12 + 0x10) = puVar11;
    *(undefined8 *)(puVar12 + 0x18) = param_1;
    *(undefined8 *)(puVar12 + 0x20) = param_2;
    local_70 = FUN_10016b894;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_10099f650;
    local_68 = puVar12;
    aBlock = __Block_copy(&local_90);
    puVar11 = local_68;
    _swift_bridgeObjectRetain(param_2);
    _swift_release(puVar11);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar20);
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar11 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar14 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar17,&local_90,puVar11,puVar14,lVar7,puVar13);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar20,lVar17,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_a0 + 8))(lVar17,lVar7);
    (**(code **)(lVar22 + 8))(lVar20,lVar8);
  }
  else {
    FUN_1001533d4();
    lVar7 = *(long *)(IVar9 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData
                     );
    lVar8 = lVar7;
    _swift_retain();
    FUN_1003e2c0c();
    _swift_release();
    FUN_100153208();
    lVar17 = *(long *)(lVar7 + 0x20);
    lVar16 = lVar17;
    _swift_retain();
    FUN_1003e2c0c();
    _swift_release(lVar7);
    _swift_release(lVar17);
    uVar10 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar20 + -0x20) = param_1;
    *(undefined8 *)(lVar20 + -0x18) = param_2;
    *(long *)(lVar20 + -0x10) = lVar8;
    *(long *)(lVar20 + -8) = lVar16;
    local_a0 = uVar10;
    FUN_1003fb48c(FUN_10016b8a0,lVar20 + -0x30,0xd0000000000000a4,0x800000010088d870,
                  0xd00000000000001c,0x80000001008935a0,0x2ef,0);
    FUN_10015659c(param_1,param_2);
    lVar7 = 0;
    uVar15 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if ((long)uVar15 < 0x40) {
      uVar21 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar21 = uVar21 & *(ulong *)(lVar8 + 0x38);
    while( true ) {
      for (; uVar21 != 0; uVar21 = uVar21 - 1 & uVar21) {
        uVar4 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        FUN_100161224(*(undefined4 *)
                       (*(long *)(lVar8 + 0x30) +
                       (lVar7 << 8 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 2)));
      }
      bVar6 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100163368);
        (*pcVar5)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar7) break;
      uVar21 = ((ulong *)(lVar8 + 0x38))[lVar7];
    }
    _swift_release(lVar8);
    lVar8 = _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileUploadModel;
    lVar7 = 0;
    uVar15 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if ((long)uVar15 < 0x40) {
      uVar21 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar21 = uVar21 & *(ulong *)(lVar16 + 0x38);
    local_b0 = s______0_taskID__10088ffb0 + 0x20;
    local_a8 = s_____10088fc40 + 0x20;
    while( true ) {
      while (uVar21 != 0) {
        uVar4 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        uVar2 = *(undefined4 *)
                 (*(long *)(lVar16 + 0x30) +
                 (lVar7 << 8 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 2));
        lVar17 = *(long *)(unaff_x20 + lVar8);
        uVar10 = *(undefined8 *)(lVar17 + 0x20);
        local_94 = uVar2;
        _swift_retain(uVar10);
        _swift_retain(lVar17);
        FUN_1003e37e8(&local_90,&local_94);
        _swift_release(uVar10);
        if (local_90 != (undefined *)0x0) {
          _swift_release();
          FUN_1003fb45c(FUN_1001359d8,0,0xd0000000000000ac,(ulong)local_a8 | 0x8000000000000000,
                        0xd000000000000015,(ulong)local_b0 | 0x8000000000000000,0xe4,7);
          uVar10 = *(undefined8 *)(lVar17 + 0x20);
          local_90 = (undefined *)0x0;
          local_94 = uVar2;
          _swift_retain(uVar10);
          FUN_1003e3634(&local_90,&local_94);
          _swift_release(uVar10);
        }
        _swift_release(lVar17);
      }
      bVar6 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10016336c);
        (*pcVar5)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar7) break;
      uVar21 = ((ulong *)(lVar16 + 0x38))[lVar7];
    }
    _swift_release(lVar16);
    lVar7 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
    _swift_beginAccess(lVar7,&local_90,0x21,0);
    lVar8 = 0;
    FUN_100127240();
    lVar16 = (long)*(int *)(lVar8 + 0x20);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar7 + lVar16));
    FUN_10006006c();
    uVar10 = *(undefined8 *)(lVar7 + lVar16);
    *(undefined **)(lVar7 + lVar16) = PTR___swiftEmptyDictionarySingleton_100995ea8;
    FUN_100040bb4(lVar7,&DAT_100a79890,&DAT_10080e600);
    lVar16 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar7,1,1,lVar16);
    uVar18 = *(undefined8 *)(lVar7 + *(int *)(lVar8 + 0x14));
    *(undefined **)(lVar7 + *(int *)(lVar8 + 0x14)) = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = (undefined8 *)(lVar7 + *(int *)(lVar8 + 0x18));
    uVar19 = puVar13[1];
    *puVar13 = 0;
    puVar13[1] = 0xe000000000000000;
    puVar1 = (undefined4 *)(lVar7 + *(int *)(lVar8 + 0x1c));
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    iVar3 = *(int *)(lVar8 + 0x24);
    FUN_100040bb4(lVar7 + iVar3,&DAT_100a76718,&DAT_10080ccc0);
    lVar16 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar7 + iVar3,1,1,lVar16);
    *(undefined1 *)(lVar7 + *(int *)(lVar8 + 0x2c)) = 1;
    _swift_endAccess(&local_90);
    _swift_bridgeObjectRelease(uVar19);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar10);
    FUN_1001536d4();
    FUN_10014875c();
    _swift_release(uVar10);
    FUN_1001536e4();
    FUN_10014875c();
    _swift_release(uVar10);
    uVar10 = *(undefined8 *)
              (*(long *)(unaff_x20 +
                        _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___fileReceiveModel
                        ) + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
    FUN_1003fb45c(FUN_1001906ec,0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000016,
                  0x80000001008935c0,0x169,7);
    FUN_10060536c(uVar10);
    FUN_10015567c(0);
  }
  return;
}

