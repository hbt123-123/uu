// rea decompile_all
// name: FUN_1002c0738
// address: 0x1002c0738
// body: available
// range: 0x1002c0738-0x1002c0aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002c0738(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *local_58;
  
  lVar6 = (long)param_2 - (long)param_1;
  lVar10 = lVar6 + 0x1f;
  if (-1 < lVar6) {
    lVar10 = lVar6;
  }
  lVar10 = lVar10 >> 5;
  lVar8 = (long)param_3 - (long)param_2;
  lVar13 = lVar8 + 0x1f;
  if (-1 < lVar8) {
    lVar13 = lVar8;
  }
  lVar13 = lVar13 >> 5;
  if (lVar10 < lVar13) {
    if ((param_4 != param_1) || (param_1 + lVar10 * 4 <= param_4)) {
      _memmove(param_4,param_1,lVar10 << 5);
    }
    local_58 = param_4 + lVar10 * 4;
    puVar14 = param_1;
    if (0x1f < lVar6) {
      do {
        puVar14 = param_1;
        if (param_3 <= param_2) break;
        uVar9 = *param_2;
        uVar15 = param_2[1];
        uVar7 = param_2[3];
        uVar5 = *param_4;
        uVar1 = param_4[1];
        uVar2 = uVar15;
        __sSS10lowercasedSSyF();
        uVar3 = uVar1;
        __sSS10lowercasedSSyF();
        if (uVar9 == uVar5 && uVar2 == uVar3) {
          _swift_bridgeObjectRetain(uVar15);
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar3);
LAB_1002c08f4:
          puVar12 = param_4 + 4;
          puVar14 = param_4;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,uVar2,uVar5,uVar3,1);
          _swift_bridgeObjectRetain(uVar15);
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar3);
          if ((uVar9 & 1) == 0) goto LAB_1002c08f4;
          puVar12 = param_4;
          puVar14 = param_2;
          param_2 = param_2 + 4;
        }
        param_4 = puVar12;
        if (param_1 != puVar14) {
          uVar9 = *puVar14;
          uVar15 = puVar14[3];
          uVar5 = puVar14[2];
          param_1[1] = puVar14[1];
          *param_1 = uVar9;
          param_1[3] = uVar15;
          param_1[2] = uVar5;
        }
        param_1 = param_1 + 4;
        puVar14 = param_1;
      } while (param_4 < local_58);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar13 * 4 <= param_4)) {
      _memmove(param_4,param_2,lVar13 << 5);
    }
    local_58 = param_4 + lVar13 * 4;
    puVar14 = param_2;
    if (0x1f < lVar8) {
      while (puVar14 = param_2, param_1 < param_2) {
        puVar4 = param_2 + -4;
        puVar12 = param_3;
        while( true ) {
          param_3 = puVar12 + -4;
          puVar11 = local_58 + -4;
          uVar9 = *puVar11;
          uVar15 = local_58[-3];
          uVar7 = local_58[-1];
          uVar5 = param_2[-4];
          uVar1 = param_2[-3];
          uVar2 = uVar15;
          __sSS10lowercasedSSyF();
          uVar3 = uVar1;
          __sSS10lowercasedSSyF();
          if (uVar9 == uVar5 && uVar2 == uVar3) {
            uVar9 = 0;
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar9,uVar2,uVar5,uVar3,1);
          }
          _swift_bridgeObjectRetain(uVar15);
          _swift_bridgeObjectRetain(uVar7);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRelease(uVar7);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar3);
          if ((uVar9 & 1) != 0) break;
          if (puVar12 != local_58) {
            uVar9 = *puVar11;
            uVar15 = local_58[-1];
            uVar5 = local_58[-2];
            puVar12[-3] = local_58[-3];
            *param_3 = uVar9;
            puVar12[-1] = uVar15;
            puVar12[-2] = uVar5;
          }
          puVar12 = param_3;
          local_58 = puVar11;
          if (puVar11 <= param_4) goto LAB_1002c0a84;
        }
        if (puVar12 != param_2) {
          uVar9 = *puVar4;
          uVar15 = param_2[-1];
          uVar5 = param_2[-2];
          puVar12[-3] = param_2[-3];
          *param_3 = uVar9;
          puVar12[-1] = uVar15;
          puVar12[-2] = uVar5;
        }
        puVar14 = puVar4;
        param_2 = puVar4;
        if (local_58 <= param_4) break;
      }
    }
  }
LAB_1002c0a84:
  uVar5 = (long)local_58 - (long)param_4;
  uVar9 = uVar5 + 0x1f;
  if (-1 < (long)uVar5) {
    uVar9 = uVar5;
  }
  if ((puVar14 != param_4) || ((ulong *)((long)param_4 + (uVar9 & 0xffffffffffffffe0)) <= puVar14))
  {
    _memmove(puVar14,param_4,((long)uVar9 >> 5) << 5);
  }
  return 1;
}

