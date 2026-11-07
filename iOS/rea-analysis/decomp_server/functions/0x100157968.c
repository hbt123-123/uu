// rea decompile_all
// name: FUN_100157968
// address: 0x100157968
// body: available
// range: 0x100157968-0x100158527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100157b04 to 0x1000407a8 FUN_1000407a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157968(undefined8 *param_1,ulong *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar20;
  long unaff_x20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_290 [16];
  long alStack_280 [4];
  undefined1 auStack_260 [8];
  undefined1 *local_258;
  ulong local_250;
  undefined8 local_248;
  long local_240;
  ulong local_238;
  ulong local_230;
  ulong uStack_228;
  long local_220;
  undefined1 auStack_1e0 [24];
  undefined *local_1c8 [3];
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  code *local_190;
  undefined *local_188;
  undefined *local_180;
  ulong uStack_178;
  undefined4 local_170;
  ulong local_168;
  ulong uStack_160;
  undefined *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_80;
  
  puVar4 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = auStack_260 + -extraout_x8;
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar26 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar21 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar25 = lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  IVar7 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((int)IVar7 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar4 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar8 = &DAT_10099f308;
    _swift_allocObject(&DAT_10099f308,0x120,7);
    uVar11 = param_1[0x10];
    uVar28 = param_1[0x13];
    uVar27 = param_1[0x12];
    *(undefined8 *)(puVar8 + 0xa0) = param_1[0x11];
    *(undefined8 *)(puVar8 + 0x98) = uVar11;
    *(undefined8 *)(puVar8 + 0xb0) = uVar28;
    *(undefined8 *)(puVar8 + 0xa8) = uVar27;
    uVar11 = param_1[0x14];
    uVar28 = param_1[0x17];
    uVar27 = param_1[0x16];
    *(undefined8 *)(puVar8 + 0xc0) = param_1[0x15];
    *(undefined8 *)(puVar8 + 0xb8) = uVar11;
    *(undefined8 *)(puVar8 + 0xd0) = uVar28;
    *(undefined8 *)(puVar8 + 200) = uVar27;
    uVar11 = param_1[8];
    uVar28 = param_1[0xb];
    uVar27 = param_1[10];
    *(undefined8 *)(puVar8 + 0x60) = param_1[9];
    *(undefined8 *)(puVar8 + 0x58) = uVar11;
    *(undefined8 *)(puVar8 + 0x70) = uVar28;
    *(undefined8 *)(puVar8 + 0x68) = uVar27;
    uVar11 = param_1[0xc];
    uVar28 = param_1[0xf];
    uVar27 = param_1[0xe];
    *(undefined8 *)(puVar8 + 0x80) = param_1[0xd];
    *(undefined8 *)(puVar8 + 0x78) = uVar11;
    *(undefined8 *)(puVar8 + 0x90) = uVar28;
    *(undefined8 *)(puVar8 + 0x88) = uVar27;
    uVar11 = *param_1;
    uVar28 = param_1[3];
    uVar27 = param_1[2];
    *(undefined8 *)(puVar8 + 0x20) = param_1[1];
    *(undefined8 *)(puVar8 + 0x18) = uVar11;
    *(undefined8 *)(puVar8 + 0x30) = uVar28;
    *(undefined8 *)(puVar8 + 0x28) = uVar27;
    uVar11 = param_1[4];
    uVar28 = param_1[7];
    uVar27 = param_1[6];
    *(undefined8 *)(puVar8 + 0x40) = param_1[5];
    *(undefined8 *)(puVar8 + 0x38) = uVar11;
    *(undefined8 *)(puVar8 + 0x50) = uVar28;
    *(undefined8 *)(puVar8 + 0x48) = uVar27;
    uVar23 = param_2[1];
    uVar14 = *param_2;
    uVar22 = param_2[2];
    *(ulong *)(puVar8 + 0xf0) = param_2[3];
    *(ulong *)(puVar8 + 0xe8) = uVar22;
    uVar22 = param_2[4];
    uVar30 = param_2[7];
    uVar29 = param_2[6];
    *(ulong *)(puVar8 + 0x100) = param_2[5];
    *(ulong *)(puVar8 + 0xf8) = uVar22;
    *(ulong *)(puVar8 + 0x110) = uVar30;
    *(ulong *)(puVar8 + 0x108) = uVar29;
    *(undefined **)(puVar8 + 0x10) = puVar4;
    *(ulong *)(puVar8 + 0x118) = param_2[8];
    *(ulong *)(puVar8 + 0xe0) = uVar23;
    *(ulong *)(puVar8 + 0xd8) = uVar14;
    local_a0 = FUN_10015868c;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    uStack_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_10099f320;
    local_98 = puVar8;
    pvVar15 = __Block_copy(&local_c0);
    puVar4 = local_98;
    FUN_1000408d0(param_1,&local_180);
    FUN_100128ac0(param_2,&local_180);
    _swift_release(puVar4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar25);
    local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar26,&local_180,puVar4,puVar10,lVar5,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar25,lVar26,pvVar15);
    __Block_release(pvVar15);
    (**(code **)(lVar19 + 8))(lVar26,lVar5);
    (**(code **)(lVar21 + 8))(lVar25,lVar6);
    return;
  }
  if ((((int)param_2[1] != 0) &&
      (uVar22 = param_2[6], ((uVar22 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0)) &&
     ((uVar22 >> 0x3d & 1) != 0)) {
    uVar14 = param_2[4];
    uVar23 = param_2[5];
    puVar4 = (undefined *)param_2[2];
    uVar29 = param_2[3];
    uStack_160 = uVar22 & 0xdfffffffffffffff;
    local_170 = (undefined4)uVar14;
    local_180 = puVar4;
    uStack_178 = uVar29;
    local_168 = uVar23;
    FUN_10012ac6c(puVar4,uVar29,uVar14,uVar23,uVar22);
    FUN_1001586b4(param_1,param_2,&local_180);
    FUN_1000407a8(puVar4,uVar29,uVar14,uVar23,uVar22);
    return;
  }
  FUN_10015659c(0x1000000000000021,0x8000000100893000);
  uVar11 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(ulong **)(lVar25 + -0x10) = param_2;
  *(long *)(lVar25 + -8) = unaff_x20;
  local_248 = uVar11;
  FUN_1003fb48c(FUN_1001590f0,lVar25 + -0x20,0xd0000000000000a4,0x800000010088d870,
                0xd00000000000002e,0x8000000100893030,0x115,7);
  lVar13 = _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  lVar12 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar12 == 0) {
    return;
  }
  lVar13 = unaff_x20 + lVar13;
  local_240 = lVar12;
  _swift_unknownObjectWeakLoadStrong();
  lVar12 = local_240;
  if ((lVar13 != 0) &&
     (bVar2 = *(byte *)(lVar13 + _TtC14UURemoteServer16ClipboardHandler::isSuspend),
     _swift_unknownObjectRelease(), lVar12 = local_240, (bVar2 & 1) == 0)) {
    uStack_b8 = 0xc000000000000000;
    local_c0 = (undefined *)0x0;
    local_a0 = (code *)0x0;
    local_90 = 0;
    local_80 = 0;
    FUN_100193df4(&local_180,&local_c0);
    lVar12 = local_240;
    FUN_1001bddd8(param_1,&local_180);
    uVar22 = *param_2;
    if (*(long *)(uVar22 + 0x10) != 0) {
      FUN_100153530();
      local_250 = uVar22;
      FUN_10016e184();
      _swift_release(param_1);
      local_258 = puVar24;
      if (uVar22 >> 0x3e == 0) {
        uVar14 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar14 = uVar22 & 0xffffffffffffff8;
        if ((long)uVar22 < 0) {
          uVar14 = uVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      local_220 = lVar5;
      if (uVar14 != 0) {
        if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10015819c);
          (*pcVar3)();
        }
        uVar23 = 0;
        local_238 = uVar22 & 0xc000000000000001;
        local_230 = uVar14;
        uStack_228 = uVar22;
        do {
          if (local_238 == 0) {
            uVar14 = *(ulong *)(uStack_228 + uVar23 * 8 + 0x20);
            uVar22 = uVar14;
            _swift_retain();
          }
          else {
            uVar22 = uVar23;
            FUN_10016a034(uVar23,uStack_228);
            uVar14 = uVar22;
          }
          uVar23 = uVar23 + 1;
          FUN_1001536b4();
          puVar4 = &DAT_10099f358;
          _swift_allocObject(&DAT_10099f358,0x18,7);
          _swift_weakInit(puVar4 + 0x10,uVar22);
          puVar8 = &DAT_10099f380;
          _swift_allocObject(&DAT_10099f380,0x20,7);
          *(undefined **)(puVar8 + 0x10) = puVar4;
          *(ulong *)(puVar8 + 0x18) = uVar14;
          local_190 = FUN_10014978c;
          local_1b0 = PTR___NSConcreteStackBlock_100995490;
          local_1a8 = 0x42000000;
          local_1a0 = FUN_1000acdb4;
          puStack_198 = &DAT_10099f398;
          local_188 = puVar8;
          pvVar15 = __Block_copy(&local_1b0);
          _swift_retain(puVar4);
          _swift_retain(uVar14);
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar25);
          local_1c8[0] = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar9 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar8 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar10 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar5 = local_220;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (lVar26,local_1c8,puVar8,puVar10,local_220,puVar9);
          __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (0,lVar25,lVar26,pvVar15);
          __Block_release(pvVar15);
          _swift_release(uVar14);
          _swift_release(uVar22);
          (**(code **)(lVar19 + 8))(lVar26,lVar5);
          (**(code **)(lVar21 + 8))(lVar25,lVar6);
          puVar8 = local_188;
          _swift_release(puVar4);
          _swift_release(puVar8);
          uVar22 = uStack_228;
        } while (local_230 != uVar23);
      }
      _swift_bridgeObjectRelease();
      lVar12 = local_240;
      FUN_1001bc2b4();
      if ((uVar22 & 1) == 0) {
        if (*(char *)(unaff_x20 +
                     _TtC14UURemoteServer18ClipboardPCManager::remoteAssistFileTransferEnabled) ==
            '\x01') {
          FUN_1001533d4();
          uVar22 = local_250;
          FUN_10013a0f0();
          if (uVar22 >> 0x3e == 0) {
            uVar14 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar14 = uVar22 & 0xffffffffffffff8;
            if ((long)uVar22 < 0) {
              uVar14 = uVar22;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar14 != 0) {
            if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100158528);
              (*pcVar3)();
            }
            uVar23 = 0;
            do {
              if ((uVar22 & 0xc000000000000001) != 0) {
                FUN_10016a034(uVar23,uVar22);
                _swift_unknownObjectRelease();
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 != uVar14);
          }
          _swift_bridgeObjectRelease(uVar22);
          FUN_1003fb45c(FUN_100143da4,0,0xd0000000000000ad,0x8000000100890750,0xd000000000000021,
                        0x8000000100893060,0x28f,7);
          puVar4 = &DAT_10099f3d0;
          _swift_allocObject(&DAT_10099f3d0,0x18,7);
          *(undefined4 *)(puVar4 + 0x10) = 0;
          puVar4[0x14] = 1;
          puVar16 = puVar4;
          FUN_100153444();
          puVar8 = puVar16;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined **)(lVar25 + -0x20) = puVar8;
          *(code **)(lVar25 + -0x18) = FUN_10016b34c;
          *(undefined **)(lVar25 + -0x10) = puVar4;
          puVar8 = &DAT_100a7a328;
          FUN_100004bb4(&DAT_100a7a328,&DAT_10080ecc0);
          _swift_allocObject();
          _swift_retain(puVar4);
          pcVar3 = FUN_10016b38c;
          FUN_100615648(FUN_10016b38c,lVar25 + -0x30);
          _swift_release(puVar16);
          _swift_release(puVar4);
          lVar5 = local_220;
          puVar24 = local_258;
          pcVar20 = *(code **)(lVar19 + 0x38);
          (*pcVar20)(local_258,1,1,local_220);
          puVar16 = &DAT_10099f2e0;
          _swift_allocObject(&DAT_10099f2e0,0x18,7);
          puVar17 = puVar16 + 0x10;
          _swift_unknownObjectWeakInit(puVar17,unaff_x20);
          FUN_10060edd8();
          _swift_beginAccess();
          uVar11 = *(undefined8 *)(puVar17 + 8);
          puVar18 = &DAT_100a7a330;
          FUN_10003f840(&DAT_100a7a330,&DAT_100a7a328,&DAT_10080ecc0,
                        &TargetProtocolConformanceDescriptor_1008488a0);
          FUN_1006170a4(uVar11,puVar24,FUN_10016b3a8,puVar16,puVar8,puVar18);
          _swift_release(pcVar3);
          _swift_release(puVar16);
          FUN_100040bb4(puVar24,&DAT_100a77040,&DAT_10080e910);
          (*pcVar20)(puVar24,1,1,lVar5);
          puVar8 = &DAT_10099f2e0;
          _swift_allocObject(&DAT_10099f2e0,0x18,7);
          _swift_unknownObjectWeakInit(puVar8 + 0x10,unaff_x20);
          puVar16 = &DAT_10099f3f8;
          _swift_allocObject(&DAT_10099f3f8,0x20,7);
          *(undefined **)(puVar16 + 0x10) = puVar4;
          *(undefined **)(puVar16 + 0x18) = puVar8;
          _swift_beginAccess(puVar17,local_1c8,0,0);
          uVar27 = *(undefined8 *)(puVar17 + 8);
          _swift_beginAccess(puVar17,auStack_1e0,0,0);
          uVar1 = puVar17[0x10];
          _swift_retain(puVar4);
          _swift_retain(puVar8);
          puVar17 = &DAT_100a77058;
          FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
          puVar18 = &DAT_100a77060;
          FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                        &TargetProtocolConformanceDescriptor_1008488bc);
          FUN_10060913c(uVar27,puVar24,uVar1,FUN_10016b3c0,puVar16,puVar17,puVar18);
          _swift_release();
          _swift_release(uVar11);
          _swift_release(puVar16);
          FUN_10016b308(&local_180);
          _swift_unknownObjectRelease(local_240);
          FUN_100040bb4(puVar24,&DAT_100a77040,&DAT_10080e910);
          _swift_release(puVar4);
          _swift_release(puVar8);
          return;
        }
        FUN_10016b308(&local_180);
        lVar12 = local_240;
        goto LAB_1001580c8;
      }
    }
    FUN_10016b308(&local_180);
  }
LAB_1001580c8:
  _swift_unknownObjectRelease(lVar12);
  return;
}

