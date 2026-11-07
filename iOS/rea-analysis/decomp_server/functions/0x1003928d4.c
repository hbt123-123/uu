// rea decompile_all
// name: FUN_1003928d4
// address: 0x1003928d4
// body: available
// range: 0x1003928d4-0x10039295b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100392958 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


pthread_mutex_t * FUN_1003928d4(pthread_mutex_t *param_1)

{
  pthread_mutexattr_t pStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  param_1->__opaque[0x20] = '\0';
  param_1->__opaque[0x21] = '\0';
  param_1->__opaque[0x22] = '\0';
  param_1->__opaque[0x23] = '\0';
  param_1->__opaque[0x24] = '\0';
  param_1->__opaque[0x25] = '\0';
  param_1->__opaque[0x26] = '\0';
  param_1->__opaque[0x27] = '\0';
  param_1->__opaque[0x18] = '\0';
  param_1->__opaque[0x19] = '\0';
  param_1->__opaque[0x1a] = '\0';
  param_1->__opaque[0x1b] = '\0';
  param_1->__opaque[0x1c] = '\0';
  param_1->__opaque[0x1d] = '\0';
  param_1->__opaque[0x1e] = '\0';
  param_1->__opaque[0x1f] = '\0';
  param_1->__opaque[0x30] = '\0';
  param_1->__opaque[0x31] = '\0';
  param_1->__opaque[0x32] = '\0';
  param_1->__opaque[0x33] = '\0';
  param_1->__opaque[0x34] = '\0';
  param_1->__opaque[0x35] = '\0';
  param_1->__opaque[0x36] = '\0';
  param_1->__opaque[0x37] = '\0';
  param_1->__opaque[0x28] = '\0';
  param_1->__opaque[0x29] = '\0';
  param_1->__opaque[0x2a] = '\0';
  param_1->__opaque[0x2b] = '\0';
  param_1->__opaque[0x2c] = '\0';
  param_1->__opaque[0x2d] = '\0';
  param_1->__opaque[0x2e] = '\0';
  param_1->__opaque[0x2f] = '\0';
  param_1->__opaque[0] = '\0';
  param_1->__opaque[1] = '\0';
  param_1->__opaque[2] = '\0';
  param_1->__opaque[3] = '\0';
  param_1->__opaque[4] = '\0';
  param_1->__opaque[5] = '\0';
  param_1->__opaque[6] = '\0';
  param_1->__opaque[7] = '\0';
  param_1->__sig = 0;
  param_1->__opaque[0x10] = '\0';
  param_1->__opaque[0x11] = '\0';
  param_1->__opaque[0x12] = '\0';
  param_1->__opaque[0x13] = '\0';
  param_1->__opaque[0x14] = '\0';
  param_1->__opaque[0x15] = '\0';
  param_1->__opaque[0x16] = '\0';
  param_1->__opaque[0x17] = '\0';
  param_1->__opaque[8] = '\0';
  param_1->__opaque[9] = '\0';
  param_1->__opaque[10] = '\0';
  param_1->__opaque[0xb] = '\0';
  param_1->__opaque[0xc] = '\0';
  param_1->__opaque[0xd] = '\0';
  param_1->__opaque[0xe] = '\0';
  param_1->__opaque[0xf] = '\0';
  _pthread_mutexattr_init(&pStack_38);
  _pthread_mutexattr_settype(&pStack_38,2);
  _pthread_mutex_init(param_1,&pStack_38);
  _pthread_mutexattr_destroy(&pStack_38);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

