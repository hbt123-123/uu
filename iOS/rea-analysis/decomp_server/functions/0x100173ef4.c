// rea decompile_all
// name: FUN_100173ef4
// address: 0x100173ef4
// body: available
// range: 0x100173ef4-0x10017428b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100173ef4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined4 uVar6;
  undefined1 auStack_460 [16];
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
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
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
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
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [160];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  lVar2 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  if (lVar2 != 0) {
    lVar3 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    _swift_weakLoadStrong();
    if (lVar3 != 0) {
      uStack_2f8 = *(undefined8 *)(lVar3 + 0x130);
      uStack_300 = *(undefined8 *)(lVar3 + 0x128);
      uStack_2e8 = *(undefined8 *)(lVar3 + 0x140);
      local_2f0 = *(undefined8 *)(lVar3 + 0x138);
      uStack_318 = *(undefined8 *)(lVar3 + 0x110);
      uStack_320 = *(undefined8 *)(lVar3 + 0x108);
      uStack_308 = *(undefined8 *)(lVar3 + 0x120);
      local_310 = *(undefined8 *)(lVar3 + 0x118);
      uStack_2d8 = *(undefined8 *)(lVar3 + 0x150);
      uStack_2e0 = *(undefined8 *)(lVar3 + 0x148);
      uStack_348 = *(undefined8 *)(lVar3 + 0xe0);
      local_350 = *(undefined8 *)(lVar3 + 0xd8);
      uStack_338 = *(undefined8 *)(lVar3 + 0xf0);
      uStack_340 = *(undefined8 *)(lVar3 + 0xe8);
      uStack_328 = *(undefined8 *)(lVar3 + 0x100);
      local_330 = *(undefined8 *)(lVar3 + 0xf8);
      uStack_388 = *(undefined8 *)(lVar3 + 0xa0);
      local_390 = *(undefined8 *)(lVar3 + 0x98);
      uStack_378 = *(undefined8 *)(lVar3 + 0xb0);
      uStack_380 = *(undefined8 *)(lVar3 + 0xa8);
      uStack_368 = *(undefined8 *)(lVar3 + 0xc0);
      local_370 = *(undefined8 *)(lVar3 + 0xb8);
      uStack_358 = *(undefined8 *)(lVar3 + 0xd0);
      uStack_360 = *(undefined8 *)(lVar3 + 200);
      FUN_10007f314(&local_390,&local_170,&DAT_100a79f58,&DAT_10080f710);
      _swift_release(lVar3);
      uStack_248 = uStack_308;
      local_250 = local_310;
      uStack_238 = uStack_2f8;
      uStack_240 = uStack_300;
      uStack_228 = uStack_2e8;
      local_230 = local_2f0;
      uStack_218 = uStack_2d8;
      uStack_220 = uStack_2e0;
      uStack_288 = uStack_348;
      local_290 = local_350;
      uStack_278 = uStack_338;
      uStack_280 = uStack_340;
      uStack_268 = uStack_328;
      local_270 = local_330;
      uStack_258 = uStack_318;
      uStack_260 = uStack_320;
      uStack_2c8 = uStack_388;
      local_2d0 = local_390;
      uStack_2b8 = uStack_378;
      uStack_2c0 = uStack_380;
      uStack_2a8 = uStack_368;
      local_2b0 = local_370;
      uStack_298 = uStack_358;
      uStack_2a0 = uStack_360;
      iVar1 = (int)&local_2d0;
      FUN_100177d98();
      if (iVar1 != 1) {
        uStack_e8 = uStack_248;
        local_f0 = local_250;
        uStack_d8 = uStack_238;
        uStack_e0 = uStack_240;
        uStack_c8 = uStack_228;
        local_d0 = local_230;
        uStack_b8 = uStack_218;
        uStack_c0 = uStack_220;
        uStack_128 = uStack_288;
        local_130 = local_290;
        uStack_118 = uStack_278;
        uStack_120 = uStack_280;
        uStack_108 = uStack_268;
        local_110 = local_270;
        uStack_f8 = uStack_258;
        uStack_100 = uStack_260;
        uStack_168 = uStack_2c8;
        local_170 = local_2d0;
        uStack_158 = uStack_2b8;
        uStack_160 = uStack_2c0;
        uStack_148 = uStack_2a8;
        local_150 = local_2b0;
        uStack_138 = uStack_298;
        uStack_140 = uStack_2a0;
        uStack_3c8 = 0xc000000000000000;
        uStack_3d0 = 0;
        uStack_398 = 0xc000000000000000;
        uStack_3a0 = 0;
        lVar3 = unaff_x20 + lVar5;
        _swift_weakLoadStrong();
        if (lVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(lVar3 + 0x14);
          _swift_release();
        }
        lVar5 = unaff_x20 + lVar5;
        local_3d8 = uVar6;
        _swift_weakLoadStrong();
        if (lVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(lVar5 + 0x90);
          _swift_release();
        }
        local_3c0 = 2;
        local_3b8 = 1;
        local_a8 = CONCAT44(uStack_3d4,local_3d8);
        uStack_88 = CONCAT71(uStack_3b7,1) & 0xcfffffffffffffff;
        uStack_78 = CONCAT44(uStack_3a4,uVar6) & 0xcfffffffffffffff;
        uStack_98 = 0xc000000000000000;
        local_a0 = 0;
        local_90 = 2;
        uStack_68 = 0xe000000000000000;
        local_70 = 0;
        uStack_3b0 = param_1;
        local_3a8 = uVar6;
        local_80 = param_1;
        FUN_100193df4(auStack_210,&local_a8);
        FUN_1001bddd8(&local_170,auStack_210);
        uVar4 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
        FUN_1003fb4ec(FUN_100177dbc,auStack_460,0xd0000000000000b4,0x8000000100896020,
                      0xd000000000000031,0x80000001008962b0,0xa7,7);
        FUN_100040bb4(&local_390,&DAT_100a79f58,&DAT_10080f710);
        _swift_unknownObjectRelease(lVar2);
        FUN_10016b308(auStack_210);
        local_400 = CONCAT71(uStack_3b7,local_3b8);
        uStack_3f0 = CONCAT44(uStack_3a4,local_3a8);
        uStack_3f8 = uStack_3b0;
        uStack_3e8 = uStack_3a0;
        local_3e0 = uStack_398;
        local_420 = CONCAT44(uStack_3d4,local_3d8);
        uStack_418 = uStack_3d0;
        uStack_408 = local_3c0;
        uStack_410 = uStack_3c8;
        FUN_10016b3e8(&local_420);
        return;
      }
    }
    _swift_unknownObjectRelease(lVar2);
  }
  uVar4 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
  FUN_1003fb4ec(FUN_100177d8c,auStack_460,0xd0000000000000b4,0x8000000100896020,0xd000000000000031,
                0x80000001008962b0,0x9d,7);
  return;
}

