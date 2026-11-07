// rea decompile_all
// name: FUN_10069ca74
// address: 0x10069ca74
// body: available
// range: 0x10069ca74-0x10069caeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069cad4 to 0x10069de30 FUN_10069de30 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069ca74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_10069caec(param_2,param_2[1]);
    if (puVar1 != (undefined8 *)0xffffffffffffffff) {
      param_2 = (undefined8 *)*param_2;
      goto LAB_10069cabc;
    }
  }
  else {
    FUN_10069caec();
    if (puVar1 != (undefined8 *)0xffffffffffffffff) {
LAB_10069cabc:
      FUN_10069de30(param_1,(long)param_2 + (long)puVar1,(long)param_2 + (long)puVar1 + 1);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

