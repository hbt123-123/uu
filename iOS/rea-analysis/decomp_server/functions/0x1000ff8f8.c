// rea decompile_all
// name: FUN_1000ff8f8
// address: 0x1000ff8f8
// body: available
// range: 0x1000ff8f8-0x100100d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000ff8f8(code *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  byte *pbVar13;
  uint *puVar14;
  code *pcVar15;
  ID IVar16;
  undefined *puVar17;
  undefined *puVar18;
  void *pvVar19;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_390 [16];
  undefined8 auStack_380 [2];
  undefined8 auStack_370 [2];
  undefined1 auStack_360 [16];
  undefined8 auStack_350 [4];
  long alStack_330 [2];
  undefined8 auStack_320 [2];
  undefined8 auStack_310 [2];
  undefined1 auStack_300 [8];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  long local_2c8;
  long local_2c0;
  code *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  code *local_298;
  undefined *local_290;
  code *local_288;
  undefined *local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  code *local_260;
  undefined *puStack_258;
  code *local_250;
  code *local_248;
  undefined1 local_240;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
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
  
  lVar8 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar22 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  puVar24 = auStack_300 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  __s8Dispatch0A3QoSVMa();
  local_2c8 = *(long *)(lVar9 + -8);
  local_2c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_2c8 + 0x40));
  lVar23 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_10099d0a8;
  _swift_allocObject(&DAT_10099d0a8,0x20,7);
  *(code **)(puVar10 + 0x10) = param_3;
  *(code **)(puVar10 + 0x18) = param_4;
  uStack_a8 = *(undefined8 *)(param_1 + 200);
  local_b0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_88 = *(undefined8 *)(param_1 + 0xe8);
  local_90 = *(undefined8 *)(param_1 + 0xe0);
  local_80 = param_1[0xf0];
  uStack_e8 = *(undefined8 *)(param_1 + 0x88);
  local_f0 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x98);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa8);
  local_d0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 0x48);
  local_130 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x68);
  local_110 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  uStack_168 = *(undefined8 *)(param_1 + 8);
  local_170 = *(undefined8 *)param_1;
  uStack_158 = *(undefined8 *)(param_1 + 0x18);
  uStack_160 = *(undefined8 *)(param_1 + 0x10);
  uStack_148 = *(undefined8 *)(param_1 + 0x28);
  local_150 = *(undefined8 *)(param_1 + 0x20);
  uStack_138 = *(undefined8 *)(param_1 + 0x38);
  uStack_140 = *(undefined8 *)(param_1 + 0x30);
  puVar11 = &local_170;
  local_2b8 = param_3;
  local_2b0 = puVar10;
  FUN_100102590();
  lVar9 = DAT_100a73b60;
  switch((ulong)puVar11 & 0xffffffff) {
  case 0:
    pcVar6 = (code *)&local_170;
    FUN_100008290();
    puStack_258 = &DAT_1009da430;
    FUN_100102938();
    local_250 = pcVar6;
    FUN_100102978();
    puVar10 = &DAT_10099cf40;
    local_248 = pcVar6;
    _swift_allocObject(&DAT_10099cf40,0x101,7);
    uVar25 = *(undefined8 *)(param_1 + 0xc0);
    uVar27 = *(undefined8 *)(param_1 + 0xd8);
    uVar26 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(puVar10 + 0xd8) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(puVar10 + 0xd0) = uVar25;
    *(undefined8 *)(puVar10 + 0xe8) = uVar27;
    *(undefined8 *)(puVar10 + 0xe0) = uVar26;
    uVar25 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(puVar10 + 0xf8) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(puVar10 + 0xf0) = uVar25;
    puVar10[0x100] = param_1[0xf0];
    uVar25 = *(undefined8 *)(param_1 + 0x80);
    uVar27 = *(undefined8 *)(param_1 + 0x98);
    uVar26 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(puVar10 + 0x98) = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(puVar10 + 0x90) = uVar25;
    *(undefined8 *)(puVar10 + 0xa8) = uVar27;
    *(undefined8 *)(puVar10 + 0xa0) = uVar26;
    uVar25 = *(undefined8 *)(param_1 + 0xa0);
    uVar27 = *(undefined8 *)(param_1 + 0xb8);
    uVar26 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(puVar10 + 0xb8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(puVar10 + 0xb0) = uVar25;
    *(undefined8 *)(puVar10 + 200) = uVar27;
    *(undefined8 *)(puVar10 + 0xc0) = uVar26;
    uVar25 = *(undefined8 *)(param_1 + 0x40);
    uVar27 = *(undefined8 *)(param_1 + 0x58);
    uVar26 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(puVar10 + 0x58) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(puVar10 + 0x50) = uVar25;
    *(undefined8 *)(puVar10 + 0x68) = uVar27;
    *(undefined8 *)(puVar10 + 0x60) = uVar26;
    uVar25 = *(undefined8 *)(param_1 + 0x60);
    uVar27 = *(undefined8 *)(param_1 + 0x78);
    uVar26 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(puVar10 + 0x78) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(puVar10 + 0x70) = uVar25;
    *(undefined8 *)(puVar10 + 0x88) = uVar27;
    *(undefined8 *)(puVar10 + 0x80) = uVar26;
    uVar25 = *(undefined8 *)param_1;
    uVar27 = *(undefined8 *)(param_1 + 0x18);
    uVar26 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(puVar10 + 0x10) = uVar25;
    *(undefined8 *)(puVar10 + 0x28) = uVar27;
    *(undefined8 *)(puVar10 + 0x20) = uVar26;
    uVar25 = *(undefined8 *)(param_1 + 0x20);
    uVar27 = *(undefined8 *)(param_1 + 0x38);
    uVar26 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(puVar10 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(puVar10 + 0x30) = uVar25;
    *(undefined8 *)(puVar10 + 0x48) = uVar27;
    *(undefined8 *)(puVar10 + 0x40) = uVar26;
    local_240 = 1;
    local_270 = puVar10;
    goto LAB_1000fffe4;
  default:
    puStack_258 = (undefined *)0x0;
    local_260 = (code *)0x0;
    local_248 = (code *)0x0;
    local_250 = (code *)0x0;
    uStack_268 = 0;
    local_270 = (undefined *)0x0;
    local_240 = 2;
LAB_1000fffe4:
    _swift_retain_n(param_4,2);
    goto LAB_1001004e8;
  case 4:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar26 = puVar11[1];
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar23 + -0x20) = uVar25;
    *(undefined8 *)(lVar23 + -0x18) = uVar26;
    puVar10 = local_2b0;
    *(code **)(lVar23 + -0x10) = FUN_100102840;
    *(undefined **)(lVar23 + -8) = puVar10;
    _swift_retain_n(param_4,2);
    IVar16 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((IVar16 & 1) != 0) {
      _swift_retain(param_4);
      FUN_1000ff738(uVar25,uVar26,local_2b8,param_4,thunk_FUN_100102d78);
      _swift_release(puVar10);
      _swift_release_n(param_4,2);
      return;
    }
    uVar25 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar17 = &DAT_10099d378;
    _swift_allocObject(&DAT_10099d378,0x20,7);
    *(code **)(puVar17 + 0x10) = thunk_FUN_100102894;
    *(long *)(puVar17 + 0x18) = lVar23 + -0x30;
    local_250 = thunk_FUN_100102840;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    uStack_268 = 0x42000000;
    local_260 = FUN_1000fcdcc;
    puStack_258 = &DAT_10099d390;
    local_248 = (code *)puVar17;
    pvVar19 = __Block_copy(&local_270);
    pcVar6 = local_248;
    _swift_retain(puVar17);
    _swift_release(pcVar6);
    _dispatch_sync(uVar25,pvVar19);
    __Block_release(pvVar19);
    puVar18 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x94,0x40,0x4b,1);
    _swift_release(param_4);
    _swift_release(puVar10);
    _swift_release(puVar17);
    if (((ulong)puVar18 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100100d48);
    (*pcVar6)();
  case 5:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar2 = puVar11[1];
    uVar26 = puVar11[2];
    uVar3 = puVar11[3];
    uVar27 = puVar11[4];
    uVar4 = puVar11[5];
    _memmove(&local_270,puVar11 + 6,0x41);
    local_2c0 = lVar23;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_2c8 = uVar25;
    *(undefined8 *)(lVar23 + -0x50) = uVar25;
    *(undefined8 *)(lVar23 + -0x48) = uVar2;
    local_2f0 = uVar2;
    uStack_2e8 = uVar3;
    local_2e0 = uVar26;
    *(undefined8 *)(lVar23 + -0x40) = uVar26;
    *(undefined8 *)(lVar23 + -0x38) = uVar3;
    *(undefined8 **)(lVar23 + -0x30) = &local_270;
    *(undefined8 *)(lVar23 + -0x28) = uVar27;
    *(undefined8 *)(lVar23 + -0x20) = uVar4;
    *(undefined8 *)(lVar23 + -0x18) = param_2;
    puVar10 = local_2b0;
    *(code **)(lVar23 + -0x10) = FUN_100102840;
    *(undefined **)(lVar23 + -8) = puVar10;
    _swift_retain_n(param_4,2);
    IVar16 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((IVar16 & 1) != 0) {
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar20 = *(undefined8 *)(DAT_100b360a8 + 0x88);
      puVar10 = &DAT_10099cea0;
      _swift_allocObject(&DAT_10099cea0,0x18,7);
      _swift_unknownObjectWeakInit(puVar10 + 0x10,param_2);
      puVar17 = &DAT_10099d350;
      _swift_allocObject(&DAT_10099d350,0x48,7);
      lVar9 = local_2c8;
      uVar3 = local_2e0;
      uVar2 = uStack_2e8;
      uVar26 = local_2f0;
      *(long *)(puVar17 + 0x10) = local_2c8;
      *(undefined8 *)(puVar17 + 0x18) = local_2f0;
      *(undefined8 *)(puVar17 + 0x20) = uVar27;
      *(undefined8 *)(puVar17 + 0x28) = uVar4;
      *(undefined8 *)(puVar17 + 0x30) = local_2e0;
      *(undefined8 *)(puVar17 + 0x38) = uStack_2e8;
      *(undefined **)(puVar17 + 0x40) = puVar10;
      local_2f8 = uVar27;
      _swift_retain(uVar20);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(puVar10);
      *(undefined **)(lVar23 + -0x70) = puVar17;
      uVar25 = local_2f8;
      FUN_100084c9c(lVar9,uVar26,uVar3,uVar2,&local_270,local_2f8,uVar4,thunk_FUN_1001033ec);
      _swift_release(uVar20);
      _swift_release(puVar10);
      _swift_release(puVar17);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined8 *)(lVar23 + -0x80) = uVar25;
      *(undefined8 *)(lVar23 + -0x78) = uVar4;
      uVar7 = (uint)lVar9 & 1;
      *(char *)(lVar23 + -0x70) = (char)uVar7;
      FUN_1003fb48c(thunk_FUN_100102888,lVar23 + -0x90,0xd000000000000094,0x800000010088a280,
                    0xd00000000000001e,0x800000010088a320,99,0);
      local_290 = PTR___ss5Int32VN_100995c78;
      local_288 = (code *)PTR___ss5Int32VSesWP_100995c90;
      local_280 = PTR___ss5Int32VSEsWP_100995c80;
      local_2a8 = (undefined *)CONCAT44(local_2a8._4_4_,uVar7 - 1);
      local_278 = 1;
      (*local_2b8)(&local_2a8);
      FUN_100102518(&local_2a8);
      _swift_release(param_4);
      _swift_release(local_2b0);
      return;
    }
    uVar25 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar17 = &DAT_10099d300;
    _swift_allocObject(&DAT_10099d300,0x20,7);
    *(code **)(puVar17 + 0x10) = thunk_FUN_100103368;
    *(long *)(puVar17 + 0x18) = lVar23 + -0x60;
    local_288 = thunk_FUN_100102840;
    local_2a8 = PTR___NSConcreteStackBlock_100995490;
    local_2a0 = 0x42000000;
    local_298 = FUN_1000fcdcc;
    local_290 = &DAT_10099d318;
    local_280 = puVar17;
    pvVar19 = __Block_copy(&local_2a8);
    puVar18 = local_280;
    _swift_retain(puVar17);
    _swift_release(puVar18);
    _dispatch_sync(uVar25,pvVar19);
    __Block_release(pvVar19);
    puVar18 = puVar17;
    _swift_isEscapingClosureAtFileLocation(puVar17,"",0x94,0x40,0x4b,1);
    _swift_release(param_4);
    _swift_release(puVar10);
    _swift_release(puVar17);
    if (((ulong)puVar18 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100100d64);
    (*pcVar6)();
  case 0xb:
    pbVar13 = (byte *)&local_170;
    FUN_100008290();
    bVar5 = *pbVar13;
    pcVar6 = param_4;
    if ((bVar5 & 1) == 0) {
      FUN_1003a8798(0);
      _swift_retain_n(param_4,2);
      FUN_1003a793c();
    }
    else {
      FUN_1003a9990(0);
      _swift_retain_n(param_4,2);
      FUN_1003a8848();
    }
    puVar10 = local_2b0;
    pcVar12 = local_2b8;
    puStack_258 = &DAT_1009dd048;
    pcVar15 = pcVar6;
    FUN_10010273c();
    local_250 = pcVar15;
    FUN_10010277c();
    local_270 = (undefined *)
                (CONCAT62(local_270._2_6_,CONCAT11((char)pcVar6,bVar5)) & 0xffffffffffff01ff);
    local_248 = pcVar15;
    goto LAB_10010096c;
  case 0xc:
    pbVar13 = (byte *)&local_170;
    FUN_100008290();
    bVar5 = *pbVar13;
    pcVar6 = param_4;
    if ((bVar5 & 1) == 0) {
      FUN_1003a8798(0);
      _swift_retain_n(param_4,2);
      FUN_1003a85b8();
    }
    else {
      FUN_1003a9990(0);
      _swift_retain_n(param_4,2);
      FUN_1003a965c();
    }
    puVar10 = local_2b0;
    pcVar12 = local_2b8;
    puStack_258 = &DAT_1009dd048;
    FUN_10010273c();
    local_250 = pcVar6;
    FUN_10010277c();
    local_270._0_2_ = CONCAT11(1,bVar5);
    local_248 = pcVar6;
LAB_10010096c:
    local_240 = 1;
    (*pcVar12)(&local_270);
    FUN_100102518(&local_270);
    _swift_release(param_4);
    goto LAB_100100af4;
  case 0xe:
    puVar14 = (uint *)&local_170;
    FUN_100008290();
    puVar10 = local_2b0;
    uVar7 = *puVar14;
    if ((char)puVar14[4] == '\x06') {
      FUN_100401b14(0);
      _swift_retain_n(param_4,2);
      FUN_1003fb45c(FUN_1000ff2e8,0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                    0x800000010088a320,0xd4,7);
      puVar10 = local_2b0;
      pcVar6 = local_2b8;
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      lVar9 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher);
      if ((lVar9 != 0) &&
         (lVar9 = *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
         , lVar9 != 0)) {
        FUN_1000c8388(lVar9);
        lVar8 = 0;
        FUN_1001bc1d8();
        uVar25 = 0;
        FUN_100153bbc(0);
        lVar9 = lVar8;
        _swift_dynamicCastClass(lVar8,uVar25);
        if (lVar9 != 0) {
          FUN_100161224(uVar7);
        }
        _swift_unknownObjectRelease(lVar8);
      }
      puStack_258 = (undefined *)0x0;
      local_260 = (code *)0x0;
      local_248 = (code *)0x0;
      local_250 = (code *)0x0;
      uStack_268 = 0;
      local_270 = (undefined *)0x0;
      local_240 = 2;
      (*pcVar6)(&local_270);
      FUN_100102518(&local_270);
      _swift_release(param_4);
      goto LAB_100100af4;
    }
    if ((char)puVar14[4] != '\a') {
      _swift_retain(param_4);
      goto LAB_100100af4;
    }
    FUN_100401b14(0);
    _swift_retain_n(param_4,2);
    pcVar6 = FUN_1000ff314;
    FUN_1003fb45c(FUN_1000ff314,0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                  0x800000010088a320,0xda,7);
    if (DAT_100a73b60 != -1) {
      pcVar6 = (code *)&DAT_100a73b60;
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar9 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (lVar9 == 0) {
LAB_1000ffeac:
      puStack_258 = &DAT_1009dc600;
      FUN_1001025e4();
      local_250 = pcVar6;
      FUN_100102624();
      local_270 = (undefined *)((ulong)local_270 & 0xffffffffffffff00);
      local_240 = 1;
      local_248 = pcVar6;
      (*local_2b8)(&local_270);
      FUN_100102518(&local_270);
      goto LAB_100100aec;
    }
    lVar9 = *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    pcVar6 = (code *)0x0;
    if (lVar9 == 0) goto LAB_1000ffeac;
    FUN_1000c8388(lVar9);
    pcVar6 = (code *)0x0;
    FUN_1001bc1d8();
    uVar25 = 0;
    FUN_100153bbc(0);
    pcVar12 = pcVar6;
    _swift_dynamicCastClass(pcVar6,uVar25);
    if (pcVar12 == (code *)0x0) {
LAB_1000ffe9c:
      _swift_unknownObjectRelease();
      puVar10 = local_2b0;
      goto LAB_1000ffeac;
    }
    FUN_1001533d4();
    FUN_10013fcd8(uVar7,1);
    if ((uVar7 & 0xff) == 6) goto LAB_1000ffe9c;
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(char *)(lVar23 + -0x10) = (char)uVar7;
    pcVar12 = thunk_FUN_100102664;
    FUN_1003fb45c(thunk_FUN_100102664,lVar23 + -0x20,0xd000000000000094,0x800000010088a280,
                  0xd00000000000001e,0x800000010088a320,0xdd,7);
    puStack_258 = &DAT_1009dc600;
    FUN_1001025e4();
    local_250 = pcVar12;
    FUN_100102624();
    local_270 = (undefined *)CONCAT71(local_270._1_7_,(char)uVar7);
    local_240 = 1;
    local_248 = pcVar12;
    (*local_2b8)(&local_270);
    _swift_unknownObjectRelease(pcVar6);
    goto LAB_1001004f8;
  case 0xf:
    puVar11 = &local_170;
    FUN_100008290();
    uStack_2d8 = puVar11[1];
    local_2e0 = *puVar11;
    uVar25 = puVar11[2];
    FUN_100004b70(0);
    _swift_retain_n(param_4,2);
    FUN_10010266c(param_1,&local_270);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d0d0;
    local_2b8 = param_1;
    _swift_allocObject(&DAT_10099d0d0,0x38,7);
    *(undefined8 *)(pcVar6 + 0x18) = uStack_2d8;
    *(undefined8 *)(pcVar6 + 0x10) = local_2e0;
    *(undefined8 *)(pcVar6 + 0x20) = uVar25;
    *(code **)(pcVar6 + 0x28) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x30) = local_2b0;
    local_250 = thunk_FUN_1001032e0;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    puStack_258 = &DAT_10099d0e8;
    local_248 = pcVar6;
    break;
  case 0x14:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    pcVar12 = (code *)puVar11[1];
    local_2e0 = puVar11[2];
    uVar26 = puVar11[3];
    FUN_100004b70(0);
    _swift_bridgeObjectRetain(uVar26);
    _swift_retain_n(param_4,2);
    pcVar15 = pcVar12;
    _swift_bridgeObjectRetain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d2b0;
    local_2b8 = pcVar15;
    _swift_allocObject(&DAT_10099d2b0,0x40,7);
    *(undefined8 *)(pcVar6 + 0x10) = uVar25;
    *(code **)(pcVar6 + 0x18) = pcVar12;
    *(undefined8 *)(pcVar6 + 0x20) = local_2e0;
    *(undefined8 *)(pcVar6 + 0x28) = uVar26;
    *(code **)(pcVar6 + 0x30) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x38) = local_2b0;
    local_250 = thunk_FUN_100102730;
    puStack_258 = &DAT_10099d2c8;
    local_248 = pcVar6;
    goto LAB_1001003d4;
  case 0x15:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar26 = puVar11[1];
    FUN_100004b70(0);
    _swift_retain_n(param_4,2);
    FUN_10010266c(param_1,&local_270);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d260;
    local_2b8 = param_1;
    _swift_allocObject(&DAT_10099d260,0x30,7);
    *(undefined8 *)(pcVar6 + 0x10) = uVar25;
    *(undefined8 *)(pcVar6 + 0x18) = uVar26;
    *(code **)(pcVar6 + 0x20) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x28) = local_2b0;
    local_250 = thunk_FUN_10010270c;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    puStack_258 = &DAT_10099d278;
    local_248 = pcVar6;
    break;
  case 0x16:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar26 = puVar11[1];
    FUN_100004b70(0);
    _swift_retain_n(param_4,2);
    FUN_10010266c(param_1,&local_270);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d210;
    local_2b8 = param_1;
    _swift_allocObject(&DAT_10099d210,0x30,7);
    *(undefined8 *)(pcVar6 + 0x10) = uVar25;
    *(undefined8 *)(pcVar6 + 0x18) = uVar26;
    *(code **)(pcVar6 + 0x20) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x28) = local_2b0;
    local_250 = thunk_FUN_100102700;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    puStack_258 = &DAT_10099d228;
    local_248 = pcVar6;
    break;
  case 0x17:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar26 = puVar11[1];
    FUN_100004b70(0);
    _swift_retain_n(param_4,2);
    FUN_10010266c(param_1,&local_270);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d1c0;
    local_2b8 = param_1;
    _swift_allocObject(&DAT_10099d1c0,0x30,7);
    *(undefined8 *)(pcVar6 + 0x10) = uVar25;
    *(undefined8 *)(pcVar6 + 0x18) = uVar26;
    *(code **)(pcVar6 + 0x20) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x28) = local_2b0;
    local_250 = thunk_FUN_1001026dc;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    puStack_258 = &DAT_10099d1d8;
    local_248 = pcVar6;
    break;
  case 0x18:
    puVar11 = &local_170;
    FUN_100008290();
    uVar25 = *puVar11;
    uVar26 = puVar11[1];
    local_2e0 = puVar11[2];
    pcVar12 = (code *)puVar11[3];
    FUN_100004b70(0);
    _swift_retain_n(param_4,2);
    _swift_bridgeObjectRetain(uVar26);
    pcVar15 = pcVar12;
    _swift_bridgeObjectRetain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d170;
    local_2b8 = pcVar15;
    _swift_allocObject(&DAT_10099d170,0x40,7);
    *(undefined8 *)(pcVar6 + 0x10) = uVar25;
    *(undefined8 *)(pcVar6 + 0x18) = uVar26;
    *(undefined8 *)(pcVar6 + 0x20) = local_2e0;
    *(code **)(pcVar6 + 0x28) = pcVar12;
    *(code **)(pcVar6 + 0x30) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x38) = local_2b0;
    local_250 = thunk_FUN_1001026d0;
    puStack_258 = &DAT_10099d188;
    local_248 = pcVar6;
