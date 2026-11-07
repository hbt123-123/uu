// rea decompile_all
// name: FUN_100174a38
// address: 0x100174a38
// body: available
// range: 0x100174a38-0x100175873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100174a38(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  dispatch_semaphore_t pdVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  code *pcVar15;
  void *pvVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x12;
  undefined4 uVar18;
  undefined1 auStack_550 [16];
  long alStack_540 [3];
  ulong uStack_528;
  undefined1 auStack_520 [8];
  long local_518;
  undefined8 local_510;
  undefined8 local_508;
  code *local_500;
  dispatch_semaphore_t local_4f8;
  char *local_4f0;
  char *local_4e8;
  long local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  long lStack_4a0;
  undefined1 *local_498;
  long local_490;
  long local_488;
  dispatch_semaphore_t local_480;
  code *local_478;
  undefined *local_470;
  undefined8 uStack_468;
  code *local_460;
  undefined *puStack_458;
  code *local_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  ulong local_430;
  undefined *local_428;
  undefined *local_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined8 local_400;
  code *pcStack_3f8;
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
  code *pcStack_350;
  undefined *puStack_348;
  undefined8 local_340;
  code *pcStack_338;
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
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *local_278;
  undefined1 local_270;
  undefined7 uStack_26f;
  code *pcStack_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  ulong uStack_250;
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [160];
  undefined *local_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 local_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  code *pcStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  
  lVar5 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_490 = *(long *)(lVar5 + -8);
  local_488 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_490 + 0x40));
  lVar5 = 0;
  local_498 = auStack_520 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_4a8 = *(long *)(lVar5 + -8);
  lStack_4a0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_4a8 + 0x40));
  lVar17 = (long)(auStack_520 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_4b0 = lVar17;
  __s8Dispatch0A4TimeVMa();
  local_4c0 = *(long *)(lVar5 + -8);
  local_4b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_4c0 + 0x40));
  lVar17 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_4c8 = lVar17;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar17 = lVar17 - extraout_x12;
  local_4d0 = lVar17;
  _swift_beginAccess(param_1 + 0x10,auStack_248,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    puVar9 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar10 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
    IVar11 = _objc_msgSend((ID)puVar9,"initWithDomain:code:userInfo:",uVar10,0xf424c,0);
    FUN_100616260(IVar11);
    return;
  }
  local_4d8 = _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  lVar5 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar7 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  if (lVar5 == 0) {
    puVar9 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar10 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
    IVar11 = _objc_msgSend((ID)puVar9,"initWithDomain:code:userInfo:",uVar10,0xf424c,0);
    FUN_100616260(IVar11);
    return;
  }
  pcStack_280 = (code *)0xc000000000000000;
  uStack_288 = 0;
  local_278 = (undefined *)0x0;
  local_270 = 1;
  uStack_250 = 0xc000000000000000;
  local_258 = 0;
  lVar6 = param_1 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  local_508 = param_4;
  local_500 = param_5;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)(lVar6 + 0x14);
    _swift_release(lVar6);
  }
  lVar6 = param_1 + lVar7;
  local_290 = uVar18;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)(lVar6 + 0x90);
    _swift_release();
  }
  pcVar15 = local_500;
  uVar10 = local_508;
  local_4e0 = param_1;
  pcStack_268 = param_3;
  local_260 = uVar18;
  if ((ulong)local_500 >> 0x3c < 0xf) {
    uStack_288 = local_508;
    pcStack_280 = local_500;
    FUN_100008184(local_508,local_500);
    FUN_100008184(uVar10,pcVar15);
    FUN_100006cdc(0,0xc000000000000000);
    lVar6 = param_1 + lVar7;
    _swift_weakLoadStrong();
    if (lVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)(lVar6 + 0x14);
      _swift_release();
    }
    lVar6 = param_1 + lVar7;
    local_290 = uVar18;
    pcStack_268 = param_3;
    _swift_weakLoadStrong();
    if (lVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined4 *)(lVar6 + 0x90);
      _swift_release();
    }
    local_278 = (undefined *)0x1;
    local_270 = 1;
    local_b0 = CONCAT71(uStack_26f,1) & 0xcfffffffffffffff;
    local_a0 = CONCAT44(uStack_25c,uVar18) & 0xcfffffffffffffff;
    local_90 = uStack_250 & 0xcfffffffffffffff | 0x2000000000000000;
    local_d0 = CONCAT44(uStack_28c,local_290);
    uStack_c8 = uStack_288;
    local_c0 = pcStack_280;
    uStack_b8 = 1;
    pcStack_a8 = pcStack_268;
    uStack_98 = local_258;
    local_260 = uVar18;
    FUN_100193df4(auStack_230,&local_d0);
    lVar7 = param_1 + lVar7;
    _swift_weakLoadStrong();
    if (lVar7 != 0) {
      uStack_388 = *(undefined8 *)(lVar7 + 0x130);
      uStack_390 = *(undefined8 *)(lVar7 + 0x128);
      uStack_378 = *(undefined8 *)(lVar7 + 0x140);
      local_380 = *(undefined8 *)(lVar7 + 0x138);
      uStack_3a8 = *(undefined8 *)(lVar7 + 0x110);
      uStack_3b0 = *(undefined8 *)(lVar7 + 0x108);
      uStack_398 = *(undefined8 *)(lVar7 + 0x120);
      local_3a0 = *(undefined8 *)(lVar7 + 0x118);
      uStack_368 = *(undefined8 *)(lVar7 + 0x150);
      uStack_370 = *(undefined8 *)(lVar7 + 0x148);
      uStack_3d8 = *(undefined8 *)(lVar7 + 0xe0);
      local_3e0 = *(ulong *)(lVar7 + 0xd8);
      uStack_3c8 = *(undefined8 *)(lVar7 + 0xf0);
      uStack_3d0 = *(undefined8 *)(lVar7 + 0xe8);
      uStack_3b8 = *(undefined8 *)(lVar7 + 0x100);
      local_3c0 = *(undefined8 *)(lVar7 + 0xf8);
      uStack_418 = *(undefined8 *)(lVar7 + 0xa0);
      local_420 = *(undefined **)(lVar7 + 0x98);
      puStack_408 = *(undefined **)(lVar7 + 0xb0);
      pcStack_410 = *(code **)(lVar7 + 0xa8);
      pcStack_3f8 = *(code **)(lVar7 + 0xc0);
      local_400 = *(undefined8 *)(lVar7 + 0xb8);
      uStack_3e8 = *(undefined8 *)(lVar7 + 0xd0);
      uStack_3f0 = *(undefined8 *)(lVar7 + 200);
      FUN_10007f314(&local_420,&local_190,&DAT_100a79f58,&DAT_10080f710);
      _swift_release(lVar7);
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
      puStack_348 = puStack_408;
      pcStack_350 = pcStack_410;
      pcStack_338 = pcStack_3f8;
      local_340 = local_400;
      uStack_328 = uStack_3e8;
      uStack_330 = uStack_3f0;
      iVar4 = (int)&local_360;
      FUN_100177d98();
      if (iVar4 != 1) {
        uStack_108 = uStack_2d8;
        local_110 = local_2e0;
        uStack_f8 = uStack_2c8;
        local_100 = uStack_2d0;
        uStack_e8 = uStack_2b8;
        local_f0 = local_2c0;
        uStack_d8 = uStack_2a8;
        local_e0 = uStack_2b0;
        uStack_148 = uStack_318;
        local_150 = local_320;
        uStack_138 = uStack_308;
        uStack_140 = uStack_310;
        uStack_128 = uStack_2f8;
        local_130 = local_300;
        uStack_118 = uStack_2e8;
        uStack_120 = uStack_2f0;
        uStack_188 = uStack_358;
        local_190 = local_360;
        puStack_178 = puStack_348;
        pcStack_180 = pcStack_350;
        pcStack_168 = pcStack_338;
        local_170 = local_340;
        uStack_158 = uStack_328;
        uStack_160 = uStack_330;
        local_518 = lVar5;
        local_510 = param_2;
        local_4f8 = _dispatch_semaphore_create(0);
        lVar7 = local_4b0;
        lVar5 = local_4b8;
        local_4e8 = "$_uploadCopyQueue";
        local_4f0 = s_____1008963d0;
        do {
          param_1 = param_1 + local_4d8;
          _swift_unknownObjectWeakLoadStrong();
          if (param_1 != 0) {
            ppuVar14 = &local_190;
            FUN_1001bddd8(ppuVar14,auStack_230);
            _swift_unknownObjectRelease(param_1);
            if ((int)ppuVar14 == 0) goto code_r0x000100175590;
          }
          FUN_100401b14(0);
          FUN_1003fb45c(FUN_100175c34,0,0xd0000000000000b4,(ulong)local_4e8 | 0x8000000000000000,
                        &DAT_d000000000000028,(ulong)local_4f0 | 0x8000000000000000,0xd6,7);
          FUN_1001707b0();
          lVar2 = local_4c8;
          __s8Dispatch0A4TimeV3nowACyFZ(local_4c8);
          lVar6 = local_4d0;
          __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_4d0,0x3f9eb851eb851eb8,lVar2);
          local_478 = *(code **)(local_4c0 + 8);
          (*local_478)(lVar2,lVar5);
          pcVar15 = (code *)&DAT_1009a0640;
          _swift_allocObject(&DAT_1009a0640,0x18,7);
          pdVar1 = local_4f8;
          *(dispatch_semaphore_t *)(pcVar15 + 0x10) = local_4f8;
          local_450 = thunk_FUN_1000a9f7c;
          local_470 = PTR___NSConcreteStackBlock_100995490;
          uStack_468 = 0x42000000;
          local_460 = FUN_1000acdb4;
          puStack_458 = &DAT_1009a0658;
          pcStack_448 = pcVar15;
          pvVar16 = __Block_copy(&local_470);
          local_480 = pdVar1;
          __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
          local_428 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar12 = &DAT_100a75a90;
          FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
          puVar9 = &DAT_100a75a98;
          FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
          puVar13 = &DAT_100a75aa0;
          FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
          lVar2 = local_488;
          puVar3 = local_498;
          __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                    (local_498,&local_428,puVar9,puVar13,local_488,puVar12);
          __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                    (lVar6,lVar7,puVar3,pvVar16);
          __Block_release(pvVar16);
          (**(code **)(local_490 + 8))(puVar3,lVar2);
          (**(code **)(local_4a8 + 8))(lVar7,lStack_4a0);
          (*local_478)(lVar6,lVar5);
          param_1 = local_4e0;
          _swift_release(pcStack_448);
          __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
        } while( true );
      }
    }
    uVar10 = local_508;
    puVar9 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar8 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
    IVar11 = _objc_msgSend((ID)puVar9,"initWithDomain:code:userInfo:",uVar8,0xf424a,0);
    FUN_100616260(IVar11);
    FUN_100006cc8(uVar10,local_500);
    FUN_10016b308(auStack_230);
    _swift_unknownObjectRelease(lVar5);
    local_170 = CONCAT71(uStack_26f,local_270);
    uStack_160 = CONCAT44(uStack_25c,local_260);
    pcStack_168 = pcStack_268;
    uStack_158 = local_258;
    local_150 = uStack_250;
    local_190 = (undefined *)CONCAT44(uStack_28c,local_290);
    uStack_188 = uStack_288;
    puStack_178 = local_278;
    pcStack_180 = pcStack_280;
    ppuVar14 = &local_190;
    goto LAB_10017584c;
  }
  local_478 = param_3;
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100175874,0,0xd0000000000000b4,0x8000000100896020,&DAT_d000000000000028,
                0x80000001008963d0,0xbc,7);
  local_278 = (undefined *)0x2;
  local_270 = 1;
  local_b0 = CONCAT71(uStack_26f,1) & 0xcfffffffffffffff;
  local_a0 = CONCAT44(uStack_25c,local_260) & 0xcfffffffffffffff;
  local_90 = uStack_250 & 0xcfffffffffffffff | 0x2000000000000000;
  local_d0 = CONCAT44(uStack_28c,local_290);
  uStack_c8 = uStack_288;
  local_c0 = pcStack_280;
  uStack_b8 = 2;
  pcStack_a8 = pcStack_268;
  uStack_98 = local_258;
  FUN_100193df4(auStack_230,&local_d0);
  param_1 = param_1 + lVar7;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
