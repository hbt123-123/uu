// rea decompile_all
// name: FUN_100571b24
// address: 0x100571b24
// body: available
// range: 0x100571b24-0x10057267b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100572678 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100571b24(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 *puVar35;
  long local_380;
  byte local_2f9 [9];
  byte local_2f0 [14];
  undefined2 uStack_2e2;
  ulong uStack_2e0;
  long local_2d8;
  long lStack_2d0;
  long local_2c8;
  long lStack_2c0;
  long local_2b8;
  long local_2b0;
  ulong uStack_2a8;
  ulong local_2a0;
  ulong uStack_298;
  ulong local_290;
  long lStack_288;
  long local_280;
  long local_278;
  long lStack_270;
  long local_268;
  ulong uStack_260;
  long local_258;
  long lStack_250;
  long local_248;
  long lStack_240;
  long local_238;
  long local_230;
  ulong uStack_228;
  ulong local_220;
  long lStack_218;
  long local_210;
  ulong uStack_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  long lStack_1e8;
  long local_1e0;
  long lStack_1d8;
  long local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  long local_1b8;
  long local_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar34 = *(long *)(param_1 + 0x10);
  if (lVar34 == *(long *)(param_2 + 0x10)) {
    if ((lVar34 != 0) && (param_1 != param_2)) {
      lVar28 = 0;
      do {
        plVar16 = (long *)(param_1 + 0x20 + lVar28 * 0x60);
        uStack_208 = plVar16[5];
        local_210 = plVar16[4];
        uStack_1f8 = plVar16[7];
        local_200 = plVar16[6];
        lStack_1e8 = plVar16[9];
        local_1f0 = plVar16[8];
        lStack_1d8 = plVar16[0xb];
        local_1e0 = plVar16[10];
        uStack_228 = plVar16[1];
        local_230 = *plVar16;
        lStack_218 = plVar16[3];
        uVar25 = plVar16[2];
        plVar16 = (long *)(param_2 + 0x20 + lVar28 * 0x60);
        uStack_1c8 = plVar16[1];
        local_1d0 = *plVar16;
        local_1b8 = plVar16[3];
        local_1c0 = plVar16[2];
        lStack_1a8 = plVar16[5];
        local_1b0 = plVar16[4];
        lStack_198 = plVar16[7];
        uStack_1a0 = plVar16[6];
        lStack_188 = plVar16[9];
        local_190 = plVar16[8];
        local_178 = plVar16[0xb];
        lStack_180 = plVar16[10];
        local_220 = uVar25;
        if (lStack_218 == 0) {
          if (local_1b8 != 0) goto LAB_100572418;
        }
        else if ((local_1b8 == 0) ||
                (((uVar25 != local_1c0 || (lStack_218 != local_1b8)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar25 & 1) == 0)))) goto LAB_100572418;
        lVar12 = local_178;
        lVar11 = lStack_180;
        lVar10 = lStack_188;
        lVar9 = local_190;
        lVar8 = lStack_198;
        uVar15 = uStack_1a0;
        lVar7 = lStack_1a8;
        lVar2 = local_1b0;
        lVar6 = lStack_1d8;
        lVar5 = local_1e0;
        lVar1 = lStack_1e8;
        uVar4 = local_1f0;
        uVar3 = uStack_1f8;
        uVar27 = local_200;
        uVar25 = uStack_208;
        lVar32 = local_210;
        if (local_210 != 0) {
          if (local_1b0 == 0) goto LAB_100572454;
          local_2f0[0] = (byte)local_1b0;
          local_2f0[1] = (byte)((ulong)local_1b0 >> 8);
          local_2f0[2] = (byte)((ulong)local_1b0 >> 0x10);
          local_2f0[3] = (byte)((ulong)local_1b0 >> 0x18);
          local_2f0[4] = (byte)((ulong)local_1b0 >> 0x20);
          local_2f0[5] = (byte)((ulong)local_1b0 >> 0x28);
          local_2f0[6] = (byte)((ulong)local_1b0 >> 0x30);
          local_2f0[7] = (byte)((ulong)local_1b0 >> 0x38);
          uStack_2e0 = uStack_1a0;
          local_2f0[8] = (byte)lStack_1a8;
          local_2f0[9] = (byte)((ulong)lStack_1a8 >> 8);
          local_2f0[10] = (byte)((ulong)lStack_1a8 >> 0x10);
          local_2f0[0xb] = (byte)((ulong)lStack_1a8 >> 0x18);
          local_2f0[0xc] = (byte)((ulong)lStack_1a8 >> 0x20);
          local_2f0[0xd] = (byte)((ulong)lStack_1a8 >> 0x28);
          uStack_2e2 = (undefined2)((ulong)lStack_1a8 >> 0x30);
          local_2b8 = local_178;
          lStack_2c0 = lStack_180;
          local_2c8 = lStack_188;
          lStack_2d0 = local_190;
          local_2d8 = lStack_198;
          if (local_1e0 == 0) {
            if (lStack_180 != 0) {
              local_380 = lStack_180;
              FUN_1005b2d74(&local_230,&local_2b0);
              FUN_1005b2d74(&local_1d0,&local_2b0);
              FUN_10007f314(&local_210,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
              FUN_10007f314(&local_1b0,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
              lVar34 = 0;
              goto LAB_1005725c8;
            }
            FUN_1005b2d74(&local_230,&local_2b0);
            FUN_1005b2d74(&local_1d0,&local_2b0);
            FUN_10007f314(&local_210,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_10007f314(&local_1b0,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_1005a7f54(uVar4,lVar1,0,lVar6);
            FUN_1005a7f54(lVar9,lVar10,0,lVar12);
            FUN_100541944(uVar4,lVar1,0,lVar6);
LAB_100571e74:
            uVar29 = *(ulong *)(lVar32 + 0x10);
            if (uVar29 != *(ulong *)(lVar2 + 0x10)) goto LAB_1005723ac;
            if ((uVar29 != 0) && (lVar32 != lVar2)) {
              uVar30 = 0;
              puVar33 = (undefined8 *)(lVar32 + 0x20);
              puVar35 = (undefined8 *)(lVar2 + 0x20);
              do {
                if (*(ulong *)(lVar32 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572644);
                  (*pcVar13)();
                }
                uStack_168 = puVar33[1];
                local_170 = *puVar33;
                uStack_158 = puVar33[3];
                local_160 = puVar33[2];
                uStack_148 = puVar33[5];
                local_150 = puVar33[4];
                uStack_138 = puVar33[7];
                uStack_140 = puVar33[6];
                uStack_128 = puVar33[9];
                local_130 = puVar33[8];
                uStack_118 = puVar33[0xb];
                local_120 = puVar33[10];
                uStack_108 = puVar33[0xd];
                uStack_110 = puVar33[0xc];
                local_100 = puVar33[0xe];
                if (*(ulong *)(lVar2 + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572648);
                  (*pcVar13)();
                }
                uStack_e8 = puVar35[1];
                local_f0 = *puVar35;
                uStack_d8 = puVar35[3];
                uStack_e0 = puVar35[2];
                uStack_c8 = puVar35[5];
                local_d0 = puVar35[4];
                uStack_b8 = puVar35[7];
                uStack_c0 = puVar35[6];
                uStack_a8 = puVar35[9];
                local_b0 = puVar35[8];
                uStack_98 = puVar35[0xb];
                local_a0 = puVar35[10];
                uStack_88 = puVar35[0xd];
                uStack_90 = puVar35[0xc];
                local_80 = puVar35[0xe];
                FUN_1005b2964(&local_170,&local_2b0);
                FUN_1005b2964(&local_f0,&local_2b0);
                puVar14 = &local_170;
                FUN_1005a3ed4(puVar14,&local_f0);
                FUN_1005b2998(&local_f0);
                FUN_1005b2998(&local_170);
                if (((ulong)puVar14 & 1) == 0) goto LAB_1005723ac;
                uVar30 = uVar30 + 1;
                puVar33 = puVar33 + 0xf;
                puVar35 = puVar35 + 0xf;
              } while (uVar29 != uVar30);
            }
            if (uVar27 >> 0x3e == 3) {
              uVar29 = 0;
              if (((uVar25 != 0) || (uVar27 != 0xc000000000000000)) ||
                 ((uVar15 >> 0x3e < 3 ||
                  ((uVar29 = 0, lVar7 != 0 || (uVar15 != 0xc000000000000000))))))
              goto LAB_10057201c;
              goto LAB_10057209c;
            }
            uVar20 = (uint)(uVar27 >> 0x3e);
            if (uVar20 == 0) {
              uVar29 = uVar27 >> 0x30 & 0xff;
            }
            else if (uVar20 == 1) {
              iVar21 = (int)(uVar25 >> 0x20);
              if (SBORROW4(iVar21,(int)uVar25)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100572670);
                (*pcVar13)();
              }
              uVar29 = (ulong)(iVar21 - (int)uVar25);
            }
            else {
              uVar29 = *(long *)(uVar25 + 0x18) - *(long *)(uVar25 + 0x10);
              if (SBORROW8(*(long *)(uVar25 + 0x18),*(long *)(uVar25 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10057266c);
                (*pcVar13)();
              }
            }
LAB_10057201c:
            uVar20 = (uint)(uVar15 >> 0x20);
            uVar23 = uVar20 >> 0x1e;
            if (uVar20 >> 0x1e < 2) {
              if (uVar23 == 0) {
                uVar30 = uVar15 >> 0x30 & 0xff;
              }
              else {
                iVar21 = (int)((ulong)lVar7 >> 0x20);
                if (SBORROW4(iVar21,(int)lVar7)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572654);
                  (*pcVar13)();
                }
                uVar30 = (ulong)(iVar21 - (int)lVar7);
              }
LAB_100572058:
              if (uVar29 == uVar30) {
                if (0 < (long)uVar29) {
                  FUN_100008184(lVar7,uVar15);
                  uVar29 = uVar25;
                  FUN_100009264(uVar25,uVar27,lVar7,uVar15);
                  if ((uVar29 & 1) == 0) goto LAB_1005724f8;
                }
LAB_10057209c:
                uVar15 = uVar3;
                thunk_FUN_100511c8c(uVar3,lVar8);
                FUN_100040bb4(local_2f0,&DAT_100aab4c0,&DAT_100837c30);
                if ((uVar15 & 1) != 0) goto LAB_1005720c0;
                goto LAB_1005723c8;
              }
            }
            else {
              if (uVar23 == 2) {
                uVar30 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
                if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572658);
                  (*pcVar13)();
                }
                goto LAB_100572058;
              }
              if (uVar29 == 0) goto LAB_10057209c;
            }
LAB_1005724f8:
            FUN_100040bb4(local_2f0,&DAT_100aab4c0,&DAT_100837c30);
          }
          else if (lStack_180 == 0) {
            FUN_1005b2d74(&local_230,&local_2b0);
            FUN_1005b2d74(&local_1d0,&local_2b0);
            FUN_10007f314(&local_210,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_10007f314(&local_1b0,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            local_380 = 0;
            lVar34 = lVar5;
LAB_1005725c8:
            FUN_1005a7f54(uVar4,lVar1,lVar34,lVar6);
            FUN_1005a7f54(lVar9,lVar10,local_380,lVar12);
            FUN_100040bb4(local_2f0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_100541944(uVar4,lVar1,lVar5,lVar6);
            FUN_100541944(lVar9,lVar10,local_380,lVar12);
          }
          else {
            FUN_1005b2d74(&local_230,&local_2b0);
            FUN_1005b2d74(&local_1d0,&local_2b0);
            FUN_10007f314(&local_210,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_10007f314(&local_1b0,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
            FUN_1005a7f54(uVar4,lVar1,lVar5,lVar6);
            FUN_1005a7f54(lVar9,lVar10,lVar11,lVar12);
            uVar29 = uVar4;
            FUN_1005a7724(uVar4,lVar1,lVar5,lVar6,lVar9,lVar10,lVar11,lVar12);
            FUN_100541944(lVar9,lVar10,lVar11,lVar12);
            FUN_100541944(uVar4,lVar1,lVar5,lVar6);
            if ((uVar29 & 1) != 0) goto LAB_100571e74;
LAB_1005723ac:
            FUN_100040bb4(local_2f0,&DAT_100aab4c0,&DAT_100837c30);
          }
LAB_1005723c8:
          local_2b0 = lVar32;
          uStack_2a8 = uVar25;
          local_2a0 = uVar27;
          local_290 = uVar4;
          lStack_288 = lVar1;
          local_280 = lVar5;
          local_278 = lVar6;
          uStack_298 = uVar3;
          FUN_100040bb4(&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
LAB_100572408:
          FUN_1005b2da8(&local_1d0);
          FUN_1005b2da8(&local_230);
          goto LAB_100572418;
        }
        if (local_1b0 != 0) {
LAB_100572454:
          local_2b0 = local_210;
          uStack_2a8 = uStack_208;
          local_2a0 = local_200;
          uStack_298 = uStack_1f8;
          local_290 = local_1f0;
          lStack_288 = lStack_1e8;
          local_280 = local_1e0;
          local_278 = lStack_1d8;
          lStack_270 = local_1b0;
          uStack_260 = uStack_1a0;
          local_268 = lStack_1a8;
          lStack_250 = local_190;
          local_258 = lStack_198;
          lStack_240 = lStack_180;
          local_248 = lStack_188;
          local_238 = local_178;
          FUN_10007f314(&local_210,local_2f0,&DAT_100aab4c0,&DAT_100837c30);
          FUN_10007f314(&local_1b0,local_2f0,&DAT_100aab4c0,&DAT_100837c30);
          FUN_100040bb4(&local_2b0,&DAT_100aad0d8,&DAT_10083cc48);
          goto LAB_100572418;
        }
        FUN_1005b2d74(&local_230,&local_2b0);
        FUN_1005b2d74(&local_1d0,&local_2b0);
        FUN_10007f314(&local_210,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
        FUN_10007f314(&local_1b0,&local_2b0,&DAT_100aab4c0,&DAT_100837c30);
LAB_1005720c0:
        uVar29 = uStack_1c8;
        lVar7 = local_1d0;
        uVar15 = uStack_228;
        lVar2 = local_230;
        local_2b0 = lVar32;
        uStack_2a8 = uVar25;
        local_2a0 = uVar27;
        uStack_298 = uVar3;
        local_290 = uVar4;
        lStack_288 = lVar1;
        local_280 = lVar5;
        local_278 = lVar6;
        plVar16 = &local_2b0;
        FUN_100040bb4(plVar16,&DAT_100aab4c0,&DAT_100837c30);
        uVar20 = (uint)(uVar15 >> 0x20);
        uVar22 = uVar20 >> 0x1e;
        uVar23 = (uint)(uVar29 >> 0x20);
        uVar26 = uVar23 >> 0x1e;
        iVar21 = (int)lVar2;
        if (uVar15 >> 0x3e == 3) {
          uVar25 = 0;
          if ((((lVar2 != 0) || (uVar15 != 0xc000000000000000)) || (uVar29 >> 0x3e < 3)) ||
             ((uVar25 = 0, lVar7 != 0 || (uVar29 != 0xc000000000000000))))
          goto joined_r0x0001005722b0;
LAB_10057224c:
          FUN_1005b2da8(&local_1d0);
          FUN_1005b2da8(&local_230);
        }
        else {
          if (uVar20 >> 0x1e < 2) {
            if (uVar22 == 0) {
              uVar25 = uVar15 >> 0x30 & 0xff;
            }
            else {
              iVar24 = (int)((ulong)lVar2 >> 0x20);
              if (SBORROW4(iVar24,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100572660);
                (*pcVar13)();
              }
              uVar25 = (ulong)(iVar24 - iVar21);
            }
joined_r0x0001005722b0:
            if (1 < uVar23 >> 0x1e) goto LAB_100572158;
LAB_10057218c:
            if (uVar26 == 0) {
              uVar27 = uVar29 >> 0x30 & 0xff;
            }
            else {
              iVar24 = (int)((ulong)lVar7 >> 0x20);
              if (SBORROW4(iVar24,(int)lVar7)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10057264c);
                (*pcVar13)();
              }
              uVar27 = (ulong)(iVar24 - (int)lVar7);
            }
          }
          else {
            if (uVar22 == 2) {
              uVar25 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
              if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x10057265c);
                (*pcVar13)();
              }
              goto joined_r0x0001005722b0;
            }
            uVar25 = 0;
            if (uVar26 < 2) goto LAB_10057218c;
LAB_100572158:
            if (uVar26 != 2) {
              if (uVar25 != 0) goto LAB_100572408;
              goto LAB_10057224c;
            }
            uVar27 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
            if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100572650);
              (*pcVar13)();
            }
          }
          if (uVar25 != uVar27) goto LAB_100572408;
          if ((long)uVar25 < 1) goto LAB_10057224c;
          if (uVar22 < 2) {
            if (uVar22 != 0) {
              lVar32 = (long)iVar21;
              plVar31 = (long *)((lVar2 >> 0x20) - lVar32);
              if (lVar2 >> 0x20 < lVar32) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100572664);
                (*pcVar13)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar17 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar32,(long)plVar17)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572678);
                  (*pcVar13)();
                }
                plVar16 = (long *)((lVar32 - (long)plVar17) + (long)plVar16);
              }
LAB_1005722fc:
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)plVar31 <= (long)plVar17) {
                plVar17 = plVar31;
              }
              lVar32 = 0;
              if (plVar16 != (long *)0x0) {
                lVar32 = (long)plVar17 + (long)plVar16;
              }
              FUN_100009038(local_2f0,plVar16,lVar32,lVar7,uVar29);
              FUN_1005b2da8(&local_1d0);
              FUN_1005b2da8(&local_230);
              if ((local_2f0[0] & 1) != 0) goto LAB_100572390;
              goto LAB_100572418;
            }
            local_2f0[0] = (byte)lVar2;
            local_2f0[1] = (byte)((ulong)lVar2 >> 8);
            local_2f0[2] = (byte)((ulong)lVar2 >> 0x10);
            local_2f0[3] = (byte)((ulong)lVar2 >> 0x18);
            local_2f0[4] = (byte)((ulong)lVar2 >> 0x20);
            local_2f0[5] = (byte)((ulong)lVar2 >> 0x28);
            local_2f0[6] = (byte)((ulong)lVar2 >> 0x30);
            local_2f0[7] = (byte)((ulong)lVar2 >> 0x38);
            local_2f0[8] = (byte)uVar15;
            local_2f0[9] = (byte)(uVar15 >> 8);
            local_2f0[10] = (byte)(uVar15 >> 0x10);
            local_2f0[0xb] = (byte)(uVar15 >> 0x18);
            local_2f0[0xc] = (byte)(uVar15 >> 0x20);
            local_2f0[0xd] = (byte)(uVar15 >> 0x28);
            pbVar19 = local_2f0 + (uVar15 >> 0x30 & 0xff);
          }
          else {
            if (uVar22 == 2) {
              lVar32 = *(long *)(lVar2 + 0x10);
              lVar1 = *(long *)(lVar2 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              plVar17 = plVar16;
              if (plVar16 != (long *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar32,(long)plVar17)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100572674);
                  (*pcVar13)();
                }
                plVar16 = (long *)((lVar32 - (long)plVar17) + (long)plVar16);
              }
              plVar31 = (long *)(lVar1 - lVar32);
              if (SBORROW8(lVar1,lVar32)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100572668);
                (*pcVar13)();
              }
              goto LAB_1005722fc;
            }
            local_2f0[8] = 0;
            local_2f0[9] = 0;
            local_2f0[10] = 0;
            local_2f0[0xb] = 0;
            local_2f0[0xc] = 0;
            local_2f0[0xd] = 0;
            local_2f0[0] = 0;
            local_2f0[1] = 0;
            local_2f0[2] = 0;
            local_2f0[3] = 0;
            local_2f0[4] = 0;
            local_2f0[5] = 0;
            local_2f0[6] = 0;
            local_2f0[7] = 0;
            pbVar19 = local_2f0;
          }
          FUN_100009038(local_2f9,local_2f0,pbVar19,lVar7,uVar29);
          FUN_1005b2da8(&local_1d0);
          FUN_1005b2da8(&local_230);
          if ((local_2f9[0] & 1) == 0) goto LAB_100572418;
        }
LAB_100572390:
        lVar28 = lVar28 + 1;
      } while (lVar28 != lVar34);
    }
    uVar18 = 1;
  }
  else {
LAB_100572418:
    uVar18 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar18);
}

