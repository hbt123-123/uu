// rea decompile_all
// name: FUN_1004924a8
// address: 0x1004924a8
// body: available
// range: 0x1004924a8-0x100492593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100492540 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1004924a8(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  
  lVar3 = *param_1;
  lVar5 = *param_2;
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 == *(long *)(lVar5 + 0x10)) {
    if (lVar2 != 0 && lVar3 != lVar5) {
      piVar4 = (int *)(lVar3 + 0x20);
      piVar6 = (int *)(lVar5 + 0x20);
      do {
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100492594);
          (*pcVar1)();
        }
        if (*piVar4 != *piVar6) {
          return 0;
        }
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    lVar2 = param_1[1];
    lVar3 = param_2[1];
    if ((*(byte *)(param_2 + 2) & 1) == 0) {
      if (lVar2 == lVar3) goto LAB_100492530;
    }
    else if (lVar3 < 3) {
      if (lVar3 == 0) {
        if (lVar2 == 0) goto LAB_100492530;
      }
      else if (lVar3 == 1) {
        if (lVar2 == 1) {
LAB_100492530:
          lVar2 = param_1[3];
          FUN_1000094a4(lVar2,param_1[4],param_2[3],param_2[4]);
          return lVar2;
        }
      }
      else if (lVar2 == 2) goto LAB_100492530;
    }
    else if (lVar3 == 3) {
      if (lVar2 == 3) goto LAB_100492530;
    }
    else if (lVar3 == 4) {
      if (lVar2 == 4) goto LAB_100492530;
    }
    else if (lVar2 == 5) goto LAB_100492530;
  }
  return 0;
}

