// rea decompile_all
// name: FUN_10001b168
// address: 0x10001b168
// body: available
// range: 0x10001b168-0x10001d61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001b168(uint param_1,undefined8 *param_2,code *param_3,ulong param_4,uint param_5,
                  undefined *param_6,code *param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ulong uVar15;
  ulong uVar16;
  ID IVar17;
  class_t *self;
  void *pvVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long extraout_x8;
  long lVar23;
  long extraout_x8_00;
  char *pcVar24;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long unaff_x20;
  undefined *puVar25;
  undefined *puVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined *puVar30;
  char *pcVar31;
  int iVar32;
  undefined4 uVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  char acStack_500 [16];
  char acStack_4f0 [4];
  uint uStack_4ec;
  char acStack_4e8 [8];
  uint auStack_4e0 [2];
  char acStack_4d8 [8];
  uint auStack_4d0 [2];
  byte abStack_4c8 [8];
  uint uStack_4c0;
  char acStack_4bc [4];
  long lStack_4b8;
  ulong local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  uint local_494;
  char *local_490;
  long local_488;
  long local_480;
  char *local_478;
  code *local_470;
  undefined *local_468;
  char *local_460;
  char *local_458;
  undefined1 *local_450;
  undefined8 *local_448;
  uint local_43c;
  char *local_438;
  code *local_430;
  undefined1 auStack_408 [28];
  int local_3ec;
  undefined1 auStack_3e8 [152];
  undefined *local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined *local_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  code *local_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 auStack_178 [24];
  undefined *local_160;
  undefined8 uStack_158;
  code *local_150;
  undefined *local_148;
  code *local_140;
  undefined *puStack_138;
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
  undefined8 local_d0;
  undefined1 auStack_a0 [4];
  int local_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  char local_78;
  
  lVar4 = 0;
  local_478 = (char *)param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_488 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar23 = (long)&local_4b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_480 = lVar23;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pcVar24 = (char *)(lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar26 = *(undefined **)(unaff_x20 + 0x108);
  ppuVar5 = (undefined **)&DAT_100997520;
  local_490 = pcVar24;
  _swift_allocObject(&DAT_100997520,0x18,7);
  _swift_weakInit(ppuVar5 + 2);
  pcVar6 = "";
  _swift_allocObject(&DAT_1009977c8,0x108,7);
  *(undefined **)(pcVar6 + 0x10) = param_6;
  *(undefined ***)(pcVar6 + 0x18) = ppuVar5;
  *(code **)(pcVar6 + 0x20) = param_7;
  *(undefined8 *)(pcVar6 + 0x28) = param_8;
  uVar9 = param_2[0x10];
  uVar36 = param_2[0x13];
  uVar35 = param_2[0x12];
  *(undefined8 *)(pcVar6 + 0xb8) = param_2[0x11];
  *(undefined8 *)(pcVar6 + 0xb0) = uVar9;
  *(undefined8 *)(pcVar6 + 200) = uVar36;
  *(undefined8 *)(pcVar6 + 0xc0) = uVar35;
  uVar9 = param_2[0x14];
  uVar36 = param_2[0x17];
  uVar35 = param_2[0x16];
  *(undefined8 *)(pcVar6 + 0xd8) = param_2[0x15];
  *(undefined8 *)(pcVar6 + 0xd0) = uVar9;
  *(undefined8 *)(pcVar6 + 0xe8) = uVar36;
  *(undefined8 *)(pcVar6 + 0xe0) = uVar35;
  uVar9 = param_2[8];
  uVar36 = param_2[0xb];
  uVar35 = param_2[10];
  *(undefined8 *)(pcVar6 + 0x78) = param_2[9];
  *(undefined8 *)(pcVar6 + 0x70) = uVar9;
  *(undefined8 *)(pcVar6 + 0x88) = uVar36;
  *(undefined8 *)(pcVar6 + 0x80) = uVar35;
  uVar9 = param_2[0xc];
  uVar36 = param_2[0xf];
  uVar35 = param_2[0xe];
  *(undefined8 *)(pcVar6 + 0x98) = param_2[0xd];
  *(undefined8 *)(pcVar6 + 0x90) = uVar9;
  *(undefined8 *)(pcVar6 + 0xa8) = uVar36;
  *(undefined8 *)(pcVar6 + 0xa0) = uVar35;
  uVar9 = *param_2;
  uVar36 = param_2[3];
  uVar35 = param_2[2];
  *(undefined8 *)(pcVar6 + 0x38) = param_2[1];
  *(undefined8 *)(pcVar6 + 0x30) = uVar9;
  *(undefined8 *)(pcVar6 + 0x48) = uVar36;
  *(undefined8 *)(pcVar6 + 0x40) = uVar35;
  uVar9 = param_2[4];
  uVar36 = param_2[7];
  uVar35 = param_2[6];
  *(undefined8 *)(pcVar6 + 0x58) = param_2[5];
  *(undefined8 *)(pcVar6 + 0x50) = uVar9;
  *(undefined8 *)(pcVar6 + 0x68) = uVar36;
  *(undefined8 *)(pcVar6 + 0x60) = uVar35;
  local_494 = param_5 & 1;
  local_450 = (undefined1 *)CONCAT44(local_450._4_4_,param_5);
  pcVar6[0xf0] = (char)param_5;
  *(uint *)(pcVar6 + 0xf4) = param_1;
  *(code **)(pcVar6 + 0xf8) = param_3;
  *(undefined **)(pcVar6 + 0x100) = puVar26;
  lVar4 = *(long *)(unaff_x20 + 0x38);
  puVar7 = param_6;
  local_468 = puVar26;
  local_448 = param_2;
  local_43c = param_1;
  local_438 = pcVar6;
  local_430 = param_7;
  if (*(char *)(lVar4 + 0x14) == '\x01') {
    _swift_retain();
    FUN_1000408d0(param_2,&local_160);
    FUN_10004090c(param_7,param_8);
    puVar26 = param_6;
    _swift_bridgeObjectRetain();
    FUN_100039b50();
    if (((ulong)puVar26 & 1) != 0) {
      uVar33 = 0xffffffff;
      goto LAB_10001b378;
    }
LAB_10001b3ac:
    FUN_10001ab44(param_3);
    uVar9 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar2 = local_43c;
    *(uint *)(pcVar24 + -0x20) = local_43c;
    *(long *)(pcVar24 + -0x18) = unaff_x20;
    *(code **)(pcVar24 + -0x10) = param_3;
    pcVar10 = FUN_10004091c;
    local_460 = "reenInfo refresh reason:";
    local_458 = "captureFailedRetryCount";
    FUN_1003fb48c(FUN_10004091c,pcVar24 + -0x30,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000007a,0x800000010087be50,0x2e6,0);
    FUN_10001920c();
    local_470 = pcVar10;
    _swift_beginAccess(unaff_x20 + 0x88,auStack_178,0,0);
    lVar4 = *(long *)(unaff_x20 + 0x88);
    if (*(long *)(lVar4 + 0x10) != 1) {
LAB_10001b4a8:
      uVar8 = _objc_msgSend((ID)param_3,"screenId");
      IVar17 = _objc_msgSend((ID)param_3,"videoTrackIndex");
      local_160 = (undefined *)((ulong)local_160 & 0xffffffffffffff00);
      FUN_10001e990(uVar8,IVar17 & 0xffffffff);
      pcVar10 = local_430;
      if ((uVar8 >> 0x20 & 1) == 0) goto LAB_10001bc10;
      _swift_bridgeObjectRelease(local_470);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(uint *)(pcVar24 + -0x20) = uVar2;
      local_470 = param_3;
      *(code **)(pcVar24 + -0x18) = param_3;
      *(long *)(pcVar24 + -0x10) = unaff_x20;
      local_4a8 = 0xd00000000000007a;
      FUN_1003fb4ec(FUN_100040928,pcVar24 + -0x30,0xd0000000000000a9,
                    (ulong)local_458 | 0x8000000000000000,0xd00000000000007a,
                    (ulong)local_460 | 0x8000000000000000,0x2f4,0);
      puVar7 = &DAT_100a75b88;
      FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x28) = 0;
      *(undefined8 *)(puVar7 + 0x30) = 0xe000000000000000;
      *(undefined8 *)(puVar7 + 0x38) = 0;
      *(undefined8 *)(puVar7 + 0x40) = 0xe000000000000000;
      *(undefined8 *)(puVar7 + 0x50) = 0xc000000000000000;
      *(undefined8 *)(puVar7 + 0x48) = 0;
      local_160 = param_6;
      _swift_bridgeObjectRetain();
      FUN_10005f56c(puVar7);
      puVar7 = local_160;
      _swift_beginAccess(ppuVar5 + 2,auStack_a0,0,0);
      ppuVar20 = ppuVar5 + 2;
      _swift_weakLoadStrong();
      puVar19 = local_448;
      if (ppuVar20 == (undefined **)0x0) goto joined_r0x00010001c2c4;
      if (((ppuVar20[7][0x14] & 1) == 0) ||
         (ppuVar21 = ppuVar20, FUN_100039b50(), ((ulong)ppuVar21 & 1) != 0)) {
        uStack_f8 = puVar19[0xd];
        local_100 = puVar19[0xc];
        uStack_198 = puVar19[0xf];
        uStack_1a0 = puVar19[0xe];
        uStack_108 = puVar19[0xb];
        uStack_110 = puVar19[10];
        uStack_1a8 = puVar19[0xd];
        local_1b0 = puVar19[0xc];
        uStack_e8 = puVar19[0xf];
        uStack_f0 = puVar19[0xe];
        uStack_188 = puVar19[0x11];
        local_190 = puVar19[0x10];
        puStack_138 = (undefined *)puVar19[5];
        local_140 = (code *)puVar19[4];
        uStack_1d8 = puVar19[7];
        uStack_1e0 = puVar19[6];
        local_148 = (undefined *)puVar19[3];
        local_150 = (code *)puVar19[2];
        uStack_1e8 = puVar19[5];
        local_1f0 = puVar19[4];
        uStack_128 = puVar19[7];
        uStack_130 = puVar19[6];
        uStack_1c8 = puVar19[9];
        local_1d0 = puVar19[8];
        uStack_118 = puVar19[9];
        local_120 = puVar19[8];
        uStack_1b8 = puVar19[0xb];
        uStack_1c0 = puVar19[10];
        uStack_208 = puVar19[1];
        local_210 = (undefined *)*puVar19;
        uStack_1f8 = puVar19[3];
        uStack_200 = puVar19[2];
        uStack_158 = puVar19[1];
        local_160 = (undefined *)*puVar19;
        uStack_d8 = puVar19[0x11];
        local_e0 = puVar19[0x10];
        local_180 = puVar19[0x12];
        local_d0 = puVar19[0x12];
        ppuVar21 = &local_160;
        FUN_100040934();
        if ((int)ppuVar21 != 1) {
          uStack_248 = uStack_f8;
          local_250 = local_100;
          uStack_238 = uStack_e8;
          uStack_240 = uStack_f0;
          uStack_228 = uStack_d8;
          local_230 = local_e0;
          local_220 = local_d0;
          puStack_288 = puStack_138;
          local_290 = local_140;
          uStack_278 = uStack_128;
          uStack_280 = uStack_130;
          uStack_268 = uStack_118;
          local_270 = local_120;
          uStack_258 = uStack_108;
          uStack_260 = uStack_110;
          uStack_2a8 = uStack_158;
          local_2b0 = local_160;
          puStack_298 = local_148;
          pcStack_2a0 = local_150;
          ppuVar21 = &local_2b0;
          FUN_100040948();
          if ((int)ppuVar21 == 0) {
            ppuVar21 = &local_2b0;
            FUN_100040964();
            puVar34 = ppuVar21[1];
            puVar26 = *ppuVar21;
            (*(code *)PTR____chkstk_darwin_100995498)(ppuVar21[2]);
            pcVar24[-0x40] = (char)local_494;
            *(uint *)(pcVar24 + -0x3c) = local_43c;
            *(undefined8 **)(pcVar24 + -0x38) = puVar19;
            *(undefined **)(pcVar24 + -0x28) = puVar34;
            *(undefined **)(pcVar24 + -0x30) = puVar26;
            *(undefined8 *)(pcVar24 + -0x20) = extraout_x8_01;
            *(code **)(pcVar24 + -0x18) = local_470;
            *(undefined **)(pcVar24 + -0x10) = puVar7;
            uStack_2e8 = uStack_1a8;
            local_2f0 = local_1b0;
            uStack_2d8 = uStack_198;
            uStack_2e0 = uStack_1a0;
            uStack_2c8 = uStack_188;
            local_2d0 = local_190;
            local_2c0 = local_180;
            uStack_328 = uStack_1e8;
            local_330 = local_1f0;
            uStack_318 = uStack_1d8;
            uStack_320 = uStack_1e0;
            uStack_308 = uStack_1c8;
            local_310 = local_1d0;
            uStack_2f8 = uStack_1b8;
            uStack_300 = uStack_1c0;
            uStack_348 = uStack_208;
            local_350 = local_210;
            uStack_338 = uStack_1f8;
            uStack_340 = uStack_200;
            FUN_10004098c(&local_350,auStack_3e8);
            FUN_1003fb45c(thunk_FUN_100040b9c,pcVar24 + -0x50,0xd0000000000000a9,
                          (ulong)local_458 | 0x8000000000000000,local_4a8,
                          (ulong)local_460 | 0x8000000000000000,0x2c4,0);
            ppuVar21 = &local_210;
            FUN_100040bb4(ppuVar21,&DAT_100a75b90,&DAT_100809c10);
          }
        }
      }
      if (((ulong)local_450 & 1) != 0) {
        if (*(long *)(puVar7 + 0x10) == 0) {
          if (ppuVar20[7][0x14] == '\x01') {
            FUN_100039b50();
            if (((ulong)ppuVar21 & 1) == 0) goto LAB_10001b7c0;
            iVar28 = -1;
          }
          else {
            iVar28 = *(int *)(ppuVar20[7] + 0x10);
          }
          IVar17 = _objc_msgSend((ID)local_470,"screenId");
          if (((iVar28 == (int)IVar17) && (ppuVar20[0x21] == local_468)) &&
             ((*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                        _TtC14UURemoteServer15StreamerManager::dispatcher) != 0 &&
              ((lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                           _TtC14UURemoteServer15StreamerManager::dispatcher) +
                                 _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
               lVar4 != 0 &&
               (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c
               )))))) {
            uStack_f8 = puVar19[0xd];
            local_100 = puVar19[0xc];
            uStack_198 = puVar19[0xf];
            uStack_1a0 = puVar19[0xe];
            uStack_108 = puVar19[0xb];
            uStack_110 = puVar19[10];
            uStack_1a8 = puVar19[0xd];
            local_1b0 = puVar19[0xc];
            uStack_e8 = puVar19[0xf];
            uStack_f0 = puVar19[0xe];
            uStack_188 = puVar19[0x11];
            local_190 = puVar19[0x10];
            puStack_138 = (undefined *)puVar19[5];
            local_140 = (code *)puVar19[4];
            uStack_1d8 = puVar19[7];
            uStack_1e0 = puVar19[6];
            local_148 = (undefined *)puVar19[3];
            local_150 = (code *)puVar19[2];
            uStack_1e8 = puVar19[5];
            local_1f0 = puVar19[4];
            uStack_128 = puVar19[7];
            uStack_130 = puVar19[6];
            uStack_1c8 = puVar19[9];
            local_1d0 = puVar19[8];
            uStack_118 = puVar19[9];
            local_120 = puVar19[8];
            uStack_1b8 = puVar19[0xb];
            uStack_1c0 = puVar19[10];
            uStack_208 = puVar19[1];
            local_210 = (undefined *)*puVar19;
            uStack_1f8 = puVar19[3];
            uStack_200 = puVar19[2];
            uStack_158 = puVar19[1];
            local_160 = (undefined *)*puVar19;
            uStack_d8 = puVar19[0x11];
            local_e0 = puVar19[0x10];
            local_180 = puVar19[0x12];
            local_d0 = puVar19[0x12];
            iVar28 = (int)&local_160;
            FUN_100040934();
            if (iVar28 != 1) {
              uStack_248 = uStack_f8;
              local_250 = local_100;
              uStack_238 = uStack_e8;
              uStack_240 = uStack_f0;
              uStack_228 = uStack_d8;
              local_230 = local_e0;
              local_220 = local_d0;
              puStack_288 = puStack_138;
              local_290 = local_140;
              uStack_278 = uStack_128;
              uStack_280 = uStack_130;
              uStack_268 = uStack_118;
              local_270 = local_120;
              uStack_258 = uStack_108;
              uStack_260 = uStack_110;
              uStack_2a8 = uStack_158;
              local_2b0 = local_160;
              puStack_298 = local_148;
              pcStack_2a0 = local_150;
              iVar28 = (int)&local_2b0;
              FUN_100040948();
              pcVar6 = local_458;
              if (iVar28 == 0) {
                ppuVar21 = &local_2b0;
                FUN_100040964();
                puVar26 = *ppuVar21;
                puVar34 = ppuVar21[1];
                puVar25 = ppuVar21[2];
                puVar30 = puVar26;
                puVar22 = puVar34;
                FUN_100434128(puVar26,puVar34,puVar25);
                if ((((ulong)puVar22 & 1) == 0) || (puVar30 == (undefined *)0x0)) {
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(undefined8 **)(pcVar24 + -0x20) = puVar19;
                  *(undefined **)(pcVar24 + -0x18) = puVar26;
                  *(undefined **)(pcVar24 + -0x10) = puVar34;
                  *(undefined **)(pcVar24 + -8) = puVar25;
                  uStack_2e8 = uStack_1a8;
                  local_2f0 = local_1b0;
                  uStack_2d8 = uStack_198;
                  uStack_2e0 = uStack_1a0;
                  uStack_2c8 = uStack_188;
                  local_2d0 = local_190;
                  local_2c0 = local_180;
                  uStack_328 = uStack_1e8;
                  local_330 = local_1f0;
                  uStack_318 = uStack_1d8;
                  uStack_320 = uStack_1e0;
                  uStack_308 = uStack_1c8;
                  local_310 = local_1d0;
                  uStack_2f8 = uStack_1b8;
                  uStack_300 = uStack_1c0;
                  uStack_348 = uStack_208;
                  local_350 = local_210;
                  uStack_338 = uStack_1f8;
                  uStack_340 = uStack_200;
                  FUN_10004098c(&local_350,auStack_3e8);
                  FUN_1003fb4bc(FUN_100040980,pcVar24 + -0x30,0xd0000000000000a9,
                                (ulong)pcVar6 | 0x8000000000000000,local_4a8,
                                (ulong)local_460 | 0x8000000000000000,0x2d5,0);
                  FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                  pcVar10 = local_430;
                }
                else {
                  puVar30 = ppuVar20[7];
                  FUN_100434128(puVar26,puVar34,puVar25);
                  if (((ulong)puVar34 & 1) == 0) {
                    uVar29 = 0x3c;
                  }
                  else {
                    uVar29 = *(undefined4 *)(&DAT_100809f74 + (long)puVar26 * 4);
                  }
                  FUN_1000409c8(&local_210,&local_350);
                  _swift_retain(puVar30);
                  FUN_100083500(uVar29,local_43c);
                  FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                  _swift_release(puVar30);
                  pcVar10 = local_430;
                }
              }
            }
            puVar26 = ppuVar20[7];
            _swift_retain(puVar26);
            FUN_1000837f8(local_43c,0);
            _swift_release(puVar26);
          }
        }
LAB_10001b7c0:
        if ((((ppuVar20[0x21] == local_468) &&
             (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
            (lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                        _TtC14UURemoteServer15StreamerManager::dispatcher) +
                              _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
            lVar4 != 0)) &&
           (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c)) {
          FUN_10001e180(local_43c,puVar19,puVar7);
        }
      }
joined_r0x00010001b838:
      if (pcVar10 != (code *)0x0) {
LAB_10001cf34:
        (*pcVar10)(puVar7);
      }
      goto LAB_10001cf38;
    }
    _swift_bridgeObjectRetain(lVar4);
    uVar8 = _objc_msgSend((ID)param_3,"screenId");
    thunk_FUN_100152fd0(uVar8,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    if ((uVar8 & 1) != 0) goto LAB_10001b4a8;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(pcVar24 + -0x20) = uVar2;
    *(code **)(pcVar24 + -0x18) = param_3;
    *(long *)(pcVar24 + -0x10) = unaff_x20;
    FUN_1003fb48c(FUN_100040afc,pcVar24 + -0x30,0xd0000000000000a9,
                  (ulong)local_458 | 0x8000000000000000,0xd00000000000007a,
                  (ulong)local_460 | 0x8000000000000000,0x2f1,0);
    uVar8 = 0;
LAB_10001bc10:
    pcVar10 = local_430;
    _objc_msgSend((ID)param_3,"setVideoTrackIndex:",uVar8);
    FUN_10001ed58();
    IVar17 = _objc_msgSend((ID)param_3,"videoTrackIndex");
    if ((uint)IVar17 < 5) {
      local_4a8 = 0xd00000000000007a;
      local_4b0 = uVar8;
      local_4a0 = uVar9;
      IVar17 = _objc_msgSend((ID)param_3,"screenId");
      local_3ec = (int)IVar17;
      IVar17 = _objc_msgSend((ID)param_3,"screenId");
      IVar11 = _objc_msgSend((ID)param_3,"resolutionWidth");
      IVar12 = _objc_msgSend((ID)param_3,"resolutionHeight");
      IVar13 = _objc_msgSend((ID)param_3,"resolutionPixelWidth");
      IVar14 = _objc_msgSend((ID)param_3,"resolutionPixelHeight");
      FUN_10003990c(auStack_a0,IVar17);
      if (local_78 == '\x02') {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(pcVar24 + -0x10) = (int)IVar17;
        FUN_1003fb4ec(thunk_FUN_10003fe20,pcVar24 + -0x20,0xd0000000000000a9,
                      (ulong)local_458 | 0x8000000000000000,0xd000000000000042,0x800000010087a4a0,
                      0x5f0,0);
        bVar1 = false;
      }
      else {
        bVar1 = local_9c != (int)IVar11 || iStack_98 != (int)IVar12;
        if ((int)IVar13 != 0 || (int)IVar14 != 0) {
          bVar1 = iStack_90 != (int)IVar14 || (local_94 != (int)IVar13 || bVar1);
        }
      }
      IVar17 = _objc_msgSend((ID)param_3,"screenId");
      uVar15 = (ulong)local_478 & 0xffffffff | ((ulong)local_478 >> 0x20 & 1) << 0x20;
      FUN_10003f134(uVar15,IVar17);
      uVar8 = uVar15;
      FUN_10001920c();
      thunk_FUN_10004b080();
      uVar16 = _objc_msgSend((ID)param_3,"videoTrackIndex");
      thunk_FUN_100152fd0(uVar16,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      uVar2 = local_43c;
      if (((uVar16 & 1) == 0) || ((uVar15 & 1) == 0 && !bVar1)) {
        uVar8 = (ulong)local_43c;
        if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
           (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
          local_478 = (char *)((ulong)local_478 & 0xffffffff00000000);
          pcVar31 = local_458;
          uVar9 = local_4a8;
          pcVar6 = local_460;
        }
        else {
          uVar15 = _objc_msgSend((ID)param_3,"videoTrackIndex");
          FUN_10001efe0();
          if ((uVar15 >> 0x20 & 1) == 0) {
            IVar17 = _objc_msgSend((ID)param_3,"screenId");
            iVar28 = (int)uVar15;
            if ((int)IVar17 != iVar28) {
              FUN_10001920c();
              thunk_FUN_10004b080();
              uVar15 = _objc_msgSend((ID)param_3,"videoTrackIndex");
              thunk_FUN_100152fd0(uVar15,IVar17);
              _swift_bridgeObjectRelease(IVar17);
              if ((uVar15 & 1) == 0) {
                local_478 = (char *)((ulong)local_478 & 0xffffffff00000000);
                pcVar31 = local_458;
                uVar9 = local_4a8;
                pcVar6 = local_460;
              }
              else {
                lVar4 = *(long *)(unaff_x20 + 0x18);
                IVar17 = _objc_msgSend((ID)param_3,"videoTrackIndex");
                IVar17 = _objc_msgSend(*(ID *)(*(long *)(lVar4 + 0x10) +
                                              _TtC14UURemoteServer15StreamerManager::controlled),
                                       "ControlledStopVideoCapture:videoIndex:",uVar8,IVar17);
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(uint *)(pcVar24 + -0x10) = uVar2;
                *(undefined4 *)(pcVar24 + -0xc) = uVar27;
                FUN_1003fb48c(thunk_FUN_10003f65c,pcVar24 + -0x20,0xd000000000000095,
                              0x8000000100877f50,0xd00000000000001f,0x8000000100877ff0,0x18d,0);
                local_478 = pcVar24;
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(uint *)(pcVar24 + -0x20) = uVar2;
                *(int *)(pcVar24 + -0x1c) = iVar28;
                *(code **)(pcVar24 + -0x18) = param_3;
                uVar27 = (undefined4)IVar17;
                *(undefined4 *)(pcVar24 + -0x10) = uVar27;
                *(long *)(pcVar24 + -8) = unaff_x20;
                pcVar31 = local_458;
                pcVar6 = local_460;
                uVar9 = local_4a8;
                FUN_1003fb48c(FUN_100040ac0,pcVar24 + -0x30,0xd0000000000000a9,
                              (ulong)local_458 | 0x8000000000000000,local_4a8,
                              (ulong)local_460 | 0x8000000000000000,0x30f,0);
                pcVar24 = local_478;
                local_478 = (char *)CONCAT44(local_478._4_4_,1);
                local_3ec = iVar28;
              }
              goto LAB_10001c990;
            }
          }
          local_478 = (char *)((ulong)local_478 & 0xffffffff00000000);
          pcVar31 = local_458;
          uVar9 = local_4a8;
          pcVar6 = local_460;
        }
      }
      else {
        uVar16 = _objc_msgSend((ID)param_3,"videoTrackIndex");
        FUN_10001efe0();
        uVar2 = local_43c;
        uVar8 = (ulong)local_43c;
        if ((uVar16 >> 0x20 & 1) != 0) {
          uVar16 = _objc_msgSend((ID)param_3,"screenId");
        }
        local_3ec = (int)uVar16;
        lVar4 = *(long *)(unaff_x20 + 0x18);
        IVar17 = _objc_msgSend((ID)param_3,"videoTrackIndex");
        IVar17 = _objc_msgSend(*(ID *)(*(long *)(lVar4 + 0x10) +
                                      _TtC14UURemoteServer15StreamerManager::controlled),
                               "ControlledStopVideoCapture:videoIndex:",uVar8,IVar17);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(pcVar24 + -0x10) = uVar2;
        *(undefined4 *)(pcVar24 + -0xc) = uVar29;
        FUN_1003fb48c(thunk_FUN_10003f65c,pcVar24 + -0x20,0xd000000000000095,0x8000000100877f50,
                      0xd00000000000001f,0x8000000100877ff0,0x18d,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(uint *)(pcVar24 + -0x30) = uVar2;
        *(code **)(pcVar24 + -0x28) = param_3;
        *(int **)(pcVar24 + -0x20) = &local_3ec;
        pcVar24[-0x18] = (byte)uVar15 & 1;
        pcVar24[-0x17] = bVar1;
        uVar29 = (undefined4)IVar17;
        *(undefined4 *)(pcVar24 + -0x14) = uVar29;
        *(long *)(pcVar24 + -0x10) = unaff_x20;
        pcVar31 = local_458;
        pcVar6 = local_460;
        uVar9 = local_4a8;
        FUN_1003fb48c(FUN_100040ad4,pcVar24 + -0x40,0xd0000000000000a9,
                      (ulong)local_458 | 0x8000000000000000,local_4a8,
                      (ulong)local_460 | 0x8000000000000000,0x308,0);
        local_478 = (char *)CONCAT44(local_478._4_4_,1);
      }
LAB_10001c990:
      uVar15 = uVar8;
      FUN_10001adc4(uVar8,param_3,1);
      iVar3 = (int)uVar15;
      iVar28 = iVar3;
      (*(code *)PTR____chkstk_darwin_100995498)();
      iVar32 = (int)uVar8;
      *(int *)(pcVar24 + -0x20) = iVar32;
      *(code **)(pcVar24 + -0x18) = param_3;
      *(int *)(pcVar24 + -0x10) = iVar28;
      FUN_1003fb48c(FUN_100040a1c,pcVar24 + -0x30,0xd0000000000000a9,
                    (ulong)pcVar31 | 0x8000000000000000,uVar9,(ulong)pcVar6 | 0x8000000000000000,
                    0x314,0);
      if (iVar3 != 0) {
        _swift_release(ppuVar5);
        self = &objc::class_t::StartVideoCaptureConfig;
        _objc_allocWithZone();
        IVar17 = _objc_msgSend((ID)self,"init");
        FUN_100039cd0(param_3,IVar17);
        iVar28 = local_3ec;
        uVar9 = *(undefined8 *)(unaff_x20 + 0x108);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(int *)(pcVar24 + -0x20) = iVar32;
        *(ID *)(pcVar24 + -0x18) = IVar17;
        *(int *)(pcVar24 + -0x10) = iVar3;
        FUN_1003fb4bc(FUN_100040a2c,pcVar24 + -0x30,0xd0000000000000a9,
                      (ulong)pcVar31 | 0x8000000000000000,0xd0000000000000a9,0x800000010087bed0,
                      0x338,0);
        puVar7 = &DAT_100997520;
        _swift_allocObject(&DAT_100997520,0x18,7);
        _swift_weakInit(puVar7 + 0x10,unaff_x20);
        puVar26 = &DAT_1009977f0;
        _swift_allocObject(&DAT_1009977f0,0x60,7);
        pcVar24 = local_438;
        *(undefined **)(puVar26 + 0x10) = puVar7;
        *(code **)(puVar26 + 0x18) = FUN_100040898;
        *(char **)(puVar26 + 0x20) = local_438;
        *(undefined8 *)(puVar26 + 0x28) = uVar9;
        *(int *)(puVar26 + 0x30) = iVar32;
        *(ID *)(puVar26 + 0x38) = IVar17;
        *(ulong *)(puVar26 + 0x40) = local_4b0;
        *(int *)(puVar26 + 0x48) = iVar3;
        *(code **)(puVar26 + 0x50) = local_470;
        puVar26[0x58] = (char)local_478;
        *(int *)(puVar26 + 0x5c) = iVar28;
        local_140 = FUN_100040a78;
        local_160 = PTR___NSConcreteStackBlock_100995490;
        uStack_158 = 0x42000000;
        local_150 = FUN_1000acdb4;
        local_148 = &DAT_100997808;
        puStack_138 = puVar26;
        pvVar18 = __Block_copy(&local_160);
        _swift_retain(puVar7);
        _swift_retain(pcVar24);
        pcVar6 = local_490;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_490);
        local_210 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10003f7fc();
        puVar26 = &DAT_100a75a98;
        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
        puVar19 = &DAT_100a75aa0;
        FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
        lVar4 = local_480;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_480,&local_210,puVar26,puVar19,local_488,IVar17);
        __s8Dispatch0A8WorkItemCMa();
        _swift_allocObject();
        __s8Dispatch0A8WorkItemC3qos5flags5blockAcA0A3QoSV_AA0abC5FlagsVyyXBtcfc
                  (pcVar6,lVar4,pvVar18);
        puVar26 = puStack_138;
        _swift_release(puVar7);
        _swift_release(puVar26);
        (**(code **)(unaff_x20 + 0x50))(0x3ff0000000000000,pcVar6);
        _swift_release(pcVar24);
        goto LAB_10001cf70;
      }
      IVar17 = _objc_msgSend((ID)param_3,"screenId");
      pcVar10 = local_470;
      uVar15 = uVar8;
      FUN_10001f838(uVar8,local_470,IVar17);
      _swift_bridgeObjectRelease(pcVar10);
      local_160 = param_6;
      _swift_bridgeObjectRetain();
      FUN_10005f56c(uVar15);
      puVar7 = local_160;
      _swift_beginAccess(ppuVar5 + 2,auStack_408,0,0);
      ppuVar20 = ppuVar5 + 2;
      _swift_weakLoadStrong();
      pcVar10 = local_430;
      pcVar6 = local_460;
      if (ppuVar20 == (undefined **)0x0) goto LAB_10001cf48;
      if (((ppuVar20[7][0x14] & 1) == 0) ||
         (ppuVar21 = ppuVar20, FUN_100039b50(), ((ulong)ppuVar21 & 1) != 0)) {
        uStack_f8 = local_448[0xd];
        local_100 = local_448[0xc];
        uStack_198 = local_448[0xf];
        uStack_1a0 = local_448[0xe];
        uStack_108 = local_448[0xb];
        uStack_110 = local_448[10];
        uStack_1a8 = local_448[0xd];
        local_1b0 = local_448[0xc];
        uStack_e8 = local_448[0xf];
        uStack_f0 = local_448[0xe];
        uStack_188 = local_448[0x11];
        local_190 = local_448[0x10];
        puStack_138 = (undefined *)local_448[5];
        local_140 = (code *)local_448[4];
        uStack_1d8 = local_448[7];
        uStack_1e0 = local_448[6];
        local_148 = (undefined *)local_448[3];
        local_150 = (code *)local_448[2];
        uStack_1e8 = local_448[5];
        local_1f0 = local_448[4];
        uStack_128 = local_448[7];
        uStack_130 = local_448[6];
        uStack_1c8 = local_448[9];
        local_1d0 = local_448[8];
        uStack_118 = local_448[9];
        local_120 = local_448[8];
        uStack_1b8 = local_448[0xb];
        uStack_1c0 = local_448[10];
        uStack_208 = local_448[1];
        local_210 = (undefined *)*local_448;
        uStack_1f8 = local_448[3];
        uStack_200 = local_448[2];
        uStack_158 = local_448[1];
        local_160 = (undefined *)*local_448;
        uStack_d8 = local_448[0x11];
        local_e0 = local_448[0x10];
        local_180 = local_448[0x12];
        local_d0 = local_448[0x12];
        ppuVar21 = &local_160;
        FUN_100040934();
        if ((int)ppuVar21 != 1) {
          uStack_248 = uStack_f8;
          local_250 = local_100;
          uStack_238 = uStack_e8;
          uStack_240 = uStack_f0;
          uStack_228 = uStack_d8;
          local_230 = local_e0;
          local_220 = local_d0;
          puStack_288 = puStack_138;
          local_290 = local_140;
          uStack_278 = uStack_128;
          uStack_280 = uStack_130;
          uStack_268 = uStack_118;
          local_270 = local_120;
          uStack_258 = uStack_108;
          uStack_260 = uStack_110;
          uStack_2a8 = uStack_158;
          local_2b0 = local_160;
          puStack_298 = local_148;
          pcStack_2a0 = local_150;
          ppuVar21 = &local_2b0;
          FUN_100040948();
          if ((int)ppuVar21 == 0) {
            ppuVar21 = &local_2b0;
            FUN_100040964();
            puVar34 = ppuVar21[1];
            puVar26 = *ppuVar21;
            (*(code *)PTR____chkstk_darwin_100995498)(ppuVar21[2]);
            pcVar24[-0x40] = (char)local_494;
            *(int *)(pcVar24 + -0x3c) = iVar32;
            *(undefined8 **)(pcVar24 + -0x38) = local_448;
            *(undefined **)(pcVar24 + -0x28) = puVar34;
            *(undefined **)(pcVar24 + -0x30) = puVar26;
            *(undefined8 *)(pcVar24 + -0x20) = extraout_x8_04;
            *(code **)(pcVar24 + -0x18) = param_3;
            *(undefined **)(pcVar24 + -0x10) = puVar7;
            uStack_2e8 = uStack_1a8;
            local_2f0 = local_1b0;
            uStack_2d8 = uStack_198;
            uStack_2e0 = uStack_1a0;
            uStack_2c8 = uStack_188;
            local_2d0 = local_190;
            local_2c0 = local_180;
            uStack_328 = uStack_1e8;
            local_330 = local_1f0;
            uStack_318 = uStack_1d8;
            uStack_320 = uStack_1e0;
            uStack_308 = uStack_1c8;
            local_310 = local_1d0;
            uStack_2f8 = uStack_1b8;
            uStack_300 = uStack_1c0;
            uStack_348 = uStack_208;
            local_350 = local_210;
            uStack_338 = uStack_1f8;
            uStack_340 = uStack_200;
            FUN_10004098c(&local_350,auStack_3e8);
            FUN_1003fb45c(thunk_FUN_100040b9c,pcVar24 + -0x50,0xd0000000000000a9,
                          (ulong)local_458 | 0x8000000000000000,local_4a8,
                          (ulong)pcVar6 | 0x8000000000000000,0x2c4,0);
            ppuVar21 = &local_210;
            FUN_100040bb4(ppuVar21,&DAT_100a75b90,&DAT_100809c10);
            pcVar10 = local_430;
          }
        }
      }
      if (((ulong)local_450 & 1) == 0) goto joined_r0x00010001b838;
      if (*(long *)(puVar7 + 0x10) == 0) {
        if (ppuVar20[7][0x14] == '\x01') {
          FUN_100039b50();
          if (((ulong)ppuVar21 & 1) == 0) goto LAB_10001cebc;
          iVar28 = -1;
        }
        else {
          iVar28 = *(int *)(ppuVar20[7] + 0x10);
        }
        IVar17 = _objc_msgSend((ID)param_3,"screenId");
        if ((((iVar28 == (int)IVar17) && (ppuVar20[0x21] == local_468)) &&
            (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
           ((lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                        _TtC14UURemoteServer15StreamerManager::dispatcher) +
                              _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
            lVar4 != 0 &&
            (*(int *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar32)))) {
          uStack_f8 = local_448[0xd];
          local_100 = local_448[0xc];
          uStack_198 = local_448[0xf];
          uStack_1a0 = local_448[0xe];
          uStack_108 = local_448[0xb];
          uStack_110 = local_448[10];
          uStack_1a8 = local_448[0xd];
          local_1b0 = local_448[0xc];
          uStack_e8 = local_448[0xf];
          uStack_f0 = local_448[0xe];
          uStack_188 = local_448[0x11];
          local_190 = local_448[0x10];
          puStack_138 = (undefined *)local_448[5];
          local_140 = (code *)local_448[4];
          uStack_1d8 = local_448[7];
          uStack_1e0 = local_448[6];
          local_148 = (undefined *)local_448[3];
          local_150 = (code *)local_448[2];
          uStack_1e8 = local_448[5];
          local_1f0 = local_448[4];
          uStack_128 = local_448[7];
          uStack_130 = local_448[6];
          uStack_1c8 = local_448[9];
          local_1d0 = local_448[8];
          uStack_118 = local_448[9];
          local_120 = local_448[8];
          uStack_1b8 = local_448[0xb];
          uStack_1c0 = local_448[10];
          uStack_208 = local_448[1];
          local_210 = (undefined *)*local_448;
          uStack_1f8 = local_448[3];
          uStack_200 = local_448[2];
          uStack_158 = local_448[1];
          local_160 = (undefined *)*local_448;
          uStack_d8 = local_448[0x11];
          local_e0 = local_448[0x10];
          local_180 = local_448[0x12];
          local_d0 = local_448[0x12];
          iVar28 = (int)&local_160;
          FUN_100040934();
          if (iVar28 != 1) {
            uStack_248 = uStack_f8;
            local_250 = local_100;
            uStack_238 = uStack_e8;
            uStack_240 = uStack_f0;
            uStack_228 = uStack_d8;
            local_230 = local_e0;
            local_220 = local_d0;
            puStack_288 = puStack_138;
            local_290 = local_140;
            uStack_278 = uStack_128;
            uStack_280 = uStack_130;
            uStack_268 = uStack_118;
            local_270 = local_120;
            uStack_258 = uStack_108;
            uStack_260 = uStack_110;
            uStack_2a8 = uStack_158;
            local_2b0 = local_160;
            puStack_298 = local_148;
            pcStack_2a0 = local_150;
            iVar28 = (int)&local_2b0;
            FUN_100040948();
            puVar19 = local_448;
            if (iVar28 == 0) {
              ppuVar21 = &local_2b0;
              FUN_100040964();
              puVar26 = *ppuVar21;
              puVar34 = ppuVar21[1];
              puVar25 = ppuVar21[2];
              puVar30 = puVar26;
              puVar22 = puVar34;
              FUN_100434128(puVar26,puVar34,puVar25);
              if ((((ulong)puVar22 & 1) == 0) || (puVar30 == (undefined *)0x0)) {
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(undefined8 **)(pcVar24 + -0x20) = puVar19;
                *(undefined **)(pcVar24 + -0x18) = puVar26;
                *(undefined **)(pcVar24 + -0x10) = puVar34;
                *(undefined **)(pcVar24 + -8) = puVar25;
                uStack_2e8 = uStack_1a8;
                local_2f0 = local_1b0;
                uStack_2d8 = uStack_198;
                uStack_2e0 = uStack_1a0;
                uStack_2c8 = uStack_188;
                local_2d0 = local_190;
                local_2c0 = local_180;
                uStack_328 = uStack_1e8;
                local_330 = local_1f0;
                uStack_318 = uStack_1d8;
                uStack_320 = uStack_1e0;
                uStack_308 = uStack_1c8;
                local_310 = local_1d0;
                uStack_2f8 = uStack_1b8;
                uStack_300 = uStack_1c0;
                uStack_348 = uStack_208;
                local_350 = local_210;
                uStack_338 = uStack_1f8;
                uStack_340 = uStack_200;
                FUN_10004098c(&local_350,auStack_3e8);
                FUN_1003fb4bc(thunk_FUN_100040980,pcVar24 + -0x30,0xd0000000000000a9,
                              (ulong)local_458 | 0x8000000000000000,local_4a8,
                              (ulong)local_460 | 0x8000000000000000,0x2d5,0);
                FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                uVar8 = (ulong)local_43c;
                pcVar10 = local_430;
              }
              else {
                puVar30 = ppuVar20[7];
                FUN_100434128(puVar26,puVar34,puVar25);
                if (((ulong)puVar34 & 1) == 0) {
                  uVar29 = 0x3c;
                }
                else {
                  uVar29 = *(undefined4 *)(&DAT_100809f74 + (long)puVar26 * 4);
                }
                FUN_1000409c8(&local_210,&local_350);
                _swift_retain(puVar30);
                uVar8 = (ulong)local_43c;
                FUN_100083500(uVar29,uVar8);
                FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                _swift_release(puVar30);
                pcVar10 = local_430;
              }
            }
          }
          puVar26 = ppuVar20[7];
          _swift_retain(puVar26);
          FUN_1000837f8(uVar8,0);
          _swift_release(puVar26);
        }
      }
LAB_10001cebc:
      if ((((ppuVar20[0x21] == local_468) &&
           (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
          (lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                      _TtC14UURemoteServer15StreamerManager::dispatcher) +
                            _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
          lVar4 != 0)) &&
         (*(int *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == (int)uVar8)) {
        FUN_10001e180(uVar8,local_448,puVar7);
      }
      goto joined_r0x00010001b838;
    }
    _swift_bridgeObjectRelease(local_470);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(uint *)(pcVar24 + -0x20) = uVar2;
    *(code **)(pcVar24 + -0x18) = param_3;
    *(long *)(pcVar24 + -0x10) = unaff_x20;
    FUN_1003fb4ec(FUN_100040af0,pcVar24 + -0x30,0xd0000000000000a9,
                  (ulong)local_458 | 0x8000000000000000,0xd00000000000007a,
                  (ulong)local_460 | 0x8000000000000000,0x2fd,0);
    puVar7 = &DAT_100a75b88;
    FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x40) = 0xe000000000000000;
    *(undefined8 *)(puVar7 + 0x50) = 0xc000000000000000;
    *(undefined8 *)(puVar7 + 0x48) = 0;
    local_160 = param_6;
    _swift_bridgeObjectRetain();
    FUN_10005f56c(puVar7);
    puVar7 = local_160;
    _swift_beginAccess(ppuVar5 + 2,auStack_a0,0,0);
    ppuVar20 = ppuVar5 + 2;
    _swift_weakLoadStrong();
    puVar19 = local_448;
    if (ppuVar20 != (undefined **)0x0) {
      local_4a0 = uVar9;
      if (((ppuVar20[7][0x14] & 1) == 0) ||
         (ppuVar21 = ppuVar20, FUN_100039b50(), ((ulong)ppuVar21 & 1) != 0)) {
        uStack_f8 = puVar19[0xd];
        local_100 = puVar19[0xc];
        uStack_198 = puVar19[0xf];
        uStack_1a0 = puVar19[0xe];
        uStack_108 = puVar19[0xb];
        uStack_110 = puVar19[10];
        uStack_1a8 = puVar19[0xd];
        local_1b0 = puVar19[0xc];
        uStack_e8 = puVar19[0xf];
        uStack_f0 = puVar19[0xe];
        uStack_188 = puVar19[0x11];
        local_190 = puVar19[0x10];
        puStack_138 = (undefined *)puVar19[5];
        local_140 = (code *)puVar19[4];
        uStack_1d8 = puVar19[7];
        uStack_1e0 = puVar19[6];
        local_148 = (undefined *)puVar19[3];
        local_150 = (code *)puVar19[2];
        uStack_1e8 = puVar19[5];
        local_1f0 = puVar19[4];
        uStack_128 = puVar19[7];
        uStack_130 = puVar19[6];
        uStack_1c8 = puVar19[9];
        local_1d0 = puVar19[8];
        uStack_118 = puVar19[9];
        local_120 = puVar19[8];
        uStack_1b8 = puVar19[0xb];
        uStack_1c0 = puVar19[10];
        uStack_208 = puVar19[1];
        local_210 = (undefined *)*puVar19;
        uStack_1f8 = puVar19[3];
        uStack_200 = puVar19[2];
        uStack_158 = puVar19[1];
        local_160 = (undefined *)*puVar19;
        uStack_d8 = puVar19[0x11];
        local_e0 = puVar19[0x10];
        local_180 = puVar19[0x12];
        local_d0 = puVar19[0x12];
        ppuVar21 = &local_160;
        FUN_100040934();
        if ((int)ppuVar21 != 1) {
          uStack_248 = uStack_f8;
          local_250 = local_100;
          uStack_238 = uStack_e8;
          uStack_240 = uStack_f0;
          uStack_228 = uStack_d8;
          local_230 = local_e0;
          local_220 = local_d0;
          puStack_288 = puStack_138;
          local_290 = local_140;
          uStack_278 = uStack_128;
          uStack_280 = uStack_130;
          uStack_268 = uStack_118;
          local_270 = local_120;
          uStack_258 = uStack_108;
          uStack_260 = uStack_110;
          uStack_2a8 = uStack_158;
          local_2b0 = local_160;
          puStack_298 = local_148;
          pcStack_2a0 = local_150;
          ppuVar21 = &local_2b0;
          FUN_100040948();
          if ((int)ppuVar21 == 0) {
            ppuVar21 = &local_2b0;
            FUN_100040964();
            puVar34 = ppuVar21[1];
            puVar26 = *ppuVar21;
            (*(code *)PTR____chkstk_darwin_100995498)(ppuVar21[2]);
            pcVar24[-0x40] = (char)local_494;
            *(uint *)(pcVar24 + -0x3c) = local_43c;
            *(undefined8 **)(pcVar24 + -0x38) = puVar19;
            *(undefined **)(pcVar24 + -0x28) = puVar34;
            *(undefined **)(pcVar24 + -0x30) = puVar26;
            *(undefined8 *)(pcVar24 + -0x20) = extraout_x8_03;
            *(code **)(pcVar24 + -0x18) = param_3;
            *(undefined **)(pcVar24 + -0x10) = puVar7;
            uStack_2e8 = uStack_1a8;
            local_2f0 = local_1b0;
            uStack_2d8 = uStack_198;
            uStack_2e0 = uStack_1a0;
            uStack_2c8 = uStack_188;
            local_2d0 = local_190;
            local_2c0 = local_180;
            uStack_328 = uStack_1e8;
            local_330 = local_1f0;
            uStack_318 = uStack_1d8;
            uStack_320 = uStack_1e0;
            uStack_308 = uStack_1c8;
            local_310 = local_1d0;
            uStack_2f8 = uStack_1b8;
            uStack_300 = uStack_1c0;
            uStack_348 = uStack_208;
            local_350 = local_210;
            uStack_338 = uStack_1f8;
            uStack_340 = uStack_200;
            FUN_10004098c(&local_350,auStack_3e8);
            FUN_1003fb45c(thunk_FUN_100040b9c,pcVar24 + -0x50,0xd0000000000000a9,
                          (ulong)local_458 | 0x8000000000000000,0xd00000000000007a,
                          (ulong)local_460 | 0x8000000000000000,0x2c4,0);
            ppuVar21 = &local_210;
            FUN_100040bb4(ppuVar21,&DAT_100a75b90,&DAT_100809c10);
          }
        }
      }
      if (((ulong)local_450 & 1) != 0) {
        if (*(long *)(puVar7 + 0x10) == 0) {
          if (ppuVar20[7][0x14] == '\x01') {
            FUN_100039b50();
            if (((ulong)ppuVar21 & 1) == 0) goto LAB_10001bf10;
            iVar28 = -1;
          }
          else {
            iVar28 = *(int *)(ppuVar20[7] + 0x10);
          }
          IVar17 = _objc_msgSend((ID)param_3,"screenId");
          if (((iVar28 == (int)IVar17) && (ppuVar20[0x21] == local_468)) &&
             ((*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                        _TtC14UURemoteServer15StreamerManager::dispatcher) != 0 &&
              ((lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                           _TtC14UURemoteServer15StreamerManager::dispatcher) +
                                 _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
               lVar4 != 0 &&
               (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c
               )))))) {
            uStack_f8 = puVar19[0xd];
            local_100 = puVar19[0xc];
            uStack_198 = puVar19[0xf];
            uStack_1a0 = puVar19[0xe];
            uStack_108 = puVar19[0xb];
            uStack_110 = puVar19[10];
            uStack_1a8 = puVar19[0xd];
            local_1b0 = puVar19[0xc];
            uStack_e8 = puVar19[0xf];
            uStack_f0 = puVar19[0xe];
            uStack_188 = puVar19[0x11];
            local_190 = puVar19[0x10];
            puStack_138 = (undefined *)puVar19[5];
            local_140 = (code *)puVar19[4];
            uStack_1d8 = puVar19[7];
            uStack_1e0 = puVar19[6];
            local_148 = (undefined *)puVar19[3];
            local_150 = (code *)puVar19[2];
            uStack_1e8 = puVar19[5];
            local_1f0 = puVar19[4];
            uStack_128 = puVar19[7];
            uStack_130 = puVar19[6];
            uStack_1c8 = puVar19[9];
            local_1d0 = puVar19[8];
            uStack_118 = puVar19[9];
            local_120 = puVar19[8];
            uStack_1b8 = puVar19[0xb];
            uStack_1c0 = puVar19[10];
            uStack_208 = puVar19[1];
            local_210 = (undefined *)*puVar19;
            uStack_1f8 = puVar19[3];
            uStack_200 = puVar19[2];
            uStack_158 = puVar19[1];
            local_160 = (undefined *)*puVar19;
            uStack_d8 = puVar19[0x11];
            local_e0 = puVar19[0x10];
            local_180 = puVar19[0x12];
            local_d0 = puVar19[0x12];
            iVar28 = (int)&local_160;
            FUN_100040934();
            if (iVar28 != 1) {
              uStack_248 = uStack_f8;
              local_250 = local_100;
              uStack_238 = uStack_e8;
              uStack_240 = uStack_f0;
              uStack_228 = uStack_d8;
              local_230 = local_e0;
              local_220 = local_d0;
              puStack_288 = puStack_138;
              local_290 = local_140;
              uStack_278 = uStack_128;
              uStack_280 = uStack_130;
              uStack_268 = uStack_118;
              local_270 = local_120;
              uStack_258 = uStack_108;
              uStack_260 = uStack_110;
              uStack_2a8 = uStack_158;
              local_2b0 = local_160;
              puStack_298 = local_148;
              pcStack_2a0 = local_150;
              iVar28 = (int)&local_2b0;
              FUN_100040948();
              uVar2 = local_43c;
              if (iVar28 == 0) {
                ppuVar21 = &local_2b0;
                FUN_100040964();
                puVar26 = *ppuVar21;
                puVar34 = ppuVar21[1];
                puVar25 = ppuVar21[2];
                puVar30 = puVar26;
                puVar22 = puVar34;
                FUN_100434128(puVar26,puVar34,puVar25);
                if ((((ulong)puVar22 & 1) == 0) || (puVar30 == (undefined *)0x0)) {
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(undefined8 **)(pcVar24 + -0x20) = puVar19;
                  *(undefined **)(pcVar24 + -0x18) = puVar26;
                  *(undefined **)(pcVar24 + -0x10) = puVar34;
                  *(undefined **)(pcVar24 + -8) = puVar25;
                  uStack_2e8 = uStack_1a8;
                  local_2f0 = local_1b0;
                  uStack_2d8 = uStack_198;
                  uStack_2e0 = uStack_1a0;
                  uStack_2c8 = uStack_188;
                  local_2d0 = local_190;
                  local_2c0 = local_180;
                  uStack_328 = uStack_1e8;
                  local_330 = local_1f0;
                  uStack_318 = uStack_1d8;
                  uStack_320 = uStack_1e0;
                  uStack_308 = uStack_1c8;
                  local_310 = local_1d0;
                  uStack_2f8 = uStack_1b8;
                  uStack_300 = uStack_1c0;
                  uStack_348 = uStack_208;
                  local_350 = local_210;
                  uStack_338 = uStack_1f8;
                  uStack_340 = uStack_200;
                  FUN_10004098c(&local_350,auStack_3e8);
                  FUN_1003fb4bc(thunk_FUN_100040980,pcVar24 + -0x30,0xd0000000000000a9,
                                (ulong)local_458 | 0x8000000000000000,0xd00000000000007a,
                                (ulong)local_460 | 0x8000000000000000,0x2d5,0);
                  FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                  pcVar10 = local_430;
                }
                else {
                  puVar30 = ppuVar20[7];
                  FUN_100434128(puVar26,puVar34,puVar25);
                  if (((ulong)puVar34 & 1) == 0) {
                    uVar29 = 0x3c;
                  }
                  else {
                    uVar29 = *(undefined4 *)(&DAT_100809f74 + (long)puVar26 * 4);
                  }
                  FUN_1000409c8(&local_210,&local_350);
                  _swift_retain(puVar30);
                  FUN_100083500(uVar29,uVar2);
                  FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                  _swift_release(puVar30);
                  pcVar10 = local_430;
                }
              }
            }
            puVar26 = ppuVar20[7];
            _swift_retain(puVar26);
            FUN_1000837f8(local_43c,0);
            _swift_release(puVar26);
          }
        }
LAB_10001bf10:
        if ((((ppuVar20[0x21] == local_468) &&
             (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
            (lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                        _TtC14UURemoteServer15StreamerManager::dispatcher) +
                              _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
            lVar4 != 0)) &&
           (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c)) {
          FUN_10001e180(local_43c,puVar19,puVar7);
        }
      }
      if (pcVar10 == (code *)0x0) goto LAB_10001cf38;
      goto LAB_10001cf34;
    }
joined_r0x00010001c2c4:
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(puVar7);
    }
  }
  else {
    uVar33 = *(undefined4 *)(lVar4 + 0x10);
    _swift_retain();
    FUN_1000408d0(param_2,&local_160);
    FUN_10004090c(param_7,param_8);
    _swift_bridgeObjectRetain();
LAB_10001b378:
    uVar8 = _objc_msgSend((ID)param_3,"screenId");
    if ((*(byte *)(lVar4 + 0x14) & 1) == 0) {
      if ((*(int *)(lVar4 + 0x10) < 0) || ((int)uVar8 != *(int *)(lVar4 + 0x10)))
      goto LAB_10001b844;
      goto LAB_10001b3ac;
    }
    FUN_100039b50();
    if ((uVar8 & 1) == 0) goto LAB_10001b3ac;
LAB_10001b844:
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(code **)(pcVar24 + -0x10) = param_3;
    *(undefined4 *)(pcVar24 + -8) = uVar33;
    FUN_1003fb4ec(FUN_100040b08,pcVar24 + -0x20,0xd0000000000000a9,0x8000000100877660,
                  0xd00000000000007a,0x800000010087be50,0x2e1,0);
    puVar26 = &DAT_100a75b88;
    FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
    _swift_allocObject();
    *(undefined8 *)(puVar26 + 0x18) = 2;
    *(undefined8 *)(puVar26 + 0x10) = 1;
    *(undefined4 *)(puVar26 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar26 + 0x28) = 0;
    *(undefined8 *)(puVar26 + 0x30) = 0xe000000000000000;
    *(undefined8 *)(puVar26 + 0x38) = 0;
    *(undefined8 *)(puVar26 + 0x40) = 0xe000000000000000;
    *(undefined8 *)(puVar26 + 0x50) = 0xc000000000000000;
    *(undefined8 *)(puVar26 + 0x48) = 0;
    local_160 = puVar7;
    _swift_bridgeObjectRetain(puVar7);
    FUN_10005f56c(puVar26);
    puVar7 = local_160;
    _swift_beginAccess(ppuVar5 + 2,auStack_a0,0,0);
    ppuVar20 = ppuVar5 + 2;
    _swift_weakLoadStrong();
    puVar19 = local_448;
    if (ppuVar20 == (undefined **)0x0) {
LAB_10001cf48:
      if (local_430 != (code *)0x0) {
        (*local_430)(puVar7);
      }
      goto LAB_10001cf60;
    }
    if (((ppuVar20[7][0x14] & 1) == 0) ||
       (ppuVar21 = ppuVar20, FUN_100039b50(), ((ulong)ppuVar21 & 1) != 0)) {
      uStack_f8 = puVar19[0xd];
      local_100 = puVar19[0xc];
      uStack_198 = puVar19[0xf];
      uStack_1a0 = puVar19[0xe];
      uStack_108 = puVar19[0xb];
      uStack_110 = puVar19[10];
      uStack_1a8 = puVar19[0xd];
      local_1b0 = puVar19[0xc];
      uStack_e8 = puVar19[0xf];
      uStack_f0 = puVar19[0xe];
      uStack_188 = puVar19[0x11];
      local_190 = puVar19[0x10];
      puStack_138 = (undefined *)puVar19[5];
      local_140 = (code *)puVar19[4];
      uStack_1d8 = puVar19[7];
      uStack_1e0 = puVar19[6];
      local_148 = (undefined *)puVar19[3];
      local_150 = (code *)puVar19[2];
      uStack_1e8 = puVar19[5];
      local_1f0 = puVar19[4];
      uStack_128 = puVar19[7];
      uStack_130 = puVar19[6];
      uStack_1c8 = puVar19[9];
      local_1d0 = puVar19[8];
      uStack_118 = puVar19[9];
      local_120 = puVar19[8];
      uStack_1b8 = puVar19[0xb];
      uStack_1c0 = puVar19[10];
      uStack_208 = puVar19[1];
      local_210 = (undefined *)*puVar19;
      uStack_1f8 = puVar19[3];
      uStack_200 = puVar19[2];
      uStack_158 = puVar19[1];
      local_160 = (undefined *)*puVar19;
      uStack_d8 = puVar19[0x11];
      local_e0 = puVar19[0x10];
      local_180 = puVar19[0x12];
      local_d0 = puVar19[0x12];
      ppuVar21 = &local_160;
      FUN_100040934();
      if ((int)ppuVar21 != 1) {
        uStack_248 = uStack_f8;
        local_250 = local_100;
        uStack_238 = uStack_e8;
        uStack_240 = uStack_f0;
        uStack_228 = uStack_d8;
        local_230 = local_e0;
        local_220 = local_d0;
        puStack_288 = puStack_138;
        local_290 = local_140;
        uStack_278 = uStack_128;
        uStack_280 = uStack_130;
        uStack_268 = uStack_118;
        local_270 = local_120;
        uStack_258 = uStack_108;
        uStack_260 = uStack_110;
        uStack_2a8 = uStack_158;
        local_2b0 = local_160;
        puStack_298 = local_148;
        pcStack_2a0 = local_150;
        ppuVar21 = &local_2b0;
        FUN_100040948();
        if ((int)ppuVar21 == 0) {
          ppuVar21 = &local_2b0;
          FUN_100040964();
          puVar34 = ppuVar21[1];
          puVar26 = *ppuVar21;
          local_458 = pcVar24;
          (*(code *)PTR____chkstk_darwin_100995498)(ppuVar21[2]);
          pcVar24[-0x40] = (char)local_494;
          *(uint *)(pcVar24 + -0x3c) = local_43c;
          *(undefined8 **)(pcVar24 + -0x38) = puVar19;
          *(undefined **)(pcVar24 + -0x28) = puVar34;
          *(undefined **)(pcVar24 + -0x30) = puVar26;
          *(undefined8 *)(pcVar24 + -0x20) = extraout_x8_02;
          *(code **)(pcVar24 + -0x18) = param_3;
          *(undefined **)(pcVar24 + -0x10) = puVar7;
          uStack_2e8 = uStack_1a8;
          local_2f0 = local_1b0;
          uStack_2d8 = uStack_198;
          uStack_2e0 = uStack_1a0;
          uStack_2c8 = uStack_188;
          local_2d0 = local_190;
          local_2c0 = local_180;
          uStack_328 = uStack_1e8;
          local_330 = local_1f0;
          uStack_318 = uStack_1d8;
          uStack_320 = uStack_1e0;
          uStack_308 = uStack_1c8;
          local_310 = local_1d0;
          uStack_2f8 = uStack_1b8;
          uStack_300 = uStack_1c0;
          uStack_348 = uStack_208;
          local_350 = local_210;
          uStack_338 = uStack_1f8;
          uStack_340 = uStack_200;
          FUN_10004098c(&local_350,auStack_3e8);
          FUN_1003fb45c(thunk_FUN_100040b9c,pcVar24 + -0x50,0xd0000000000000a9,0x8000000100877660,
                        0xd00000000000007a,0x800000010087be50,0x2c4,0);
          ppuVar21 = &local_210;
          FUN_100040bb4(ppuVar21,&DAT_100a75b90,&DAT_100809c10);
          pcVar24 = local_458;
        }
      }
    }
    if (((ulong)local_450 & 1) != 0) {
      if (*(long *)(puVar7 + 0x10) == 0) {
        if (ppuVar20[7][0x14] == '\x01') {
          FUN_100039b50();
          if (((ulong)ppuVar21 & 1) == 0) goto LAB_10001bb20;
          iVar28 = -1;
        }
        else {
          iVar28 = *(int *)(ppuVar20[7] + 0x10);
        }
        IVar17 = _objc_msgSend((ID)param_3,"screenId");
        if ((((iVar28 == (int)IVar17) && (ppuVar20[0x21] == local_468)) &&
            (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                      _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
           ((lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                        _TtC14UURemoteServer15StreamerManager::dispatcher) +
                              _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
            lVar4 != 0 &&
            (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c)))
           ) {
          uStack_f8 = puVar19[0xd];
          local_100 = puVar19[0xc];
          uStack_198 = puVar19[0xf];
          uStack_1a0 = puVar19[0xe];
          uStack_108 = puVar19[0xb];
          uStack_110 = puVar19[10];
          uStack_1a8 = puVar19[0xd];
          local_1b0 = puVar19[0xc];
          uStack_e8 = puVar19[0xf];
          uStack_f0 = puVar19[0xe];
          uStack_188 = puVar19[0x11];
          local_190 = puVar19[0x10];
          puStack_138 = (undefined *)puVar19[5];
          local_140 = (code *)puVar19[4];
          uStack_1d8 = puVar19[7];
          uStack_1e0 = puVar19[6];
          local_148 = (undefined *)puVar19[3];
          local_150 = (code *)puVar19[2];
          uStack_1e8 = puVar19[5];
          local_1f0 = puVar19[4];
          uStack_128 = puVar19[7];
          uStack_130 = puVar19[6];
          uStack_1c8 = puVar19[9];
          local_1d0 = puVar19[8];
          uStack_118 = puVar19[9];
          local_120 = puVar19[8];
          uStack_1b8 = puVar19[0xb];
          uStack_1c0 = puVar19[10];
          uStack_208 = puVar19[1];
          local_210 = (undefined *)*puVar19;
          uStack_1f8 = puVar19[3];
          uStack_200 = puVar19[2];
          uStack_158 = puVar19[1];
          local_160 = (undefined *)*puVar19;
          uStack_d8 = puVar19[0x11];
          local_e0 = puVar19[0x10];
          local_180 = puVar19[0x12];
          local_d0 = puVar19[0x12];
          iVar28 = (int)&local_160;
          FUN_100040934();
          if (iVar28 != 1) {
            uStack_248 = uStack_f8;
            local_250 = local_100;
            uStack_238 = uStack_e8;
            uStack_240 = uStack_f0;
            uStack_228 = uStack_d8;
            local_230 = local_e0;
            local_220 = local_d0;
            puStack_288 = puStack_138;
            local_290 = local_140;
            uStack_278 = uStack_128;
            uStack_280 = uStack_130;
            uStack_268 = uStack_118;
            local_270 = local_120;
            uStack_258 = uStack_108;
            uStack_260 = uStack_110;
            uStack_2a8 = uStack_158;
            local_2b0 = local_160;
            puStack_298 = local_148;
            pcStack_2a0 = local_150;
            iVar28 = (int)&local_2b0;
            FUN_100040948();
            if (iVar28 == 0) {
              ppuVar21 = &local_2b0;
              FUN_100040964();
              puVar26 = *ppuVar21;
              puVar34 = ppuVar21[1];
              puVar25 = ppuVar21[2];
              puVar30 = puVar26;
              puVar22 = puVar34;
              FUN_100434128(puVar26,puVar34,puVar25);
              if ((((ulong)puVar22 & 1) == 0) || (puVar30 == (undefined *)0x0)) {
                local_450 = pcVar24;
                (*(code *)PTR____chkstk_darwin_100995498)();
                *(undefined8 **)(pcVar24 + -0x20) = puVar19;
                *(undefined **)(pcVar24 + -0x18) = puVar26;
                *(undefined **)(pcVar24 + -0x10) = puVar34;
                *(undefined **)(pcVar24 + -8) = puVar25;
                uStack_2e8 = uStack_1a8;
                local_2f0 = local_1b0;
                uStack_2d8 = uStack_198;
                uStack_2e0 = uStack_1a0;
                uStack_2c8 = uStack_188;
                local_2d0 = local_190;
                local_2c0 = local_180;
                uStack_328 = uStack_1e8;
                local_330 = local_1f0;
                uStack_318 = uStack_1d8;
                uStack_320 = uStack_1e0;
                uStack_308 = uStack_1c8;
                local_310 = local_1d0;
                uStack_2f8 = uStack_1b8;
                uStack_300 = uStack_1c0;
                uStack_348 = uStack_208;
                local_350 = local_210;
                uStack_338 = uStack_1f8;
                uStack_340 = uStack_200;
                FUN_10004098c(&local_350,auStack_3e8);
                FUN_1003fb4bc(thunk_FUN_100040980,pcVar24 + -0x30,0xd0000000000000a9,
                              0x8000000100877660,0xd00000000000007a,0x800000010087be50,0x2d5,0);
                FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
              }
              else {
                puVar30 = ppuVar20[7];
                FUN_100434128(puVar26,puVar34,puVar25);
                uVar2 = local_43c;
                if (((ulong)puVar34 & 1) == 0) {
                  uVar29 = 0x3c;
                }
                else {
                  uVar29 = *(undefined4 *)(&DAT_100809f74 + (long)puVar26 * 4);
                }
                FUN_1000409c8(&local_210,&local_350);
                _swift_retain(puVar30);
                FUN_100083500(uVar29,uVar2);
                FUN_100040bb4(&local_210,&DAT_100a75b90,&DAT_100809c10);
                _swift_release(puVar30);
              }
            }
          }
          puVar26 = ppuVar20[7];
          _swift_retain(puVar26);
          FUN_1000837f8(local_43c,0);
          _swift_release(puVar26);
        }
      }
LAB_10001bb20:
      if ((((ppuVar20[0x21] == local_468) &&
           (*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                     _TtC14UURemoteServer15StreamerManager::dispatcher) != 0)) &&
          (lVar4 = *(long *)(*(long *)(*(long *)(ppuVar20[3] + 0x10) +
                                      _TtC14UURemoteServer15StreamerManager::dispatcher) +
                            _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
          lVar4 != 0)) &&
         (*(uint *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) == local_43c)) {
        FUN_10001e180(local_43c,puVar19,puVar7);
      }
    }
    if (local_430 != (code *)0x0) {
      (*local_430)(puVar7);
    }
LAB_10001cf38:
    _swift_release(ppuVar5);
    ppuVar5 = ppuVar20;
  }
LAB_10001cf60:
  _swift_release(ppuVar5);
  _swift_bridgeObjectRelease(puVar7);
  pcVar6 = local_438;
LAB_10001cf70:
  _swift_release(pcVar6);
  return;
}

