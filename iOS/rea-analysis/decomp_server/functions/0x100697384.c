// rea decompile_all
// name: FUN_100697384
// address: 0x100697384
// body: available
// range: 0x100697384-0x10069743f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


pthread_cond_t * FUN_100697384(pthread_cond_t *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = _pthread_cond_destroy(param_1);
  if (iVar1 != 0) {
    if (iVar1 == 0x16) {
      pcVar3 = "0 == EINVAL";
      uVar2 = 0x33;
    }
    else {
      if (iVar1 != 0x10) {
        FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                      ,0x35,"~Condition","0 == ret","%d");
        goto LAB_100697424;
      }
      pcVar3 = "0 == EBUSY";
      uVar2 = 0x31;
    }
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                  ,uVar2,"~Condition",pcVar3);
  }
LAB_100697424:
  FUN_100697440(param_1 + 1);
  return param_1;
}

