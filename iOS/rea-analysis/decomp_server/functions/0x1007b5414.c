// rea decompile_all
// name: FUN_1007b5414
// address: 0x1007b5414
// body: available
// range: 0x1007b5414-0x1007b565b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007b5414(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  
  lVar2 = (long)param_2 - (long)param_1;
  lVar8 = lVar2 + 0xf;
  if (-1 < lVar2) {
    lVar8 = lVar2;
  }
  lVar8 = lVar8 >> 4;
  lVar3 = (long)param_3 - (long)param_2;
  lVar2 = lVar3 + 0xf;
  if (-1 < lVar3) {
    lVar2 = lVar3;
  }
  lVar2 = lVar2 >> 4;
  if (lVar8 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar8 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar8 << 4);
    }
    puVar9 = param_4 + lVar8 * 2;
    puVar6 = param_2;
    param_2 = param_1;
    while ((param_4 < puVar9 && (puVar6 < param_3))) {
      uVar11 = *puVar6;
      if ((uVar11 == *param_4 && puVar6[1] == param_4[1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar11 & 1) == 0)) {
        puVar7 = param_4 + 2;
        puVar4 = puVar6;
        puVar6 = param_4;
        puVar10 = puVar7;
        if (param_2 == param_4) goto joined_r0x0001007b5504;
LAB_1007b5510:
        uVar11 = *puVar6;
        param_2[1] = puVar6[1];
        *param_2 = uVar11;
      }
      else {
        puVar4 = puVar6 + 2;
        puVar7 = param_4;
        puVar10 = puVar4;
        if (param_2 != puVar6) goto LAB_1007b5510;
joined_r0x0001007b5504:
        if (puVar10 <= param_2) goto LAB_1007b5510;
      }
      param_2 = param_2 + 2;
      param_4 = puVar7;
      puVar6 = puVar4;
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar2 << 4);
    }
    puVar9 = param_4 + lVar2 * 2;
    while ((puVar6 = param_3, param_4 < puVar9 && (param_1 < param_2))) {
      param_3 = puVar6 + -2;
      puVar4 = puVar9 + -2;
      uVar11 = *puVar4;
      puVar7 = param_2 + -2;
      if ((uVar11 == *puVar7 && puVar9[-1] == param_2[-1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar11 & 1) == 0)) {
        puVar7 = param_2;
        puVar10 = puVar4;
        param_2 = puVar9;
        if (puVar6 == puVar9) goto joined_r0x0001007b55c8;
        goto LAB_1007b55dc;
      }
      puVar4 = puVar9;
      puVar10 = puVar7;
      if (puVar6 != param_2) goto LAB_1007b55dc;
joined_r0x0001007b55c8:
      bVar1 = param_2 <= param_3;
      puVar9 = puVar4;
      param_2 = puVar7;
      if (bVar1) {
LAB_1007b55dc:
        uVar11 = *puVar10;
        puVar6[-1] = puVar10[1];
        *param_3 = uVar11;
        puVar9 = puVar4;
        param_2 = puVar7;
      }
    }
  }
  uVar5 = (long)puVar9 - (long)param_4;
  uVar11 = uVar5 + 0xf;
  if (-1 < (long)uVar5) {
    uVar11 = uVar5;
  }
  if ((param_2 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xfffffffffffffff0)) <= param_2))
  {
    _memmove(param_2,param_4,((long)uVar11 >> 4) << 4);
  }
  return 1;
}

