// rea decompile_all
// name: FUN_10004fc80
// address: 0x10004fc80
// body: available
// range: 0x10004fc80-0x100051efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100051eb0) */

undefined1  [16] FUN_10004fc80(undefined *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined8 local_6e0;
  undefined *local_6c8;
  undefined *local_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  ulong uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined *local_600;
  undefined *local_5f8;
  undefined *local_5f0;
  undefined *puStack_5e8;
  undefined8 local_5e0;
  ulong uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  ulong local_540;
  ulong uStack_538;
  undefined *local_530;
  undefined *puStack_528;
  undefined8 local_520;
  ulong uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined *local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  ulong uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined *local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined *local_270;
  undefined *puStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100052b78();
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((undefined *)unaff_x20[10] != (undefined *)0x0) {
    puVar7 = (undefined *)unaff_x20[10];
  }
  uVar22 = *(ulong *)(puVar7 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar22 == 0) {
    local_6f0 = puVar11;
  }
  else {
    uVar25 = 0;
    local_6f0 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      puVar15 = (undefined8 *)(puVar7 + uVar25 * 0x60 + 0x20);
      uVar23 = uVar25;
      while( true ) {
        if (*(ulong *)(puVar7 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e1c);
          (*pcVar5)();
        }
        puStack_108 = (undefined *)puVar15[1];
        local_110 = *puVar15;
        uStack_f8 = puVar15[3];
        local_100 = puVar15[2];
        uStack_e8 = puVar15[5];
        local_f0 = puVar15[4];
        uStack_d8 = puVar15[7];
        local_e0 = puVar15[6];
        uStack_c8 = puVar15[9];
        local_d0 = puVar15[8];
        uStack_b8 = puVar15[0xb];
        local_c0 = puVar15[10];
        uVar25 = uVar23 + 1;
        if ((char)puStack_108 == '\x01') break;
        puVar15 = puVar15 + 0xc;
        uVar23 = uVar25;
        if (uVar22 == uVar25) goto LAB_10004fde0;
      }
      FUN_100052a08(&local_110,&local_1c0);
      puVar6 = local_6f0;
      _swift_isUniquelyReferenced_nonNull_native();
      local_270 = local_6f0;
      if (((ulong)puVar6 & 1) == 0) {
        FUN_100079908(0,*(long *)(local_6f0 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_270 + 0x10);
      if (*(ulong *)(local_270 + 0x18) >> 1 <= uVar26) {
        FUN_100079908(1 < *(ulong *)(local_270 + 0x18),uVar26 + 1,1);
      }
      *(ulong *)(local_270 + 0x10) = uVar26 + 1;
      *(undefined **)(local_270 + uVar26 * 0x60 + 0x28) = puStack_108;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x20) = local_110;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x38) = uStack_f8;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x30) = local_100;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x68) = uStack_c8;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x60) = local_d0;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x78) = uStack_b8;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x70) = local_c0;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x48) = uStack_e8;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x40) = local_f0;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x58) = uStack_d8;
      *(undefined8 *)(local_270 + uVar26 * 0x60 + 0x50) = local_e0;
      local_6f0 = local_270;
    } while (uVar22 - 1 != uVar23);
  }
LAB_10004fde0:
  _swift_bridgeObjectRelease(puVar7);
  local_540 = 0;
  uStack_538 = 0xe000000000000000;
  puVar7 = puVar11;
  if ((undefined *)*unaff_x20 != (undefined *)0x0) {
    puVar7 = (undefined *)*unaff_x20;
  }
  lVar17 = *(long *)(puVar7 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease();
  if (lVar17 == 0) {
    local_110 = 0;
    puStack_108 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x15b);
    __sSS6appendyySSF(0xd00000000000006b,0x80000001000c8e70);
    __sSS6appendyySSF(0x4c4548535f504153,0xe90000000000004c);
    __sSS6appendyySSF(0xd000000000000013,0x80000001000c8ee0);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0x202020200a,0xe500000000000000);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0xd00000000000003b,0x80000001000c8f20);
    __sSS6appendyySSF(0xd000000000000011,0x80000001000c8f00);
    __sSS6appendyySSF(0xd000000000000095,0x80000001000c8f60);
    puVar7 = puStack_108;
    __sSS6appendyySSF(local_110,puStack_108);
    _swift_bridgeObjectRelease();
    local_6e8 = (undefined *)0x612d206c61636f6c;
    local_6e0 = 0xe900000000000020;
  }
  else {
    local_6e8 = (undefined *)0x0;
    local_6e0 = 0xe000000000000000;
  }
  FUN_100052ca8();
  if ((undefined *)unaff_x20[0xb] != (undefined *)0x0) {
    puVar11 = (undefined *)unaff_x20[0xb];
  }
  uVar22 = *(ulong *)(puVar11 + 0x10);
  _swift_bridgeObjectRetain();
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 == 0) {
    local_6c8 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    uVar25 = 0;
    do {
      puVar15 = (undefined8 *)(puVar11 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
LAB_10004ffa4:
      if (*(ulong *)(puVar11 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e20);
        (*pcVar5)();
      }
      puStack_108 = (undefined *)puVar15[1];
      local_110 = *puVar15;
      uStack_f8 = puVar15[3];
      local_100 = puVar15[2];
      uStack_e8 = puVar15[5];
      local_f0 = puVar15[4];
      uStack_d8 = puVar15[7];
      local_e0 = puVar15[6];
      uStack_c8 = puVar15[9];
      local_d0 = puVar15[8];
      uStack_b8 = puVar15[0xb];
      local_c0 = puVar15[10];
      uStack_a8 = puVar15[0xd];
      uStack_b0 = puVar15[0xc];
      uStack_98 = puVar15[0xf];
      local_a0 = puVar15[0xe];
      uStack_88 = puVar15[0x11];
      local_90 = puVar15[0x10];
      uStack_78 = puVar15[0x13];
      local_80 = puVar15[0x12];
      local_70 = puVar15[0x14];
      uVar18 = 0xea00000000006c61;
      uVar25 = 0x6e6f697469736f70;
      if ((char)local_110 == '\0') {
LAB_10005000c:
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar25,uVar18,0x67616c66,0xe400000000000000,0);
        FUN_100052a44(&local_110,&local_1c0);
        _swift_bridgeObjectRelease(uVar18);
        if ((uVar25 & 1) != 0) goto LAB_100050070;
        uVar23 = uVar23 + 1;
        FUN_100052a80(&local_110);
        puVar15 = puVar15 + 0x15;
        if (uVar22 == uVar23) break;
        goto LAB_10004ffa4;
      }
      if ((char)local_110 == '\x01') {
        uVar18 = 0xe600000000000000;
        uVar25 = 0x6e6f6974706f;
        goto LAB_10005000c;
      }
      FUN_100052a44(&local_110,&local_1c0);
      _swift_bridgeObjectRelease(0xe400000000000000);
LAB_100050070:
      puVar14 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      local_270 = puVar6;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_270 + 0x10);
      if (*(ulong *)(local_270 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_270 + 0x18),uVar26 + 1,1);
      }
      uVar25 = uVar23 + 1;
      *(ulong *)(local_270 + 0x10) = uVar26 + 1;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x38) = uStack_f8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x30) = local_100;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x48) = uStack_e8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x40) = local_f0;
      *(undefined **)(local_270 + uVar26 * 0xa8 + 0x28) = puStack_108;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x20) = local_110;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x78) = uStack_b8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x70) = local_c0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x88) = uStack_a8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x80) = uStack_b0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x58) = uStack_d8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x50) = local_e0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x68) = uStack_c8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x60) = local_d0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xc0) = local_70;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xa8) = uStack_88;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xa0) = local_90;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xb8) = uStack_78;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xb0) = local_80;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x98) = uStack_98;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x90) = local_a0;
      puVar6 = local_270;
    } while (uVar22 - 1 != uVar23);
    uVar25 = 0;
    local_6c8 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      puVar15 = (undefined8 *)(puVar11 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
LAB_100050144:
      if (*(ulong *)(puVar11 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e24);
        (*pcVar5)();
      }
      puStack_108 = (undefined *)puVar15[1];
      local_110 = *puVar15;
      uStack_f8 = puVar15[3];
      local_100 = puVar15[2];
      uStack_e8 = puVar15[5];
      local_f0 = puVar15[4];
      uStack_d8 = puVar15[7];
      local_e0 = puVar15[6];
      uStack_c8 = puVar15[9];
      local_d0 = puVar15[8];
      uStack_b8 = puVar15[0xb];
      local_c0 = puVar15[10];
      uStack_a8 = puVar15[0xd];
      uStack_b0 = puVar15[0xc];
      uStack_98 = puVar15[0xf];
      local_a0 = puVar15[0xe];
      uStack_88 = puVar15[0x11];
      local_90 = puVar15[0x10];
      uStack_78 = puVar15[0x13];
      local_80 = puVar15[0x12];
      local_70 = puVar15[0x14];
      uVar18 = 0xea00000000006c61;
      uVar25 = 0x6e6f697469736f70;
      if ((char)local_110 == '\0') {
LAB_1000501b0:
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar25,uVar18,0x6e6f6974706f,0xe600000000000000,0);
        FUN_100052a44(&local_110,&local_1c0);
        _swift_bridgeObjectRelease(uVar18);
        if ((uVar25 & 1) != 0) goto LAB_100050210;
        uVar23 = uVar23 + 1;
        FUN_100052a80(&local_110);
        puVar15 = puVar15 + 0x15;
        if (uVar22 == uVar23) break;
        goto LAB_100050144;
      }
      if ((char)local_110 == '\x02') {
        uVar18 = 0xe400000000000000;
        uVar25 = 0x67616c66;
        goto LAB_1000501b0;
      }
      FUN_100052a44(&local_110,&local_1c0);
      _swift_bridgeObjectRelease(0xe600000000000000);
