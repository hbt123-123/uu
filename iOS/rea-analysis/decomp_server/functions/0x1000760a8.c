// rea decompile_all
// name: FUN_1000760a8
// address: 0x1000760a8
// body: available
// range: 0x1000760a8-0x1000768b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000760a8(undefined4 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,code *param_11)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *local_470;
  undefined8 uStack_468;
  undefined *local_450;
  undefined8 uStack_448;
  long local_440;
  undefined *puStack_438;
  undefined8 local_430;
  long lStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined5 uStack_3e8;
  undefined3 local_3e3;
  undefined5 uStack_3e0;
  undefined8 uStack_3db;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  long local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined *puStack_378;
  undefined8 local_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *local_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined *local_2a0;
  undefined8 uStack_298;
  long local_290;
  undefined *puStack_288;
  undefined8 local_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined5 uStack_238;
  undefined3 uStack_233;
  undefined5 uStack_230;
  undefined8 uStack_22b;
  undefined1 auStack_218 [24];
  undefined *local_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined *local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined1 local_74;
  
  _swift_beginAccess(param_3 + 0x10,auStack_218,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_3 == 0) {
    return;
  }
  lVar19 = *(long *)(param_1 + 4);
  if (*(long *)(param_3 + 0xb8) != param_4) {
    if (lVar19 != 0) {
      local_3d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fbb8(0,lVar19,0);
      uVar17 = *(ulong *)(local_3d0 + 0x10);
      do {
        param_1 = param_1 + 0x20;
        uVar3 = *param_1;
        uVar1 = uVar17 + 1;
        if (*(ulong *)(local_3d0 + 0x18) >> 1 <= uVar17) {
          FUN_10006fbb8(1 < *(ulong *)(local_3d0 + 0x18),uVar1,1);
        }
        *(ulong *)(local_3d0 + 0x10) = uVar1;
        *(undefined4 *)(local_3d0 + uVar17 * 4 + 0x20) = uVar3;
        lVar19 = lVar19 + -1;
        puVar12 = local_3d0;
        uVar17 = uVar1;
      } while (lVar19 != 0);
    }
    local_3d0 = puVar12;
    if (*(char *)(param_10 + 0x10) == '\x01') {
      uStack_3c8 = param_2;
      _swift_bridgeObjectRetain(param_2);
    }
    else {
      *(undefined1 *)(param_10 + 0x10) = 1;
      pcVar18 = *(code **)(param_10 + 0x18);
      uStack_3c8 = param_2;
      _swift_bridgeObjectRetain(param_2);
      (*pcVar18)(&local_3d0);
    }
    (*param_11)();
    goto LAB_100076880;
  }
  if (lVar19 == 0) {
    if (*(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10) != 0) goto LAB_100076790;
    FUN_10005283c();
  }
  else {
    lVar20 = 0;
    do {
      puVar2 = (undefined8 *)(param_1 + lVar20 * 0x20 + 8);
      uStack_258 = puVar2[9];
      local_260 = puVar2[8];
      uStack_248 = puVar2[0xb];
      uStack_250 = puVar2[10];
      local_240 = puVar2[0xc];
      uStack_238 = (undefined5)puVar2[0xd];
      uStack_22b = *(undefined8 *)((long)puVar2 + 0x75);
      uStack_233 = (undefined3)*(undefined8 *)((long)puVar2 + 0x6d);
      uStack_230 = (undefined5)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
      uStack_298 = puVar2[1];
      puVar12 = (undefined *)*puVar2;
      puStack_288 = (undefined *)puVar2[3];
      local_290 = puVar2[2];
      lStack_278 = puVar2[5];
      local_280 = puVar2[4];
      uStack_268 = puVar2[7];
      uStack_270 = puVar2[6];
      local_1b0 = puVar2[10];
      ppuVar6 = &local_3d0;
      local_2a0 = puVar12;
      local_200 = puVar12;
      uStack_1f8 = uStack_298;
      lStack_1f0 = local_290;
      puStack_1e8 = puStack_288;
      local_1e0 = local_280;
      lStack_1d8 = lStack_278;
      local_1d0 = uStack_270;
      uStack_1c8 = uStack_268;
      uStack_1c0 = local_260;
      uStack_1b8 = uStack_258;
      _swift_beginAccess(param_3 + 0x70,ppuVar6,0x20,0);
      lVar13 = *(long *)(param_3 + 0x70);
      if ((*(long *)(lVar13 + 0x10) == 0) ||
         (puVar4 = puVar12, thunk_FUN_1001a2e54(), ((ulong)ppuVar6 & 1) == 0)) {
        _swift_endAccess(&local_3d0);
        FUN_10007eca0(&local_2a0,&local_3d0);
        FUN_10004985c(&local_2a0,&local_3d0);
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x38) + (long)puVar4 * 0x80);
        lStack_428 = puVar2[5];
        local_430 = puVar2[4];
        uStack_418 = puVar2[7];
        uStack_420 = puVar2[6];
        uStack_448 = puVar2[1];
        local_450 = (undefined *)*puVar2;
        puStack_438 = (undefined *)puVar2[3];
        local_440 = puVar2[2];
        uStack_408 = puVar2[9];
        local_410 = puVar2[8];
        uStack_3f8 = puVar2[0xb];
        local_400 = puVar2[10];
        uStack_3f0 = puVar2[0xc];
        uStack_3db = *(undefined8 *)((long)puVar2 + 0x75);
        uStack_3e0 = (undefined5)((ulong)*(undefined8 *)((long)puVar2 + 0x6d) >> 0x18);
        uStack_3e8 = (undefined5)puVar2[0xd];
        local_3e3 = (undefined3)((ulong)puVar2[0xd] >> 0x28);
        uStack_318 = puVar2[1];
        local_320 = (undefined *)*puVar2;
        uStack_308 = puVar2[3];
        lStack_310 = puVar2[2];
        uStack_2f8 = puVar2[5];
        local_300 = puVar2[4];
        uStack_2e8 = puVar2[7];
        uStack_2f0 = puVar2[6];
        uStack_2d8 = puVar2[9];
        local_2e0 = puVar2[8];
        puStack_2c8 = (undefined *)puVar2[0xb];
        local_2d0 = puVar2[10];
        uStack_2c0 = puVar2[0xc];
        uStack_2ac = *(undefined8 *)((long)puVar2 + 0x74);
        uStack_2b0 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x6c) >> 0x20);
        uStack_2b8 = (undefined4)puVar2[0xd];
        local_2b4 = (undefined4)((ulong)puVar2[0xd] >> 0x20);
        _swift_endAccess(&local_3d0);
        uStack_a8 = uStack_2d8;
        local_b0 = local_2e0;
        puStack_98 = puStack_2c8;
        uStack_a0 = local_2d0;
        uStack_88 = uStack_2b8;
        local_90 = uStack_2c0;
        uStack_7c = uStack_2ac;
        uStack_84 = local_2b4;
        uStack_80 = uStack_2b0;
        uStack_e8 = uStack_318;
        local_f0 = local_320;
        uStack_d8 = uStack_308;
        lStack_e0 = lStack_310;
        uStack_c8 = uStack_2f8;
        local_d0 = local_300;
        uStack_b8 = uStack_2e8;
        uStack_c0 = uStack_2f0;
        local_74 = 1;
        _swift_beginAccess(param_3 + 0x70,&local_470,0x21,0);
        FUN_10007eca0(&local_2a0,&local_3d0);
        FUN_10004985c(&local_2a0,&local_3d0);
        FUN_10007eca0(&local_450,&local_3d0);
        FUN_10007eca0(&local_f0,&local_3d0);
        uVar5 = *(undefined8 *)(param_3 + 0x70);
        _swift_isUniquelyReferenced_nonNull_native(uVar5);
        local_3d0 = *(undefined **)(param_3 + 0x70);
        *(undefined8 *)(param_3 + 0x70) = 0x8000000000000000;
        FUN_100060f9c(&local_f0,puVar12,uVar5);
        *(undefined **)(param_3 + 0x70) = local_3d0;
        _swift_endAccess(&local_470);
        uStack_388 = uStack_2d8;
        local_390 = local_2e0;
        puStack_378 = puStack_2c8;
        local_380 = local_2d0;
        uStack_368 = uStack_2b8;
        local_370 = uStack_2c0;
        uStack_35c = (undefined4)uStack_2ac;
        uStack_358 = (undefined4)((ulong)uStack_2ac >> 0x20);
        uStack_364 = local_2b4;
        local_360 = uStack_2b0;
        uStack_3c8 = uStack_318;
        local_3d0 = local_320;
        local_3b8 = uStack_308;
        local_3c0 = lStack_310;
        uStack_3a8 = uStack_2f8;
        local_3b0 = local_300;
        local_398 = uStack_2e8;
        local_3a0 = uStack_2f0;
        uStack_354 = CONCAT31(uStack_354._1_3_,1);
        FUN_10007ed50(&local_3d0);
      }
      puVar2 = (undefined8 *)(param_5 + 0x20);
      for (lVar13 = *(long *)(param_5 + 0x10); lVar13 != 0; lVar13 = lVar13 + -1) {
        uVar14 = puVar2[5];
        uVar11 = puVar2[4];
        uVar9 = puVar2[7];
        uVar10 = puVar2[6];
        uVar5 = puVar2[9];
        uVar8 = puVar2[8];
        uVar7 = puVar2[10];
        uVar16 = puVar2[1];
        local_3d0 = (undefined *)*puVar2;
        uVar15 = puVar2[3];
        lVar21 = puVar2[2];
        uStack_3c8 = uVar16;
        local_3c0 = lVar21;
        local_3b8 = uVar15;
        local_3b0 = uVar11;
        uStack_3a8 = uVar14;
        local_3a0 = uVar10;
        local_398 = uVar9;
        local_390 = uVar8;
        uStack_388 = uVar5;
        local_380 = uVar7;
        if (local_3d0 == puVar12) {
          FUN_10004985c(&local_3d0,&local_450);
          goto LAB_100076478;
        }
        puVar2 = puVar2 + 0xb;
      }
      puVar12 = (undefined *)0x0;
      uVar16 = 0;
      lVar21 = 0;
      uVar15 = 0;
      uVar11 = 0;
      uVar14 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar5 = 0;
      uVar7 = 0;
