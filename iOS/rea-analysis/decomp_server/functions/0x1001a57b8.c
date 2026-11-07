// rea decompile_all
// name: FUN_1001a57b8
// address: 0x1001a57b8
// body: available
// range: 0x1001a57b8-0x1001a5ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001a57b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong local_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong local_370;
  ulong uStack_368;
  ulong local_360;
  ulong local_358;
  ulong uStack_350;
  ulong local_348;
  ulong uStack_340;
  ulong local_338;
  ulong uStack_330;
  ulong local_328;
  ulong uStack_320;
  ulong local_318;
  ulong uStack_310;
  ulong local_308;
  ulong uStack_300;
  ulong local_2f8;
  undefined7 uStack_2f0;
  undefined4 uStack_2e9;
  ulong local_2e0;
  ulong uStack_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  ulong local_2c0;
  ulong uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong local_278;
  ulong uStack_270;
  ulong local_268;
  ulong uStack_260;
  ulong local_258;
  ulong uStack_250;
  ulong local_248;
  ulong uStack_240;
  ulong local_238;
  ulong uStack_230;
  undefined3 local_228;
  undefined5 uStack_225;
  undefined3 uStack_220;
  undefined4 uStack_21d;
  undefined4 uStack_219;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  undefined7 uStack_1a8;
  undefined4 uStack_1a1;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined3 uStack_88;
  undefined5 local_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar8 != 0) {
    lVar6 = *(long *)(unaff_x20 + _TtC14UURemoteServer14AppListManager::appIconHandler);
    puVar9 = (ulong *)(param_1 + 0x78);
    do {
      uStack_a8 = puVar9[8];
      uStack_b0 = puVar9[7];
      uStack_98 = puVar9[10];
      local_a0 = puVar9[9];
      uStack_90 = puVar9[0xb];
      uStack_88 = (undefined3)puVar9[0xc];
      uStack_7d = *(undefined8 *)((long)puVar9 + 0x6b);
      local_85 = (undefined5)*(undefined8 *)((long)puVar9 + 99);
      uStack_80 = (undefined3)((ulong)*(undefined8 *)((long)puVar9 + 99) >> 0x28);
      local_3b0 = *puVar9;
      uVar10 = puVar9[-1];
      uStack_d8 = puVar9[2];
      uVar11 = puVar9[1];
      uStack_c8 = puVar9[4];
      uStack_d0 = puVar9[3];
      uStack_b8 = puVar9[6];
      local_c0 = puVar9[5];
      uStack_128 = puVar9[-8];
      uStack_130 = puVar9[-9];
      uStack_118 = puVar9[-6];
      local_120 = puVar9[-7];
      uStack_108 = puVar9[-4];
      uStack_110 = puVar9[-5];
      uVar12 = puVar9[-2];
      local_100 = puVar9[-3];
      uStack_138 = puVar9[-10];
      local_140 = puVar9[-0xb];
      uStack_178 = puVar9[-8];
      uStack_180 = puVar9[-9];
      uStack_168 = puVar9[-6];
      local_170 = puVar9[-7];
      uStack_158 = puVar9[-4];
      uStack_160 = puVar9[-5];
      local_150 = puVar9[-3];
      uStack_188 = puVar9[-10];
      local_190 = puVar9[-0xb];
      uStack_208 = puVar9[1];
      local_210 = *puVar9;
      uStack_1f8 = puVar9[3];
      uStack_200 = puVar9[2];
      uStack_1e8 = puVar9[5];
      local_1f0 = puVar9[4];
      uStack_1d8 = puVar9[7];
      uStack_1e0 = puVar9[6];
      uStack_1c8 = puVar9[9];
      local_1d0 = puVar9[8];
      uStack_1b8 = puVar9[0xb];
      local_1c0 = puVar9[10];
      local_1b0 = puVar9[0xc];
      uStack_1a8 = (undefined7)puVar9[0xd];
      uStack_1a1._1_3_ = (undefined3)((uint)*(undefined4 *)((long)puVar9 + 0x6f) >> 8);
      uStack_1a1._0_1_ = (undefined1)(puVar9[0xd] >> 0x38);
      uVar7 = *(undefined8 *)(lVar6 + 0x20);
      uStack_3a8 = uVar11;
      uStack_f8 = uVar12;
      local_f0 = uVar10;
      local_e8 = local_3b0;
      local_e0 = uVar11;
      FUN_1000acd04(&local_140,&local_2e0);
      FUN_1000acd04(&local_140,&local_2e0);
      _swift_retain(uVar7);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1003be1c4(&local_2e0,&local_3b0);
      _swift_bridgeObjectRelease(uVar11);
      _swift_release(uVar7);
      uVar2 = uStack_2d8;
      uVar11 = local_2e0;
      if (uStack_2d8 != 0) {
        uVar1 = local_2e0 & 0xffffffffffff;
        if ((uStack_2d8 & 0x2000000000000000) != 0) {
          uVar1 = uStack_2d8 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          _swift_bridgeObjectRelease(uStack_2d8);
        }
        else {
          _swift_bridgeObjectRelease(local_f0);
          uVar10 = uVar2;
          uVar12 = uVar11;
        }
      }
      uStack_2b8 = uStack_168;
      local_2c0 = local_170;
      uStack_2a8 = uStack_158;
      local_2b0 = uStack_160;
      uStack_2d8 = uStack_188;
      local_2e0 = local_190;
      uStack_2c8 = uStack_178;
      local_2d0 = uStack_180;
      uStack_240 = uStack_1c8;
      local_248 = local_1d0;
      uStack_230 = uStack_1b8;
      local_238 = local_1c0;
      uStack_220 = (undefined3)uStack_1a8;
      uStack_21d = (undefined4)((uint7)uStack_1a8 >> 0x18);
      local_228 = (undefined3)local_1b0;
      uStack_225 = (undefined5)(local_1b0 >> 0x18);
      uStack_280 = uStack_208;
      uStack_288 = local_210;
      uStack_270 = uStack_1f8;
      local_278 = uStack_200;
      uStack_260 = uStack_1e8;
      local_268 = local_1f0;
      local_2a0 = local_150;
      uStack_219 = uStack_1a1;
      uStack_250 = uStack_1d8;
      local_258 = uStack_1e0;
      uStack_298 = uVar12;
      local_290 = uVar10;
      FUN_1000acd04(&local_2e0,&local_3b0);
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_100036798(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar11 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100036798(puVar5,uVar11 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar11 + 1;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x28) = uStack_2d8;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x20) = local_2e0;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x58) = uStack_2a8;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x50) = local_2b0;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x68) = uStack_298;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x60) = local_2a0;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x38) = uStack_2c8;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x30) = local_2d0;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x48) = uStack_2b8;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x40) = local_2c0;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x98) = local_268;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x90) = uStack_270;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xa8) = local_258;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xa0) = uStack_260;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x78) = uStack_288;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x70) = local_290;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x88) = local_278;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0x80) = uStack_280;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xe3) = CONCAT44(uStack_219,uStack_21d);
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xdb) = CONCAT35(uStack_220,uStack_225);
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 200) = local_238;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xc0) = uStack_240;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xd8) = CONCAT53(uStack_225,local_228);
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xd0) = uStack_230;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xb8) = local_248;
      *(ulong *)(puVar5 + uVar11 * 0xd0 + 0xb0) = uStack_250;
      FUN_1000acd38(&local_140);
      uStack_388 = uStack_168;
      local_390 = local_170;
      uStack_378 = uStack_158;
      uStack_380 = uStack_160;
      uStack_3a8 = uStack_188;
      local_3b0 = local_190;
      uStack_398 = uStack_178;
      uStack_3a0 = uStack_180;
      uStack_2f0 = uStack_1a8;
      uStack_2e9 = uStack_1a1;
      local_2f8 = local_1b0;
      uStack_300 = uStack_1b8;
      local_308 = local_1c0;
      uStack_310 = uStack_1c8;
      local_318 = local_1d0;
      uStack_320 = uStack_1d8;
      local_328 = uStack_1e0;
      uStack_330 = uStack_1e8;
      local_338 = local_1f0;
      uStack_340 = uStack_1f8;
      local_348 = uStack_200;
      local_370 = local_150;
      uStack_350 = uStack_208;
      local_358 = local_210;
      uStack_368 = uVar12;
      local_360 = uVar10;
      FUN_1000acd38(&local_3b0);
      puVar9 = puVar9 + 0x1a;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return puVar5;
}

