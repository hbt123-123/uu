// rea decompile_all
// name: FUN_1000c07cc
// address: 0x1000c07cc
// body: available
// range: 0x1000c07cc-0x1000c09ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000c07cc(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar6 = (long)param_2 - (long)param_1;
  lVar4 = lVar6 + 0xf;
  if (-1 < lVar6) {
    lVar4 = lVar6;
  }
  lVar4 = lVar4 >> 4;
  lVar8 = (long)param_3 - (long)param_2;
  lVar10 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar10 = lVar8;
  }
  lVar10 = lVar10 >> 4;
  if (lVar4 < lVar10) {
    if ((param_4 != param_1) || (param_1 + lVar4 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar4 << 4);
    }
    puVar5 = param_4 + lVar4 * 2;
    puVar2 = param_1;
    if (0xf < lVar6) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar11 & 1) == 0)) {
          puVar3 = param_4 + 2;
          puVar9 = param_4;
        }
        else {
          puVar3 = param_4;
          puVar9 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar3;
        if (puVar2 != puVar9) {
          uVar11 = *puVar9;
          puVar2[1] = puVar9[1];
          *puVar2 = uVar11;
        }
        puVar2 = puVar2 + 2;
      } while (param_4 < puVar5);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar10 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar10 << 4);
    }
    puVar9 = param_4 + lVar10 * 2;
    puVar2 = param_2;
    puVar5 = puVar9;
    if (0xf < lVar8) {
      while (puVar2 = param_2, puVar5 = puVar9, param_1 < param_2) {
        puVar7 = param_2 + -2;
        puVar3 = param_3;
        while( true ) {
          param_3 = puVar3 + -2;
          puVar5 = puVar9 + -2;
          uVar11 = *puVar5;
          if ((uVar11 != param_2[-2] || puVar9[-1] != param_2[-1]) &&
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar11 & 1) != 0)) break;
          if (puVar3 != puVar9) {
            uVar11 = *puVar5;
            puVar3[-1] = puVar9[-1];
            *param_3 = uVar11;
          }
          puVar9 = puVar5;
          puVar3 = param_3;
          if (puVar5 <= param_4) goto LAB_1000c0990;
        }
        if (puVar3 != param_2) {
          uVar11 = *puVar7;
          puVar3[-1] = param_2[-1];
          *param_3 = uVar11;
        }
        puVar2 = puVar7;
        puVar5 = puVar9;
        param_2 = puVar7;
        if (puVar9 <= param_4) break;
      }
    }
  }
LAB_1000c0990:
  uVar1 = (long)puVar5 - (long)param_4;
  uVar11 = uVar1 + 0xf;
  if (-1 < (long)uVar1) {
    uVar11 = uVar1;
  }
  if ((puVar2 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xfffffffffffffff0)) <= puVar2)) {
    _memmove(puVar2,param_4,((long)uVar11 >> 4) << 4);
  }
  return 1;
}