LAB_100174eac:
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar7 = local_4e0;
    *(undefined4 **)(lVar17 + -0x20) = &local_290;
    *(long *)(lVar17 + -0x18) = lVar7;
    *(code **)(lVar17 + -0x10) = local_478;
    FUN_1003fb4ec(FUN_100177f30,lVar17 + -0x30,0xd0000000000000b4,0x8000000100896020,
                  &DAT_d000000000000028,0x80000001008963d0,0xc3,7);
  }
  else {
    uStack_388 = *(undefined8 *)(param_1 + 0x130);
    uStack_390 = *(undefined8 *)(param_1 + 0x128);
    uStack_378 = *(undefined8 *)(param_1 + 0x140);
    local_380 = *(undefined8 *)(param_1 + 0x138);
    uStack_3a8 = *(undefined8 *)(param_1 + 0x110);
    uStack_3b0 = *(undefined8 *)(param_1 + 0x108);
    uStack_398 = *(undefined8 *)(param_1 + 0x120);
    local_3a0 = *(undefined8 *)(param_1 + 0x118);
    uStack_368 = *(undefined8 *)(param_1 + 0x150);
    uStack_370 = *(undefined8 *)(param_1 + 0x148);
    uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
    local_3e0 = *(ulong *)(param_1 + 0xd8);
    uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
    uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
    uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
    local_3c0 = *(undefined8 *)(param_1 + 0xf8);
    uStack_418 = *(undefined8 *)(param_1 + 0xa0);
    local_420 = *(undefined **)(param_1 + 0x98);
    puStack_408 = *(undefined **)(param_1 + 0xb0);
    pcStack_410 = *(code **)(param_1 + 0xa8);
    pcStack_3f8 = *(code **)(param_1 + 0xc0);
    local_400 = *(undefined8 *)(param_1 + 0xb8);
    uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
    uStack_3f0 = *(undefined8 *)(param_1 + 200);
    FUN_10007f314(&local_420,&local_190,&DAT_100a79f58,&DAT_10080f710);
    _swift_release(param_1);
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
    puStack_348 = puStack_408;
    pcStack_350 = pcStack_410;
    pcStack_338 = pcStack_3f8;
    local_340 = local_400;
    uStack_328 = uStack_3e8;
    uStack_330 = uStack_3f0;
    iVar4 = (int)&local_360;
    FUN_100177d98();
    if (iVar4 == 1) goto LAB_100174eac;
    uStack_108 = uStack_2d8;
    local_110 = local_2e0;
    uStack_f8 = uStack_2c8;
    local_100 = uStack_2d0;
    uStack_e8 = uStack_2b8;
    local_f0 = local_2c0;
    uStack_d8 = uStack_2a8;
    local_e0 = uStack_2b0;
    uStack_148 = uStack_318;
    local_150 = local_320;
    uStack_138 = uStack_308;
    uStack_140 = uStack_310;
    uStack_128 = uStack_2f8;
    local_130 = local_300;
    uStack_118 = uStack_2e8;
    uStack_120 = uStack_2f0;
    uStack_188 = uStack_358;
    local_190 = local_360;
    puStack_178 = puStack_348;
    pcStack_180 = pcStack_350;
    pcStack_168 = pcStack_338;
    local_170 = local_340;
    uStack_158 = uStack_328;
    uStack_160 = uStack_330;
    ppuVar14 = &local_190;
    FUN_1001bddd8(ppuVar14,auStack_230);
    uVar18 = SUB84(ppuVar14,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar7 = local_4e0;
    *(undefined4 **)(lVar17 + -0x20) = &local_290;
    *(long *)(lVar17 + -0x18) = lVar7;
    *(code **)(lVar17 + -0x10) = local_478;
    *(undefined4 *)(lVar17 + -8) = uVar18;
    FUN_1003fb4ec(FUN_100177f3c,lVar17 + -0x30,0xd0000000000000b4,0x8000000100896020,
                  &DAT_d000000000000028,0x80000001008963d0,0xc1,7);
    FUN_100040bb4(&local_420,&DAT_100a79f58,&DAT_10080f710);
  }
  puVar9 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar10 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
  IVar11 = _objc_msgSend((ID)puVar9,"initWithDomain:code:userInfo:",uVar10,0x186a5,0);
  FUN_100616260(IVar11);
  _swift_unknownObjectRelease(lVar5);
  FUN_10016b308(auStack_230);
  local_340 = CONCAT71(uStack_26f,local_270);
  uStack_330 = CONCAT44(uStack_25c,local_260);
  pcStack_338 = pcStack_268;
  uStack_328 = local_258;
  local_320 = uStack_250;
  local_360 = (undefined *)CONCAT44(uStack_28c,local_290);
  uStack_358 = uStack_288;
  puStack_348 = local_278;
  pcStack_350 = pcStack_280;
  ppuVar14 = &local_360;
LAB_10017584c:
  FUN_10016b3e8(ppuVar14);
  return;
code_r0x000100175590:
  pcVar15 = (code *)0x0;
  FUN_100401b14();
  local_478 = pcVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar15 = local_500;
  *(undefined8 *)(lVar17 + -0x10) = local_508;
  *(code **)(lVar17 + -8) = pcVar15;
  FUN_1003fb45c(FUN_100177f58,lVar17 + -0x20,0xd0000000000000b4,
                (ulong)local_4e8 | 0x8000000000000000,&DAT_d000000000000028,
                (ulong)local_4f0 | 0x8000000000000000,0xdc,7);
  FUN_1001707b0();
  puVar9 = &DAT_1009a0690;
  _swift_allocObject(&DAT_1009a0690,0x18,7);
  pdVar1 = local_4f8;
  *(dispatch_semaphore_t *)(puVar9 + 0x10) = local_4f8;
  local_450 = thunk_FUN_1000a9f7c;
  local_470 = PTR___NSConcreteStackBlock_100995490;
  uStack_468 = 0x42000000;
  local_460 = FUN_1000acdb4;
  puStack_458 = &DAT_1009a06a8;
  pcStack_448 = (code *)puVar9;
  pvVar16 = __Block_copy(&local_470);
  lVar5 = local_4b0;
  local_480 = pdVar1;
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_4b0);
  local_428 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar12 = &DAT_100a75a90;
  FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar9 = &DAT_100a75a98;
  FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
  puVar13 = &DAT_100a75aa0;
  FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
  lVar7 = local_488;
  puVar3 = local_498;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (local_498,&local_428,puVar9,puVar13,local_488,puVar12);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar5,puVar3,pvVar16);
  __Block_release(pvVar16);
  (**(code **)(local_490 + 8))(puVar3,lVar7);
  (**(code **)(local_4a8 + 8))(lVar5,lStack_4a0);
  _swift_release(pcStack_448);
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  (*(code *)PTR____chkstk_darwin_100995498)(0);
  pcVar15 = local_500;
  uVar10 = local_508;
  *(undefined4 **)(lVar17 + -0x20) = &local_290;
  *(undefined8 *)(lVar17 + -0x18) = uVar10;
  *(code **)(lVar17 + -0x10) = pcVar15;
  FUN_1003fb45c(FUN_100177f4c,lVar17 + -0x30,0xd0000000000000b4,
                (ulong)local_4e8 | 0x8000000000000000,&DAT_d000000000000028,
                (ulong)local_4f0 | 0x8000000000000000,0xe4,7);
  FUN_10061630c();
  FUN_100006cc8(uVar10,pcVar15);
  FUN_100040bb4(&local_420,&DAT_100a79f58,&DAT_10080f710);
  FUN_10016b308(auStack_230);
  _swift_unknownObjectRelease(local_518);
  local_450 = (code *)CONCAT71(uStack_26f,local_270);
  uStack_440 = CONCAT44(uStack_25c,local_260);
  pcStack_448 = pcStack_268;
  uStack_438 = local_258;
  local_430 = uStack_250;
  local_470 = (undefined *)CONCAT44(uStack_28c,local_290);
  uStack_468 = uStack_288;
  puStack_458 = local_278;
  local_460 = pcStack_280;
  ppuVar14 = &local_470;
  goto LAB_10017584c;
}

