// rea decompile_all
// name: FUN_10005570c
// address: 0x10005570c
// body: available
// range: 0x10005570c-0x100056033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100055fec) */

undefined * FUN_10005570c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined *local_328;
  long local_2d8;
  undefined *local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
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
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined *local_1f0;
  long local_1e8;
  undefined *local_1e0;
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
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78 [3];
  
  local_130 = (undefined *)0x0;
  uStack_128 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(uStack_128);
  local_130 = (undefined *)0x6574656c706d6f63;
  uStack_128 = 0xed00002720632d20;
  puVar16 = (undefined *)*unaff_x20;
  if ((puVar16 == (undefined *)0x0) || (*(long *)(puVar16 + 0x10) == 0)) {
    puVar14 = unaff_x20 + 2;
    puVar15 = unaff_x20 + 3;
  }
  else {
    puVar14 = (undefined8 *)(puVar16 + 0x20);
    puVar15 = (undefined8 *)(puVar16 + 0x28);
  }
  uVar17 = *puVar14;
  uVar20 = *puVar15;
  _swift_bridgeObjectRetain(uVar20);
  __sSS6appendyySSF(uVar17,uVar20);
  _swift_bridgeObjectRelease(uVar20);
  __sSS6appendyySSF(0x27206e2d2027,0xe600000000000000);
  uVar17 = uStack_128;
  puVar11 = local_130;
  puVar18 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if ((undefined *)unaff_x20[10] != (undefined *)0x0) {
    puVar6 = (undefined *)unaff_x20[10];
  }
  uVar21 = *(ulong *)(puVar6 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar21 != 0) {
    uVar23 = 0;
    do {
      puVar14 = (undefined8 *)(puVar6 + uVar23 * 0x60 + 0x20);
      uVar24 = uVar23;
      while( true ) {
        if (*(ulong *)(puVar6 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fd4);
          (*pcVar4)();
        }
        uStack_128 = puVar14[1];
        local_130 = (undefined *)*puVar14;
        uStack_118 = puVar14[3];
        local_120 = puVar14[2];
        lStack_108 = puVar14[5];
        local_110 = puVar14[4];
        uStack_f8 = puVar14[7];
        local_100 = puVar14[6];
        uStack_e8 = puVar14[9];
        local_f0 = puVar14[8];
        uStack_d8 = puVar14[0xb];
        local_e0 = puVar14[10];
        uVar23 = uVar24 + 1;
        if ((char)uStack_128 == '\x01') break;
        puVar14 = puVar14 + 0xc;
        uVar24 = uVar23;
        if (uVar21 == uVar23) goto LAB_100055910;
      }
      FUN_100052a08(&local_130,&local_1e0);
      puVar5 = puVar18;
      _swift_isUniquelyReferenced_nonNull_native();
      local_2a0 = puVar18;
      if (((ulong)puVar5 & 1) == 0) {
        FUN_100079908(0,*(long *)(puVar18 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(local_2a0 + 0x10);
      if (*(ulong *)(local_2a0 + 0x18) >> 1 <= uVar1) {
        FUN_100079908(1 < *(ulong *)(local_2a0 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_2a0 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x28) = uStack_128;
      *(undefined **)(local_2a0 + uVar1 * 0x60 + 0x20) = local_130;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x38) = uStack_118;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x30) = local_120;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x68) = uStack_e8;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x60) = local_f0;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x78) = uStack_d8;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x70) = local_e0;
      *(long *)(local_2a0 + uVar1 * 0x60 + 0x48) = lStack_108;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x40) = local_110;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x58) = uStack_f8;
      *(undefined8 *)(local_2a0 + uVar1 * 0x60 + 0x50) = local_100;
      puVar18 = local_2a0;
    } while (uVar21 - 1 != uVar24);
  }
