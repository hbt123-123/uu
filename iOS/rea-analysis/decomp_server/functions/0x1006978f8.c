// rea decompile_all
// name: FUN_1006978f8
// address: 0x1006978f8
// body: available
// range: 0x1006978f8-0x100697afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006978f8(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  pthread_mutexattr_t *ppVar4;
  
  *(long *)param_1 = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  ((pthread_mutex_t *)(param_1 + 8))->__sig = 0;
  ppVar4 = (pthread_mutexattr_t *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = 0;
  ppVar4->__sig = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = _pthread_mutexattr_init(ppVar4);
  if (iVar1 != 0) {
    if (iVar1 == 0xc) {
      pcVar3 = "0 == ENOMEM";
      uVar2 = 0x22;
    }
    else {
      pcVar3 = "0 == ret";
      uVar2 = 0x24;
    }
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                  ,uVar2,"Mutex",pcVar3);
  }
  iVar1 = 1;
  if (param_2 != 0) {
    iVar1 = 2;
  }
  iVar1 = _pthread_mutexattr_settype(ppVar4,iVar1);
  if (iVar1 != 0) {
    if (iVar1 == 0x16) {
      pcVar3 = "0 == EINVAL";
      uVar2 = 0x29;
    }
    else {
      pcVar3 = "0 == ret";
      uVar2 = 0x2b;
    }
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                  ,uVar2,"Mutex",pcVar3);
  }
  iVar1 = _pthread_mutex_init((pthread_mutex_t *)(param_1 + 8),ppVar4);
  if (iVar1 < 0x10) {
    if (iVar1 == 0) {
      return param_1;
    }
    if (iVar1 == 1) {
      pcVar3 = "0 == EPERM";
      uVar2 = 0x34;
      goto LAB_100697ae4;
    }
    if (iVar1 == 0xc) {
      pcVar3 = "0 == ENOMEM";
      uVar2 = 0x32;
      goto LAB_100697ae4;
    }
  }
  else {
    if (iVar1 == 0x10) {
      pcVar3 = "0 == EBUSY";
      uVar2 = 0x36;
      goto LAB_100697ae4;
    }
    if (iVar1 == 0x16) {
      pcVar3 = "0 == EINVAL";
      uVar2 = 0x38;
      goto LAB_100697ae4;
    }
    if (iVar1 == 0x23) {
      pcVar3 = "0 == EAGAIN";
      uVar2 = 0x30;
      goto LAB_100697ae4;
    }
  }
  pcVar3 = "0 == ret";
  uVar2 = 0x3a;
LAB_100697ae4:
  FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/mutex.h"
                ,uVar2,"Mutex",pcVar3);
  return param_1;
}

