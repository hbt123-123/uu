// rea decompile_all
// name: FUN_10069718c
// address: 0x10069718c
// body: available
// range: 0x10069718c-0x10069729f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10069718c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((long *)*param_1 != param_1) {
    FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                  ,0x6c,"unlock","reinterpret_cast<uintptr_t>(this) == magic_ && 0 != magic_",
                  "this:%p != mageic:%p");
  }
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  if (iVar1 < 0x16) {
    if (iVar1 == 0) goto LAB_100697288;
    if (iVar1 == 1) {
      pcVar3 = "0 == EPERM";
      uVar2 = 0x76;
    }
    else {
LAB_100697248:
      pcVar3 = "0 == ret";
      uVar2 = 0x78;
    }
  }
  else if (iVar1 == 0x23) {
    pcVar3 = "0 == EAGAIN";
    uVar2 = 0x74;
  }
  else {
    if (iVar1 != 0x16) goto LAB_100697248;
    pcVar3 = "0 == EINVAL";
    uVar2 = 0x72;
  }
  FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                ,uVar2,"unlock",pcVar3);
LAB_100697288:
  return iVar1 == 0;
}

