// rea decompile_all
// name: FUN_100696a70
// address: 0x100696a70
// body: available
// range: 0x100696a70-0x100696be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100696be4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100696a70(long *param_1)

{
  pthread_t p_Var1;
  __uint64_t local_c8;
  long *local_c0;
  char local_b8;
  char local_b0 [136];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_c0 = param_1 + 0x19;
  local_b8 = '\0';
  FUN_100696a10(&local_c0);
  if (param_1 == (long *)0x0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1a3,"init","runableref != 0");
  }
  if (*param_1 == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1a4,"init","runableref->target != 0");
  }
  if (*(char *)((long)param_1 + 0xcc) == '\x01') {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1a5,"init","!runableref->isinthread");
  }
  *(undefined1 *)((long)param_1 + 0xcc) = 1;
  local_b0[0x68] = '\0';
  local_b0[0x69] = '\0';
  local_b0[0x6a] = '\0';
  local_b0[0x6b] = '\0';
  local_b0[0x6c] = '\0';
  local_b0[0x6d] = '\0';
  local_b0[0x6e] = '\0';
  local_b0[0x6f] = '\0';
  local_b0[0x60] = '\0';
  local_b0[0x61] = '\0';
  local_b0[0x62] = '\0';
  local_b0[99] = '\0';
  local_b0[100] = '\0';
  local_b0[0x65] = '\0';
  local_b0[0x66] = '\0';
  local_b0[0x67] = '\0';
  local_b0[0x78] = '\0';
  local_b0[0x79] = '\0';
  local_b0[0x7a] = '\0';
  local_b0[0x7b] = '\0';
  local_b0[0x7c] = '\0';
  local_b0[0x7d] = '\0';
  local_b0[0x7e] = '\0';
  local_b0[0x7f] = '\0';
  local_b0[0x70] = '\0';
  local_b0[0x71] = '\0';
  local_b0[0x72] = '\0';
  local_b0[0x73] = '\0';
  local_b0[0x74] = '\0';
  local_b0[0x75] = '\0';
  local_b0[0x76] = '\0';
  local_b0[0x77] = '\0';
  local_b0[0x48] = '\0';
  local_b0[0x49] = '\0';
  local_b0[0x4a] = '\0';
  local_b0[0x4b] = '\0';
  local_b0[0x4c] = '\0';
  local_b0[0x4d] = '\0';
  local_b0[0x4e] = '\0';
  local_b0[0x4f] = '\0';
  local_b0[0x40] = '\0';
  local_b0[0x41] = '\0';
  local_b0[0x42] = '\0';
  local_b0[0x43] = '\0';
  local_b0[0x44] = '\0';
  local_b0[0x45] = '\0';
  local_b0[0x46] = '\0';
  local_b0[0x47] = '\0';
  local_b0[0x58] = '\0';
  local_b0[0x59] = '\0';
  local_b0[0x5a] = '\0';
  local_b0[0x5b] = '\0';
  local_b0[0x5c] = '\0';
  local_b0[0x5d] = '\0';
  local_b0[0x5e] = '\0';
  local_b0[0x5f] = '\0';
  local_b0[0x50] = '\0';
  local_b0[0x51] = '\0';
  local_b0[0x52] = '\0';
  local_b0[0x53] = '\0';
  local_b0[0x54] = '\0';
  local_b0[0x55] = '\0';
  local_b0[0x56] = '\0';
  local_b0[0x57] = '\0';
  local_b0[0x28] = '\0';
  local_b0[0x29] = '\0';
  local_b0[0x2a] = '\0';
  local_b0[0x2b] = '\0';
  local_b0[0x2c] = '\0';
  local_b0[0x2d] = '\0';
  local_b0[0x2e] = '\0';
  local_b0[0x2f] = '\0';
  local_b0[0x20] = '\0';
  local_b0[0x21] = '\0';
  local_b0[0x22] = '\0';
  local_b0[0x23] = '\0';
  local_b0[0x24] = '\0';
  local_b0[0x25] = '\0';
  local_b0[0x26] = '\0';
  local_b0[0x27] = '\0';
  local_b0[0x38] = '\0';
  local_b0[0x39] = '\0';
  local_b0[0x3a] = '\0';
  local_b0[0x3b] = '\0';
  local_b0[0x3c] = '\0';
  local_b0[0x3d] = '\0';
  local_b0[0x3e] = '\0';
  local_b0[0x3f] = '\0';
  local_b0[0x30] = '\0';
  local_b0[0x31] = '\0';
  local_b0[0x32] = '\0';
  local_b0[0x33] = '\0';
  local_b0[0x34] = '\0';
  local_b0[0x35] = '\0';
  local_b0[0x36] = '\0';
  local_b0[0x37] = '\0';
  local_b0[8] = '\0';
  local_b0[9] = '\0';
  local_b0[10] = '\0';
  local_b0[0xb] = '\0';
  local_b0[0xc] = '\0';
  local_b0[0xd] = '\0';
  local_b0[0xe] = '\0';
  local_b0[0xf] = '\0';
  local_b0[0] = '\0';
  local_b0[1] = '\0';
  local_b0[2] = '\0';
  local_b0[3] = '\0';
  local_b0[4] = '\0';
  local_b0[5] = '\0';
  local_b0[6] = '\0';
  local_b0[7] = '\0';
  local_b0[0x18] = '\0';
  local_b0[0x19] = '\0';
  local_b0[0x1a] = '\0';
  local_b0[0x1b] = '\0';
  local_b0[0x1c] = '\0';
  local_b0[0x1d] = '\0';
  local_b0[0x1e] = '\0';
  local_b0[0x1f] = '\0';
  local_b0[0x10] = '\0';
  local_b0[0x11] = '\0';
  local_b0[0x12] = '\0';
  local_b0[0x13] = '\0';
  local_b0[0x14] = '\0';
  local_b0[0x15] = '\0';
  local_b0[0x16] = '\0';
  local_b0[0x17] = '\0';
  local_c8 = 0;
  _pthread_threadid_np((pthread_t)0x0,&local_c8);
  _snprintf(local_b0,0x80,"%s *%llu");
  if (local_b0[0] != '\0') {
    _pthread_setname_np(local_b0);
  }
  if ((0 < (int)param_1[0x1a]) && ((int)param_1[0x1a] < 0x21)) {
    FUN_100696d54(&local_c0);
    p_Var1 = _pthread_self();
    _pthread_kill(p_Var1,(int)param_1[0x1a]);
  }
  if (local_b8 == '\x01') {
    FUN_100696d54(&local_c0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

