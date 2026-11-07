// rea decompile_all
// name: FUN_1005a4168
// address: 0x1005a4168
// body: available
// range: 0x1005a4168-0x1005a4227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005a4218 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1005a4168(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  cVar1 = *(char *)(param_2 + 2);
  if ((long)*(char *)(param_1 + 2) == 0xc) {
    if (cVar1 != '\f') {
      return 0;
    }
  }
  else {
    if (cVar1 == '\f') {
      return 0;
    }
    if (*(long *)(&DAT_10083cc80 + (long)*(char *)(param_1 + 2) * 8) !=
        *(long *)(&DAT_10083cc80 + (long)cVar1 * 8)) {
      return 0;
    }
  }
  lVar4 = param_1[4];
  lVar3 = param_2[4];
  if (lVar4 == 0) {
    if (lVar3 == 0) {
LAB_1005a4208:
      uVar2 = *param_1;
      FUN_1000094a4(uVar2,param_1[1],*param_2,param_2[1]);
      return uVar2;
    }
  }
  else if (lVar3 != 0) {
    uVar5 = param_1[3];
    if (((uVar5 == param_2[3]) && (lVar4 == lVar3)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar4,param_2[3],lVar3,0), (uVar5 & 1) != 0)) goto LAB_1005a4208;
  }
  return 0;
}

