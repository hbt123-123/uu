// rea decompile_all
// name: FUN_10015567c
// address: 0x10015567c
// body: available
// range: 0x10015567c-0x10015606b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10015567c(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ID IVar13;
  void *aBlock;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long lVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar19;
  long unaff_x20;
  undefined8 uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined *puVar25;
  long lVar26;
  ulong local_330;
  uint local_324;
  ulong local_320;
  long local_318;
  long local_310;
  long lStack_308;
  long local_300;
  long local_2f8;
  long local_2f0;
  undefined *local_2a8;
  undefined *puStack_2a0;
  code *local_298;
  undefined *puStack_290;
  code *local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 local_1a0 [3];
  undefined1 auStack_188 [24];
  undefined *local_170;
  undefined *puStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2f8 = *(long *)(lVar6 + -8);
  local_2f0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2f8 + 0x40));
  lVar17 = (long)&local_330 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_300 = lVar17;
  __s8Dispatch0A3QoSVMa();
  local_310 = *(long *)(lVar6 + -8);
  lStack_308 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_310 + 0x40));
  lVar17 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_318 = lVar17;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar18 + 0x40));
  puVar25 = (undefined *)(lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar8 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar26 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar26 + 0x40));
  lVar10 = _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  puVar23 = (undefined8 *)(puVar25 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar6 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar17 = _TtC14UURemoteServer16ClipboardHandler::ref;
  if (lVar6 != 0) {
    _swift_beginAccess(lVar6 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_188,0,0);
    lVar17 = lVar6 + lVar17;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar17 == 0) {
      _swift_unknownObjectRelease();
    }
    else {
      FUN_1000c7b64();
      _swift_unknownObjectRelease(lVar6);
      puVar11 = *(undefined **)(lVar17 + 0x30);
      puVar22 = *(undefined **)(lVar17 + 0x38);
      _swift_bridgeObjectRetain(puVar22);
      _swift_release();
      lVar6 = lVar17;
      if (puVar22 != (undefined *)0x0) {
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_10015606c,0,0xd0000000000000a4,0x800000010088d870,&DAT_d000000000000010,
                      0x8000000100893fc0,0xa0,7);
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        uVar20 = *(undefined8 *)(DAT_100b360a8 + 0xa8);
        local_298 = (code *)CONCAT71(local_298._1_7_,3);
        local_2a8 = puVar11;
        puStack_2a0 = puVar22;
        local_1a0[0] = uVar20;
        FUN_10016b97c(&local_2a8);
        uStack_a8 = uStack_1e0;
        local_b0 = local_1e8;
        uStack_98 = uStack_1d0;
        uStack_a0 = local_1d8;
        uStack_88 = uStack_1c0;
        local_90 = local_1c8;
        local_80 = local_1b8;
        uStack_e8 = uStack_220;
        local_f0 = local_228;
        uStack_d8 = uStack_210;
        uStack_e0 = local_218;
        uStack_c8 = uStack_200;
        local_d0 = local_208;
        uStack_b8 = uStack_1f0;
        uStack_c0 = local_1f8;
        uStack_128 = uStack_260;
        local_130 = local_268;
        uStack_118 = uStack_250;
        uStack_120 = local_258;
        uStack_108 = uStack_240;
        local_110 = local_248;
        uStack_f8 = uStack_230;
        uStack_100 = local_238;
        puStack_168 = puStack_2a0;
        local_170 = local_2a8;
        puStack_158 = puStack_290;
        pcStack_160 = local_298;
        puStack_148 = puStack_280;
        local_150 = local_288;
        uStack_138 = uStack_270;
        uStack_140 = local_278;
        *puVar23 = 1;
        (**(code **)(lVar26 + 0x68))
                  (puVar23,*(undefined4 *)
                            PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,lVar8);
        FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
        __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ(uVar20);
        uVar9 = 0;
        FUN_1000fd494(0);
        FUN_1005d68b4(&local_170,puVar23,uVar20,0,0,uVar9,&PTR_PTR_10099cbd8);
        _swift_bridgeObjectRelease(puVar22);
        (**(code **)(lVar26 + 8))(puVar23,lVar8);
        lVar6 = 0;
      }
    }
  }
  FUN_100153164();
  lVar17 = lVar6;
  FUN_100189010();
  _swift_release(lVar6);
  if (lVar17 != 0) {
    uVar19 = *(ulong *)(lVar17 + 0x10);
    if (uVar19 != 0) {
      lVar10 = unaff_x20 + lVar10;
      _swift_unknownObjectWeakLoadStrong();
      lVar6 = _TtC14UURemoteServer16ClipboardHandler::ref;
      if (lVar10 != 0) {
        _swift_beginAccess(lVar10 + _TtC14UURemoteServer16ClipboardHandler::ref,local_1a0,0,0);
        lVar6 = lVar10 + lVar6;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar6 == 0) {
          _swift_unknownObjectRelease(lVar10);
        }
        else {
          FUN_1000c7b64();
          _swift_unknownObjectRelease(lVar10);
          uVar1 = *(ulong *)(lVar6 + 0x30);
          uVar2 = *(ulong *)(lVar6 + 0x38);
          _swift_bridgeObjectRetain(uVar2);
          _swift_release(lVar6);
          if (uVar2 != 0) {
            local_324 = 0;
            bVar3 = *(byte *)(lVar18 + 0x50);
            uVar24 = uVar1;
            if ((uVar2 & 0x2000000000000000) != 0) {
              uVar24 = uVar2 >> 0x38 & 0xf;
            }
            local_320 = 0xb;
            if (((uint)(uVar2 >> 0x3c) & (uint)((uVar1 & 0x800000000000000) == 0)) == 0) {
              local_320 = 7;
            }
            local_320 = local_320 | uVar24 << 0x10;
            local_330 = uVar19 - 1;
            uVar24 = 0;
            do {
              while( true ) {
                if (*(ulong *)(lVar17 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100156054);
                  (*pcVar4)();
                }
                puVar15 = (undefined *)
                          (lVar17 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff)) +
                          *(long *)(lVar18 + 0x48) * uVar24);
                puVar11 = puVar25;
                (**(code **)(lVar18 + 0x10))(puVar25,puVar15,lVar7);
                __s10Foundation3URLV14absoluteStringSSvg();
                local_1b0 = 0x746f6d657275752e;
                local_1a8 = 0xea00000000005f65;
                local_2a8 = puVar11;
                puStack_2a0 = puVar15;
                FUN_10009ff0c();
                puVar23 = &local_1b0;
                puVar22 = PTR___sSSN_1009957f8;
                __sSy10FoundationE8containsySbqd__SyRd__lF
                          (puVar23,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar11,puVar11);
                _swift_bridgeObjectRelease();
                if (((ulong)puVar23 & 1) != 0) break;
                (**(code **)(lVar18 + 8))(puVar25,lVar7);
LAB_100155af8:
                uVar24 = uVar24 + 1;
                if (uVar19 == uVar24) {
                  _swift_bridgeObjectRelease(lVar17);
                  _swift_bridgeObjectRelease(uVar2);
                  if ((local_324 & 1) == 0) {
                    return;
                  }
                  goto LAB_100155cf0;
                }
              }
              __s10Foundation3URLV14absoluteStringSSvg();
              uVar21 = uVar1;
              __sSS5countSivg(uVar1,uVar2);
              if ((long)uVar21 < 5) {
                uVar20 = 0;
                uVar21 = 0xe000000000000000;
              }
              else {
                _swift_bridgeObjectRetain(uVar2);
                uVar21 = local_320;
                uVar12 = 0xf;
                uVar16 = 5;
                __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,5,local_320,uVar1,uVar2);
                if ((uVar16 & 1) == 0) {
                  uVar21 = uVar12;
                }
                uVar20 = 0xf;
                uVar12 = uVar1;
                uVar16 = uVar2;
                __sSSySsSnySS5IndexVGcig(0xf,uVar21,uVar1,uVar2);
                _swift_bridgeObjectRelease(uVar2);
                __sSS14_fromSubstringySSSshFZ(uVar20,uVar21,uVar12,uVar16);
                _swift_bridgeObjectRelease(uVar16);
              }
              puVar23 = &local_1b0;
              local_2a8 = puVar15;
              puStack_2a0 = puVar22;
              local_1b0 = uVar20;
              local_1a8 = uVar21;
              __sSy10FoundationE8containsySbqd__SyRd__lF
                        (puVar23,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar11,puVar11);
              _swift_bridgeObjectRelease(uVar21);
              (**(code **)(lVar18 + 8))(puVar25,lVar7);
              _swift_bridgeObjectRelease(puVar22);
              if (((ulong)puVar23 & 1) == 0) goto LAB_100155af8;
              local_324 = 1;
              bVar5 = local_330 != uVar24;
              uVar24 = uVar24 + 1;
            } while (bVar5);
            _swift_bridgeObjectRelease(lVar17);
            _swift_bridgeObjectRelease(uVar2);
LAB_100155cf0:
            FUN_100401b14(0);
            FUN_1003fb45c(FUN_100156098,0,0xd0000000000000a4,0x800000010088d870,
                          &DAT_d000000000000010,0x8000000100893fc0,0xae,7);
            puVar22 = *(undefined **)
                       (unaff_x20 +
                       _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility)
            ;
            puVar25 = &DAT_10099f8b8;
            _swift_allocObject(&DAT_10099f8b8,0x18,7);
            _swift_weakInit(puVar25 + 0x10,puVar22);
            puVar11 = &DAT_10099f930;
            _swift_allocObject(&DAT_10099f930,0x28,7);
            *(undefined **)(puVar11 + 0x10) = puVar25;
            *(code **)(puVar11 + 0x18) = FUN_100008290;
            *(undefined8 *)(puVar11 + 0x20) = 0;
            _swift_retain(puVar22);
            _swift_retain(puVar25);
            IVar13 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
            if ((int)IVar13 == 0) {
              FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
              __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
              local_288 = thunk_FUN_10016bbb8;
              local_2a8 = PTR___NSConcreteStackBlock_100995490;
              puStack_2a0 = (undefined *)0x42000000;
              local_298 = FUN_1000acdb4;
              puStack_290 = &DAT_10099f948;
              puStack_280 = puVar11;
              aBlock = __Block_copy(&local_2a8);
              puVar15 = puStack_280;
              _swift_retain(puVar11);
              _swift_release(puVar15);
              lVar6 = local_318;
              __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_318);
              local_2a8 = PTR___swiftEmptyArrayStorage_100995ea0;
              puVar23 = &DAT_100a75a90;
              FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                            PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
              puVar15 = &DAT_100a75a98;
              FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
              puVar14 = &DAT_100a75aa0;
              FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898
                           );
              lVar10 = local_2f0;
              lVar17 = local_300;
              __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                        (local_300,&local_2a8,puVar15,puVar14,local_2f0,puVar23);
              __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                        (0,lVar6,lVar17,aBlock);
              __Block_release(aBlock);
              _swift_release(puVar22);
              _swift_release(puVar11);
              (**(code **)(local_2f8 + 8))(lVar17,lVar10);
              (**(code **)(local_310 + 8))(lVar6,lStack_308);
            }
            else {
              _swift_beginAccess(puVar25 + 0x10,&local_2a8,0,0);
              puVar15 = puVar25 + 0x10;
              _swift_weakLoadStrong();
              if (puVar15 == (undefined *)0x0) {
                _swift_release(puVar25);
                _swift_release(puVar11);
                puVar25 = puVar22;
              }
              else {
                FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,
                              0xd000000000000015,0x8000000100893c60,0x82,7);
                _objc_msgSend(*(ID *)(puVar15 + 0x20),"clearContents");
                _swift_release(puVar25);
                _swift_release(puVar22);
                _swift_release(puVar11);
                puVar25 = puVar15;
              }
            }
            _swift_release(puVar25);
            return;
          }
        }
      }
    }
    _swift_bridgeObjectRelease(lVar17);
  }
  return;
}

