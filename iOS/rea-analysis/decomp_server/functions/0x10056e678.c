// rea decompile_all
// name: FUN_10056e678
// address: 0x10056e678
// body: available
// range: 0x10056e678-0x100570073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100570070 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056e678(long param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined7 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  double dVar37;
  ulong uVar38;
  ulong uVar39;
  undefined4 uVar40;
  undefined2 uVar41;
  ulong uVar42;
  double dVar43;
  double dVar44;
  code *pcVar45;
  ulong uVar46;
  undefined8 *puVar47;
  double dVar48;
  byte *pbVar49;
  byte *pbVar50;
  byte *pbVar51;
  undefined8 uVar52;
  undefined *puVar53;
  undefined *puVar54;
  uint uVar55;
  uint uVar56;
  int iVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  ulong uVar62;
  char cVar63;
  uint uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  int iVar69;
  ulong uVar70;
  byte bVar71;
  long lVar72;
  undefined8 *puVar73;
  long lVar74;
  ulong uVar75;
  long lVar76;
  undefined8 *puVar77;
  ulong *puVar78;
  long lVar79;
  undefined8 uVar80;
  ulong local_488;
  ulong uStack_480;
  ulong local_478;
  ulong uStack_470;
  ulong local_468;
  ulong uStack_460;
  long local_458;
  undefined8 uStack_450;
  double local_448;
  double local_440;
  ulong uStack_438;
  ulong local_430;
  undefined8 uStack_428;
  ulong local_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 local_410;
  undefined7 uStack_40f;
  byte bStack_408;
  undefined7 uStack_407;
  byte local_400 [14];
  undefined2 uStack_3f2;
  ulong local_3f0;
  ulong local_3e8;
  undefined8 local_3e0;
  ulong uStack_3d8;
  ulong local_3d0;
  ulong local_3c8;
  ulong local_3c0;
  double dStack_3b8;
  double local_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong local_398;
  ulong local_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  byte bStack_378;
  undefined7 uStack_377;
  ulong local_370;
  ulong uStack_368;
  ulong local_360;
  ulong uStack_358;
  ulong local_350;
  ulong local_348;
  ulong local_340;
  ulong uStack_338;
  double local_330;
  double local_328;
  ulong local_320;
  ulong uStack_318;
  undefined8 local_310;
  ulong uStack_308;
  ulong local_300;
  undefined2 local_2f8;
  undefined6 uStack_2f6;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  byte bStack_2e8;
  byte bStack_2e7;
  ulong local_2e0;
  ulong uStack_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  ulong local_2c0;
  ulong uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  double local_2a0;
  double dStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong local_280;
  ulong uStack_278;
  ulong local_270;
  undefined2 uStack_268;
  undefined6 local_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  byte bStack_258;
  byte bStack_257;
  long local_250;
  long lStack_248;
  ulong local_240;
  ulong local_238;
  long local_230;
  double dStack_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  ulong local_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  byte bStack_1e8;
  long local_1e0;
  long lStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  long local_1c0;
  double local_1b8;
  double local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined1 uStack_188;
  undefined7 local_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  lVar72 = *(long *)(param_1 + 0x10);
  if (lVar72 == *(long *)(param_2 + 0x10)) {
    if ((lVar72 != 0) && (param_1 != param_2)) {
      lVar74 = 0;
      do {
        plVar1 = (long *)(param_1 + 0x20 + lVar74 * 0x70);
        dStack_228 = (double)plVar1[5];
        local_230 = plVar1[4];
        local_218 = plVar1[7];
        local_220 = plVar1[6];
        uStack_208 = plVar1[9];
        local_210 = plVar1[8];
        local_200 = plVar1[10];
        local_1f8 = (undefined1)plVar1[0xb];
        uStack_1ef = (undefined7)*(undefined8 *)((long)plVar1 + 0x61);
        bStack_1e8 = (byte)((ulong)*(undefined8 *)((long)plVar1 + 0x61) >> 0x38);
        uStack_1f7 = (undefined7)*(undefined8 *)((long)plVar1 + 0x59);
        uStack_1f0 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x59) >> 0x38);
        lStack_248 = plVar1[1];
        local_250 = *plVar1;
        uVar75 = plVar1[3];
        local_240 = plVar1[2];
        plVar1 = (long *)(param_2 + 0x20 + lVar74 * 0x70);
        lStack_1d8 = plVar1[1];
        local_1e0 = *plVar1;
        uStack_1c8 = plVar1[3];
        local_1d0 = plVar1[2];
        local_1b8 = (double)plVar1[5];
        local_1c0 = plVar1[4];
        uStack_1a8 = plVar1[7];
        local_1b0 = (double)plVar1[6];
        uStack_198 = plVar1[9];
        local_1a0 = plVar1[8];
        uStack_190 = plVar1[10];
        uStack_17f = *(undefined8 *)((long)plVar1 + 0x61);
        uStack_180 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x59) >> 0x38);
        uStack_188 = (undefined1)plVar1[0xb];
        local_187 = (undefined7)((ulong)plVar1[0xb] >> 8);
        local_238 = uVar75;
        if (local_230 == 0) {
          if (local_1c0 != 0) goto LAB_10056ff04;
        }
        else if ((local_1c0 == 0) ||
                (((uVar75 != uStack_1c8 || (local_230 != local_1c0)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar75 & 1) == 0)))) goto LAB_10056ff04;
        lVar79 = local_1e0;
        lVar61 = local_250;
        uVar75 = *(ulong *)(local_250 + 0x10);
        if (uVar75 != *(ulong *)(local_1e0 + 0x10)) goto LAB_10056ff04;
        if ((uVar75 != 0) && (local_250 != local_1e0)) {
          FUN_1005b2fa8(&local_250,local_400);
          FUN_1005b2fa8(&local_1e0,local_400);
          if (*(long *)(lVar61 + 0x10) == 0) {
LAB_100570014:
                    /* WARNING: Does not return */
            pcVar45 = (code *)SoftwareBreakpoint(1,0x100570018);
            (*pcVar45)();
          }
          uVar68 = 1;
          uVar70 = 0;
          do {
            uVar58 = uVar68;
            puVar78 = (ulong *)(lVar61 + 0x20 + uVar70 * 0x90);
            uStack_358 = puVar78[3];
            uVar68 = puVar78[2];
            local_348 = puVar78[5];
            local_350 = puVar78[4];
            uStack_338 = puVar78[7];
            local_340 = puVar78[6];
            local_328 = (double)puVar78[9];
            local_330 = (double)puVar78[8];
            uStack_318 = puVar78[0xb];
            local_320 = puVar78[10];
            uStack_308 = puVar78[0xd];
            local_310 = puVar78[0xc];
            local_300 = puVar78[0xe];
            uVar52 = *(undefined8 *)((long)puVar78 + 0x82);
            uStack_2ee = (undefined6)uVar52;
            bStack_2e8 = (byte)((ulong)uVar52 >> 0x30);
            bStack_2e7 = (byte)((ulong)uVar52 >> 0x38);
            uStack_2f0 = (undefined2)((ulong)*(undefined8 *)((long)puVar78 + 0x7a) >> 0x30);
            local_2f8 = (undefined2)puVar78[0xf];
            uStack_2f6 = (undefined6)(puVar78[0xf] >> 0x10);
            uStack_368 = puVar78[1];
            local_370 = *puVar78;
            local_360 = uVar68;
            if (*(ulong *)(lVar79 + 0x10) <= uVar70) {
                    /* WARNING: Does not return */
              pcVar45 = (code *)SoftwareBreakpoint(1,0x100570020);
              (*pcVar45)();
            }
            puVar78 = (ulong *)(lVar79 + 0x20 + uVar70 * 0x90);
            uStack_2d8 = puVar78[1];
            local_2e0 = *puVar78;
            uStack_2c8 = puVar78[3];
            local_2d0 = puVar78[2];
            uStack_2b8 = puVar78[5];
            local_2c0 = puVar78[4];
            uStack_2a8 = puVar78[7];
            local_2b0 = puVar78[6];
            dStack_298 = (double)puVar78[9];
            local_2a0 = (double)puVar78[8];
            uStack_288 = puVar78[0xb];
            local_290 = puVar78[10];
            uStack_278 = puVar78[0xd];
            local_280 = puVar78[0xc];
            local_270 = puVar78[0xe];
            uVar52 = *(undefined8 *)((long)puVar78 + 0x82);
            uStack_25e = (undefined6)uVar52;
            bStack_258 = (byte)((ulong)uVar52 >> 0x30);
            bStack_257 = (byte)((ulong)uVar52 >> 0x38);
            uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)puVar78 + 0x7a) >> 0x30);
            uStack_268 = (undefined2)puVar78[0xf];
            local_266 = (undefined6)(puVar78[0xf] >> 0x10);
            if (uStack_358 == 0) {
              if (uStack_2c8 != 0) goto LAB_10056fef4;
            }
            else if ((uStack_2c8 == 0) ||
                    (((uVar68 != local_2d0 || (uStack_358 != uStack_2c8)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar68 & 1) == 0)))) goto LAB_10056fef4;
            if (local_348 == 0) {
              if (uStack_2b8 != 0) goto LAB_10056fef4;
            }
            else if ((uStack_2b8 == 0) ||
                    (((local_350 != local_2c0 || (local_348 != uStack_2b8)) &&
                     (uVar68 = local_350,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), (uVar68 & 1) == 0)))) goto LAB_10056fef4;
            if (uStack_338 == 0) {
              if (uStack_2a8 != 0) goto LAB_10056fef4;
            }
            else if ((uStack_2a8 == 0) ||
                    (((local_340 != local_2b0 || (uStack_338 != uStack_2a8)) &&
                     (uVar68 = local_340,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (), (uVar68 & 1) == 0)))) goto LAB_10056fef4;
            uVar65 = local_270;
            uVar59 = uStack_278;
            uVar67 = uStack_288;
            uVar62 = local_290;
            dVar44 = dStack_298;
            dVar43 = local_2a0;
            uVar42 = local_300;
            uVar66 = uStack_308;
            uVar60 = local_310;
            uVar39 = uStack_318;
            uVar38 = local_320;
            dVar48 = local_328;
            dVar37 = local_330;
            uVar35 = uStack_3f2;
            bVar32 = local_400[0xd];
            bVar30 = local_400[0xc];
            bVar28 = local_400[0xb];
            bVar26 = local_400[10];
            bVar24 = local_400[9];
            bVar22 = local_400[8];
            bVar20 = local_400[7];
            bVar18 = local_400[6];
            bVar16 = local_400[5];
            bVar14 = local_400[4];
            bVar12 = local_400[3];
            bVar10 = local_400[2];
            bVar8 = local_400[1];
            bVar6 = local_400[0];
            bVar5 = bStack_408;
            uVar4 = local_410;
            uVar3 = uStack_417;
            uVar2 = uStack_418;
            bVar34 = (byte)local_310;
            cVar63 = local_310._1_1_;
            uVar40 = local_310._2_4_;
            uVar41 = local_310._6_2_;
            uVar68 = CONCAT62(uStack_2f6,local_2f8);
            uVar70 = CONCAT62(uStack_2ee,uStack_2f0);
            local_410 = (undefined1)uStack_268;
            bStack_408 = (byte)uStack_260;
            uStack_418 = (undefined1)local_270;
            uStack_417 = (undefined7)(local_270 >> 8);
            uStack_3f2 = (undefined2)((ulong)local_328 >> 0x30);
            uVar36 = uStack_3f2;
            local_400[8] = SUB81(local_328,0);
            bVar23 = local_400[8];
            local_400[9] = (byte)((ulong)local_328 >> 8);
            bVar25 = local_400[9];
            local_400[10] = (byte)((ulong)local_328 >> 0x10);
            bVar27 = local_400[10];
            local_400[0xb] = (byte)((ulong)local_328 >> 0x18);
            bVar29 = local_400[0xb];
            local_400[0xc] = (byte)((ulong)local_328 >> 0x20);
            bVar31 = local_400[0xc];
            local_400[0xd] = (byte)((ulong)local_328 >> 0x28);
            bVar33 = local_400[0xd];
            local_400[0] = SUB81(local_330,0);
            bVar7 = local_400[0];
            local_400[1] = (byte)((ulong)local_330 >> 8);
            bVar9 = local_400[1];
            local_400[2] = (byte)((ulong)local_330 >> 0x10);
            bVar11 = local_400[2];
            local_400[3] = (byte)((ulong)local_330 >> 0x18);
            bVar13 = local_400[3];
            local_400[4] = (byte)((ulong)local_330 >> 0x20);
            bVar15 = local_400[4];
            local_400[5] = (byte)((ulong)local_330 >> 0x28);
            bVar17 = local_400[5];
            local_400[6] = (byte)((ulong)local_330 >> 0x30);
            bVar19 = local_400[6];
            local_400[7] = (byte)((ulong)local_330 >> 0x38);
            bVar21 = local_400[7];
            if (local_330 != 0.0) {
              if (local_2a0 == 0.0) goto LAB_10056fb94;
              local_448 = local_2a0;
              uStack_438 = local_290;
              local_440 = dStack_298;
              uStack_407 = (undefined7)(CONCAT62(uStack_25e,uStack_260) >> 8);
              uStack_40f = (undefined7)(CONCAT62(local_266,uStack_268) >> 8);
              local_420 = uStack_278;
              uStack_428 = local_280;
              uVar46 = uStack_428;
              local_430 = uStack_288;
              uStack_428._0_1_ = (byte)local_280;
              uStack_428._1_1_ = (char)(local_280 >> 8);
              lVar76 = CONCAT71(uStack_40f,local_410);
              uVar52 = CONCAT71(uStack_407,bStack_408);
              uStack_428 = uVar46;
              if ((byte)local_310 == 2) {
                if ((byte)uStack_428 != 2) goto LAB_10056fab8;
LAB_10056ea98:
                if (local_310._1_1_ == '\x03') {
                  if (uStack_428._1_1_ == '\x03') goto LAB_10056eabc;
                  local_400[0] = bVar6;
                  local_400[1] = bVar8;
                  local_400[2] = bVar10;
                  local_400[3] = bVar12;
                  local_400[4] = bVar14;
                  local_400[5] = bVar16;
                  local_400[6] = bVar18;
                  local_400[7] = bVar20;
                  local_400[8] = bVar22;
                  local_400[9] = bVar24;
                  local_400[10] = bVar26;
                  local_400[0xb] = bVar28;
                  local_400[0xc] = bVar30;
                  local_400[0xd] = bVar32;
                  uStack_3f2 = uVar35;
                  FUN_1005b2b44(&local_370,local_400);
                  FUN_1005b2b44(&local_2e0,local_400);
                  FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
                  FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
                  FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
                  cVar63 = '\x03';
                }
                else {
                  if ((uStack_428._1_1_ == '\x03') || (local_310._1_1_ != uStack_428._1_1_))
                  goto LAB_10056fab8;
LAB_10056eabc:
                  if (uVar68 == 0) {
                    if (lVar76 != 0) goto LAB_10056fcc8;
                    local_400[0] = bVar6;
                    local_400[1] = bVar8;
                    local_400[2] = bVar10;
                    local_400[3] = bVar12;
                    local_400[4] = bVar14;
                    local_400[5] = bVar16;
                    local_400[6] = bVar18;
                    local_400[7] = bVar20;
                    local_400[8] = bVar22;
                    local_400[9] = bVar24;
                    local_400[10] = bVar26;
                    local_400[0xb] = bVar28;
                    local_400[0xc] = bVar30;
                    local_400[0xd] = bVar32;
                    uStack_3f2 = uVar35;
                    FUN_1005b2b44(&local_370,local_400);
                    FUN_1005b2b44(&local_2e0,local_400);
                    FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
                    FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
                    FUN_1005a7f54(uVar66,uVar42,0,uVar70);
                    FUN_1005a7f54(uVar59,uVar65,0,uVar52);
                    FUN_100541944(uVar66,uVar42,0,uVar70);
LAB_10056ec70:
                    lVar76 = *(long *)((long)dVar37 + 0x10);
                    if (lVar76 != *(long *)((long)dVar43 + 0x10)) {
LAB_10056fa90:
                      FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
                      goto LAB_10056fb30;
                    }
                    if ((lVar76 != 0) && (dVar37 != dVar43)) {
                      puVar77 = (undefined8 *)((long)dVar37 + 0x20);
                      puVar73 = (undefined8 *)((long)dVar43 + 0x20);
                      do {
                        uStack_168 = puVar77[1];
                        local_170 = *puVar77;
                        uStack_158 = puVar77[3];
                        uStack_160 = puVar77[2];
                        uStack_148 = puVar77[5];
                        local_150 = puVar77[4];
                        uStack_138 = puVar77[7];
                        uStack_140 = puVar77[6];
                        uStack_128 = puVar77[9];
                        local_130 = puVar77[8];
                        uStack_118 = puVar77[0xb];
                        local_120 = puVar77[10];
                        uStack_108 = puVar77[0xd];
                        uStack_110 = puVar77[0xc];
                        local_100 = puVar77[0xe];
                        if (lVar76 == 0) {
                    /* WARNING: Does not return */
                          pcVar45 = (code *)SoftwareBreakpoint(1,0x10057001c);
                          (*pcVar45)();
                        }
                        uStack_e8 = puVar73[1];
                        local_f0 = *puVar73;
                        uStack_d8 = puVar73[3];
                        uStack_e0 = puVar73[2];
                        uStack_c8 = puVar73[5];
                        local_d0 = puVar73[4];
                        uStack_b8 = puVar73[7];
                        uStack_c0 = puVar73[6];
                        uStack_a8 = puVar73[9];
                        local_b0 = puVar73[8];
                        uStack_98 = puVar73[0xb];
                        local_a0 = puVar73[10];
                        uStack_88 = puVar73[0xd];
                        uStack_90 = puVar73[0xc];
                        local_80 = puVar73[0xe];
                        FUN_1005b2964(&local_170,local_400);
                        FUN_1005b2964(&local_f0,local_400);
                        puVar47 = &local_170;
                        FUN_1005a3ed4(puVar47,&local_f0);
                        FUN_1005b2998(&local_f0);
                        FUN_1005b2998(&local_170);
                        if (((ulong)puVar47 & 1) == 0) goto LAB_10056fa90;
                        puVar77 = puVar77 + 0xf;
                        puVar73 = puVar73 + 0xf;
                        lVar76 = lVar76 + -1;
                      } while (lVar76 != 0);
                    }
                    if (uVar38 >> 0x3e == 3) {
                      uVar59 = 0;
                      if ((((dVar48 != 0.0) || (uVar38 != 0xc000000000000000)) ||
                          (uVar62 >> 0x3e < 3)) ||
                         ((uVar59 = 0, dVar44 != 0.0 || (uVar62 != 0xc000000000000000))))
                      goto LAB_10056ede4;
                      goto LAB_10056ee60;
                    }
                    uVar56 = (uint)(uVar38 >> 0x3e);
                    if (uVar56 == 0) {
                      uVar59 = uVar38 >> 0x30 & 0xff;
                    }
                    else if (uVar56 == 1) {
                      iVar57 = (int)((ulong)dVar48 >> 0x20);
                      if (SBORROW4(iVar57,SUB84(dVar48,0))) {
                    /* WARNING: Does not return */
                        pcVar45 = (code *)SoftwareBreakpoint(1,0x100570050);
                        (*pcVar45)();
                      }
                      uVar59 = (ulong)(iVar57 - SUB84(dVar48,0));
                    }
                    else {
                      uVar59 = *(long *)((long)dVar48 + 0x18) - *(long *)((long)dVar48 + 0x10);
                      if (SBORROW8(*(long *)((long)dVar48 + 0x18),*(long *)((long)dVar48 + 0x10))) {
                    /* WARNING: Does not return */
                        pcVar45 = (code *)SoftwareBreakpoint(1,0x10057004c);
                        (*pcVar45)();
                      }
                    }
LAB_10056ede4:
                    uVar56 = (uint)(uVar62 >> 0x20);
                    uVar64 = uVar56 >> 0x1e;
                    if (uVar56 >> 0x1e < 2) {
                      if (uVar64 == 0) {
                        uVar65 = uVar62 >> 0x30 & 0xff;
                      }
                      else {
                        iVar57 = (int)((ulong)dVar44 >> 0x20);
                        if (SBORROW4(iVar57,SUB84(dVar44,0))) {
                    /* WARNING: Does not return */
                          pcVar45 = (code *)SoftwareBreakpoint(1,0x10057003c);
                          (*pcVar45)();
                        }
                        uVar65 = (ulong)(iVar57 - SUB84(dVar44,0));
                      }
LAB_10056ee20:
                      if (uVar59 == uVar65) {
                        if (0 < (long)uVar59) {
                          FUN_100008184(dVar44,uVar62);
                          FUN_100009264(dVar48,uVar38,dVar44,uVar62);
                          if (((ulong)dVar48 & 1) == 0) goto LAB_10056fd84;
                        }
LAB_10056ee60:
                        uVar62 = uVar39;
                        thunk_FUN_100511c8c(uVar39,uVar67);
                        FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
                        local_3f0 = uVar38;
                        local_3e8 = uVar39;
                        local_3e0 = uVar60;
                        uStack_3d8 = uVar66;
                        local_3d0 = uVar42;
                        local_400[0] = bVar7;
                        local_400[1] = bVar9;
                        local_400[2] = bVar11;
                        local_400[3] = bVar13;
                        local_400[4] = bVar15;
                        local_400[5] = bVar17;
                        local_400[6] = bVar19;
                        local_400[7] = bVar21;
                        local_400[8] = bVar23;
                        local_400[9] = bVar25;
                        local_400[10] = bVar27;
                        local_400[0xb] = bVar29;
                        local_400[0xc] = bVar31;
                        local_400[0xd] = bVar33;
                        uStack_3f2 = uVar36;
                        local_3c8 = uVar68;
                        local_3c0 = uVar70;
                        FUN_100040bb4(local_400,&DAT_100aab4a0,&DAT_100837c10);
                        if ((uVar62 & 1) != 0) goto LAB_10056eefc;
                        goto LAB_10056fb80;
                      }
                    }
                    else {
                      if (uVar64 == 2) {
                        uVar65 = *(long *)((long)dVar44 + 0x18) - *(long *)((long)dVar44 + 0x10);
                        if (SBORROW8(*(long *)((long)dVar44 + 0x18),*(long *)((long)dVar44 + 0x10)))
                        {
                    /* WARNING: Does not return */
                          pcVar45 = (code *)SoftwareBreakpoint(1,0x100570040);
                          (*pcVar45)();
                        }
                        goto LAB_10056ee20;
                      }
                      if (uVar59 == 0) goto LAB_10056ee60;
                    }
LAB_10056fd84:
                    FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
                  }
                  else {
                    if (lVar76 == 0) {
LAB_10056fcc8:
                      local_488 = uStack_308;
                      uStack_480 = local_300;
                      local_468 = uStack_278;
                      local_478 = uVar68;
                      uStack_470 = uVar70;
                      uStack_460 = local_270;
                      local_458 = lVar76;
                      uStack_450 = uVar52;
                      local_400[0] = bVar6;
                      local_400[1] = bVar8;
                      local_400[2] = bVar10;
                      local_400[3] = bVar12;
                      local_400[4] = bVar14;
                      local_400[5] = bVar16;
                      local_400[6] = bVar18;
                      local_400[7] = bVar20;
                      local_400[8] = bVar22;
                      local_400[9] = bVar24;
                      local_400[10] = bVar26;
                      local_400[0xb] = bVar28;
                      local_400[0xc] = bVar30;
                      local_400[0xd] = bVar32;
                      uStack_3f2 = uVar35;
                      FUN_1005b2b44(&local_370,local_400);
                      FUN_1005b2b44(&local_2e0,local_400);
                      FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
                      FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
                      FUN_1005a7f54(uVar66,uVar42,uVar68,uVar70);
                      FUN_1005a7f54(uVar59,uVar65,lVar76,uVar52);
                      FUN_100040bb4(&local_488,&DAT_100aad018,&DAT_10083cbf8);
                    }
                    else {
                      local_400[0] = bVar6;
                      local_400[1] = bVar8;
                      local_400[2] = bVar10;
                      local_400[3] = bVar12;
                      local_400[4] = bVar14;
                      local_400[5] = bVar16;
                      local_400[6] = bVar18;
                      local_400[7] = bVar20;
                      local_400[8] = bVar22;
                      local_400[9] = bVar24;
                      local_400[10] = bVar26;
                      local_400[0xb] = bVar28;
                      local_400[0xc] = bVar30;
                      local_400[0xd] = bVar32;
                      uStack_3f2 = uVar35;
                      FUN_1005b2b44(&local_370,local_400);
                      FUN_1005b2b44(&local_2e0,local_400);
                      FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
                      FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
                      FUN_1005a7f54(uVar66,uVar42,uVar68,uVar70);
                      FUN_1005a7f54(uVar59,uVar65,lVar76,uVar52);
                      uVar46 = uVar66;
                      FUN_1005a7724(uVar66,uVar42,uVar68,uVar70,uVar59,uVar65,lVar76,uVar52);
                      FUN_100541944(uVar59,uVar65,lVar76,uVar52);
                      FUN_100541944(uVar66,uVar42,uVar68,uVar70);
                      if ((uVar46 & 1) != 0) goto LAB_10056ec70;
                    }
                    FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
                  }
                }
              }
              else {
                if (((byte)uStack_428 != 2) && ((((byte)local_310 ^ (byte)uStack_428) & 1) == 0))
                goto LAB_10056ea98;
LAB_10056fab8:
                local_400[0] = bVar6;
                local_400[1] = bVar8;
                local_400[2] = bVar10;
                local_400[3] = bVar12;
                local_400[4] = bVar14;
                local_400[5] = bVar16;
                local_400[6] = bVar18;
                local_400[7] = bVar20;
                local_400[8] = bVar22;
                local_400[9] = bVar24;
                local_400[10] = bVar26;
                local_400[0xb] = bVar28;
                local_400[0xc] = bVar30;
                local_400[0xd] = bVar32;
                uStack_3f2 = uVar35;
                FUN_1005b2b44(&local_370,local_400);
                FUN_1005b2b44(&local_2e0,local_400);
                FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
                FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
                FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
              }
LAB_10056fb30:
              local_3f0 = uVar38;
              local_3e8 = uVar39;
              local_3e0 = CONCAT26(uVar41,CONCAT42(uVar40,CONCAT11(cVar63,bVar34)));
              uStack_3d8 = uVar66;
              local_3d0 = uVar42;
              local_400[0] = bVar7;
              local_400[1] = bVar9;
              local_400[2] = bVar11;
              local_400[3] = bVar13;
              local_400[4] = bVar15;
              local_400[5] = bVar17;
              local_400[6] = bVar19;
              local_400[7] = bVar21;
              local_400[8] = bVar23;
              local_400[9] = bVar25;
              local_400[10] = bVar27;
              local_400[0xb] = bVar29;
              local_400[0xc] = bVar31;
              local_400[0xd] = bVar33;
              uStack_3f2 = uVar36;
              local_3c8 = uVar68;
              local_3c0 = uVar70;
              FUN_100040bb4(local_400,&DAT_100aab4a0,&DAT_100837c10);
LAB_10056fb80:
              FUN_1005b2b78(&local_2e0);
              FUN_1005b2b78(&local_370);
              goto LAB_10056fef4;
            }
            if (local_2a0 != 0.0) {
LAB_10056fb94:
              local_3f0 = local_320;
              local_3e8 = uStack_318;
              local_3e0 = local_310;
              uStack_3d8 = uStack_308;
              local_3d0 = local_300;
              dStack_3b8 = local_2a0;
              local_390 = uStack_278;
              uStack_377 = (undefined7)(CONCAT62(uStack_25e,uStack_260) >> 8);
              uStack_37f = (undefined7)(CONCAT62(local_266,uStack_268) >> 8);
              uStack_3a8 = local_290;
              local_3b0 = dStack_298;
              local_398 = local_280;
              uStack_3a0 = uStack_288;
              uStack_388 = uStack_418;
              uStack_418 = uVar2;
              uStack_387 = uStack_417;
              uStack_417 = uVar3;
              uStack_380 = local_410;
              local_410 = uVar4;
              bStack_378 = bStack_408;
              bStack_408 = bVar5;
              local_3c8 = uVar68;
              local_3c0 = uVar70;
              FUN_10007f314(&local_330,&local_448,&DAT_100aab4a0,&DAT_100837c10);
              FUN_10007f314(&local_2a0,&local_448,&DAT_100aab4a0,&DAT_100837c10);
              puVar53 = &DAT_100aad0b0;
              puVar54 = &DAT_10083cc28;
              goto LAB_10056feec;
            }
            local_448 = 0.0;
            local_440 = local_328;
            uStack_438 = local_320;
            local_430 = uStack_318;
            uStack_428 = local_310;
            local_420 = uStack_308;
            uStack_418 = (undefined1)local_300;
            uStack_417 = (undefined7)(local_300 >> 8);
            local_410 = (undefined1)local_2f8;
            uStack_40f = (undefined7)(uVar68 >> 8);
            bStack_408 = (byte)uStack_2f0;
            uStack_407 = (undefined7)(uVar70 >> 8);
            local_400[0] = bVar6;
            local_400[1] = bVar8;
            local_400[2] = bVar10;
            local_400[3] = bVar12;
            local_400[4] = bVar14;
            local_400[5] = bVar16;
            local_400[6] = bVar18;
            local_400[7] = bVar20;
            local_400[8] = bVar22;
            local_400[9] = bVar24;
            local_400[10] = bVar26;
            local_400[0xb] = bVar28;
            local_400[0xc] = bVar30;
            local_400[0xd] = bVar32;
            uStack_3f2 = uVar35;
            FUN_1005b2b44(&local_370,local_400);
            FUN_1005b2b44(&local_2e0,local_400);
            FUN_10007f314(&local_330,local_400,&DAT_100aab4a0,&DAT_100837c10);
            FUN_10007f314(&local_2a0,local_400,&DAT_100aab4a0,&DAT_100837c10);
            FUN_100040bb4(&local_448,&DAT_100aab4a0,&DAT_100837c10);
