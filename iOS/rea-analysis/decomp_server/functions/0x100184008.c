// rea decompile_all
// name: FUN_100184008
// address: 0x100184008
// body: available
// range: 0x100184008-0x100184717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100184008(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar12;
  long unaff_x20;
  ID self;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_160 [16];
  ulong auStack_150 [4];
  undefined1 auStack_130 [8];
  undefined1 *local_128;
  ulong local_120;
  ulong local_118;
  undefined *local_110;
  long local_108;
  ulong local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar3 + -8);
  local_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar15 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar17 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(uVar4 - 8);
  uVar6 = uVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar18 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = lVar18 - extraout_x12;
  __s10Foundation12NotificationV8userInfoSDys11AnyHashableVypGSgvg();
  if (uVar6 == 0) goto LAB_1001845ec;
  local_a0 = (undefined *)0x4974736575716572;
  uStack_98 = 0xe900000000000064;
  puVar7 = PTR___sSSN_1009957f8;
  __ss11AnyHashableVyABxcSHRzlufC(&local_d0,&local_a0,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808)
  ;
  if (*(long *)(uVar6 + 0x10) == 0) {
LAB_1001841b0:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    ppuVar5 = &local_d0;
    FUN_1001a2e24(ppuVar5);
    if (((ulong)puVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar6);
      goto LAB_1001841b0;
    }
    FUN_10003e8bc(*(long *)(uVar6 + 0x38) + (long)ppuVar5 * 0x20,&local_90);
    _swift_bridgeObjectRelease(uVar6);
  }
  FUN_100132650(&local_d0);
  if (local_78 == 0) {
LAB_100184284:
    _swift_bridgeObjectRelease(uVar6);
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    ppuVar5 = &local_a0;
    _swift_dynamicCast(ppuVar5,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    uVar11 = uStack_98;
    if (((ulong)ppuVar5 & 1) != 0) {
      uVar1 = (ulong)local_a0 & 0xffffffffffff;
      if ((uStack_98 & 0x2000000000000000) != 0) {
        uVar1 = uStack_98 >> 0x38 & 0xf;
      }
      local_108 = lVar15;
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(uVar6);
        uVar6 = uVar11;
      }
      else {
        local_110 = local_a0;
        local_100 = uStack_98;
        local_a0 = (undefined *)0x68746170;
        uStack_98 = 0xe400000000000000;
        puVar7 = PTR___sSSN_1009957f8;
        __ss11AnyHashableVyABxcSHRzlufC
                  (&local_d0,&local_a0,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
        if (*(long *)(uVar6 + 0x10) == 0) {
          uStack_88 = 0;
          local_90 = 0;
          local_78 = 0;
          uStack_80 = 0;
        }
        else {
          _swift_bridgeObjectRetain(uVar6);
          ppuVar5 = &local_d0;
          FUN_1001a2e24(ppuVar5);
          if (((ulong)puVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(uVar6);
            uStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
          }
          else {
            FUN_10003e8bc(*(long *)(uVar6 + 0x38) + (long)ppuVar5 * 0x20,&local_90);
            _swift_bridgeObjectRelease(uVar6);
          }
        }
        _swift_bridgeObjectRelease(uVar6);
        FUN_100132650(&local_d0);
        uVar6 = local_100;
        if (local_78 == 0) goto LAB_100184284;
        ppuVar5 = &local_a0;
        _swift_dynamicCast(ppuVar5,&local_90,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
        uVar11 = uStack_98;
        puVar7 = local_a0;
        uVar6 = local_100;
        if (((ulong)ppuVar5 & 1) != 0) {
          uVar6 = 0x2f;
          __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,local_a0,uStack_98);
          if ((uVar6 & 1) != 0) {
            local_128 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
            __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(uVar16,puVar7,uVar11,1);
            _swift_bridgeObjectRelease(uVar11);
            __s10Foundation3URLV016standardizedFileB0ACvg(lVar18);
            pcVar14 = *(code **)(lVar13 + 8);
            uVar6 = uVar16;
            uVar11 = uVar4;
            (*pcVar14)();
            __s10Foundation3URLV4pathSSvg();
            (*pcVar14)(lVar18,uVar4);
            self = *(ID *)(unaff_x20 + 0x38);
            _objc_msgSend(self,"lock");
            _swift_beginAccess(unaff_x20 + 0x40,&local_90,0,0);
            uVar19 = *(undefined8 *)(unaff_x20 + 0x40);
            _swift_bridgeObjectRetain(uVar19);
            local_120 = uVar6;
            local_118 = uVar11;
            FUN_100153074(uVar6,uVar11,uVar19);
            _swift_bridgeObjectRelease(uVar19);
            _objc_msgSend(self,"unlock");
            if ((uVar6 & 1) != 0) {
              FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
              (**(code **)(lVar12 + 0x68))
                        (lVar17,*(undefined4 *)
                                 PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_100995f58,
                         lVar3);
              __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar17);
              (**(code **)(lVar12 + 8))(lVar17,lVar3);
              puVar7 = &DAT_1009a0fc0;
              _swift_allocObject(&DAT_1009a0fc0,0x18,7);
              _swift_weakInit(puVar7 + 0x10,unaff_x20);
              puVar8 = &DAT_1009a1010;
              _swift_allocObject(&DAT_1009a1010,0x38,7);
              *(undefined **)(puVar8 + 0x10) = puVar7;
              *(ulong *)(puVar8 + 0x18) = local_120;
              *(ulong *)(puVar8 + 0x20) = local_118;
              *(undefined **)(puVar8 + 0x28) = local_110;
              *(ulong *)(puVar8 + 0x30) = local_100;
              local_b0 = FUN_100185bb0;
              local_d0 = PTR___NSConcreteStackBlock_100995490;
              local_c8 = 0x42000000;
              local_c0 = FUN_1000acdb4;
              puStack_b8 = &DAT_1009a1028;
              local_a8 = puVar8;
              aBlock = __Block_copy(&local_d0);
              puVar9 = puVar7;
              _swift_retain(puVar7);
              lVar3 = local_108;
              __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_108);
              local_a0 = PTR___swiftEmptyArrayStorage_100995ea0;
              FUN_10003f7fc();
              puVar8 = &DAT_100a75a98;
              FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
              puVar10 = puVar8;
              FUN_10004eec4();
              lVar12 = local_e0;
              puVar2 = local_128;
              __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                        (local_128,&local_a0,puVar8,puVar10,local_e0,puVar9);
              __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                        (0,lVar3,puVar2,aBlock);
              __Block_release(aBlock);
              (**(code **)(local_e8 + 8))(puVar2,lVar12);
              (**(code **)(local_f8 + 8))(lVar3,lStack_f0);
              puVar8 = local_a8;
              _swift_release(puVar7);
              _swift_release(puVar8);
              return;
            }
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            uVar4 = local_100;
            *(undefined **)(uVar16 - 0x20) = local_110;
            *(ulong *)(uVar16 - 0x18) = uVar4;
            uVar6 = local_118;
            *(ulong *)(uVar16 - 0x10) = local_120;
            *(ulong *)(uVar16 - 8) = uVar6;
            FUN_1003fb4bc(FUN_100185b70,uVar16 - 0x30,0xd0000000000000b5,0x8000000100897680,
                          0xd000000000000011,0x8000000100897a40,0x55,0);
            _swift_bridgeObjectRelease(uVar4);
            _swift_bridgeObjectRelease(uVar6);
            return;
          }
          _swift_bridgeObjectRelease(local_100);
          uVar6 = uVar11;
        }
      }
    }
    _swift_bridgeObjectRelease(uVar6);
  }
LAB_1001845ec:
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_1001848dc,0,0xd0000000000000b5,0x8000000100897680,0xd000000000000011,
                0x8000000100897a40,0x4c,0);
  return;
}

