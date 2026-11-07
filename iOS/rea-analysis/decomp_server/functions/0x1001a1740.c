// rea decompile_all
// name: FUN_1001a1740
// address: 0x1001a1740
// body: available
// range: 0x1001a1740-0x1001a24e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a1740(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long extraout_x8;
  ulong uVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined1 auStack_280 [16];
  undefined4 auStack_270 [4];
  ulong local_260;
  undefined8 uStack_258;
  long local_250;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong local_220;
  long local_218;
  ulong local_210;
  undefined1 auStack_208 [24];
  ulong local_1f0;
  long lStack_1e8;
  ulong local_1e0;
  long lStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  byte local_1c0;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  undefined8 uStack_190;
  ulong local_188;
  long lStack_180;
  ulong local_178;
  long lStack_170;
  ulong local_168;
  ulong uStack_160;
  byte local_158;
  undefined7 uStack_157;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  byte local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  char local_7f;
  long local_78 [3];
  
  lVar7 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar20 = *(long *)(lVar7 + -8);
  lVar16 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar20 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)&local_260 + lVar9;
  if (param_4 >> 0x3e < 3) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(int *)((long)auStack_270 + lVar9) = (int)param_1;
    pcVar5 = FUN_1001a387c;
    uVar17 = 0x29;
    goto LAB_1001a19e0;
  }
  local_120 = param_2;
  uStack_118 = param_3;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar19);
  FUN_10009ff0c();
  uVar13 = 0;
  lVar8 = lVar19;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar19,0,PTR___sSSN_1009957f8,lVar16);
  (**(code **)(lVar20 + 8))(lVar19,lVar7);
  if (uVar13 >> 0x3c < 0xf) {
    puStack_108 = PTR___s10Foundation4DataVN_1009961e8;
    local_120 = lVar8;
    uStack_118 = uVar13;
    FUN_100008184(lVar8,uVar13);
    FUN_10067ee18(auStack_b0,&local_120);
    if (local_7f == '\x04') {
      local_78[0] = local_a8;
      local_248 = uVar13;
      _swift_bridgeObjectRetain(local_a8);
      FUN_1000abcec(auStack_b0);
      if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001a1a24:
        uVar13 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = -0x2fffffffffffffee;
        uVar13 = 0;
        FUN_1001a2c70(0xd000000000000012);
        if ((uVar13 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          goto LAB_1001a1a24;
        }
        FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
        FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,PTR___sSiN_100995968,6);
        uVar13 = local_188;
        if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1a24;
      }
      if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001a1ad0:
        local_228 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = 0x7469625f74736166;
        uVar14 = 0;
        FUN_1001a2c70(0x7469625f74736166);
        if ((uVar14 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          goto LAB_1001a1ad0;
        }
        FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
        FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,PTR___ss6UInt64VN_100995e10,6
                          );
        if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1ad0;
        local_228 = local_188;
      }
      if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001a1b80:
        local_230 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = 0x5f6c6172656e6567;
        uVar14 = 0;
        FUN_1001a2c70(0x5f6c6172656e6567);
        if ((uVar14 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          goto LAB_1001a1b80;
        }
        FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
        FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,PTR___ss6UInt64VN_100995e10,6
                          );
        if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1b80;
        local_230 = local_188;
      }
      if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001a1c28:
        local_238 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = 0x61727469625f6468;
        uVar14 = 0;
        FUN_1001a2c70(0x61727469625f6468);
        if ((uVar14 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          goto LAB_1001a1c28;
        }
        FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
        FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,PTR___ss6UInt64VN_100995e10,6
                          );
        if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1c28;
        local_238 = local_188;
      }
      if (*(long *)(local_a8 + 0x10) == 0) {
LAB_1001a1cd8:
        local_240 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = 0x625f796172756c62;
        uVar14 = 0xee00657461727469;
        FUN_1001a2c70(0x625f796172756c62);
        if ((uVar14 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          goto LAB_1001a1cd8;
        }
        FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
        FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,PTR___ss6UInt64VN_100995e10,6
                          );
        if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1cd8;
        local_240 = local_188;
      }
      if (*(long *)(local_a8 + 0x10) == 0) {
        puStack_108 = (undefined *)0x0;
        local_110 = 0;
        uStack_118 = 0;
        local_120 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_a8);
        lVar9 = 0x74735f616964656d;
        uVar14 = 0;
        FUN_1001a2c70(0x74735f616964656d);
        if ((uVar14 & 1) == 0) {
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
          uStack_118 = 0;
          local_120 = 0;
          puStack_108 = (undefined *)0x0;
          local_110 = 0;
        }
        else {
          FUN_10003e8bc(*(long *)(local_a8 + 0x38) + lVar9 * 0x20,&local_120);
          FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
        }
      }
      uVar18 = 0x6e776f6e6b6e75;
      FUN_100040bb4(local_78,&DAT_100a759d8,&DAT_10080c0a0);
      uVar14 = uVar18;
      if (puStack_108 != (undefined *)0x0) {
        puVar11 = &DAT_100a7c8f0;
        FUN_100004bb4(&DAT_100a7c8f0,&DAT_100811260);
        puVar3 = PTR___sypN_100995e88;
        puVar10 = &local_188;
        _swift_dynamicCast(puVar10,&local_120,PTR___sypN_100995e88 + 8,puVar11,6);
        uVar15 = local_188;
        if (((ulong)puVar10 & 1) == 0) {
LAB_1001a1eb0:
          uVar15 = 0;
          local_218 = -0x1900000000000000;
          local_210 = 0x6e776f6e6b6e75;
          lVar9 = -0x1900000000000000;
          goto LAB_1001a2044;
        }
        if (*(long *)(local_188 + 0x10) == 0) {
          _swift_bridgeObjectRelease(local_188);
          goto LAB_1001a1eb0;
        }
        lVar16 = *(long *)(local_188 + 0x20);
        _swift_bridgeObjectRetain(lVar16);
        _swift_bridgeObjectRelease(uVar15);
        local_260 = uVar13;
        if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1001a1ed4:
          local_220 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar16);
          lVar9 = 0x70625f65626f7270;
          uVar13 = 0xe900000000000073;
          FUN_1001a2c70(0x70625f65626f7270);
          if ((uVar13 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar16);
            goto LAB_1001a1ed4;
          }
          FUN_10003e8bc(*(long *)(lVar16 + 0x38) + lVar9 * 0x20,&local_120);
          _swift_bridgeObjectRelease(lVar16);
          puVar10 = &local_188;
          _swift_dynamicCast(puVar10,&local_120,puVar3 + 8,PTR___ss5Int64VN_100995cc0,6);
          if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1ed4;
          local_220 = local_188;
        }
        uVar13 = 0xec0000006c706d69;
        if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1001a1f58:
          uVar14 = uVar18;
          lVar9 = -0x1900000000000000;
        }
        else {
          _swift_bridgeObjectRetain(lVar16);
          lVar9 = 0x5f7265646f636e65;
          uVar14 = uVar13;
          FUN_1001a2c70(0x5f7265646f636e65);
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar16);
            goto LAB_1001a1f58;
          }
          FUN_10003e8bc(*(long *)(lVar16 + 0x38) + lVar9 * 0x20,&local_120);
          _swift_bridgeObjectRelease(lVar16);
          puVar10 = &local_188;
          _swift_dynamicCast(puVar10,&local_120,puVar3 + 8,PTR___sSSN_1009957f8,6);
          uVar14 = local_188;
          lVar9 = lStack_180;
          if (((ulong)puVar10 & 1) == 0) goto LAB_1001a1f58;
        }
        if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1001a1fb0:
          puStack_108 = (undefined *)0x0;
          local_110 = 0;
          uStack_118 = 0;
          local_120 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar16);
          lVar7 = 0x5f65727574706163;
          FUN_1001a2c70(0x5f65727574706163);
          if ((uVar13 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar16);
            goto LAB_1001a1fb0;
          }
          FUN_10003e8bc(*(long *)(lVar16 + 0x38) + lVar7 * 0x20,&local_120);
          _swift_bridgeObjectRelease(lVar16);
        }
        uVar13 = local_260;
        _swift_bridgeObjectRelease(lVar16);
        if (puStack_108 == (undefined *)0x0) {
          FUN_100040bb4(&local_120,&DAT_100a766e0,&DAT_10080bdb0);
          local_218 = -0x1900000000000000;
          local_210 = 0x6e776f6e6b6e75;
        }
        else {
          puVar10 = &local_188;
          _swift_dynamicCast(puVar10,&local_120,puVar3 + 8,PTR___sSSN_1009957f8,6);
          if (((ulong)puVar10 & 1) == 0) {
            local_218 = -0x1900000000000000;
            local_210 = 0x6e776f6e6b6e75;
          }
          else {
            local_218 = lStack_180;
            local_210 = local_188;
          }
        }
        uVar15 = local_220;
        if (local_220 != 0xffffffffffffffff) goto LAB_1001a2044;
        if (uVar14 == 0x6e776f6e6b6e75) {
          local_220 = 0xffffffffffffffff;
          goto LAB_1001a2074;
        }
        bVar6 = false;
        local_220 = 0xffffffffffffffff;
        goto LAB_1001a20b8;
      }
      FUN_100040bb4(&local_120,&DAT_100a766e0,&DAT_10080bdb0);
      uVar15 = 0;
      local_218 = -0x1900000000000000;
      local_210 = 0x6e776f6e6b6e75;
      lVar9 = -0x1900000000000000;