LAB_10056eefc:
            uVar39 = uStack_2d8;
            uVar38 = local_2e0;
            uVar70 = uStack_368;
            uVar68 = local_370;
            if (bStack_2e8 != 2) {
              if ((bStack_258 != 2) && (((bStack_2e8 ^ bStack_258) & 1) == 0)) goto LAB_10056ef28;
              goto LAB_10056fb80;
            }
            if (bStack_258 != 2) goto LAB_10056fb80;
LAB_10056ef28:
            if (bStack_2e7 != 2) {
              if ((bStack_257 != 2) && (((bStack_2e7 ^ bStack_257) & 1) == 0)) goto LAB_10056ef5c;
              goto LAB_10056fb80;
            }
            if (bStack_257 != 2) goto LAB_10056fb80;
LAB_10056ef5c:
            uVar56 = (uint)(uStack_2d8 >> 0x20);
            uVar64 = uVar56 >> 0x1e;
            if (uStack_368 >> 0x3e == 3) {
              uVar60 = 0;
              if ((((local_370 != 0) || (uStack_368 != 0xc000000000000000)) ||
                  (uStack_2d8 >> 0x3e < 3)) ||
                 ((uVar60 = 0, local_2e0 != 0 || (uStack_2d8 != 0xc000000000000000)))) {
LAB_10056efdc:
                if (1 < uVar64) goto LAB_10056f010;
LAB_10056efe4:
                if (uVar64 == 0) {
                  uVar66 = uStack_2d8 >> 0x30 & 0xff;
                }
                else {
                  iVar57 = (int)(local_2e0 >> 0x20);
                  if (SBORROW4(iVar57,(int)local_2e0)) {
                    /* WARNING: Does not return */
                    pcVar45 = (code *)SoftwareBreakpoint(1,0x100570028);
                    (*pcVar45)();
                  }
                  uVar66 = (ulong)(iVar57 - (int)local_2e0);
                }
                goto LAB_10056f024;
              }
LAB_10056f07c:
              FUN_1005b2b78(&local_2e0);
              FUN_1005b2b78(&local_370);
            }
            else {
              uVar55 = (uint)(uStack_368 >> 0x3e);
              if (uVar55 == 2) {
                uVar60 = *(long *)(local_370 + 0x18) - *(long *)(local_370 + 0x10);
                if (SBORROW8(*(long *)(local_370 + 0x18),*(long *)(local_370 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar45 = (code *)SoftwareBreakpoint(1,0x100570034);
                  (*pcVar45)();
                }
                goto LAB_10056efdc;
              }
              if (uVar55 == 1) {
                iVar57 = (int)(local_370 >> 0x20);
                if (SBORROW4(iVar57,(int)local_370)) {
                    /* WARNING: Does not return */
                  pcVar45 = (code *)SoftwareBreakpoint(1,0x100570038);
                  (*pcVar45)();
                }
                uVar60 = (ulong)(iVar57 - (int)local_370);
              }
              else {
                uVar60 = uStack_368 >> 0x30 & 0xff;
              }
              if (uVar56 >> 0x1e < 2) goto LAB_10056efe4;
LAB_10056f010:
              if (uVar64 != 2) {
                if (uVar60 != 0) goto LAB_10056fb80;
                goto LAB_10056f07c;
              }
              uVar66 = *(long *)(local_2e0 + 0x18) - *(long *)(local_2e0 + 0x10);
              if (SBORROW8(*(long *)(local_2e0 + 0x18),*(long *)(local_2e0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570024);
                (*pcVar45)();
              }
LAB_10056f024:
              if (uVar60 != uVar66) goto LAB_10056fb80;
              if ((long)uVar60 < 1) goto LAB_10056f07c;
              FUN_100008184(local_2e0,uStack_2d8);
              FUN_100009264(uVar68,uVar70,uVar38,uVar39);
              FUN_1005b2b78(&local_2e0);
              FUN_1005b2b78(&local_370);
              if ((uVar68 & 1) == 0) goto LAB_10056fef4;
            }
            if (uVar58 == uVar75) goto LAB_10056f0cc;
            uVar68 = uVar58 + 1;
            uVar70 = uVar58;
            if (*(ulong *)(lVar61 + 0x10) <= uVar58) goto LAB_100570014;
          } while( true );
        }
        FUN_1005b2fa8(&local_250,local_400);
        FUN_1005b2fa8(&local_1e0,local_400);
LAB_10056f0cc:
        uVar67 = uStack_190;
        uVar62 = uStack_198;
        uVar42 = local_1a0;
        uVar66 = uStack_1a8;
        dVar43 = local_1b0;
        dVar48 = local_1b8;
        bVar71 = bStack_1e8;
        uVar60 = local_200;
        uVar39 = uStack_208;
        uVar38 = local_210;
        uVar58 = local_218;
        uVar70 = local_220;
        dVar37 = dStack_228;
        uVar35 = uStack_3f2;
        bVar33 = local_400[0xd];
        bVar31 = local_400[0xc];
        bVar29 = local_400[0xb];
        bVar27 = local_400[10];
        bVar25 = local_400[9];
        bVar23 = local_400[8];
        bVar21 = local_400[7];
        bVar19 = local_400[6];
        bVar17 = local_400[5];
        bVar15 = local_400[4];
        bVar13 = local_400[3];
        bVar11 = local_400[2];
        bVar9 = local_400[1];
        bVar7 = local_400[0];
        bVar5 = bStack_408;
        uVar3 = uStack_40f;
        uVar75 = CONCAT71(uStack_1f7,local_1f8);
        uVar68 = CONCAT71(uStack_1ef,uStack_1f0);
        bStack_408 = (byte)((ulong)uStack_17f >> 0x38);
        bVar6 = bStack_408;
        uStack_40f = (undefined7)uStack_17f;
        uStack_3f2 = (undefined2)(local_220 >> 0x30);
        uVar36 = uStack_3f2;
        local_400[8] = (byte)local_220;
        bVar24 = local_400[8];
        local_400[9] = (byte)(local_220 >> 8);
        bVar26 = local_400[9];
        local_400[10] = (byte)(local_220 >> 0x10);
        bVar28 = local_400[10];
        local_400[0xb] = (byte)(local_220 >> 0x18);
        bVar30 = local_400[0xb];
        local_400[0xc] = (byte)(local_220 >> 0x20);
        bVar32 = local_400[0xc];
        local_400[0xd] = (byte)(local_220 >> 0x28);
        bVar34 = local_400[0xd];
        local_400[0] = SUB81(dStack_228,0);
        bVar8 = local_400[0];
        local_400[1] = (byte)((ulong)dStack_228 >> 8);
        bVar10 = local_400[1];
        local_400[2] = (byte)((ulong)dStack_228 >> 0x10);
        bVar12 = local_400[2];
        local_400[3] = (byte)((ulong)dStack_228 >> 0x18);
        bVar14 = local_400[3];
        local_400[4] = (byte)((ulong)dStack_228 >> 0x20);
        bVar16 = local_400[4];
        local_400[5] = (byte)((ulong)dStack_228 >> 0x28);
        bVar18 = local_400[5];
        local_400[6] = (byte)((ulong)dStack_228 >> 0x30);
        bVar20 = local_400[6];
        local_400[7] = (byte)((ulong)dStack_228 >> 0x38);
        bVar22 = local_400[7];
        if (dStack_228 != 0.0) {
          if (local_1b8 == 0.0) goto LAB_10056fc3c;
          uStack_438 = uStack_1a8;
          local_440 = local_1b0;
          local_410 = uStack_180;
          uStack_418 = uStack_188;
          uStack_417 = local_187;
          local_420 = uStack_190;
          local_448 = local_1b8;
          uStack_428 = uStack_198;
          local_430 = local_1a0;
          uVar59 = CONCAT71(local_187,uStack_188);
          uVar65 = CONCAT71(uStack_40f,uStack_180);
          local_400[0] = bVar7;
          local_400[1] = bVar9;
          local_400[2] = bVar11;
          local_400[3] = bVar13;
          local_400[4] = bVar15;
          local_400[5] = bVar17;
          local_400[6] = bVar19;
          local_400[7] = bVar21;
          local_400[8] = bVar23;
          local_400[9] = bVar25;
          local_400[10] = bVar27;
          local_400[0xb] = bVar29;
          local_400[0xc] = bVar31;
          local_400[0xd] = bVar33;
          uStack_3f2 = uVar35;
          if (uVar75 != 0) {
            if (uVar59 == 0) goto LAB_10056fda0;
            FUN_10007f314(&dStack_228,local_400,&DAT_100aab4a8,&DAT_10083e020);
            FUN_10007f314(&local_1b8,local_400,&DAT_100aab4a8,&DAT_10083e020);
            FUN_1005a7f54(uVar39,uVar60,uVar75,uVar68);
            FUN_1005a7f54(uVar62,uVar67,uVar59,uVar65);
            uVar46 = uVar39;
            FUN_1005a7724(uVar39,uVar60,uVar75,uVar68,uVar62,uVar67,uVar59,uVar65);
            FUN_100541944(uVar62,uVar67,uVar59,uVar65);
            FUN_100541944(uVar39,uVar60,uVar75,uVar68);
            if ((uVar46 & 1) != 0) goto LAB_10056f338;
LAB_10056ff7c:
            FUN_100040bb4(&local_448,&DAT_100aab4a8,&DAT_10083e020);
LAB_10056feb0:
            local_3f0 = uVar58;
            local_3e8 = uVar38;
            local_3e0 = uVar39;
            uStack_3d8 = uVar60;
            local_3c0 = CONCAT71(local_3c0._1_7_,bVar71);
            puVar53 = &DAT_100aab4a8;
            puVar54 = &DAT_10083e020;
            local_400[0] = bVar8;
            local_400[1] = bVar10;
            local_400[2] = bVar12;
            local_400[3] = bVar14;
            local_400[4] = bVar16;
            local_400[5] = bVar18;
            local_400[6] = bVar20;
            local_400[7] = bVar22;
            local_400[8] = bVar24;
            local_400[9] = bVar26;
            local_400[10] = bVar28;
            local_400[0xb] = bVar30;
            local_400[0xc] = bVar32;
            local_400[0xd] = bVar34;
            uStack_3f2 = uVar36;
            local_3d0 = uVar75;
            local_3c8 = uVar68;
            goto LAB_10056feec;
          }
          if (uVar59 != 0) {
LAB_10056fda0:
            local_2e0 = uStack_208;
            uStack_2d8 = local_200;
            local_2c0 = uStack_198;
            uStack_2b8 = uStack_190;
            local_2d0 = uVar75;
            uStack_2c8 = uVar68;
            local_2b0 = uVar59;
            uStack_2a8 = uVar65;
            FUN_10007f314(&dStack_228,local_400,&DAT_100aab4a8,&DAT_10083e020);
            FUN_10007f314(&local_1b8,local_400,&DAT_100aab4a8,&DAT_10083e020);
            FUN_1005a7f54(uVar39,uVar60,uVar75,uVar68);
            FUN_1005a7f54(uVar62,uVar67,uVar59,uVar65);
            FUN_100040bb4(&local_2e0,&DAT_100aad018,&DAT_10083cbf8);
            goto LAB_10056ff7c;
          }
          FUN_10007f314(&dStack_228,local_400,&DAT_100aab4a8,&DAT_10083e020);
          FUN_10007f314(&local_1b8,local_400,&DAT_100aab4a8,&DAT_10083e020);
          FUN_1005a7f54(uVar39,uVar60,0,uVar68);
          FUN_1005a7f54(uVar62,uVar67,0,uVar65);
          FUN_100541944(uVar39,uVar60,0,uVar68);
LAB_10056f338:
          if (bVar71 == 2) {
            if (bVar6 == 2) goto LAB_10056f388;
            FUN_100040bb4(&local_448,&DAT_100aab4a8,&DAT_10083e020);
            bVar71 = 2;
            goto LAB_10056feb0;
          }
          if ((bVar6 == 2) || (((bVar71 ^ bVar6) & 1) != 0)) {
LAB_10056fe98:
            FUN_100040bb4(&local_448,&DAT_100aab4a8,&DAT_10083e020);
            goto LAB_10056feb0;
          }
LAB_10056f388:
          lVar61 = *(long *)((long)dVar37 + 0x10);
          if (lVar61 != *(long *)((long)dVar48 + 0x10)) goto LAB_10056fe98;
          if ((lVar61 != 0) && (dVar37 != dVar48)) {
            puVar78 = (ulong *)((long)dVar37 + 0x20);
            puVar77 = (undefined8 *)((long)dVar48 + 0x20);
            do {
              lVar61 = lVar61 + -1;
              uStack_2d8 = puVar78[1];
              uVar62 = *puVar78;
              uStack_2c8 = puVar78[3];
              local_2d0 = puVar78[2];
              uStack_2b8 = puVar78[5];
              local_2c0 = puVar78[4];
              uStack_2a8 = puVar78[7];
              local_2b0 = puVar78[6];
              dStack_298 = (double)puVar78[9];
              local_2a0 = (double)puVar78[8];
              uStack_288 = puVar78[0xb];
              local_290 = puVar78[10];
              uStack_278 = puVar78[0xd];
              local_280 = puVar78[0xc];
              local_270 = puVar78[0xe];
              uStack_3a8 = puVar77[0xb];
              local_3b0 = (double)puVar77[10];
              local_398 = puVar77[0xd];
              uStack_3a0 = puVar77[0xc];
              local_390 = puVar77[0xe];
              dStack_3b8 = (double)puVar77[9];
              local_3c0 = puVar77[8];
              uVar80 = puVar77[1];
              uVar52 = *puVar77;
              local_3e8 = puVar77[3];
              local_3f0 = puVar77[2];
              uStack_3d8 = puVar77[5];
              local_3e0 = puVar77[4];
              local_3c8 = puVar77[7];
              local_3d0 = puVar77[6];
              local_400[8] = (byte)uVar80;
              local_400[9] = (byte)((ulong)uVar80 >> 8);
              local_400[10] = (byte)((ulong)uVar80 >> 0x10);
              local_400[0xb] = (byte)((ulong)uVar80 >> 0x18);
              local_400[0xc] = (byte)((ulong)uVar80 >> 0x20);
              local_400[0xd] = (byte)((ulong)uVar80 >> 0x28);
              uStack_3f2 = (undefined2)((ulong)uVar80 >> 0x30);
              local_400[0] = (byte)uVar52;
              local_400[1] = (byte)((ulong)uVar52 >> 8);
              local_400[2] = (byte)((ulong)uVar52 >> 0x10);
              local_400[3] = (byte)((ulong)uVar52 >> 0x18);
              local_400[4] = (byte)((ulong)uVar52 >> 0x20);
              local_400[5] = (byte)((ulong)uVar52 >> 0x28);
              local_400[6] = (byte)((ulong)uVar52 >> 0x30);
              local_400[7] = (byte)((ulong)uVar52 >> 0x38);
              local_2e0 = uVar62;
              FUN_1005b2964(&local_2e0,&local_370);
              FUN_1005b2964(local_400,&local_370);
              FUN_10056e12c(uVar62,uVar52);
              if ((uVar62 & 1) == 0) {
LAB_10056fe88:
                FUN_1005b2998(local_400);
                FUN_1005b2998(&local_2e0);
                goto LAB_10056fe98;
              }
              if (local_2c0 != 0) {
                if ((local_3e0 != 0) &&
                   (((uStack_2c8 == local_3e8 && (local_2c0 == local_3e0)) ||
                    (uVar62 = uStack_2c8,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar62 & 1) != 0)))) goto LAB_10056f470;
                goto LAB_10056fe88;
              }
              if (local_3e0 != 0) goto LAB_10056fe88;
LAB_10056f470:
              uVar65 = local_280;
              uVar59 = uStack_288;
              uVar67 = uStack_3a0;
              uVar62 = uStack_3a8;
              if ((local_2b0 & 1) == 0) {
                if (((local_3d0 & 1) == 0) && (uStack_2b8 == uStack_3d8)) goto LAB_10056f498;
                goto LAB_10056fe88;
              }
              if ((local_3d0 & 1) == 0) goto LAB_10056fe88;
LAB_10056f498:
              if (((ulong)local_2a0 & 1) == 0) {
                if (((local_3c0 & 1) == 0) && (uStack_2a8 == local_3c8)) goto LAB_10056f4c0;
                goto LAB_10056fe88;
              }
              if ((local_3c0 & 1) == 0) goto LAB_10056fe88;
LAB_10056f4c0:
              if ((local_290 & 1) == 0) {
                if ((((ulong)local_3b0 & 1) == 0) && (dStack_298 == dStack_3b8)) goto LAB_10056f4e8;
                goto LAB_10056fe88;
              }
              if (((ulong)local_3b0 & 1) == 0) goto LAB_10056fe88;
LAB_10056f4e8:
              if (local_280 >> 0x3c < 0xf) {
                if (0xe < uStack_3a0 >> 0x3c) goto LAB_10056fe58;
                FUN_10010bd10(uStack_288,local_280);
                FUN_10010bd10(uVar62,uVar67);
                uVar46 = uVar59;
                FUN_1000094a4(uVar59,uVar65,uVar62,uVar67);
                FUN_100006cc8(uVar62,uVar67);
                FUN_100006cc8(uVar59,uVar65);
                if ((uVar46 & 1) != 0) goto LAB_10056f58c;
                goto LAB_10056fe88;
              }
              if (uStack_3a0 >> 0x3c < 0xf) {
LAB_10056fe58:
                FUN_10010bd10(uStack_288,local_280);
                FUN_10010bd10(uVar62,uVar67);
                FUN_100006cc8(uVar59,uVar65);
                FUN_100006cc8(uVar62,uVar67);
                goto LAB_10056fe88;
              }
              FUN_10010bd10(uStack_288,local_280);
              FUN_10010bd10(uVar62,uVar67);
              FUN_100006cc8(uVar59,uVar65);
LAB_10056f58c:
              if (local_270 == 0) {
                if (local_390 != 0) goto LAB_10056fe88;
              }
              else if ((local_390 == 0) ||
                      (((uStack_278 != local_398 || (local_270 != local_390)) &&
                       (uVar62 = uStack_278,
                       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                 (), (uVar62 & 1) == 0)))) goto LAB_10056fe88;
              uVar62 = uStack_2d8;
              FUN_1000094a4(uStack_2d8,local_2d0,
                            CONCAT26(uStack_3f2,
                                     CONCAT15(local_400[0xd],
                                              CONCAT14(local_400[0xc],
                                                       CONCAT13(local_400[0xb],
                                                                CONCAT12(local_400[10],
                                                                         CONCAT11(local_400[9],
                                                                                  local_400[8]))))))
                            ,local_3f0);
              FUN_1005b2998(local_400);
              FUN_1005b2998(&local_2e0);
              if ((uVar62 & 1) == 0) goto LAB_10056fe98;
              if (lVar61 == 0) break;
              puVar77 = puVar77 + 0xf;
              puVar78 = puVar78 + 0xf;
            } while( true );
          }
          if (uVar58 >> 0x3e == 3) {
            uVar62 = 0;
            if (((uVar70 != 0) || (uVar58 != 0xc000000000000000)) ||
               ((uVar66 >> 0x3e < 3 ||
                ((uVar62 = 0, dVar43 != 0.0 || (uVar66 != 0xc000000000000000))))))
            goto LAB_10056f698;
          }
          else {
            uVar56 = (uint)(uVar58 >> 0x3e);
            if (uVar56 == 2) {
              uVar62 = *(long *)(uVar70 + 0x18) - *(long *)(uVar70 + 0x10);
              if (SBORROW8(*(long *)(uVar70 + 0x18),*(long *)(uVar70 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570064);
                (*pcVar45)();
              }
            }
            else if (uVar56 == 1) {
              iVar57 = (int)(uVar70 >> 0x20);
              if (SBORROW4(iVar57,(int)uVar70)) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570068);
                (*pcVar45)();
              }
              uVar62 = (ulong)(iVar57 - (int)uVar70);
            }
            else {
              uVar62 = uVar58 >> 0x30 & 0xff;
            }
LAB_10056f698:
            uVar56 = (uint)(uVar66 >> 0x20);
            uVar64 = uVar56 >> 0x1e;
            if (uVar56 >> 0x1e < 2) {
              if (uVar64 == 0) {
                uVar67 = uVar66 >> 0x30 & 0xff;
              }
              else {
                iVar57 = (int)((ulong)dVar43 >> 0x20);
                if (SBORROW4(iVar57,SUB84(dVar43,0))) {
                    /* WARNING: Does not return */
                  pcVar45 = (code *)SoftwareBreakpoint(1,0x100570054);
                  (*pcVar45)();
                }
                uVar67 = (ulong)(iVar57 - SUB84(dVar43,0));
              }
            }
            else {
              if (uVar64 != 2) {
                if (uVar62 != 0) goto LAB_10056fe98;
                goto LAB_10056f720;
              }
              uVar67 = *(long *)((long)dVar43 + 0x18) - *(long *)((long)dVar43 + 0x10);
              if (SBORROW8(*(long *)((long)dVar43 + 0x18),*(long *)((long)dVar43 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570058);
                (*pcVar45)();
              }
            }
            if (uVar62 != uVar67) goto LAB_10056fe98;
            if (0 < (long)uVar62) {
              FUN_100008184(dVar43,uVar66);
              FUN_100009264(uVar70,uVar58,dVar43,uVar66);
              if ((uVar70 & 1) == 0) goto LAB_10056fe98;
            }
          }
LAB_10056f720:
          uVar70 = uVar38;
          thunk_FUN_100511c8c(uVar38,uVar42);
          FUN_100040bb4(&local_448,&DAT_100aab4a8,&DAT_10083e020);
          local_3f0 = uVar58;
          local_3e8 = uVar38;
          local_3e0 = uVar39;
          uStack_3d8 = uVar60;
          local_3c0 = CONCAT71(local_3c0._1_7_,bVar71);
          pbVar49 = local_400;
          local_400[0] = bVar8;
          local_400[1] = bVar10;
          local_400[2] = bVar12;
          local_400[3] = bVar14;
          local_400[4] = bVar16;
          local_400[5] = bVar18;
          local_400[6] = bVar20;
          local_400[7] = bVar22;
          local_400[8] = bVar24;
          local_400[9] = bVar26;
          local_400[10] = bVar28;
          local_400[0xb] = bVar30;
          local_400[0xc] = bVar32;
          local_400[0xd] = bVar34;
          uStack_3f2 = uVar36;
          local_3d0 = uVar75;
          local_3c8 = uVar68;
          FUN_100040bb4(pbVar49,&DAT_100aab4a8,&DAT_10083e020);
          if ((uVar70 & 1) != 0) goto LAB_10056f794;
LAB_10056fef4:
          FUN_1005b2fdc(&local_1e0);
          FUN_1005b2fdc(&local_250);
          goto LAB_10056ff04;
        }
        if (local_1b8 != 0.0) {
LAB_10056fc3c:
          local_3f0 = local_218;
          local_3e8 = local_210;
          local_3e0 = uStack_208;
          uStack_3d8 = local_200;
          local_3c0 = CONCAT71(local_3c0._1_7_,bStack_1e8);
          dStack_3b8 = local_1b8;
          uStack_3a8 = uStack_1a8;
          local_3b0 = local_1b0;
          local_398 = uStack_198;
          uStack_3a0 = local_1a0;
          uStack_388 = uStack_188;
          local_390 = uStack_190;
          uStack_387 = local_187;
          uStack_380 = uStack_180;
          uStack_37f = uStack_40f;
          uStack_40f = uVar3;
          bStack_378 = bStack_408;
          bStack_408 = bVar5;
          local_3d0 = uVar75;
          local_3c8 = uVar68;
          FUN_10007f314(&dStack_228,&local_2e0,&DAT_100aab4a8,&DAT_10083e020);
          FUN_10007f314(&local_1b8,&local_2e0,&DAT_100aab4a8,&DAT_10083e020);
          puVar53 = &DAT_100aad0b8;
          puVar54 = &DAT_10083cc30;
LAB_10056feec:
          FUN_100040bb4(local_400,puVar53,puVar54);
          goto LAB_10056fef4;
        }
        local_400[0] = 0;
        local_400[1] = 0;
        local_400[2] = 0;
        local_400[3] = 0;
        local_400[4] = 0;
        local_400[5] = 0;
        local_400[6] = 0;
        local_400[7] = 0;
        local_3f0 = local_218;
        local_3e8 = local_210;
        local_3e0 = uStack_208;
        uStack_3d8 = local_200;
        local_3c0 = CONCAT71(local_3c0._1_7_,bStack_1e8);
        uStack_40f = uVar3;
        bStack_408 = bVar5;
        local_3d0 = uVar75;
        local_3c8 = uVar68;
        FUN_10007f314(&dStack_228,&local_2e0,&DAT_100aab4a8,&DAT_10083e020);
        FUN_10007f314(&local_1b8,&local_2e0,&DAT_100aab4a8,&DAT_10083e020);
        pbVar49 = local_400;
        FUN_100040bb4(pbVar49,&DAT_100aab4a8,&DAT_10083e020);
