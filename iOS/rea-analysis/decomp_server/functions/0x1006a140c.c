// rea decompile_all
// name: FUN_1006a140c
// address: 0x1006a140c
// body: available
// range: 0x1006a140c-0x1006a1547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006a140c(long param_1)

{
  int iVar1;
  pthread_t p_Var2;
  long lVar3;
  pthread_t p_Var4;
  long local_30;
  char local_28;
  
  local_30 = *(long *)(param_1 + 8) + 200;
  local_28 = '\0';
  FUN_100696a10(&local_30);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x14b,"join","!outside_join_");
  }
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x18) == '\x01') {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x14c,"join","!runable_ref_->isjoined");
    lVar3 = *(long *)(param_1 + 8);
  }
  p_Var4 = *(pthread_t *)(lVar3 + 0x10);
  p_Var2 = _pthread_self();
  if (p_Var4 == p_Var2) {
    iVar1 = 0xb;
  }
  else if ((*(byte *)(*(long *)(param_1 + 8) + 0x19) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 8) + 0x18) = 1;
    FUN_100696d54(&local_30);
    iVar1 = _pthread_join(*(pthread_t *)(*(long *)(param_1 + 8) + 0x10),(void **)0x0);
    if (iVar1 != 0 && iVar1 != 3) {
      FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                    ,0x155,"join","0 == ret || ESRCH == ret","pthread_join err:%d");
    }
  }
  else {
    iVar1 = 0;
  }
  if (local_28 == '\x01') {
    FUN_100696d54(&local_30);
  }
  return iVar1;
}

