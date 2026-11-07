// rea decompile_all
// name: FUN_10045dfac
// address: 0x10045dfac
// body: available
// range: 0x10045dfac-0x10045e01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045e00c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10045dfac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_1 != param_5) ||
     (lVar2 = *(long *)(param_2 + 0x10), lVar2 != *(long *)(param_6 + 0x10))) {
    return 0;
  }
  if (lVar2 != 0 && param_2 != param_6) {
    piVar3 = (int *)(param_2 + 0x20);
    piVar4 = (int *)(param_6 + 0x20);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10045e01c);
        (*pcVar1)();
      }
      if (*piVar3 != *piVar4) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  FUN_1000094a4(param_3,param_4,param_7,param_8);
  return param_3;
}