LAB_100050210:
      puVar14 = local_6c8;
      _swift_isUniquelyReferenced_nonNull_native();
      local_270 = local_6c8;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(local_6c8 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_270 + 0x10);
      if (*(ulong *)(local_270 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_270 + 0x18),uVar26 + 1,1);
      }
      uVar25 = uVar23 + 1;
      *(ulong *)(local_270 + 0x10) = uVar26 + 1;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x38) = uStack_f8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x30) = local_100;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x48) = uStack_e8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x40) = local_f0;
      *(undefined **)(local_270 + uVar26 * 0xa8 + 0x28) = puStack_108;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x20) = local_110;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x78) = uStack_b8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x70) = local_c0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x88) = uStack_a8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x80) = uStack_b0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x58) = uStack_d8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x50) = local_e0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x68) = uStack_c8;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x60) = local_d0;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xc0) = local_70;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xa8) = uStack_88;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xa0) = local_90;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xb8) = uStack_78;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0xb0) = local_80;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x98) = uStack_98;
      *(undefined8 *)(local_270 + uVar26 * 0xa8 + 0x90) = local_a0;
      local_6c8 = local_270;
    } while (uVar22 - 1 != uVar23);
  }
  _swift_bridgeObjectRelease(puVar11);
  puVar11 = PTR___sSSN_1000f02f8;
  uVar22 = *(ulong *)(puVar6 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(puVar6 + 0x20);
    puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e28);
        (*pcVar5)();
      }
      puStack_108 = (undefined *)puVar15[1];
      local_110 = *puVar15;
      uStack_f8 = puVar15[3];
      local_100 = puVar15[2];
      uStack_e8 = puVar15[5];
      local_f0 = puVar15[4];
      uStack_d8 = puVar15[7];
      local_e0 = puVar15[6];
      uStack_c8 = puVar15[9];
      local_d0 = puVar15[8];
      uStack_b8 = puVar15[0xb];
      local_c0 = puVar15[10];
      uStack_a8 = puVar15[0xd];
      uStack_b0 = puVar15[0xc];
      uStack_98 = puVar15[0xf];
      local_a0 = puVar15[0xe];
      uStack_88 = puVar15[0x11];
      local_90 = puVar15[0x10];
      uStack_78 = puVar15[0x13];
      local_80 = puVar15[0x12];
      local_70 = puVar15[0x14];
      puVar8 = &local_110;
      FUN_100052a44(puVar8,&local_1c0);
      FUN_100051efc();
      FUN_100052a80(&local_110);
      lVar17 = puVar8[2];
      lVar24 = *(long *)(puVar10 + 0x10);
      if (SCARRY8(lVar24,lVar17)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e2c);
        (*pcVar5)();
      }
      puVar14 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar14 == 0) || ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < lVar24 + lVar17)) {
        FUN_10006e610();
        puVar10 = puVar14;
        if (puVar8[2] != 0) goto LAB_1000503d8;
LAB_100050304:
        _swift_bridgeObjectRelease(puVar8);
        puVar14 = puVar10;
        if (lVar17 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e30);
          (*pcVar5)();
        }
      }
      else {
        puVar14 = puVar10;
        if (puVar8[2] == 0) goto LAB_100050304;
LAB_1000503d8:
        if ((long)((*(ulong *)(puVar14 + 0x18) >> 1) - *(long *)(puVar14 + 0x10)) < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e78);
          (*pcVar5)();
        }
        _swift_arrayInitWithCopy
                  (puVar14 + *(long *)(puVar14 + 0x10) * 0x10 + 0x20,puVar8 + 4,lVar17,puVar11);
        _swift_bridgeObjectRelease(puVar8);
        if (lVar17 != 0) {
          if (SCARRY8(*(long *)(puVar14 + 0x10),lVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e8c);
            (*pcVar5)();
          }
          *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + lVar17;
        }
      }
      uVar25 = uVar25 + 1;
      puVar15 = puVar15 + 0x15;
      puVar10 = puVar14;
    } while (uVar22 != uVar25);
  }
  lVar17 = *(long *)(puVar14 + 0x10);
  _swift_bridgeObjectRelease(puVar14);
  if (lVar17 == 0) {
    uVar25 = *(ulong *)(local_6c8 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
    if (uVar25 != 0) {
      uVar23 = 0;
      puVar15 = (undefined8 *)(local_6c8 + 0x20);
      puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
      do {
        if (*(ulong *)(local_6c8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e90);
          (*pcVar5)();
        }
        uStack_1b8 = puVar15[1];
        local_1c0 = *puVar15;
        uStack_1a8 = puVar15[3];
        local_1b0 = puVar15[2];
        uStack_198 = puVar15[5];
        local_1a0 = puVar15[4];
        uStack_188 = puVar15[7];
        local_190 = puVar15[6];
        uStack_178 = puVar15[9];
        local_180 = puVar15[8];
        uStack_168 = puVar15[0xb];
        local_170 = puVar15[10];
        uStack_158 = puVar15[0xd];
        local_160 = puVar15[0xc];
        uStack_148 = puVar15[0xf];
        local_150 = puVar15[0xe];
        uStack_138 = puVar15[0x11];
        local_140 = puVar15[0x10];
        uStack_128 = puVar15[0x13];
        local_130 = puVar15[0x12];
        local_120 = puVar15[0x14];
        puVar8 = &local_1c0;
        FUN_100052a44(puVar8,&local_270);
        FUN_100051efc();
        FUN_100052a80(&local_1c0);
        lVar17 = puVar8[2];
        lVar24 = *(long *)(puVar14 + 0x10);
        if (SCARRY8(lVar24,lVar17)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e94);
          (*pcVar5)();
        }
        puVar11 = puVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)puVar11 == 0) || ((long)(*(ulong *)(puVar14 + 0x18) >> 1) < lVar24 + lVar17)) {
          FUN_10006e610();
          puVar14 = puVar11;
          if (puVar8[2] != 0) goto LAB_100050544;
LAB_10005045c:
          _swift_bridgeObjectRelease(puVar8);
          puVar11 = puVar14;
          if (lVar17 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e98);
            (*pcVar5)();
          }
        }
        else {
          puVar11 = puVar14;
          if (puVar8[2] == 0) goto LAB_10005045c;
LAB_100050544:
          if ((long)((*(ulong *)(puVar11 + 0x18) >> 1) - *(long *)(puVar11 + 0x10)) < lVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051eac);
            (*pcVar5)();
          }
          _swift_arrayInitWithCopy
                    (puVar11 + *(long *)(puVar11 + 0x10) * 0x10 + 0x20,puVar8 + 4,lVar17,
                     PTR___sSSN_1000f02f8);
          _swift_bridgeObjectRelease(puVar8);
          if (lVar17 != 0) {
            if (SCARRY8(*(long *)(puVar11 + 0x10),lVar17)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100051eb0);
              (*pcVar5)();
            }
            *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + lVar17;
          }
        }
        uVar23 = uVar23 + 1;
        puVar15 = puVar15 + 0x15;
        puVar14 = puVar11;
      } while (uVar25 != uVar23);
    }
    lVar17 = *(long *)(puVar11 + 0x10);
    _swift_bridgeObjectRelease(puVar11);
    if (lVar17 == 0) {
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(local_6e0);
      uVar22 = *(ulong *)(local_6c8 + 0x10);
      puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
      goto joined_r0x0001000513c8;
    }
  }
  local_270 = (undefined *)0x0;
  puStack_268 = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x82);
  local_5f0 = local_270;
  puStack_5e8 = puStack_268;
  __sSS6appendyySSF(0x20202020,0xe400000000000000);
  __sSS6appendyySSF(local_6e8,local_6e0);
  __sSS6appendyySSF(0xd000000000000011,0x80000001000c8b80);
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    do {
      puVar15 = (undefined8 *)(puVar6 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
      while( true ) {
        if (*(ulong *)(puVar6 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e34);
          (*pcVar5)();
        }
        puStack_268 = (undefined *)puVar15[1];
        local_270 = (undefined *)*puVar15;
        uVar18 = puVar15[3];
        local_260 = puVar15[2];
        uStack_248 = puVar15[5];
        local_250 = puVar15[4];
        uStack_238 = puVar15[7];
        local_240 = puVar15[6];
        uStack_228 = puVar15[9];
        local_230 = puVar15[8];
        uStack_218 = puVar15[0xb];
        local_220 = puVar15[10];
        uStack_208 = puVar15[0xd];
        local_210 = puVar15[0xc];
        uStack_1f8 = puVar15[0xf];
        local_200 = puVar15[0xe];
        uStack_1e8 = puVar15[0x11];
        local_1f0 = puVar15[0x10];
        uStack_1d8 = puVar15[0x13];
        local_1e0 = puVar15[0x12];
        local_1d0 = puVar15[0x14];
        uVar25 = uVar23 + 1;
        uStack_258._1_1_ = (char)((ulong)uVar18 >> 8);
        uStack_258 = uVar18;
        if (uStack_258._1_1_ == '\x01') break;
        puVar15 = puVar15 + 0x15;
        uVar23 = uVar25;
        if (uVar22 == uVar25) goto LAB_10005077c;
      }
      FUN_100052a44(&local_270,&local_320);
      puVar14 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      local_3d0 = puVar11;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_3d0 + 0x10);
      if (*(ulong *)(local_3d0 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_3d0 + 0x18),uVar26 + 1,1);
      }
      *(ulong *)(local_3d0 + 0x10) = uVar26 + 1;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x38) = uStack_258;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x30) = local_260;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x48) = uStack_248;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x40) = local_250;
      *(undefined **)(local_3d0 + uVar26 * 0xa8 + 0x28) = puStack_268;
      *(undefined **)(local_3d0 + uVar26 * 0xa8 + 0x20) = local_270;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x78) = uStack_218;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x70) = local_220;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x88) = uStack_208;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x80) = local_210;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x58) = uStack_238;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x50) = local_240;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x68) = uStack_228;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x60) = local_230;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0xc0) = local_1d0;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0xa8) = uStack_1e8;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0xa0) = local_1f0;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0xb8) = uStack_1d8;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0xb0) = local_1e0;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x98) = uStack_1f8;
      *(undefined8 *)(local_3d0 + uVar26 * 0xa8 + 0x90) = local_200;
      puVar11 = local_3d0;
    } while (uVar22 - 1 != uVar23);
  }
