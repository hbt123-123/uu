// rea decompile_all
// name: FUN_1006b6990
// address: 0x1006b6990
// body: available
// range: 0x1006b6990-0x1006b6a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b6a24 to 0x1006b6a5c FUN_1006b6a5c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b6990(long param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x428) != 0) {
    if ((5 < param_2 - 0x66U) && (param_2 != 100)) {
      return -0x3c;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (param_2 < 0xa0) {
    if ((7 < param_2 - 100U) && (param_2 != 10)) {
      return -0x28;
    }
  }
  else if (param_2 < 0x191) {
    if ((0x2a < param_2 - 0xa0U) ||
       ((1L << ((ulong)(param_2 - 0xa0U) & 0x3f) & 0x7000000001fU) == 0)) {
      if (param_2 != 400) {
        return -0x28;
      }
      if ((param_3 != 0) && (*(long *)(param_1 + 0x208) != 0)) {
        return -0x28;
      }
    }
  }
  else if (((4 < param_2 - 1000U) && (1 < param_2 - 0x191U)) && (param_2 != 500)) {
    return -0x28;
  }
  param_1 = param_1 + 0x10;
  FUN_1006b6a5c(param_1);
  return param_1;
}

