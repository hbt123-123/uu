// rea decompile_all
// name: thunk_FUN_1005a4950
// address: 0x100591288
// body: available
// range: 0x100591288-0x10059128b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a4950(long *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined8 uStack_2ef;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 uStack_210;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  
  lVar6 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar6 == 0) goto LAB_1005a49ac;
  }
  else if ((lVar6 != 0) &&
          ((uVar3 = param_1[3], uVar3 == param_2[3] && param_1[4] == lVar6 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)))) {
LAB_1005a49ac:
    lVar8 = *param_1;
    lVar7 = *param_2;
    lVar6 = *(long *)(lVar8 + 0x10);
    if (lVar6 == *(long *)(lVar7 + 0x10)) {
      if (lVar6 != 0 && lVar8 != lVar7) {
        puVar9 = (undefined8 *)(lVar8 + 0x20);
        puVar10 = (undefined8 *)(lVar7 + 0x20);
        do {
          uStack_168 = puVar9[1];
          uStack_170 = *puVar9;
          uStack_158 = puVar9[3];
          uStack_160 = puVar9[2];
          uStack_148 = puVar9[5];
          uStack_150 = puVar9[4];
          uStack_138 = puVar9[7];
          uStack_140 = puVar9[6];
          uStack_128 = puVar9[9];
          uStack_130 = puVar9[8];
          uStack_118 = puVar9[0xb];
          uStack_120 = puVar9[10];
          uStack_108 = puVar9[0xd];
          uStack_110 = puVar9[0xc];
          uStack_100 = puVar9[0xe];
          uStack_ee = *(undefined8 *)((long)puVar9 + 0x82);
          uStack_f0 = (undefined2)((ulong)*(undefined8 *)((long)puVar9 + 0x7a) >> 0x30);
          uStack_f8 = (undefined2)puVar9[0xf];
          uStack_f6 = (undefined6)((ulong)puVar9[0xf] >> 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1005a4cf4);
            (*pcVar1)();
          }
          uStack_d8 = puVar10[1];
          uStack_e0 = *puVar10;
          uStack_c8 = puVar10[3];
          uStack_d0 = puVar10[2];
          uStack_b8 = puVar10[5];
          uStack_c0 = puVar10[4];
          uStack_a8 = puVar10[7];
          uStack_b0 = puVar10[6];
          uStack_98 = puVar10[9];
          uStack_a0 = puVar10[8];
          uStack_88 = puVar10[0xb];
          uStack_90 = puVar10[10];
          uStack_78 = puVar10[0xd];
          uStack_80 = puVar10[0xc];
          uStack_70 = puVar10[0xe];
          uStack_5e = *(undefined8 *)((long)puVar10 + 0x82);
          uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)puVar10 + 0x7a) >> 0x30);
          uStack_68 = (undefined2)puVar10[0xf];
          uStack_66 = (undefined6)((ulong)puVar10[0xf] >> 0x10);
          FUN_1005b2b44(&uStack_170,&lStack_2e0);
          FUN_1005b2b44(&uStack_e0,&lStack_2e0);
          puVar4 = &uStack_170;
          FUN_1005a4cf4(puVar4,&uStack_e0);
          FUN_1005b2b78(&uStack_e0);
          FUN_1005b2b78(&uStack_170);
          if (((ulong)puVar4 & 1) == 0) goto LAB_1005a4c54;
          puVar10 = puVar10 + 0x12;
          puVar9 = puVar9 + 0x12;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lStack_1e8 = param_1[8];
      lStack_1f0 = param_1[7];
      lStack_1d8 = param_1[10];
      lStack_1e0 = param_1[9];
      lStack_1c8 = param_1[0xc];
      lStack_1d0 = param_1[0xb];
      uStack_1c0 = (undefined1)param_1[0xd];
      lStack_1f8 = param_1[6];
      lVar6 = param_1[5];
      lStack_238 = param_2[8];
      lStack_240 = param_2[7];
      lStack_228 = param_2[10];
      lStack_230 = param_2[9];
      lStack_218 = param_2[0xc];
      lStack_220 = param_2[0xb];
      uStack_210 = (undefined1)param_2[0xd];
      lStack_248 = param_2[6];
      lStack_298 = param_2[5];
      lStack_250 = lStack_298;
      lStack_200 = lVar6;
      if (lVar6 == 0) {
        if (lStack_298 == 0) {
          lStack_2e0 = 0;
          lStack_2d0 = param_1[7];
          lStack_2d8 = param_1[6];
          lStack_2c0 = param_1[9];
          lStack_2c8 = param_1[8];
          lStack_2b8 = param_1[10];
          uStack_2b0 = (undefined1)param_1[0xb];
          uStack_2a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
          uStack_2a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
          uStack_2af = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
          uStack_2a8 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
          FUN_10007f314(&lStack_200,&lStack_1b8,&DAT_100aab4a8,&DAT_10083e020);
          FUN_10007f314(&lStack_250,&lStack_1b8,&DAT_100aab4a8,&DAT_10083e020);
          FUN_100040bb4(&lStack_2e0,&DAT_100aab4a8,&DAT_10083e020);
LAB_1005a4ce0:
          lVar6 = param_1[1];
          FUN_1000094a4(lVar6,param_1[2],param_2[1],param_2[2]);
          uVar2 = (uint)lVar6;
          goto LAB_1005a4c58;
        }
      }
      else if (lStack_298 != 0) {
        lStack_360 = param_2[7];
        lStack_368 = param_2[6];
        lStack_350 = param_2[9];
        lStack_358 = param_2[8];
        lStack_348 = param_2[10];
        uStack_340 = (undefined1)param_2[0xb];
        uStack_337 = (undefined7)*(undefined8 *)((long)param_2 + 0x61);
        uStack_330 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x61) >> 0x38);
        uStack_33f = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
        uStack_338 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
        uStack_2a8 = uStack_338;
        uStack_2a7 = uStack_337;
        uStack_2b0 = uStack_340;
        uStack_2af = uStack_33f;
        uStack_2a0 = uStack_330;
        lStack_1a8 = param_1[7];
        lStack_1b0 = param_1[6];
        lStack_198 = param_1[9];
        lStack_1a0 = param_1[8];
        lStack_190 = param_1[10];
        uStack_17f = *(undefined8 *)((long)param_1 + 0x61);
        uStack_180 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
        uStack_188 = (undefined1)param_1[0xb];
        uStack_187 = (undefined7)((ulong)param_1[0xb] >> 8);
        lStack_370 = lStack_298;
        lStack_2e0 = lStack_298;
        lStack_2d8 = lStack_368;
        lStack_2d0 = lStack_360;
        lStack_2c8 = lStack_358;
        lStack_2c0 = lStack_350;
        lStack_2b8 = lStack_348;
        lStack_1b8 = lVar6;
        FUN_10007f314(&lStack_200,&lStack_328,&DAT_100aab4a8,&DAT_10083e020);
        FUN_10007f314(&lStack_250,&lStack_328,&DAT_100aab4a8,&DAT_10083e020);
        plVar5 = &lStack_1b8;
        FUN_1005a6b28(plVar5,&lStack_2e0);
        FUN_100040bb4(&lStack_370,&DAT_100aab4a8,&DAT_10083e020);
        lStack_318 = param_1[7];
        lStack_320 = param_1[6];
        lStack_308 = param_1[9];
        lStack_310 = param_1[8];
        lStack_300 = param_1[10];
        uStack_2f8 = (undefined1)param_1[0xb];
        uStack_2ef = *(undefined8 *)((long)param_1 + 0x61);
        uStack_2f7 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
        uStack_2f0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
        lStack_328 = lVar6;
        FUN_100040bb4(&lStack_328,&DAT_100aab4a8,&DAT_10083e020);
        if (((ulong)plVar5 & 1) != 0) goto LAB_1005a4ce0;
        goto LAB_1005a4c54;
      }
      lStack_2d0 = param_1[7];
      lStack_2d8 = param_1[6];
      lStack_2c0 = param_1[9];
      lStack_2c8 = param_1[8];
      lStack_2b8 = param_1[10];
      uStack_2b0 = (undefined1)param_1[0xb];
      uStack_2a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x61);
      uStack_2a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x61) >> 0x38);
      uStack_2af = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
      uStack_2a8 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
      lStack_288 = param_2[7];
      lStack_290 = param_2[6];
      lStack_278 = param_2[9];
      lStack_280 = param_2[8];
      lStack_270 = param_2[10];
      uStack_268 = (undefined1)param_2[0xb];
      uStack_25f = *(undefined8 *)((long)param_2 + 0x61);
      uStack_267 = (undefined7)*(undefined8 *)((long)param_2 + 0x59);
      uStack_260 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x59) >> 0x38);
      lStack_2e0 = lVar6;
      FUN_10007f314(&lStack_200,&lStack_1b8,&DAT_100aab4a8,&DAT_10083e020);
      FUN_10007f314(&lStack_250,&lStack_1b8,&DAT_100aab4a8,&DAT_10083e020);
      FUN_100040bb4(&lStack_2e0,&DAT_100aad0b8,&DAT_10083cc30);
    }
  }
LAB_1005a4c54:
  uVar2 = 0;
LAB_1005a4c58:
  return uVar2 & 1;
}