LAB_10005077c:
  uVar22 = *(ulong *)(puVar11 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(puVar11 + 0x20);
    puVar10 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar11 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e40);
        (*pcVar5)();
      }
      puStack_268 = (undefined *)puVar15[1];
      local_270 = (undefined *)*puVar15;
      uStack_258 = puVar15[3];
      local_260 = puVar15[2];
      uStack_248 = puVar15[5];
      local_250 = puVar15[4];
      uStack_238 = puVar15[7];
      local_240 = puVar15[6];
      uStack_228 = puVar15[9];
      local_230 = puVar15[8];
      uStack_218 = puVar15[0xb];
      local_220 = puVar15[10];
      uStack_208 = puVar15[0xd];
      local_210 = puVar15[0xc];
      uStack_1f8 = puVar15[0xf];
      local_200 = puVar15[0xe];
      uStack_1e8 = puVar15[0x11];
      local_1f0 = puVar15[0x10];
      uStack_1d8 = puVar15[0x13];
      local_1e0 = puVar15[0x12];
      local_1d0 = puVar15[0x14];
      ppuVar9 = &local_270;
      FUN_100052a44(ppuVar9,&local_320);
      FUN_100051efc();
      FUN_100052a80(&local_270);
      puVar19 = ppuVar9[2];
      lVar17 = *(long *)(puVar10 + 0x10);
      if (SCARRY8(lVar17,(long)puVar19)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e44);
        (*pcVar5)();
      }
      puVar14 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar14 == 0) ||
         ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < (long)(puVar19 + lVar17))) {
        FUN_10006e610();
        puVar10 = puVar14;
        if (ppuVar9[2] != (undefined *)0x0) goto LAB_10005087c;
LAB_100050798:
        _swift_bridgeObjectRelease(ppuVar9);
        puVar14 = puVar10;
        if (puVar19 != (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e48);
          (*pcVar5)();
        }
      }
      else {
        puVar14 = puVar10;
        if (ppuVar9[2] == (undefined *)0x0) goto LAB_100050798;
LAB_10005087c:
        if ((long)((*(ulong *)(puVar14 + 0x18) >> 1) - *(long *)(puVar14 + 0x10)) < (long)puVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e7c);
          (*pcVar5)();
        }
        _swift_arrayInitWithCopy
                  (puVar14 + *(long *)(puVar14 + 0x10) * 0x10 + 0x20,ppuVar9 + 4,puVar19,
                   PTR___sSSN_1000f02f8);
        _swift_bridgeObjectRelease(ppuVar9);
        if (puVar19 != (undefined *)0x0) {
          if (SCARRY8(*(long *)(puVar14 + 0x10),(long)puVar19)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e9c);
            (*pcVar5)();
          }
          *(undefined **)(puVar14 + 0x10) = puVar19 + *(long *)(puVar14 + 0x10);
        }
      }
      uVar25 = uVar25 + 1;
      puVar15 = puVar15 + 0x15;
      puVar10 = puVar14;
    } while (uVar22 != uVar25);
  }
  _swift_release(puVar11);
  puVar11 = &DAT_100103ed8;
  local_320 = puVar14;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar10 = puVar11;
  FUN_100052ab4();
  uVar18 = 0x20;
  uVar13 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11);
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(uVar18,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  __sSS6appendyySSF(0x202020200a29,0xe600000000000000);
  __sSS6appendyySSF(local_6e8,local_6e0);
  __sSS6appendyySSF(0xd000000000000015,0x80000001000c8ba0);
  uVar22 = *(ulong *)(puVar6 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    do {
      puVar15 = (undefined8 *)(puVar6 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
      while( true ) {
        if (*(ulong *)(puVar6 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e3c);
          (*pcVar5)();
        }
        uStack_318 = puVar15[1];
        local_320 = (undefined *)*puVar15;
        uStack_308 = puVar15[3];
        uStack_310 = puVar15[2];
        uStack_2f8 = puVar15[5];
        local_300 = puVar15[4];
        uStack_2e8 = puVar15[7];
        local_2f0 = puVar15[6];
        uStack_2d8 = puVar15[9];
        local_2e0 = puVar15[8];
        uStack_2c8 = puVar15[0xb];
        local_2d0 = puVar15[10];
        uStack_2b8 = puVar15[0xd];
        local_2c0 = puVar15[0xc];
        uStack_2a8 = puVar15[0xf];
        local_2b0 = puVar15[0xe];
        uStack_298 = puVar15[0x11];
        local_2a0 = puVar15[0x10];
        uStack_288 = puVar15[0x13];
        local_290 = puVar15[0x12];
        local_280 = puVar15[0x14];
        uVar25 = uVar23 + 1;
        if ((uStack_308 & 0x100) == 0) break;
        puVar15 = puVar15 + 0x15;
        uVar23 = uVar25;
        if (uVar22 == uVar25) goto LAB_100050af4;
      }
      FUN_100052a44(&local_320,&local_3d0);
      puVar19 = puVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      local_480 = puVar14;
      if (((ulong)puVar19 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar14 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_480 + 0x10);
      if (*(ulong *)(local_480 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_480 + 0x18),uVar26 + 1,1);
      }
      *(ulong *)(local_480 + 0x10) = uVar26 + 1;
      *(ulong *)(local_480 + uVar26 * 0xa8 + 0x38) = uStack_308;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x30) = uStack_310;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x48) = uStack_2f8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x40) = local_300;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x28) = uStack_318;
      *(undefined **)(local_480 + uVar26 * 0xa8 + 0x20) = local_320;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x78) = uStack_2c8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x70) = local_2d0;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x88) = uStack_2b8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x80) = local_2c0;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x58) = uStack_2e8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x50) = local_2f0;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x68) = uStack_2d8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x60) = local_2e0;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0xc0) = local_280;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0xa8) = uStack_298;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0xa0) = local_2a0;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0xb8) = uStack_288;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0xb0) = local_290;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x98) = uStack_2a8;
      *(undefined8 *)(local_480 + uVar26 * 0xa8 + 0x90) = local_2b0;
      puVar14 = local_480;
    } while (uVar22 - 1 != uVar23);
  }
