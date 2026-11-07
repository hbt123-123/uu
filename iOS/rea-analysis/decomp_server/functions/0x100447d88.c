// rea decompile_all
// name: FUN_100447d88
// address: 0x100447d88
// body: available
// range: 0x100447d88-0x100447e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100447e18 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100447d88(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    if (lVar2 != lVar3) {
      return 0;
    }
  }
  else if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
  }
  else if (lVar3 == 1) {
    if (lVar2 != 1) {
      return 0;
    }
  }
  else if (lVar2 != 2) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc)) {
    bVar1 = *(byte *)((long)param_2 + 0x24);
    if ((*(byte *)((long)param_1 + 0x24) & 1) == 0) {
      if ((int)param_1[4] != (int)param_2[4]) {
        bVar1 = 1;
      }
      if ((bVar1 & 1) == 0) goto LAB_100447e08;
    }
    else if (bVar1 != 0) {
LAB_100447e08:
      lVar2 = param_1[2];
      FUN_1000094a4(lVar2,param_1[3],param_2[2],param_2[3]);
      return lVar2;
    }
  }
  return 0;
}