LAB_100076478:
      lVar13 = local_290;
      uStack_468 = uStack_298;
      local_470 = local_2a0;
      uStack_318 = local_280;
      local_320 = puStack_288;
      uStack_308 = uStack_270;
      lStack_310 = lStack_278;
      uStack_2f8 = local_260;
      local_300 = uStack_268;
      uStack_2e8 = uStack_250;
      uStack_2f0 = uStack_258;
      if (lVar21 == 0) {
        if (local_290 != 0) goto LAB_10007615c;
        FUN_10007ed50(&local_2a0);
        local_3c0 = 0;
        local_3d0 = puVar12;
        uStack_3c8 = uVar16;
        local_3b8 = uVar15;
        local_3b0 = uVar11;
        uStack_3a8 = uVar14;
        local_3a0 = uVar10;
        local_398 = uVar9;
        local_390 = uVar8;
        uStack_388 = uVar5;
        local_380 = uVar7;
        FUN_100040bb4(&local_3d0,&DAT_100a76450,&DAT_10080aca8);
      }
      else {
        if (local_290 == 0) {
LAB_10007615c:
          local_370 = uStack_298;
          puStack_378 = local_2a0;
          uStack_368 = (undefined4)local_290;
          uStack_364 = (undefined4)((ulong)local_290 >> 0x20);
          uStack_358 = (undefined4)local_280;
          uStack_354 = (undefined4)((ulong)local_280 >> 0x20);
          local_360 = SUB84(puStack_288,0);
          uStack_35c = (undefined4)((ulong)puStack_288 >> 0x20);
          uStack_348 = uStack_270;
          lStack_350 = lStack_278;
          uStack_338 = local_260;
          local_340 = uStack_268;
          uStack_328 = uStack_250;
          uStack_330 = uStack_258;
          local_3d0 = puVar12;
          uStack_3c8 = uVar16;
          local_3c0 = lVar21;
          local_3b8 = uVar15;
          local_3b0 = uVar11;
          uStack_3a8 = uVar14;
          local_3a0 = uVar10;
          local_398 = uVar9;
          local_390 = uVar8;
          uStack_388 = uVar5;
          local_380 = uVar7;
          FUN_100040bb4(&local_3d0,&DAT_100a76448,&DAT_10080aca0);
        }
        else {
          uStack_148 = uStack_298;
          local_150 = local_2a0;
          uStack_130 = local_280;
          local_138 = puStack_288;
          uStack_120 = uStack_270;
          local_128 = lStack_278;
          uStack_110 = local_260;
          local_118 = uStack_268;
          uStack_100 = uStack_250;
          local_108 = uStack_258;
          local_140 = local_290;
          ppuVar6 = &local_1a8;
          local_1a8 = puVar12;
          local_1a0 = uVar16;
          local_198 = lVar21;
          local_190 = uVar15;
          local_188 = uVar11;
          local_180 = uVar14;
          local_178 = uVar10;
          local_170 = uVar9;
          local_168 = uVar8;
          local_160 = uVar5;
          local_158 = uVar7;
          thunk_FUN_10039bc28(ppuVar6,&local_150);
          uStack_448 = uStack_468;
          local_450 = local_470;
          local_440 = lVar13;
          local_430 = uStack_318;
          puStack_438 = local_320;
          uStack_420 = uStack_308;
          lStack_428 = lStack_310;
          local_410 = uStack_2f8;
          uStack_418 = local_300;
          local_400 = uStack_2e8;
          uStack_408 = uStack_2f0;
          FUN_100040bb4(&local_450,&DAT_100a76450,&DAT_10080aca8);
          local_3d0 = puVar12;
          uStack_3c8 = uVar16;
          local_3c0 = lVar21;
          local_3b8 = uVar15;
          local_3b0 = uVar11;
          uStack_3a8 = uVar14;
          local_3a0 = uVar10;
          local_398 = uVar9;
          local_390 = uVar8;
          uStack_388 = uVar5;
          local_380 = uVar7;
          FUN_100040bb4(&local_3d0,&DAT_100a76450,&DAT_10080aca8);
          if (((ulong)ppuVar6 & 1) != 0) {
            FUN_10007ed50(&local_2a0);
            goto LAB_1000761d0;
          }
        }
        FUN_100048f38(&local_200,param_6,param_7);
        FUN_10007ed50(&local_2a0);
      }