LAB_100050af4:
  _swift_release(puVar6);
  puVar6 = PTR___sSSN_1000f02f8;
  uVar22 = *(ulong *)(puVar14 + 0x10);
  puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(puVar14 + 0x20);
    puVar21 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar14 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e50);
        (*pcVar5)();
      }
      uStack_318 = puVar15[1];
      local_320 = (undefined *)*puVar15;
      uStack_308 = puVar15[3];
      uStack_310 = puVar15[2];
      uStack_2f8 = puVar15[5];
      local_300 = puVar15[4];
      uStack_2e8 = puVar15[7];
      local_2f0 = puVar15[6];
      uStack_2d8 = puVar15[9];
      local_2e0 = puVar15[8];
      uStack_2c8 = puVar15[0xb];
      local_2d0 = puVar15[10];
      uStack_2b8 = puVar15[0xd];
      local_2c0 = puVar15[0xc];
      uStack_2a8 = puVar15[0xf];
      local_2b0 = puVar15[0xe];
      uStack_298 = puVar15[0x11];
      local_2a0 = puVar15[0x10];
      uStack_288 = puVar15[0x13];
      local_290 = puVar15[0x12];
      local_280 = puVar15[0x14];
      ppuVar9 = &local_320;
      FUN_100052a44(ppuVar9,&local_3d0);
      FUN_100051efc();
      FUN_100052a80(&local_320);
      puVar20 = ppuVar9[2];
      lVar17 = *(long *)(puVar21 + 0x10);
      if (SCARRY8(lVar17,(long)puVar20)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e54);
        (*pcVar5)();
      }
      puVar19 = puVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar19 == 0) ||
         ((long)(*(ulong *)(puVar21 + 0x18) >> 1) < (long)(puVar20 + lVar17))) {
        FUN_10006e610();
        puVar21 = puVar19;
        if (ppuVar9[2] != (undefined *)0x0) goto LAB_100050c00;
LAB_100050b20:
        _swift_bridgeObjectRelease(ppuVar9);
        puVar19 = puVar21;
        if (puVar20 != (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e58);
          (*pcVar5)();
        }
      }
      else {
        puVar19 = puVar21;
        if (ppuVar9[2] == (undefined *)0x0) goto LAB_100050b20;
LAB_100050c00:
        if ((long)((*(ulong *)(puVar19 + 0x18) >> 1) - *(long *)(puVar19 + 0x10)) < (long)puVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e80);
          (*pcVar5)();
        }
        _swift_arrayInitWithCopy
                  (puVar19 + *(long *)(puVar19 + 0x10) * 0x10 + 0x20,ppuVar9 + 4,puVar20,puVar6);
        _swift_bridgeObjectRelease(ppuVar9);
        if (puVar20 != (undefined *)0x0) {
          if (SCARRY8(*(long *)(puVar19 + 0x10),(long)puVar20)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051ea0);
            (*pcVar5)();
          }
          *(undefined **)(puVar19 + 0x10) = puVar20 + *(long *)(puVar19 + 0x10);
        }
      }
      uVar25 = uVar25 + 1;
      puVar15 = puVar15 + 0x15;
      puVar21 = puVar19;
    } while (uVar22 != uVar25);
  }
  _swift_release(puVar14);
  uVar18 = 0x20;
  uVar13 = 0xe100000000000000;
  local_3d0 = puVar19;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11,puVar10);
  _swift_bridgeObjectRelease(puVar19);
  __sSS6appendyySSF(uVar18,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  __sSS6appendyySSF(0x202020200a29,0xe600000000000000);
  __sSS6appendyySSF(local_6e8,local_6e0);
  __sSS6appendyySSF(0xd000000000000013,0x80000001000c8bc0);
  uVar22 = *(ulong *)(local_6c8 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    do {
      puVar15 = (undefined8 *)(local_6c8 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
      while( true ) {
        if (*(ulong *)(local_6c8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e4c);
          (*pcVar5)();
        }
        uStack_3c8 = puVar15[1];
        local_3d0 = (undefined *)*puVar15;
        uVar18 = puVar15[3];
        local_3c0 = puVar15[2];
        uStack_3a8 = puVar15[5];
        local_3b0 = puVar15[4];
        uStack_398 = puVar15[7];
        local_3a0 = puVar15[6];
        uStack_388 = puVar15[9];
        uStack_390 = puVar15[8];
        uStack_378 = puVar15[0xb];
        local_380 = puVar15[10];
        uStack_368 = puVar15[0xd];
        uStack_370 = puVar15[0xc];
        uStack_358 = puVar15[0xf];
        local_360 = puVar15[0xe];
        uStack_348 = puVar15[0x11];
        local_350 = puVar15[0x10];
        uStack_338 = puVar15[0x13];
        local_340 = puVar15[0x12];
        local_330 = puVar15[0x14];
        uVar25 = uVar23 + 1;
        uStack_3b8._1_1_ = (char)((ulong)uVar18 >> 8);
        uStack_3b8 = uVar18;
        if (uStack_3b8._1_1_ == '\x01') break;
        puVar15 = puVar15 + 0x15;
        uVar23 = uVar25;
        if (uVar22 == uVar25) goto LAB_100050e38;
      }
      FUN_100052a44(&local_3d0,&local_480);
      puVar14 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      local_530 = puVar6;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_530 + 0x10);
      if (*(ulong *)(local_530 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_530 + 0x18),uVar26 + 1,1);
      }
      *(ulong *)(local_530 + 0x10) = uVar26 + 1;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x38) = uStack_3b8;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x30) = local_3c0;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x48) = uStack_3a8;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x40) = local_3b0;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x28) = uStack_3c8;
      *(undefined **)(local_530 + uVar26 * 0xa8 + 0x20) = local_3d0;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x78) = uStack_378;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x70) = local_380;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x88) = uStack_368;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x80) = uStack_370;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x58) = uStack_398;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x50) = local_3a0;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x68) = uStack_388;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x60) = uStack_390;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0xc0) = local_330;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0xa8) = uStack_348;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0xa0) = local_350;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0xb8) = uStack_338;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0xb0) = local_340;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x98) = uStack_358;
      *(undefined8 *)(local_530 + uVar26 * 0xa8 + 0x90) = local_360;
      puVar6 = local_530;
    } while (uVar22 - 1 != uVar23);
  }