LAB_1001a2044:
      lVar16 = *(long *)(unaff_x20 + 0x40);
      if (lVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a24c4);
        (*pcVar5)();
      }
      lVar7 = uVar15 - lVar16;
      if (SBORROW8(uVar15,lVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a24c8);
        (*pcVar5)();
      }
      if ((lVar7 < 0) && (bVar6 = SBORROW8(0,lVar7), lVar7 = -lVar7, bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a24cc);
        (*pcVar5)();
      }
      local_220 = uVar15;
      if (lVar7 < 0x19000) {
        if (uVar14 == 0x6e776f6e6b6e75) {
LAB_1001a2074:
          if (lVar9 != -0x1900000000000000) {
            bVar6 = false;
            uVar14 = uVar18;
            goto LAB_1001a20b8;
          }
          lVar9 = -0x1900000000000000;
        }
        else {
          bVar6 = false;
LAB_1001a20b8:
          uVar15 = uVar14;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar14,lVar9,0x6e776f6e6b6e75,0xe700000000000000,0);
          uVar18 = uVar14;
          if ((uVar15 & 1) == 0) {
            uVar18 = 0x6572617774666f73;
            lVar16 = *(long *)(*(long *)(unaff_x20 + 0x88) + 0x10);
            local_260 = uVar13;
            if (lVar16 != 0) {
              plVar21 = (long *)(*(long *)(unaff_x20 + 0x88) + 0x28);
              do {
                uVar13 = plVar21[-1];
                if ((uVar13 == uVar14 && *plVar21 == lVar9) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar13,*plVar21,uVar14,lVar9,0), (uVar13 & 1) != 0)) {
                  uVar18 = 0x6572617764726168;
                  break;
                }
                plVar21 = plVar21 + 2;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            _swift_bridgeObjectRelease(lVar9);
            lVar9 = -0x1800000000000000;
            uVar13 = local_260;
          }
          if (bVar6) goto LAB_1001a2258;
        }
        if (((uVar18 == *(ulong *)(unaff_x20 + 0x20)) && (lVar9 == *(long *)(unaff_x20 + 0x28))) ||
           (uVar14 = uVar18,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar18,lVar9,*(ulong *)(unaff_x20 + 0x20),*(long *)(unaff_x20 + 0x28),0),
           (uVar14 & 1) != 0)) {
          if (((local_210 == *(ulong *)(unaff_x20 + 0x30)) &&
              (local_218 == *(long *)(unaff_x20 + 0x38))) ||
             (uVar14 = local_210,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (local_210,local_218,*(ulong *)(unaff_x20 + 0x30),*(long *)(unaff_x20 + 0x38)
                        ,0), (uVar14 & 1) != 0)) {
            uVar14 = *(ulong *)(unaff_x20 + 0x48);
            if (*(char *)(unaff_x20 + 0x50) == '\x01') {
              if ((long)uVar14 < 3) {
                if (uVar14 == 0) {
                  if (uVar13 == 0) goto LAB_1001a21f4;
                }
                else if (uVar14 == 1) {
                  if (uVar13 == 1) goto LAB_1001a21f4;
                }
                else if (uVar13 == 2) goto LAB_1001a21f4;
              }
              else if ((long)uVar14 < 5) {
                if (uVar14 == 3) {
                  if (uVar13 == 3) {
LAB_1001a21f4:
                    if (((local_228 == *(ulong *)(unaff_x20 + 0x58)) &&
                        (local_230 == *(ulong *)(unaff_x20 + 0x60))) &&
                       ((local_238 == *(ulong *)(unaff_x20 + 0x68) &&
                        (local_240 == *(ulong *)(unaff_x20 + 0x70))))) {
                      _swift_bridgeObjectRelease(local_218);
                      FUN_100006cc8(lVar8,local_248);
                      goto LAB_1001a2434;
                    }
                  }
                }
                else if (uVar13 == 4) goto LAB_1001a21f4;
              }
              else if (uVar14 == 5) {
                if (uVar13 == 5) goto LAB_1001a21f4;
              }
              else if (uVar13 == 6) goto LAB_1001a21f4;
            }
            else if (uVar13 == uVar14) goto LAB_1001a21f4;
          }
        }
      }
      else {
        if (uVar14 != 0x6e776f6e6b6e75) {
          bVar6 = true;
          goto LAB_1001a20b8;
        }
        if (lVar9 != -0x1900000000000000) {
          bVar6 = true;
          uVar14 = uVar18;
          goto LAB_1001a20b8;
        }
        lVar9 = -0x1900000000000000;
      }
