// rea decompile_all
// name: FUN_1006977cc
// address: 0x1006977cc
// body: available
// range: 0x1006977cc-0x1006978f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


pthread_cond_t * FUN_1006977cc(pthread_cond_t *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  param_1->__opaque[0x10] = '\0';
  param_1->__opaque[0x11] = '\0';
  param_1->__opaque[0x12] = '\0';
  param_1->__opaque[0x13] = '\0';
  param_1->__opaque[0x14] = '\0';
  param_1->__opaque[0x15] = '\0';
  param_1->__opaque[0x16] = '\0';
  param_1->__opaque[0x17] = '\0';
  param_1->__opaque[8] = '\0';
  param_1->__opaque[9] = '\0';
  param_1->__opaque[10] = '\0';
  param_1->__opaque[0xb] = '\0';
  param_1->__opaque[0xc] = '\0';
  param_1->__opaque[0xd] = '\0';
  param_1->__opaque[0xe] = '\0';
  param_1->__opaque[0xf] = '\0';
  param_1->__opaque[0x20] = '\0';
  param_1->__opaque[0x21] = '\0';
  param_1->__opaque[0x22] = '\0';
  param_1->__opaque[0x23] = '\0';
  param_1->__opaque[0x24] = '\0';
  param_1->__opaque[0x25] = '\0';
  param_1->__opaque[0x26] = '\0';
  param_1->__opaque[0x27] = '\0';
  param_1->__opaque[0x18] = '\0';
  param_1->__opaque[0x19] = '\0';
  param_1->__opaque[0x1a] = '\0';
  param_1->__opaque[0x1b] = '\0';
  param_1->__opaque[0x1c] = '\0';
  param_1->__opaque[0x1d] = '\0';
  param_1->__opaque[0x1e] = '\0';
  param_1->__opaque[0x1f] = '\0';
  param_1->__opaque[0] = '\0';
  param_1->__opaque[1] = '\0';
  param_1->__opaque[2] = '\0';
  param_1->__opaque[3] = '\0';
  param_1->__opaque[4] = '\0';
  param_1->__opaque[5] = '\0';
  param_1->__opaque[6] = '\0';
  param_1->__opaque[7] = '\0';
  param_1->__sig = 0;
  FUN_1006978f8(param_1 + 1,0);
  param_1[2].__opaque[0x20] = '\0';
  param_1[2].__opaque[0x21] = '\0';
  param_1[2].__opaque[0x22] = '\0';
  param_1[2].__opaque[0x23] = '\0';
  iVar1 = _pthread_cond_init(param_1,(pthread_condattr_t *)0x0);
  if (iVar1 < 0x10) {
    if (iVar1 == 0) {
      return param_1;
    }
    if (iVar1 != 0xc) {
LAB_1006978c4:
      FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                    ,0x2a,"Condition","0 == ret","%d");
      return param_1;
    }
    pcVar3 = "0 == ENOMEM";
    uVar2 = 0x24;
  }
  else if (iVar1 == 0x10) {
    pcVar3 = "0 == EBUSY";
    uVar2 = 0x26;
  }
  else if (iVar1 == 0x16) {
    pcVar3 = "0 == EINVAL";
    uVar2 = 0x28;
  }
  else {
    if (iVar1 != 0x23) goto LAB_1006978c4;
    pcVar3 = "0 == EAGAIN";
    uVar2 = 0x22;
  }
  FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/../../mars/comm/thread/../unix/thread/condition.h"
                ,uVar2,"Condition",pcVar3);
  return param_1;
}

