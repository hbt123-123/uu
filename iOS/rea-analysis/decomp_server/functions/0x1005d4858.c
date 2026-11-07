// rea decompile_all
// name: FUN_1005d4858
// address: 0x1005d4858
// body: available
// range: 0x1005d4858-0x1005d4bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005d48e0) */

void FUN_1005d4858(undefined8 param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  ID self;
  undefined1 auStack_508 [24];
  ulong local_4f0;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  char local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined1 local_470;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
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
  undefined1 local_370;
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
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
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
  undefined1 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  uVar3 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar4 = uVar3;
  FUN_1005d4c00();
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&local_160,&DAT_1009da430,param_1,param_2,&DAT_1009da430,uVar4);
  _swift_release(uVar3);
  FUN_100008290(&local_160);
  uStack_298 = uStack_98;
  local_2a0 = local_a0;
  uStack_288 = uStack_88;
  uStack_290 = local_90;
  uStack_278 = uStack_78;
  local_280 = local_80;
  uStack_2d8 = uStack_d8;
  local_2e0 = local_e0;
  uStack_2c8 = uStack_c8;
  uStack_2d0 = local_d0;
  uStack_2b8 = uStack_b8;
  local_2c0 = local_c0;
  uStack_2a8 = uStack_a8;
  uStack_2b0 = local_b0;
  uStack_318 = uStack_118;
  local_320 = local_120;
  uStack_308 = uStack_108;
  uStack_310 = local_110;
  uStack_2f8 = uStack_f8;
  local_300 = local_100;
  uStack_2e8 = uStack_e8;
  uStack_2f0 = local_f0;
  uStack_358 = uStack_158;
  local_360 = local_160;
  uStack_348 = uStack_148;
  uStack_350 = uStack_150;
  uStack_338 = uStack_138;
  local_340 = local_140;
  uStack_328 = uStack_128;
  uStack_330 = local_130;
  uStack_198 = uStack_98;
  local_1a0 = local_a0;
  uStack_188 = uStack_88;
  uStack_190 = local_90;
  uStack_178 = uStack_78;
  local_180 = local_80;
  uStack_1d8 = uStack_d8;
  local_1e0 = local_e0;
  uStack_1c8 = uStack_c8;
  uStack_1d0 = local_d0;
  uStack_1b8 = uStack_b8;
  local_1c0 = local_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = local_b0;
  uStack_218 = uStack_118;
  local_220 = local_120;
  uStack_208 = uStack_108;
  uStack_210 = local_110;
  uStack_1f8 = uStack_f8;
  local_200 = local_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = local_f0;
  uStack_258 = uStack_158;
  local_260 = local_160;
  uStack_248 = uStack_148;
  uStack_250 = uStack_150;
  local_270 = local_70;
  local_170 = local_70;
  uStack_238 = uStack_138;
  local_240 = local_140;
  uStack_228 = uStack_128;
  uStack_230 = local_130;
  iVar2 = (int)&local_260;
  FUN_1005d4c70();
  if (iVar2 == 1) {
    FUN_1005d2770(&local_460);
  }
  else {
    uStack_398 = uStack_298;
    local_3a0 = local_2a0;
    uStack_388 = uStack_288;
    uStack_390 = uStack_290;
    uStack_378 = uStack_278;
    local_380 = local_280;
    local_370 = local_270;
    uStack_3d8 = uStack_2d8;
    local_3e0 = local_2e0;
    uStack_3c8 = uStack_2c8;
    uStack_3d0 = uStack_2d0;
    uStack_3b8 = uStack_2b8;
    local_3c0 = local_2c0;
    uStack_3a8 = uStack_2a8;
    uStack_3b0 = uStack_2b0;
    uStack_418 = uStack_318;
    local_420 = local_320;
    uStack_408 = uStack_308;
    uStack_410 = uStack_310;
    uStack_3f8 = uStack_2f8;
    local_400 = local_300;
    uStack_3e8 = uStack_2e8;
    uStack_3f0 = uStack_2f0;
    uStack_458 = uStack_358;
    local_460 = local_360;
    uStack_448 = uStack_348;
    uStack_450 = uStack_350;
    uStack_438 = uStack_338;
    local_440 = local_340;
    uStack_428 = uStack_328;
    uStack_430 = uStack_330;
  }
  uStack_478 = 0;
  local_480 = 0;
  uStack_498 = 0;
  local_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  local_470 = 2;
  self = *(ID *)(unaff_x20 + 0x20);
  _objc_msgSend(self,"lock");
  lVar5 = unaff_x20 + 0x28;
  _swift_unknownObjectWeakLoadStrong();
  lVar7 = *(long *)(unaff_x20 + 0x30);
  _objc_msgSend(self,"unlock");
  if (lVar5 != 0) {
    _swift_getObjectType(lVar5);
    (*(code *)PTR____chkstk_darwin_100995498)();
    (**(code **)(lVar7 + 0x20))();
    _swift_unknownObjectRelease(lVar5);
  }
  FUN_1005d4c8c(&local_4a0,&local_4d8);
  if (local_4a8 == '\0') {
    (*param_3)(local_4d8,uStack_4d0);
    FUN_1005d4cc8(&local_360);
    FUN_100006cdc(local_4d8,uStack_4d0);
  }
  else if (local_4a8 == '\x01') {
    FUN_1005d4d44(&local_4d8,auStack_508);
    puVar6 = auStack_508;
    FUN_10003f030(puVar6,local_4f0);
    uVar3 = 0;
    FUN_1005cf5b0(0,local_4f0,local_4e0,puVar6);
    uVar4 = 0;
    if (local_4f0 >> 0x3c < 0xf) {
      uVar4 = uVar3;
    }
    uVar1 = 0xc000000000000000;
    if (local_4f0 >> 0x3c < 0xf) {
      uVar1 = local_4f0;
    }
    (*param_3)(uVar4,uVar1);
    FUN_1005d4cc8(&local_360);
    FUN_100006cdc(uVar4,uVar1);
    FUN_10003f094(auStack_508);
  }
  else {
    (*param_3)(0,0xc000000000000000);
    FUN_1005d4cc8(&local_360);
  }
  FUN_1005d4d10(&local_4a0);
  return;
}

