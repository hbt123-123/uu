// rea decompile_all
// name: FUN_10009edb4
// address: 0x10009edb4
// body: available
// range: 0x10009edb4-0x10009f1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009edb4(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar14 = (ulong)param_3 >> 0xe;
  uVar9 = (ulong)param_2 >> 0xe;
  uVar10 = uVar9;
  puVar11 = param_2;
  if (uVar9 != uVar14) {
    do {
      puVar2 = puVar11;
      puVar6 = param_2;
      __sSsySJSS5IndexVcig(puVar11,param_2,param_3,param_4,param_5);
      puVar3 = param_2;
      if ((puVar2 == (ulong *)0x3d) && (puVar6 == (ulong *)0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
LAB_10009ef58:
        if (uVar10 < uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f1c0);
          (*pcVar1)();
        }
        puVar2 = puVar11;
        puVar6 = param_2;
        puVar8 = param_3;
        __sSsySsSnySS5IndexVGcig();
        if (((ulong)puVar3 ^ (ulong)puVar2) < 0x4000) {
          _swift_bridgeObjectRelease(puVar8);
          puVar11 = param_2;
          puVar6 = param_2;
          __sSsySJSS5IndexVcig(param_2,param_2,param_3,param_4,param_5);
          puVar2 = param_2;
          __sSs8distance4from2toSiSS5IndexV_AEtF(param_2,param_3,param_2,param_3,param_4,param_5);
          if (puVar2 == (ulong *)0x1) {
            _swift_bridgeObjectRelease(param_5);
            uVar12 = 0x40;
            param_3 = puVar6;
            param_2 = puVar11;
          }
          else {
            _swift_bridgeObjectRelease(puVar6);
            __sSS14_fromSubstringySSSshFZ(param_2,param_3,param_4,param_5);
            _swift_bridgeObjectRelease(param_5);
            uVar12 = 0x80;
          }
          puVar11 = param_2;
          puVar2 = param_3;
          FUN_1000979e4(param_2,param_3,uVar12);
          FUN_100065628(param_2,param_3,uVar12);
          FUN_100054664();
          _swift_allocError(&DAT_1000fa8c8,param_2,0,0);
          *param_2 = (ulong)puVar11;
          param_2[1] = (ulong)puVar2;
          param_2[3] = uStack_98;
          param_2[2] = local_a0;
          param_2[5] = uStack_88;
          param_2[4] = uStack_90;
          param_2[7] = uStack_78;
          param_2[6] = local_80;
          param_2[9] = uStack_68;
          param_2[8] = uStack_70;
          *(undefined1 *)(param_2 + 10) = 5;
          _swift_willThrow();
          return;
        }
        __sSs5index5afterSS5IndexVAD_tF(puVar11,param_2,param_3,param_4,param_5);
        if (uVar14 < (ulong)puVar11 >> 0xe) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10009f1c4);
          (*pcVar1)();
        }
        puVar4 = param_3;
        __sSsySsSnySS5IndexVGcig();
        _swift_bridgeObjectRelease(param_5);
        __sSS14_fromSubstringySSSshFZ(puVar11,param_3,param_2,puVar4);
        _swift_bridgeObjectRelease(puVar4);
        puVar4 = puVar3;
        puVar7 = puVar3;
        __sSsySJSS5IndexVcig(puVar3,puVar3,puVar2,puVar6,puVar8);
        puVar5 = puVar3;
        __sSs8distance4from2toSiSS5IndexV_AEtF(puVar3,puVar2,puVar3,puVar2,puVar6,puVar8);
        puVar13 = param_3;
        if (puVar5 == (ulong *)0x1) {
          uVar10 = 0x8000000000000040;
          _swift_bridgeObjectRelease(puVar8);
          puVar2 = puVar7;
          puVar3 = puVar4;
        }
        else {
          _swift_bridgeObjectRelease(puVar7);
          __sSS14_fromSubstringySSSshFZ(puVar3,puVar2,puVar6,puVar8);
          _swift_bridgeObjectRelease(puVar8);
          uVar10 = 0x8000000000000080;
        }
        goto LAB_10009ee2c;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(puVar6);
      if (((ulong)puVar2 & 1) != 0) goto LAB_10009ef58;
      __sSs5index5afterSS5IndexVAD_tF(puVar11,param_2,param_3,param_4,param_5);
      uVar10 = (ulong)puVar11 >> 0xe;
    } while ((ulong)puVar11 >> 0xe != uVar14);
    if (uVar9 != uVar14) {
      puVar2 = param_2;
      __sSsySJSS5IndexVcig(param_2,param_2,param_3,param_4,param_5);
      puVar11 = param_2;
      __sSs8distance4from2toSiSS5IndexV_AEtF(param_2,param_3,param_2,param_3,param_4,param_5);
      if (puVar11 == (ulong *)0x1) {
        _swift_bridgeObjectRelease(param_5);
        puVar11 = (ulong *)0x0;
        uVar10 = 0x40;
        puVar13 = (ulong *)0x0;
        goto LAB_10009ee2c;
      }
      _swift_bridgeObjectRelease(puVar2);
    }
  }
  __sSS14_fromSubstringySSSshFZ(param_2,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(param_5);
  puVar11 = (ulong *)0x0;
  uVar10 = 0x80;
  puVar13 = (ulong *)0x0;
  puVar2 = param_3;
  puVar3 = param_2;
LAB_10009ee2c:
  *param_1 = (ulong)puVar3;
  param_1[1] = (ulong)puVar2;
  param_1[2] = uVar10;
  param_1[3] = (ulong)puVar11;
  param_1[4] = (ulong)puVar13;
  return;
}

