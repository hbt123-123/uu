// rea decompile_all
// name: FUN_1006a0d24
// address: 0x1006a0d24
// body: available
// range: 0x1006a0d24-0x1006a0e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006a0d24(long param_1,undefined1 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long local_40;
  char local_38;
  
  local_40 = *(long *)(param_1 + 8) + 200;
  local_38 = '\0';
  FUN_100696a10(&local_40);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  plVar3 = *(long **)(param_1 + 8);
  if (*(char *)((long)plVar3 + 0x19) == '\x01') {
    if (((pthread_t)plVar3[2] != (pthread_t)0x0) && ((*(byte *)(plVar3 + 3) & 1) == 0)) {
      _pthread_detach((pthread_t)plVar3[2]);
      plVar3 = *(long **)(param_1 + 8);
    }
    if (*plVar3 == 0) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                    ,0xbe,"start","runable_ref_->target");
      plVar3 = *(long **)(param_1 + 8);
    }
    *(undefined1 *)((long)plVar3 + 0x19) = 0;
    *(undefined1 *)(plVar3 + 3) = *(undefined1 *)(param_1 + 0x50);
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    iVar1 = _pthread_create((pthread_t *)(plVar3 + 2),(pthread_attr_t *)(param_1 + 0x10),
                            (void **)PTR_start_routine_100996590,plVar3);
    if (iVar1 != 0) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                    ,0xc5,"start","0 == ret");
    }
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    if (iVar1 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      *(undefined1 *)(lVar2 + 0x19) = 1;
      FUN_100696964(lVar2,&local_40);
    }
  }
  else {
    iVar1 = 0;
  }
  if (local_38 == '\x01') {
    FUN_100696d54(&local_40);
  }
  return iVar1;
}

