// rea decompile_all
// name: FUN_100211688
// address: 0x100211688
// body: available
// range: 0x100211688-0x100212533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

uint FUN_100211688(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  int iVar12;
  uint *extraout_x13;
  uint uVar13;
  long unaff_x20;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 auStack_820 [16];
  uint *local_810;
  int local_808;
  uint *local_800;
  int local_7f8;
  uint *local_7f0;
  uint local_7a4;
  undefined1 auStack_750 [16];
  uint *local_740;
  int local_738;
  uint *local_730;
  char local_720;
  undefined7 uStack_71f;
  uint *local_718;
  char local_710;
  uint local_69c;
  ulong local_698;
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
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 local_4a0;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
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
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0;
  undefined8 local_3e0;
  long lStack_3d8;
  undefined8 local_3d0;
  ulong uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  ulong local_380;
  undefined8 uStack_378;
  ulong local_370;
  undefined8 local_360;
  long lStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  ulong local_300;
  undefined8 uStack_2f8;
  ulong local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined1 local_2d8;
  undefined4 local_2d7;
  undefined3 uStack_2d3;
  ulong local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  uint local_2a0 [4];
  uint *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  ulong local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  ulong uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulong local_240;
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
  undefined1 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  long local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 local_88;
  
  uVar9 = (ulong)*param_1;
  uVar14 = uVar9 | param_3 << 0x20;
  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
  uVar1 = *(ulong *)(param_2 + 4);
  uVar16 = *(undefined8 *)(param_2 + 6);
  FUN_100401b14();
  iVar17 = (int)param_3;
  local_740 = param_1;
  local_738 = iVar17;
  local_730 = param_2;
  FUN_1003fb48c(FUN_100217a98,auStack_750,0xd0000000000000b2,0x8000000100885c70,0xd000000000000026,
                0x80000001008a45e0,0x152,0);
  uStack_f0 = 0xc000000000000000;
  local_f8 = 0;
  uStack_d8 = 0xc000000000000000;
  uStack_e0 = 0;
  local_108 = uVar16;
  uStack_100 = uVar1;
  local_e8 = uVar14;
  FUN_100217aa8(&local_108);
  uStack_1f8 = uStack_a0;
  local_200 = local_a8;
  uStack_1e8 = uStack_90;
  local_1f0 = uStack_98;
  local_1e0 = local_88;
  uStack_238 = uStack_e0;
  local_240 = local_e8;
  uStack_228 = uStack_d0;
  local_230 = uStack_d8;
  uStack_208 = uStack_b0;
  local_210 = uStack_b8;
  uStack_218 = uStack_c0;
  local_220 = local_c8;
  uStack_248 = uStack_f0;
  local_250 = local_f8;
  uStack_258 = uStack_100;
  local_260 = local_108;
  uVar16 = *(undefined8 *)(param_1 + 2);
  FUN_100008184(0,0xc000000000000000);
  FUN_100040b80(uVar14,0,0xc000000000000000);
  FUN_100212e9c(&local_690,&local_260,uVar16,1);
  FUN_100006cdc(0,0xc000000000000000);
  switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
  uStack_408 = uStack_608;
  local_410 = local_610;
  uStack_3f8 = uStack_5f8;
  uStack_400 = uStack_600;
  local_3f0 = local_5f0;
  uStack_448 = uStack_648;
  local_450 = local_650;
  uStack_438 = uStack_638;
  uStack_440 = uStack_640;
  uStack_428 = uStack_628;
  local_430 = local_630;
  uStack_418 = uStack_618;
  uStack_420 = uStack_620;
  uStack_488 = uStack_688;
  local_490 = local_690;
  uStack_478 = uStack_678;
  uStack_480 = uStack_680;
  uStack_468 = uStack_668;
  local_470 = local_670;
  uStack_458 = uStack_658;
  uStack_460 = uStack_660;
  iVar5 = (int)&local_490;
  FUN_100217ac0();
  local_7f0 = param_1;
  if (iVar5 == 1) {
    FUN_100008290(&local_490);
LAB_100211a78:
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb4ec(FUN_100217ac8,&local_800,0xd0000000000000b2,0x8000000100885c70,0xd000000000000026,
                  0x80000001008a45e0,0x158,0);
    FUN_100212534(uVar9,uVar16,param_3,6,1);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
  }
  else {
    puVar7 = &local_490;
    FUN_100008290();
    uStack_3b8 = puVar7[5];
    local_3c0 = puVar7[4];
    uStack_3a8 = puVar7[7];
    local_3b0 = puVar7[6];
    lStack_3d8 = puVar7[1];
    local_3e0 = *puVar7;
    uStack_3c8 = puVar7[3];
    local_3d0 = puVar7[2];
    local_370 = puVar7[0xe];
    uStack_388 = puVar7[0xb];
    local_390 = puVar7[10];
    uStack_378 = puVar7[0xd];
    local_380 = puVar7[0xc];
    uStack_398 = puVar7[9];
    local_3a0 = puVar7[8];
    if ((((local_380 >> 8 == 0xffffffff) && ((local_370 & 0x3000000000000000) == 0)) ||
        (((uint)(local_370 >> 0x39) & 0x18 | (uint)(local_380 >> 0x3d)) != 2)) ||
       (local_178 = (undefined1)local_380, local_1d8 = local_3e0, local_1d0 = lStack_3d8,
       local_1c8 = local_3d0, local_1c0 = uStack_3c8, uStack_1b8 = local_3c0, local_1b0 = uStack_3b8
       , uStack_1a8 = local_3b0, local_1a0 = uStack_3a8, uStack_198 = local_3a0,
       local_190 = uStack_398, uStack_188 = local_390, local_180 = uStack_388,
       ((uint)local_380 & 0xff) != 2)) goto LAB_100211a78;
    local_1c8._1_4_ = (undefined4)((ulong)local_3d0 >> 8);
    uStack_2d3 = (undefined3)((ulong)local_3d0 >> 0x28);
    local_2d8 = (undefined1)local_3d0;
    local_2e8 = local_3e0;
    local_2e0 = lStack_3d8;
    local_2d7 = local_1c8._1_4_;
    local_2d0 = uStack_3c8;
    local_2c8 = local_3c0;
    uStack_2c0 = uStack_3b8;
    uStack_2b8 = local_3b0;
    uStack_2b0 = uStack_3a8;
    local_2a8 = local_3a0;
    local_1c8 = local_3d0;
    if (lStack_3d8 != 1) goto LAB_100211a78;
    local_1c8 = local_3d0;
    if (uStack_3c8 <= uVar1) {
      local_698 = uStack_3c8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_800 = param_1;
      local_7f8 = iVar17;
      local_7f0 = param_2;
      FUN_10007f314(&local_1d8,&local_540,&DAT_100a7da38,&DAT_100812f40);
      FUN_10007f314(&local_3e0,&local_540,&DAT_100a75b98,&DAT_10080a1d0);
      FUN_1003fb48c(FUN_100217ad8,&local_810,0xd0000000000000b2,0x8000000100885c70,
                    0xd000000000000026,0x80000001008a45e0,0x164,0);
      local_69c = 0;
      if (local_698 < uVar1) {
        local_7a4 = 0;
        do {
          uVar3 = local_698;
          puVar15 = *(uint **)(unaff_x20 + 0x18);
          (*(code *)PTR____chkstk_darwin_100995498)();
                    /* WARNING: Ignoring partial resolution of indirect */
          __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                    (&local_720,FUN_1002188f8,&local_7f0,PTR___sSbN_1009958c8);
          if (local_720 != '\x01') {
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_7f0 = param_1;
                    /* WARNING: Ignoring partial resolution of indirect */
            FUN_1003fb48c(FUN_100217aec,&local_800,0xd0000000000000b2,0x8000000100885c70,
                          0xd000000000000026,0x80000001008a45e0,0x169,0);
            FUN_100006cdc(0,0xc000000000000000);
            switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
            FUN_100040bb4(&local_1d8,&DAT_100a7da38,&DAT_100812f40);
            FUN_100040bb4(&local_3e0,&DAT_100a75b98,&DAT_10080a1d0);
            FUN_100040bb4(&local_690,&DAT_100a7dca8,&DAT_100812f58);
            goto LAB_100211b30;
          }
          if ((long)(uVar1 - uVar3) < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10021251c);
            (*pcVar4)();
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
                    /* WARNING: Ignoring partial resolution of indirect */
          puVar8 = &DAT_100a7dcb0;
          local_7f0 = puVar15;
          FUN_100004bb4(&DAT_100a7dcb0,&DAT_100812f60);
          __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                    (&local_720,FUN_100217afc,&local_800,puVar8);
          puVar15 = local_718;
          lVar2 = CONCAT71(uStack_71f,local_720);
          if (local_710 == '\x01') {
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_7f0 = param_1;
                    /* WARNING: Ignoring partial resolution of indirect */
                    /* WARNING: Ignoring partial resolution of indirect */
            FUN_1003fb4ec(FUN_100217b1c,&local_800,0xd0000000000000b2,0x8000000100885c70,
                          0xd000000000000026,0x80000001008a45e0,0x172,0);
            FUN_100212534(uVar9,uVar16,param_3,6,1);
LAB_100212390:
            FUN_100006cdc(0,0xc000000000000000);
            switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
            FUN_100040bb4(&local_1d8,&DAT_100a7da38,&DAT_100812f40);
            goto LAB_100211a70;
          }
          uVar13 = (uint)((ulong)local_718 >> 0x20);
          iVar5 = (int)((uint7)uStack_71f >> 0x18);
          iVar12 = (int)lVar2;
          if (1 < uVar13 >> 0x1e) {
            if (uVar13 >> 0x1e == 2) {
              puVar10 = (uint *)(*(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10));
              if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100212528);
                (*pcVar4)();
              }
              goto LAB_100211e24;
            }
LAB_10021217c:
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_800 = &local_69c;
            local_7f8 = (int)&local_698;
            local_7f0 = extraout_x13;
            local_810 = param_1;
            local_808 = iVar17;
            FUN_1003fb4ec(FUN_100217b30,auStack_820,0xd0000000000000b2,0x8000000100885c70,
                          0xd000000000000026,0x80000001008a45e0,0x177,0);
            FUN_100212534(uVar9,uVar16,param_3,6,1);
            FUN_100217b48(lVar2,local_718,0);
            goto LAB_100212390;
          }
          if (uVar13 >> 0x1e == 0) {
            puVar10 = (uint *)((ulong)local_718 >> 0x30 & 0xff);
          }
          else {
            if (SBORROW4(iVar5,iVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10021252c);
              (*pcVar4)();
            }
            puVar10 = (uint *)(long)(iVar5 - iVar12);
          }
LAB_100211e24:
          if (puVar10 != extraout_x13) goto LAB_10021217c;
          switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
          FUN_100008184(lVar2,puVar15);
          FUN_100006cdc(0,0xc000000000000000);
          local_2a0[0] = local_7a4;
          local_290 = puVar15;
          uStack_280 = 0xc000000000000000;
          local_288 = 0;
          uStack_268 = 0xc000000000000000;
          local_270 = 0;
          local_278 = uVar14;
          FUN_1002145cc(&local_5e8,local_2a0,uVar16);
          uStack_4b8 = uStack_560;
          local_4c0 = local_568;
          uStack_4a8 = uStack_550;
          uStack_4b0 = uStack_558;
          local_4a0 = local_548;
          uStack_4f8 = uStack_5a0;
          local_500 = local_5a8;
          uStack_4e8 = uStack_590;
          uStack_4f0 = uStack_598;
          uStack_4d8 = uStack_580;
          local_4e0 = local_588;
          uStack_4c8 = uStack_570;
          uStack_4d0 = uStack_578;
          uStack_538 = uStack_5e0;
          local_540 = local_5e8;
          uStack_528 = uStack_5d0;
          uStack_530 = uStack_5d8;
          uStack_518 = uStack_5c0;
          local_520 = local_5c8;
          uStack_508 = uStack_5b0;
          uStack_510 = uStack_5b8;
          iVar6 = (int)&local_540;
          FUN_100217ac0();
          if (iVar6 == 1) {
            FUN_100008290(&local_540);
LAB_1002123e4:
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_800 = &local_69c;
            local_7f0 = puVar15;
            local_7f8 = iVar12;
            local_810 = param_1;
            local_808 = iVar17;
            FUN_1003fb4ec(FUN_100217b54,auStack_820,0xd0000000000000b2,0x8000000100885c70,
                          0xd000000000000026,0x80000001008a45e0,0x189,0);
            FUN_100212534(uVar9,uVar16,param_3,6,1);
            FUN_100217b48(lVar2,puVar15,0);
            FUN_100006cdc(0,0xc000000000000000);
            switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
            FUN_100040bb4(&local_5e8,&DAT_100a7dca8,&DAT_100812f58);
            FUN_100217b6c(local_2a0);
            FUN_100040bb4(&local_1d8,&DAT_100a7da38,&DAT_100812f40);
            FUN_100040bb4(&local_3e0,&DAT_100a75b98,&DAT_10080a1d0);
            goto LAB_100211b2c;
          }
          puVar7 = &local_540;
          FUN_100008290();
          uStack_338 = puVar7[5];
          local_340 = puVar7[4];
          uStack_328 = puVar7[7];
          local_330 = puVar7[6];
          lStack_358 = puVar7[1];
          local_360 = *puVar7;
          uStack_348 = puVar7[3];
          local_350 = puVar7[2];
          local_2f0 = puVar7[0xe];
          uStack_308 = puVar7[0xb];
          local_310 = puVar7[10];
          uStack_2f8 = puVar7[0xd];
          local_300 = puVar7[0xc];
          uStack_318 = puVar7[9];
          local_320 = puVar7[8];
          if (((local_300 >> 8 == 0xffffffff) && ((local_2f0 & 0x3000000000000000) == 0)) ||
             ((((uint)(local_2f0 >> 0x39) & 0x18 | (uint)(local_300 >> 0x3d)) != 2 ||
              ((local_110 = (undefined1)local_300, local_170 = local_360, local_168 = lStack_358,
               uStack_160 = local_350, uStack_158 = uStack_348, uStack_150 = local_340,
               local_148 = uStack_338, uStack_140 = local_330, uStack_138 = uStack_328,
               uStack_130 = local_320, local_128 = uStack_318, uStack_120 = local_310,
               local_118 = uStack_308, ((uint)local_300 & 0xff) != 3 || (lStack_358 != 1))))))
          goto LAB_1002123e4;
          if (uVar13 >> 0x1e == 2) {
            uVar11 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
            if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100212530);
              (*pcVar4)();
            }
LAB_100211fdc:
            if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100212518);
              (*pcVar4)();
            }
          }
          else {
            if (uVar13 >> 0x1e == 1) {
              if (SBORROW4(iVar5,iVar12)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100212534);
                (*pcVar4)();
              }
              uVar11 = (ulong)(iVar5 - iVar12);
              goto LAB_100211fdc;
            }
            uVar11 = (ulong)puVar15 >> 0x30 & 0xff;
          }
          if (CARRY8(uVar3,uVar11)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100212520);
            (*pcVar4)();
          }
          local_698 = uVar3 + uVar11;
          if (SCARRY4(local_7a4,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100212524);
            (*pcVar4)();
          }
          local_69c = local_7a4 + 1;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_7f0 = local_2a0;
          local_800 = param_1;
          local_7f8 = iVar17;
          FUN_10007f314(&local_170,&local_720,&DAT_100a7da38,&DAT_100812f40);
          FUN_10007f314(&local_360,&local_720,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_1003fb48c(FUN_100217ba0,&local_810,0xd0000000000000b2,0x8000000100885c70,
                        0xd000000000000026,0x80000001008a45e0,400,0);
          if (local_698 < uVar1) {
            NSThread::sleepForTimeInterval_
                      ((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",0x3f60624dd2f1a9fc);
          }
          FUN_100217b48(lVar2,puVar15,0);
          FUN_100217b6c(local_2a0);
          FUN_100040bb4(&local_170,&DAT_100a7da38,&DAT_100812f40);
          FUN_100040bb4(&local_360,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_100040bb4(&local_5e8,&DAT_100a7dca8,&DAT_100812f58);
          local_7a4 = local_7a4 + 1;
        } while (local_698 < uVar1);
      }
      FUN_100212534(uVar9,uVar16,param_3,1,1);
      uVar13 = (uint)uVar9;
      FUN_100006cdc(0,0xc000000000000000);
      switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
      FUN_100040bb4(&local_1d8,&DAT_100a7da38,&DAT_100812f40);
      FUN_100040bb4(&local_3e0,&DAT_100a75b98,&DAT_10080a1d0);
      FUN_100040bb4(&local_690,&DAT_100a7dca8,&DAT_100812f58);
      goto LAB_100211b34;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_10007f314(&local_1d8,&local_540,&DAT_100a7da38,&DAT_100812f40);
    FUN_10007f314(&local_3e0,&local_540,&DAT_100a75b98,&DAT_10080a1d0);
    FUN_1003fb4ec(FUN_100217bb4,&local_800,0xd0000000000000b2,0x8000000100885c70,0xd000000000000026,
                  0x80000001008a45e0,0x15d,0);
    FUN_100212534(uVar9,uVar16,param_3,3,1);
    FUN_100006cdc(0,0xc000000000000000);
    switchD_10004048c::caseD_6d(uVar14,0,0xc000000000000000);
    FUN_100040bb4(&local_1d8,&DAT_100a7da38,&DAT_100812f40);
LAB_100211a70:
    FUN_100040bb4(&local_3e0,&DAT_100a75b98,&DAT_10080a1d0);
  }
LAB_100211b2c:
  FUN_100040bb4(&local_690,&DAT_100a7dca8,&DAT_100812f58);
LAB_100211b30:
  uVar13 = 0;
LAB_100211b34:
  return uVar13 & 1;
}

