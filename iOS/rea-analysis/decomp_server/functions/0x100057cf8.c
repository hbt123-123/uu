// rea decompile_all
// name: FUN_100057cf8
// address: 0x100057cf8
// body: available
// range: 0x100057cf8-0x100058d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100057cf8(undefined8 *param_1,long param_2,code *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  void *aBlock;
  undefined8 *puVar18;
  undefined1 *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long lVar21;
  undefined *puVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  code *pcVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auStack_550 [16];
  undefined8 auStack_540 [2];
  code *local_530;
  long local_528;
  ulong local_520;
  code *local_518;
  undefined *local_510;
  ulong local_508;
  long local_500;
  long local_4f8;
  long local_4f0;
  long local_4e8;
  long lStack_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  undefined8 *local_4b0;
  code *local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  code *local_490;
  undefined *local_488;
  long local_480;
  undefined *local_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  code *local_400;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3ab;
  undefined *local_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  code *local_380;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_32b;
  undefined *local_318;
  undefined8 uStack_310;
  code *local_308;
  undefined *puStack_300;
  code *local_2f8;
  char cStack_2f0;
  undefined7 uStack_2ef;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined5 uStack_2b0;
  undefined3 uStack_2ab;
  undefined5 uStack_2a8;
  undefined8 uStack_2a3;
  undefined1 auStack_298 [24];
  undefined *local_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  code *local_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined5 uStack_218;
  undefined1 uStack_213;
  undefined2 uStack_212;
  undefined5 uStack_210;
  undefined1 uStack_20b;
  undefined7 uStack_20a;
  undefined1 auStack_1f8 [24];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  char local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  char local_188;
  undefined *local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined *local_168;
  code *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined5 uStack_118;
  undefined1 local_113;
  undefined2 uStack_112;
  undefined5 uStack_110;
  undefined1 uStack_10b;
  undefined7 uStack_10a;
  undefined *local_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined8 uStack_8b;
  
  uStack_b8 = param_1[9];
  local_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  local_a0 = param_1[0xc];
  uStack_98 = (undefined5)param_1[0xd];
  uStack_8b = *(undefined8 *)((long)param_1 + 0x75);
  uStack_93 = (undefined3)*(undefined8 *)((long)param_1 + 0x6d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x6d) >> 0x18);
  uStack_f8 = param_1[1];
  local_100 = (undefined *)*param_1;
  puStack_e8 = (undefined *)param_1[3];
  pcStack_f0 = (code *)param_1[2];
  puStack_d8 = (undefined *)param_1[5];
  local_e0 = (code *)param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  lVar11 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_4d0 = *(long *)(lVar11 + -8);
  local_4c8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_4d0 + 0x40));
  lVar20 = (long)&local_530 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  local_4d8 = lVar20;
  __s8Dispatch0A3QoSVMa();
  local_4e8 = *(long *)(lVar11 + -8);
  lStack_4e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_4e8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = 0;
  local_4f0 = lVar20;
  __s8Dispatch0A4TimeVMa();
  local_4f8 = *(long *)(lVar11 + -8);
  local_4b8 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_4f8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_500 = lVar20;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = lVar20 - extraout_x12;
  lVar11 = 0;
  local_4c0 = lVar20;
  __s10Foundation4DateVMa();
  local_480 = *(long *)(lVar11 + -8);
  lVar24 = *(long *)(local_480 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = lVar20 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_498 = (undefined *)(lVar20 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar26 = (lVar20 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar21 = uVar26 - extraout_x12_02;
  uVar3 = *(uint *)(param_1 + 0xc);
  local_488 = (undefined *)*param_1;
  uVar33 = param_1[3];
  uVar2 = param_1[4];
  bVar4 = *(byte *)(param_1 + 5);
  puVar12 = &DAT_1009985d0;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  _swift_weakInit(puVar12 + 0x10);
  puVar13 = &DAT_100998c60;
  _swift_allocObject(&DAT_100998c60,0xb0,7);
  uVar30 = param_1[8];
  uVar32 = param_1[0xb];
  uVar31 = param_1[10];
  *(undefined8 *)(puVar13 + 0x60) = param_1[9];
  *(undefined8 *)(puVar13 + 0x58) = uVar30;
  *(undefined8 *)(puVar13 + 0x70) = uVar32;
  *(undefined8 *)(puVar13 + 0x68) = uVar31;
  uVar30 = param_1[0xc];
  *(undefined8 *)(puVar13 + 0x80) = param_1[0xd];
  *(undefined8 *)(puVar13 + 0x78) = uVar30;
  uVar30 = *(undefined8 *)((long)param_1 + 0x6d);
  *(undefined8 *)(puVar13 + 0x8d) = *(undefined8 *)((long)param_1 + 0x75);
  *(undefined8 *)(puVar13 + 0x85) = uVar30;
  uVar30 = *param_1;
  uVar32 = param_1[3];
  uVar31 = param_1[2];
  *(undefined8 *)(puVar13 + 0x20) = param_1[1];
  *(undefined8 *)(puVar13 + 0x18) = uVar30;
  *(undefined8 *)(puVar13 + 0x30) = uVar32;
  *(undefined8 *)(puVar13 + 0x28) = uVar31;
  uVar30 = param_1[4];
  uVar32 = param_1[7];
  uVar31 = param_1[6];
  *(undefined8 *)(puVar13 + 0x40) = param_1[5];
  *(undefined8 *)(puVar13 + 0x38) = uVar30;
  *(undefined **)(puVar13 + 0x10) = puVar12;
  *(undefined8 *)(puVar13 + 0x50) = uVar32;
  *(undefined8 *)(puVar13 + 0x48) = uVar31;
  *(code **)(puVar13 + 0x98) = param_3;
  *(undefined **)(puVar13 + 0xa0) = param_4;
  *(long *)(puVar13 + 0xa8) = param_2;
  local_4a8 = param_3;
  _swift_retain(puVar12);
  _swift_retain(param_4);
  FUN_10007eca0(param_1,&local_180);
  _swift_retain(param_4);
  _swift_retain(puVar12);
  FUN_10007eca0(param_1,&local_180);
  FUN_10003990c(&local_1e0,uVar3);
  if (local_1b8 != '\x02') {
    uStack_1a8 = uStack_1d8;
    local_1b0 = local_1e0;
    uStack_198 = uStack_1c8;
    uStack_1a0 = uStack_1d0;
    local_190 = local_1c0;
    local_188 = local_1b8;
    puVar14 = &local_1b0;
    FUN_100045900(puVar14,uVar33,uVar2,bVar4 & 1);
    if (((ulong)puVar14 & 1) != 0) {
      _swift_beginAccess(puVar12 + 0x10,auStack_1f8,0,0);
      puVar15 = puVar12 + 0x10;
      _swift_weakLoadStrong();
      if (puVar15 == (undefined *)0x0) {
        _swift_release(puVar12);
        _swift_release(puVar13);
        FUN_10007ed50(param_1);
      }
      else {
        if (*(long *)(puVar15 + 0xb8) == param_2) {
          puVar19 = auStack_298;
          _swift_beginAccess(puVar15 + 0x70,puVar19,0x20,0);
          lVar11 = *(long *)(puVar15 + 0x70);
          if ((*(long *)(lVar11 + 0x10) == 0) ||
             (puVar17 = local_488, thunk_FUN_1001a2e54(), ((ulong)puVar19 & 1) == 0)) {
            FUN_10007ec64(&local_318);
          }
          else {
            puVar14 = (undefined8 *)(*(long *)(lVar11 + 0x38) + (long)puVar17 * 0x80);
            puStack_158 = (undefined *)puVar14[5];
            local_160 = (code *)puVar14[4];
            uStack_148 = puVar14[7];
            uStack_150 = puVar14[6];
            uStack_178 = puVar14[1];
            local_180 = (undefined *)*puVar14;
            local_168 = (undefined *)puVar14[3];
            local_170 = (code *)puVar14[2];
            uStack_138 = puVar14[9];
            local_140 = puVar14[8];
            uStack_128 = puVar14[0xb];
            uStack_130 = puVar14[10];
            uVar33 = puVar14[0xd];
            uStack_120 = puVar14[0xc];
            uStack_10b = (undefined1)*(undefined8 *)((long)puVar14 + 0x75);
            uStack_10a = (undefined7)((ulong)*(undefined8 *)((long)puVar14 + 0x75) >> 8);
            uStack_110 = (undefined5)((ulong)*(undefined8 *)((long)puVar14 + 0x6d) >> 0x18);
            uStack_118 = (undefined5)uVar33;
            local_113 = (undefined1)((ulong)uVar33 >> 0x28);
            uStack_112 = (undefined2)((ulong)uVar33 >> 0x30);
            _memmove(&local_318,puVar14,0x7d);
            FUN_100008290(&local_318);
            FUN_10007eca0(&local_180,&local_280);
          }
          uStack_358 = uStack_2d0;
          local_360 = local_2d8;
          uStack_348 = uStack_2c0;
          uStack_350 = local_2c8;
          uStack_32b = uStack_2a3;
          uStack_398 = uStack_310;
          local_3a0 = local_318;
          puStack_388 = puStack_300;
          pcStack_390 = local_308;
          local_380 = local_2f8;
          uStack_368 = uStack_2e0;
          uStack_370 = local_2e8;
          iVar10 = (int)&local_3a0;
          FUN_10007ec80();
          if (iVar10 == 1) {
            uStack_138 = uStack_2d0;
            local_140 = local_2d8;
            uStack_128 = uStack_2c0;
            uStack_130 = local_2c8;
            uStack_120 = CONCAT44(uStack_2b4,local_2b8);
            uStack_118 = uStack_2b0;
            uStack_10b = (undefined1)uStack_2a3;
            uStack_10a = (undefined7)((ulong)uStack_2a3 >> 8);
            local_113 = (undefined1)uStack_2ab;
            uStack_112 = (undefined2)((uint3)uStack_2ab >> 8);
            uStack_110 = uStack_2a8;
            uStack_178 = uStack_310;
            local_180 = local_318;
            local_168 = puStack_300;
            local_170 = local_308;
            puStack_158 = (undefined *)CONCAT71(uStack_2ef,cStack_2f0);
            local_160 = local_2f8;
            uStack_148 = uStack_2e0;
            uStack_150 = local_2e8;
            FUN_100040bb4(&local_180,&DAT_100a761f8,&DAT_10080a998);
            _swift_endAccess(auStack_298);
            goto LAB_100058afc;
          }
          uStack_3d8 = uStack_2d0;
          local_3e0 = local_2d8;
          uStack_3c8 = uStack_2c0;
          uStack_3d0 = local_2c8;
          uStack_3ab = uStack_2a3;
          uStack_418 = uStack_310;
          local_420 = local_318;
          puStack_408 = puStack_300;
          pcStack_410 = local_308;
          local_400 = local_2f8;
          uStack_3e8 = uStack_2e0;
          uStack_3f0 = local_2e8;
          _swift_endAccess(auStack_298);
          FUN_100040bb4(&local_420,&DAT_100a761f8,&DAT_10080a998);
          if (local_2b8 != uVar3) goto LAB_100058afc;
          uStack_238 = uStack_b8;
          local_240 = local_c0;
          uStack_228 = uStack_a8;
          uStack_230 = uStack_b0;
          uStack_218 = uStack_98;
          local_220 = local_a0;
          uStack_20b = (undefined1)uStack_8b;
          uStack_20a = (undefined7)((ulong)uStack_8b >> 8);
          uStack_213 = (undefined1)uStack_93;
          uStack_212 = (undefined2)((uint3)uStack_93 >> 8);
          uStack_210 = uStack_90;
          uStack_278 = uStack_f8;
          local_280 = local_100;
          puStack_268 = puStack_e8;
          pcStack_270 = pcStack_f0;
          puStack_258 = puStack_d8;
          local_260 = local_e0;
          uStack_248 = uStack_c8;
          uStack_250 = uStack_d0;
          FUN_10007f2c0(&local_280);
        }
        else {
LAB_100058afc:
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 **)(lVar21 + -0x10) = param_1;
          FUN_1003fb4ec(FUN_10007f2ac,lVar21 + -0x20,0xd0000000000000a5,0x800000010087d850,
                        0xd00000000000002a,0x800000010087dea0,0x472,0);
          local_280 = (undefined *)CONCAT44(local_280._4_4_,0x2713);
          FUN_10007f2b4(&local_280);
        }
        uStack_138 = uStack_238;
        local_140 = local_240;
        uStack_128 = uStack_228;
        uStack_130 = uStack_230;
        uStack_118 = uStack_218;
        local_113 = uStack_213;
        uStack_120 = local_220;
        uStack_10a = uStack_20a;
        uStack_112 = uStack_212;
        uStack_110 = uStack_210;
        uStack_10b = uStack_20b;
        uStack_178 = uStack_278;
        local_180 = local_280;
        local_168 = puStack_268;
        local_170 = pcStack_270;
        puStack_158 = puStack_258;
        local_160 = local_260;
        uStack_148 = uStack_248;
        uStack_150 = uStack_250;
        (*local_4a8)(&local_180);
        _swift_release(puVar12);
        _swift_release(puVar13);
        FUN_10007ed50(param_1);
        _swift_release(puVar12);
        puVar12 = puVar15;
      }
      _swift_release(puVar12);
      puVar12 = param_4;
      goto LAB_100058bec;
    }
  }
  local_4b0 = param_1;
  __s10Foundation4DateVACycfC(uVar26);
  __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar21,0x4014000000000000);
  lVar6 = local_480;
  local_490 = *(code **)(local_480 + 8);
  local_508 = uVar26;
  (*local_490)(uVar26,lVar11);
  puVar16 = &DAT_1009985d0;
  puVar15 = puVar16;
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  local_488 = puVar15;
  _swift_weakInit(puVar15 + 0x10,unaff_x20);
  _swift_allocObject(&DAT_1009985d0,0x18,7);
  _swift_weakInit(puVar16 + 0x10,unaff_x20);
  puVar17 = local_498;
  pcVar23 = *(code **)(lVar6 + 0x10);
  (*pcVar23)(local_498,lVar21,lVar11);
  local_518 = pcVar23;
  (*pcVar23)(lVar20,puVar17,lVar11);
  local_520 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar26 = local_520 + 0x38 & (local_520 ^ 0xffffffffffffffff);
  local_528 = lVar24 + 7;
  uVar25 = local_528 + uVar26 & 0xfffffffffffffff8;
  puVar15 = &DAT_100998c88;
  _swift_allocObject(&DAT_100998c88,uVar25 + 0x11,local_520 | 7);
  puVar29 = local_488;
  *(undefined **)(puVar15 + 0x10) = puVar16;
  puVar22 = (undefined *)(ulong)uVar3;
  *(uint *)(puVar15 + 0x18) = uVar3;
  *(code **)(puVar15 + 0x20) = FUN_10007f120;
  *(undefined **)(puVar15 + 0x28) = puVar13;
  *(long *)(puVar15 + 0x30) = param_2;
  local_530 = *(code **)(lVar6 + 0x20);
  local_480 = lVar11;
  (*local_530)(puVar15 + uVar26,puVar17,lVar11);
  puVar14 = (undefined8 *)(puVar15 + uVar25);
  *puVar14 = uVar33;
  puVar14[1] = uVar2;
  bVar5 = bVar4 & 1;
  *(byte *)(puVar14 + 2) = bVar5;
  puVar17 = &DAT_100998cb0;
  local_4a0 = puVar15;
  _swift_allocObject(&DAT_100998cb0,0x31,7);
  *(undefined **)(puVar17 + 0x10) = puVar29;
  *(uint *)(puVar17 + 0x18) = uVar3;
  *(undefined8 *)(puVar17 + 0x20) = uVar33;
  *(undefined8 *)(puVar17 + 0x28) = uVar2;
  puVar17[0x30] = bVar5;
  local_498 = puVar17;
  if (*(long *)(unaff_x20 + 0xb8) == param_2) {
    _swift_beginAccess(puVar29 + 0x10,&local_3a0,0,0);
    puVar15 = puVar29 + 0x10;
    _swift_weakLoadStrong();
    _swift_retain_n(puVar13,2);
    _swift_retain(puVar16);
    _swift_retain(puVar29);
    local_510 = puVar16;
    if (puVar15 != (undefined *)0x0) {
      FUN_10003990c(&local_318,puVar22);
      puVar17 = (undefined *)0x404e000000000000;
      if (cStack_2f0 != '\x02') {
        puVar17 = puStack_300;
      }
      FUN_10003b530();
      puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (puVar22 != (undefined *)0x0) {
        puVar1 = puVar22;
      }
      FUN_1000459c8(&local_280,puVar17,puVar1,uVar33,uVar2,bVar4 & 1);
      puVar17 = local_280;
      puVar29 = local_488;
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar15);
      if ((char)puStack_258 == '\x02') goto LAB_10005830c;
      _swift_beginAccess(puVar16 + 0x10,&local_180,0,0);
      puVar16 = puVar16 + 0x10;
      _swift_weakLoadStrong();
      lVar11 = local_480;
      puVar14 = local_4b0;
      if (puVar16 == (undefined *)0x0) {
LAB_10005885c:
        _swift_beginAccess(puVar12 + 0x10,&local_420,0,0);
        puVar15 = puVar12 + 0x10;
        _swift_weakLoadStrong();
        if (puVar15 != (undefined *)0x0) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 **)(lVar21 + -0x10) = puVar14;
          FUN_1003fb4ec(thunk_FUN_10007f268,lVar21 + -0x20,0xd0000000000000a5,0x800000010087d850,
                        0xd00000000000002a,0x800000010087dea0,0x468,0);
          goto LAB_100058910;
        }
        _swift_release(local_4a0);
        puVar17 = local_498;
        goto LAB_100058a00;
      }
      uVar9 = uVar3;
      FUN_100003278(uVar3,puVar17);
      if (uVar9 != 0) {
        _swift_release(puVar16);
        goto LAB_10005885c;
      }
      puVar15 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar15 + 0x10,puVar16);
      puVar17 = &DAT_100998d28;
      _swift_allocObject(&DAT_100998d28,0x31,7);
      *(undefined **)(puVar17 + 0x10) = puVar15;
      *(uint *)(puVar17 + 0x18) = uVar3;
      *(undefined8 *)(puVar17 + 0x20) = uVar33;
      *(undefined8 *)(puVar17 + 0x28) = uVar2;
      puVar17[0x30] = bVar5;
      puVar15 = &DAT_100998d50;
      _swift_allocObject(&DAT_100998d50,0x20,7);
      *(code **)(puVar15 + 0x10) = FUN_10007f120;
      *(undefined **)(puVar15 + 0x18) = puVar13;
      _swift_retain();
      *(undefined **)(lVar21 + -0x10) = &DAT_100998890;
      FUN_100058d1c(param_2,lVar20,thunk_FUN_10007f2c8,puVar17,FUN_10007f280,puVar15,&DAT_100998878,
                    FUN_10007ed80);
      _swift_release(local_4a0);
      _swift_release(local_498);
      _swift_release(puVar16);
      puVar29 = local_488;
      _swift_release(puVar17);
      _swift_release(puVar15);