LAB_100050e38:
  uVar25 = *(ulong *)(puVar6 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar25 != 0) {
    uVar23 = 0;
    puVar15 = (undefined8 *)(puVar6 + 0x20);
    puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e60);
        (*pcVar5)();
      }
      uStack_3c8 = puVar15[1];
      local_3d0 = (undefined *)*puVar15;
      uStack_3b8 = puVar15[3];
      local_3c0 = puVar15[2];
      uStack_3a8 = puVar15[5];
      local_3b0 = puVar15[4];
      uStack_398 = puVar15[7];
      local_3a0 = puVar15[6];
      uStack_388 = puVar15[9];
      uStack_390 = puVar15[8];
      uStack_378 = puVar15[0xb];
      local_380 = puVar15[10];
      uStack_368 = puVar15[0xd];
      uStack_370 = puVar15[0xc];
      uStack_358 = puVar15[0xf];
      local_360 = puVar15[0xe];
      uStack_348 = puVar15[0x11];
      local_350 = puVar15[0x10];
      uStack_338 = puVar15[0x13];
      local_340 = puVar15[0x12];
      local_330 = puVar15[0x14];
      ppuVar9 = &local_3d0;
      FUN_100052a44(ppuVar9,&local_480);
      FUN_100051efc();
      FUN_100052a80(&local_3d0);
      puVar21 = ppuVar9[2];
      lVar17 = *(long *)(puVar19 + 0x10);
      if (SCARRY8(lVar17,(long)puVar21)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e64);
        (*pcVar5)();
      }
      puVar14 = puVar19;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar14 == 0) ||
         ((long)(*(ulong *)(puVar19 + 0x18) >> 1) < (long)(puVar21 + lVar17))) {
        FUN_10006e610();
        puVar19 = puVar14;
        if (ppuVar9[2] != (undefined *)0x0) goto LAB_100050f28;
LAB_100050e54:
        _swift_bridgeObjectRelease(ppuVar9);
        puVar14 = puVar19;
        if (puVar21 != (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e68);
          (*pcVar5)();
        }
      }
      else {
        puVar14 = puVar19;
        if (ppuVar9[2] == (undefined *)0x0) goto LAB_100050e54;
LAB_100050f28:
        if ((long)((*(ulong *)(puVar14 + 0x18) >> 1) - *(long *)(puVar14 + 0x10)) < (long)puVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e84);
          (*pcVar5)();
        }
        _swift_arrayInitWithCopy
                  (puVar14 + *(long *)(puVar14 + 0x10) * 0x10 + 0x20,ppuVar9 + 4,puVar21,
                   PTR___sSSN_1000f02f8);
        _swift_bridgeObjectRelease(ppuVar9);
        if (puVar21 != (undefined *)0x0) {
          if (SCARRY8(*(long *)(puVar14 + 0x10),(long)puVar21)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051ea4);
            (*pcVar5)();
          }
          *(undefined **)(puVar14 + 0x10) = puVar21 + *(long *)(puVar14 + 0x10);
        }
      }
      uVar23 = uVar23 + 1;
      puVar15 = puVar15 + 0x15;
      puVar19 = puVar14;
    } while (uVar25 != uVar23);
  }
  _swift_release(puVar6);
  uVar18 = 0x20;
  uVar13 = 0xe100000000000000;
  local_480 = puVar14;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11,puVar10);
  _swift_bridgeObjectRelease(puVar14);
  __sSS6appendyySSF(uVar18,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  __sSS6appendyySSF(0x202020200a29,0xe600000000000000);
  __sSS6appendyySSF(local_6e8,local_6e0);
  _swift_bridgeObjectRelease(local_6e0);
  __sSS6appendyySSF(0xd000000000000017,0x80000001000c8be0);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    do {
      puVar15 = (undefined8 *)(local_6c8 + uVar25 * 0xa8 + 0x20);
      uVar23 = uVar25;
      while( true ) {
        if (*(ulong *)(local_6c8 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e5c);
          (*pcVar5)();
        }
        uStack_478 = puVar15[1];
        local_480 = (undefined *)*puVar15;
        uStack_468 = puVar15[3];
        local_470 = puVar15[2];
        uStack_458 = puVar15[5];
        local_460 = puVar15[4];
        uStack_448 = puVar15[7];
        local_450 = puVar15[6];
        uStack_438 = puVar15[9];
        uStack_440 = puVar15[8];
        uStack_428 = puVar15[0xb];
        local_430 = puVar15[10];
        uStack_418 = puVar15[0xd];
        uStack_420 = puVar15[0xc];
        uStack_408 = puVar15[0xf];
        local_410 = puVar15[0xe];
        uStack_3f8 = puVar15[0x11];
        local_400 = puVar15[0x10];
        uStack_3e8 = puVar15[0x13];
        local_3f0 = puVar15[0x12];
        local_3e0 = puVar15[0x14];
        uVar25 = uVar23 + 1;
        if ((uStack_468 & 0x100) == 0) break;
        puVar15 = puVar15 + 0x15;
        uVar23 = uVar25;
        if (uVar22 == uVar25) goto LAB_100051168;
      }
      FUN_100052a44(&local_480,&local_530);
      puVar14 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      local_6b0 = puVar6;
      if (((ulong)puVar14 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar26 = *(ulong *)(local_6b0 + 0x10);
      if (*(ulong *)(local_6b0 + 0x18) >> 1 <= uVar26) {
        FUN_1000798b4(1 < *(ulong *)(local_6b0 + 0x18),uVar26 + 1,1);
      }
      *(ulong *)(local_6b0 + 0x10) = uVar26 + 1;
      *(ulong *)(local_6b0 + uVar26 * 0xa8 + 0x38) = uStack_468;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x30) = local_470;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x48) = uStack_458;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x40) = local_460;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x28) = uStack_478;
      *(undefined **)(local_6b0 + uVar26 * 0xa8 + 0x20) = local_480;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x78) = uStack_428;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x70) = local_430;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x88) = uStack_418;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x80) = uStack_420;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x58) = uStack_448;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x50) = local_450;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x68) = uStack_438;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x60) = uStack_440;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0xc0) = local_3e0;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0xa8) = uStack_3f8;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0xa0) = local_400;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0xb8) = uStack_3e8;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0xb0) = local_3f0;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x98) = uStack_408;
      *(undefined8 *)(local_6b0 + uVar26 * 0xa8 + 0x90) = local_410;
      puVar6 = local_6b0;
    } while (uVar22 - 1 != uVar23);
  }
