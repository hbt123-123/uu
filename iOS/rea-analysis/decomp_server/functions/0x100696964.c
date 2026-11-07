// rea decompile_all
// name: FUN_100696964
// address: 0x100696964
// body: available
// range: 0x100696964-0x100696a0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100696a0c to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100696964(void *param_1,long param_2)

{
  int iVar1;
  
  if (*(int *)((long)param_1 + 8) < 1) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x6d,"RemoveRef","0 < count");
  }
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x6e,"RemoveRef","_lock.islocked()");
  }
  iVar1 = *(int *)((long)param_1 + 8) + -1;
  *(int *)((long)param_1 + 8) = iVar1;
  FUN_100696d54(param_2);
  if (iVar1 != 0) {
    return;
  }
  FUN_1006972f8();
  operator_delete(param_1);
  return;
}

