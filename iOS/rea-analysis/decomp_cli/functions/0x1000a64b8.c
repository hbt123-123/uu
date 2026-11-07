// rea decompile_all
// name: FUN_1000a64b8
// address: 0x1000a64b8
// body: available
// range: 0x1000a64b8-0x1000a655f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a6500 to 0x1000c2570 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000a64b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar1 = *param_2;
  lVar2 = param_2[1];
  cVar3 = (char)param_2[2];
  if ((char)param_1[2] == '\0') {
    if (cVar3 != '\0') {
      return 0;
    }
  }
  else {
    if ((char)param_1[2] != '\x01') {
      if (lVar4 == 0 && lVar5 == 0) {
        if (cVar3 == '\x02' && (lVar2 == 0 && lVar1 == 0)) {
          return 1;
        }
        return 0;
      }
      if (lVar4 == 1 && lVar5 == 0) {
        if (cVar3 != '\x02') {
          return 0;
        }
        if (lVar1 != 1) {
          return 0;
        }
      }
      else {
        if (cVar3 != '\x02') {
          return 0;
        }
        if (lVar1 != 2) {
          return 0;
        }
      }
      if (lVar2 == 0) {
        return 1;
      }
      return 0;
    }
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  if (lVar4 == lVar1 && lVar5 == lVar2) {
    return 1;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
  return lVar4;
}

