// rea decompile_all
// name: FUN_10009cfd0
// address: 0x10009cfd0
// body: available
// range: 0x10009cfd0-0x10009d5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009cfd0(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long unaff_x21;
  undefined *unaff_x23;
  long local_110;
  undefined1 local_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar4 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    uVar15 = 0;
    unaff_x23 = (undefined *)0xf;
    do {
      puVar9 = unaff_x23;
      puVar12 = param_1;
      __sSSySJSS5IndexVcig(unaff_x23,param_1,param_2);
      if ((puVar9 == (undefined *)0x2d) && (puVar12 == (ulong *)0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(puVar12);
        if (((ulong)puVar9 & 1) == 0) {
          lVar10 = 0xf;
          __sSS8distance4from2toSiSS5IndexV_AEtF(0xf,unaff_x23,param_1,param_2);
          if (uVar4 * 4 < uVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10009d5f0);
            (*pcVar8)();
          }
          uVar15 = 0xb;
          if (((uint)((ulong)param_2 >> 0x3c) & (uint)(((ulong)param_1 & 0x800000000000000) == 0))
              == 0) {
            uVar15 = 7;
          }
          uVar15 = uVar15 | uVar4 << 0x10;
          puVar9 = unaff_x23;
          puVar14 = param_1;
          puVar12 = param_2;
          __sSSySsSnySS5IndexVGcig(unaff_x23,uVar15,param_1);
          if (lVar10 == 1) {
            _swift_bridgeObjectRetain(puVar12);
            puVar11 = puVar9;
            FUN_10009edb4(&local_b8,puVar9,uVar15,puVar14,puVar12);
            if (unaff_x21 != 0) {
              _swift_bridgeObjectRelease(puVar12);
              return unaff_x23;
            }
            FUN_10009c5d0();
            if (*(long *)(puVar11 + 0x10) == 0) {
              _swift_bridgeObjectRelease();
              _swift_bridgeObjectRelease(puVar12);
              puVar9 = &DAT_1001044c8;
              FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
              _swift_allocObject();
              *(undefined8 *)(puVar9 + 0x18) = 2;
              *(undefined8 *)(puVar9 + 0x10) = 1;
              *(undefined8 *)(puVar9 + 0x20) = local_b8;
              *(undefined8 *)(puVar9 + 0x28) = uStack_b0;
              *(undefined8 *)(puVar9 + 0x30) = local_a8;
              *(undefined8 *)(puVar9 + 0x38) = uStack_a0;
              *(undefined8 *)(puVar9 + 0x40) = local_98;
              *(undefined8 *)(puVar9 + 0x48) = param_3;
              *(undefined8 *)(puVar9 + 0x50) = 0;
              puVar9[0x58] = 1;
              return puVar9;
            }
            if (*(long *)(puVar11 + 0x10) != 1) {
              _swift_bridgeObjectRelease(puVar12);
              puVar9 = &DAT_1001044c8;
              FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
              _swift_allocObject();
              *(undefined8 *)(puVar9 + 0x18) = 2;
              *(undefined8 *)(puVar9 + 0x10) = 1;
              *(undefined8 *)(puVar9 + 0x20) = local_b8;
              *(undefined8 *)(puVar9 + 0x28) = uStack_b0;
              *(undefined8 *)(puVar9 + 0x30) = local_a8;
              *(undefined8 *)(puVar9 + 0x38) = uStack_a0;
              *(undefined8 *)(puVar9 + 0x40) = local_98;
              *(undefined8 *)(puVar9 + 0x48) = param_3;
              *(undefined8 *)(puVar9 + 0x50) = 0;
              puVar9[0x58] = 1;
              local_110 = *(long *)(puVar11 + 0x10);
              if (local_110 != 0) {
                puVar16 = (undefined8 *)(puVar11 + 0x28);
                while( true ) {
                  local_110 = local_110 + -1;
                  uVar1 = puVar16[-1];
                  uVar5 = *puVar16;
                  uVar2 = puVar16[1];
                  uVar6 = puVar16[2];
                  uVar3 = puVar16[3];
                  uVar7 = puVar16[4];
                  FUN_10009585c(uVar5,uVar2,uVar6,uVar3,uVar7);
                  uVar4 = *(ulong *)(puVar9 + 0x10);
                  puVar13 = puVar9;
                  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
                    puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                    FUN_10006f808(puVar13,uVar4 + 1,1,puVar9);
                  }
                  *(ulong *)(puVar13 + 0x10) = uVar4 + 1;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x20) = uVar5;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x28) = uVar2;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x30) = uVar6;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x38) = uVar3;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x40) = uVar7;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x48) = param_3;
                  *(undefined8 *)(puVar13 + uVar4 * 0x40 + 0x50) = uVar1;
                  puVar13[uVar4 * 0x40 + 0x58] = 0;
                  if (local_110 == 0) break;
                  puVar16 = puVar16 + 6;
                  puVar9 = puVar13;
                }
                _swift_bridgeObjectRelease(puVar11);
                return puVar13;
              }
              _swift_bridgeObjectRelease();
              return puVar9;
            }
            _swift_bridgeObjectRelease();
            puVar11 = &DAT_1001044c8;
            FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
            _swift_allocObject();
            *(undefined8 *)(puVar11 + 0x18) = 2;
            *(undefined8 *)(puVar11 + 0x10) = 1;
            FUN_10009f8f4(&local_b8,FUN_10008390c);
            if (0x3fff < ((ulong)puVar9 ^ uVar15)) {
              puVar13 = puVar9;
              __sSsySJSS5IndexVcig(puVar9,puVar9,uVar15,puVar14,puVar12);
              _swift_bridgeObjectRelease(puVar12);
              *(undefined **)(puVar11 + 0x20) = puVar9;
              *(undefined **)(puVar11 + 0x28) = puVar13;
              *(undefined8 *)(puVar11 + 0x30) = 0x40;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x48) = param_3;
              *(undefined8 *)(puVar11 + 0x50) = 0;
              puVar11[0x58] = 1;
              return puVar11;
            }
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10009d5f4);
            (*pcVar8)();
          }
          if (lVar10 == 0) {
            _swift_bridgeObjectRelease();
            puVar9 = &DAT_1001044c8;
            FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
            _swift_allocObject();
            *(undefined8 *)(puVar9 + 0x18) = 2;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            *(ulong **)(puVar9 + 0x20) = param_1;
            *(ulong **)(puVar9 + 0x28) = param_2;
            *(undefined8 *)(puVar9 + 0x30) = 0x2000000000000000;
            *(undefined8 *)(puVar9 + 0x38) = 0;
            *(undefined8 *)(puVar9 + 0x40) = 0;
            *(undefined8 *)(puVar9 + 0x48) = param_3;
            *(undefined8 *)(puVar9 + 0x50) = 0;
            puVar9[0x58] = 1;
            _swift_bridgeObjectRetain(param_2);
            return puVar9;
          }
          _swift_bridgeObjectRelease();
          if (lVar10 == 2) {
            puVar9 = &DAT_1001044c8;
            FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
            _swift_allocObject();
            *(undefined8 *)(puVar9 + 0x18) = 2;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            _swift_bridgeObjectRetain(param_2);
            FUN_10009d5f4(&local_90,param_1,param_2);
            *(undefined8 *)(puVar9 + 0x28) = uStack_88;
            *(undefined8 *)(puVar9 + 0x20) = local_90;
            *(undefined8 *)(puVar9 + 0x38) = uStack_78;
            *(undefined8 *)(puVar9 + 0x30) = uStack_80;
            *(undefined8 *)(puVar9 + 0x40) = local_70;
            *(undefined8 *)(puVar9 + 0x48) = param_3;
            *(undefined8 *)(puVar9 + 0x50) = 0;
            puVar9[0x58] = 1;
            return puVar9;
          }
          goto LAB_10009d300;
        }
      }
      __sSS5index5afterSS5IndexVAD_tF(unaff_x23,param_1,param_2);
      uVar15 = (ulong)unaff_x23 >> 0xe;
    } while (uVar15 != uVar4 * 4);
  }
  puVar12 = param_1;
  __sSS5countSivg(param_1,param_2);
  if (puVar12 < (ulong *)0x2) {
    unaff_x23 = &DAT_1001044c8;
    FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
    _swift_allocObject();
    *(undefined8 *)(unaff_x23 + 0x18) = 2;
    *(undefined8 *)(unaff_x23 + 0x10) = 1;
    *(ulong **)(unaff_x23 + 0x20) = param_1;
    *(ulong **)(unaff_x23 + 0x28) = param_2;
    *(undefined8 *)(unaff_x23 + 0x30) = 0x2000000000000000;
    *(undefined8 *)(unaff_x23 + 0x38) = 0;
    *(undefined8 *)(unaff_x23 + 0x40) = 0;
    *(undefined8 *)(unaff_x23 + 0x48) = param_3;
    *(undefined8 *)(unaff_x23 + 0x50) = 0;
    unaff_x23[0x58] = 1;
    _swift_bridgeObjectRetain(param_2);
  }
  else if (puVar12 == (ulong *)0x2) {
    unaff_x23 = &DAT_1001044c8;
    FUN_10000eb08(&DAT_1001044c8,&DAT_1000d4978);
    _swift_allocObject();
    *(undefined8 *)(unaff_x23 + 0x18) = 2;
    *(undefined8 *)(unaff_x23 + 0x10) = 1;
    *(undefined8 *)(unaff_x23 + 0x20) = 0;
    *(undefined8 *)(unaff_x23 + 0x28) = 0;
    *(undefined8 *)(unaff_x23 + 0x30) = 0x4000000000000000;
    *(undefined8 *)(unaff_x23 + 0x38) = 0;
    *(undefined8 *)(unaff_x23 + 0x40) = 0;
    *(undefined8 *)(unaff_x23 + 0x48) = param_3;
    *(undefined8 *)(unaff_x23 + 0x50) = 0;
    unaff_x23[0x58] = 1;
  }
  else {
LAB_10009d300:
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,puVar12,0,0);
    *puVar12 = (ulong)param_1;
    puVar12[1] = (ulong)param_2;
    puVar12[3] = uStack_f0;
    puVar12[2] = CONCAT71(uStack_f7,local_f8);
    puVar12[5] = uStack_e0;
    puVar12[4] = local_e8;
    puVar12[7] = uStack_d0;
    puVar12[6] = local_d8;
    puVar12[9] = uStack_c0;
    puVar12[8] = local_c8;
    *(undefined1 *)(puVar12 + 10) = 5;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_2);
  }
  return unaff_x23;
}

