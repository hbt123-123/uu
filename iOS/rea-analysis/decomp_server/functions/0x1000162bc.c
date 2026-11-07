// rea decompile_all
// name: FUN_1000162bc
// address: 0x1000162bc
// body: available
// range: 0x1000162bc-0x100016f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100016f3c) */

void FUN_1000162bc(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  code cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  code *unaff_x20;
  int iVar23;
  long lVar24;
  code *pcVar25;
  int iVar26;
  undefined1 auStack_3d0 [16];
  undefined4 local_3c0;
  undefined1 local_3bc;
  code **local_3b8;
  undefined8 local_3b0;
  code **local_3a8;
  undefined8 local_3a0;
  code **ppcStack_398;
  long local_390;
  undefined4 local_388;
  uint local_384;
  code *local_380;
  ulong local_378;
  char *local_370;
  char *pcStack_368;
  undefined *local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined *local_310;
  code *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  code *local_240;
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
  undefined1 local_180;
  code *local_178;
  int local_170;
  undefined8 local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  code *local_140;
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
  undefined1 local_80;
  
  local_388 = SUB84(param_1,0);
  local_384 = (uint)param_2;
  FUN_10047466c();
  local_158 = param_1;
  local_150 = param_2;
  local_148 = param_3;
  FUN_10045038c();
  local_178 = param_1;
  local_168 = param_3;
  local_160 = param_4;
  FUN_100026a98();
  local_170 = (int)param_1;
  if ((unaff_x20[0x99] == (code)0x1) && (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
    ppuVar18 = &PTR__OBJC_CLASS___NSScreen_100a65810;
    pcVar10 = (code *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar11 = 0;
    FUN_10004003c(0,&DAT_100a75978);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(pcVar10,uVar11);
    _swift_retain();
    pcVar12 = pcVar10;
    FUN_100039690();
    pcVar17 = unaff_x20;
    local_140 = pcVar12;
    FUN_10003b490(&local_140);
    local_390 = 0;
    _swift_bridgeObjectRelease(pcVar10);
    _swift_release();
    pcVar25 = local_140;
    pcVar10 = *(code **)(local_140 + 0x10);
    if (pcVar10 == (code *)0x0) {
      _swift_release(local_140);
      pcVar12 = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_140 = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
      ppuVar18 = (undefined **)0x0;
      pcVar17 = pcVar10;
      FUN_10006fb44(0);
      lVar24 = 0x28;
      do {
        uVar11 = *(undefined8 *)(pcVar25 + lVar24);
        uVar21 = *(ulong *)(local_140 + 0x10);
        if (*(ulong *)(local_140 + 0x18) >> 1 <= uVar21) {
          ppuVar18 = (undefined **)0x1;
          pcVar17 = (code *)(uVar21 + 1);
          FUN_10006fb44(1 < *(ulong *)(local_140 + 0x18));
        }
        pcVar12 = local_140;
        *(code **)(local_140 + 0x10) = (code *)(uVar21 + 1);
        *(undefined8 *)(local_140 + (uVar21 + 4) * 8) = uVar11;
        lVar24 = lVar24 + 0x10;
        pcVar10 = pcVar10 + -1;
      } while (pcVar10 != (code *)0x0);
      _swift_release(pcVar25);
    }
  }
  else {
    local_390 = 0;
    ppuVar18 = &PTR__OBJC_CLASS___NSScreen_100a65810;
    pcVar12 = (code *)NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    pcVar17 = (code *)0x0;
    FUN_10004003c(0,&DAT_100a75978);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if ((ulong)pcVar12 >> 0x3e == 0) {
    pcVar10 = *(code **)(((ulong)pcVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar10 = (code *)((ulong)pcVar12 & 0xffffffffffffff8);
    if ((long)pcVar12 < 0) {
      pcVar10 = pcVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (pcVar10 == (code *)0x0) {
    _swift_bridgeObjectRelease();
  }
  else {
    pcVar25 = (code *)0x0;
    lVar24 = *(long *)(unaff_x20 + 0x38);
    local_378 = (ulong)pcVar12 & 0xffffffffffffff8;
    local_380 = pcVar12 + 0x20;
    local_370 = "mpatibility path handle:";
    pcStack_368 = "captureFailedRetryCount";
    do {
      if (((ulong)pcVar12 & 0xc000000000000001) == 0) {
        if (*(code **)(local_378 + 0x10) <= pcVar25) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100016f04);
          (*pcVar17)();
        }
        pcVar13 = *(code **)(local_380 + (long)pcVar25 * 8);
      }
      else {
        pcVar13 = pcVar25;
        pcVar17 = pcVar12;
        FUN_100169c00();
      }
      bVar8 = SCARRY8((long)pcVar25,1);
      pcVar25 = pcVar25 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100016efc);
        (*pcVar17)();
      }
      pcVar14 = pcVar13;
      FUN_1003d541c();
      iVar26 = (int)pcVar14;
      pcVar15 = pcVar14;
      if (*(char *)(lVar24 + 0x14) == '\x01') {
        if (DAT_100a73b60 != -1) {
          pcVar15 = (code *)&DAT_100a73b60;
          pcVar17 = FUN_1000efc4c;
          _swift_once();
        }
        lVar20 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                          _TtC14UURemoteServer15StreamerManager::dispatcher);
        if ((lVar20 != 0) &&
           (pcVar15 = *(code **)(lVar20 + _TtC14UURemoteServer18StreamerDispatcher::
                                          currentConnectSession), pcVar15 != (code *)0x0)) {
          FUN_1000c7b64();
          lVar20 = *(long *)(pcVar15 + 0x78);
          cVar3 = pcVar15[0x81];
          _swift_release();
          if ((((byte)cVar3 & 1) == 0) && (lVar20 == 6)) {
            if ((*(byte *)(lVar24 + 0x14) & 1) == 0) {
              iVar2 = *(int *)(lVar24 + 0x10);
              iVar23 = -1;
              goto joined_r0x000100016700;
            }
            if (DAT_100a73b60 != -1) {
              pcVar15 = (code *)&DAT_100a73b60;
              pcVar17 = FUN_1000efc4c;
              _swift_once();
            }
            lVar20 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                              _TtC14UURemoteServer15StreamerManager::dispatcher);
            if ((lVar20 != 0) &&
               (pcVar15 = *(code **)(lVar20 + _TtC14UURemoteServer18StreamerDispatcher::
                                              currentConnectSession), pcVar15 != (code *)0x0)) {
              FUN_1000c7b64();
              lVar20 = *(long *)(pcVar15 + 0x78);
              cVar3 = pcVar15[0x81];
              _swift_release();
              if ((((byte)cVar3 & 1) == 0) && (lVar20 == 6)) {
                iVar23 = -1;
                goto LAB_100016524;
              }
            }
          }
        }
LAB_10001670c:
        FUN_10004d12c();
        if (*(long *)(pcVar15 + 0x10) != 0) {
          uVar21 = *(ulong *)(pcVar15 + 0x28);
          pcVar17 = (code *)((ulong)pcVar14 & 0xffffffff);
          ppuVar18 = (undefined **)0x4;
          __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ();
          uVar22 = -1L << ((ulong)(byte)pcVar15[0x20] & 0x3f);
          uVar21 = uVar21 & (uVar22 ^ 0xffffffffffffffff);
          if ((*(ulong *)(pcVar15 + (uVar21 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar21 & 0x3f) & 1
              ) != 0) {
            do {
              if (*(int *)(*(long *)(pcVar15 + 0x30) + uVar21 * 4) == iVar26) {
                _swift_bridgeObjectRelease();
                FUN_100401b14(0);
                (*(code *)PTR____chkstk_darwin_100995498)();
                pcVar17 = (code *)&local_3b0;
                local_3a0 = (code *)CONCAT44(local_3a0._4_4_,iVar26);
                ppuVar18 = (undefined **)0xd0000000000000a9;
                FUN_1003fb48c(FUN_10003fdbc,pcVar17,0xd0000000000000a9,
                              (ulong)pcStack_368 | 0x8000000000000000,0xd00000000000001f,
                              (ulong)local_370 | 0x8000000000000000,0x4fc,0);
                goto LAB_100016594;
              }
              uVar21 = uVar21 + 1 & ~uVar22;
            } while ((*(ulong *)(pcVar15 + (uVar21 >> 3 & 0xffffffffffffff8) + 0x38) >>
                      (uVar21 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease();
        ppuVar19 = ppuVar18;
        if (unaff_x20[0x99] == (code)0x1) {
          if (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0) {
            pcVar17 = (code *)PTR___swiftEmptySetSingleton_100995eb0;
            FUN_1000231b4();
            if (((ulong)pcVar14 & 1) == 0) goto LAB_100016594;
            ppuVar19 = ppuVar18;
            if (unaff_x20[0x99] != (code)0x1) goto LAB_1000167f0;
          }
          if ((*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0) &&
             (4 < *(ulong *)(local_178 + 0x10))) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            pcVar17 = (code *)&local_3b0;
            ppcStack_398 = &local_178;
            ppuVar18 = (undefined **)0xd0000000000000a9;
            local_3a0 = pcVar13;
            FUN_1003fb48c(FUN_10003fe08,pcVar17,0xd0000000000000a9,
                          (ulong)pcStack_368 | 0x8000000000000000,0xd00000000000001f,
                          (ulong)local_370 | 0x8000000000000000,0x505,0);
            goto LAB_100016594;
          }
        }
LAB_1000167f0:
        FUN_100025804();
        ppuVar18 = ppuVar19;
        if ((local_170 == -1) &&
           (pcVar15 = pcVar13, FUN_10044f23c(pcVar13,pcVar17), ((ulong)pcVar15 & 1) != 0)) {
          pcVar15 = pcVar13;
          ppuVar18 = ppuVar19;
          FUN_10044e04c(pcVar13,pcVar17);
          local_170 = (int)pcVar15;
        }
        pcVar15 = local_178;
        FUN_100008184(pcVar13,pcVar17);
        _swift_retain(ppuVar19);
        pcVar14 = pcVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        pcVar16 = pcVar15;
        if (((ulong)pcVar14 & 1) == 0) {
          pcVar16 = (code *)0x0;
          ppuVar18 = (undefined **)0x1;
          FUN_100034164(0,*(long *)(pcVar15 + 0x10) + 1,1,pcVar15);
        }
        uVar21 = *(ulong *)(pcVar16 + 0x10);
        pcVar15 = pcVar16;
        if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar21) {
          pcVar15 = (code *)(ulong)(1 < *(ulong *)(pcVar16 + 0x18));
          ppuVar18 = (undefined **)0x1;
          FUN_100034164(pcVar15,uVar21 + 1,1,pcVar16);
        }
        *(ulong *)(pcVar15 + 0x10) = uVar21 + 1;
        *(code **)(pcVar15 + (uVar21 * 3 + 4) * 8) = pcVar13;
        *(code **)(pcVar15 + (uVar21 * 3 + 5) * 8) = pcVar17;
        *(undefined ***)(pcVar15 + (uVar21 * 3 + 6) * 8) = ppuVar19;
        FUN_100006cdc(pcVar13);
        _swift_release(ppuVar19);
        local_178 = pcVar15;
      }
      else {
        iVar2 = *(int *)(lVar24 + 0x10);
        iVar23 = iVar2;
joined_r0x000100016700:
        if ((-1 < iVar2) && (iVar26 == iVar2)) goto LAB_10001670c;
LAB_100016524:
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar17 = (code *)&local_3b0;
        local_3a0 = (code *)CONCAT44(iVar23,iVar26);
        ppuVar18 = (undefined **)0xd0000000000000a9;
        FUN_1003fb48c(FUN_10003fe10,pcVar17,0xd0000000000000a9,
                      (ulong)pcStack_368 | 0x8000000000000000,0xd00000000000001f,
                      (ulong)local_370 | 0x8000000000000000,0x4f8,0);
      }
LAB_100016594:
    } while (pcVar25 != pcVar10);
    _swift_bridgeObjectRelease();
  }
  if ((*(long *)(local_178 + 0x10) == 0) && (FUN_10004cf04(), ((ulong)pcVar12 & 1) != 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_3a0._0_5_ = CONCAT14((char)local_384,local_388);
    FUN_1003fb48c(FUN_10003fdfc,&local_3b0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001f,
                  0x800000010087a2a0,0x510,0);
  }
  else {
    uVar6 = local_160;
    uVar11 = local_168;
    pcVar17 = local_178;
    local_308 = local_178;
    iStack_300 = local_170;
    local_2f8 = local_168;
    uStack_2f0 = local_160;
    FUN_10003fdc4(&local_308);
    uStack_198 = uStack_260;
    local_1a0 = uStack_268;
    uStack_188 = uStack_250;
    uStack_190 = local_258;
    uStack_1d8 = uStack_2a0;
    local_1e0 = uStack_2a8;
    uStack_1c8 = uStack_290;
    uStack_1d0 = local_298;
    local_180 = local_248;
    uStack_1b8 = uStack_280;
    local_1c0 = uStack_288;
    uStack_1a8 = uStack_270;
    uStack_1b0 = local_278;
    uStack_218 = uStack_2e0;
    local_220 = local_2e8;
    uStack_208 = uStack_2d0;
    uStack_210 = local_2d8;
    uStack_1f8 = uStack_2c0;
    local_200 = local_2c8;
    uStack_1e8 = uStack_2b0;
    uStack_1f0 = local_2b8;
    uStack_238 = CONCAT44(uStack_2fc,iStack_300);
    local_240 = local_308;
    uStack_228 = uStack_2f0;
    uStack_230 = local_2f8;
    FUN_100008290(&local_240);
    uStack_98 = uStack_198;
    local_a0 = local_1a0;
    uStack_88 = uStack_188;
    uStack_90 = uStack_190;
    local_80 = local_180;
    uStack_d8 = uStack_1d8;
    local_e0 = local_1e0;
    uStack_c8 = uStack_1c8;
    uStack_d0 = uStack_1d0;
    uStack_b8 = uStack_1b8;
    local_c0 = local_1c0;
    uStack_a8 = uStack_1a8;
    uStack_b0 = uStack_1b0;
    uStack_118 = uStack_218;
    local_120 = local_220;
    uStack_108 = uStack_208;
    uStack_110 = uStack_210;
    uStack_f8 = uStack_1f8;
    local_100 = local_200;
    uStack_e8 = uStack_1e8;
    uStack_f0 = uStack_1f0;
    uStack_138 = uStack_238;
    local_140 = local_240;
    uStack_128 = uStack_228;
    uStack_130 = uStack_230;
    _swift_bridgeObjectRetain(pcVar17);
    FUN_100008184(uVar11,uVar6);
    FUN_100467dcc(&local_140);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_100006d1c(*(undefined8 *)(DAT_100b360a8 + 0x60));
    lVar24 = local_390;
    if ((local_384 & 0xff) == 0) {
      if (*(char *)(*(long *)(unaff_x20 + 0x38) + 0x14) == '\x01') {
        FUN_100039b50(0);
      }
      else {
        iVar26 = *(int *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if (-1 < iVar26) {
          lVar20 = *(long *)(pcVar17 + 0x10) + 1;
          pcVar12 = pcVar17 + 0x30;
          do {
            lVar20 = lVar20 + -1;
            if (lVar20 == 0) goto LAB_100016c48;
            uVar11 = *(undefined8 *)(pcVar12 + -0x10);
            FUN_10044e04c(uVar11,*(undefined8 *)(pcVar12 + -8),*(undefined8 *)pcVar12);
            pcVar12 = pcVar12 + 0x18;
          } while ((int)uVar11 != iVar26);
          FUN_1000837f8(local_388,0);
        }
      }
    }
LAB_100016c48:
    uVar9 = local_388;
    FUN_1001ad794(local_388,local_158,local_150,local_148,local_384);
    uVar21 = *(ulong *)(pcVar17 + 0x10);
    if (uVar21 == 0) {
      local_348 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_310 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fae0(0,uVar21,0);
      uVar22 = 0;
      pcVar12 = pcVar17 + 0x30;
      do {
        puVar7 = local_310;
        if (*(ulong *)(pcVar17 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100016f00);
          (*pcVar17)();
        }
        local_338 = *(undefined8 *)(pcVar12 + -0x10);
        uStack_330 = *(undefined8 *)(pcVar12 + -8);
        uVar11 = *(undefined8 *)pcVar12;
        local_328 = uVar11;
        FUN_100008184();
        _swift_retain(uVar11);
        FUN_1000270ec(&local_320,&local_338);
        uVar11 = local_328;
        if (lVar24 != 0) {
          FUN_100006cdc(local_338,uStack_330);
          _swift_release(puVar7);
          _swift_release(uVar11);
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100016f3c);
          (*pcVar17)();
        }
        FUN_100006cdc(local_338,uStack_330);
        _swift_release(uVar11);
        uVar6 = uStack_318;
        uVar11 = local_320;
        uVar1 = *(ulong *)(puVar7 + 0x10);
        local_310 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          FUN_10006fae0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        uVar22 = uVar22 + 1;
        *(ulong *)(local_310 + 0x10) = uVar1 + 1;
        *(undefined8 *)(local_310 + uVar1 * 0x10 + 0x20) = uVar11;
        *(undefined8 *)(local_310 + uVar1 * 0x10 + 0x28) = uVar6;
        pcVar12 = pcVar12 + 0x18;
        local_348 = local_310;
      } while (uVar21 != uVar22);
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar5 = local_388;
    uVar4 = (undefined1)local_384;
    local_3b0._0_5_ = CONCAT14(uVar4,local_388);
    local_3a0 = (code *)CONCAT44(local_3a0._4_4_,uVar9);
    local_3a8 = &local_178;
    FUN_1003fb48c(FUN_10003fdd0,&local_3c0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001f,
                  0x800000010087a2a0,0x51f,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_3c0 = uVar5;
    local_3b0 = local_348;
    local_3a8 = (code **)CONCAT44(local_3a8._4_4_,uVar9);
    local_3bc = uVar4;
    local_3b8 = &local_178;
    local_3a0 = unaff_x20;
    FUN_1003fb48c(FUN_10003fde4,auStack_3d0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001f
                  ,0x800000010087a2a0,0x520,0);
    _swift_bridgeObjectRelease(local_348);
  }
  uVar11 = local_148;
  FUN_100006cdc(local_158,local_150);
  _swift_release(uVar11);
  uVar6 = local_160;
  uVar11 = local_168;
  _swift_bridgeObjectRelease(local_178);
  FUN_100006cdc(uVar11,uVar6);
  return;
}

