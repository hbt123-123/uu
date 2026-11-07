// rea decompile_all
// name: FUN_1003c1eb0
// address: 0x1003c1eb0
// body: available
// range: 0x1003c1eb0-0x1003c26ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c1eb0(ID param_1)

{
  ulong uVar1;
  ID *pIVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong self;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *aBlock;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar22;
  long lVar23;
  long extraout_x8_02;
  code *pcVar24;
  ulong uVar25;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long unaff_x20;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ID *pIVar34;
  undefined8 auStack_150 [2];
  ID *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar20 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  uVar25 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar30 = uVar25 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar32 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar32 + 0x40));
  lVar33 = lVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1003d0d4c();
  lVar22 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar33 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pIVar34 = (ID *)(lVar23 - extraout_x12);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar28 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar28 + 0x40));
  lVar26 = (long)pIVar34 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar27 = lVar26 - extraout_x12_00;
  IVar8 = _objc_msgSend(param_1,"timestamp");
  if (IVar8 != 0) {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(uVar27);
    uVar9 = uVar27;
    __s10Foundation4DateV1loiySbAC_ACtFZ
              (uVar27,unaff_x20 + _TtC8UUCommon18IPSReportCollector::startup);
    if ((uVar9 & 1) == 0) {
      pcVar24 = *(code **)(lVar28 + 8);
    }
    else {
      uVar9 = _objc_msgSend(param_1,"exceptions");
      if (uVar9 != 0) {
        uVar10 = 0;
        FUN_10004003c(0,&DAT_100a8c7e0,&PTR_SentryException_100a65ac0);
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar9,uVar10);
        local_140 = pIVar34;
        local_138 = lVar33;
        local_130 = lVar32;
        local_128 = lVar5;
        local_120 = lVar30;
        local_118 = lVar7;
        if (uVar9 >> 0x3e == 0) {
          uVar29 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar29 = uVar9 & 0xffffffffffffff8;
          if ((long)uVar9 < 0) {
            uVar29 = uVar9;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar29 != 0) {
          uVar31 = 0;
          do {
            if ((uVar9 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
                pcVar24 = (code *)SoftwareBreakpoint(1,0x1003c2530);
                (*pcVar24)();
              }
              self = *(ID *)(uVar9 + uVar31 * 8 + 0x20);
            }
            else {
              self = uVar31;
              FUN_1003d71d4(uVar31,uVar9);
            }
            uVar1 = uVar31 + 1;
            if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
              pcVar24 = (code *)SoftwareBreakpoint(1,0x1003c252c);
              (*pcVar24)();
            }
            IVar8 = _objc_msgSend(self,"mechanism");
            if (((IVar8 != 0) && (IVar8 = _objc_msgSend(IVar8,"handled"), IVar8 != 0)) &&
               (IVar8 = _objc_msgSend(IVar8,"boolValue"), (IVar8 & 1) == 0)) {
              _swift_bridgeObjectRelease(uVar9);
              pcVar17 = "releaseName";
              IVar8 = _objc_msgSend(param_1,"releaseName");
              if (IVar8 != 0) {
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                pcVar18 = "eventId";
                IVar11 = _objc_msgSend(param_1,"eventId");
                thunk_FUN_1007d6500();
                lVar7 = local_118;
                (**(code **)(lVar28 + 0x10))(lVar26,uVar27,local_118);
                pcVar19 = "dist";
                IVar12 = _objc_msgSend(param_1,"dist");
                if (IVar12 == 0) {
                  IVar12 = 0;
                  pcVar19 = (char *)0x0;
                }
                else {
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                }
                pIVar2 = local_140;
                *local_140 = IVar11;
                pIVar2[1] = (ID)pcVar18;
                (**(code **)(lVar28 + 0x20))
                          ((long)pIVar2 + (long)*(int *)(lVar6 + 0x14),lVar26,lVar7);
                pIVar34 = (ID *)((long)pIVar2 + (long)*(int *)(lVar6 + 0x18));
                *pIVar34 = IVar8;
                pIVar34[1] = (ID)pcVar17;
                pIVar34 = (ID *)((long)pIVar2 + (long)*(int *)(lVar6 + 0x1c));
                *pIVar34 = IVar12;
                pIVar34[1] = (ID)pcVar19;
                puVar13 = &DAT_1009b9548;
                _swift_allocObject(&DAT_1009b9548,0x18,7);
                _swift_weakInit(puVar13 + 0x10,unaff_x20);
                FUN_100082394(pIVar2,lVar23,FUN_1003d0d4c);
                uVar25 = (ulong)*(byte *)(lVar22 + 0x50);
                uVar9 = uVar25 + 0x18 & (uVar25 ^ 0xffffffffffffffff);
                puVar14 = &DAT_1009b9610;
                _swift_allocObject(&DAT_1009b9610,uVar9 + extraout_x13,uVar25 | 7);
                *(undefined **)(puVar14 + 0x10) = puVar13;
                FUN_1000823d8(lVar23,puVar14 + uVar9,FUN_1003d0d4c);
                local_78 = FUN_1003d1214;
                local_98 = PTR___NSConcreteStackBlock_100995490;
                local_90 = 0x42000000;
                local_88 = FUN_1000acdb4;
                puStack_80 = &DAT_1009b9628;
                local_70 = puVar14;
                aBlock = __Block_copy(&local_98);
                _swift_retain(puVar13);
                lVar3 = local_138;
                __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_138);
                local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
                puVar15 = &DAT_100a75a90;
                FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                              PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
                puVar14 = &DAT_100a75a98;
                FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
                puVar16 = &DAT_100a75aa0;
                FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
                lVar5 = local_120;
                __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                          (local_120,&local_a0,puVar14,puVar16,lVar4,puVar15);
                __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                          (0,lVar3,lVar5,aBlock);
                __Block_release(aBlock);
                (**(code **)(lVar21 + 8))(lVar5,lVar4);
                (**(code **)(local_130 + 8))(lVar3,local_128);
                FUN_1000d27dc(pIVar2,FUN_1003d0d4c);
                (**(code **)(lVar28 + 8))(uVar27,lVar7);
                puVar14 = local_70;
                _swift_release(puVar13);
                _swift_release(puVar14);
                return;
              }
              pcVar24 = *(code **)(lVar28 + 8);
              lVar7 = local_118;
              goto LAB_1003c256c;
            }
            uVar31 = uVar31 + 1;
          } while (uVar1 != uVar29);
        }
        _swift_bridgeObjectRelease(uVar9);
        lVar7 = local_118;
      }
      pcVar24 = *(code **)(lVar28 + 8);
    }
LAB_1003c256c:
    (*pcVar24)(uVar27,lVar7);
  }
  (**(code **)(lVar20 + 0x68))(uVar25,1,lVar3);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar8 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar7 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    uVar9 = uVar25;
    FUN_1005cc2b8();
    if ((uVar9 & 1) == 0) {
      _swift_release(lVar7);
    }
    else {
      IVar11 = 0xd000000000000090;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0);
      pcVar17 = "lastPathComponent";
      IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
      *(undefined8 *)(uVar27 - 0x10) = 0xeb00000000293a5f;
      *(undefined8 *)(uVar27 - 8) = 0xb4;
      FUN_1005cc010(FUN_1003fdd70,0,uVar25,0x65746f6d65525555,0xe800000000000000,IVar11,pcVar17,
                    0x286576726573626f);
      _swift_release(lVar7);
      _swift_bridgeObjectRelease(pcVar17);
    }
  }
  _objc_msgSend(IVar8,"unlock");
  (**(code **)(lVar20 + 8))(uVar25,lVar3);
  return;
}