LAB_100051168:
  puVar14 = PTR___sSSN_1000f02f8;
  uVar22 = *(ulong *)(puVar6 + 0x10);
  puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar22 != 0) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(puVar6 + 0x20);
    puVar21 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e6c);
        (*pcVar5)();
      }
      uStack_478 = puVar15[1];
      local_480 = (undefined *)*puVar15;
      uStack_468 = puVar15[3];
      local_470 = puVar15[2];
      uStack_458 = puVar15[5];
      local_460 = puVar15[4];
      uStack_448 = puVar15[7];
      local_450 = puVar15[6];
      uStack_438 = puVar15[9];
      uStack_440 = puVar15[8];
      uStack_428 = puVar15[0xb];
      local_430 = puVar15[10];
      uStack_418 = puVar15[0xd];
      uStack_420 = puVar15[0xc];
      uStack_408 = puVar15[0xf];
      local_410 = puVar15[0xe];
      uStack_3f8 = puVar15[0x11];
      local_400 = puVar15[0x10];
      uStack_3e8 = puVar15[0x13];
      local_3f0 = puVar15[0x12];
      local_3e0 = puVar15[0x14];
      ppuVar9 = &local_480;
      FUN_100052a44(ppuVar9,&local_530);
      FUN_100051efc();
      FUN_100052a80(&local_480);
      puVar20 = ppuVar9[2];
      lVar17 = *(long *)(puVar21 + 0x10);
      if (SCARRY8(lVar17,(long)puVar20)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e70);
        (*pcVar5)();
      }
      puVar19 = puVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar19 == 0) ||
         ((long)(*(ulong *)(puVar21 + 0x18) >> 1) < (long)(puVar20 + lVar17))) {
        FUN_10006e610();
        puVar21 = puVar19;
        if (ppuVar9[2] != (undefined *)0x0) goto LAB_100051260;
LAB_10005118c:
        _swift_bridgeObjectRelease(ppuVar9);
        puVar19 = puVar21;
        if (puVar20 != (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e74);
          (*pcVar5)();
        }
      }
      else {
        puVar19 = puVar21;
        if (ppuVar9[2] == (undefined *)0x0) goto LAB_10005118c;
LAB_100051260:
        if ((long)((*(ulong *)(puVar19 + 0x18) >> 1) - *(long *)(puVar19 + 0x10)) < (long)puVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e88);
          (*pcVar5)();
        }
        _swift_arrayInitWithCopy
                  (puVar19 + *(long *)(puVar19 + 0x10) * 0x10 + 0x20,ppuVar9 + 4,puVar20,puVar14);
        _swift_bridgeObjectRelease(ppuVar9);
        if (puVar20 != (undefined *)0x0) {
          if (SCARRY8(*(long *)(puVar19 + 0x10),(long)puVar20)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100051ea8);
            (*pcVar5)();
          }
          *(undefined **)(puVar19 + 0x10) = puVar20 + *(long *)(puVar19 + 0x10);
        }
      }
      uVar25 = uVar25 + 1;
      puVar15 = puVar15 + 0x15;
      puVar21 = puVar19;
    } while (uVar22 != uVar25);
  }
  _swift_release(puVar6);
  uVar18 = 0x20;
  uVar13 = 0xe100000000000000;
  local_530 = puVar19;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar11,puVar10);
  _swift_bridgeObjectRelease(puVar19);
  __sSS6appendyySSF(uVar18,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  uVar18 = 0xe600000000000000;
  __sSS6appendyySSF(0x202020200a29,0xe600000000000000);
  FUN_10004fa10();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar18);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  local_530 = *(undefined **)(puVar7 + 0x10);
  puVar11 = local_530 + 1;
  pcVar16 = puVar7 + 0x39;
  do {
    puVar11 = puVar11 + -1;
    if (puVar11 == (undefined *)0x0) goto LAB_10005136c;
    cVar3 = *pcVar16;
    pcVar16 = pcVar16 + 0xa8;
  } while (cVar3 != '\x01');
  local_530 = (undefined *)0xffffffffffffffff;
