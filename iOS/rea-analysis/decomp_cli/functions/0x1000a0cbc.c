// rea decompile_all
// name: FUN_1000a0cbc
// address: 0x1000a0cbc
// body: available
// range: 0x1000a0cbc-0x1000a13f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a0cbc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined *local_7f0;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined *local_668;
  undefined1 auStack_660 [16];
  undefined8 local_650;
  long lStack_648;
  undefined1 auStack_5c8 [120];
  long local_550;
  long local_548;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 auStack_498 [152];
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
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
  undefined8 local_300;
  undefined1 auStack_2f8 [96];
  undefined1 local_298;
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
  undefined8 uStack_1c8;
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
  undefined8 local_150;
  long lStack_148;
  undefined *local_140;
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
  
  puVar18 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1000a13f8);
    (*pcVar16)();
  }
  plVar15 = (long *)(param_2 + 0x10) + lVar10 * 2;
  lVar2 = *plVar15;
  lVar4 = plVar15[1];
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    _swift_bridgeObjectRetain(param_2);
    puVar17 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_140 = PTR___swiftEmptyArrayStorage_1000f0740;
    _swift_bridgeObjectRetain(param_2);
    FUN_1000798d0(0,lVar10,0);
    plVar15 = (long *)(param_2 + 0x28);
    do {
      puVar17 = local_140;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000a13f0);
        (*pcVar16)();
      }
      lVar20 = plVar15[-1];
      lVar8 = *plVar15;
      (**(code **)(lVar8 + 0x18))();
      uVar13 = *(ulong *)(puVar17 + 0x10);
      local_140 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar13) {
        FUN_1000798d0(1 < *(ulong *)(puVar17 + 0x18),uVar13 + 1,1);
      }
      puVar17 = local_140;
      *(ulong *)(local_140 + 0x10) = uVar13 + 1;
      *(long *)(local_140 + uVar13 * 0x10 + 0x20) = lVar20;
      *(long *)(local_140 + uVar13 * 0x10 + 0x28) = lVar8;
      plVar15 = plVar15 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(auStack_660,*(undefined8 *)(param_2 + 0x20));
    lStack_148 = lStack_648;
    local_150 = local_650;
    FUN_1000a1b08(&local_150,&local_140);
    FUN_10006e954(auStack_660);
    lVar10 = lStack_148;
    uVar22 = local_150;
    if (lStack_148 != 0) {
      uVar13 = *(ulong *)(puVar17 + 0x10);
      puVar9 = puVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar9 == 0) || (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar13)) {
        local_668 = puVar17;
        FUN_10006e610();
        puVar17 = puVar9;
      }
      local_668 = puVar17;
      FUN_10002240c(0,0,1,uVar22,lVar10);
      FUN_10001fc18(&local_150,&DAT_100104b58,&DAT_1000d5be8);
    }
  }
  pcVar16 = *(code **)(lVar4 + 0x10);
  (*pcVar16)(auStack_5c8,lVar2);
  FUN_10006e954(auStack_5c8);
  if (local_550 == 0) {
    local_818 = 0;
    uStack_810 = 0;
  }
  else {
    (**(code **)(local_548 + 0x10))(&local_530);
    local_818 = local_528;
    uStack_810 = local_530;
    _swift_bridgeObjectRetain();
    FUN_10006e954(&local_530);
  }
  lVar8 = lVar2;
  lVar10 = lVar4;
  (*pcVar16)(auStack_498);
  FUN_10006cdcc();
  FUN_10006e954(auStack_498);
  lVar20 = *(long *)(lVar8 + 0x10);
  if (lVar20 == 0) {
    _swift_bridgeObjectRelease(lVar8);
    puVar18 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    local_140 = puVar18;
    lVar10 = lVar20;
    FUN_100079908(0,lVar20,0);
    lVar11 = 0x20;
    do {
      puVar18 = local_140;
      uVar23 = ((undefined8 *)(lVar8 + lVar11))[1];
      uVar22 = *(undefined8 *)(lVar8 + lVar11);
      uVar13 = param_2;
      _swift_bridgeObjectRetain();
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = param_2;
      if ((uVar13 & 1) == 0) {
        lVar10 = *(long *)(param_2 + 0x10) + 1;
        uVar12 = 0;
        FUN_10006e820(0,lVar10,1,param_2);
      }
      uVar13 = *(ulong *)(uVar12 + 0x10);
      lVar1 = uVar13 + 1;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar13) {
        uVar12 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        lVar10 = lVar1;
        FUN_10006e820(uVar12,lVar1,1);
      }
      *(long *)(uVar12 + 0x10) = lVar1;
      lVar1 = uVar12 + uVar13 * 0x10;
      *(undefined8 *)(lVar1 + 0x28) = uVar23;
      *(undefined8 *)(lVar1 + 0x20) = uVar22;
      FUN_1000a0cbc(&local_400,uVar12);
      uVar13 = *(ulong *)(puVar18 + 0x10);
      lVar1 = uVar13 + 1;
      local_140 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar13) {
        lVar10 = lVar1;
        FUN_100079908(1 < *(ulong *)(puVar18 + 0x18),lVar1,1);
      }
      puVar18 = local_140;
      *(long *)(local_140 + 0x10) = lVar1;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x28) = uStack_3f8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x20) = local_400;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x38) = uStack_3e8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x30) = local_3f0;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x68) = uStack_3b8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x60) = local_3c0;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x78) = uStack_3a8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x70) = local_3b0;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x48) = uStack_3d8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x40) = local_3e0;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x58) = uStack_3c8;
      *(undefined8 *)(local_140 + uVar13 * 0x60 + 0x50) = local_3d0;
      lVar11 = lVar11 + 0x10;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar13 = param_2;
  FUN_1000a03b4();
  _swift_bridgeObjectRelease(param_2);
  uVar12 = *(ulong *)(uVar13 + 0x10);
  if (uVar12 == 0) {
    local_7f0 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    uVar19 = 0;
    local_7f0 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      puVar21 = (undefined8 *)(uVar13 + 0x20 + uVar19 * 0xd0);
      uVar14 = uVar19;
      while( true ) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1000a13f4);
          (*pcVar16)();
        }
        uStack_138 = puVar21[1];
        local_140 = (undefined *)*puVar21;
        uStack_128 = puVar21[3];
        local_130 = puVar21[2];
        uStack_118 = puVar21[5];
        local_120 = puVar21[4];
        uStack_108 = puVar21[7];
        local_110 = puVar21[6];
        uStack_f8 = puVar21[9];
        local_100 = puVar21[8];
        uStack_e8 = puVar21[0xb];
        local_f0 = puVar21[10];
        uStack_d8 = puVar21[0xd];
        local_e0 = puVar21[0xc];
        uStack_c8 = puVar21[0xf];
        local_d0 = puVar21[0xe];
        uStack_b8 = puVar21[0x11];
        local_c0 = puVar21[0x10];
        uStack_a8 = puVar21[0x13];
        local_b0 = puVar21[0x12];
        uStack_98 = puVar21[0x15];
        local_a0 = puVar21[0x14];
        uStack_88 = puVar21[0x17];
        local_90 = puVar21[0x16];
        uStack_78 = puVar21[0x19];
        local_80 = puVar21[0x18];
        uVar19 = uVar14 + 1;
        FUN_10006ff98(&local_140,&local_7e0);
        FUN_1000a14e8(&local_3a0,&local_140);
        uStack_688 = uStack_318;
        local_690 = local_320;
        uStack_678 = uStack_308;
        uStack_680 = local_310;
        local_670 = local_300;
        uStack_6c8 = uStack_358;
        local_6d0 = local_360;
        uStack_6b8 = uStack_348;
        uStack_6c0 = local_350;
        uStack_6a8 = uStack_338;
        local_6b0 = local_340;
        uStack_698 = uStack_328;
        uStack_6a0 = local_330;
        uStack_708 = uStack_398;
        local_710 = local_3a0;
        uStack_6f8 = uStack_388;
        uStack_700 = local_390;
        uStack_6e8 = uStack_378;
        local_6f0 = local_380;
        uStack_6d8 = uStack_368;
        uStack_6e0 = local_370;
        FUN_10008efb4(&local_140);
        uStack_178 = uStack_318;
        local_180 = local_320;
        uStack_168 = uStack_308;
        local_170 = local_310;
        local_160 = local_300;
        uStack_1b8 = uStack_358;
        local_1c0 = local_360;
        uStack_1a8 = uStack_348;
        local_1b0 = local_350;
        uStack_188 = uStack_328;
        local_190 = local_330;
        uStack_198 = uStack_338;
        local_1a0 = local_340;
        uStack_1f8 = uStack_398;
        local_200 = local_3a0;
        uStack_1e8 = uStack_388;
        local_1f0 = local_390;
        uStack_1c8 = uStack_368;
        local_1d0 = local_370;
        uStack_1d8 = uStack_378;
        local_1e0 = local_380;
        iVar7 = (int)&local_200;
        FUN_1000a1b58();
        if (iVar7 != 1) break;
        puVar21 = puVar21 + 0x1a;
        uVar14 = uVar19;
        if (uVar12 == uVar19) goto LAB_1000a12c8;
      }
      puVar9 = local_7f0;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar9 & 1) == 0) {
        plVar15 = (long *)(local_7f0 + 0x10);
        local_7f0 = (undefined *)0x0;
        FUN_10006eeec(0,*plVar15 + 1,1);
      }
      uVar3 = *(ulong *)(local_7f0 + 0x10);
      if (*(ulong *)(local_7f0 + 0x18) >> 1 <= uVar3) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_7f0 + 0x18));
        FUN_10006eeec(puVar9,uVar3 + 1,1,local_7f0);
        local_7f0 = puVar9;
      }
      uStack_798 = uStack_6c8;
      local_7a0 = local_6d0;
      uStack_788 = uStack_6b8;
      local_790 = uStack_6c0;
      uStack_7b8 = uStack_6e8;
      local_7c0 = local_6f0;
      uStack_7a8 = uStack_6d8;
      local_7b0 = uStack_6e0;
      local_740 = local_670;
      uStack_758 = uStack_688;
      local_760 = local_690;
      uStack_748 = uStack_678;
      local_750 = uStack_680;
      uStack_778 = uStack_6a8;
      local_780 = local_6b0;
      uStack_768 = uStack_698;
      local_770 = uStack_6a0;
      uStack_7d8 = uStack_708;
      local_7e0 = local_710;
      uStack_7c8 = uStack_6f8;
      uStack_7d0 = uStack_700;
      *(ulong *)(local_7f0 + 0x10) = uVar3 + 1;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x38) = uStack_6f8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x30) = uStack_700;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x48) = uStack_6e8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x40) = local_6f0;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x28) = uStack_708;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x20) = local_710;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x78) = uStack_6b8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x70) = uStack_6c0;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x88) = uStack_6a8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x80) = local_6b0;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x58) = uStack_6d8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x50) = uStack_6e0;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x68) = uStack_6c8;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x60) = local_6d0;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0xc0) = local_670;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0xa8) = uStack_688;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0xa0) = local_690;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0xb8) = uStack_678;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0xb0) = uStack_680;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x98) = uStack_698;
      *(undefined8 *)(local_7f0 + uVar3 * 0xa8 + 0x90) = uStack_6a0;
    } while (uVar12 - 1 != uVar14);
  }
