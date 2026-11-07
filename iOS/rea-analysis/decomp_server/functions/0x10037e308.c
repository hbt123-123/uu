// rea decompile_all
// name: thunk_FUN_10037e1f0
// address: 0x10037e308
// body: available
// range: 0x10037e308-0x10037e30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * thunk_FUN_10037e1f0(undefined1 *param_1,runtime_error *param_2)

{
  runtime_error rVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int *piVar4;
  ulong uVar5;
  size_t sVar6;
  runtime_error *prVar7;
  
  *param_1 = 0;
  if (*param_2 == (runtime_error)0x0) {
    rVar1 = param_2[1];
    *(runtime_error *)(param_1 + 1) = rVar1;
    sVar6 = (ulong)(byte)rVar1;
    prVar7 = param_2 + 2;
    if (*param_2 != (runtime_error)0x0) {
      sVar6 = *(size_t *)(param_2 + 2);
      prVar7 = *(runtime_error **)(param_2 + 10);
    }
    puVar2 = param_1 + 2;
  }
  else {
    *param_1 = 1;
    prVar7 = param_2 + 2;
    uVar5 = *(ulong *)prVar7;
    *(int *)(param_1 + 1) = (int)uVar5;
    if (*(long *)(param_2 + 0x12) == 0) {
      if (*param_2 != (runtime_error)0x0) {
        prVar7 = *(runtime_error **)(param_2 + 10);
      }
      *(runtime_error **)(param_1 + 5) = prVar7;
      FUN_10037eabc(param_2);
      return param_1;
    }
    sVar6 = uVar5 & 0xffffffff;
    puVar2 = _malloc(sVar6);
    *(undefined1 **)(param_1 + 5) = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      pcVar3 = (char *)0x10;
      ___cxa_allocate_exception();
      piVar4 = ___error();
      _strerror(*piVar4);
      std::runtime_error::runtime_error(param_2,pcVar3);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pcVar3,PTR_typeinfo_100995140,PTR__runtime_error_1009950f8);
    }
    if (*param_2 != (runtime_error)0x0) {
      prVar7 = *(runtime_error **)(param_2 + 10);
    }
  }
  _memcpy(puVar2,prVar7,sVar6);
  return param_1;
}

