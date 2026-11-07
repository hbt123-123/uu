// rea decompile_all
// name: FUN_100695ebc
// address: 0x100695ebc
// body: available
// range: 0x100695ebc-0x100695feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100695fe8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100695ebc(char *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  char *pcVar3;
  timeval local_448;
  char acStack_438 [1024];
  long local_38;
  code *pcVar2;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*param_1 == '\x01') {
    _gettimeofday(&local_448,(void *)0x0);
    *(ulong *)(param_1 + 0x38) = CONCAT44(local_448._12_4_,local_448.tv_usec);
    *(__darwin_time_t *)(param_1 + 0x30) = local_448.tv_sec;
    _bzero(acStack_438,0x400);
    iVar1 = _snprintf(acStack_438,0x400,"<- %s +%ld, %s");
    pcVar2 = (code *)CONCAT44(extraout_var,iVar1);
    FUN_100697b4c();
    if (pcVar2 != (code *)0x0) {
      pcVar3 = param_1 + 8;
      (*pcVar2)(pcVar3,acStack_438);
      if ((int)pcVar3 < 1) goto LAB_100695fa8;
    }
    ___xlogger_Write_impl(param_1 + 8,acStack_438);
  }
LAB_100695fa8:
  if (param_1[0x107] < '\0') {
    operator_delete(*(void **)(param_1 + 0xf0));
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

