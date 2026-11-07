// rea decompile_all
// name: FUN_1000772e8
// address: 0x1000772e8
// body: available
// range: 0x1000772e8-0x100077ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000772e8(undefined *param_1,undefined *param_2,ulong param_3,undefined8 param_4,long param_5,
             undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_400 [8];
  undefined **local_3f8;
  long local_3f0;
  ulong local_3e8;
  long local_3e0;
  ulong uStack_3d8;
  undefined8 local_3d0;
  undefined *puStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 *local_388;
  undefined *local_380;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *local_338;
  undefined *local_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  long lStack_308;
  long local_300;
  ulong uStack_2f8;
  undefined8 local_2f0;
  long lStack_2e8;
  undefined1 local_2e0;
  undefined7 uStack_2df;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  long lStack_280;
  long local_278;
  ulong uStack_270;
  undefined8 local_268;
  long lStack_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *local_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *local_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b0 [24];
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long lStack_178;
  undefined8 local_170;
  long local_168;
  undefined1 local_160;
  long local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110;
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
  long lStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  
  lVar4 = 0;
  local_3d0 = param_4;
  puStack_3c8 = param_6;
  __ss6MirrorVMa();
  lVar15 = *(long *)(lVar4 + -8);
  puVar6 = auStack_400 + -(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(code **)(param_2 + 0x10);
  ppuVar5 = &local_240;
  local_228 = param_1;
  local_220 = param_2;
  FUN_100060d88(ppuVar5);
  (*pcVar16)(ppuVar5,param_1,param_2);
  puVar8 = local_228;
  FUN_10000eba0(&local_240,local_228);
  local_2b0 = puVar8;
  FUN_100060d88(&local_2c8);
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))();
  __ss6MirrorV10reflectingAByp_tcfC(puVar6,&local_2c8);
  ppuVar5 = &local_240;
  FUN_100001428();
  __ss6MirrorV8childrens13AnyCollectionVySSSg5label_yp5valuetGvg();
  (**(code **)(lVar15 + 8))(puVar6,lVar4);
  local_3f8 = ppuVar5;
  __ss15_AnySequenceBoxC13_makeIterators0aE0VyxGyFTj();
  local_388 = puVar6;
  __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&local_a0);
  if (lStack_78 == 0) {
    local_380 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_3e8 = 2 - (param_3 & 0xff);
    uStack_398 = 2;
    local_3a0 = 1;
    local_380 = PTR___swiftEmptyArrayStorage_1000f0740;
    local_3e0 = param_5;
    uStack_3d8 = param_3;
    do {
      uStack_d8 = uStack_98;
      local_e0 = local_a0;
      uStack_c8 = uStack_88;
      uStack_d0 = uStack_90;
      lStack_b8 = lStack_78;
      local_c0 = local_80;
      FUN_1000133cc(&local_e0,&local_240,&DAT_1001045d8,&DAT_1000d4c90);
      puVar10 = puStack_238;
      puVar8 = local_240;
      if (puStack_238 == (undefined *)0x0) {
        FUN_10001fc18(&local_e0,&DAT_1001045d8,&DAT_1000d4c90);
        ppuVar5 = &puStack_230;
LAB_100077444:
        FUN_100001428(ppuVar5);
      }
      else {
        FUN_100001428(&puStack_230);
        FUN_1000133cc(&local_e0,&local_240,&DAT_1001045d8,&DAT_1000d4c90);
        _swift_bridgeObjectRelease(puStack_238);
        puVar13 = &DAT_1001045e0;
        FUN_10000eb08(&DAT_1001045e0,&DAT_1000d4c98);
        puVar11 = PTR___sypN_1000f0728;
        ppuVar5 = &local_350;
        _swift_dynamicCast(ppuVar5,&puStack_230,PTR___sypN_1000f0728 + 8,puVar13,6);
        if (((ulong)ppuVar5 & 1) == 0) {
          local_330 = (undefined *)0x0;
          puStack_348 = (undefined *)0x0;
          local_350 = (undefined *)0x0;
          local_338 = (undefined *)0x0;
          puStack_340 = (undefined *)0x0;
          FUN_10001fc18(&local_350,&DAT_1001045e8,&DAT_1000d4ca0);
          FUN_100033a18(&uStack_d0,&local_240);
          puVar13 = &DAT_100104198;
          FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
          _swift_dynamicCast(&local_2c8,&local_240,puVar11 + 8,puVar13,7);
          puVar13 = local_2b0;
          FUN_10001fc18(&local_2c8,&DAT_100104198,&DAT_1000d5180);
          if (puVar13 == (undefined *)0x0) {
            uStack_f8 = 0;
            local_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
          }
          else {
            FUN_100033a18(&uStack_d0,&local_100);
          }
          uVar12 = local_3d0;
          FUN_100077ed0(local_3d0,param_5,puStack_3c8);
          FUN_100096cd8();
          local_190 = 0;
          local_188 = 0xe000000000000000;
          lStack_178 = 0;
          local_180 = 0;
          local_168 = 0;
          local_170 = 0;
          local_160 = 2;
          local_158 = 0;
          local_150 = 0;
          local_148 = 0;
          local_140 = 0xe000000000000000;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          uStack_128 = 0;
          local_118 = 2;
          local_110 = 0;
          uStack_108 = 0;
          FUN_10005fcbc(&local_190,&local_240);
          FUN_10005fcf0(&local_148);
          FUN_1000133cc(&local_100,auStack_1b0,&DAT_100104198,&DAT_1000d5180);
          local_3b0 = (undefined *)(ulong)(local_198 != 0);
          puVar13 = &DAT_100104190;
          FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
          _swift_allocObject();
          uVar7 = local_150;
          lVar15 = local_158;
          lVar4 = lStack_178;
          uVar17 = local_180;
          uVar2 = local_188;
          *(undefined8 *)(puVar13 + 0x18) = uStack_398;
          *(undefined8 *)(puVar13 + 0x10) = local_3a0;
          *(undefined **)(puVar13 + 0x20) = puVar8;
          *(undefined **)(puVar13 + 0x28) = puVar10;
          *(undefined8 *)(puVar13 + 0x30) = uVar12;
          local_3b8 = local_190;
          local_3c0 = uVar12;
          local_3a8 = puVar8;
          if (lStack_178 == 0) {
            local_3f0 = lStack_178;
            if (local_158 == 0) {
              _swift_bridgeObjectRetain(puVar10);
              _swift_bridgeObjectRetain(uVar12);
              _swift_bridgeObjectRetain(uVar2);
              lVar14 = -0xffffffffffffff9;
              uVar18 = 0xf000000000000007;
            }
            else {
              pcVar16 = *(code **)(local_150 + 0x20);
              _swift_bridgeObjectRetain(puVar10);
              _swift_bridgeObjectRetain(uVar12);
              _swift_bridgeObjectRetain(uVar2);
              lVar4 = lVar15;
              (*pcVar16)(lVar15,uVar7);
              lVar4 = *(long *)(lVar4 + 0x10);
              _swift_bridgeObjectRelease();
              bVar3 = lVar4 != 0;
              lVar14 = -0xffffffffffffff9;
              if (bVar3) {
                lVar14 = lVar15;
              }
              uVar18 = 0xf000000000000007;
              if (bVar3) {
                uVar18 = uVar7 | 0x8000000000000000;
              }
            }
            uVar17 = 0;
            lVar4 = local_3f0;
          }
          else if (local_158 == 0) {
            _swift_bridgeObjectRetain(puVar10);
            _swift_bridgeObjectRetain(uVar12);
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(lVar4);
            lVar14 = lVar15;
            uVar18 = 0;
          }
          else {
            pcVar16 = *(code **)(local_150 + 0x20);
            _swift_bridgeObjectRetain(puVar10);
            _swift_bridgeObjectRetain(uVar12);
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(lVar4);
            lVar14 = lVar15;
            (*pcVar16)(lVar15,uVar7);
            lVar14 = *(long *)(lVar14 + 0x10);
            _swift_bridgeObjectRelease();
            bVar3 = lVar14 != 0;
            lVar14 = 0;
            if (bVar3) {
              lVar14 = lVar15;
            }
            uVar18 = 0;
            if (bVar3) {
              uVar18 = uVar7 | 0x8000000000000000;
            }
          }
          uVar12 = 0;
          if (local_168 != 0) {
            uVar12 = local_170;
          }
          lVar15 = -0x2000000000000000;
          if (local_168 != 0) {
            lVar15 = local_168;
          }
          _swift_bridgeObjectRetain();
          FUN_10005fcf0(&local_190);
          puStack_348 = (undefined *)0x0;
          puStack_340 = (undefined *)0x0;
          local_350 = local_3b0;
          local_330 = PTR___swiftEmptyArrayStorage_1000f0740;
          uStack_328 = 0;
          local_320 = local_3b8;
          uStack_318 = uVar2;
          local_2e0 = local_160;
          local_2d8 = 0;
          local_2d0 = 0xe000000000000000;
          local_2c0 = 0;
          uStack_2b8 = 0;
          local_2c8 = local_3b0;
          puStack_2a8 = PTR___swiftEmptyArrayStorage_1000f0740;
          local_2a0 = 0;
          local_298 = local_3b8;
          uStack_290 = uVar2;
          local_258 = local_160;
          local_250 = 0;
          uStack_248 = 0xe000000000000000;
          local_338 = puVar13;
          local_310 = uVar17;
          lStack_308 = lVar4;
          local_300 = lVar14;
          uStack_2f8 = uVar18;
          local_2f0 = uVar12;
          lStack_2e8 = lVar15;
          local_2b0 = puVar13;
          local_288 = uVar17;
          lStack_280 = lVar4;
          local_278 = lVar14;
          uStack_270 = uVar18;
          local_268 = uVar12;
          lStack_260 = lVar15;
          FUN_100064cb0(&local_350,&local_240);
          FUN_100064cec(&local_2c8);
          puVar8 = &DAT_1000f8c60;
          _swift_allocObject(&DAT_1000f8c60,0x38,7);
          puVar11 = local_3a8;
          uVar12 = local_3c0;
          *(code **)(puVar8 + 0x10) = FUN_10008510c;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          *(undefined **)(puVar8 + 0x20) = local_3a8;
          *(undefined **)(puVar8 + 0x28) = puVar10;
          *(undefined8 *)(puVar8 + 0x30) = local_3c0;
          FUN_1000133cc(auStack_1b0,&local_370,&DAT_100104198,&DAT_1000d5180);
          puVar13 = &DAT_1000f8c88;
          _swift_allocObject(&DAT_1000f8c88,0x50,7);
          *(undefined8 *)(puVar13 + 0x10) = 1;
          *(undefined8 *)(puVar13 + 0x20) = uStack_368;
          *(undefined8 *)(puVar13 + 0x18) = local_370;
          *(undefined8 *)(puVar13 + 0x30) = uStack_358;
          *(undefined8 *)(puVar13 + 0x28) = uStack_360;
          *(undefined **)(puVar13 + 0x38) = puVar11;
          *(undefined **)(puVar13 + 0x40) = puVar10;
          *(undefined8 *)(puVar13 + 0x48) = uVar12;
          _swift_bridgeObjectRetain(puVar10);
          _swift_bridgeObjectRetain(uVar12);
          FUN_10001fc18(&local_100,&DAT_100104198,&DAT_1000d5180);
          uStack_1d0 = CONCAT71(uStack_2df,local_2e0);
          lStack_1d8 = lStack_2e8;
          local_1e0 = local_2f0;
          uStack_1c8 = local_2d8;
          local_1c0 = local_2d0;
          uStack_218 = CONCAT71(uStack_327,uStack_328);
          local_220 = local_330;
          uStack_208 = uStack_318;
          uStack_210 = local_320;
          lStack_1f8 = lStack_308;
          local_200 = local_310;
          uStack_1e8 = uStack_2f8;
          lStack_1f0 = local_300;
          puStack_238 = puStack_348;
          local_240 = local_350;
          local_228 = local_338;
          puStack_230 = puStack_340;
          FUN_10001fc18(auStack_1b0,&DAT_100104198,&DAT_1000d5180);
          puVar10 = &DAT_100104040;
          FUN_10000eb08(&DAT_100104040,&DAT_1000d4640);
          puVar11 = (undefined *)0xf0;
          _swift_allocObject();
          *(ulong *)(puVar10 + 0x80) = uStack_1e8;
          *(long *)(puVar10 + 0x78) = lStack_1f0;
          *(long *)(puVar10 + 0x90) = lStack_1d8;
          *(undefined8 *)(puVar10 + 0x88) = local_1e0;
          *(undefined8 *)(puVar10 + 0xa0) = uStack_1c8;
          *(undefined8 *)(puVar10 + 0x98) = uStack_1d0;
          *(undefined **)(puVar10 + 0x40) = local_228;
          *(undefined **)(puVar10 + 0x38) = puStack_230;
          *(undefined8 *)(puVar10 + 0x50) = uStack_218;
          *(undefined **)(puVar10 + 0x48) = local_220;
          *(undefined8 *)(puVar10 + 0x60) = uStack_208;
          *(undefined8 *)(puVar10 + 0x58) = uStack_210;
          *(long *)(puVar10 + 0x70) = lStack_1f8;
          *(undefined8 *)(puVar10 + 0x68) = local_200;
          *(undefined8 *)(puVar10 + 0x18) = uStack_398;
          *(undefined8 *)(puVar10 + 0x10) = local_3a0;
          *(undefined8 *)(puVar10 + 0x20) = 1;
          *(undefined **)(puVar10 + 0x30) = puStack_238;
          *(undefined **)(puVar10 + 0x28) = local_240;
          *(undefined8 *)(puVar10 + 0xb0) = 0;
          *(undefined8 *)(puVar10 + 0xb8) = 0;
          *(undefined8 *)(puVar10 + 0xa8) = local_1c0;
          *(undefined2 *)(puVar10 + 0xc0) = 6;
          *(code **)(puVar10 + 200) = FUN_100077f34;
          *(undefined **)(puVar10 + 0xd0) = puVar8;
          puVar10[0xd8] = 1;
          *(code **)(puVar10 + 0xe0) = FUN_100077fb0;
          *(undefined **)(puVar10 + 0xe8) = puVar13;
          puVar8 = puVar10;
          FUN_1000a38e8();
          _swift_bridgeObjectRelease(puVar10);
          FUN_10001fc18(&local_e0,&DAT_1001045d8,&DAT_1000d4c90);
          param_3 = uStack_3d8;
          param_5 = local_3e0;
        }
        else {
          FUN_10006c8f8(&local_350,&local_2c8);
          puVar9 = puStack_2a8;
          puVar11 = local_2b0;
          FUN_10000eba0(&local_2c8,local_2b0);
          (**(code **)(puVar9 + 0x10))(puVar11,puVar9);
          if (2 - ((ulong)puVar11 & 0xff) < local_3e8) {
            FUN_10001fc18(&local_e0,&DAT_1001045d8,&DAT_1000d4c90);
            _swift_bridgeObjectRelease(puVar10);
            ppuVar5 = &local_2c8;
            goto LAB_100077444;
          }
          uVar7 = (ulong)puVar8 & 0xffffffffffff;
          if (((ulong)puVar10 & 0x2000000000000000) != 0) {
            uVar7 = (ulong)puVar10 >> 0x38 & 0xf;
          }
          if (uVar7 != 0) {
            uVar7 = 0xf;
            puVar11 = puVar8;
            __sSSySJSS5IndexVcig(0xf,puVar8,puVar10);
            if ((uVar7 == 0x5f) && (puVar11 == (undefined *)0xe100000000000000)) {
              _swift_bridgeObjectRelease(0xe100000000000000);
            }
            else {
              puVar13 = (undefined *)0xe100000000000000;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        ();
              _swift_bridgeObjectRelease(puVar11);
              if ((uVar7 & 1) == 0) goto LAB_100077884;
            }
            puVar9 = (undefined *)0x1;
            puVar11 = puVar10;
            FUN_100096c3c(1,puVar8,puVar10);
            _swift_bridgeObjectRelease(puVar10);
            __sSS14_fromSubstringySSSshFZ(puVar9,puVar8,puVar11,puVar13);
            _swift_bridgeObjectRelease(puVar13);
            puVar10 = puVar8;
            puVar8 = puVar9;
          }
LAB_100077884:
          puVar13 = PTR___swiftEmptyArrayStorage_1000f0740;
          if (param_5 != 0) {
            puVar13 = &DAT_100103f18;
            FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
            _swift_allocObject();
            puVar11 = puStack_3c8;
            *(undefined8 *)(puVar13 + 0x18) = uStack_398;
            *(undefined8 *)(puVar13 + 0x10) = local_3a0;
            *(undefined8 *)(puVar13 + 0x20) = local_3d0;
            *(long *)(puVar13 + 0x28) = param_5;
            local_240 = puStack_3c8;
            _swift_bridgeObjectRetain(param_5);
            _swift_bridgeObjectRetain(puVar11);
            FUN_10006d548(puVar13);
            puVar13 = local_240;
          }
          puVar1 = puStack_2a8;
          puVar9 = local_2b0;
          FUN_10000eba0(&local_2c8,local_2b0);
          puVar11 = puVar10;
          (**(code **)(puVar1 + 8))(puVar8,puVar10,puVar13,puVar9,puVar1);
          _swift_bridgeObjectRelease(puVar13);
          _swift_bridgeObjectRelease(puVar10);
          FUN_10001fc18(&local_e0,&DAT_1001045d8,&DAT_1000d4c90);
          FUN_100001428(&local_2c8);
        }
        puVar10 = local_380;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar10 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_10006f4b4(0,*(long *)(local_380 + 0x10) + 1,1);
          local_380 = puVar10;
        }
        uVar7 = *(ulong *)(local_380 + 0x10);
        if (*(ulong *)(local_380 + 0x18) >> 1 <= uVar7) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_380 + 0x18));
          FUN_10006f4b4(puVar10,uVar7 + 1,1,local_380);
          local_380 = puVar10;
        }
        *(ulong *)(local_380 + 0x10) = uVar7 + 1;
        *(undefined **)(local_380 + uVar7 * 0x10 + 0x20) = puVar8;
        *(undefined **)(local_380 + uVar7 * 0x10 + 0x28) = puVar11;
      }
      __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&local_a0);
    } while (lStack_78 != 0);
  }
  _swift_release(local_3f8);
  FUN_100077ea0(local_3d0,param_5,puStack_3c8);
  _swift_release(local_388);
  puVar8 = local_380;
  FUN_100076c94(local_380,param_3);
  puVar10 = puVar8;
  FUN_1000a38e8();
  _swift_bridgeObjectRelease(puVar8);
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = puVar10;
  return auVar19;
}