LAB_100058a04:
      _swift_release(puVar13);
      puVar16 = local_510;
      goto LAB_100058a10;
    }
LAB_10005830c:
    uVar25 = local_508;
    __s10Foundation4DateVACycfC(local_508);
    uVar27 = uVar25;
    __s10Foundation4DateV1loiySbAC_ACtFZ();
    lVar11 = local_480;
    (*local_490)(uVar25,local_480);
    puVar14 = local_4b0;
    puVar15 = local_510;
    uVar26 = local_520;
    if ((uVar27 & 1) == 0) {
      _swift_beginAccess(local_510 + 0x10,&local_180,0,0);
      _swift_weakLoadStrong(puVar15 + 0x10);
      _swift_release();
      _swift_beginAccess(puVar12 + 0x10,&local_420,0,0);
      puVar15 = puVar12 + 0x10;
      _swift_weakLoadStrong();
      puVar16 = local_4a0;
      puVar17 = local_498;
      if (puVar15 != (undefined *)0x0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined8 **)(lVar21 + -0x10) = puVar14;
        FUN_1003fb4ec(thunk_FUN_10007f268,lVar21 + -0x20,0xd0000000000000a5,0x800000010087d850,
                      0xd00000000000002a,0x800000010087dea0,0x468,0);
LAB_100058910:
        lVar11 = local_480;
        FUN_10005b088(puVar14,0x2714,local_4a8,param_4);
        _swift_release(local_4a0);
        puVar16 = local_498;
        puVar17 = puVar15;
      }
      _swift_release(puVar16);
