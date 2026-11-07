// rea decompile_all
// name: FUN_1001b0da4
// address: 0x1001b0da4
// body: available
// range: 0x1001b0da4-0x1001b1143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b0da4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long extraout_x12;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long alStack_d0 [4];
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  local_b0 = *(long *)(lVar1 + -8);
  lStack_a8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  puVar12 = (undefined8 *)((long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  alStack_d0[2] = *(long *)(lVar1 + -8);
  local_a0 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(alStack_d0[2] + 0x40));
  lVar8 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = lVar8 - extraout_x12;
  lVar2 = 0;
  alStack_d0[3] = lVar8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001b1144,0,0xd000000000000095,0x8000000100877f50,0xd000000000000011,
                0x800000010088a9f0,0x126,0);
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::isSystemSleeping) = 0;
  lVar1 = _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem;
  lVar11 = *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
  }
  puVar3 = &DAT_1009a2478;
  _swift_allocObject(&DAT_1009a2478,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  local_70 = FUN_1001b5510;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009a2670;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  puVar5 = puVar3;
  _swift_retain(puVar3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar6 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar7 = puVar6;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar8,&local_98,puVar6,puVar7,lVar2,puVar5);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc(lVar13,lVar8,pvVar4);
  puVar6 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar13;
  _swift_retain(lVar13);
  _swift_release(uVar9);
  FUN_100004b70(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  lVar1 = alStack_d0[1];
  __s8Dispatch0A4TimeV3nowACyFZ(alStack_d0[1]);
  *puVar12 = 3;
  lVar11 = lStack_a8;
  lVar8 = local_b0;
  (**(code **)(local_b0 + 0x68))
            (puVar12,*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,
             lStack_a8);
  lVar2 = alStack_d0[3];
  __s8Dispatch1poiyAA0A4TimeVAD_AA0aB8IntervalOtF(alStack_d0[3],lVar1,puVar12);
  (**(code **)(lVar8 + 8))(puVar12,lVar11);
  lVar8 = local_a0;
  pcVar10 = *(code **)(alStack_d0[2] + 8);
  (*pcVar10)(lVar1,local_a0);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar2,lVar13);
  _swift_release(lVar13);
  (*pcVar10)(lVar2,lVar8);
  return;
}

