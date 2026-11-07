// rea decompile_all
// name: FUN_100696ffc
// address: 0x100696ffc
// body: available
// range: 0x100696ffc-0x100697123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100696ffc(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (((long *)*param_1 != param_1) &&
     (FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                    ,0x55,"lock","reinterpret_cast<uintptr_t>(this) == magic_ && 0 != magic_",
                    "this:%p != mageic:%p"), (long *)*param_1 != param_1)) {
    return false;
  }
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
  if (iVar1 < 0x16) {
    if (iVar1 == 0) goto LAB_10069710c;
    if (iVar1 == 0xb) {
      pcVar3 = "0 == EDEADLK";
      uVar2 = 0x61;
    }
    else {
LAB_1006970cc:
      pcVar3 = "0 == ret";
      uVar2 = 99;
    }
  }
  else if (iVar1 == 0x23) {
    pcVar3 = "0 == EAGAIN";
    uVar2 = 0x5f;
  }
  else {
    if (iVar1 != 0x16) goto LAB_1006970cc;
    pcVar3 = "0 == EINVAL";
    uVar2 = 0x5d;
  }
  FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                ,uVar2,"lock",pcVar3);
LAB_10069710c:
  return iVar1 == 0;
}