LAB_1000a12c8:
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(lVar10);
  (*pcVar16)(auStack_2f8,lVar2,lVar4);
  FUN_10006e954(auStack_2f8);
  lVar10 = lVar2;
  lVar20 = lVar4;
  (**(code **)(lVar4 + 0x18))(lVar2);
  (*pcVar16)(&local_710,lVar2,lVar4);
  uVar6 = uStack_6e8;
  uVar5 = local_6f0;
  _swift_bridgeObjectRetain(uStack_6e8);
  FUN_10006e954(&local_710);
  (*pcVar16)(&local_7e0,lVar2,lVar4);
  uVar23 = uStack_798;
  uVar22 = local_7a0;
  _swift_bridgeObjectRetain(uStack_798);
  FUN_10006e954(&local_7e0);
  FUN_1000b60d0(&local_260,puVar17,local_298,lVar10,lVar20,uVar5,uVar6,uVar22,uVar23,uStack_810,
                local_818,puVar18,local_7f0);
  _swift_unknownObjectRelease(param_2);
  param_1[5] = uStack_238;
  param_1[4] = local_240;
  param_1[7] = uStack_228;
  param_1[6] = local_230;
  param_1[9] = uStack_218;
  param_1[8] = local_220;
  param_1[0xb] = uStack_208;
  param_1[10] = local_210;
  param_1[1] = uStack_258;
  *param_1 = local_260;
  param_1[3] = uStack_248;
  param_1[2] = local_250;
  return;
}

