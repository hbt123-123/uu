// rea decompile_all
// name: FUN_100697124
// address: 0x100697124
// body: available
// range: 0x100697124-0x10069718b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100697124(long *param_1)

{
  int iVar1;
  
  if ((long *)*param_1 != param_1) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                  ,0xf3,"islocked","reinterpret_cast<uintptr_t>(this) == magic_");
  }
  iVar1 = _pthread_mutex_trylock((pthread_mutex_t *)(param_1 + 1));
  if (iVar1 == 0) {
    FUN_10069718c(param_1);
  }
  return iVar1 != 0;
}

