// rea decompile_all
// name: FUN_1007a4c4c
// address: 0x1007a4c4c
// body: available
// range: 0x1007a4c4c-0x1007a4d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a4d28 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a4c4c(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  code *pcVar3;
  char acStack_6a [50];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar1 = param_2;
  FUN_1007a4a44();
  if (NAN(param_1)) {
    if ((int)puVar1 == 0) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0001007a4d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_2)("null",4,param_2[1]);
        return;
      }
      goto LAB_1007a4d28;
    }
  }
  else if ((int)puVar1 == 0) {
    _snprintf(acStack_6a,0x32,"%lg");
    pcVar3 = (code *)*param_2;
    sVar2 = _strlen(acStack_6a);
    (*pcVar3)(acStack_6a,sVar2,param_2[1]);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
LAB_1007a4d28:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