LAB_10056f794:
        uVar75 = local_1d0;
        lVar61 = lStack_1d8;
        uVar56 = (uint)(local_240 >> 0x20);
        uVar64 = uVar56 >> 0x1e;
        iVar57 = (int)lStack_248;
        iVar69 = (int)((ulong)lStack_248 >> 0x20);
        if (local_240 >> 0x3e == 3) {
          uVar68 = 0;
          if ((((lStack_248 != 0) || (local_240 != 0xc000000000000000)) || (local_1d0 >> 0x3e < 3))
             || ((uVar68 = 0, lStack_1d8 != 0 || (local_1d0 != 0xc000000000000000))))
          goto LAB_10056f824;
LAB_10056f8fc:
          FUN_1005b2fdc(&local_1e0);
          FUN_1005b2fdc(&local_250);
        }
        else {
          if (uVar56 >> 0x1e < 2) {
            if (uVar64 == 0) {
              uVar68 = local_240 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar69,iVar57)) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570044);
                (*pcVar45)();
              }
              uVar68 = (ulong)(iVar69 - iVar57);
            }
          }
          else if (uVar64 == 2) {
            uVar68 = *(long *)(lStack_248 + 0x18) - *(long *)(lStack_248 + 0x10);
            if (SBORROW8(*(long *)(lStack_248 + 0x18),*(long *)(lStack_248 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar45 = (code *)SoftwareBreakpoint(1,0x100570048);
              (*pcVar45)();
            }
          }
          else {
            uVar68 = 0;
          }
LAB_10056f824:
          uVar56 = (uint)(local_1d0 >> 0x20);
          uVar55 = uVar56 >> 0x1e;
          if (uVar56 >> 0x1e < 2) {
            if (uVar55 == 0) {
              uVar70 = local_1d0 >> 0x30 & 0xff;
            }
            else {
              iVar69 = (int)((ulong)lStack_1d8 >> 0x20);
              if (SBORROW4(iVar69,(int)lStack_1d8)) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x10057002c);
                (*pcVar45)();
              }
              uVar70 = (ulong)(iVar69 - (int)lStack_1d8);
            }
          }
          else {
            if (uVar55 != 2) {
              if (uVar68 != 0) goto LAB_10056fef4;
              goto LAB_10056f8fc;
            }
            uVar70 = *(long *)(lStack_1d8 + 0x18) - *(long *)(lStack_1d8 + 0x10);
            if (SBORROW8(*(long *)(lStack_1d8 + 0x18),*(long *)(lStack_1d8 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar45 = (code *)SoftwareBreakpoint(1,0x100570030);
              (*pcVar45)();
            }
          }
          if (uVar68 != uVar70) goto LAB_10056fef4;
          if ((long)uVar68 < 1) goto LAB_10056f8fc;
          if (uVar64 < 2) {
            if (uVar64 != 0) {
              lVar79 = (long)iVar57;
              pbVar50 = (byte *)((lStack_248 >> 0x20) - lVar79);
              if (lStack_248 >> 0x20 < lVar79) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x10057005c);
                (*pcVar45)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              pbVar51 = pbVar49;
              if (pbVar49 != (byte *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar79,(long)pbVar51)) {
                    /* WARNING: Does not return */
                  pcVar45 = (code *)SoftwareBreakpoint(1,0x100570070);
                  (*pcVar45)();
                }
                pbVar49 = pbVar49 + (lVar79 - (long)pbVar51);
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)pbVar50 <= (long)pbVar51) {
                pbVar51 = pbVar50;
              }
              pbVar50 = (byte *)0x0;
              if (pbVar49 != (byte *)0x0) {
                pbVar50 = pbVar51 + (long)pbVar49;
              }
              FUN_100009038(local_400,pbVar49,pbVar50,lVar61,uVar75);
              FUN_1005b2fdc(&local_1e0);
              FUN_1005b2fdc(&local_250);
LAB_10056fa20:
              if ((local_400[0] & 1) != 0) goto LAB_10056fa70;
              goto LAB_10056ff04;
            }
            local_400[0] = (byte)lStack_248;
            local_400[1] = (byte)((ulong)lStack_248 >> 8);
            local_400[2] = (byte)((ulong)lStack_248 >> 0x10);
            local_400[3] = (byte)((ulong)lStack_248 >> 0x18);
            local_400[4] = (byte)((ulong)lStack_248 >> 0x20);
            local_400[5] = (byte)((ulong)lStack_248 >> 0x28);
            local_400[6] = (byte)((ulong)lStack_248 >> 0x30);
            local_400[7] = (byte)((ulong)lStack_248 >> 0x38);
            local_400[8] = (byte)local_240;
            local_400[9] = (byte)(local_240 >> 8);
            local_400[10] = (byte)(local_240 >> 0x10);
            local_400[0xb] = (byte)(local_240 >> 0x18);
            local_400[0xc] = (byte)(local_240 >> 0x20);
            local_400[0xd] = (byte)(local_240 >> 0x28);
            pbVar49 = local_400 + (local_240 >> 0x30 & 0xff);
          }
          else {
            if (uVar64 == 2) {
              lVar79 = *(long *)(lStack_248 + 0x10);
              lVar76 = *(long *)(lStack_248 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              pbVar50 = pbVar49;
              if (pbVar49 != (byte *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar79,(long)pbVar50)) {
                    /* WARNING: Does not return */
                  pcVar45 = (code *)SoftwareBreakpoint(1,0x10057006c);
                  (*pcVar45)();
                }
                pbVar49 = pbVar49 + (lVar79 - (long)pbVar50);
              }
              pbVar51 = (byte *)(lVar76 - lVar79);
              if (SBORROW8(lVar76,lVar79)) {
                    /* WARNING: Does not return */
                pcVar45 = (code *)SoftwareBreakpoint(1,0x100570060);
                (*pcVar45)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if ((long)pbVar51 <= (long)pbVar50) {
                pbVar50 = pbVar51;
              }
              pbVar51 = (byte *)0x0;
              if (pbVar49 != (byte *)0x0) {
                pbVar51 = pbVar50 + (long)pbVar49;
              }
              FUN_100009038(local_400,pbVar49,pbVar51,lVar61,uVar75);
              FUN_1005b2fdc(&local_1e0);
              FUN_1005b2fdc(&local_250);
              goto LAB_10056fa20;
            }
            local_400[8] = 0;
            local_400[9] = 0;
            local_400[10] = 0;
            local_400[0xb] = 0;
            local_400[0xc] = 0;
            local_400[0xd] = 0;
            local_400[0] = 0;
            local_400[1] = 0;
            local_400[2] = 0;
            local_400[3] = 0;
            local_400[4] = 0;
            local_400[5] = 0;
            local_400[6] = 0;
            local_400[7] = 0;
            pbVar49 = local_400;
          }
          FUN_100009038(&local_2e0,local_400,pbVar49,lStack_1d8,local_1d0);
          FUN_1005b2fdc(&local_1e0);
          FUN_1005b2fdc(&local_250);
          if ((local_2e0 & 1) == 0) goto LAB_10056ff04;
        }
LAB_10056fa70:
        lVar74 = lVar74 + 1;
      } while (lVar74 != lVar72);
    }
    uVar52 = 1;
  }
  else {
LAB_10056ff04:
    uVar52 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar52);
  }
  return;
}

