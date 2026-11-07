// rea decompile_all
// name: FUN_1002bbc2c
// address: 0x1002bbc2c
// body: available
// range: 0x1002bbc2c-0x1002bbcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002bbc2c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  __sSS10lowercasedSSyF();
  lVar5 = *(long *)(param_3 + 0x10);
  uVar4 = (ulong)(lVar5 == 0);
  if (lVar5 != 0) {
    lVar3 = 0;
    plVar6 = (long *)(param_3 + 0x28);
    do {
      uVar1 = plVar6[-1];
      lVar2 = *plVar6;
      __sSS10lowercasedSSyF();
      if (uVar1 == param_1 && lVar2 == param_2) {
        _swift_bridgeObjectRelease(param_2);
        goto LAB_1002bbcd0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(lVar2);
      lVar2 = param_2;
      if ((uVar1 & 1) != 0) goto LAB_1002bbcd0;
      lVar3 = lVar3 + 1;
      plVar6 = plVar6 + 4;
      uVar4 = (ulong)(lVar5 == lVar3);
    } while (lVar5 != lVar3);
  }
  lVar3 = 0;
  lVar2 = param_2;
LAB_1002bbcd0:
  _swift_bridgeObjectRelease(lVar2);
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar3;
  return auVar7;
}