LAB_1001003d4:
    puVar10 = local_2b0;
    uStack_268 = 0x42000000;
    local_260 = FUN_1000acdb4;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    pvVar19 = __Block_copy(&local_270);
    pcVar6 = local_248;
    _swift_retain(puVar10);
    _swift_release(pcVar6);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
    local_270 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar17 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar18 = puVar17;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar24,&local_270,puVar17,puVar18,lVar8,pcVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar23,puVar24,pvVar19);
    goto LAB_100100758;
  case 0x1a:
    _swift_retain_n(param_4,2);
    if (lVar9 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    puVar10 = local_2b0;
    pcVar6 = local_2b8;
    lVar9 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (lVar9 == 0) {
      uVar21 = 0;
      pcVar12 = (code *)0x4;
    }
    else {
      lVar9 = *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::room);
      uVar21 = *(undefined4 *)(lVar9 + 0x10);
      _swift_beginAccess(lVar9 + 0x18,&local_2a8,0,0);
      pcVar12 = *(code **)(lVar9 + 0x20);
    }
    FUN_100125fe0();
    uVar1 = 4;
    if (((uint)pcVar12 & 0xff) != 5) {
      uVar1 = (char)pcVar12;
    }
    puStack_258 = &DAT_1009dc0f8;
    FUN_1001028b8();
    local_250 = pcVar12;
    FUN_1001028f8();
    local_270._0_5_ = CONCAT14(uVar1,uVar21);
    uStack_268 = 0;
    local_248 = pcVar12;
    goto LAB_100100acc;
  case 0x1b:
    _swift_retain_n(param_4,2);
    if (lVar9 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    puVar10 = local_2b0;
    pcVar6 = local_2b8;
    lVar9 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar9 == 0) ||
       (lVar9 = *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
       lVar9 == 0)) {
      uVar21 = 0;
      pcVar12 = (code *)0x7;
    }
    else {
      uVar21 = *(undefined4 *)(lVar9 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      lVar9 = lVar9 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
      _swift_beginAccess(lVar9,&local_2a8,0,0);
      pcVar12 = *(code **)(lVar9 + 8);
    }
    FUN_1000cdc20();
    uVar1 = 7;
    if (((uint)pcVar12 & 0xff) != 8) {
      uVar1 = (char)pcVar12;
    }
    puStack_258 = &DAT_1009dc210;
    FUN_1001027bc();
    local_250 = pcVar12;
    FUN_1001027fc();
    local_270._0_5_ = CONCAT14(uVar1,uVar21);
    local_248 = pcVar12;
LAB_100100acc:
    local_240 = 1;
    (*pcVar6)(&local_270);
    FUN_100102518(&local_270);
LAB_100100aec:
    _swift_release(param_4);
    goto LAB_100100af4;
  case 0x1d:
    _swift_retain_n(param_4,2);
    FUN_1000ff590();
    puStack_258 = (undefined *)0x0;
    local_260 = (code *)0x0;
    local_248 = (code *)0x0;
    local_250 = (code *)0x0;
    uStack_268 = 0;
    local_270 = (undefined *)0x0;
    local_240 = 2;
    goto LAB_1001004e8;
  case 0x20:
    _swift_retain_n(param_4,2);
    if (lVar9 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1001ae184(*(undefined8 *)(DAT_100b360a8 + 0x28));
    puStack_258 = (undefined *)0x0;
    local_260 = (code *)0x0;
    local_248 = (code *)0x0;
    local_250 = (code *)0x0;
    uStack_268 = 0;
    local_270 = (undefined *)0x0;
    local_240 = 2;
LAB_1001004e8:
    (*local_2b8)(&local_270);
LAB_1001004f8:
    FUN_100102518(&local_270);
    _swift_release(param_4);
    puVar10 = local_2b0;
    goto LAB_100100af4;
  case 0x22:
    FUN_100004b70(0);
    pcVar12 = param_4;
    _swift_retain_n(param_4,2);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar6 = (code *)&DAT_10099d120;
    local_2b8 = pcVar12;
    _swift_allocObject(&DAT_10099d120,0x20,7);
    *(code **)(pcVar6 + 0x10) = FUN_100102840;
    *(undefined **)(pcVar6 + 0x18) = local_2b0;
    local_250 = thunk_FUN_1001026c4;
    local_270 = PTR___NSConcreteStackBlock_100995490;
    puStack_258 = &DAT_10099d138;
    local_248 = pcVar6;
  }
  puVar10 = local_2b0;
  uStack_268 = 0x42000000;
  local_260 = FUN_1000acdb4;
  PTR___NSConcreteStackBlock_100995490 = local_270;
  pvVar19 = __Block_copy(&local_270);
  pcVar6 = local_248;
  _swift_retain(puVar10);
  _swift_release(pcVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
  local_270 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10003f7fc();
  puVar17 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar18 = puVar17;
  FUN_10004eec4();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar24,&local_270,puVar17,puVar18,lVar8,pcVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar23,puVar24,pvVar19);
LAB_100100758:
  __Block_release(pvVar19);
  (**(code **)(lVar22 + 8))(puVar24,lVar8);
  (**(code **)(local_2c8 + 8))(lVar23,local_2c0);
  _swift_release(param_4);
LAB_100100af4:
  _swift_release(puVar10);
  return;
}

