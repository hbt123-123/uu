// rea decompile_all
// name: FUN_1000b88cc
// address: 0x1000b88cc
// body: available
// range: 0x1000b88cc-0x1000b8ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000b88cc(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_338 [168];
  long local_290;
  long lStack_288;
  ulong local_280;
  long lStack_278;
  ulong local_270;
  long lStack_268;
  ulong local_260;
  long local_258;
  ulong local_250;
  long lStack_248;
  ulong local_240;
  long local_238;
  long local_230;
  long lStack_228;
  ulong local_220;
  long lStack_218;
  ulong local_210;
  long lStack_208;
  ulong local_200;
  long local_1f8;
  ulong local_1f0;
  long lStack_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == *(long *)(param_2 + 0x10)) {
    if ((lVar8 != 0) && (param_1 != param_2)) {
      lVar9 = 0;
      do {
        plVar7 = (long *)(param_1 + 0x20 + lVar9 * 0x60);
        lStack_268 = plVar7[5];
        local_270 = plVar7[4];
        local_258 = plVar7[7];
        local_260 = plVar7[6];
        lStack_248 = plVar7[9];
        local_250 = plVar7[8];
        local_238 = plVar7[0xb];
        local_240 = plVar7[10];
        lStack_288 = plVar7[1];
        local_290 = *plVar7;
        lStack_278 = plVar7[3];
        local_280 = plVar7[2];
        plVar7 = (long *)(param_2 + 0x20 + lVar9 * 0x60);
        lStack_208 = plVar7[5];
        local_210 = plVar7[4];
        local_1f8 = plVar7[7];
        local_200 = plVar7[6];
        lStack_1e8 = plVar7[9];
        local_1f0 = plVar7[8];
        local_1d8 = plVar7[0xb];
        local_1e0 = plVar7[10];
        lStack_228 = plVar7[1];
        local_230 = *plVar7;
        lStack_218 = plVar7[3];
        local_220 = plVar7[2];
        if (local_290 == 0) {
          if (local_230 != 0) goto LAB_1000b8c78;
        }
        else {
          if ((local_230 == 0) ||
             (lVar6 = *(long *)(local_290 + 0x10), lVar6 != *(long *)(local_230 + 0x10)))
          goto LAB_1000b8c78;
          if ((lVar6 != 0) && (local_290 != local_230)) {
            plVar7 = (long *)(local_290 + 0x28);
            plVar10 = (long *)(local_230 + 0x28);
            do {
              if (lVar6 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b8ca0);
                (*pcVar2)();
              }
              uVar3 = plVar7[-1];
              if ((uVar3 != plVar10[-1] || *plVar7 != *plVar10) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar3 & 1) == 0)) goto LAB_1000b8c78;
              plVar7 = plVar7 + 2;
              plVar10 = plVar10 + 2;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
        }
        if (((char)lStack_288 != (char)lStack_228) ||
           (((local_280 != local_220 || (lStack_278 != lStack_218)) &&
            (uVar3 = local_280,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) == 0)))) goto LAB_1000b8c78;
        if (lStack_268 == 0) {
          if (lStack_208 != 0) goto LAB_1000b8c78;
        }
        else if ((lStack_208 == 0) ||
                (((local_270 != local_210 || (lStack_268 != lStack_208)) &&
                 (uVar3 = local_270,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar3 & 1) == 0)))) goto LAB_1000b8c78;
        if (local_258 == 0) {
          if (local_1f8 != 0) goto LAB_1000b8c78;
        }
        else if ((local_1f8 == 0) ||
                (((local_260 != local_200 || (local_258 != local_1f8)) &&
                 (uVar3 = local_260,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar3 & 1) == 0)))) goto LAB_1000b8c78;
        if (lStack_248 == 0) {
          if (lStack_1e8 != 0) goto LAB_1000b8c78;
        }
        else if ((lStack_1e8 == 0) ||
                (((local_250 != local_1f0 || (lStack_248 != lStack_1e8)) &&
                 (uVar3 = local_250,
                 __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                           (), (uVar3 & 1) == 0)))) goto LAB_1000b8c78;
        lVar6 = local_1e0;
        uVar3 = local_240;
        if (local_240 != 0) {
          if (local_1e0 != 0) {
            FUN_1000b59dc(&local_290,auStack_338);
            FUN_1000b59dc(&local_230,auStack_338);
            _swift_bridgeObjectRetain(lVar6);
            FUN_1000b88cc(uVar3,lVar6);
            _swift_bridgeObjectRelease(lVar6);
            if ((uVar3 & 1) != 0) goto LAB_1000b8b20;
LAB_1000b8c68:
            FUN_1000bb5ac(&local_230);
            FUN_1000bb5ac(&local_290);
          }
          goto LAB_1000b8c78;
        }
        if (local_1e0 != 0) goto LAB_1000b8c78;
        FUN_1000b59dc(&local_290,auStack_338);
        FUN_1000b59dc(&local_230,auStack_338);
