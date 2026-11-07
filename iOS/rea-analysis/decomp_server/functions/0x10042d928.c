// rea decompile_all
// name: FUN_10042d928
// address: 0x10042d928
// body: available
// range: 0x10042d928-0x10042d993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042d978 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10042d928(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == *param_2) {
    lVar2 = *(long *)(param_1 + 2);
    lVar3 = *(long *)(param_2 + 2);
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      if (lVar2 == lVar3) goto LAB_10042d968;
    }
    else if (lVar3 == 0) {
      if (lVar2 == 0) goto LAB_10042d968;
    }
    else if (lVar3 == 1) {
      if (lVar2 == 1) {
LAB_10042d968:
        uVar1 = *(undefined8 *)(param_1 + 6);
        FUN_1000094a4(uVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 6),
                      *(undefined8 *)(param_2 + 8));
        return uVar1;
      }
    }
    else if (lVar2 == 2) goto LAB_10042d968;
  }
  return 0;
}

