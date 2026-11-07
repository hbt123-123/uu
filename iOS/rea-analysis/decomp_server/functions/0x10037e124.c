// rea decompile_all
// name: FUN_10037e124
// address: 0x10037e124
// body: available
// range: 0x10037e124-0x10037e1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037e1d4 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10037e124(undefined1 *param_1,runtime_error *param_2,size_t param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  int *piVar3;
  
  *param_1 = 0;
  if (param_3 < 0x1c) {
    param_1[1] = (char)param_3;
    puVar1 = param_1 + 2;
  }
  else {
    *param_1 = 1;
    *(int *)(param_1 + 1) = (int)param_3;
    puVar1 = _malloc(param_3);
    *(undefined1 **)(param_1 + 5) = puVar1;
    if (puVar1 == (undefined1 *)0x0) {
      pcVar2 = (char *)0x10;
      ___cxa_allocate_exception();
      piVar3 = ___error();
      _strerror(*piVar3);
      std::runtime_error::runtime_error(param_2,pcVar2);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pcVar2,PTR_typeinfo_100995140,PTR__runtime_error_1009950f8);
    }
    param_3 = param_3 & 0xffffffff;
  }
  _memcpy(puVar1,param_2,param_3);
  return param_1;
}

