// rea decompile_all
// name: FUN_100215344
// address: 0x100215344
// body: available
// range: 0x100215344-0x1002155a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100215344(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined1 auStack_450 [16];
  undefined8 local_440;
  undefined1 auStack_430 [192];
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
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    FUN_100401b14();
    FUN_1003fb4ec(FUN_100215b68,0,0xd0000000000000b2,0x8000000100885c70,&DAT_d00000000000003b,
                  0x80000001008a4db0,0x1e5,0);
  }
  else {
    FUN_1000c8ac4();
    FUN_10017cf58(&local_1e0,param_1,param_2,0);
    uStack_2e8 = uStack_158;
    local_2f0 = local_160;
    uStack_2d8 = uStack_148;
    uStack_2e0 = uStack_150;
    uStack_2c8 = uStack_138;
    local_2d0 = local_140;
    uStack_2b8 = uStack_128;
    uStack_2c0 = uStack_130;
    uStack_328 = uStack_198;
    local_330 = local_1a0;
    uStack_318 = uStack_188;
    uStack_320 = uStack_190;
    uStack_308 = uStack_178;
    local_310 = local_180;
    uStack_2f8 = uStack_168;
    uStack_300 = uStack_170;
    uStack_368 = uStack_1d8;
    local_370 = local_1e0;
    uStack_358 = uStack_1c8;
    uStack_360 = uStack_1d0;
    uStack_348 = uStack_1b8;
    local_350 = local_1c0;
    uStack_338 = uStack_1a8;
    uStack_340 = uStack_1b0;
    lVar2 = 0;
    FUN_10017a4a8();
    _swift_allocObject();
    FUN_100178c0c();
    *(undefined1 *)(lVar2 + 0x21) = param_3;
    *(undefined2 *)(lVar2 + 0x18) = 1;
    *(undefined8 *)(lVar2 + 0x38) = param_2;
    *(undefined1 *)(lVar2 + 0x40) = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_440 = param_2;
    FUN_1003fb48c(FUN_10021883c,auStack_450,0xd0000000000000b2,0x8000000100885c70,
                  &DAT_d00000000000003b,0x80000001008a4db0,499,0);
    uStack_228 = uStack_2e8;
    local_230 = local_2f0;
    uStack_218 = uStack_2d8;
    uStack_220 = uStack_2e0;
    uStack_208 = uStack_2c8;
    local_210 = local_2d0;
    uStack_1f8 = uStack_2b8;
    uStack_200 = uStack_2c0;
    uStack_268 = uStack_328;
    local_270 = local_330;
    uStack_258 = uStack_318;
    uStack_260 = uStack_320;
    uStack_248 = uStack_308;
    local_250 = local_310;
    uStack_238 = uStack_2f8;
    uStack_240 = uStack_300;
    uStack_2a8 = uStack_368;
    local_2b0 = local_370;
    uStack_298 = uStack_358;
    uStack_2a0 = uStack_360;
    uStack_288 = uStack_348;
    local_290 = local_350;
    uStack_278 = uStack_338;
    uStack_280 = uStack_340;
    FUN_100218744(&local_2b0);
    uStack_78 = uStack_208;
    local_80 = local_210;
    uStack_68 = uStack_1f8;
    uStack_70 = uStack_200;
    local_60 = local_1f0;
    uStack_b8 = uStack_248;
    local_c0 = local_250;
    uStack_a8 = uStack_238;
    uStack_b0 = uStack_240;
    uStack_98 = uStack_228;
    local_a0 = local_230;
    uStack_88 = uStack_218;
    uStack_90 = uStack_220;
    uStack_f8 = uStack_288;
    local_100 = local_290;
    uStack_e8 = uStack_278;
    uStack_f0 = uStack_280;
    uStack_d8 = uStack_268;
    local_e0 = local_270;
    uStack_c8 = uStack_258;
    uStack_d0 = uStack_260;
    uStack_118 = uStack_2a8;
    local_120 = local_2b0;
    uStack_108 = uStack_298;
    uStack_110 = uStack_2a0;
    FUN_1000408d0(&local_1e0,auStack_430);
    puVar3 = &local_120;
    FUN_100178e4c(puVar3,lVar2);
    FUN_1000914e4(&local_1e0);
    _swift_release(lVar2);
    _swift_release(puVar3);
    FUN_1000914e4(&local_1e0);
    _swift_release(lVar1);
  }
  return;
}

