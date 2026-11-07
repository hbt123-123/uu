// rea decompile_all
// name: FUN_10037c8d8
// address: 0x10037c8d8
// body: available
// range: 0x10037c8d8-0x10037c95f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037c95c to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10037c8d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  void *pvVar1;
  char *pcVar2;
  int *piVar3;
  ulong uVar4;
  runtime_error *unaff_x20;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  uVar4 = (ulong)*(uint *)(param_4 + 4);
  param_1[6] = 0x20;
  param_1[7] = uVar4;
  param_1[8] = uVar4;
  param_1[9] = uVar4;
  pvVar1 = _malloc(0x20);
  param_1[5] = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return param_1;
  }
  pcVar2 = (char *)0x10;
  ___cxa_allocate_exception();
  piVar3 = ___error();
  _strerror(*piVar3);
  std::runtime_error::runtime_error(unaff_x20,pcVar2);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pcVar2,PTR_typeinfo_100995140,PTR__runtime_error_1009950f8);
}

