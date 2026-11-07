// rea decompile_all
// name: FUN_1007ce044
// address: 0x1007ce044
// body: available
// range: 0x1007ce044-0x1007ce137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007ce044(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (DAT_100abba58 != -1) {
    _swift_once(&DAT_100abba58,FUN_1007cdd44);
  }
  lVar3 = DAT_100b3a970;
  lVar4 = *(long *)(DAT_100b3a970 + 0x10);
  if (lVar4 == 0) {
    lVar3 = 4;
  }
  else {
    uVar1 = *(ulong *)(DAT_100b3a970 + 0x20);
    if ((uVar1 == param_1 && *(long *)(DAT_100b3a970 + 0x28) == param_2) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,*(long *)(DAT_100b3a970 + 0x28),param_1,param_2,0), (uVar1 & 1) != 0)) {
      lVar3 = 0;
    }
    else {
      plVar5 = (long *)(lVar3 + 0x38);
      lVar3 = 1;
      do {
        lVar2 = lVar3;
        if (lVar4 == lVar2) {
          return 4;
        }
        uVar1 = plVar5[-1];
        if (uVar1 == param_1 && *plVar5 == param_2) break;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,*plVar5,param_1,param_2,0);
        plVar5 = plVar5 + 2;
        lVar3 = lVar2 + 1;
      } while ((uVar1 & 1) == 0);
      lVar3 = 4;
      if (lVar2 - 1U < 5) {
        lVar3 = lVar2;
      }
    }
  }
  return lVar3;
}