LAB_1000761d0:
      lVar20 = lVar20 + 1;
    } while (lVar20 != lVar19);
    local_3d0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fbb8(0,lVar19,0);
    uVar17 = *(ulong *)(local_3d0 + 0x10);
    do {
      param_1 = param_1 + 0x20;
      uVar3 = *param_1;
      uVar1 = uVar17 + 1;
      if (*(ulong *)(local_3d0 + 0x18) >> 1 <= uVar17) {
        FUN_10006fbb8(1 < *(ulong *)(local_3d0 + 0x18),uVar1,1);
      }
      *(ulong *)(local_3d0 + 0x10) = uVar1;
      *(undefined4 *)(local_3d0 + uVar17 * 4 + 0x20) = uVar3;
      lVar19 = lVar19 + -1;
      puVar12 = local_3d0;
      uVar17 = uVar1;
    } while (lVar19 != 0);
LAB_100076790:
    pcVar18 = *(code **)(param_3 + 0x78);
    if (pcVar18 != (code *)0x0) {
      uVar5 = *(undefined8 *)(param_3 + 0x80);
      _swift_retain(uVar5);
      (*pcVar18)(param_6,param_7,4);
      FUN_10007ed2c(pcVar18,uVar5);
    }
    FUN_100075dc8(param_9);
    FUN_10005d508();
    FUN_10005dad4(0x65726f74736572,0xe700000000000000,param_8,param_9,0);
    pcVar18 = *(code **)(param_3 + 0x78);
    if (pcVar18 != (code *)0x0) {
      uVar5 = *(undefined8 *)(param_3 + 0x80);
      _swift_retain(uVar5);
      (*pcVar18)(0x65726f74736572,0xe700000000000000,5);
      FUN_10007ed2c(pcVar18,uVar5);
    }
  }
  local_3d0 = puVar12;
  if (*(char *)(param_10 + 0x10) == '\x01') {
    uStack_3c8 = param_2;
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    *(undefined1 *)(param_10 + 0x10) = 1;
    pcVar18 = *(code **)(param_10 + 0x18);
    uStack_3c8 = param_2;
    _swift_bridgeObjectRetain(param_2);
    (*pcVar18)(&local_3d0);
  }
  (*param_11)();
LAB_100076880:
  _swift_release(param_3);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(puVar12);
  return;
}