LAB_1000b8b20:
        lVar1 = local_1d8;
        lVar6 = local_238;
        if (local_238 == 0) {
          FUN_1000bb5ac(&local_230);
          FUN_1000bb5ac(&local_290);
          if (lVar1 != 0) goto LAB_1000b8c78;
        }
        else {
          if ((local_1d8 == 0) ||
             (lVar11 = *(long *)(local_238 + 0x10), lVar11 != *(long *)(local_1d8 + 0x10)))
          goto LAB_1000b8c68;
          if ((lVar11 != 0) && (local_238 != local_1d8)) {
            _swift_bridgeObjectRetain(local_1d8);
            lVar12 = 0x20;
            do {
              puVar4 = (undefined8 *)(lVar6 + lVar12);
              uStack_1c8 = puVar4[1];
              local_1d0 = *puVar4;
              uStack_1b8 = puVar4[3];
              local_1c0 = puVar4[2];
              uStack_1a8 = puVar4[5];
              uStack_1b0 = puVar4[4];
              uStack_198 = puVar4[7];
              local_1a0 = puVar4[6];
              uStack_188 = puVar4[9];
              uStack_190 = puVar4[8];
              uStack_178 = puVar4[0xb];
              local_180 = puVar4[10];
              uStack_168 = puVar4[0xd];
              uStack_170 = puVar4[0xc];
              uStack_158 = puVar4[0xf];
              local_160 = puVar4[0xe];
              uStack_148 = puVar4[0x11];
              local_150 = puVar4[0x10];
              uStack_138 = puVar4[0x13];
              uStack_140 = puVar4[0x12];
              local_130 = puVar4[0x14];
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b8ca4);
                (*pcVar2)();
              }
              puVar4 = (undefined8 *)(lVar1 + lVar12);
              uStack_118 = puVar4[1];
              local_120 = *puVar4;
              uStack_108 = puVar4[3];
              local_110 = puVar4[2];
              uStack_f8 = puVar4[5];
              uStack_100 = puVar4[4];
              uStack_e8 = puVar4[7];
              local_f0 = puVar4[6];
              uStack_d8 = puVar4[9];
              uStack_e0 = puVar4[8];
              uStack_c8 = puVar4[0xb];
              local_d0 = puVar4[10];
              uStack_b8 = puVar4[0xd];
              uStack_c0 = puVar4[0xc];
              uStack_a8 = puVar4[0xf];
              local_b0 = puVar4[0xe];
              uStack_98 = puVar4[0x11];
              local_a0 = puVar4[0x10];
              uStack_88 = puVar4[0x13];
              uStack_90 = puVar4[0x12];
              local_80 = puVar4[0x14];
              FUN_1000bbe94(&local_1d0,auStack_338);
              FUN_1000bbe94(&local_120,auStack_338);
              puVar4 = &local_1d0;
              FUN_1000baeb4(puVar4,&local_120);
              FUN_1000bbea4(&local_120);
              FUN_1000bbea4(&local_1d0);
              if (((ulong)puVar4 & 1) == 0) {
                _swift_bridgeObjectRelease(lVar1);
                goto LAB_1000b8c68;
              }
              lVar12 = lVar12 + 0xa8;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            _swift_bridgeObjectRelease(lVar1);
          }
          FUN_1000bb5ac(&local_230);
          FUN_1000bb5ac(&local_290);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar8);
    }
    uVar5 = 1;
  }
  else {
LAB_1000b8c78:
    uVar5 = 0;
  }
  return uVar5;
}

