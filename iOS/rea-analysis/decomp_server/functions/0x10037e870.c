// rea decompile_all
// name: thunk_FUN_10037e7cc
// address: 0x10037e870
// body: available
// range: 0x10037e870-0x10037e873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * thunk_FUN_10037e7cc(undefined2 *param_1,ulong param_2)

{
  void *pvVar1;
  char *pcVar2;
  int *piVar3;
  runtime_error *unaff_x20;
  
  if (param_2 < 0x19) {
    *(undefined1 *)param_1 = 0;
    *(char *)((long)param_1 + 1) = (char)param_2;
  }
  else {
    *param_1 = 1;
    *(ulong *)(param_1 + 1) = param_2;
    pvVar1 = _malloc(param_2);
    *(void **)(param_1 + 5) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      pcVar2 = (char *)0x10;
      ___cxa_allocate_exception();
      piVar3 = ___error();
      _strerror(*piVar3);
      std::runtime_error::runtime_error(unaff_x20,pcVar2);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pcVar2,PTR_typeinfo_100995140,PTR__runtime_error_1009950f8);
    }
    *(undefined8 *)(param_1 + 9) = 0;
  }
  return param_1;
}

