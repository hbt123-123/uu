// rea decompile_all
// name: FUN_100571434
// address: 0x100571434
// body: available
// range: 0x100571434-0x100571b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100571b20 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100571434(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 local_348;
  ulong local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  byte local_2f0 [14];
  undefined2 uStack_2e2;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  long local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 local_210;
  long local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  long local_190;
  ulong uStack_188;
  ulong local_180;
  ulong local_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 local_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  ulong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == *(long *)(param_2 + 0x10)) {
    if ((lVar12 != 0) && (param_1 != param_2)) {
      puVar20 = (undefined8 *)(param_2 + 0x48);
      puVar21 = (undefined8 *)(param_1 + 0x48);
      do {
        lVar12 = lVar12 + -1;
        uStack_1e8 = puVar21[-2];
        local_1f0 = puVar21[-3];
        uStack_1c8 = puVar21[2];
        local_1d0 = puVar21[1];
        uStack_1b8 = puVar21[4];
        uStack_1c0 = puVar21[3];
        local_1b0 = puVar21[5];
        uStack_1a8 = (undefined1)puVar21[6];
        uStack_19f = *(undefined8 *)((long)puVar21 + 0x39);
        uStack_1a7 = (undefined7)*(undefined8 *)((long)puVar21 + 0x31);
        uStack_1a0 = (undefined1)((ulong)*(undefined8 *)((long)puVar21 + 0x31) >> 0x38);
        uStack_1f8 = puVar21[-4];
        local_200 = puVar21[-5];
        uStack_1d8 = *puVar21;
        uVar22 = puVar21[-1];
        uStack_188 = puVar20[-4];
        local_190 = puVar20[-5];
        local_178 = puVar20[-2];
        local_180 = puVar20[-3];
        uStack_168 = *puVar20;
        local_170 = puVar20[-1];
        uStack_158 = puVar20[2];
        uStack_160 = puVar20[1];
        uStack_148 = puVar20[4];
        local_150 = puVar20[3];
        uStack_12f = *(undefined8 *)((long)puVar20 + 0x39);
        uStack_130 = (undefined1)((ulong)*(undefined8 *)((long)puVar20 + 0x31) >> 0x38);
        uStack_140 = puVar20[5];
        uStack_138 = (undefined1)puVar20[6];
        local_137 = (undefined7)((ulong)puVar20[6] >> 8);
        local_1e0 = uVar22;
        if ((local_1f0 & 0x100000000) == 0) {
          if (((local_180 & 0x100000000) != 0) || ((int)local_1f0 != (int)local_180))
          goto LAB_100571a00;
        }
        else if ((local_180 & 0x100000000) == 0) goto LAB_100571a00;
        if ((uStack_1e8 & 0x100000000) == 0) {
          if ((local_178 & 0x100000000) != 0) goto LAB_100571a00;
          if ((int)uStack_1e8 != (int)local_178) goto LAB_100571a00;
        }
        else if ((local_178 & 0x100000000) == 0) goto LAB_100571a00;
        uStack_228 = puVar21[5];
        local_230 = puVar21[4];
        uStack_218 = puVar21[7];
        uStack_220 = puVar21[6];
        local_210 = *(undefined1 *)(puVar21 + 8);
        uStack_248 = puVar21[1];
        local_250 = *puVar21;
        uStack_238 = puVar21[3];
        uStack_240 = puVar21[2];
        if (uVar22 != 0) {
          if (local_170 == 0) goto LAB_100571a5c;
          uStack_380 = puVar20[1];
          uStack_388 = *puVar20;
          uStack_370 = puVar20[3];
          local_378 = puVar20[2];
          uStack_360 = puVar20[5];
          local_368 = puVar20[4];
          uStack_350 = (undefined1)puVar20[7];
          uStack_34f = (undefined7)((ulong)puVar20[7] >> 8);
          local_358 = (undefined1)puVar20[6];
          uStack_357 = (undefined7)((ulong)puVar20[6] >> 8);
          local_348 = *(undefined1 *)(puVar20 + 8);
          uStack_8f = CONCAT17(local_348,uStack_34f);
          uStack_90 = uStack_350;
          uStack_110 = puVar21[1];
          local_118 = *puVar21;
          uStack_100 = puVar21[3];
          local_108 = puVar21[2];
          uStack_f0 = puVar21[5];
          local_f8 = puVar21[4];
          uStack_e0 = puVar21[7];
          local_e8 = puVar21[6];
          local_d8 = *(undefined1 *)(puVar21 + 8);
          local_390 = local_170;
          local_120 = uVar22;
          local_d0 = local_170;
          uStack_c8 = uStack_388;
          local_c0 = uStack_380;
          uStack_b8 = local_378;
          local_b0 = uStack_370;
          uStack_a8 = local_368;
          uStack_a0 = uStack_360;
          uStack_98 = local_358;
          local_97 = uStack_357;
          FUN_1005b2dd4(&local_200,local_2f0);
          FUN_1005b2dd4(&local_190,local_2f0);
          FUN_10007f314(&local_1e0,local_2f0,&DAT_100aab4f8,&DAT_100838f20);
          FUN_10007f314(&local_170,local_2f0,&DAT_100aab4f8,&DAT_100838f20);
          puVar19 = &local_120;
          FUN_1005a64f8(puVar19,&local_d0);
          FUN_100040bb4(&local_390,&DAT_100aab4f8,&DAT_100838f20);
          uStack_320 = uStack_238;
          local_328 = uStack_240;
          uStack_310 = uStack_228;
          local_318 = local_230;
          uStack_300 = uStack_218;
          local_308 = uStack_220;
          local_2f8 = local_210;
          uStack_330 = uStack_248;
          local_338 = local_250;
          puVar6 = &local_340;
          local_340 = uVar22;
          FUN_100040bb4(puVar6,&DAT_100aab4f8,&DAT_100838f20);
          if (((ulong)puVar19 & 1) != 0) goto LAB_100571730;
LAB_100571a44:
          FUN_1005b2e08(&local_190);
          FUN_1005b2e08(&local_200);
          uVar9 = 0;
          goto LAB_100571a0c;
        }
        if (local_170 != 0) {
LAB_100571a5c:
          uStack_2e0 = puVar21[1];
          uVar9 = *puVar21;
          uStack_2d0 = puVar21[3];
          local_2d8 = puVar21[2];
          uStack_2c0 = puVar21[5];
          local_2c8 = puVar21[4];
          uStack_2b0 = puVar21[7];
          local_2b8 = puVar21[6];
          local_2f0[8] = (byte)uVar9;
          local_2f0[9] = (byte)((ulong)uVar9 >> 8);
          local_2f0[10] = (byte)((ulong)uVar9 >> 0x10);
          local_2f0[0xb] = (byte)((ulong)uVar9 >> 0x18);
          local_2f0[0xc] = (byte)((ulong)uVar9 >> 0x20);
          local_2f0[0xd] = (byte)((ulong)uVar9 >> 0x28);
          uStack_2e2 = (undefined2)((ulong)uVar9 >> 0x30);
          uStack_290 = puVar20[1];
          local_298 = *puVar20;
          uStack_280 = puVar20[3];
          local_288 = puVar20[2];
          uStack_270 = puVar20[5];
          local_278 = puVar20[4];
          uStack_260 = puVar20[7];
          local_268 = puVar20[6];
          local_2f0[0] = (byte)uVar22;
          local_2f0[1] = (byte)(uVar22 >> 8);
          local_2f0[2] = (byte)(uVar22 >> 0x10);
          local_2f0[3] = (byte)(uVar22 >> 0x18);
          local_2f0[4] = (byte)(uVar22 >> 0x20);
          local_2f0[5] = (byte)(uVar22 >> 0x28);
          local_2f0[6] = (byte)(uVar22 >> 0x30);
          local_2f0[7] = (byte)(uVar22 >> 0x38);
          local_2a8 = *(undefined1 *)(puVar21 + 8);
          local_258 = *(undefined1 *)(puVar20 + 8);
          local_2a0 = local_170;
          FUN_10007f314(&local_1e0,&local_340,&DAT_100aab4f8,&DAT_100838f20);
          FUN_10007f314(&local_170,&local_340,&DAT_100aab4f8,&DAT_100838f20);
          FUN_100040bb4(local_2f0,&DAT_100aad100,&DAT_10083cc58);
          uVar9 = 0;
          goto LAB_100571a0c;
        }
        local_340 = 0;
        uStack_330 = puVar21[1];
        local_338 = *puVar21;
        uStack_320 = puVar21[3];
        local_328 = puVar21[2];
        uStack_310 = puVar21[5];
        local_318 = puVar21[4];
        uStack_300 = puVar21[7];
        local_308 = puVar21[6];
        local_2f8 = *(undefined1 *)(puVar21 + 8);
        FUN_1005b2dd4(&local_200,local_2f0);
        FUN_1005b2dd4(&local_190,local_2f0);
        FUN_10007f314(&local_1e0,local_2f0,&DAT_100aab4f8,&DAT_100838f20);
        FUN_10007f314(&local_170,local_2f0,&DAT_100aab4f8,&DAT_100838f20);
        puVar6 = &local_340;
        FUN_100040bb4(puVar6,&DAT_100aab4f8,&DAT_100838f20);
LAB_100571730:
        uVar22 = uStack_188;
        lVar4 = local_190;
        uVar2 = (uint)(uStack_1f8 >> 0x20);
        uVar13 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_188 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar11 = (int)local_200;
        if (uStack_1f8 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((local_200 != 0) || (uStack_1f8 != 0xc000000000000000)) || (uStack_188 >> 0x3e < 3))
             || ((uVar15 = 0, local_190 != 0 || (uStack_188 != 0xc000000000000000))))
          goto joined_r0x0001005718f4;
LAB_100571888:
          FUN_1005b2e08(&local_190);
          FUN_1005b2e08(&local_200);
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar13 == 0) {
              uVar15 = uStack_1f8 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_200 >> 0x20);
              if (SBORROW4(iVar14,iVar11)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b0c);
                (*pcVar5)();
              }
              uVar15 = (ulong)(iVar14 - iVar11);
            }