LAB_10005136c:
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(10,0xe100000000000000);
  puVar11 = puStack_5e8;
  __sSS6appendyySSF(local_5f0,puStack_5e8);
  _swift_bridgeObjectRelease(puVar11);
  uVar22 = *(ulong *)(local_6c8 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
joined_r0x0001000513c8:
  PTR___swiftEmptyArrayStorage_1000f0740 = puVar11;
  if (uVar22 != 0) {
    uVar25 = 0;
    puVar15 = (undefined8 *)(local_6c8 + 0x20);
    do {
      if (*(ulong *)(local_6c8 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e38);
        (*pcVar5)();
      }
      puStack_5e8 = (undefined *)puVar15[1];
      local_5f0 = (undefined *)*puVar15;
      uStack_5d8 = puVar15[3];
      local_5e0 = puVar15[2];
      uStack_5c8 = puVar15[5];
      local_5d0 = puVar15[4];
      uStack_5b8 = puVar15[7];
      uStack_5c0 = puVar15[6];
      uStack_5a8 = puVar15[9];
      local_5b0 = puVar15[8];
      uStack_598 = puVar15[0xb];
      uStack_5a0 = puVar15[10];
      uStack_588 = puVar15[0xd];
      local_590 = puVar15[0xc];
      uStack_578 = puVar15[0xf];
      uStack_580 = puVar15[0xe];
      uStack_568 = puVar15[0x11];
      local_570 = puVar15[0x10];
      uStack_558 = puVar15[0x13];
      uStack_560 = puVar15[0x12];
      local_550 = puVar15[0x14];
      local_530 = local_5f0;
      puStack_528 = puStack_5e8;
      local_520 = local_5e0;
      uStack_518 = uStack_5d8;
      local_510 = local_5d0;
      uStack_508 = uStack_5c8;
      local_500 = uStack_5c0;
      uStack_4f8 = uStack_5b8;
      local_4f0 = local_5b0;
      uStack_4e8 = uStack_5a8;
      local_4e0 = uStack_5a0;
      uStack_4d8 = uStack_598;
      local_4d0 = local_590;
      uStack_4c8 = uStack_588;
      local_4c0 = uStack_580;
      uStack_4b8 = uStack_578;
      local_4b0 = local_570;
      uStack_4a8 = uStack_568;
      uStack_4a0 = uStack_560;
      uStack_498 = uStack_558;
      local_490 = local_550;
      FUN_100052a44(&local_530,&local_6b0);
      FUN_100052040(&local_600,&local_5f0,unaff_x20);
      uStack_628 = uStack_568;
      local_630 = local_570;
      uStack_618 = uStack_558;
      uStack_620 = uStack_560;
      local_610 = local_550;
      uStack_668 = uStack_5a8;
      local_670 = local_5b0;
      uStack_658 = uStack_598;
      uStack_660 = uStack_5a0;
      uStack_648 = uStack_588;
      local_650 = local_590;
      uStack_638 = uStack_578;
      uStack_640 = uStack_580;
      puStack_6a8 = puStack_5e8;
      local_6b0 = local_5f0;
      uStack_698 = uStack_5d8;
      uStack_6a0 = local_5e0;
      uStack_688 = uStack_5c8;
      local_690 = local_5d0;
      uStack_678 = uStack_5b8;
      uStack_680 = uStack_5c0;
      FUN_100052a80(&local_6b0);
      puVar14 = local_5f8;
      puVar6 = local_600;
      if (local_5f8 != (undefined *)0x0) {
        puVar10 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar19 = puVar11;
        if (((ulong)puVar10 & 1) == 0) {
          puVar19 = (undefined *)0x0;
          FUN_10006e610(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar23 = *(ulong *)(puVar19 + 0x10);
        puVar11 = puVar19;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar23) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar19 + 0x18));
          FUN_10006e610(puVar11,uVar23 + 1,1,puVar19);
        }
        *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
        *(undefined **)(puVar11 + uVar23 * 0x10 + 0x20) = puVar6;
        *(undefined **)(puVar11 + uVar23 * 0x10 + 0x28) = puVar14;
      }
      uVar25 = uVar25 + 1;
      puVar15 = puVar15 + 0x15;
    } while (uVar22 != uVar25);
  }
  _swift_release(local_6c8);
  puVar6 = &DAT_100103ed8;
  local_530 = puVar11;
  FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
  puVar10 = puVar6;
  FUN_100052ab4();
  uVar25 = 10;
  puVar14 = (undefined *)0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar6);
  _swift_bridgeObjectRelease(puVar11);
  uVar22 = uVar25 & 0xffffffffffff;
  if (((ulong)puVar14 & 0x2000000000000000) != 0) {
    uVar22 = (ulong)puVar14 >> 0x38 & 0xf;
  }
  if (uVar22 != 0) {
    local_530 = (undefined *)0x0;
    puStack_528 = (undefined *)0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x48);
    __sSS6appendyySSF(0xd00000000000003c,0x80000001000c8c00);
    __sSS6appendyySSF(uVar25,puVar14);
    _swift_bridgeObjectRelease(puVar14);
    __sSS6appendyySSF(0x617365202020200a,0xea00000000000a63);
    puVar14 = puStack_528;
    __sSS6appendyySSF(local_530,puStack_528);
  }
  _swift_bridgeObjectRelease(puVar14);
  uVar25 = 0;
  uVar22 = 0;
  uVar23 = *(ulong *)(puVar7 + 0x10);
  puVar14 = (undefined *)0x1;
  puVar11 = (undefined *)0x2;
  local_6e8 = PTR___swiftEmptyArrayStorage_1000f0740;
