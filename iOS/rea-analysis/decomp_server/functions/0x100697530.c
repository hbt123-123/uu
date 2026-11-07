// rea decompile_all
// name: FUN_100697530
// address: 0x100697530
// body: available
// range: 0x100697530-0x1006975f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100697530(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long local_30;
  char local_28;
  
  *param_1 = &PTR_thunk_FUN_100697530_1009e6890;
  iVar1 = _pthread_attr_destroy((pthread_attr_t *)(param_1 + 2));
  if (iVar1 != 0) {
    FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0xac,"~Thread","0 == res","res=%d");
  }
  local_30 = param_1[1] + 200;
  local_28 = '\0';
  FUN_100696a10(&local_30);
  lVar2 = param_1[1];
  if ((*(pthread_t *)(lVar2 + 0x10) != (pthread_t)0x0) && ((*(byte *)(lVar2 + 0x18) & 1) == 0)) {
    _pthread_detach(*(pthread_t *)(lVar2 + 0x10));
    lVar2 = param_1[1];
  }
  FUN_100696964(lVar2,&local_30);
  if (local_28 == '\x01') {
    FUN_100696d54(&local_30);
  }
  return param_1;
}