joined_r0x0001005718f4:
            if (1 < uVar3 >> 0x1e) goto LAB_100571794;
LAB_1005717c8:
            if (uVar16 == 0) {
              uVar17 = uStack_188 >> 0x30 & 0xff;
            }
            else {
              iVar14 = (int)((ulong)local_190 >> 0x20);
              if (SBORROW4(iVar14,(int)local_190)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b04);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar14 - (int)local_190);
            }
          }
          else {
            if (uVar13 == 2) {
              uVar15 = *(long *)(local_200 + 0x18) - *(long *)(local_200 + 0x10);
              if (SBORROW8(*(long *)(local_200 + 0x18),*(long *)(local_200 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b10);
                (*pcVar5)();
              }
              goto joined_r0x0001005718f4;
            }
            uVar15 = 0;
            if (uVar16 < 2) goto LAB_1005717c8;
LAB_100571794:
            if (uVar16 != 2) {
              if (uVar15 != 0) goto LAB_100571a44;
              goto LAB_100571888;
            }
            uVar17 = *(long *)(local_190 + 0x18) - *(long *)(local_190 + 0x10);
            if (SBORROW8(*(long *)(local_190 + 0x18),*(long *)(local_190 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b08);
              (*pcVar5)();
            }
          }
          if (uVar15 != uVar17) goto LAB_100571a44;
          if ((long)uVar15 < 1) goto LAB_100571888;
          if (uVar13 < 2) {
            if (uVar13 != 0) {
              lVar18 = (long)iVar11;
              puVar7 = (ulong *)((local_200 >> 0x20) - lVar18);
              if (local_200 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b14);
                (*pcVar5)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (puVar6 == (ulong *)0x0) {
                puVar19 = (ulong *)0x0;
              }
              else {
                puVar8 = puVar6;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar18,(long)puVar8)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b20);
                  (*pcVar5)();
                }
                puVar19 = (ulong *)((lVar18 - (long)puVar8) + (long)puVar6);
                puVar6 = puVar8;
              }
LAB_100571994:
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)puVar7 <= (long)puVar6) {
                puVar6 = puVar7;
              }
              lVar18 = 0;
              if (puVar19 != (ulong *)0x0) {
                lVar18 = (long)puVar6 + (long)puVar19;
              }
              FUN_100009038(local_2f0,puVar19,lVar18,lVar4,uVar22);
              FUN_1005b2e08(&local_190);
              FUN_1005b2e08(&local_200);
              if ((local_2f0[0] & 1) != 0) goto LAB_1005719ec;
              goto LAB_100571a00;
            }
            local_2f0[0] = (byte)local_200;
            local_2f0[1] = (byte)((ulong)local_200 >> 8);
            local_2f0[2] = (byte)((ulong)local_200 >> 0x10);
            local_2f0[3] = (byte)((ulong)local_200 >> 0x18);
            local_2f0[4] = (byte)((ulong)local_200 >> 0x20);
            local_2f0[5] = (byte)((ulong)local_200 >> 0x28);
            local_2f0[6] = (byte)((ulong)local_200 >> 0x30);
            local_2f0[7] = (byte)((ulong)local_200 >> 0x38);
            local_2f0[8] = (byte)uStack_1f8;
            local_2f0[9] = (byte)(uStack_1f8 >> 8);
            local_2f0[10] = (byte)(uStack_1f8 >> 0x10);
            local_2f0[0xb] = (byte)(uStack_1f8 >> 0x18);
            local_2f0[0xc] = (byte)(uStack_1f8 >> 0x20);
            local_2f0[0xd] = (byte)(uStack_1f8 >> 0x28);
            pbVar10 = local_2f0 + (uStack_1f8 >> 0x30 & 0xff);
          }
          else {
            if (uVar13 == 2) {
              lVar18 = *(long *)(local_200 + 0x10);
              lVar1 = *(long *)(local_200 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              puVar19 = puVar6;
              if (puVar6 != (ulong *)0x0) {
                puVar7 = puVar6;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar18,(long)puVar7)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b1c);
                  (*pcVar5)();
                }
                puVar19 = (ulong *)((lVar18 - (long)puVar7) + (long)puVar6);
                puVar6 = puVar7;
              }
              puVar7 = (ulong *)(lVar1 - lVar18);
              if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100571b18);
                (*pcVar5)();
              }
              goto LAB_100571994;
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
            pbVar10 = local_2f0;
          }
          FUN_100009038(&local_340,local_2f0,pbVar10,local_190,uStack_188);
          FUN_1005b2e08(&local_190);
          FUN_1005b2e08(&local_200);
          if ((local_340 & 1) == 0) goto LAB_100571a00;
        }
LAB_1005719ec:
        if (lVar12 == 0) break;
        puVar20 = puVar20 + 0xe;
        puVar21 = puVar21 + 0xe;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
LAB_100571a00:
    uVar9 = 0;
  }
LAB_100571a0c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar9);
}

