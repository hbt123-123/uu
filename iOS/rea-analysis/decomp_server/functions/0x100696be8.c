// rea decompile_all
// name: mars::comm::Thread::cleanup
// address: 0x100696be8
// body: available
// range: 0x100696be8-0x100696ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* mars::comm::Thread::cleanup(void*) */

void mars::comm::Thread::cleanup(void *param_1)

{
  long local_30;
  char local_28;
  
  local_30 = (long)param_1 + 200;
  local_28 = '\0';
  FUN_100696a10(&local_30);
  if (param_1 == (void *)0x0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1c8,"cleanup","runableref != 0");
  }
  if (*(long *)param_1 == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1c9,"cleanup","runableref->target != 0");
  }
  if (*(long *)((long)param_1 + 0x10) == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1ca,"cleanup","runableref->tid != 0");
  }
  if ((*(byte *)((long)param_1 + 0xcc) & 1) == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x1cb,"cleanup","runableref->isinthread");
  }
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)((long)param_1 + 0xd0) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  FUN_100696964(param_1,&local_30);
  if (local_28 == '\x01') {
    FUN_100696d54(&local_30);
  }
  return;
}