LAB_1001a2258:
      local_250 = lVar8;
      _swift_bridgeObjectRetain(lVar9);
      uVar12 = 0;
      _swift_bridgeObjectRelease_n(0xe000000000000000);
      uVar14 = local_220;
      if ((long)local_220 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001a24c0);
        (*pcVar5)();
      }
      FUN_10043e6e4();
      bVar2 = (byte)uVar12 | (byte)(uVar12 >> 8);
      bVar1 = bVar2 & 1;
      uVar15 = 0;
      if ((uVar12 & 0x100) == 0) {
        uVar15 = uVar13;
      }
      local_178 = local_210;
      lStack_170 = local_218;
      local_168 = uVar14;
      uStack_150 = local_228;
      local_148 = local_230;
      uStack_140 = local_238;
      uStack_138 = local_240;
      uStack_258 = 0xc000000000000000;
      local_260 = 0;
      uStack_128 = 0xc000000000000000;
      local_130 = 0;
      uStack_118 = *(ulong *)(unaff_x20 + 0x28);
      local_120 = *(long *)(unaff_x20 + 0x20);
      puStack_108 = *(undefined **)(unaff_x20 + 0x38);
      local_110 = *(undefined8 *)(unaff_x20 + 0x30);
      uStack_f8 = *(undefined8 *)(unaff_x20 + 0x48);
      local_100 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_e8 = *(undefined8 *)(unaff_x20 + 0x58);
      local_f0 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_d8 = *(undefined8 *)(unaff_x20 + 0x68);
      local_e0 = *(undefined8 *)(unaff_x20 + 0x60);
      uStack_c8 = *(undefined8 *)(unaff_x20 + 0x78);
      local_d0 = *(undefined8 *)(unaff_x20 + 0x70);
      local_c0 = *(undefined8 *)(unaff_x20 + 0x80);
      *(long *)(unaff_x20 + 0x28) = lVar9;
      *(ulong *)(unaff_x20 + 0x20) = uVar18;
      *(long *)(unaff_x20 + 0x38) = local_218;
      *(ulong *)(unaff_x20 + 0x30) = local_210;
      *(undefined8 *)(unaff_x20 + 0x80) = 0xc000000000000000;
      *(ulong *)(unaff_x20 + 0x68) = local_238;
      *(ulong *)(unaff_x20 + 0x60) = local_230;
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      *(ulong *)(unaff_x20 + 0x70) = local_240;
      *(ulong *)(unaff_x20 + 0x48) = uVar15;
      *(ulong *)(unaff_x20 + 0x40) = uVar14;
      *(ulong *)(unaff_x20 + 0x58) = local_228;
      *(ulong *)(unaff_x20 + 0x50) = CONCAT71(uStack_157,bVar2) & 0xffffffffffffff01;
      local_188 = uVar18;
      lStack_180 = lVar9;
      uStack_160 = uVar15;
      local_158 = bVar1;
      local_b8 = bVar1;
      FUN_1001a37f8(&local_188,&local_1f0);
      FUN_1001a3834(&local_120);
      _swift_beginAccess(unaff_x20 + 0x10,auStack_208,0,0);
      lVar16 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar16 != 0) {
        FUN_1000c7b64();
        lVar7 = *(long *)(lVar16 + 0x78);
        bVar2 = *(byte *)(lVar16 + 0x81);
        _swift_release(lVar16);
        bVar4 = local_158;
        uVar13 = uStack_160;
        if (((bVar2 & 1) == 0) && (lVar7 == 6)) {
          if (DAT_100a73b60 != -1) {
            _swift_once(&DAT_100a73b60,FUN_1000efc4c);
          }
          uVar17 = *(undefined8 *)(DAT_100b360a8 + 0x88);
          _swift_retain(uVar17);
          FUN_10008a11c(param_1,uVar13,bVar4);
          _swift_release(uVar17);
        }
      }
      FUN_1001a1518(param_1);
      FUN_100006cc8(local_250,local_248);
      local_1e0 = local_210;
      lStack_1d8 = local_218;
      local_1d0 = local_220;
      local_1b8 = local_228;
      uStack_1b0 = local_230;
      local_1a8 = local_238;
      uStack_1a0 = local_240;
      uStack_190 = uStack_258;
      local_198 = local_260;
      local_1f0 = uVar18;
      lStack_1e8 = lVar9;
      uStack_1c8 = uVar15;
      local_1c0 = bVar1;
      FUN_1001a3834(&local_1f0);
LAB_1001a2434:
      _swift_bridgeObjectRelease(lVar9);
      return;
    }
    FUN_1000abcec(auStack_b0);
    FUN_100006cc8(lVar8,uVar13);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(int *)((long)auStack_270 + lVar9) = (int)param_1;
  pcVar5 = FUN_1001a3884;
  uVar17 = 0x2e;
LAB_1001a19e0:
  FUN_1003fb48c(pcVar5,auStack_280 + lVar9,0xd00000000000009e,0x8000000100885b90,0xd000000000000022,
                0x800000010089a290,uVar17,0);
  return;
}

