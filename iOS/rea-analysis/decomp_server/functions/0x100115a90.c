// rea decompile_all
// name: FUN_100115a90
// address: 0x100115a90
// body: available
// range: 0x100115a90-0x100115e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100115a90(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined4 local_428;
  undefined4 uStack_424;
  ulong uStack_420;
  ulong uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  ulong local_390;
  ulong uStack_388;
  ulong uStack_380;
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
  undefined8 local_300;
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
  undefined8 local_260;
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
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
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
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _TtC14UURemoteServer22ClipboardMobileManager::lastContent;
  lVar8 = (long)&local_440 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::lastContent);
  uVar9 = *(undefined8 *)PTR__NSPasteboardTypeString_100995440;
  local_1b8 = uVar9;
  _swift_retain(uVar7);
  FUN_1003be1c4(&local_120,&local_1b8);
  _swift_release(uVar7);
  if (uStack_118 != 0) {
    if ((local_120 == param_1) && (uStack_118 == param_2)) {
      _swift_bridgeObjectRelease(uStack_118);
      return;
    }
    uVar2 = local_120;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (local_120,uStack_118,param_1,param_2,0);
    _swift_bridgeObjectRelease(uStack_118);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  local_250 = uVar9;
  local_120 = param_1;
  uStack_118 = param_2;
  _swift_retain(uVar7);
  _swift_bridgeObjectRetain(param_2);
  FUN_1003be2ac(&local_120,&local_250);
  _swift_release(uVar7);
  FUN_100091474(&local_1b8);
  uStack_1e8 = uStack_150;
  local_1f0 = local_158;
  uStack_1d8 = uStack_140;
  uStack_1e0 = local_148;
  uStack_1c8 = uStack_130;
  local_1d0 = local_138;
  local_1c0 = local_128;
  uStack_228 = uStack_190;
  local_230 = local_198;
  uStack_218 = uStack_180;
  uStack_220 = local_188;
  uStack_208 = uStack_170;
  local_210 = local_178;
  uStack_1f8 = uStack_160;
  uStack_200 = local_168;
  uStack_248 = uStack_1b0;
  local_250 = local_1b8;
  uStack_238 = uStack_1a0;
  uStack_240 = local_1a8;
  uVar2 = param_1;
  uVar5 = param_2;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  if (uVar5 >> 0x3c < 0xf) {
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    uVar3 = uVar2;
    uVar6 = uVar5;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(uVar2,uVar5,lVar8);
    FUN_100006cc8(uVar2,uVar5);
    if (uVar6 != 0) {
      _swift_bridgeObjectRelease(0xe000000000000000);
      param_2 = uVar6;
      param_1 = uVar3;
      goto LAB_100115cb0;
    }
  }
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
LAB_100115cb0:
  local_428 = 1;
  uStack_438 = 0xc000000000000000;
  local_440 = 0;
  uStack_408 = 0xc000000000000000;
  local_410 = 0;
  uStack_420 = param_1;
  uStack_418 = param_2;
  FUN_100116680(&local_428);
  uStack_328 = uStack_3c0;
  local_330 = local_3c8;
  uStack_318 = uStack_3b0;
  uStack_320 = local_3b8;
  uStack_308 = uStack_3a0;
  local_310 = local_3a8;
  local_300 = local_398;
  uStack_368 = uStack_400;
  local_370 = uStack_408;
  uStack_358 = uStack_3f0;
  uStack_360 = local_3f8;
  uStack_348 = uStack_3e0;
  local_350 = local_3e8;
  uStack_338 = uStack_3d0;
  uStack_340 = local_3d8;
  local_390 = CONCAT44(uStack_424,local_428);
  uStack_388 = uStack_420;
  uStack_378 = local_410;
  uStack_380 = uStack_418;
  FUN_100008290(&local_390);
  uStack_288 = uStack_1e8;
  local_290 = local_1f0;
  uStack_278 = uStack_1d8;
  uStack_280 = uStack_1e0;
  uStack_268 = uStack_1c8;
  local_270 = local_1d0;
  local_260 = local_1c0;
  uStack_2c8 = uStack_228;
  local_2d0 = local_230;
  uStack_2b8 = uStack_218;
  uStack_2c0 = uStack_220;
  uStack_2a8 = uStack_208;
  local_2b0 = local_210;
  uStack_298 = uStack_1f8;
  uStack_2a0 = uStack_200;
  uStack_2e8 = uStack_248;
  local_2f0 = local_250;
  uStack_2d8 = uStack_238;
  uStack_2e0 = uStack_240;
  FUN_10011669c(&local_2f0);
  uStack_b8 = uStack_328;
  local_c0 = local_330;
  uStack_a8 = uStack_318;
  uStack_b0 = uStack_320;
  uStack_98 = uStack_308;
  local_a0 = local_310;
  local_90 = local_300;
  uStack_f8 = uStack_368;
  local_100 = local_370;
  uStack_e8 = uStack_358;
  uStack_f0 = uStack_360;
  uStack_d8 = uStack_348;
  local_e0 = local_350;
  uStack_c8 = uStack_338;
  uStack_d0 = uStack_340;
  uStack_118 = uStack_388;
  local_120 = local_390;
  uStack_108 = uStack_378;
  uStack_110 = uStack_380;
  uStack_80 = uStack_438;
  local_88 = local_440;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0xf000000000000000;
  lVar1 = unaff_x20 + _TtC14UURemoteServer22ClipboardMobileManager::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    FUN_1000914e4(&local_120);
  }
  else {
    puVar4 = &local_120;
    FUN_1001bd040(puVar4,0,0);
    FUN_1000914e4(&local_120);
    _swift_unknownObjectRelease(lVar1);
    _swift_release(puVar4);
  }
  return;
}