LAB_100055910:
  _swift_bridgeObjectRelease();
  local_88 = 0;
  local_80 = 0xe000000000000000;
  local_78[0] = (undefined *)0x0;
  FUN_1000560fc();
  lVar22 = *(long *)(puVar6 + 0x10);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100052a08(unaff_x20,&local_130);
  if (lVar22 == 0) {
    local_328 = PTR___swiftEmptyArrayStorage_1000f0740;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined8 *)(puVar6 + 0x20);
    local_328 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      uStack_128 = puVar14[1];
      local_130 = (undefined *)*puVar14;
      uStack_118 = puVar14[3];
      local_120 = puVar14[2];
      lStack_108 = puVar14[5];
      local_110 = puVar14[4];
      uStack_f8 = puVar14[7];
      local_100 = puVar14[6];
      uStack_e8 = puVar14[9];
      local_f0 = puVar14[8];
      uStack_d8 = puVar14[0xb];
      local_e0 = puVar14[10];
      uStack_c8 = puVar14[0xd];
      uStack_d0 = puVar14[0xc];
      uStack_b8 = puVar14[0xf];
      local_c0 = puVar14[0xe];
      uStack_a8 = puVar14[0x11];
      local_b0 = puVar14[0x10];
      uStack_98 = puVar14[0x13];
      uStack_a0 = puVar14[0x12];
      local_90 = puVar14[0x14];
      uStack_168 = puVar14[0xf];
      local_170 = puVar14[0xe];
      uStack_158 = puVar14[0x11];
      local_160 = puVar14[0x10];
      uStack_148 = puVar14[0x13];
      local_150 = puVar14[0x12];
      local_140 = puVar14[0x14];
      uStack_1a8 = puVar14[7];
      local_1b0 = puVar14[6];
      uStack_198 = puVar14[9];
      local_1a0 = puVar14[8];
      uStack_188 = puVar14[0xb];
      local_190 = puVar14[10];
      uStack_178 = puVar14[0xd];
      local_180 = puVar14[0xc];
      uStack_1d8 = puVar14[1];
      local_1e0 = (undefined *)*puVar14;
      uStack_1c8 = puVar14[3];
      local_1d0 = puVar14[2];
      uStack_1b8 = puVar14[5];
      local_1c0 = puVar14[4];
      FUN_100052a44(&local_130,&local_2a0);
      FUN_100056728(&local_1f0,&local_1e0,&local_88,puVar11,uVar17,unaff_x20,local_78);
      uStack_228 = uStack_168;
      local_230 = local_170;
      uStack_218 = uStack_158;
      uStack_220 = local_160;
      uStack_208 = uStack_148;
      local_210 = local_150;
      local_200 = local_140;
      uStack_258 = uStack_198;
      local_260 = local_1a0;
      uStack_248 = uStack_188;
      uStack_250 = local_190;
      uStack_238 = uStack_178;
      local_240 = local_180;
      uStack_298 = uStack_1d8;
      local_2a0 = local_1e0;
      uStack_288 = uStack_1c8;
      uStack_290 = local_1d0;
      uStack_278 = uStack_1b8;
      local_280 = local_1c0;
      uStack_268 = uStack_1a8;
      uStack_270 = local_1b0;
      FUN_100052a80(&local_2a0);
      lVar2 = local_1e8;
      puVar5 = local_1f0;
      if (local_1e8 != 0) {
        puVar19 = local_328;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar19 & 1) == 0) {
          puVar19 = (undefined *)0x0;
          FUN_10006e610(0,*(long *)(local_328 + 0x10) + 1,1,local_328);
          local_328 = puVar19;
        }
        uVar21 = *(ulong *)(local_328 + 0x10);
        if (*(ulong *)(local_328 + 0x18) >> 1 <= uVar21) {
          local_328 = (undefined *)(ulong)(1 < *(ulong *)(local_328 + 0x18));
          FUN_10006e610(local_328,uVar21 + 1,1);
        }
        *(ulong *)(local_328 + 0x10) = uVar21 + 1;
        *(undefined **)(local_328 + uVar21 * 0x10 + 0x20) = puVar5;
        *(long *)(local_328 + uVar21 * 0x10 + 0x28) = lVar2;
      }
      puVar14 = puVar14 + 0x15;
      lVar22 = lVar22 + -1;
      puVar5 = local_78[0];
    } while (lVar22 != 0);
  }
  puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
  FUN_100052b44(unaff_x20);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(uVar17);
  puVar6 = puVar5 + 1;
  if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fec);
    (*pcVar4)();
  }
  local_2d8 = *(long *)(puVar18 + 0x10);
  local_78[0] = puVar6;
  if (local_2d8 == 0) {
    _swift_bridgeObjectRelease(uVar17);
    puVar19 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    FUN_1000798d0(0,local_2d8,0);
    uStack_298 = unaff_x20[3];
    local_2a0 = (undefined *)unaff_x20[2];
    puVar14 = (undefined8 *)(puVar18 + 0x20);
    puVar5 = puVar19;
    if (puVar16 != (undefined *)0x0) {
      puVar5 = puVar16;
    }
    while( true ) {
      local_2d8 = local_2d8 + -1;
      uStack_128 = puVar14[1];
      local_130 = (undefined *)*puVar14;
      uStack_118 = puVar14[3];
      local_120 = puVar14[2];
      lStack_108 = puVar14[5];
      local_110 = puVar14[4];
      uStack_f8 = puVar14[7];
      local_100 = puVar14[6];
      uStack_e8 = puVar14[9];
      local_f0 = puVar14[8];
      uStack_d8 = puVar14[0xb];
      local_e0 = puVar14[10];
      uVar25 = 0xe000000000000000;
      local_1f0 = (undefined *)0x0;
      local_1e8 = -0x2000000000000000;
      ppuVar10 = &local_1e0;
      FUN_100052a08(&local_130,ppuVar10);
      __ss11_StringGutsV4growyySiF(0x1e);
      lVar22 = local_1e8;
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRelease(lVar22);
      local_1e0 = puVar11;
      uStack_1d8 = uVar17;
      FUN_100054c98();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(ppuVar10);
      __sSS6appendyySSF(0x2220,0xe200000000000000);
      lVar22 = lStack_108;
      uVar13 = local_110;
      uVar3 = uStack_118;
      uVar20 = local_120;
      puVar7 = &DAT_100103f18;
      FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined8 *)(puVar7 + 0x28) = uStack_298;
      *(undefined **)(puVar7 + 0x20) = local_2a0;
      FUN_10000eb58(&local_2a0,&local_1f0);
      _swift_bridgeObjectRetain(puVar16);
      FUN_10006d548(puVar7);
      puVar7 = &DAT_100103ed8;
      local_1f0 = puVar5;
      FUN_10000eb08(&DAT_100103ed8,&DAT_1000d5be0);
      puVar8 = puVar7;
      FUN_100052ab4();
      uVar9 = 0x20;
      uVar12 = 0xe100000000000000;
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar7,puVar8);
      _swift_bridgeObjectRelease(puVar5);
      __sSS6appendyySSF(uVar9,uVar12);
      _swift_bridgeObjectRelease(uVar12);
      __sSS6appendyySSF(0x2022,0xe200000000000000);
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
      local_1f0 = puVar6;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar7);
      __sSS6appendyySSF(0x272061662d2027,0xe700000000000000);
      __sSS6appendyySSF(uVar20,uVar3);
      __sSS6appendyySSF(0x2720642d2027,0xe600000000000000);
      if (lVar22 != 0) {
        FUN_100056678(1,uVar13,lVar22);
        uVar25 = uVar13;
      }
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(uVar25);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      FUN_100052b44(&local_130);
      uVar20 = uStack_1d8;
      puVar7 = local_1e0;
      uVar21 = *(ulong *)(puVar19 + 0x10);
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar21) {
        FUN_1000798d0(1 < *(ulong *)(puVar19 + 0x18),uVar21 + 1,1);
      }
      *(ulong *)(puVar19 + 0x10) = uVar21 + 1;
      *(undefined **)(puVar19 + uVar21 * 0x10 + 0x20) = puVar7;
      *(undefined8 *)(puVar19 + uVar21 * 0x10 + 0x28) = uVar20;
      if (local_2d8 == 0) break;
      puVar14 = puVar14 + 0xc;
    }
    _swift_bridgeObjectRelease(uVar17);
  }
  local_130 = local_328;
  FUN_10006d548(puVar19);
  puVar6 = local_130;
  puVar16 = PTR___sSSN_1000f02f8;
  uVar21 = *(ulong *)(puVar18 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar21 != 0) {
    uVar23 = 0;
    puVar14 = (undefined8 *)(puVar18 + 0x20);
    puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      if (*(ulong *)(puVar18 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fd8);
        (*pcVar4)();
      }
      uStack_128 = puVar14[1];
      local_130 = (undefined *)*puVar14;
      uStack_118 = puVar14[3];
      local_120 = puVar14[2];
      lStack_108 = puVar14[5];
      local_110 = puVar14[4];
      uStack_f8 = puVar14[7];
      local_100 = puVar14[6];
      uStack_e8 = puVar14[9];
      local_f0 = puVar14[8];
      uStack_d8 = puVar14[0xb];
      local_e0 = puVar14[10];
      ppuVar10 = &local_130;
      FUN_100052a08(ppuVar10,&local_1e0);
      FUN_10005570c();
      FUN_100052b44(&local_130);
      puVar19 = ppuVar10[2];
      lVar22 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar22,(long)puVar19)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fdc);
        (*pcVar4)();
      }
      puVar11 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar11 == 0) || ((long)(*(ulong *)(puVar5 + 0x18) >> 1) < (long)(puVar19 + lVar22))
         ) {
        FUN_10006e610();
        puVar5 = puVar11;
        if (ppuVar10[2] == (undefined *)0x0) goto LAB_100055e7c;
LAB_100055f34:
        if ((long)((*(ulong *)(puVar11 + 0x18) >> 1) - *(long *)(puVar11 + 0x10)) < (long)puVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fe4);
          (*pcVar4)();
        }
        _swift_arrayInitWithCopy
                  (puVar11 + *(long *)(puVar11 + 0x10) * 0x10 + 0x20,ppuVar10 + 4,puVar19,puVar16);
        _swift_bridgeObjectRelease(ppuVar10);
        if (puVar19 != (undefined *)0x0) {
          if (SCARRY8(*(long *)(puVar11 + 0x10),(long)puVar19)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fe8);
            (*pcVar4)();
          }
          *(undefined **)(puVar11 + 0x10) = puVar19 + *(long *)(puVar11 + 0x10);
        }
      }
      else {
        puVar11 = puVar5;
        if (ppuVar10[2] != (undefined *)0x0) goto LAB_100055f34;
LAB_100055e7c:
        _swift_bridgeObjectRelease(ppuVar10);
        puVar11 = puVar5;
        if (puVar19 != (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100055fe0);
          (*pcVar4)();
        }
      }
      uVar23 = uVar23 + 1;
      puVar14 = puVar14 + 0xc;
      puVar5 = puVar11;
    } while (uVar21 != uVar23);
  }
  _swift_release();
  local_1e0 = puVar6;
  FUN_10006d548(puVar11);
  puVar16 = local_1e0;
  _swift_bridgeObjectRelease(local_80);
  return puVar16;
}

