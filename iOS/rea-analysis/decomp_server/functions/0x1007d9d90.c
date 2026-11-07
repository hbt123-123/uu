// rea decompile_all
// name: FUN_1007d9d90
// address: 0x1007d9d90
// body: available
// range: 0x1007d9d90-0x1007d9e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007d9e5c to 0x100692980 FUN_100692980 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d9d90(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  pthread_mutexattr_t pStack_30;
  
  iVar1 = _pthread_mutexattr_init(&pStack_30);
  if (iVar1 == 0) {
    iVar1 = _pthread_mutexattr_settype(&pStack_30,param_2);
    if (iVar1 == 0) {
      iVar1 = _pthread_mutex_init(param_1,&pStack_30);
      if (iVar1 == 0) {
        iVar1 = _pthread_mutexattr_destroy(&pStack_30);
        if (iVar1 == 0) {
          return;
        }
        FUN_1007d9bc4();
      }
      else {
        FUN_1007d9bc4();
      }
    }
    else {
      FUN_1007d9bc4();
    }
  }
  else {
    FUN_1007d9bc4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_100692980(0,"\'%s\' failed with error \'%s\'(%d)\n");
}

