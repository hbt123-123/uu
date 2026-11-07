// rea decompile_all
// name: FUN_100172330
// address: 0x100172330
// body: available
// range: 0x100172330-0x100172d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100172330(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ID IVar16;
  void *aBlock;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long extraout_x8;
  undefined1 *puVar20;
  long lVar21;
  long extraout_x8_00;
  long lVar22;
  long extraout_x8_01;
  code *pcVar23;
  long lVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined1 auStack_4c0 [16];
  long alStack_4b0 [3];
  ulong uStack_498;
  undefined1 auStack_490 [8];
  undefined8 local_488;
  undefined *local_428;
  undefined *local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  ulong local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined8 uStack_358;
  code *local_350;
  undefined *puStack_348;
  code *local_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [32];
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined7 uStack_25f;
  undefined8 uStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  ulong uStack_240;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [160];
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar20 = auStack_490 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar22 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar22 - extraout_x8_01;
  uVar15 = *param_1;
  uVar1 = param_1[1];
  _swift_beginAccess(param_2 + 0x10,auStack_238,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  lVar6 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar8 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  if (lVar6 == 0) {
    return;
  }
  puVar17 = (undefined8 *)(param_3 + 0x10);
  uStack_270 = 0xc000000000000000;
  uStack_278 = 0;
  local_268 = 0;
  local_260 = 1;
  uStack_240 = 0xc000000000000000;
  local_248 = 0;
  lVar7 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar7 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined4 *)(lVar7 + 0x14);
    _swift_release(lVar7);
  }
  lVar7 = param_2 + lVar8;
  local_280 = uVar25;
  _swift_weakLoadStrong();
  if (lVar7 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined4 *)(lVar7 + 0x90);
    _swift_release();
  }
  local_250 = uVar25;
  _swift_beginAccess(puVar17,auStack_2a0,0,0);
  uVar26 = *puVar17;
  uStack_258 = uVar26;
  if (uVar1 >> 0x3c < 0xf) {
    FUN_10010bd10(uVar15,uVar1);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(long *)(lVar24 + -0x20) = param_2;
    *(undefined8 *)(lVar24 + -0x18) = uVar26;
    local_488 = uVar15;
    *(undefined8 *)(lVar24 + -0x10) = uVar15;
    *(ulong *)(lVar24 + -8) = uVar1;
    puVar14 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    _swift_allocObject();
    FUN_100008184(uVar15,uVar1);
    pcVar9 = FUN_1001781bc;
    FUN_100615648(FUN_1001781bc,lVar24 + -0x30);
    FUN_100006cc8(uVar15,uVar1);
    pcVar23 = *(code **)(lVar19 + 0x38);
    (*pcVar23)(lVar24,1,1,lVar4);
    puVar10 = &DAT_1009a0870;
    _swift_allocObject(&DAT_1009a0870,0x30,7);
    *(long *)(puVar10 + 0x10) = param_3;
    *(long *)(puVar10 + 0x18) = param_2;
    *(undefined8 *)(puVar10 + 0x20) = param_6;
    *(long *)(puVar10 + 0x28) = param_5;
    puVar11 = &DAT_1009a0898;
    _swift_allocObject(&DAT_1009a0898,0x20,7);
    *(code **)(puVar11 + 0x10) = FUN_1001780d8;
    *(undefined **)(puVar11 + 0x18) = puVar10;
    _swift_retain(param_3);
    _swift_retain(param_6);
    lVar5 = param_5;
    FUN_10060edd8();
    _swift_beginAccess();
    uVar15 = *(undefined8 *)(lVar5 + 8);
    puVar10 = &DAT_100a79fd8;
    FUN_10003f840(&DAT_100a79fd8,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_1006170a4(uVar15,lVar24,FUN_1001781d0,puVar11,puVar14,puVar10);
    _swift_release(pcVar9);
    _swift_release(puVar11);
    FUN_100040bb4(lVar24,&DAT_100a77040,&DAT_10080e910);
    (*pcVar23)(lVar24,1,1,lVar4);
    puVar10 = &DAT_1009a05c8;
    _swift_allocObject(&DAT_1009a05c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,param_2);
    puVar11 = &DAT_1009a08c0;
    _swift_allocObject(&DAT_1009a08c0,0x28,7);
    *(long *)(puVar11 + 0x10) = param_4;
    *(undefined **)(puVar11 + 0x18) = puVar10;
    *(long *)(puVar11 + 0x20) = param_5;
    _swift_beginAccess(lVar5,&local_420,0,0);
    uVar26 = *(undefined8 *)(lVar5 + 8);
    _swift_beginAccess(lVar5,auStack_220,0,0);
    uVar2 = *(undefined1 *)(lVar5 + 0x10);
    puVar12 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    _swift_retain(param_4);
    _swift_retain(puVar10);
    FUN_10060913c(uVar26,lVar24,uVar2,FUN_100178118,puVar11,puVar14,puVar12);
    _swift_unknownObjectRelease(lVar6);
    _swift_release(uVar26);
    _swift_release(uVar15);
    _swift_release(puVar11);
    FUN_100006cc8(local_488,uVar1);
    FUN_100040bb4(lVar24,&DAT_100a77040,&DAT_10080e910);
    _swift_release(puVar10);
    local_160 = CONCAT71(uStack_25f,local_260);
    uStack_150 = CONCAT44(uStack_24c,local_250);
    uStack_158 = uStack_258;
    uStack_148 = local_248;
    local_140 = uStack_240;
    local_180 = (undefined *)CONCAT44(uStack_27c,local_280);
    uStack_178 = uStack_278;
    uStack_168 = local_268;
    uStack_170 = uStack_270;
    ppuVar13 = &local_180;
    goto LAB_100172d70;
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100172d9c,0,0xd0000000000000b4,0x8000000100896020,0xd000000000000017,
                0x8000000100896540,0x62,7);
  local_268 = 2;
  local_260 = 1;
  local_a0 = CONCAT71(uStack_25f,1) & 0xcfffffffffffffff;
  local_90 = CONCAT44(uStack_24c,local_250) & 0xcfffffffffffffff;
  local_80 = uStack_240 & 0xcfffffffffffffff | 0x2000000000000000;
  local_c0 = CONCAT44(uStack_27c,local_280);
  uStack_b8 = uStack_278;
  local_b0 = uStack_270;
  uStack_a8 = 2;
  uStack_98 = uStack_258;
  uStack_88 = local_248;
  FUN_100193df4(auStack_220,&local_c0);
  lVar8 = param_2 + lVar8;
  _swift_weakLoadStrong();
  if (lVar8 == 0) {
LAB_1001726b0:
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 **)(lVar24 + -0x20) = &local_280;
    *(long *)(lVar24 + -0x18) = param_2;
    *(undefined8 **)(lVar24 + -0x10) = puVar17;
    FUN_1003fb4ec(FUN_100178080,lVar24 + -0x30,0xd0000000000000b4,0x8000000100896020,
                  0xd000000000000017,0x8000000100896540,0x69,7);
  }
  else {
    uStack_388 = *(undefined8 *)(lVar8 + 0x130);
    uStack_390 = *(undefined8 *)(lVar8 + 0x128);
    uStack_378 = *(undefined8 *)(lVar8 + 0x140);
    local_380 = *(undefined8 *)(lVar8 + 0x138);
    uStack_3a8 = *(undefined8 *)(lVar8 + 0x110);
    uStack_3b0 = *(undefined8 *)(lVar8 + 0x108);
    uStack_398 = *(undefined8 *)(lVar8 + 0x120);
    local_3a0 = *(undefined8 *)(lVar8 + 0x118);
    uStack_368 = *(undefined8 *)(lVar8 + 0x150);
    uStack_370 = *(undefined8 *)(lVar8 + 0x148);
    uStack_3d8 = *(undefined8 *)(lVar8 + 0xe0);
    local_3e0 = *(ulong *)(lVar8 + 0xd8);
    uStack_3c8 = *(undefined8 *)(lVar8 + 0xf0);
    uStack_3d0 = *(undefined8 *)(lVar8 + 0xe8);
    uStack_3b8 = *(undefined8 *)(lVar8 + 0x100);
    local_3c0 = *(undefined8 *)(lVar8 + 0xf8);
    uStack_418 = *(undefined8 *)(lVar8 + 0xa0);
    local_420 = *(undefined **)(lVar8 + 0x98);
    uStack_408 = *(undefined8 *)(lVar8 + 0xb0);
    uStack_410 = *(undefined8 *)(lVar8 + 0xa8);
    uStack_3f8 = *(undefined8 *)(lVar8 + 0xc0);
    local_400 = *(undefined8 *)(lVar8 + 0xb8);
    uStack_3e8 = *(undefined8 *)(lVar8 + 0xd0);
    uStack_3f0 = *(undefined8 *)(lVar8 + 200);
    FUN_10007f314(&local_420,&local_180,&DAT_100a79f58,&DAT_10080f710);
    _swift_release(lVar8);
    uStack_2d8 = uStack_398;
    local_2e0 = local_3a0;
    uStack_2c8 = uStack_388;
    uStack_2d0 = uStack_390;
    uStack_2b8 = uStack_378;
    local_2c0 = local_380;
    uStack_2a8 = uStack_368;
    uStack_2b0 = uStack_370;
    uStack_318 = uStack_3d8;
    local_320 = local_3e0;
    uStack_308 = uStack_3c8;
    uStack_310 = uStack_3d0;
    uStack_2f8 = uStack_3b8;
    local_300 = local_3c0;
    uStack_2e8 = uStack_3a8;
    uStack_2f0 = uStack_3b0;
    uStack_358 = uStack_418;
    local_360 = local_420;
    puStack_348 = (undefined *)uStack_408;
    local_350 = (code *)uStack_410;
    puStack_338 = (undefined *)uStack_3f8;
    local_340 = (code *)local_400;
    uStack_328 = uStack_3e8;
    uStack_330 = uStack_3f0;
    iVar3 = (int)&local_360;
    FUN_100177d98();
    if (iVar3 == 1) goto LAB_1001726b0;
    uStack_f8 = uStack_2d8;
    local_100 = local_2e0;
    uStack_e8 = uStack_2c8;
    uStack_f0 = uStack_2d0;
    uStack_d8 = uStack_2b8;
    local_e0 = local_2c0;
    uStack_c8 = uStack_2a8;
    uStack_d0 = uStack_2b0;
    uStack_138 = uStack_318;
    local_140 = local_320;
    uStack_128 = uStack_308;
    uStack_130 = uStack_310;
    uStack_118 = uStack_2f8;
    local_120 = local_300;
    uStack_108 = uStack_2e8;
    uStack_110 = uStack_2f0;
    uStack_178 = uStack_358;
    local_180 = local_360;
    uStack_168 = puStack_348;
    uStack_170 = local_350;
    uStack_158 = puStack_338;
    local_160 = local_340;
    uStack_148 = uStack_328;
    uStack_150 = uStack_330;
    ppuVar13 = &local_180;
    FUN_1001bddd8(ppuVar13,auStack_220);
    uVar25 = SUB84(ppuVar13,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 **)(lVar24 + -0x20) = &local_280;
    *(long *)(lVar24 + -0x18) = param_2;
    *(undefined8 **)(lVar24 + -0x10) = puVar17;
    *(undefined4 *)(lVar24 + -8) = uVar25;
    FUN_1003fb4ec(FUN_10017808c,lVar24 + -0x30,0xd0000000000000b4,0x8000000100896020,
                  0xd000000000000017,0x8000000100896540,0x67,7);
    FUN_100040bb4(&local_420,&DAT_100a79f58,&DAT_10080f710);
  }
  puVar14 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar15 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
  IVar16 = _objc_msgSend((ID)puVar14,"initWithDomain:code:userInfo:",uVar15,0x186a5,0);
  _swift_beginAccess(param_4 + 0x10,&local_420,1,0);
  *(ID *)(param_4 + 0x10) = IVar16;
  FUN_1001707b0(0);
  puVar14 = &DAT_1009a0820;
  _swift_allocObject(&DAT_1009a0820,0x18,7);
  *(long *)(puVar14 + 0x10) = param_5;
  local_340 = thunk_FUN_1000a9f7c;
  local_360 = PTR___NSConcreteStackBlock_100995490;
  uStack_358 = 0x42000000;
  local_350 = FUN_1000acdb4;
  puStack_348 = &DAT_1009a0838;
  puStack_338 = puVar14;
  aBlock = __Block_copy(&local_360);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar22,param_5);
  local_428 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar17 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar14 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar18 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar20,&local_428,puVar14,puVar18,lVar4,puVar17);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar22,puVar20,aBlock);
  __Block_release(aBlock);
  FUN_10016b308(auStack_220);
  _swift_unknownObjectRelease(lVar6);
  (**(code **)(lVar19 + 8))(puVar20,lVar4);
  (**(code **)(lVar21 + 8))(lVar22,lVar5);
  _swift_release(puStack_338);
  local_340 = (code *)CONCAT71(uStack_25f,local_260);
  uStack_330 = CONCAT44(uStack_24c,local_250);
  puStack_338 = (undefined *)uStack_258;
  uStack_328 = local_248;
  local_320 = uStack_240;
  local_360 = (undefined *)CONCAT44(uStack_27c,local_280);
  uStack_358 = uStack_278;
  puStack_348 = (undefined *)local_268;
  local_350 = (code *)uStack_270;
  ppuVar13 = &local_360;
LAB_100172d70:
  FUN_10016b3e8(ppuVar13);
  return;
}