LAB_100058a00:
      _swift_release(puVar17);
      goto LAB_100058a04;
    }
    uVar27 = ~local_520;
    FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    lVar24 = local_500;
    __s8Dispatch0A4TimeV3nowACyFZ(local_500);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_4c0,0x3fa999999999999a,lVar24);
    pcVar23 = *(code **)(local_4f8 + 8);
    (*pcVar23)(lVar24,local_4b8);
    puVar15 = &DAT_1009985d0;
    _swift_allocObject(&DAT_1009985d0,0x18,7);
    _swift_weakInit(puVar15 + 0x10,unaff_x20);
    (*local_518)(uVar25,lVar21,lVar11);
    uVar27 = uVar26 + 0x20 & uVar27;
    uVar28 = local_528 + uVar27 & 0xfffffffffffffff8;
    puVar17 = &DAT_100998cd8;
    _swift_allocObject(&DAT_100998cd8,uVar28 + 0x20,uVar26 | 7);
    lVar11 = local_480;
    *(undefined **)(puVar17 + 0x10) = puVar15;
    *(long *)(puVar17 + 0x18) = param_2;
    (*local_530)(puVar17 + uVar27,uVar25,local_480);
    puVar16 = local_498;
    puVar15 = local_4a0;
    *(code **)(puVar17 + uVar28) = FUN_10007f254;
    *(undefined **)((long)(puVar17 + uVar28) + 8) = local_498;
    *(code **)(puVar17 + uVar28 + 0x10) = FUN_10007f1b4;
    *(undefined **)((long)(puVar17 + uVar28 + 0x10) + 8) = local_4a0;
    local_160 = FUN_10007f270;
    local_180 = PTR___NSConcreteStackBlock_100995490;
    uStack_178 = 0x42000000;
    local_170 = FUN_1000acdb4;
    local_168 = &DAT_100998cf0;
    puStack_158 = puVar17;
    aBlock = __Block_copy(&local_180);
    puVar17 = puStack_158;
    _swift_retain(puVar16);
    _swift_retain(puVar15);
    _swift_release(puVar17);
    lVar24 = local_4f0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_4f0);
    local_180 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar18 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar15 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar17 = puVar15;
    FUN_10004eec4();
    lVar7 = local_4c8;
    lVar6 = local_4d8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_4d8,&local_180,puVar15,puVar17,local_4c8,puVar18);
    lVar8 = local_4c0;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (local_4c0,lVar24,lVar6,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_4d0 + 8))(lVar6,lVar7);
    (**(code **)(local_4e8 + 8))(lVar24,lStack_4e0);
    (*pcVar23)(lVar8,local_4b8);
    _swift_release(puVar13);
    _swift_release(local_510);
    _swift_release(local_4a0);
    _swift_release(local_498);
  }
  else {
    _swift_beginAccess(puVar16 + 0x10,&local_180,0,0);
    puVar15 = puVar16 + 0x10;
    _swift_weakLoadStrong(puVar15);
    _swift_retain_n(puVar13,2);
    _swift_retain(puVar16);
    _swift_retain(puVar29);
    _swift_release(puVar15);
    _swift_beginAccess(puVar12 + 0x10,&local_280,0,0);
    puVar15 = puVar12 + 0x10;
    _swift_weakLoadStrong();
    puVar17 = local_4a0;
    puVar14 = local_4b0;
    puVar22 = local_498;
    if (puVar15 != (undefined *)0x0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar14 = local_4b0;
      *(undefined8 **)(lVar21 + -0x10) = local_4b0;
      FUN_1003fb4ec(FUN_10007f268,lVar21 + -0x20,0xd0000000000000a5,0x800000010087d850,
                    0xd00000000000002a,0x800000010087dea0,0x468,0);
      FUN_10005b088(puVar14,0x2714,local_4a8,param_4);
      _swift_release(local_4a0);
      puVar17 = local_498;
      puVar22 = puVar15;
    }
    lVar11 = local_480;
    _swift_release(puVar17);
    _swift_release(puVar22);
    _swift_release(puVar13);
LAB_100058a10:
    _swift_release(puVar16);
  }
  pcVar23 = local_490;
  (*local_490)(lVar20,lVar11);
  _swift_release(puVar12);
  _swift_release(puVar13);
  _swift_release(puVar29);
  FUN_10007ed50(puVar14);
  _swift_release(param_4);
  (*pcVar23)(lVar21,lVar11);
LAB_100058bec:
  _swift_release(puVar12);
  return;
}

