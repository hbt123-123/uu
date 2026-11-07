// rea decompile_all
// name: FUN_1005bc2e4
// address: 0x1005bc2e4
// body: available
// range: 0x1005bc2e4-0x1005bcaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005bc2e4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
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
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 auStack_258 [24];
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
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  byte local_1a0;
  long local_198;
  ulong local_190;
  long local_188;
  ulong local_180;
  byte local_178;
  long local_170;
  ulong local_168;
  ulong local_160;
  undefined8 local_158;
  long local_150;
  char local_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  local_80 = unaff_x20[8];
  plVar17 = (long *)(param_1 + 0x30);
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar10 = lVar10 + -1;
    lVar1 = plVar17[-2];
    uVar2 = plVar17[-1];
    lVar18 = *plVar17;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    local_d0 = local_80;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    _swift_beginAccess(lVar18 + 0x10,auStack_128,0,0);
    lVar15 = *(long *)(lVar18 + 0x18);
    if (lVar15 == 0) {
      FUN_100008184(lVar1,uVar2);
      _swift_retain(lVar18);
    }
    else {
      uVar16 = *(undefined8 *)(lVar18 + 0x10);
      __ss6HasherV8_combineyySuF(1);
      FUN_100008184(lVar1,uVar2);
      _swift_retain(lVar18);
      _swift_bridgeObjectRetain(lVar15);
      __sSS4hash4intoys6HasherVz_tF(&local_110,uVar16,lVar15);
      _swift_bridgeObjectRelease(lVar15);
    }
    _swift_beginAccess(lVar18 + 0x20,auStack_140,0,0);
    if ((*(byte *)(lVar18 + 0x24) & 1) == 0) {
      iVar8 = *(int *)(lVar18 + 0x20);
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar8);
    }
    _swift_beginAccess(lVar18 + 0x28,auStack_258,0,0);
    uStack_1f8 = *(undefined8 *)(lVar18 + 0x70);
    local_200 = *(undefined8 *)(lVar18 + 0x68);
    uStack_1e8 = *(undefined8 *)(lVar18 + 0x80);
    uStack_1f0 = *(undefined8 *)(lVar18 + 0x78);
    local_1e0 = *(undefined8 *)(lVar18 + 0x88);
    uStack_1d8 = (undefined1)*(undefined8 *)(lVar18 + 0x90);
    uStack_1cf = *(undefined8 *)(lVar18 + 0x99);
    uStack_1d7 = (undefined7)*(undefined8 *)(lVar18 + 0x91);
    uStack_1d0 = (undefined1)((ulong)*(undefined8 *)(lVar18 + 0x91) >> 0x38);
    uStack_238 = *(undefined8 *)(lVar18 + 0x30);
    local_240 = *(undefined8 *)(lVar18 + 0x28);
    uStack_228 = *(undefined8 *)(lVar18 + 0x40);
    uStack_230 = *(undefined8 *)(lVar18 + 0x38);
    uStack_218 = *(undefined8 *)(lVar18 + 0x50);
    local_220 = *(undefined8 *)(lVar18 + 0x48);
    uStack_208 = *(undefined8 *)(lVar18 + 0x60);
    uStack_210 = *(undefined8 *)(lVar18 + 0x58);
    _memmove(&local_1c0,(void *)(lVar18 + 0x28),0x79);
    iVar8 = (int)&local_1c0;
    FUN_100276094();
    if (iVar8 != 1) {
      __ss6HasherV8_combineyySuF(3);
      bVar4 = local_1a0;
      uStack_278 = uStack_e8;
      local_280 = local_f0;
      uStack_268 = uStack_d8;
      uStack_270 = uStack_e0;
      local_260 = local_d0;
      uStack_298 = uStack_108;
      local_2a0 = local_110;
      uStack_288 = uStack_f8;
      uStack_290 = uStack_100;
      if (local_1a0 != 2) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyys5UInt8VF(bVar4 & 1);
      }
      uVar6 = local_180;
      lVar14 = local_188;
      uVar5 = local_190;
      lVar15 = local_198;
      if (local_188 == 0) {
        uStack_2d8 = uStack_1f8;
        local_2e0 = local_200;
        uStack_2c8 = uStack_1e8;
        uStack_2d0 = uStack_1f0;
        uStack_2b8 = uStack_1d8;
        local_2c0 = local_1e0;
        uStack_2af = uStack_1cf;
        uStack_2b7 = uStack_1d7;
        uStack_2b0 = uStack_1d0;
        uStack_318 = uStack_238;
        local_320 = local_240;
        uStack_308 = uStack_228;
        uStack_310 = uStack_230;
        uStack_2f8 = uStack_218;
        local_300 = local_220;
        uStack_2e8 = uStack_208;
        uStack_2f0 = uStack_210;
        FUN_1005a83a4(&local_320,&local_3a0);
      }
      else {
        __ss6HasherV8_combineyySuF(2);
        uStack_378 = uStack_278;
        local_380 = local_280;
        uStack_368 = uStack_268;
        uStack_370 = uStack_270;
        local_360 = local_260;
        uStack_398 = uStack_298;
        local_3a0 = local_2a0;
        uStack_388 = uStack_288;
        uStack_390 = uStack_290;
        if ((uVar6 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar6 & 0xff);
        }
        if ((uVar6 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar6 >> 8 & 0xff);
        }
        if ((uVar6 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x10 & 0xff);
        }
        if ((uVar6 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&DAT_10083e090 + ((long)(uVar6 << 0x20) >> 0x38) * 8));
        }
        if ((uVar6 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x20 & 0xff);
        }
        if ((uVar6 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x28 & 0xff);
        }
        if ((uVar6 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x30 & 0xff);
        }
        if (uVar6 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x38);
        }
        FUN_10007f314(&local_240,&local_320,&DAT_100aab4b0,&DAT_100837c20);
        FUN_1005a7f54(lVar15,uVar5,lVar14,uVar6);
        FUN_100563e08(&local_3a0,1000,0x2711,lVar14);
        if (unaff_x21 == 0) {
          uVar3 = (uint)(uVar5 >> 0x20);
          uVar9 = uVar3 >> 0x1e;
          if (uVar3 >> 0x1e < 2) {
            if (uVar9 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_1005bc698;
            }
            else {
              lVar11 = (long)(int)lVar15;
              lVar12 = lVar15 >> 0x20;
LAB_1005bca38:
              if (lVar11 == lVar12) goto LAB_1005bc698;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_3a0,lVar15,uVar5);
          }
          else if (uVar9 == 2) {
            lVar11 = *(long *)(lVar15 + 0x10);
            lVar12 = *(long *)(lVar15 + 0x18);
            goto LAB_1005bca38;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_1005bc698:
        FUN_100541944(lVar15,uVar5,lVar14,uVar6);
        uStack_278 = uStack_378;
        local_280 = local_380;
        uStack_268 = uStack_368;
        uStack_270 = uStack_370;
        local_260 = local_360;
        uStack_298 = uStack_398;
        local_2a0 = local_3a0;
        uStack_288 = uStack_388;
        uStack_290 = uStack_390;
      }
      bVar4 = local_178;
      if (local_178 != 2) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyys5UInt8VF(bVar4 & 1);
      }
      cVar7 = local_148;
      lVar14 = local_150;
      uVar16 = local_158;
      uVar6 = local_160;
      uVar5 = local_168;
      lVar15 = local_170;
      if (local_150 != 1) {
        lVar11 = (long)local_148;
        __ss6HasherV8_combineyySuF(4);
        uStack_2f8 = uStack_278;
        local_300 = local_280;
        uStack_2e8 = uStack_268;
        uStack_2f0 = uStack_270;
        local_2e0 = local_260;
        uStack_318 = uStack_298;
        local_320 = local_2a0;
        uStack_308 = uStack_288;
        uStack_310 = uStack_290;
        if ((uVar6 & 0xff) != 0xc) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083e030 + (long)(char)uVar6 * 8));
        }
        if ((uVar6 & 0xff00) != 0xc00) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&DAT_10083e030 + ((long)(uVar6 << 0x30) >> 0x38) * 8));
        }
        if (lVar14 == 0) {
          FUN_100008184(lVar15,uVar5);
        }
        else {
          __ss6HasherV8_combineyySuF(3);
          FUN_100008184(lVar15,uVar5);
          _swift_bridgeObjectRetain(lVar14);
          __sSS4hash4intoys6HasherVz_tF(&local_320,uVar16,lVar14);
        }
        if (cVar7 != '\f') {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083e030 + lVar11 * 8));
        }
        uVar3 = (uint)(uVar5 >> 0x20);
        uVar9 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar9 == 0) {
            if ((uVar5 & 0xff000000000000) == 0) goto LAB_1005bc8b4;
          }
          else {
            lVar12 = (long)(int)lVar15;
            lVar13 = lVar15 >> 0x20;
LAB_1005bc89c:
            if (lVar12 == lVar13) goto LAB_1005bc8b4;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_320,lVar15,uVar5);
        }
        else if (uVar9 == 2) {
          lVar12 = *(long *)(lVar15 + 0x10);
          lVar13 = *(long *)(lVar15 + 0x18);
          goto LAB_1005bc89c;
        }
