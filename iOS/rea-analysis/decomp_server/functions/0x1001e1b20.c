// rea decompile_all
// name: FUN_1001e1b20
// address: 0x1001e1b20
// body: available
// range: 0x1001e1b20-0x1001e35cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e1b20(ulong param_1,ulong param_2,ulong param_3,long param_4,uint param_5,
                  undefined8 *param_6,undefined4 param_7)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_450 [16];
  uint auStack_440 [2];
  ulong uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_428 [8];
  long local_420;
  ulong local_418;
  ulong *local_410;
  long local_408;
  long local_400;
  char *local_3f8;
  ulong local_3f0;
  ulong local_3e8;
  void *local_3e0;
  undefined *local_3d8;
  undefined *local_3d0;
  long local_3c8;
  long local_3c0;
  char *local_3b8;
  char *local_3b0;
  char *local_3a8;
  char *local_3a0;
  ulong local_398;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  code *local_378;
  long lStack_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 local_160;
  code *local_158;
  long lStack_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 uStack_138;
  code *local_130;
  undefined *puStack_128;
  code *local_120;
  undefined *puStack_118;
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
  undefined1 local_80;
  
  lVar6 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_3a8 = *(char **)(lVar6 + -8);
  local_3a0 = (char *)lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_3a8 + 0x40));
  pcVar24 = (char *)((long)&local_420 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcVar7 = (char *)0x0;
  local_3b0 = pcVar24;
  __s8Dispatch0A3QoSVMa();
  local_3c0 = *(long *)(pcVar7 + -8);
  local_3b8 = pcVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_3c0 + 0x40));
  lVar18 = (long)pcVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_3c8 = lVar18;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  local_3d8 = *(undefined **)(lVar6 + -8);
  local_3d0 = (undefined *)lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)((long)local_3d8 + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar7 = "";
  uVar17 = 7;
  local_3e0 = (void *)lVar18;
  _swift_allocObject(&DAT_1009a4078,0xdc);
  uVar27 = param_6[0x10];
  uVar28 = param_6[0x13];
  uVar15 = param_6[0x12];
  *(undefined8 *)(pcVar7 + 0xa0) = param_6[0x11];
  *(undefined8 *)(pcVar7 + 0x98) = uVar27;
  *(undefined8 *)(pcVar7 + 0xb0) = uVar28;
  *(undefined8 *)(pcVar7 + 0xa8) = uVar15;
  uVar27 = param_6[0x14];
  uVar28 = param_6[0x17];
  uVar15 = param_6[0x16];
  *(undefined8 *)(pcVar7 + 0xc0) = param_6[0x15];
  *(undefined8 *)(pcVar7 + 0xb8) = uVar27;
  *(undefined8 *)(pcVar7 + 0xd0) = uVar28;
  *(undefined8 *)(pcVar7 + 200) = uVar15;
  uVar27 = param_6[8];
  uVar28 = param_6[0xb];
  uVar15 = param_6[10];
  *(undefined8 *)(pcVar7 + 0x60) = param_6[9];
  *(undefined8 *)(pcVar7 + 0x58) = uVar27;
  *(undefined8 *)(pcVar7 + 0x70) = uVar28;
  *(undefined8 *)(pcVar7 + 0x68) = uVar15;
  uVar27 = param_6[0xc];
  uVar28 = param_6[0xf];
  uVar15 = param_6[0xe];
  *(undefined8 *)(pcVar7 + 0x80) = param_6[0xd];
  *(undefined8 *)(pcVar7 + 0x78) = uVar27;
  *(undefined8 *)(pcVar7 + 0x90) = uVar28;
  *(undefined8 *)(pcVar7 + 0x88) = uVar15;
  uVar27 = *param_6;
  uVar28 = param_6[3];
  uVar15 = param_6[2];
  *(undefined8 *)(pcVar7 + 0x20) = param_6[1];
  *(undefined8 *)(pcVar7 + 0x18) = uVar27;
  *(undefined8 *)(pcVar7 + 0x30) = uVar28;
  *(undefined8 *)(pcVar7 + 0x28) = uVar15;
  uVar27 = param_6[4];
  uVar28 = param_6[7];
  uVar15 = param_6[6];
  *(undefined8 *)(pcVar7 + 0x40) = param_6[5];
  *(undefined8 *)(pcVar7 + 0x38) = uVar27;
  *(uint *)(pcVar7 + 0x10) = param_5;
  *(undefined8 *)(pcVar7 + 0x50) = uVar28;
  *(undefined8 *)(pcVar7 + 0x48) = uVar15;
  local_398 = CONCAT44(local_398._4_4_,param_7);
  *(undefined4 *)(pcVar7 + 0xd8) = param_7;
  FUN_1000408d0(param_6,&local_140);
  FUN_1001e0038();
  lVar6 = _TtC14UURemoteServer15TerminalManager::sessions;
  uVar26 = (undefined4)param_1;
  if ((param_2 & 1) == 0) {
    local_3a0 = pcVar7;
    _swift_bridgeObjectRelease(uVar17);
    pcVar7 = (char *)0x0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)(lVar18 + -0x10) = uVar26;
    FUN_1003fb4bc(thunk_FUN_1001e135c,lVar18 + -0x20,0xd000000000000095,0x8000000100889250,
                  0xd000000000000029,0x800000010089ea40,0xcd,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar6 = lVar18 + -0x30;
    *(uint *)(lVar18 + -0x20) = param_5;
    *(undefined4 *)(lVar18 + -0x1c) = 1;
    *(undefined8 *)(lVar18 + -0x18) = 0xd000000000000016;
    *(undefined8 *)(lVar18 + -0x10) = 0x800000010089ea70;
    *(undefined1 *)(lVar18 + -8) = 0;
    pcVar4 = thunk_FUN_1001e49a8;
    uVar27 = 0xd0000000000000a0;
    local_3b8 = "st(_:message:action:type:)";
    local_3b0 = s___Manager___10089fa00 + 0x30;
    local_3a8 = pcVar7;
    FUN_1003fb48c();
    FUN_10047466c();
    uVar17 = (ulong)param_6[0x17] >> 0x3c;
    uStack_260 = 0;
    if (uVar17 < 0xf) {
      uStack_260 = param_6[0x15];
    }
    uVar15 = 0;
    if (uVar17 < 0xf) {
      uVar15 = param_6[0x16];
    }
    uVar19 = 0xc000000000000000;
    if (uVar17 < 0xf) {
      uVar19 = param_6[0x17];
    }
    local_158 = pcVar4;
    lStack_150 = lVar6;
    local_148 = uVar27;
    FUN_100040b80();
    FUN_100006cdc(uVar15,uVar19);
    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uStack_318 = 0;
    local_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    local_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_358 = 0;
    local_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_300 = 0xffffffff00;
    FUN_100043cb0(&local_360);
    uStack_2e0 = 0xd000000000000016;
    local_2d8 = 0x800000010089ea70;
    uStack_2c8 = 0xc000000000000000;
    local_2d0 = 0;
    local_288 = 0xe000000000000000;
    uStack_270 = 0;
    local_278 = 0x2000000000000000;
    local_268 = 0xc000000000000000;
    uStack_250 = 0xc000000000000000;
    local_258 = 0;
    local_2e8 = (undefined *)((ulong)param_5 | 0x100000000);
    FUN_100040bf4(&local_2e8);
    uStack_178 = uStack_240;
    local_180 = local_248;
    uStack_168 = uStack_230;
    uStack_170 = uStack_238;
    local_160 = local_228;
    uStack_1b8 = uStack_280;
    local_1c0 = local_288;
    uStack_1a8 = uStack_270;
    uStack_1b0 = local_278;
    uStack_198 = uStack_260;
    local_1a0 = local_268;
    uStack_188 = uStack_250;
    uStack_190 = local_258;
    uStack_1f8 = uStack_2c0;
    local_200 = uStack_2c8;
    uStack_1e8 = uStack_2b0;
    uStack_1f0 = uStack_2b8;
    uStack_1d8 = uStack_2a0;
    local_1e0 = local_2a8;
    uStack_1c8 = uStack_290;
    uStack_1d0 = uStack_298;
    uStack_218 = uStack_2e0;
    local_220 = local_2e8;
    uStack_208 = local_2d0;
    uStack_210 = local_2d8;
    FUN_100008290(&local_220);
    uStack_98 = uStack_178;
    local_a0 = local_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    local_80 = local_160;
    uStack_d8 = uStack_1b8;
    local_e0 = local_1c0;
    uStack_c8 = uStack_1a8;
    uStack_d0 = uStack_1b0;
    uStack_b8 = uStack_198;
    local_c0 = local_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    puStack_118 = (undefined *)uStack_1f8;
    local_120 = (code *)local_200;
    uStack_108 = uStack_1e8;
    uStack_110 = uStack_1f0;
    uStack_f8 = uStack_1d8;
    local_100 = local_1e0;
    uStack_e8 = uStack_1c8;
    uStack_f0 = uStack_1d0;
    uStack_138 = uStack_218;
    local_140 = local_220;
    puStack_128 = (undefined *)uStack_208;
    local_130 = (code *)uStack_210;
    FUN_100467dcc(&local_140);
    uVar27 = local_148;
    lVar6 = lStack_150;
    pcVar4 = local_158;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar26 = (undefined4)local_398;
    FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    *(undefined4 *)(lVar18 + -0x10) = 1;
    *(undefined4 *)(lVar18 + -0xc) = uVar26;
    FUN_1003fb48c(FUN_1001e4918,lVar18 + -0x20,0xd0000000000000a0,
                  (ulong)local_3b8 | 0x8000000000000000,0xd00000000000003d,
                  (ulong)local_3b0 | 0x8000000000000000,0x30e,0);
    FUN_100006cdc(pcVar4,lVar6);
    pcVar7 = local_3a0;
  }
  else {
    ppuVar16 = &local_140;
    local_3e8 = param_3;
    _swift_beginAccess(param_4 + _TtC14UURemoteServer15TerminalManager::sessions,ppuVar16,0x20,0);
    lVar6 = *(long *)(param_4 + lVar6);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (uVar19 = param_1, thunk_FUN_1001a2c34(), ((ulong)ppuVar16 & 1) == 0)) {
      _swift_endAccess(&local_140);
      _swift_bridgeObjectRelease(uVar17);
      pcVar24 = (char *)0x0;
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar18 + -0x10) = uVar26;
      FUN_1003fb4bc(thunk_FUN_1001e1364,lVar18 + -0x20,0xd000000000000095,0x8000000100889250,
                    0xd000000000000029,0x800000010089ea40,0xd5,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      lVar6 = lVar18 + -0x30;
      *(uint *)(lVar18 + -0x20) = param_5;
      *(undefined4 *)(lVar18 + -0x1c) = 2;
      *(undefined8 *)(lVar18 + -0x18) = 0xd000000000000011;
      *(undefined8 *)(lVar18 + -0x10) = 0x800000010088a4f0;
      *(undefined1 *)(lVar18 + -8) = 0;
      pcVar4 = thunk_FUN_1001e49a8;
      uVar27 = 0xd0000000000000a0;
      local_3b0 = s___Manager___10089fa00 + 0x30;
      local_3a8 = "st(_:message:action:type:)";
      local_3a0 = pcVar24;
      FUN_1003fb48c();
      FUN_10047466c();
      uVar17 = (ulong)param_6[0x17] >> 0x3c;
      uStack_260 = 0;
      if (uVar17 < 0xf) {
        uStack_260 = param_6[0x15];
      }
      uVar15 = 0;
      if (uVar17 < 0xf) {
        uVar15 = param_6[0x16];
      }
      uVar19 = 0xc000000000000000;
      if (uVar17 < 0xf) {
        uVar19 = param_6[0x17];
      }
      local_158 = pcVar4;
      lStack_150 = lVar6;
      local_148 = uVar27;
      FUN_100040b80();
      FUN_100006cdc(uVar15,uVar19);
      switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      local_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      local_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_300 = 0xffffffff00;
      FUN_100043cb0(&local_360);
      uStack_2e0 = 0xd000000000000011;
      local_2d8 = 0x800000010088a4f0;
      uStack_2c8 = 0xc000000000000000;
      local_2d0 = 0;
      local_288 = 0xe000000000000000;
      uStack_270 = 0;
      local_278 = 0x2000000000000000;
      local_268 = 0xc000000000000000;
      uStack_250 = 0xc000000000000000;
      local_258 = 0;
      local_2e8 = (undefined *)((ulong)param_5 | 0x200000000);
      FUN_100040bf4(&local_2e8);
      uStack_178 = uStack_240;
      local_180 = local_248;
      uStack_168 = uStack_230;
      uStack_170 = uStack_238;
      local_160 = local_228;
      uStack_1b8 = uStack_280;
      local_1c0 = local_288;
      uStack_1a8 = uStack_270;
      uStack_1b0 = local_278;
      uStack_198 = uStack_260;
      local_1a0 = local_268;
      uStack_188 = uStack_250;
      uStack_190 = local_258;
      uStack_1f8 = uStack_2c0;
      local_200 = uStack_2c8;
      uStack_1e8 = uStack_2b0;
      uStack_1f0 = uStack_2b8;
      uStack_1d8 = uStack_2a0;
      local_1e0 = local_2a8;
      uStack_1c8 = uStack_290;
      uStack_1d0 = uStack_298;
      uStack_218 = uStack_2e0;
      local_220 = local_2e8;
      uStack_208 = local_2d0;
      uStack_210 = local_2d8;
      FUN_100008290(&local_220);
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      local_80 = local_160;
      uStack_d8 = uStack_1b8;
      local_e0 = local_1c0;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      local_c0 = local_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      puStack_118 = (undefined *)uStack_1f8;
      local_120 = (code *)local_200;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      local_100 = local_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_138 = uStack_218;
      local_140 = local_220;
      puStack_128 = (undefined *)uStack_208;
      local_130 = (code *)uStack_210;
      FUN_100467dcc(&local_140);
      uVar27 = local_148;
      lVar6 = lStack_150;
      pcVar4 = local_158;
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      uVar26 = (undefined4)local_398;
      FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
      (*(code *)PTR____chkstk_darwin_100995498)(0);
      *(undefined4 *)(lVar18 + -0x10) = 2;
      *(undefined4 *)(lVar18 + -0xc) = uVar26;
      FUN_1003fb48c(thunk_FUN_1001e4918,lVar18 + -0x20,0xd0000000000000a0,
                    (ulong)local_3a8 | 0x8000000000000000,0xd00000000000003d,
                    (ulong)local_3b0 | 0x8000000000000000,0x30e,0);
      FUN_100006cdc(pcVar4,lVar6);
    }
    else {
      local_3f0 = CONCAT44(local_3f0._4_4_,param_5);
      pcVar24 = *(char **)(*(long *)(lVar6 + 0x38) + uVar19 * 8);
      _swift_endAccess(&local_140);
      lVar25 = _TtC14UURemoteServer15TerminalManager::renamingSessionIds;
      _swift_beginAccess(param_4 + _TtC14UURemoteServer15TerminalManager::renamingSessionIds,
                         &local_158,0,0);
      uVar19 = param_1;
      local_400 = param_4;
      thunk_FUN_100152fd0(param_1,*(undefined8 *)(param_4 + lVar25));
      if ((uVar19 & 1) == 0) {
        local_410 = (ulong *)(pcVar24 + _TtC14UURemoteServer15TerminalSession::name);
        uVar19 = *local_410;
        if ((uVar19 != local_3e8 || local_410[1] != uVar17) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar19 & 1) == 0)) {
          local_420 = lVar25;
          local_418 = uVar17;
          local_3f8 = pcVar24;
          FUN_100004bb4(&DAT_100a7d4e8,&DAT_100812788);
          lVar23 = lVar6;
          __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
          lVar25 = 0;
          uVar19 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
          uVar17 = 0xffffffffffffffff;
          if ((long)uVar19 < 0x40) {
            uVar17 = ~(-1L << (uVar19 & 0x3f));
          }
          uVar17 = uVar17 & *(ulong *)(lVar6 + 0x40);
          local_408 = lVar23 + 0x40;
          if (uVar17 == 0) goto LAB_1001e2ab8;
          do {
            uVar20 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
            uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
            uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
            uVar17 = uVar17 - 1 & uVar17;
            while( true ) {
              uVar20 = LZCOUNT(uVar20);
              uVar21 = uVar20 | lVar25 << 6;
              uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0x30) + uVar21 * 4);
              puVar13 = (undefined8 *)
                        (*(long *)(*(long *)(lVar6 + 0x38) + uVar21 * 8) +
                        _TtC14UURemoteServer15TerminalSession::name);
              uVar27 = *puVar13;
              uVar15 = puVar13[1];
              uVar22 = (uVar20 & 0xffffffffffffffc0 | lVar25 << 6) >> 3;
              *(ulong *)(local_408 + uVar22) =
                   *(ulong *)(local_408 + uVar22) | 1L << (uVar20 & 0x3f);
              *(undefined4 *)(*(long *)(lVar23 + 0x30) + uVar21 * 4) = uVar5;
              puVar13 = (undefined8 *)(*(long *)(lVar23 + 0x38) + uVar21 * 0x10);
              *puVar13 = uVar27;
              puVar13[1] = uVar15;
              if (SCARRY8(*(long *)(lVar23 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e356c);
                (*pcVar4)();
              }
              *(long *)(lVar23 + 0x10) = *(long *)(lVar23 + 0x10) + 1;
              _swift_bridgeObjectRetain();
              if (uVar17 != 0) break;
LAB_1001e2ab8:
              do {
                pcVar24 = local_3f8;
                lVar1 = lVar25 + 1;
                if (SCARRY8(lVar25,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e3538);
                  (*pcVar4)();
                }
                if ((long)(uVar19 + 0x3f >> 6) <= lVar1) {
                  _swift_retain(local_3f8);
                  uVar19 = local_3e8;
                  uVar17 = local_418;
                  uVar21 = local_3e8;
                  FUN_1001e063c(local_3e8,local_418,param_1,lVar23);
                  _swift_release(lVar23);
                  uVar20 = local_3e8;
                  lVar6 = local_400;
                  if ((uVar21 & 1) == 0) {
                    if (*(long *)(pcVar24 + _TtC14UURemoteServer15TerminalSession::tmuxController)
                        != 0) {
                      pcVar24 = pcVar24 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName;
                      lVar25 = *(long *)(pcVar24 + 8);
                      if ((lVar25 != 0) &&
                         (lVar23 = *(long *)(local_400 +
                                            _TtC14UURemoteServer15TerminalManager::tmuxController),
                         lVar23 != 0)) {
                        local_3f0 = *(ulong *)pcVar24;
                        local_408 = lVar23;
                        _swift_beginAccess(local_400 + local_420,&local_140,0x21,0);
                        _swift_bridgeObjectRetain(lVar25);
                        _swift_retain(lVar23);
                        FUN_10006d93c(&local_220,param_1);
                        _swift_endAccess(&local_140);
                        FUN_100004b70(0);
                        puVar11 = local_3d0;
                        puVar10 = local_3d8;
                        pvVar2 = local_3e0;
                        (**(code **)((long)local_3d8 + 0x68))
                                  (local_3e0,
                                   *(undefined4 *)
                                    PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,
                                   local_3d0);
                        pvVar9 = pvVar2;
                        __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
                        local_398 = (ulong)pvVar9;
                        (**(code **)((long)puVar10 + 8))(pvVar2,puVar11);
                        puVar10 = &DAT_1009a3ab0;
                        _swift_allocObject(&DAT_1009a3ab0,0x18,7);
                        _swift_unknownObjectWeakInit(puVar10 + 0x10,lVar6);
                        puVar11 = &DAT_1009a3c40;
                        _swift_allocObject(&DAT_1009a3c40,0x18,7);
                        pcVar24 = local_3f8;
                        _swift_weakInit(puVar11 + 0x10,local_3f8);
                        puVar12 = &DAT_1009a40a0;
                        _swift_allocObject(&DAT_1009a40a0,0x60,7);
                        lVar6 = local_408;
                        *(long *)(puVar12 + 0x10) = local_408;
                        *(ulong *)(puVar12 + 0x18) = local_3f0;
                        *(long *)(puVar12 + 0x20) = lVar25;
                        *(ulong *)(puVar12 + 0x28) = local_3e8;
                        *(ulong *)(puVar12 + 0x30) = local_418;
                        *(undefined **)(puVar12 + 0x38) = puVar10;
                        *(undefined4 *)(puVar12 + 0x40) = uVar26;
                        *(undefined **)(puVar12 + 0x48) = puVar11;
                        *(code **)(puVar12 + 0x50) = FUN_1001e4904;
                        *(char **)(puVar12 + 0x58) = pcVar7;
                        local_120 = thunk_FUN_1001e4970;
                        local_140 = PTR___NSConcreteStackBlock_100995490;
                        uStack_138 = 0x42000000;
                        local_130 = FUN_1000acdb4;
                        puStack_128 = &DAT_1009a40b8;
                        local_3d8 = puVar11;
                        local_3d0 = puVar10;
                        puStack_118 = puVar12;
                        local_3e0 = __Block_copy(&local_140);
                        _swift_retain(lVar6);
                        _swift_retain(puVar10);
                        _swift_retain(puVar11);
                        _swift_retain(pcVar7);
                        lVar6 = local_3c8;
                        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_3c8);
                        local_220 = PTR___swiftEmptyArrayStorage_100995ea0;
                        puVar13 = &DAT_100a75a90;
                        FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50)
                        ;
                        puVar10 = &DAT_100a75a98;
                        FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
                        puVar14 = &DAT_100a75aa0;
                        FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
                        pcVar3 = local_3a0;
                        pcVar8 = local_3b0;
                        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                                  (local_3b0,&local_220,puVar10,puVar14,local_3a0,puVar13);
                        pvVar2 = local_3e0;
                        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                                  (0,lVar6,pcVar8,local_3e0);
                        __Block_release(pvVar2);
                        _swift_release(pcVar24);
                        _swift_release(local_408);
                        (**(code **)((long)local_3a8 + 8))(pcVar8,pcVar3);
                        (**(code **)(local_3c0 + 8))(lVar6,local_3b8);
                        puVar10 = puStack_118;
                        _swift_release(pcVar7);
                        _swift_release(local_3d0);
                        _swift_release(local_3d8);
                        _swift_release(puVar10);
                        return;
                      }
                    }
                    uVar19 = local_410[1];
                    *local_410 = local_3e8;
                    local_410[1] = uVar17;
                    _swift_bridgeObjectRetain(uVar17);
                    _swift_bridgeObjectRelease(uVar19);
                    uVar15 = 0;
                    FUN_100401b14();
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    *(undefined4 *)(lVar18 + -0x20) = uVar26;
                    *(ulong *)(lVar18 + -0x18) = uVar20;
                    *(ulong *)(lVar18 + -0x10) = uVar17;
                    FUN_1003fb48c(thunk_FUN_1001e136c,lVar18 + -0x30,0xd000000000000095,
                                  0x8000000100889250,0xd000000000000029,0x800000010089ea40,0xf3,0);
                    _swift_bridgeObjectRelease(uVar17);
                    (*(code *)PTR____chkstk_darwin_100995498)();
                    uVar17 = local_3f0;
                    lVar6 = lVar18 + -0x30;
                    uVar26 = (undefined4)local_3f0;
                    *(undefined4 *)(lVar18 + -0x20) = (undefined4)local_3f0;
                    *(undefined4 *)(lVar18 + -0x1c) = 0;
                    *(undefined8 *)(lVar18 + -0x18) = 0x6b6f;
                    *(undefined8 *)(lVar18 + -0x10) = 0xe200000000000000;
                    *(undefined1 *)(lVar18 + -8) = 1;
                    pcVar4 = thunk_FUN_1001e49a8;
                    uVar27 = 0xd0000000000000a0;
                    local_3b0 = s___Manager___10089fa00 + 0x30;
                    local_3a8 = "st(_:message:action:type:)";
                    local_3a0 = (char *)uVar15;
                    FUN_1003fb48c();
                    FUN_10047466c();
                    uVar19 = (ulong)param_6[0x17] >> 0x3c;
                    uStack_260 = 0;
                    if (uVar19 < 0xf) {
                      uStack_260 = param_6[0x15];
                    }
                    uVar15 = 0;
                    if (uVar19 < 0xf) {
                      uVar15 = param_6[0x16];
                    }
                    uVar20 = 0xc000000000000000;
                    if (uVar19 < 0xf) {
                      uVar20 = param_6[0x17];
                    }
                    local_378 = pcVar4;
                    lStack_370 = lVar6;
                    local_368 = uVar27;
                    FUN_100040b80();
                    FUN_100006cdc(uVar15,uVar20);
                    switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
                    _swift_bridgeObjectRelease(0xe000000000000000);
                    uStack_318 = 0;
                    local_320 = 0;
                    uStack_308 = 0;
                    uStack_310 = 0;
                    uStack_338 = 0;
                    local_340 = 0;
                    uStack_328 = 0;
                    uStack_330 = 0;
                    uStack_358 = 0;
                    local_360 = 0;
                    uStack_348 = 0;
                    uStack_350 = 0;
                    local_2f8 = 0;
                    uStack_2f0 = 0;
                    local_300 = 0xffffffff00;
                    FUN_100043cb0(&local_360);
                    local_2d8 = 0xe200000000000000;
                    uStack_2e0 = 0x6b6f;
                    uStack_2c8 = 0xc000000000000000;
                    local_2d0 = 0;
                    local_288 = 0xe000000000000000;
                    uStack_270 = 0;
                    local_278 = 0x2000000000000000;
                    local_268 = 0xc000000000000000;
                    uStack_250 = 0xc000000000000000;
                    local_258 = 0;
                    local_2e8 = (undefined *)(uVar17 & 0xffffffff);
                    FUN_100040bf4(&local_2e8);
                    uStack_178 = uStack_240;
                    local_180 = local_248;
                    uStack_168 = uStack_230;
                    uStack_170 = uStack_238;
                    local_160 = local_228;
                    uStack_1b8 = uStack_280;
                    local_1c0 = local_288;
                    uStack_1a8 = uStack_270;
                    uStack_1b0 = local_278;
                    uStack_198 = uStack_260;
                    local_1a0 = local_268;
                    uStack_188 = uStack_250;
                    uStack_190 = local_258;
                    uStack_1f8 = uStack_2c0;
                    local_200 = uStack_2c8;
                    uStack_1e8 = uStack_2b0;
                    uStack_1f0 = uStack_2b8;
                    uStack_1d8 = uStack_2a0;
                    local_1e0 = local_2a8;
                    uStack_1c8 = uStack_290;
                    uStack_1d0 = uStack_298;
                    uStack_218 = uStack_2e0;
                    local_220 = local_2e8;
                    uStack_208 = local_2d0;
                    uStack_210 = local_2d8;
                    FUN_100008290(&local_220);
                    uStack_98 = uStack_178;
                    local_a0 = local_180;
                    uStack_88 = uStack_168;
                    uStack_90 = uStack_170;
                    local_80 = local_160;
                    uStack_d8 = uStack_1b8;
                    local_e0 = local_1c0;
                    uStack_c8 = uStack_1a8;
                    uStack_d0 = uStack_1b0;
                    uStack_b8 = uStack_198;
                    local_c0 = local_1a0;
                    uStack_a8 = uStack_188;
                    uStack_b0 = uStack_190;
                    puStack_118 = (undefined *)uStack_1f8;
                    local_120 = (code *)local_200;
                    uStack_108 = uStack_1e8;
                    uStack_110 = uStack_1f0;
                    uStack_f8 = uStack_1d8;
                    local_100 = local_1e0;
                    uStack_e8 = uStack_1c8;
                    uStack_f0 = uStack_1d0;
                    uStack_138 = uStack_218;
                    local_140 = local_220;
                    puStack_128 = (undefined *)uStack_208;
                    local_130 = (code *)uStack_210;
                    FUN_100467dcc(&local_140);
                    uVar27 = local_368;
                    lVar6 = lStack_370;
                    pcVar4 = local_378;
                    if (DAT_100a73b60 != -1) {
                      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                    }
                    uVar5 = (undefined4)local_398;
                    FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
                    (*(code *)PTR____chkstk_darwin_100995498)(0);
                    *(undefined4 *)(lVar18 + -0x10) = 0;
                    *(undefined4 *)(lVar18 + -0xc) = uVar5;
                    FUN_1003fb48c(thunk_FUN_1001e4918,lVar18 + -0x20,0xd0000000000000a0,
                                  (ulong)local_3a8 | 0x8000000000000000,0xd00000000000003d,
                                  (ulong)local_3b0 | 0x8000000000000000,0x30e,0);
                    local_388 = 0x3a656d616e6572;
                    uStack_380 = 0xe700000000000000;
                    local_38c = uVar26;
                    puVar10 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
                    __ss23CustomStringConvertibleP11descriptionSSvgTj
                              (PTR___ss6UInt32VN_100995dc0,
                               PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
                    __sSS6appendyySSF();
                    _swift_bridgeObjectRelease(puVar10);
                    uVar15 = uStack_380;
                    FUN_1001e03b8(local_388,uStack_380);
                    FUN_100006cdc(pcVar4,lVar6);
                    _swift_release(pcVar7);
                    _swift_release(local_3f8);
                    _swift_bridgeObjectRelease(uVar15);
                    _swift_release(uVar27);
                    return;
                  }
                  pcVar24 = (char *)0x0;
                  FUN_100401b14();
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(undefined4 *)(lVar18 + -0x20) = uVar26;
                  *(ulong *)(lVar18 + -0x18) = uVar19;
                  *(ulong *)(lVar18 + -0x10) = uVar17;
                  FUN_1003fb4bc(thunk_FUN_1001e13a0,lVar18 + -0x30,0xd000000000000095,
                                0x8000000100889250,0xd000000000000029,0x800000010089ea40,0xeb,0);
                  _swift_bridgeObjectRelease(uVar17);
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  uVar17 = local_3f0;
                  lVar6 = lVar18 + -0x30;
                  *(undefined4 *)(lVar18 + -0x20) = (undefined4)local_3f0;
                  *(undefined4 *)(lVar18 + -0x1c) = 3;
                  *(undefined8 *)(lVar18 + -0x18) = 0xd000000000000015;
                  *(undefined8 *)(lVar18 + -0x10) = 0x800000010089ea90;
                  *(undefined1 *)(lVar18 + -8) = 0;
                  pcVar4 = thunk_FUN_1001e49a8;
                  uVar27 = 0xd0000000000000a0;
                  local_3b0 = s___Manager___10089fa00 + 0x30;
                  local_3a8 = "st(_:message:action:type:)";
                  local_3a0 = pcVar24;
                  FUN_1003fb48c();
                  FUN_10047466c();
                  uVar19 = (ulong)param_6[0x17] >> 0x3c;
                  uStack_260 = 0;
                  if (uVar19 < 0xf) {
                    uStack_260 = param_6[0x15];
                  }
                  uVar15 = 0;
                  if (uVar19 < 0xf) {
                    uVar15 = param_6[0x16];
                  }
                  uVar20 = 0xc000000000000000;
                  if (uVar19 < 0xf) {
                    uVar20 = param_6[0x17];
                  }
                  local_378 = pcVar4;
                  lStack_370 = lVar6;
                  local_368 = uVar27;
                  FUN_100040b80();
                  FUN_100006cdc(uVar15,uVar20);
                  switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
                  _swift_bridgeObjectRelease(0xe000000000000000);
                  uStack_318 = 0;
                  local_320 = 0;
                  uStack_308 = 0;
                  uStack_310 = 0;
                  uStack_338 = 0;
                  local_340 = 0;
                  uStack_328 = 0;
                  uStack_330 = 0;
                  uStack_358 = 0;
                  local_360 = 0;
                  uStack_348 = 0;
                  uStack_350 = 0;
                  local_2f8 = 0;
                  uStack_2f0 = 0;
                  local_300 = 0xffffffff00;
                  FUN_100043cb0(&local_360);
                  uStack_2e0 = 0xd000000000000015;
                  local_2d8 = 0x800000010089ea90;
                  uStack_2c8 = 0xc000000000000000;
                  local_2d0 = 0;
                  local_288 = 0xe000000000000000;
                  uStack_270 = 0;
                  local_278 = 0x2000000000000000;
                  local_268 = 0xc000000000000000;
                  uStack_250 = 0xc000000000000000;
                  local_258 = 0;
                  local_2e8 = (undefined *)(uVar17 & 0xffffffff | 0x300000000);
                  FUN_100040bf4(&local_2e8);
                  uStack_178 = uStack_240;
                  local_180 = local_248;
                  uStack_168 = uStack_230;
                  uStack_170 = uStack_238;
                  local_160 = local_228;
                  uStack_1b8 = uStack_280;
                  local_1c0 = local_288;
                  uStack_1a8 = uStack_270;
                  uStack_1b0 = local_278;
                  uStack_198 = uStack_260;
                  local_1a0 = local_268;
                  uStack_188 = uStack_250;
                  uStack_190 = local_258;
                  uStack_1f8 = uStack_2c0;
                  local_200 = uStack_2c8;
                  uStack_1e8 = uStack_2b0;
                  uStack_1f0 = uStack_2b8;
                  uStack_1d8 = uStack_2a0;
                  local_1e0 = local_2a8;
                  uStack_1c8 = uStack_290;
                  uStack_1d0 = uStack_298;
                  uStack_218 = uStack_2e0;
                  local_220 = local_2e8;
                  uStack_208 = local_2d0;
                  uStack_210 = local_2d8;
                  FUN_100008290(&local_220);
                  uStack_98 = uStack_178;
                  local_a0 = local_180;
                  uStack_88 = uStack_168;
                  uStack_90 = uStack_170;
                  local_80 = local_160;
                  uStack_d8 = uStack_1b8;
                  local_e0 = local_1c0;
                  uStack_c8 = uStack_1a8;
                  uStack_d0 = uStack_1b0;
                  uStack_b8 = uStack_198;
                  local_c0 = local_1a0;
                  uStack_a8 = uStack_188;
                  uStack_b0 = uStack_190;
                  puStack_118 = (undefined *)uStack_1f8;
                  local_120 = (code *)local_200;
                  uStack_108 = uStack_1e8;
                  uStack_110 = uStack_1f0;
                  uStack_f8 = uStack_1d8;
                  local_100 = local_1e0;
                  uStack_e8 = uStack_1c8;
                  uStack_f0 = uStack_1d0;
                  uStack_138 = uStack_218;
                  local_140 = local_220;
                  puStack_128 = (undefined *)uStack_208;
                  local_130 = (code *)uStack_210;
                  FUN_100467dcc(&local_140);
                  uVar27 = local_368;
                  lVar6 = lStack_370;
                  pcVar4 = local_378;
                  if (DAT_100a73b60 != -1) {
                    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
                  }
                  uVar26 = (undefined4)local_398;
                  FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
                  (*(code *)PTR____chkstk_darwin_100995498)(0);
                  *(undefined4 *)(lVar18 + -0x10) = 3;
                  *(undefined4 *)(lVar18 + -0xc) = uVar26;
                  goto LAB_1001e2014;
                }
                uVar17 = ((ulong *)(lVar6 + 0x40))[lVar1];
                lVar25 = lVar25 + 1;
              } while (uVar17 == 0);
              uVar20 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
              uVar17 = uVar17 - 1 & uVar17;
              lVar25 = lVar1;
            }
          } while( true );
        }
        _swift_retain(pcVar24);
        _swift_bridgeObjectRelease(uVar17);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(lVar18 + -0x10) = uVar26;
        FUN_1003fb48c(thunk_FUN_1001e13ac,lVar18 + -0x20,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0xe3,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar17 = local_3f0;
        lVar6 = lVar18 + -0x30;
        *(undefined4 *)(lVar18 + -0x20) = (undefined4)local_3f0;
        *(undefined4 *)(lVar18 + -0x1c) = 0;
        *(undefined8 *)(lVar18 + -0x18) = 0x6b6f;
        *(undefined8 *)(lVar18 + -0x10) = 0xe200000000000000;
        *(undefined1 *)(lVar18 + -8) = 0;
        pcVar4 = thunk_FUN_1001e49a8;
        uVar27 = 0xd0000000000000a0;
        local_3a8 = s___Manager___10089fa00 + 0x30;
        local_3a0 = "st(_:message:action:type:)";
        FUN_1003fb48c();
        FUN_10047466c();
        uVar19 = (ulong)param_6[0x17] >> 0x3c;
        uStack_260 = 0;
        if (uVar19 < 0xf) {
          uStack_260 = param_6[0x15];
        }
        uVar15 = 0;
        if (uVar19 < 0xf) {
          uVar15 = param_6[0x16];
        }
        uVar20 = 0xc000000000000000;
        if (uVar19 < 0xf) {
          uVar20 = param_6[0x17];
        }
        local_378 = pcVar4;
        lStack_370 = lVar6;
        local_368 = uVar27;
        FUN_100040b80();
        FUN_100006cdc(uVar15,uVar20);
        switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_318 = 0;
        local_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_338 = 0;
        local_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_358 = 0;
        local_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_300 = 0xffffffff00;
        FUN_100043cb0(&local_360);
        local_2d8 = 0xe200000000000000;
        uStack_2e0 = 0x6b6f;
        uStack_2c8 = 0xc000000000000000;
        local_2d0 = 0;
        local_288 = 0xe000000000000000;
        uStack_270 = 0;
        local_278 = 0x2000000000000000;
        local_268 = 0xc000000000000000;
        uStack_250 = 0xc000000000000000;
        local_258 = 0;
        local_2e8 = (undefined *)(uVar17 & 0xffffffff);
        FUN_100040bf4(&local_2e8);
        uStack_178 = uStack_240;
        local_180 = local_248;
        uStack_168 = uStack_230;
        uStack_170 = uStack_238;
        local_160 = local_228;
        uStack_1b8 = uStack_280;
        local_1c0 = local_288;
        uStack_1a8 = uStack_270;
        uStack_1b0 = local_278;
        uStack_198 = uStack_260;
        local_1a0 = local_268;
        uStack_188 = uStack_250;
        uStack_190 = local_258;
        uStack_1f8 = uStack_2c0;
        local_200 = uStack_2c8;
        uStack_1e8 = uStack_2b0;
        uStack_1f0 = uStack_2b8;
        uStack_1d8 = uStack_2a0;
        local_1e0 = local_2a8;
        uStack_1c8 = uStack_290;
        uStack_1d0 = uStack_298;
        uStack_218 = uStack_2e0;
        local_220 = local_2e8;
        uStack_208 = local_2d0;
        uStack_210 = local_2d8;
        FUN_100008290(&local_220);
        uStack_98 = uStack_178;
        local_a0 = local_180;
        uStack_88 = uStack_168;
        uStack_90 = uStack_170;
        local_80 = local_160;
        uStack_d8 = uStack_1b8;
        local_e0 = local_1c0;
        uStack_c8 = uStack_1a8;
        uStack_d0 = uStack_1b0;
        uStack_b8 = uStack_198;
        local_c0 = local_1a0;
        uStack_a8 = uStack_188;
        uStack_b0 = uStack_190;
        puStack_118 = (undefined *)uStack_1f8;
        local_120 = (code *)local_200;
        uStack_108 = uStack_1e8;
        uStack_110 = uStack_1f0;
        uStack_f8 = uStack_1d8;
        local_100 = local_1e0;
        uStack_e8 = uStack_1c8;
        uStack_f0 = uStack_1d0;
        uStack_138 = uStack_218;
        local_140 = local_220;
        puStack_128 = (undefined *)uStack_208;
        local_130 = (code *)uStack_210;
        FUN_100467dcc(&local_140);
        uVar27 = local_368;
        lVar6 = lStack_370;
        pcVar4 = local_378;
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        uVar26 = (undefined4)local_398;
        FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(undefined4 *)(lVar18 + -0x10) = 0;
        *(undefined4 *)(lVar18 + -0xc) = uVar26;
        FUN_1003fb48c(thunk_FUN_1001e4918,lVar18 + -0x20,0xd0000000000000a0,
                      (ulong)local_3a0 | 0x8000000000000000,0xd00000000000003d,
                      (ulong)local_3a8 | 0x8000000000000000,0x30e,0);
        FUN_100006cdc(pcVar4,lVar6);
        _swift_release(pcVar7);
        pcVar7 = pcVar24;
      }
      else {
        _swift_retain(pcVar24);
        _swift_bridgeObjectRelease(uVar17);
        pcVar8 = (char *)0x0;
        FUN_100401b14();
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined4 *)(lVar18 + -0x10) = uVar26;
        FUN_1003fb4bc(thunk_FUN_1001e13b4,lVar18 + -0x20,0xd000000000000095,0x8000000100889250,
                      0xd000000000000029,0x800000010089ea40,0xdc,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar17 = local_3f0;
        lVar6 = lVar18 + -0x30;
        *(undefined4 *)(lVar18 + -0x20) = (undefined4)local_3f0;
        *(undefined4 *)(lVar18 + -0x1c) = 1;
        local_3f8 = pcVar24;
        *(undefined8 *)(lVar18 + -0x18) = 0xd000000000000016;
        *(undefined8 *)(lVar18 + -0x10) = 0x800000010089ea70;
        *(undefined1 *)(lVar18 + -8) = 0;
        pcVar4 = thunk_FUN_1001e49a8;
        uVar27 = 0xd0000000000000a0;
        local_3b0 = s___Manager___10089fa00 + 0x30;
        local_3a8 = "st(_:message:action:type:)";
        local_3a0 = pcVar8;
        FUN_1003fb48c();
        FUN_10047466c();
        uVar19 = (ulong)param_6[0x17] >> 0x3c;
        uStack_260 = 0;
        if (uVar19 < 0xf) {
          uStack_260 = param_6[0x15];
        }
        uVar15 = 0;
        if (uVar19 < 0xf) {
          uVar15 = param_6[0x16];
        }
        uVar20 = 0xc000000000000000;
        if (uVar19 < 0xf) {
          uVar20 = param_6[0x17];
        }
        local_378 = pcVar4;
        lStack_370 = lVar6;
        local_368 = uVar27;
        FUN_100040b80();
        FUN_100006cdc(uVar15,uVar20);
        switchD_10004048c::caseD_6d(0,0,0xf000000000000000);
        _swift_bridgeObjectRelease(0xe000000000000000);
        uStack_318 = 0;
        local_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_338 = 0;
        local_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        uStack_358 = 0;
        local_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_300 = 0xffffffff00;
        FUN_100043cb0(&local_360);
        uStack_2e0 = 0xd000000000000016;
        local_2d8 = 0x800000010089ea70;
        uStack_2c8 = 0xc000000000000000;
        local_2d0 = 0;
        local_288 = 0xe000000000000000;
        uStack_270 = 0;
        local_278 = 0x2000000000000000;
        local_268 = 0xc000000000000000;
        uStack_250 = 0xc000000000000000;
        local_258 = 0;
        local_2e8 = (undefined *)(uVar17 & 0xffffffff | 0x100000000);
        FUN_100040bf4(&local_2e8);
        uStack_178 = uStack_240;
        local_180 = local_248;
        uStack_168 = uStack_230;
        uStack_170 = uStack_238;
        local_160 = local_228;
        uStack_1b8 = uStack_280;
        local_1c0 = local_288;
        uStack_1a8 = uStack_270;
        uStack_1b0 = local_278;
        uStack_198 = uStack_260;
        local_1a0 = local_268;
        uStack_188 = uStack_250;
        uStack_190 = local_258;
        uStack_1f8 = uStack_2c0;
        local_200 = uStack_2c8;
        uStack_1e8 = uStack_2b0;
        uStack_1f0 = uStack_2b8;
        uStack_1d8 = uStack_2a0;
        local_1e0 = local_2a8;
        uStack_1c8 = uStack_290;
        uStack_1d0 = uStack_298;
        uStack_218 = uStack_2e0;
        local_220 = local_2e8;
        uStack_208 = local_2d0;
        uStack_210 = local_2d8;
        FUN_100008290(&local_220);
        uStack_98 = uStack_178;
        local_a0 = local_180;
        uStack_88 = uStack_168;
        uStack_90 = uStack_170;
        local_80 = local_160;
        uStack_d8 = uStack_1b8;
        local_e0 = local_1c0;
        uStack_c8 = uStack_1a8;
        uStack_d0 = uStack_1b0;
        uStack_b8 = uStack_198;
        local_c0 = local_1a0;
        uStack_a8 = uStack_188;
        uStack_b0 = uStack_190;
        puStack_118 = (undefined *)uStack_1f8;
        local_120 = (code *)local_200;
        uStack_108 = uStack_1e8;
        uStack_110 = uStack_1f0;
        uStack_f8 = uStack_1d8;
        local_100 = local_1e0;
        uStack_e8 = uStack_1c8;
        uStack_f0 = uStack_1d0;
        uStack_138 = uStack_218;
        local_140 = local_220;
        puStack_128 = (undefined *)uStack_208;
        local_130 = (code *)uStack_210;
        FUN_100467dcc(&local_140);
        uVar27 = local_368;
        lVar6 = lStack_370;
        pcVar4 = local_378;
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        uVar26 = (undefined4)local_398;
        FUN_1001ad794(local_398 & 0xffffffff,pcVar4,lVar6,uVar27,3);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(undefined4 *)(lVar18 + -0x10) = 1;
        *(undefined4 *)(lVar18 + -0xc) = uVar26;
LAB_1001e2014:
        FUN_1003fb48c(thunk_FUN_1001e4918,lVar18 + -0x20,0xd0000000000000a0,
                      (ulong)local_3a8 | 0x8000000000000000,0xd00000000000003d,
                      (ulong)local_3b0 | 0x8000000000000000,0x30e,0);
        FUN_100006cdc(pcVar4,lVar6);
        _swift_release(pcVar7);
        pcVar7 = local_3f8;
      }
    }
  }
  _swift_release(pcVar7);
  _swift_release(uVar27);
  return;
}

