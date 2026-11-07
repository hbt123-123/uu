// rea decompile_all
// name: FUN_1003cc6f8
// address: 0x1003cc6f8
// body: available
// range: 0x1003cc6f8-0x1003cc7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003cc6f8(double param_1,long param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = 0;
  FUN_1003d0d4c();
  lVar6 = 0;
  FUN_1003c5f68();
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_3 + *(int *)(lVar6 + 0x14));
  if ((1.0 < ABS(param_1)) ||
     ((puVar1 = (ulong *)(param_2 + *(int *)(lVar5 + 0x18)), uVar7 = *puVar1,
      puVar2 = (ulong *)(param_3 + *(int *)(lVar6 + 0x18)),
      uVar7 != *puVar2 || puVar1[1] != puVar2[1] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar7 & 1) == 0)))) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)(param_2 + *(int *)(lVar5 + 0x1c));
    lVar5 = plVar3[1];
    if ((lVar5 == 0) ||
       (lVar8 = *plVar3, plVar3 = (long *)(param_3 + *(int *)(lVar6 + 0x1c)),
       lVar8 == *plVar3 && lVar5 == plVar3[1])) {
      uVar4 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar4 = (uint)lVar8 & 1;
    }
  }
  return uVar4;
}