LAB_1000516a0:
  lVar17 = uVar22 * 0xa8 + 0x20;
  puVar19 = puVar14;
  do {
    puVar14 = puVar11;
    if (uVar23 == uVar22) {
      _swift_bridgeObjectRelease();
      if (*(long *)(local_6e8 + 0x10) != 0) {
        local_5f0 = (undefined *)0x0;
        puStack_5e8 = (undefined *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x52);
        __sSS6appendyySSF(0xd000000000000047,0x80000001000c8c60);
        local_6b0 = local_6e8;
        uVar18 = 0;
        uVar13 = 0xe000000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar6,puVar10);
        _swift_bridgeObjectRelease(local_6e8);
        __sSS6appendyySSF(uVar18,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        __sSS6appendyySSF(0x6361736520202020,0xe90000000000000a);
        local_6e8 = puStack_5e8;
        __sSS6appendyySSF(local_5f0,puStack_5e8);
      }
      _swift_bridgeObjectRelease(local_6e8);
      if (*(long *)(local_6f0 + 0x10) != 0) {
        local_5f0 = (undefined *)0x0;
        puStack_5e8 = (undefined *)0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x1a3);
        local_600 = local_5f0;
        local_5f8 = puStack_5e8;
        __sSS6appendyySSF(0xd0000000000000d3,0x80000001000c8cb0);
        lVar17 = *(long *)(local_6f0 + 0x10);
        puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (lVar17 != 0) {
          local_5f0 = PTR___swiftEmptyArrayStorage_1000f0740;
          FUN_1000798d0(0,lVar17,0);
          puVar15 = (undefined8 *)(local_6f0 + 0x38);
          lVar24 = lVar17;
          puVar7 = local_5f0;
          do {
            uVar18 = puVar15[-1];
            uVar13 = *puVar15;
            uVar22 = *(ulong *)(puVar7 + 0x10);
            uVar25 = *(ulong *)(puVar7 + 0x18);
            local_5f0 = puVar7;
            _swift_bridgeObjectRetain(uVar13);
            if (uVar25 >> 1 <= uVar22) {
              FUN_1000798d0(1 < uVar25,uVar22 + 1,1);
              puVar7 = local_5f0;
            }
            *(ulong *)(puVar7 + 0x10) = uVar22 + 1;
            *(undefined8 *)(puVar7 + uVar22 * 0x10 + 0x20) = uVar18;
            *(undefined8 *)(puVar7 + uVar22 * 0x10 + 0x28) = uVar13;
            puVar15 = puVar15 + 0xc;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        uVar18 = 0x7c;
        uVar13 = 0xe100000000000000;
        local_5f0 = puVar7;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x7c,0xe100000000000000,puVar6,puVar10);
        _swift_bridgeObjectRelease(puVar7);
        __sSS6appendyySSF(uVar18,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        __sSS6appendyySSF(0xd00000000000003b,0x80000001000c8d90);
        __sSS6appendyySSF(param_1,param_2);
        __sSS6appendyySSF(0xd00000000000006b,0x80000001000c8dd0);
        puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
        if (lVar17 != 0) {
          FUN_1000798d0(0,lVar17,0);
          puVar15 = (undefined8 *)(local_6f0 + 0x20);
          do {
            puStack_5e8 = (undefined *)puVar15[1];
            local_5f0 = (undefined *)*puVar15;
            uVar22 = puVar15[3];
            uVar13 = puVar15[2];
            uStack_5c8 = puVar15[5];
            local_5d0 = puVar15[4];
            uStack_5b8 = puVar15[7];
            uStack_5c0 = puVar15[6];
            uStack_5a8 = puVar15[9];
            local_5b0 = puVar15[8];
            uStack_598 = puVar15[0xb];
            uStack_5a0 = puVar15[10];
            local_5e0 = uVar13;
            uStack_5d8 = uVar22;
            FUN_100052a08(&local_5f0,&local_6b0);
            uVar18 = 1;
            FUN_100052ee8(1,uVar13,uVar22);
            FUN_100052b44(&local_5f0);
            uVar22 = *(ulong *)(puVar7 + 0x10);
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar22) {
              FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar22 + 1,1);
            }
            *(ulong *)(puVar7 + 0x10) = uVar22 + 1;
            *(undefined8 *)(puVar7 + uVar22 * 0x10 + 0x20) = uVar18;
            *(undefined8 *)(puVar7 + uVar22 * 0x10 + 0x28) = uVar13;
            puVar15 = puVar15 + 0xc;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        uVar18 = 0x20;
        uVar13 = 0xe100000000000000;
        local_5f0 = puVar7;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar6,puVar10);
        _swift_bridgeObjectRelease(puVar7);
        __sSS6appendyySSF(uVar18,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        __sSS6appendyySSF(0xd000000000000024,0x80000001000c8e40);
        puVar7 = local_5f8;
        __sSS6appendyySSF(local_600,local_5f8);
        _swift_bridgeObjectRelease(puVar7);
      }
      uVar22 = local_540 & 0xffffffffffff;
      if ((uStack_538 & 0x2000000000000000) != 0) {
        uVar22 = uStack_538 >> 0x38 & 0xf;
      }
      uVar25 = uStack_538;
      uVar23 = local_540;
      if (uVar22 == 0) {
        _swift_bridgeObjectRelease(uStack_538);
        uVar23 = 0xa3a20202020;
        uVar25 = 0xe600000000000000;
      }
      local_600 = param_1;
      local_5f8 = (undefined *)param_2;
      __sSS6appendyySSF(0xa7b202928,0xe500000000000000);
      __sSS6appendyySSF(uVar23,uVar25);
      __sSS6appendyySSF(0xa0a7d,0xe300000000000000);
      puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
      lVar17 = *(long *)(local_6f0 + 0x10);
      if (lVar17 == 0) {
        _swift_bridgeObjectRelease(uVar25);
        _swift_release(local_6f0);
        puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
      }
      else {
        FUN_1000798d0(0,lVar17,0);
        lVar24 = 0x20;
        do {
          puVar15 = (undefined8 *)(local_6f0 + lVar24);
          puStack_5e8 = (undefined *)puVar15[1];
          local_5f0 = (undefined *)*puVar15;
          uStack_5d8 = puVar15[3];
          local_5e0 = puVar15[2];
          uStack_5c8 = puVar15[5];
          local_5d0 = puVar15[4];
          uStack_5b8 = puVar15[7];
          uStack_5c0 = puVar15[6];
          uStack_5a8 = puVar15[9];
          local_5b0 = puVar15[8];
          uStack_598 = puVar15[0xb];
          uStack_5a0 = puVar15[10];
          ppuVar9 = &local_5f0;
          ppuVar12 = &local_6b0;
          FUN_100052a08();
          FUN_10004fc80();
          FUN_100052b44(&local_5f0);
          uVar22 = *(ulong *)(puVar7 + 0x10);
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar22) {
            FUN_1000798d0(1 < *(ulong *)(puVar7 + 0x18),uVar22 + 1,1);
          }
          *(ulong *)(puVar7 + 0x10) = uVar22 + 1;
          *(undefined ***)(puVar7 + uVar22 * 0x10 + 0x20) = ppuVar9;
          *(undefined ***)(puVar7 + uVar22 * 0x10 + 0x28) = ppuVar12;
          lVar24 = lVar24 + 0x60;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        _swift_bridgeObjectRelease(uVar25);
        _swift_release(local_6f0);
      }
      uVar18 = 0;
      uVar13 = 0xe000000000000000;
      local_6b0 = puVar7;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar7);
      __sSS6appendyySSF(uVar18,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      auVar4._8_8_ = local_5f8;
      auVar4._0_8_ = local_600;
      return auVar4;
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e18);
      (*pcVar5)();
    }
    puVar15 = (undefined8 *)(puVar7 + lVar17);
    puStack_528 = (undefined *)puVar15[1];
    local_530 = (undefined *)*puVar15;
    uVar26 = puVar15[3];
    local_520 = puVar15[2];
    uStack_508 = puVar15[5];
    local_510 = puVar15[4];
    uStack_4f8 = puVar15[7];
    local_500 = puVar15[6];
    uStack_4e8 = puVar15[9];
    local_4f0 = puVar15[8];
    uStack_4d8 = puVar15[0xb];
    local_4e0 = puVar15[10];
    uStack_4c8 = puVar15[0xd];
    local_4d0 = puVar15[0xc];
    uStack_4b8 = puVar15[0xf];
    local_4c0 = puVar15[0xe];
    uStack_4a8 = puVar15[0x11];
    local_4b0 = puVar15[0x10];
    uStack_498 = puVar15[0x13];
    uStack_4a0 = puVar15[0x12];
    local_490 = puVar15[0x14];
    uStack_518 = uVar26;
    if ((uVar25 & 1) == 0) {
      uVar25 = uVar26 >> 8 & 0xff;
      ppuVar9 = &local_5f0;
      FUN_100052a44(&local_530);
      ppuVar12 = &local_530;
      FUN_100052368();
      uVar2 = (ulong)ppuVar12 & 0xffffffffffff;
      if (((ulong)ppuVar9 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)ppuVar9 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) break;
      _swift_bridgeObjectRelease(ppuVar9);
      FUN_100052a80(&local_530);
    }
    else {
      uVar25 = 1;
    }
    lVar17 = lVar17 + 0xa8;
    uVar22 = uVar22 + 1;
    puVar11 = puVar14 + 1;
    puVar19 = puVar14;
    if (puVar14 + 1 == (undefined *)0x8000000000000000) goto LAB_100051e10;
  } while( true );
  local_5f0 = (undefined *)0x0;
  puStack_5e8 = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x24);
  puVar11 = puStack_5e8;
  _swift_bridgeObjectRelease(puStack_5e8);
  local_5f0 = (undefined *)0x20202020;
  puStack_5e8 = (undefined *)0xe400000000000000;
  if ((uVar26 & 0x100) == 0) {
    local_6b0 = puVar19;
    FUN_100052b04();
    __sSzsE11descriptionSSvg(PTR___sSiN_1000f03e8,puVar11);
  }
  else {
    puVar11 = (undefined *)0xe100000000000000;
  }
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar11);
  __sSS6appendyySSF(0xa29,0xe200000000000000);
  uVar18 = 8;
  FUN_100058858(8,ppuVar12,ppuVar9);
  _swift_bridgeObjectRelease(ppuVar9);
  __sSS6appendyySSF(uVar18,ppuVar12);
  _swift_bridgeObjectRelease(ppuVar12);
  __sSS6appendyySSF(0xd00000000000001a,0x80000001000c8c40);
  FUN_100052a80(&local_530);
  puVar19 = puStack_5e8;
  puVar11 = local_5f0;
  puVar21 = local_6e8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar21 & 1) == 0) {
    plVar1 = (long *)(local_6e8 + 0x10);
    local_6e8 = (undefined *)0x0;
    FUN_10006e610(0,*plVar1 + 1,1);
  }
  uVar26 = *(ulong *)(local_6e8 + 0x10);
  if (*(ulong *)(local_6e8 + 0x18) >> 1 <= uVar26) {
    puVar21 = (undefined *)(ulong)(1 < *(ulong *)(local_6e8 + 0x18));
    FUN_10006e610(puVar21,uVar26 + 1,1,local_6e8);
    local_6e8 = puVar21;
  }
  uVar22 = uVar22 + 1;
  *(ulong *)(local_6e8 + 0x10) = uVar26 + 1;
  *(undefined **)(local_6e8 + uVar26 * 0x10 + 0x20) = puVar11;
  *(undefined **)(local_6e8 + uVar26 * 0x10 + 0x28) = puVar19;
  puVar11 = puVar14 + 1;
  if (SCARRY8((long)puVar14,1)) {
LAB_100051e10:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100051e14);
    (*pcVar5)();
  }
  goto LAB_1000516a0;
}

