// rea decompile_all
// name: FUN_10015e898
// address: 0x10015e898
// body: available
// range: 0x10015e898-0x10015ed4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10015e898(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_1b0 [16];
  undefined4 auStack_1a0 [2];
  undefined8 auStack_198 [3];
  undefined8 local_180;
  long local_178;
  long local_170;
  long local_168;
  ulong local_160;
  undefined *local_158 [24];
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_160 = param_2 >> 0x20;
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_170 = *(long *)(lVar2 + -8);
  local_168 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_170 + 0x40));
  lVar2 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  uVar11 = local_160;
  if ((int)IVar3 == 0) {
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    local_178 = lVar12;
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_10099f2e0;
    local_180 = uVar6;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_10099f4c0;
    _swift_allocObject(&DAT_10099f4c0,0xf8,7);
    uVar6 = param_1[0x10];
    uVar15 = param_1[0x13];
    uVar14 = param_1[0x12];
    *(undefined8 *)(puVar8 + 0xa0) = param_1[0x11];
    *(undefined8 *)(puVar8 + 0x98) = uVar6;
    *(undefined8 *)(puVar8 + 0xb0) = uVar15;
    *(undefined8 *)(puVar8 + 0xa8) = uVar14;
    uVar6 = param_1[0x14];
    uVar15 = param_1[0x17];
    uVar14 = param_1[0x16];
    *(undefined8 *)(puVar8 + 0xc0) = param_1[0x15];
    *(undefined8 *)(puVar8 + 0xb8) = uVar6;
    *(undefined8 *)(puVar8 + 0xd0) = uVar15;
    *(undefined8 *)(puVar8 + 200) = uVar14;
    uVar6 = param_1[8];
    uVar15 = param_1[0xb];
    uVar14 = param_1[10];
    *(undefined8 *)(puVar8 + 0x60) = param_1[9];
    *(undefined8 *)(puVar8 + 0x58) = uVar6;
    *(undefined8 *)(puVar8 + 0x70) = uVar15;
    *(undefined8 *)(puVar8 + 0x68) = uVar14;
    uVar6 = param_1[0xc];
    uVar15 = param_1[0xf];
    uVar14 = param_1[0xe];
    *(undefined8 *)(puVar8 + 0x80) = param_1[0xd];
    *(undefined8 *)(puVar8 + 0x78) = uVar6;
    *(undefined8 *)(puVar8 + 0x90) = uVar15;
    *(undefined8 *)(puVar8 + 0x88) = uVar14;
    uVar6 = *param_1;
    uVar15 = param_1[3];
    uVar14 = param_1[2];
    *(undefined8 *)(puVar8 + 0x20) = param_1[1];
    *(undefined8 *)(puVar8 + 0x18) = uVar6;
    *(undefined8 *)(puVar8 + 0x30) = uVar15;
    *(undefined8 *)(puVar8 + 0x28) = uVar14;
    uVar6 = param_1[4];
    uVar15 = param_1[7];
    uVar14 = param_1[6];
    *(undefined8 *)(puVar8 + 0x40) = param_1[5];
    *(undefined8 *)(puVar8 + 0x38) = uVar6;
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x50) = uVar15;
    *(undefined8 *)(puVar8 + 0x48) = uVar14;
    *(int *)(puVar8 + 0xd8) = (int)param_2;
    *(int *)(puVar8 + 0xdc) = (int)local_160;
    *(undefined8 *)(puVar8 + 0xe0) = param_3;
    *(undefined8 *)(puVar8 + 0xe8) = param_4;
    *(undefined8 *)(puVar8 + 0xf0) = param_5;
    local_78 = FUN_10016b618;
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0x42000000;
    local_88 = FUN_1000acdb4;
    puStack_80 = &DAT_10099f4d8;
    local_70 = puVar8;
    aBlock = __Block_copy(&local_98);
    puVar7 = local_70;
    FUN_1000408d0(param_1,local_158);
    _swift_bridgeObjectRetain(param_3);
    FUN_100008184(param_4,param_5);
    _swift_release(puVar7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar2);
    local_158[0] = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar10 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar13,local_158,puVar7,puVar10,lVar1,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar2,lVar13,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_178 + 8))(lVar13,lVar1);
    (**(code **)(local_170 + 8))(lVar2,local_168);
  }
  else {
    lVar1 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
    _swift_beginAccess(lVar1,local_158,0,0);
    uVar4 = param_2;
    FUN_100152fd0(param_2,*(undefined8 *)(lVar1 + 8));
    if ((uVar4 & 1) == 0) {
      FUN_1001533d4();
      FUN_10013aff8(param_2,param_3,param_4,param_5);
      uVar6 = 0;
      FUN_100153444(0);
      FUN_100170254(param_1,param_2,param_3,param_4,param_5);
      _swift_release(uVar6);
      uVar11 = param_2;
      FUN_10013b7f4(param_2,param_3,param_4,param_5);
      if ((uVar11 & 1) != 0) {
        FUN_10015f548(param_2);
      }
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)(lVar2 + -0x20) = (int)param_2;
      *(int *)(lVar2 + -0x1c) = (int)uVar11;
      *(undefined8 *)(lVar2 + -0x18) = param_3;
      *(undefined8 *)(lVar2 + -0x10) = param_4;
      *(undefined8 *)(lVar2 + -8) = param_5;
      pcVar5 = FUN_10016b62c;
      FUN_1003fb48c(FUN_10016b62c,lVar2 + -0x30,0xd0000000000000a4,0x800000010088d870,
                    0xd000000000000035,0x8000000100893120,0x237,0);
      FUN_100153444();
      FUN_100170254(param_1,param_2,param_3,param_4,param_5);
      _swift_release(pcVar5);
    }
  }
  return;
}

