// rea decompile_all
// name: FUN_10058e704
// address: 0x10058e704
// body: available
// range: 0x10058e704-0x10058ec8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10058e704(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_3c0 [72];
  long local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  long local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [24];
  long local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  long local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
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
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  long local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_beginAccess(param_1 + 0x10,auStack_b0,0,0);
  uVar8 = *(ulong *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  _swift_beginAccess(param_2 + 0x10,auStack_c8,0,0);
  lVar5 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    if ((uVar8 != *(ulong *)(param_2 + 0x10) || lVar1 != lVar5) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar8,lVar1,*(ulong *)(param_2 + 0x10),lVar5,0), (uVar8 & 1) == 0)) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0x20,auStack_e0,0,0);
  uVar7 = *(ulong *)(param_1 + 0x20);
  _swift_beginAccess(param_2 + 0x20,auStack_f8,0,0);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _swift_retain(param_1);
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  uVar8 = uVar7;
  FUN_10057267c(uVar7,uVar9);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar9);
  if ((uVar8 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x28,auStack_1a8,0,0);
    uStack_178 = *(undefined8 *)(param_1 + 0x40);
    uStack_180 = *(undefined8 *)(param_1 + 0x38);
    uStack_168 = *(undefined8 *)(param_1 + 0x50);
    local_170 = *(undefined8 *)(param_1 + 0x48);
    local_158 = *(undefined8 *)(param_1 + 0x60);
    uStack_160 = *(undefined8 *)(param_1 + 0x58);
    uStack_150 = *(undefined8 *)(param_1 + 0x68);
    uStack_188 = *(undefined8 *)(param_1 + 0x30);
    local_190 = *(long *)(param_1 + 0x28);
    _swift_beginAccess(param_2 + 0x28,auStack_1c0,0,0);
    lVar1 = local_190;
    uStack_128 = *(undefined8 *)(param_2 + 0x40);
    uStack_130 = *(undefined8 *)(param_2 + 0x38);
    uStack_118 = *(undefined8 *)(param_2 + 0x50);
    local_120 = *(undefined8 *)(param_2 + 0x48);
    uStack_108 = *(undefined8 *)(param_2 + 0x60);
    uStack_110 = *(undefined8 *)(param_2 + 0x58);
    local_100 = *(undefined8 *)(param_2 + 0x68);
    uStack_138 = *(undefined8 *)(param_2 + 0x30);
    local_288 = *(long *)(param_2 + 0x28);
    puVar6 = (undefined8 *)((ulong)&local_190 | 8);
    uStack_1f8 = uStack_180;
    local_200 = uStack_188;
    uStack_1e8 = local_170;
    uStack_1f0 = uStack_178;
    uStack_1d8 = uStack_160;
    local_1e0 = uStack_168;
    uStack_1c8 = uStack_150;
    uStack_1d0 = local_158;
    uStack_238 = *(undefined8 *)(param_2 + 0x38);
    local_240 = *(undefined8 *)(param_2 + 0x30);
    uStack_228 = *(undefined8 *)(param_2 + 0x48);
    uStack_230 = *(undefined8 *)(param_2 + 0x40);
    uStack_218 = *(undefined8 *)(param_2 + 0x58);
    local_220 = *(undefined8 *)(param_2 + 0x50);
    uStack_208 = *(undefined8 *)(param_2 + 0x68);
    uStack_210 = *(undefined8 *)(param_2 + 0x60);
    local_140 = local_288;
    if (local_190 == 0) {
      if (local_288 != 0) {
        FUN_10007f314(&local_190,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        FUN_10007f314(&local_140,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        _swift_release(param_1);
        _swift_release(param_2);
        goto LAB_10058eab4;
      }
      local_2d0 = 0;
      uStack_2c0 = puVar6[1];
      uStack_2c8 = *puVar6;
      local_2b0 = puVar6[3];
      uStack_2b8 = puVar6[2];
      uStack_2a0 = puVar6[5];
      uStack_2a8 = puVar6[4];
      local_290 = puVar6[7];
      uStack_298 = puVar6[6];
      FUN_10007f314(&local_190,&local_98,&DAT_100aab4b8,&DAT_100837c28);
      FUN_10007f314(&local_140,&local_98,&DAT_100aab4b8,&DAT_100837c28);
      FUN_100040bb4(&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
    }
    else {
      if (local_288 == 0) {
        FUN_10007f314(&local_190,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        FUN_10007f314(&local_140,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        FUN_10007f314(&local_190,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        FUN_10007f314(&local_140,&local_2d0,&DAT_100aab4b8,&DAT_100837c28);
        _swift_release(param_1);
        _swift_release(param_2);
        FUN_100040bb4(&local_140,&DAT_100aab4b8,&DAT_100837c28);
        FUN_100040bb4(&local_190,&DAT_100aab4b8,&DAT_100837c28);
LAB_10058eab4:
        uStack_2c0 = uStack_1f8;
        uStack_2c8 = local_200;
        local_2b0 = uStack_1e8;
        uStack_2b8 = uStack_1f0;
        uStack_2a0 = uStack_1d8;
        uStack_2a8 = local_1e0;
        local_290 = uStack_1c8;
        uStack_298 = uStack_1d0;
        local_2d0 = lVar1;
        uStack_278 = uStack_238;
        local_280 = local_240;
        uStack_268 = uStack_228;
        uStack_270 = uStack_230;
        uStack_258 = uStack_218;
        local_260 = local_220;
        uStack_248 = uStack_208;
        uStack_250 = uStack_210;
        FUN_100040bb4(&local_2d0,&DAT_100aad0c8,&DAT_10083cc40);
        return 0;
      }
      uStack_368 = *(undefined8 *)(param_2 + 0x38);
      uStack_370 = *(undefined8 *)(param_2 + 0x30);
      uStack_358 = *(undefined8 *)(param_2 + 0x48);
      uStack_360 = *(undefined8 *)(param_2 + 0x40);
      uStack_348 = *(undefined8 *)(param_2 + 0x58);
      local_350 = *(undefined8 *)(param_2 + 0x50);
      uStack_338 = *(undefined8 *)(param_2 + 0x68);
      local_340 = *(undefined8 *)(param_2 + 0x60);
      uStack_88 = puVar6[1];
      local_90 = *puVar6;
      uStack_78 = puVar6[3];
      local_80 = puVar6[2];
      uStack_68 = puVar6[5];
      local_70 = puVar6[4];
      uStack_58 = puVar6[7];
      local_60 = puVar6[6];
      local_98 = local_190;
      local_378 = local_288;
      local_2d0 = local_288;
      uStack_2c8 = uStack_370;
      uStack_2c0 = uStack_368;
      uStack_2b8 = uStack_360;
      local_2b0 = uStack_358;
      uStack_2a8 = local_350;
      uStack_2a0 = uStack_348;
      uStack_298 = local_340;
      local_290 = uStack_338;
      FUN_10007f314(&local_190,auStack_3c0,&DAT_100aab4b8,&DAT_100837c28);
      FUN_10007f314(&local_140,auStack_3c0,&DAT_100aab4b8,&DAT_100837c28);
      FUN_10007f314(&local_190,auStack_3c0,&DAT_100aab4b8,&DAT_100837c28);
      FUN_10007f314(&local_140,auStack_3c0,&DAT_100aab4b8,&DAT_100837c28);
      plVar4 = &local_98;
      FUN_1005a7490(plVar4,&local_2d0);
      FUN_100040bb4(&local_140,&DAT_100aab4b8,&DAT_100837c28);
      FUN_100040bb4(&local_190,&DAT_100aab4b8,&DAT_100837c28);
      FUN_100040bb4(&local_378,&DAT_100aab4b8,&DAT_100837c28);
      local_330 = lVar1;
      uStack_320 = uStack_1f8;
      local_328 = local_200;
      uStack_310 = uStack_1e8;
      uStack_318 = uStack_1f0;
      uStack_300 = uStack_1d8;
      local_308 = local_1e0;
      uStack_2f0 = uStack_1c8;
      uStack_2f8 = uStack_1d0;
      FUN_100040bb4(&local_330,&DAT_100aab4b8,&DAT_100837c28);
      if (((ulong)plVar4 & 1) == 0) goto LAB_10058ec48;
    }
    _swift_beginAccess(param_1 + 0x70,&local_330,0,0);
    uVar7 = *(ulong *)(param_1 + 0x70);
    _swift_beginAccess(param_2 + 0x70,&local_378,0,0);
    uVar9 = *(undefined8 *)(param_2 + 0x70);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar9);
    uVar8 = uVar7;
    FUN_100572b4c(uVar7,uVar9);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar9);
    if ((uVar8 & 1) != 0) {
      _swift_beginAccess(param_1 + 0x78,auStack_3c0,0,0);
      uVar8 = *(ulong *)(param_1 + 0x78);
      _swift_beginAccess(param_2 + 0x78,&local_200,0,0);
      FUN_1000e408c(uVar8,*(undefined8 *)(param_2 + 0x78));
      if ((uVar8 & 1) != 0) {
        _swift_beginAccess(param_1 + 0x80,&local_240,0,0);
        cVar2 = *(char *)(param_1 + 0x80);
        _swift_release(param_1);
        _swift_beginAccess(param_2 + 0x80,auStack_2e8,0,0);
        cVar3 = *(char *)(param_2 + 0x80);
        _swift_release(param_2);
        if (cVar2 == '\x03') {
          if (cVar3 != '\x03') {
            return 0;
          }
          return 1;
        }
        if (cVar3 == '\x03') {
          return 0;
        }
        if (cVar2 != cVar3) {
          return 0;
        }
        return 1;
      }
    }
  }
LAB_10058ec48:
  _swift_release(param_1);
  _swift_release(param_2);
  return 0;
}

