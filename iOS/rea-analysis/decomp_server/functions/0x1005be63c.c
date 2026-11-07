// rea decompile_all
// name: FUN_1005be63c
// address: 0x1005be63c
// body: available
// range: 0x1005be63c-0x1005bf7f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005be63c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  code *pcVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 *unaff_x20;
  ulong uVar41;
  ulong uVar42;
  long unaff_x21;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar49 = *(long *)(param_1 + 0x10);
  if (lVar49 != 0) {
    lVar46 = 0;
    do {
      puVar27 = (ulong *)(param_1 + 0x20 + lVar46 * 0x30);
      uVar1 = *puVar27;
      uVar6 = puVar27[1];
      uVar44 = puVar27[2];
      bVar15 = (byte)puVar27[3];
      uVar2 = puVar27[4];
      uVar7 = puVar27[5];
      uStack_b8 = unaff_x20[5];
      local_c0 = unaff_x20[4];
      uStack_a8 = unaff_x20[7];
      uStack_b0 = unaff_x20[6];
      local_a0 = unaff_x20[8];
      uStack_d8 = unaff_x20[1];
      local_e0 = *unaff_x20;
      uStack_c8 = unaff_x20[3];
      uStack_d0 = unaff_x20[2];
      if ((((uVar44 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar15 == 0xff)) {
        FUN_10051fe90(uVar1,uVar6,uVar44,0xff);
        FUN_100008184(uVar2,uVar7);
      }
      else {
        uVar26 = (uint)(uVar44 >> 0x20);
        uVar43 = uVar26 >> 0x1c & 3 | (bVar15 & 1) << 2;
        if (uVar43 < 3) {
          if (uVar43 == 0) {
            FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            FUN_100008184(uVar2,uVar7);
            FUN_10051ff3c(uVar1,uVar6,uVar44,bVar15);
            __ss6HasherV8_combineyySuF(1);
            uVar51 = 0;
            if ((uVar6 & 1) == 0) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyySuF(uVar51);
          }
          else if (uVar43 == 1) {
            FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            FUN_100008184(uVar2,uVar7);
            FUN_10051ff3c(uVar1,uVar6,uVar44,bVar15);
            __ss6HasherV8_combineyySuF(2);
            uVar51 = 0;
            if ((uVar1 & 0x7fffffffffffffff) != 0) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar51);
          }
          else {
            __ss6HasherV8_combineyySuF(3);
            FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            FUN_100008184(uVar2,uVar7);
            __sSS4hash4intoys6HasherVz_tF(&local_e0,uVar1,uVar6);
          }
        }
        else if (uVar43 == 3) {
          FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
          FUN_100008184(uVar2,uVar7);
          FUN_10051ff3c(uVar1,uVar6,uVar44,bVar15);
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
        }
        else {
          lVar33 = (long)uVar6 >> 0x20;
          if (uVar43 == 4) {
            __ss6HasherV8_combineyySuF(5);
            uStack_108 = uStack_b8;
            local_110 = local_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            local_f0 = local_a0;
            uStack_128 = uStack_d8;
            local_130 = local_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            if (*(long *)(uVar1 + 0x10) == 0) {
              FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
              FUN_100008184(uVar2,uVar7);
              FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            }
            else {
              __ss6HasherV8_combineyySuF(1);
              uVar40 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
              uVar51 = 0xffffffffffffffff;
              if ((long)uVar40 < 0x40) {
                uVar51 = ~(-1L << (uVar40 & 0x3f));
              }
              uVar51 = uVar51 & *(ulong *)(uVar1 + 0x40);
              FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
              FUN_100008184(uVar2,uVar7);
              FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
              _swift_bridgeObjectRetain(uVar1);
              uVar52 = 0;
              lVar37 = 0;
              while( true ) {
                while (uVar51 == 0) {
                  bVar20 = SCARRY8(lVar37,1);
                  lVar37 = lVar37 + 1;
                  if (bVar20) {
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x1005bf7ec);
                    (*pcVar19)();
                  }
                  if ((long)(uVar40 + 0x3f >> 6) <= lVar37) goto LAB_1005bf6e8;
                  uVar51 = ((ulong *)(uVar1 + 0x40))[lVar37];
                }
                uVar28 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar51 & 0x5555555555555555) << 1;
                uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
                uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
                uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
                uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) | lVar37 << 6;
                puVar23 = (undefined8 *)(*(long *)(uVar1 + 0x30) + uVar28 * 0x10);
                puVar27 = (ulong *)(*(long *)(uVar1 + 0x38) + uVar28 * 0x30);
                uVar3 = *puVar23;
                lVar32 = puVar23[1];
                uVar28 = *puVar27;
                uVar8 = puVar27[1];
                uVar45 = puVar27[2];
                bVar16 = (byte)puVar27[3];
                uVar21 = puVar27[4];
                uVar9 = puVar27[5];
                _swift_bridgeObjectRetain(lVar32);
                FUN_10051fe90(uVar28,uVar8,uVar45,bVar16);
                FUN_100008184(uVar21,uVar9);
                if (lVar32 == 0) break;
                uStack_158 = uStack_108;
                local_160 = local_110;
                uStack_148 = uStack_f8;
                uStack_150 = uStack_100;
                local_140 = local_f0;
                uStack_178 = uStack_128;
                local_180 = local_130;
                uStack_168 = uStack_118;
                uStack_170 = uStack_120;
                __sSS4hash4intoys6HasherVz_tF(&local_180,uVar3,lVar32);
                _swift_bridgeObjectRelease(lVar32);
                uStack_1a8 = uStack_158;
                local_1b0 = local_160;
                uStack_198 = uStack_148;
                uStack_1a0 = uStack_150;
                local_190 = local_140;
                uStack_1c8 = uStack_178;
                local_1d0 = local_180;
                uStack_1b8 = uStack_168;
                uStack_1c0 = uStack_170;
                uVar43 = (uint)bVar16;
                if ((((uVar45 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (uVar43 != 0xff))
                {
                  uVar18 = (uint)(uVar45 >> 0x20);
                  uVar25 = uVar18 >> 0x1c & 3 | (uVar43 & 1) << 2;
                  if (uVar25 < 3) {
                    if (uVar25 == 0) {
                      FUN_10051ff3c(uVar28,uVar8,uVar45,bVar16);
                      __ss6HasherV8_combineyySuF(1);
                      uVar47 = 0;
                      if ((uVar8 & 1) == 0) {
                        uVar47 = uVar28;
                      }
                      __ss6HasherV8_combineyySuF(uVar47);
                    }
                    else if (uVar25 == 1) {
                      FUN_10051ff3c(uVar28,uVar8,uVar45,bVar16);
                      __ss6HasherV8_combineyySuF(2);
                      uVar47 = 0;
                      if ((uVar28 & 0x7fffffffffffffff) != 0) {
                        uVar47 = uVar28;
                      }
                      __ss6HasherV8_combineyys6UInt64VF(uVar47);
                    }
                    else {
                      __ss6HasherV8_combineyySuF(3);
                      __sSS4hash4intoys6HasherVz_tF(&local_1d0,uVar28,uVar8);
                    }
                  }
                  else if (uVar25 == 3) {
                    FUN_10051ff3c(uVar28,uVar8,uVar45,bVar16);
                    __ss6HasherV8_combineyySuF(4);
                    __ss6HasherV8_combineyys5UInt8VF((uint)uVar28 & 1);
                  }
                  else {
                    if (uVar25 == 4) {
                      __ss6HasherV8_combineyySuF(5);
                      uStack_1f8 = uStack_1a8;
                      local_200 = local_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      local_1e0 = local_190;
                      uStack_218 = uStack_1c8;
                      local_220 = local_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      if (*(long *)(uVar28 + 0x10) == 0) {
                        FUN_10051feb8(uVar28,uVar8,uVar45,uVar43 & 1);
                      }
                      else {
                        __ss6HasherV8_combineyySuF(1);
                        uVar41 = 1L << ((ulong)*(byte *)(uVar28 + 0x20) & 0x3f);
                        uVar47 = 0xffffffffffffffff;
                        if ((long)uVar41 < 0x40) {
                          uVar47 = ~(-1L << (uVar41 & 0x3f));
                        }
                        uVar47 = uVar47 & *(ulong *)(uVar28 + 0x40);
                        FUN_10051fe90(uVar28,uVar8,uVar45,bVar16);
                        _swift_bridgeObjectRetain(uVar28);
                        uVar38 = 0;
                        lVar32 = 0;
                        while( true ) {
                          while (uVar47 == 0) {
                            bVar20 = SCARRY8(lVar32,1);
                            lVar32 = lVar32 + 1;
                            if (bVar20) {
                    /* WARNING: Does not return */
                              pcVar19 = (code *)SoftwareBreakpoint(1,0x1005bf7f0);
                              (*pcVar19)();
                            }
                            if ((long)(uVar41 + 0x3f >> 6) <= lVar32) goto LAB_1005bf528;
                            uVar47 = ((ulong *)(uVar28 + 0x40))[lVar32];
                          }
                          uVar29 = (uVar47 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar47 & 0x5555555555555555) << 1;
                          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 |
                                   (uVar29 & 0x3333333333333333) << 2;
                          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar29 & 0xff00ff00ff00ff) << 8;
                          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar29 & 0xffff0000ffff) << 0x10;
                          uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) | lVar32 << 6;
                          puVar23 = (undefined8 *)(*(long *)(uVar28 + 0x30) + uVar29 * 0x10);
                          puVar27 = (ulong *)(*(long *)(uVar28 + 0x38) + uVar29 * 0x30);
                          uVar3 = *puVar23;
                          lVar36 = puVar23[1];
                          uVar29 = *puVar27;
                          uVar10 = puVar27[1];
                          uVar50 = puVar27[2];
                          uVar48 = puVar27[3];
                          uVar22 = puVar27[4];
                          uVar11 = puVar27[5];
                          _swift_bridgeObjectRetain(lVar36);
                          uVar43 = (uint)(byte)uVar48;
                          FUN_10051fe90(uVar29,uVar10,uVar50,(byte)uVar48);
                          FUN_100008184(uVar22,uVar11);
                          if (lVar36 == 0) break;
                          uStack_248 = uStack_1f8;
                          local_250 = local_200;
                          uStack_238 = uStack_1e8;
                          uStack_240 = uStack_1f0;
                          local_230 = local_1e0;
                          uStack_268 = uStack_218;
                          local_270 = local_220;
                          uStack_258 = uStack_208;
                          uStack_260 = uStack_210;
                          __sSS4hash4intoys6HasherVz_tF(&local_270,uVar3,lVar36);
                          _swift_bridgeObjectRelease(lVar36);
                          uStack_298 = uStack_248;
                          local_2a0 = local_250;
                          uStack_288 = uStack_238;
                          uStack_290 = uStack_240;
                          local_280 = local_230;
                          uStack_2b8 = uStack_268;
                          local_2c0 = local_270;
                          uStack_2a8 = uStack_258;
                          uStack_2b0 = uStack_260;
                          if ((((uVar50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
                             (uVar43 != 0xff)) {
                            uVar24 = (uint)(uVar50 >> 0x20);
                            uVar25 = uVar24 >> 0x1c & 3 | (uVar43 & 1) << 2;
                            if (uVar25 < 3) {
                              if (uVar25 == 0) {
                                FUN_10051ff3c(uVar29,uVar10,uVar50,uVar43);
                                __ss6HasherV8_combineyySuF(1);
                                uVar48 = 0;
                                if ((uVar10 & 1) == 0) {
                                  uVar48 = uVar29;
                                }
                                __ss6HasherV8_combineyySuF(uVar48);
                              }
                              else if (uVar25 == 1) {
                                FUN_10051ff3c(uVar29,uVar10,uVar50,uVar43);
                                __ss6HasherV8_combineyySuF(2);
                                uVar48 = 0;
                                if ((uVar29 & 0x7fffffffffffffff) != 0) {
                                  uVar48 = uVar29;
                                }
                                __ss6HasherV8_combineyys6UInt64VF(uVar48);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(3);
                                __sSS4hash4intoys6HasherVz_tF(&local_2c0,uVar29,uVar10);
                              }
                            }
                            else if (uVar25 == 3) {
                              FUN_10051ff3c(uVar29,uVar10,uVar50,uVar43);
                              __ss6HasherV8_combineyySuF(4);
                              __ss6HasherV8_combineyys5UInt8VF((uint)uVar29 & 1);
                            }
                            else {
                              lVar36 = (long)uVar10 >> 0x20;
                              if (uVar25 == 4) {
                                __ss6HasherV8_combineyySuF(5);
                                uStack_2e8 = uStack_298;
                                local_2f0 = local_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                local_2d0 = local_280;
                                uStack_308 = uStack_2b8;
                                local_310 = local_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                if (*(long *)(uVar29 + 0x10) == 0) {
                                  FUN_10051feb8(uVar29,uVar10,uVar50,uVar43 & 1);
                                }
                                else {
                                  __ss6HasherV8_combineyySuF(1);
                                  uVar42 = 1L << ((ulong)*(byte *)(uVar29 + 0x20) & 0x3f);
                                  uVar48 = 0xffffffffffffffff;
                                  if ((long)uVar42 < 0x40) {
                                    uVar48 = ~(-1L << (uVar42 & 0x3f));
                                  }
                                  uVar48 = uVar48 & *(ulong *)(uVar29 + 0x40);
                                  FUN_10051fe90(uVar29,uVar10,uVar50,uVar43);
                                  _swift_bridgeObjectRetain(uVar29);
                                  uVar39 = 0;
                                  lVar35 = 0;
                                  while( true ) {
                                    while (uVar48 == 0) {
                                      bVar20 = SCARRY8(lVar35,1);
                                      lVar35 = lVar35 + 1;
                                      if (bVar20) {
                    /* WARNING: Does not return */
                                        pcVar19 = (code *)SoftwareBreakpoint(1,0x1005bf7f4);
                                        (*pcVar19)();
                                      }
                                      if ((long)(uVar42 + 0x3f >> 6) <= lVar35) goto LAB_1005bf3c0;
                                      uVar48 = ((ulong *)(uVar29 + 0x40))[lVar35];
                                    }
                                    uVar30 = (uVar48 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                             (uVar48 & 0x5555555555555555) << 1;
                                    uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 |
                                             (uVar30 & 0x3333333333333333) << 2;
                                    uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                             (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 |
                                             (uVar30 & 0xff00ff00ff00ff) << 8;
                                    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 |
                                             (uVar30 & 0xffff0000ffff) << 0x10;
                                    uVar30 = LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) | lVar35 << 6;
                                    puVar23 = (undefined8 *)
                                              (*(long *)(uVar29 + 0x30) + uVar30 * 0x10);
                                    puVar31 = (undefined8 *)
                                              (*(long *)(uVar29 + 0x38) + uVar30 * 0x30);
                                    uVar3 = *puVar23;
                                    lVar12 = puVar23[1];
                                    uVar4 = *puVar31;
                                    uVar13 = puVar31[1];
                                    uVar34 = puVar31[2];
                                    bVar17 = *(byte *)(puVar31 + 3);
                                    uVar5 = puVar31[4];
                                    uVar14 = puVar31[5];
                                    _swift_bridgeObjectRetain(lVar12);
                                    FUN_10051fe90(uVar4,uVar13,uVar34,(ulong)bVar17);
                                    FUN_100008184(uVar5,uVar14);
                                    if (lVar12 == 0) break;
                                    uStack_338 = uStack_2e8;
                                    local_340 = local_2f0;
                                    uStack_328 = uStack_2d8;
                                    uStack_330 = uStack_2e0;
                                    local_320 = local_2d0;
                                    uStack_358 = uStack_308;
                                    local_360 = local_310;
                                    uStack_348 = uStack_2f8;
                                    uStack_350 = uStack_300;
                                    local_98 = uVar4;
                                    uStack_90 = uVar13;
                                    local_88 = uVar34;
                                    uStack_80 = (ulong)bVar17;
                                    local_78 = uVar5;
                                    uStack_70 = uVar14;
                                    __sSS4hash4intoys6HasherVz_tF(&local_360,uVar3,lVar12);
                                    _swift_bridgeObjectRelease(lVar12);
                                    uStack_388 = uStack_338;
                                    local_390 = local_340;
                                    uStack_378 = uStack_328;
                                    uStack_380 = uStack_330;
                                    local_370 = local_320;
                                    uStack_3a8 = uStack_358;
                                    local_3b0 = local_360;
                                    uStack_398 = uStack_348;
                                    uStack_3a0 = uStack_350;
                                    FUN_1005b6884(&local_3b0);
                                    if (unaff_x21 != 0) {
                                      _swift_errorRelease(unaff_x21);
                                      unaff_x21 = 0;
                                    }
                                    uVar48 = uVar48 - 1 & uVar48;
                                    puVar23 = &local_98;
                                    FUN_10051ffe8();
                                    uStack_338 = uStack_388;
                                    local_340 = local_390;
                                    uStack_328 = uStack_378;
                                    uStack_330 = uStack_380;
                                    local_320 = local_370;
                                    uStack_358 = uStack_3a8;
                                    local_360 = local_3b0;
                                    uStack_348 = uStack_398;
                                    uStack_350 = uStack_3a0;
                                    __ss6HasherV9_finalizeSiyF();
                                    uVar39 = (ulong)puVar23 ^ uVar39;
                                  }
LAB_1005bf3c0:
                                  _swift_release(uVar29);
                                  __ss6HasherV8_combineyySuF(uVar39);
                                }
                                uVar48 = uVar50;
                                if (uVar24 >> 0x1e < 2) {
                                  if (uVar24 >> 0x1e != 0) {
                                    lVar35 = (long)(int)uVar10;
                                    goto LAB_1005bf418;
                                  }
                                  if ((uVar50 & 0xff000000000000) == 0) goto LAB_1005bf430;
                                }
                                else {
                                  if (uVar24 >> 0x1e != 2) goto LAB_1005bf430;
                                  lVar35 = *(long *)(uVar10 + 0x10);
                                  lVar36 = *(long *)(uVar10 + 0x18);
LAB_1005bf418:
                                  if (lVar35 == lVar36) goto LAB_1005bf430;
                                }
LAB_1005bf42c:
                                __s10Foundation4DataV4hash4intoys6HasherVz_tF
                                          (&local_310,uVar10,uVar48);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(6);
                                uStack_2e8 = uStack_298;
                                local_2f0 = local_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                local_2d0 = local_280;
                                uStack_308 = uStack_2b8;
                                local_310 = local_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                lVar35 = *(long *)(uVar29 + 0x10);
                                FUN_10051feb8(uVar29,uVar10,uVar50,uVar43 & 1);
                                if ((lVar35 == 0) || (FUN_1005be63c(uVar29,1), unaff_x21 == 0)) {
                                  if (uVar24 >> 0x1e < 2) {
                                    if (uVar24 >> 0x1e != 0) {
                                      lVar35 = (long)(int)uVar10;
                                      goto LAB_1005bf3a0;
                                    }
                                    if ((uVar50 & 0xff000000000000) == 0) goto LAB_1005bf430;
LAB_1005bf3a8:
                                    uVar48 = uVar50 & 0xcfffffffffffffff;
                                    goto LAB_1005bf42c;
                                  }
                                  if (uVar24 >> 0x1e == 2) {
                                    lVar35 = *(long *)(uVar10 + 0x10);
                                    lVar36 = *(long *)(uVar10 + 0x18);
LAB_1005bf3a0:
                                    if (lVar35 != lVar36) goto LAB_1005bf3a8;
                                  }
                                }
                                else {
                                  _swift_errorRelease(unaff_x21);
                                  unaff_x21 = 0;
                                }
                              }
LAB_1005bf430:
                              FUN_10051ff3c(uVar29,uVar10,uVar50,uVar43);
                              uStack_298 = uStack_2e8;
                              local_2a0 = local_2f0;
                              uStack_288 = uStack_2d8;
                              uStack_290 = uStack_2e0;
                              local_280 = local_2d0;
                              uStack_2b8 = uStack_308;
                              local_2c0 = local_310;
                              uStack_2a8 = uStack_2f8;
                              uStack_2b0 = uStack_300;
                            }
                          }
                          uVar25 = (uint)(uVar11 >> 0x20);
                          uVar24 = uVar25 >> 0x1e;
                          if (uVar25 >> 0x1e < 2) {
                            if (uVar24 == 0) {
                              if ((uVar11 & 0xff000000000000) == 0) goto LAB_1005bee40;
                            }
                            else {
                              lVar36 = (long)(int)uVar22;
                              lVar35 = (long)uVar22 >> 0x20;
LAB_1005bf488:
                              if (lVar36 == lVar35) goto LAB_1005bee40;
                            }
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_2c0,uVar22,uVar11);
                          }
                          else if (uVar24 == 2) {
                            lVar36 = *(long *)(uVar22 + 0x10);
                            lVar35 = *(long *)(uVar22 + 0x18);
                            goto LAB_1005bf488;
                          }
LAB_1005bee40:
                          uVar47 = uVar47 - 1 & uVar47;
                          FUN_10051ff3c(uVar29,uVar10,uVar50,uVar43);
                          FUN_100006cdc(uVar22,uVar11);
                          uStack_248 = uStack_298;
                          local_250 = local_2a0;
                          uStack_238 = uStack_288;
                          uStack_240 = uStack_290;
                          local_230 = local_280;
                          uStack_268 = uStack_2b8;
                          local_270 = local_2c0;
                          uStack_258 = uStack_2a8;
                          uStack_260 = uStack_2b0;
                          __ss6HasherV9_finalizeSiyF();
                          uVar38 = uVar22 ^ uVar38;
                        }
LAB_1005bf528:
                        _swift_release(uVar28);
                        __ss6HasherV8_combineyySuF(uVar38);
                      }
                      uVar47 = uVar45;
                      if (uVar18 >> 0x1e < 2) {
                        if (uVar18 >> 0x1e == 0) {
                          if ((uVar45 & 0xff000000000000) != 0) {
LAB_1005bf59c:
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_220,uVar8,uVar47);
                          }
                        }
                        else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_1005bf59c;
                      }
                      else if ((uVar18 >> 0x1e == 2) &&
                              (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                      goto LAB_1005bf59c;
                    }
                    else {
                      __ss6HasherV8_combineyySuF(6);
                      uStack_1f8 = uStack_1a8;
                      local_200 = local_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      local_1e0 = local_190;
                      uStack_218 = uStack_1c8;
                      local_220 = local_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      lVar32 = *(long *)(uVar28 + 0x10);
                      FUN_10051feb8(uVar28,uVar8,uVar45,uVar43 & 1);
                      if ((lVar32 == 0) || (FUN_1005be63c(uVar28,1), unaff_x21 == 0)) {
                        if (uVar18 >> 0x1e < 2) {
                          if (uVar18 >> 0x1e == 0) {
                            if ((uVar45 & 0xff000000000000) != 0) {
LAB_1005bf508:
                              uVar47 = uVar45 & 0xcfffffffffffffff;
                              goto LAB_1005bf59c;
                            }
                          }
                          else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_1005bf508;
                        }
                        else if ((uVar18 >> 0x1e == 2) &&
                                (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                        goto LAB_1005bf508;
                      }
                      else {
                        _swift_errorRelease(unaff_x21);
                        unaff_x21 = 0;
                      }
                    }
                    FUN_10051ff3c(uVar28,uVar8,uVar45,bVar16);
                    uStack_1a8 = uStack_1f8;
                    local_1b0 = local_200;
                    uStack_198 = uStack_1e8;
                    uStack_1a0 = uStack_1f0;
                    local_190 = local_1e0;
                    uStack_1c8 = uStack_218;
                    local_1d0 = local_220;
                    uStack_1b8 = uStack_208;
                    uStack_1c0 = uStack_210;
                  }
                }
                uVar43 = (uint)(uVar9 >> 0x20);
                uVar25 = uVar43 >> 0x1e;
                if (uVar43 >> 0x1e < 2) {
                  if (uVar25 == 0) {
                    if ((uVar9 & 0xff000000000000) == 0) goto LAB_1005bea88;
                  }
                  else {
                    lVar32 = (long)(int)uVar21;
                    lVar36 = (long)uVar21 >> 0x20;
LAB_1005bf5fc:
                    if (lVar32 == lVar36) goto LAB_1005bea88;
                  }
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_1d0,uVar21,uVar9);
                }
                else if (uVar25 == 2) {
                  lVar32 = *(long *)(uVar21 + 0x10);
                  lVar36 = *(long *)(uVar21 + 0x18);
                  goto LAB_1005bf5fc;
                }
LAB_1005bea88:
                uVar51 = uVar51 - 1 & uVar51;
                FUN_10051ff3c(uVar28,uVar8,uVar45,bVar16);
                FUN_100006cdc(uVar21,uVar9);
                uStack_158 = uStack_1a8;
                local_160 = local_1b0;
                uStack_148 = uStack_198;
                uStack_150 = uStack_1a0;
                local_140 = local_190;
                uStack_178 = uStack_1c8;
                local_180 = local_1d0;
                uStack_168 = uStack_1b8;
                uStack_170 = uStack_1c0;
                __ss6HasherV9_finalizeSiyF();
                uVar52 = uVar21 ^ uVar52;
              }
LAB_1005bf6e8:
              _swift_release(uVar1);
              __ss6HasherV8_combineyySuF(uVar52);
            }
            uVar51 = uVar44;
            if (uVar26 >> 0x1e < 2) {
              if (uVar26 >> 0x1e == 0) {
                if ((uVar44 & 0xff000000000000) != 0) {
LAB_1005bf760:
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_130,uVar6,uVar51);
                }
              }
              else if ((int)uVar6 != lVar33) goto LAB_1005bf760;
            }
            else if ((uVar26 >> 0x1e == 2) && (*(long *)(uVar6 + 0x10) != *(long *)(uVar6 + 0x18)))
            goto LAB_1005bf760;
          }
          else {
            __ss6HasherV8_combineyySuF(6);
            uStack_108 = uStack_b8;
            local_110 = local_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            local_f0 = local_a0;
            uStack_128 = uStack_d8;
            local_130 = local_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            lVar37 = *(long *)(uVar1 + 0x10);
            FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            FUN_100008184(uVar2);
            FUN_10051fe90(uVar1,uVar6,uVar44,bVar15);
            if ((lVar37 == 0) || (FUN_1005be63c(uVar1,1), unaff_x21 == 0)) {
              if (uVar26 >> 0x1e < 2) {
                if (uVar26 >> 0x1e != 0) {
                  lVar37 = (long)(int)uVar6;
                  goto LAB_1005bf6b8;
                }
                if ((uVar44 & 0xff000000000000) == 0) goto LAB_1005bf764;
LAB_1005bf6cc:
                uVar51 = uVar44 & 0xcfffffffffffffff;
                goto LAB_1005bf760;
              }
              if (uVar26 >> 0x1e == 2) {
                lVar37 = *(long *)(uVar6 + 0x10);
                lVar33 = *(long *)(uVar6 + 0x18);
LAB_1005bf6b8:
                if (lVar37 != lVar33) goto LAB_1005bf6cc;
              }
            }
            else {
              _swift_errorRelease(unaff_x21);
              unaff_x21 = 0;
            }
          }
LAB_1005bf764:
          FUN_10051ff3c(uVar1,uVar6,uVar44,bVar15);
          uStack_b8 = uStack_108;
          local_c0 = local_110;
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          local_a0 = local_f0;
          uStack_d8 = uStack_128;
          local_e0 = local_130;
          uStack_c8 = uStack_118;
          uStack_d0 = uStack_120;
        }
      }
      uVar43 = (uint)(uVar7 >> 0x20);
      uVar26 = uVar43 >> 0x1e;
      if (uVar43 >> 0x1e < 2) {
        if (uVar26 == 0) {
          if ((uVar7 & 0xff000000000000) == 0) goto LAB_1005be6a4;
        }
        else {
          lVar33 = (long)(int)uVar2;
          lVar37 = (long)uVar2 >> 0x20;
LAB_1005bf7b8:
          if (lVar33 == lVar37) goto LAB_1005be6a4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&local_e0,uVar2,uVar7);
      }
      else if (uVar26 == 2) {
        lVar33 = *(long *)(uVar2 + 0x10);
        lVar37 = *(long *)(uVar2 + 0x18);
        goto LAB_1005bf7b8;
      }
LAB_1005be6a4:
      lVar46 = lVar46 + 1;
      FUN_10051ff3c(uVar1,uVar6,uVar44,bVar15);
      FUN_100006cdc(uVar2,uVar7);
      unaff_x20[5] = uStack_b8;
      unaff_x20[4] = local_c0;
      unaff_x20[7] = uStack_a8;
      unaff_x20[6] = uStack_b0;
      unaff_x20[8] = local_a0;
      unaff_x20[1] = uStack_d8;
      *unaff_x20 = local_e0;
      unaff_x20[3] = uStack_c8;
      unaff_x20[2] = uStack_d0;
    } while (lVar46 != lVar49);
  }
  return;
}