LAB_1005bc8b4:
        FUN_1005419bc(lVar15,uVar5,uVar6,uVar16,lVar14,lVar11);
        uStack_278 = uStack_2f8;
        local_280 = local_300;
        uStack_268 = uStack_2e8;
        uStack_270 = uStack_2f0;
        local_260 = local_2e0;
        uStack_298 = uStack_318;
        local_2a0 = local_320;
        uStack_288 = uStack_308;
        uStack_290 = uStack_310;
      }
      if (((*(long *)(local_1c0 + 0x10) == 0) || (FUN_1005bad30(local_1c0,999), unaff_x21 == 0)) &&
         (FUN_100563e08(&local_2a0,1000,0x20000000,local_1a8), unaff_x21 == 0)) {
        uVar3 = (uint)(local_1b0 >> 0x20);
        uVar9 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar9 == 0) {
            if ((local_1b0 & 0xff000000000000) == 0) goto LAB_1005bc930;
          }
          else {
            lVar15 = (long)(int)local_1b8;
            lVar14 = local_1b8 >> 0x20;
LAB_1005bca5c:
            if (lVar15 == lVar14) goto LAB_1005bc930;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_2a0);
        }
        else if (uVar9 == 2) {
          lVar15 = *(long *)(local_1b8 + 0x10);
          lVar14 = *(long *)(local_1b8 + 0x18);
          goto LAB_1005bca5c;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_1005bc930:
      FUN_100040bb4(&local_240,&DAT_100aab4b0,&DAT_100837c20);
      uStack_e8 = uStack_278;
      local_f0 = local_280;
      uStack_d8 = uStack_268;
      uStack_e0 = uStack_270;
      local_d0 = local_260;
      uStack_108 = uStack_298;
      local_110 = local_2a0;
      uStack_f8 = uStack_288;
      uStack_100 = uStack_290;
    }
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar9 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_1005bc9ac;
      }
      else {
        lVar15 = (long)(int)lVar1;
        lVar14 = lVar1 >> 0x20;
LAB_1005bc994:
        if (lVar15 == lVar14) goto LAB_1005bc9ac;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_110,lVar1,uVar2);
    }
    else if (uVar9 == 2) {
      lVar15 = *(long *)(lVar1 + 0x10);
      lVar14 = *(long *)(lVar1 + 0x18);
      goto LAB_1005bc994;
    }
LAB_1005bc9ac:
    FUN_100006cdc(lVar1,uVar2);
    _swift_release(lVar18);
    if (lVar10 == 0) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = local_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = local_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = local_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    local_80 = local_d0;
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    plVar17 = plVar17 + 3;
  } while( true );
}

