// rea decompile_all
// name: FUN_1000533fc
// address: 0x1000533fc
// body: available
// range: 0x1000533fc-0x1000537d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000533fc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_370 [16];
  long *local_360;
  char *local_350;
  long local_348;
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
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined5 uStack_2d8;
  undefined3 local_2d3;
  undefined5 uStack_2d0;
  undefined8 uStack_2cb;
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
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_24b;
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
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined5 uStack_1d8;
  undefined3 local_1d3;
  undefined5 uStack_1d0;
  undefined8 uStack_1cb;
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
  undefined8 uStack_14b;
  undefined1 auStack_138 [24];
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined4 local_a8;
  undefined1 uStack_a4;
  long local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  local_350 = "ace- provider disconnect slot:";
  plVar8 = (long *)(param_1 + lVar6 * 0x80 + -0x60);
  do {
    lVar6 = lVar6 + -1;
    lStack_118 = plVar8[1];
    lVar9 = *plVar8;
    lStack_108 = plVar8[3];
    local_110 = plVar8[2];
    lStack_d8 = plVar8[9];
    local_e0 = plVar8[8];
    local_c8 = plVar8[0xb];
    lStack_d0 = plVar8[10];
    local_c0 = plVar8[0xc];
    uStack_b8 = (undefined5)plVar8[0xd];
    uVar10 = *(undefined8 *)((long)plVar8 + 0x75);
    uStack_ab = (undefined3)uVar10;
    local_a8 = (undefined4)((ulong)uVar10 >> 0x18);
    uStack_a4 = (undefined1)((ulong)uVar10 >> 0x38);
    uStack_b3 = (undefined3)*(undefined8 *)((long)plVar8 + 0x6d);
    local_b0 = (undefined5)((ulong)*(undefined8 *)((long)plVar8 + 0x6d) >> 0x18);
    lStack_f8 = plVar8[5];
    lStack_100 = plVar8[4];
    lStack_e8 = plVar8[7];
    local_f0 = plVar8[6];
    puVar5 = auStack_138;
    local_120 = lVar9;
    _swift_beginAccess(unaff_x20 + 0x70,puVar5,0x20,0);
    lVar7 = *(long *)(unaff_x20 + 0x70);
    if (*(long *)(lVar7 + 0x10) == 0) {
      FUN_10007ec64(&local_240);
      uStack_178 = uStack_1f8;
      local_180 = local_200;
      uStack_168 = uStack_1e8;
      uStack_170 = local_1f0;
      local_160 = uStack_1e0;
LAB_100053538:
      uStack_14b = uStack_1cb;
      uStack_1b8 = uStack_238;
      local_1c0 = local_240;
      uStack_1a8 = uStack_228;
      uStack_1b0 = uStack_230;
      uStack_198 = uStack_218;
      local_1a0 = local_220;
      uStack_188 = uStack_208;
      uStack_190 = uStack_210;
    }
    else {
      lVar4 = lVar9;
      thunk_FUN_1001a2e54();
      if (((ulong)puVar5 & 1) == 0) {
        FUN_10007ec64(&local_240);
        uStack_178 = uStack_1f8;
        local_180 = local_200;
        uStack_168 = uStack_1e8;
        uStack_170 = local_1f0;
        local_160 = uStack_1e0;
        goto LAB_100053538;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x80);
      uStack_218 = puVar1[5];
      local_220 = puVar1[4];
      uStack_208 = puVar1[7];
      uStack_210 = puVar1[6];
      uStack_238 = puVar1[1];
      local_240 = *puVar1;
      uStack_228 = puVar1[3];
      uStack_230 = puVar1[2];
      uStack_1f8 = puVar1[9];
      local_200 = puVar1[8];
      uStack_1e8 = puVar1[0xb];
      local_1f0 = puVar1[10];
      uStack_1e0 = puVar1[0xc];
      uStack_1cb = *(undefined8 *)((long)puVar1 + 0x75);
      uStack_1d0 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
      uStack_1d8 = (undefined5)puVar1[0xd];
      local_1d3 = (undefined3)((ulong)puVar1[0xd] >> 0x28);
      _memmove(&local_1c0,puVar1,0x7d);
      FUN_100008290(&local_1c0);
      FUN_10007eca0(&local_240,&local_2c0);
    }
    uStack_1f8 = uStack_178;
    local_200 = local_180;
    uStack_1e8 = uStack_168;
    local_1f0 = uStack_170;
    uStack_1e0 = local_160;
    uStack_1cb = uStack_14b;
    uStack_238 = uStack_1b8;
    local_240 = local_1c0;
    uStack_228 = uStack_1a8;
    uStack_230 = uStack_1b0;
    uStack_218 = uStack_198;
    local_220 = local_1a0;
    uStack_208 = uStack_188;
    uStack_210 = uStack_190;
    iVar3 = (int)&local_240;
    FUN_10007ec80();
    lVar7 = local_c8;
    if (iVar3 == 1) {
      uStack_278 = uStack_178;
      local_280 = local_180;
      uStack_268 = uStack_168;
      uStack_270 = uStack_170;
      local_260 = local_160;
      uStack_24b = uStack_14b;
      uStack_2b8 = uStack_1b8;
      local_2c0 = local_1c0;
      uStack_2a8 = uStack_1a8;
      uStack_2b0 = uStack_1b0;
      uStack_298 = uStack_198;
      local_2a0 = local_1a0;
      uStack_288 = uStack_188;
      uStack_290 = uStack_190;
      FUN_10007eca0(&local_120,&local_340);
      FUN_100040bb4(&local_2c0,&DAT_100a761f8,&DAT_10080a998);
      _swift_endAccess(auStack_138);
      FUN_10007ed50(&local_120);
    }
    else {
      iVar2 = (int)local_c0;
      local_88 = CONCAT35(uStack_b3,uStack_b8);
      local_98 = local_c8;
      local_90 = (int)local_c0;
      local_80 = CONCAT35(uStack_ab,local_b0);
      local_78 = local_a8;
      iVar3 = (int)local_160;
      uStack_278 = uStack_178;
      local_280 = local_180;
      uStack_268 = uStack_168;
      uStack_270 = uStack_170;
      local_260 = local_160;
      uStack_24b = uStack_14b;
      uStack_2b8 = uStack_1b8;
      local_2c0 = local_1c0;
      uStack_2a8 = uStack_1a8;
      uStack_2b0 = uStack_1b0;
      uStack_298 = uStack_198;
      local_2a0 = local_1a0;
      uStack_288 = uStack_188;
      uStack_290 = uStack_190;
      FUN_10007eca0(&local_120,&local_340);
      _swift_endAccess(auStack_138);
      FUN_100040bb4(&local_2c0,&DAT_100a761f8,&DAT_10080a998);
      if (iVar3 == iVar2) {
        puVar5 = auStack_138;
        _swift_beginAccess(unaff_x20 + 0x70,puVar5,0x21,0);
        thunk_FUN_1001a2e54();
        if (((ulong)puVar5 & 1) != 0) {
          iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x70);
          _swift_isUniquelyReferenced_nonNull_native();
          local_348 = *(long *)(unaff_x20 + 0x70);
          *(undefined8 *)(unaff_x20 + 0x70) = 0x8000000000000000;
          if (iVar3 == 0) {
            FUN_1000631c8();
          }
          lVar4 = local_348;
          puVar1 = (undefined8 *)(*(long *)(local_348 + 0x38) + lVar9 * 0x80);
          uStack_318 = puVar1[5];
          local_320 = puVar1[4];
          uStack_308 = puVar1[7];
          uStack_310 = puVar1[6];
          uStack_338 = puVar1[1];
          local_340 = *puVar1;
          uStack_328 = puVar1[3];
          uStack_330 = puVar1[2];
          uStack_2f8 = puVar1[9];
          local_300 = puVar1[8];
          uStack_2e8 = puVar1[0xb];
          local_2f0 = puVar1[10];
          uStack_2e0 = puVar1[0xc];
          uStack_2cb = *(undefined8 *)((long)puVar1 + 0x75);
          uStack_2d0 = (undefined5)((ulong)*(undefined8 *)((long)puVar1 + 0x6d) >> 0x18);
          uStack_2d8 = (undefined5)puVar1[0xd];
          local_2d3 = (undefined3)((ulong)puVar1[0xd] >> 0x28);
          FUN_10007ed50(&local_340);
          FUN_10006c2d0(lVar9,lVar4);
          *(long *)(unaff_x20 + 0x70) = lVar4;
        }
        _swift_endAccess(auStack_138);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_360 = &local_98;
        FUN_1003fb48c(thunk_FUN_10007ec98,auStack_370,0xd0000000000000a5,
                      (ulong)local_350 | 0x8000000000000000,0x656e6e6f63736964,0xee00293a5f287463,
                      0xb6,0);
        FUN_100004030(lVar7);
      }
      FUN_10007ed50(&local_120);
    }
    if (lVar6 == 0) {
      return;
    }
    plVar8 = plVar8 + -0x10;
  } while( true );
}

