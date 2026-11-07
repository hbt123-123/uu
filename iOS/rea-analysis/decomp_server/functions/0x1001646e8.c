// rea decompile_all
// name: FUN_1001646e8
// address: 0x1001646e8
// body: available
// range: 0x1001646e8-0x100164f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001646e8(uint param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  long extraout_x8_02;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_300 [16];
  uint auStack_2f0 [4];
  undefined8 *local_2e0;
  long local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  uint local_29c;
  undefined2 local_288;
  undefined6 uStack_286;
  undefined8 uStack_280;
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
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198;
  undefined1 auStack_188 [24];
  undefined *local_170;
  undefined8 uStack_168;
  code *local_160;
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
  
  lVar2 = 0;
  local_2a8 = param_2;
  local_29c = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_2b8 = *(long *)(lVar2 + -8);
  local_2b0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2b8 + 0x40));
  lVar15 = (long)&local_2e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_2c0 = lVar15;
  __s8Dispatch0A3QoSVMa();
  local_2d0 = *(long *)(lVar2 + -8);
  local_2c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2d0 + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  local_2d8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2d8 + 0x40));
  puVar13 = (undefined8 *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  local_2e0 = puVar13;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar19 = (long)puVar13 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar20 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  IVar5 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  uVar12 = local_2a8;
  if ((int)IVar5 == 0) {
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar7 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,unaff_x20);
    (**(code **)(lVar17 + 0x10))(lVar19,local_2a8,lVar3);
    uVar14 = (ulong)*(byte *)(lVar17 + 0x50);
    uVar16 = uVar14 + 0x1c & (uVar14 ^ 0xffffffffffffffff);
    puVar8 = &DAT_10099f700;
    _swift_allocObject(&DAT_10099f700,uVar16 + lVar18,uVar14 | 7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(uint *)(puVar8 + 0x18) = local_29c;
    (**(code **)(lVar17 + 0x20))(puVar8 + uVar16,lVar19,lVar3);
    local_150 = FUN_10016b98c;
    local_170 = PTR___NSConcreteStackBlock_100995490;
    uStack_168 = 0x42000000;
    local_160 = FUN_1000acdb4;
    puStack_158 = &DAT_10099f718;
    puStack_148 = puVar8;
    aBlock = __Block_copy(&local_170);
    _swift_release(puStack_148);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
    local_170 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar13 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar3 = local_2b0;
    lVar2 = local_2c0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_2c0,&local_170,puVar7,puVar9,local_2b0,puVar13);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar15,lVar2,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_2b8 + 8))(lVar2,lVar3);
    (**(code **)(local_2d0 + 8))(lVar15,local_2c8);
    return;
  }
  puVar13 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks);
  local_2c8 = lVar18;
  local_2c0 = lVar17;
  local_2b8 = lVar3;
  local_2b0 = lVar2;
  _swift_beginAccess(puVar13,auStack_188,0,0);
  uVar1 = local_29c;
  uVar16 = (ulong)local_29c;
  uVar14 = uVar16;
  FUN_100152fd0(uVar16,puVar13[1]);
  if ((uVar14 & 1) == 0) {
    uVar14 = uVar16;
    FUN_100152fd0(uVar16,*puVar13);
    if ((uVar14 & 1) != 0) {
      _swift_beginAccess(puVar13,&local_170,0x21,0);
      __s10Foundation4DateVACycfC(lVar20);
      FUN_1001295ac(uVar16,lVar20);
      (**(code **)(lVar21 + 8))(lVar20,lVar4);
      _swift_endAccess(&local_170);
      if ((uVar16 & 1) == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(lVar20 + -0x10) = uVar1;
        pcVar6 = FUN_10016bac0;
        uVar12 = 0x377;
        goto LAB_10016490c;
      }
    }
    lVar2 = _TtC14UURemoteServer18ClipboardPCManager::incomingDrop;
    lVar3 = *(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop);
    if (lVar3 != 0) {
      _swift_retain(lVar3);
      puVar7 = &DAT_100a75aa8;
      FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
      FUN_100407cdc(&local_170,FUN_10016b9c0,lVar3,puVar7);
      _swift_release(lVar3);
      if ((((ulong)local_170 & 0x100000000) == 0) && ((uint)local_170 == uVar1)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(lVar20 + -0x10) = uVar1;
        FUN_1003fb48c(FUN_10016baa0,lVar20 + -0x20,0xd0000000000000a4,0x800000010088d870,
                      &DAT_d000000000000028,0x80000001008938b0,0x37c,0);
        lVar3 = *(long *)(unaff_x20 + lVar2);
        if (lVar3 == 0) {
          uVar10 = 0;
        }
        else {
          _swift_retain(lVar3);
          FUN_100407cdc(FUN_10016baa8,lVar3,PTR___sytN_100995e90 + 8);
          _swift_release(lVar3);
          uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
        }
        *(undefined8 *)(unaff_x20 + lVar2) = 0;
        _swift_release(uVar10);
      }
    }
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    local_288 = 0x404;
    FUN_100103418(&local_288);
    uStack_a8 = uStack_1c0;
    local_b0 = local_1c8;
    uStack_98 = uStack_1b0;
    uStack_a0 = uStack_1b8;
    uStack_88 = uStack_1a0;
    local_90 = local_1a8;
    local_80 = local_198;
    uStack_e8 = uStack_200;
    local_f0 = local_208;
    uStack_d8 = uStack_1f0;
    uStack_e0 = uStack_1f8;
    uStack_c8 = uStack_1e0;
    local_d0 = local_1e8;
    uStack_b8 = uStack_1d0;
    uStack_c0 = uStack_1d8;
    uStack_128 = uStack_240;
    local_130 = local_248;
    uStack_118 = uStack_230;
    uStack_120 = local_238;
    uStack_108 = uStack_220;
    local_110 = local_228;
    uStack_f8 = uStack_210;
    uStack_100 = local_218;
    local_170 = (undefined *)CONCAT62(uStack_286,local_288);
    uStack_168 = uStack_280;
    puStack_158 = (undefined *)uStack_270;
    local_160 = (code *)local_278;
    puStack_148 = (undefined *)uStack_260;
    local_150 = (code *)local_268;
    uStack_138 = uStack_250;
    uStack_140 = local_258;
    puVar7 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10,unaff_x20);
    lVar3 = local_2b8;
    lVar2 = local_2c0;
    (**(code **)(local_2c0 + 0x10))(lVar19,uVar12,local_2b8);
    uVar14 = (ulong)*(byte *)(lVar2 + 0x50);
    uVar16 = uVar14 + 0x1c & (uVar14 ^ 0xffffffffffffffff);
    puVar8 = &DAT_10099f750;
    _swift_allocObject(&DAT_10099f750,uVar16 + local_2c8,uVar14 | 7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(uint *)(puVar8 + 0x18) = uVar1;
    (**(code **)(lVar2 + 0x20))(puVar8 + uVar16,lVar19,lVar3);
    lVar2 = local_2d8;
    puVar13 = local_2e0;
    *local_2e0 = 1;
    lVar3 = local_2b0;
    (**(code **)(lVar2 + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_100995f20,local_2b0);
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    puVar11 = puVar7;
    _swift_retain(puVar7);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    uVar12 = 0;
    FUN_1000fd494(0);
    FUN_1005d68b4(&local_170,puVar13,puVar11,FUN_10016ba44,puVar8,uVar12,&PTR_PTR_10099cbd8);
    _swift_release(puVar8);
    (**(code **)(lVar2 + 8))(puVar13,lVar3);
    _swift_release(puVar7);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(lVar20 + -0x10) = uVar1;
    pcVar6 = FUN_10016bac8;
    uVar12 = 0x372;
LAB_10016490c:
    FUN_1003fb48c(pcVar6,lVar20 + -0x20,0xd0000000000000a4,0x800000010088d870,&DAT_d000000000000028,
                  0x80000001008938b0,uVar12,0);
  }
  return;
}

