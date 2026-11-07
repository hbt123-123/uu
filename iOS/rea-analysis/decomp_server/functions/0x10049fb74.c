// rea decompile_all
// name: FUN_10049fb74
// address: 0x10049fb74
// body: available
// range: 0x10049fb74-0x10049fc5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049fc1c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10049fb74(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    lVar2 = param_1[3];
    lVar3 = param_2[3];
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      if (lVar2 != lVar3) {
        return 0;
      }
    }
    else if (lVar3 < 2) {
      if (lVar3 == 0) {
        if (lVar2 != 0) {
          return 0;
        }
      }
      else if (lVar2 != 1) {
        return 0;
      }
    }
    else if (lVar3 == 2) {
      if (lVar2 != 2) {
        return 0;
      }
    }
    else if (lVar3 == 3) {
      if (lVar2 != 3) {
        return 0;
      }
    }
    else if (lVar2 != 4) {
      return 0;
    }
    uVar1 = param_1[5];
    FUN_1000094a4(uVar1,param_1[6],param_2[5],param_2[6]);
    if ((uVar1 & 1) != 0) {
      lVar2 = param_1[7];
      FUN_1000094a4(lVar2,param_1[8],param_2[7],param_2[8]);
      return lVar2;
    }
  }
  return 0;
}

