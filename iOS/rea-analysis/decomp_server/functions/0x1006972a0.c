// rea decompile_all
// name: FUN_1006972a0
// address: 0x1006972a0
// body: available
// range: 0x1006972a0-0x1006972f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006972a0(undefined8 *param_1)

{
  if (((*(byte *)(param_1 + 1) & 1) == 0) &&
     (FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/lock.h"
                    ,0x3b,"unlock","islocked_"), (*(byte *)(param_1 + 1) & 1) == 0)) {
    return;
  }
  FUN_10069718c(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

