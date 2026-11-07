// rea decompile_all
// name: FUN_100696dac
// address: 0x100696dac
// body: available
// range: 0x100696dac-0x100696f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100696dac(pthread_cond_t *param_1,ulong *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  int in_wzr;
  timespec local_50;
  timeval local_40;
  
  uVar2 = *param_2;
  FUN_100697124();
  if ((uVar2 & 1) == 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                  ,0x4c,"wait","lock.internal().islocked()");
  }
  _gettimeofday(&local_40,(void *)0x0);
  local_50.tv_nsec = (param_3 % 1000) * 1000000 + (long)local_40.tv_usec * 1000;
  local_50.tv_sec = local_40.tv_sec + param_3 / 1000 + local_50.tv_nsec / 1000000000;
  local_50.tv_nsec = local_50.tv_nsec % 1000000000;
  iVar1 = *(int *)(param_1[2].__opaque + 0x20);
  if (iVar1 == 1) {
    *(int *)(param_1[2].__opaque + 0x20) = in_wzr;
  }
  if (iVar1 != 0) {
    param_1[2].__opaque[0x20] = '\0';
    param_1[2].__opaque[0x21] = '\0';
    param_1[2].__opaque[0x22] = '\0';
    param_1[2].__opaque[0x23] = '\0';
    return 0;
  }
  iVar1 = _pthread_cond_timedwait(param_1,(pthread_mutex_t *)(*param_2 + 8),&local_50);
  param_1[2].__opaque[0x20] = '\0';
  param_1[2].__opaque[0x21] = '\0';
  param_1[2].__opaque[0x22] = '\0';
  param_1[2].__opaque[0x23] = '\0';
  if (iVar1 < 0x16) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                    ,0x5c,"wait","0 == EPERM");
      return 1;
    }
  }
  else {
    if (iVar1 == 0x16) {
      FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                    ,0x5e,"wait","0 == EINVAL");
      return 0x16;
    }
    if (iVar1 == 0x3c) {
      return 0x3c;
    }
  }
  FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                ,0x60,"wait","0 == ret","%d");
  return iVar1;
}

