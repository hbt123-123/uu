// rea decompile_all
// name: FUN_1006a0c98
// address: 0x1006a0c98
// body: available
// range: 0x1006a0c98-0x1006a0d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a0ce4 to 0x1006952c4 FUN_1006952c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0c98(pthread_cond_t *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    param_1[2].__opaque[0x20] = '\x01';
    param_1[2].__opaque[0x21] = '\0';
    param_1[2].__opaque[0x22] = '\0';
    param_1[2].__opaque[0x23] = '\0';
  }
  iVar1 = _pthread_cond_broadcast(param_1);
  if (iVar1 != 0) {
    if (iVar1 == 0x16) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/condition.h"
                    ,0x84,"notifyAll","0 == EINVAL");
      return;
    }
    FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/condition.h"
                  ,0x86,"notifyAll","0 == ret","%d");
  }
  return;
}

