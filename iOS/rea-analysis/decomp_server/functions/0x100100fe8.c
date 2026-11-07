// rea decompile_all
// name: FUN_100100fe8
// address: 0x100100fe8
// body: available
// range: 0x100100fe8-0x10010244f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100100fe8(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  code *pcVar13;
  ID IVar14;
  undefined *puVar15;
  undefined *puVar16;
  void *pvVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined1 auStack_380 [16];
  undefined8 auStack_370 [2];
  undefined8 auStack_360 [2];
  undefined1 auStack_350 [16];
  undefined8 auStack_340 [4];
  long alStack_320 [2];
  undefined8 auStack_310 [2];
  undefined8 auStack_300 [2];
  undefined1 auStack_2f0 [8];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  code *local_2c0;
  long local_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  code *local_2a0;
  undefined *local_298;
  code *local_290;
  undefined *local_288;
  undefined1 local_280;
  undefined1 auStack_278 [24];
  undefined8 local_260;
  undefined8 uStack_258;
  code *local_250;
  undefined *puStack_248;
  code *local_240;
  code *local_238;
  undefined1 local_230;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar22 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar22 + 0x40));
  puVar24 = auStack_2f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar19 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  lVar23 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = param_1[0x19];
  local_a0 = param_1[0x18];
  uStack_88 = param_1[0x1b];
  uStack_90 = param_1[0x1a];
  uStack_78 = param_1[0x1d];
  local_80 = param_1[0x1c];
  local_70 = *(undefined1 *)(param_1 + 0x1e);
  uStack_d8 = param_1[0x11];
  local_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_b8 = param_1[0x15];
  local_c0 = param_1[0x14];
  uStack_a8 = param_1[0x17];
  uStack_b0 = param_1[0x16];
  uStack_118 = param_1[9];
  local_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_f8 = param_1[0xd];
  local_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_158 = param_1[1];
  local_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_138 = param_1[5];
  local_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  puVar9 = &local_160;
  FUN_100102590();
  lVar18 = DAT_100a73b60;
  switch((ulong)puVar9 & 0xffffffff) {
  case 0:
    pcVar10 = (code *)&local_160;
    FUN_100008290();
    puStack_248 = &DAT_1009da430;
    FUN_100102938();
    local_240 = pcVar10;
    FUN_100102978();
    puVar15 = &DAT_10099cf40;
    local_238 = pcVar10;
    _swift_allocObject(&DAT_10099cf40,0x101,7);
    uVar25 = param_1[0x18];
    uVar26 = param_1[0x1b];
    uVar27 = param_1[0x1a];
    *(undefined8 *)(puVar15 + 0xd8) = param_1[0x19];
    *(undefined8 *)(puVar15 + 0xd0) = uVar25;
    *(undefined8 *)(puVar15 + 0xe8) = uVar26;
    *(undefined8 *)(puVar15 + 0xe0) = uVar27;
    uVar25 = param_1[0x1c];
    *(undefined8 *)(puVar15 + 0xf8) = param_1[0x1d];
    *(undefined8 *)(puVar15 + 0xf0) = uVar25;
    puVar15[0x100] = *(undefined1 *)(param_1 + 0x1e);
    uVar25 = param_1[0x10];
    uVar26 = param_1[0x13];
    uVar27 = param_1[0x12];
    *(undefined8 *)(puVar15 + 0x98) = param_1[0x11];
    *(undefined8 *)(puVar15 + 0x90) = uVar25;
    *(undefined8 *)(puVar15 + 0xa8) = uVar26;
    *(undefined8 *)(puVar15 + 0xa0) = uVar27;
    uVar25 = param_1[0x14];
    uVar26 = param_1[0x17];
    uVar27 = param_1[0x16];
    *(undefined8 *)(puVar15 + 0xb8) = param_1[0x15];
    *(undefined8 *)(puVar15 + 0xb0) = uVar25;
    *(undefined8 *)(puVar15 + 200) = uVar26;
    *(undefined8 *)(puVar15 + 0xc0) = uVar27;
    uVar25 = param_1[8];
    uVar26 = param_1[0xb];
    uVar27 = param_1[10];
    *(undefined8 *)(puVar15 + 0x58) = param_1[9];
    *(undefined8 *)(puVar15 + 0x50) = uVar25;
    *(undefined8 *)(puVar15 + 0x68) = uVar26;
    *(undefined8 *)(puVar15 + 0x60) = uVar27;
    uVar25 = param_1[0xc];
    uVar26 = param_1[0xf];
    uVar27 = param_1[0xe];
    *(undefined8 *)(puVar15 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar15 + 0x70) = uVar25;
    *(undefined8 *)(puVar15 + 0x88) = uVar26;
    *(undefined8 *)(puVar15 + 0x80) = uVar27;
    uVar25 = *param_1;
    uVar26 = param_1[3];
    uVar27 = param_1[2];
    *(undefined8 *)(puVar15 + 0x18) = param_1[1];
    *(undefined8 *)(puVar15 + 0x10) = uVar25;
    *(undefined8 *)(puVar15 + 0x28) = uVar26;
    *(undefined8 *)(puVar15 + 0x20) = uVar27;
    uVar25 = param_1[4];
    uVar26 = param_1[7];
    uVar27 = param_1[6];
    *(undefined8 *)(puVar15 + 0x38) = param_1[5];
    *(undefined8 *)(puVar15 + 0x30) = uVar25;
    *(undefined8 *)(puVar15 + 0x48) = uVar26;
    *(undefined8 *)(puVar15 + 0x40) = uVar27;
    local_230 = 1;
    local_260 = puVar15;
    goto LAB_100101664;
  default:
    puStack_248 = (undefined *)0x0;
    local_250 = (code *)0x0;
    local_238 = (code *)0x0;
    local_240 = (code *)0x0;
    uStack_258 = 0;
    local_260 = (undefined *)0x0;
    local_230 = 2;
LAB_100101664:
    _swift_beginAccess(param_3 + 0x10,&local_2b0,1,0);
    _swift_retain_n(param_3,2);
    goto LAB_1001021b8;
  case 4:
    puVar9 = &local_160;
    FUN_100008290();
    uVar25 = *puVar9;
    uVar27 = puVar9[1];
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar23 + -0x20) = uVar25;
    *(undefined8 *)(lVar23 + -0x18) = uVar27;
    *(code **)(lVar23 + -0x10) = FUN_10010254c;
    *(code **)(lVar23 + -8) = param_3;
    _swift_retain_n(param_3,2);
    IVar14 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((IVar14 & 1) != 0) {
      _swift_retain(param_3);
      FUN_100100e20(uVar25,uVar27,param_3);
      _swift_release_n(param_3,3);
      return;
    }
    uVar25 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar15 = &DAT_10099cef0;
    _swift_allocObject(&DAT_10099cef0,0x20,7);
    *(code **)(puVar15 + 0x10) = FUN_100102894;
    *(long *)(puVar15 + 0x18) = lVar23 + -0x30;
    local_240 = thunk_FUN_100102840;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    uStack_258 = 0x42000000;
    local_250 = FUN_1000fcdcc;
    puStack_248 = &DAT_10099cf08;
    local_238 = (code *)puVar15;
    pvVar17 = __Block_copy(&local_260);
    pcVar10 = local_238;
    _swift_retain(puVar15);
    _swift_release(pcVar10);
    _dispatch_sync(uVar25,pvVar17);
    __Block_release(pvVar17);
    puVar16 = puVar15;
    _swift_isEscapingClosureAtFileLocation(puVar15,"",0x94,0x40,0x4b,1);
    _swift_release_n(param_3,2);
    _swift_release(puVar15);
    if (((ulong)puVar16 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100102404);
    (*pcVar10)();
  case 5:
    puVar9 = &local_160;
    FUN_100008290();
    uVar25 = *puVar9;
    uVar2 = puVar9[1];
    uVar27 = puVar9[2];
    uVar3 = puVar9[3];
    uVar26 = puVar9[4];
    uVar4 = puVar9[5];
    _memmove(&local_260,puVar9 + 6,0x41);
    local_2b8 = lVar23;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_2e8 = uVar2;
    local_2e0 = uVar25;
    *(undefined8 *)(lVar23 + -0x50) = uVar25;
    *(undefined8 *)(lVar23 + -0x48) = uVar2;
    local_2d8 = uVar27;
    local_2d0 = uVar26;
    *(undefined8 *)(lVar23 + -0x40) = uVar27;
    *(undefined8 *)(lVar23 + -0x38) = uVar3;
    *(undefined8 **)(lVar23 + -0x30) = &local_260;
    *(undefined8 *)(lVar23 + -0x28) = uVar26;
    *(undefined8 *)(lVar23 + -0x20) = uVar4;
    *(undefined8 *)(lVar23 + -0x18) = param_2;
    *(code **)(lVar23 + -0x10) = FUN_10010254c;
    *(code **)(lVar23 + -8) = param_3;
    _swift_retain_n(param_3,2);
    IVar14 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((IVar14 & 1) != 0) {
      local_2c0 = param_3;
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar20 = *(undefined8 *)(DAT_100b360a8 + 0x88);
      puVar15 = &DAT_10099cea0;
      _swift_allocObject(&DAT_10099cea0,0x18,7);
      _swift_unknownObjectWeakInit(puVar15 + 0x10,param_2);
      puVar16 = &DAT_10099cec8;
      _swift_allocObject(&DAT_10099cec8,0x48,7);
      uVar2 = local_2d0;
      uVar26 = local_2d8;
      uVar27 = local_2e0;
      uVar25 = local_2e8;
      *(undefined8 *)(puVar16 + 0x10) = local_2e0;
      *(undefined8 *)(puVar16 + 0x18) = local_2e8;
      *(undefined8 *)(puVar16 + 0x20) = local_2d0;
      *(undefined8 *)(puVar16 + 0x28) = uVar4;
      *(undefined8 *)(puVar16 + 0x30) = local_2d8;
      *(undefined8 *)(puVar16 + 0x38) = uVar3;
      *(undefined **)(puVar16 + 0x40) = puVar15;
      _swift_retain(uVar20);
      _swift_bridgeObjectRetain(uVar25);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar3);
      _swift_retain(puVar15);
      *(undefined **)(lVar23 + -0x70) = puVar16;
      FUN_100084c9c(uVar27,uVar25,uVar26,uVar3,&local_260,uVar2,uVar4,thunk_FUN_1001033ec);
      _swift_release(uVar20);
      _swift_release(puVar15);
      _swift_release(puVar16);
      uVar25 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar25);
      *(undefined8 *)(lVar23 + -0x80) = uVar2;
      *(undefined8 *)(lVar23 + -0x78) = uVar4;
      uVar6 = (uint)uVar27 & 1;
      *(char *)(lVar23 + -0x70) = (char)uVar6;
      FUN_1003fb48c(FUN_100102888,lVar23 + -0x90,0xd000000000000094,0x800000010088a280,
                    0xd00000000000001e,0x800000010088a320,99,0);
      pcVar10 = local_2c0;
      local_298 = PTR___ss5Int32VN_100995c78;
      local_290 = (code *)PTR___ss5Int32VSesWP_100995c90;
      local_288 = PTR___ss5Int32VSEsWP_100995c80;
      local_2b0 = (undefined *)CONCAT44(local_2b0._4_4_,uVar6 - 1);
      local_280 = 1;
      _swift_beginAccess(local_2c0 + 0x10,auStack_278,1,0);
      FUN_1001025a8(&local_2b0,pcVar10 + 0x10);
      FUN_100102518(&local_2b0);
      _swift_release_n(pcVar10,2);
      return;
    }
    uVar25 = 0;
    FUN_100004b70(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar15 = &DAT_10099ce50;
    _swift_allocObject(&DAT_10099ce50,0x20,7);
    *(code **)(puVar15 + 0x10) = thunk_FUN_100103368;
    *(long *)(puVar15 + 0x18) = lVar23 + -0x60;
    local_290 = FUN_100102840;
    local_2b0 = PTR___NSConcreteStackBlock_100995490;
    local_2a8 = 0x42000000;
    local_2a0 = FUN_1000fcdcc;
    local_298 = &DAT_10099ce68;
    local_288 = puVar15;
    pvVar17 = __Block_copy(&local_2b0);
    puVar16 = local_288;
    _swift_retain(puVar15);
    _swift_release(puVar16);
    _dispatch_sync(uVar25,pvVar17);
    __Block_release(pvVar17);
    puVar16 = puVar15;
    _swift_isEscapingClosureAtFileLocation(puVar15,"",0x94,0x40,0x4b,1);
    _swift_release_n(param_3,2);
    _swift_release(puVar15);
    if (((ulong)puVar16 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100102420);
    (*pcVar10)();
  case 0xb:
    pbVar11 = (byte *)&local_160;
    FUN_100008290();
    bVar5 = *pbVar11;
    pcVar10 = param_3;
    if ((bVar5 & 1) == 0) {
      FUN_1003a8798(0);
      _swift_retain_n(param_3,2);
      FUN_1003a793c();
    }
    else {
      FUN_1003a9990(0);
      _swift_retain_n(param_3,2);
      FUN_1003a8848();
    }
    puStack_248 = &DAT_1009dd048;
    pcVar13 = pcVar10;
    FUN_10010273c();
    local_240 = pcVar13;
    FUN_10010277c();
    local_260 = (undefined *)
                (CONCAT62(local_260._2_6_,CONCAT11((char)pcVar10,bVar5)) & 0xffffffffffff01ff);
    local_238 = pcVar13;
    break;
  case 0xc:
    pbVar11 = (byte *)&local_160;
    FUN_100008290();
    bVar5 = *pbVar11;
    pcVar10 = param_3;
    if ((bVar5 & 1) == 0) {
      FUN_1003a8798(0);
      _swift_retain_n(param_3,2);
      FUN_1003a85b8();
    }
    else {
      FUN_1003a9990(0);
      _swift_retain_n(param_3,2);
      FUN_1003a965c();
    }
    puStack_248 = &DAT_1009dd048;
    FUN_10010273c();
    local_240 = pcVar10;
    FUN_10010277c();
    local_260._0_2_ = CONCAT11(1,bVar5);
    local_238 = pcVar10;
    break;
  case 0xe:
    puVar12 = (uint *)&local_160;
    FUN_100008290();
    uVar6 = *puVar12;
    if ((char)puVar12[4] == '\x06') {
      FUN_100401b14(0);
      _swift_retain_n(param_3,2);
      FUN_1003fb45c(FUN_1000ff2e8,0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                    0x800000010088a320,0xd4,7);
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      lVar18 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                        _TtC14UURemoteServer15StreamerManager::dispatcher);
      if ((lVar18 != 0) &&
         (lVar18 = *(long *)(lVar18 + _TtC14UURemoteServer18StreamerDispatcher::
                                      currentConnectSession), lVar18 != 0)) {
        FUN_1000c8388(lVar18);
        lVar7 = 0;
        FUN_1001bc1d8();
        uVar25 = 0;
        FUN_100153bbc(0);
        lVar18 = lVar7;
        _swift_dynamicCastClass(lVar7,uVar25);
        if (lVar18 != 0) {
          FUN_100161224(uVar6);
        }
        _swift_unknownObjectRelease(lVar7);
      }
      puStack_248 = (undefined *)0x0;
      local_250 = (code *)0x0;
      local_238 = (code *)0x0;
      local_240 = (code *)0x0;
      uStack_258 = 0;
      local_260 = (undefined *)0x0;
      local_230 = 2;
      goto LAB_1001021a4;
    }
    if ((char)puVar12[4] != '\a') {
      return;
    }
    FUN_100401b14(0);
    _swift_retain_n(param_3,2);
    pcVar10 = FUN_1000ff314;
    FUN_1003fb45c(FUN_1000ff314,0,0xd000000000000094,0x800000010088a280,0xd00000000000001e,
                  0x800000010088a320,0xda,7);
    if (DAT_100a73b60 != -1) {
      pcVar10 = (code *)&DAT_100a73b60;
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar18 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (lVar18 == 0) {
LAB_100101548:
      puStack_248 = &DAT_1009dc600;
      FUN_1001025e4();
      local_240 = pcVar10;
      FUN_100102624();
      local_260 = (undefined *)((ulong)local_260 & 0xffffffffffffff00);
      local_238 = pcVar10;
      break;
    }
    lVar18 = *(long *)(lVar18 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
    pcVar10 = (code *)0x0;
    if (lVar18 == 0) goto LAB_100101548;
    FUN_1000c8388(lVar18);
    pcVar10 = (code *)0x0;
    FUN_1001bc1d8();
    uVar25 = 0;
    FUN_100153bbc(0);
    pcVar13 = pcVar10;
    _swift_dynamicCastClass(pcVar10,uVar25);
    if (pcVar13 == (code *)0x0) {
LAB_100101540:
      _swift_unknownObjectRelease();
      goto LAB_100101548;
    }
    FUN_1001533d4();
    FUN_10013fcd8(uVar6,1);
    if ((uVar6 & 0xff) == 6) goto LAB_100101540;
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(char *)(lVar23 + -0x10) = (char)uVar6;
    pcVar13 = FUN_100102664;
    FUN_1003fb45c(FUN_100102664,lVar23 + -0x20,0xd000000000000094,0x800000010088a280,
                  0xd00000000000001e,0x800000010088a320,0xdd,7);
    puStack_248 = &DAT_1009dc600;
    FUN_1001025e4();
    local_240 = pcVar13;
    FUN_100102624();
    local_260 = (undefined *)CONCAT71(local_260._1_7_,(char)uVar6);
    local_230 = 1;
    local_238 = pcVar13;
    _swift_beginAccess(param_3 + 0x10,&local_2b0,1,0);
    FUN_1001025a8(&local_260,param_3 + 0x10);
    _swift_unknownObjectRelease(pcVar10);
    goto LAB_1001021c4;
  case 0xf:
    puVar9 = &local_160;
    FUN_100008290();
    uStack_2c8 = puVar9[1];
    local_2d0 = *puVar9;
    uVar25 = puVar9[2];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    FUN_10010266c(param_1,&local_260);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099cc20;
    _swift_allocObject(&DAT_10099cc20,0x38,7);
    *(undefined8 *)(pcVar10 + 0x18) = uStack_2c8;
    *(undefined8 *)(pcVar10 + 0x10) = local_2d0;
    *(undefined8 *)(pcVar10 + 0x20) = uVar25;
    *(code **)(pcVar10 + 0x28) = FUN_10010254c;
    *(code **)(pcVar10 + 0x30) = param_3;
    local_240 = thunk_FUN_1001032e0;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    uStack_258 = 0x42000000;
    local_250 = FUN_1000acdb4;
    puStack_248 = &DAT_10099cc38;
    local_238 = pcVar10;
    pvVar17 = __Block_copy(&local_260);
    goto LAB_100101de0;
  case 0x14:
    puVar9 = &local_160;
    FUN_100008290();
    local_2d8 = *puVar9;
    uVar25 = puVar9[1];
    local_2e0 = puVar9[2];
    uVar26 = puVar9[3];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_bridgeObjectRetain(uVar26);
    _swift_retain_n(param_3,2);
    uVar27 = uVar25;
    _swift_bridgeObjectRetain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099ce00;
    local_2d0 = uVar27;
    _swift_allocObject(&DAT_10099ce00,0x40,7);
    *(undefined8 *)(pcVar10 + 0x10) = local_2d8;
    *(undefined8 *)(pcVar10 + 0x18) = uVar25;
    *(undefined8 *)(pcVar10 + 0x20) = local_2e0;
    *(undefined8 *)(pcVar10 + 0x28) = uVar26;
    *(code **)(pcVar10 + 0x30) = FUN_10010254c;
    *(code **)(pcVar10 + 0x38) = param_3;
    local_240 = FUN_100102730;
    puStack_248 = &DAT_10099ce18;
    local_238 = pcVar10;
    goto LAB_100101a88;
  case 0x15:
    puVar9 = &local_160;
    FUN_100008290();
    uVar25 = *puVar9;
    local_2d0 = puVar9[1];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    FUN_10010266c(param_1,&local_260);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099cdb0;
    _swift_allocObject(&DAT_10099cdb0,0x30,7);
    *(undefined8 *)(pcVar10 + 0x10) = uVar25;
    *(undefined8 *)(pcVar10 + 0x18) = local_2d0;
    *(code **)(pcVar10 + 0x20) = FUN_10010254c;
    *(code **)(pcVar10 + 0x28) = param_3;
    local_240 = FUN_10010270c;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    puStack_248 = &DAT_10099cdc8;
    local_238 = pcVar10;
    goto LAB_100101d1c;
  case 0x16:
    puVar9 = &local_160;
    FUN_100008290();
    uVar25 = *puVar9;
    local_2d0 = puVar9[1];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    FUN_10010266c(param_1,&local_260);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099cd60;
    _swift_allocObject(&DAT_10099cd60,0x30,7);
    *(undefined8 *)(pcVar10 + 0x10) = uVar25;
    *(undefined8 *)(pcVar10 + 0x18) = local_2d0;
    *(code **)(pcVar10 + 0x20) = FUN_10010254c;
    *(code **)(pcVar10 + 0x28) = param_3;
    local_240 = FUN_100102700;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    puStack_248 = &DAT_10099cd78;
    local_238 = pcVar10;
    goto LAB_100101d1c;
  case 0x17:
    puVar9 = &local_160;
    FUN_100008290();
    uVar25 = *puVar9;
    local_2d0 = puVar9[1];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    FUN_10010266c(param_1,&local_260);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099cd10;
    _swift_allocObject(&DAT_10099cd10,0x30,7);
    *(undefined8 *)(pcVar10 + 0x10) = uVar25;
    *(undefined8 *)(pcVar10 + 0x18) = local_2d0;
    *(code **)(pcVar10 + 0x20) = FUN_10010254c;
    *(code **)(pcVar10 + 0x28) = param_3;
    local_240 = FUN_1001026dc;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    puStack_248 = &DAT_10099cd28;
    local_238 = pcVar10;
LAB_100101d1c:
    uStack_258 = 0x42000000;
    local_250 = FUN_1000acdb4;
    PTR___NSConcreteStackBlock_100995490 = local_260;
    local_2c0 = param_3;
    pvVar17 = __Block_copy(&local_260);
    pcVar10 = local_238;
    _swift_retain(param_3);
    _swift_release(pcVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
    local_260 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
LAB_100101e14:
    puVar15 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar16 = puVar15;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar24,&local_260,puVar15,puVar16,lVar7,pcVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar23,puVar24,pvVar17);
    __Block_release(pvVar17);
    (**(code **)(lVar22 + 8))(puVar24,lVar7);
    (**(code **)(lVar19 + 8))(lVar23,local_2b8);
    param_3 = local_2c0;
    goto LAB_1001021d0;
  case 0x18:
    puVar9 = &local_160;
    FUN_100008290();
    local_2d8 = *puVar9;
    uVar25 = puVar9[1];
    local_2e0 = puVar9[2];
    uVar26 = puVar9[3];
    local_2b8 = lVar8;
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    _swift_bridgeObjectRetain(uVar25);
    uVar27 = uVar26;
    _swift_bridgeObjectRetain();
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099ccc0;
    local_2d0 = uVar27;
    _swift_allocObject(&DAT_10099ccc0,0x40,7);
    *(undefined8 *)(pcVar10 + 0x10) = local_2d8;
    *(undefined8 *)(pcVar10 + 0x18) = uVar25;
    *(undefined8 *)(pcVar10 + 0x20) = local_2e0;
    *(undefined8 *)(pcVar10 + 0x28) = uVar26;
    *(code **)(pcVar10 + 0x30) = FUN_10010254c;
    *(code **)(pcVar10 + 0x38) = param_3;
    local_240 = FUN_1001026d0;
    puStack_248 = &DAT_10099ccd8;
    local_238 = pcVar10;
LAB_100101a88:
    uStack_258 = 0x42000000;
    local_250 = FUN_1000acdb4;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    pvVar17 = __Block_copy(&local_260);
    pcVar10 = local_238;
    _swift_retain(param_3);
    _swift_release(pcVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
    local_260 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar15 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar16 = puVar15;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar24,&local_260,puVar15,puVar16,lVar7,pcVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar23,puVar24,pvVar17);
    __Block_release(pvVar17);
    (**(code **)(lVar22 + 8))(puVar24,lVar7);
    (**(code **)(lVar19 + 8))(lVar23,local_2b8);
    goto LAB_1001021d0;
  case 0x1a:
    _swift_retain_n(param_3,2);
    if (lVar18 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar18 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if (lVar18 == 0) {
      uVar21 = 0;
      pcVar10 = (code *)0x4;
    }
    else {
      lVar18 = *(long *)(lVar18 + _TtC14UURemoteServer18StreamerDispatcher::room);
      uVar21 = *(undefined4 *)(lVar18 + 0x10);
      _swift_beginAccess(lVar18 + 0x18,auStack_278,0,0);
      pcVar10 = *(code **)(lVar18 + 0x20);
    }
    FUN_100125fe0();
    uVar1 = 4;
    if (((uint)pcVar10 & 0xff) != 5) {
      uVar1 = (char)pcVar10;
    }
    puStack_248 = &DAT_1009dc0f8;
    FUN_1001028b8();
    local_240 = pcVar10;
    FUN_1001028f8();
    local_260._0_5_ = CONCAT14(uVar1,uVar21);
    uStack_258 = 0;
    local_238 = pcVar10;
    break;
  case 0x1b:
    _swift_retain_n(param_3,2);
    if (lVar18 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar18 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher);
    if ((lVar18 == 0) ||
       (lVar18 = *(long *)(lVar18 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession)
       , lVar18 == 0)) {
      uVar21 = 0;
      pcVar10 = (code *)0x7;
    }
    else {
      uVar21 = *(undefined4 *)(lVar18 + _TtC14UURemoteServer22StreamerConnectSession::handle);
      lVar18 = lVar18 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
      _swift_beginAccess(lVar18,auStack_278,0,0);
      pcVar10 = *(code **)(lVar18 + 8);
    }
    FUN_1000cdc20();
    uVar1 = 7;
    if (((uint)pcVar10 & 0xff) != 8) {
      uVar1 = (char)pcVar10;
    }
    puStack_248 = &DAT_1009dc210;
    FUN_1001027bc();
    local_240 = pcVar10;
    FUN_1001027fc();
    local_260._0_5_ = CONCAT14(uVar1,uVar21);
    local_238 = pcVar10;
    break;
  case 0x1d:
    _swift_retain_n(param_3,2);
    FUN_1000ff590();
    puStack_248 = (undefined *)0x0;
    local_250 = (code *)0x0;
    local_238 = (code *)0x0;
    local_240 = (code *)0x0;
    uStack_258 = 0;
    local_260 = (undefined *)0x0;
    local_230 = 2;
    goto LAB_1001021a4;
  case 0x20:
    _swift_retain_n(param_3,2);
    if (lVar18 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1001ae184(*(undefined8 *)(DAT_100b360a8 + 0x28));
    puStack_248 = (undefined *)0x0;
    local_250 = (code *)0x0;
    local_238 = (code *)0x0;
    local_240 = (code *)0x0;
    uStack_258 = 0;
    local_260 = (undefined *)0x0;
    local_230 = 2;
    goto LAB_1001021a4;
  case 0x22:
    FUN_100004b70(0);
    _swift_retain_n(param_3,2);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    pcVar10 = (code *)&DAT_10099cc70;
    _swift_allocObject(&DAT_10099cc70,0x20,7);
    *(code **)(pcVar10 + 0x10) = FUN_10010254c;
    *(code **)(pcVar10 + 0x18) = param_3;
    local_240 = FUN_1001026c4;
    local_260 = PTR___NSConcreteStackBlock_100995490;
    uStack_258 = 0x42000000;
    local_250 = FUN_1000acdb4;
    puStack_248 = &DAT_10099cc88;
    local_238 = pcVar10;
    pvVar17 = __Block_copy(&local_260);
    local_2b8 = lVar8;
LAB_100101de0:
    pcVar10 = local_238;
    _swift_retain(param_3);
    _swift_release(pcVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar23);
    local_260 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    local_2c0 = param_3;
    goto LAB_100101e14;
  }
  local_230 = 1;
LAB_1001021a4:
  _swift_beginAccess(param_3 + 0x10,&local_2b0,1,0);
LAB_1001021b8:
  FUN_1001025a8(&local_260,param_3 + 0x10);
LAB_1001021c4:
  FUN_100102518(&local_260);
LAB_1001021d0:
  _swift_release_n(param_3,2);
  return;
}

