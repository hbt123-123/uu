// rea decompile_all
// name: FUN_1006a4ce0
// address: 0x1006a4ce0
// body: available
// range: 0x1006a4ce0-0x1006a4e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1006a4ce0(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *local_40;
  char local_38;
  
  *param_1 = &PTR_thunk_FUN_100697530_1009e6890;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 10) = param_4;
  puVar2 = operator_new(0x158);
  puVar3 = operator_new(0x20);
  *puVar3 = &PTR_FUN_1009e6c50;
  uVar4 = *param_2;
  puVar3[2] = param_2[1];
  puVar3[1] = uVar4;
  puVar3[3] = param_2[2];
  *puVar2 = puVar3;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined2 *)(puVar2 + 3) = 0x100;
  puVar2[5] = 0x7ff8000000000000;
  puVar2[4] = 0x7ff8000000000000;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_1006977cc(puVar2 + 7);
  local_40 = puVar2 + 0x19;
  *(undefined4 *)local_40 = 0;
  *(undefined1 *)((long)puVar2 + 0xcc) = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x27] = 0;
  puVar2[0x26] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  *(undefined4 *)(puVar2 + 0x2a) = 0;
  param_1[1] = puVar2;
  local_38 = '\0';
  FUN_100696a10(&local_40);
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + 1;
  iVar1 = _pthread_attr_init((pthread_attr_t *)(param_1 + 2));
  if (iVar1 != 0) {
    FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/../../mars/comm/thread/../unix/thread/thread.h"
                  ,0x99,"Thread","0 == res","res=%d");
  }
  if (param_3 != (char *)0x0) {
    _strncpy((char *)(param_1[1] + 0xd4),param_3,0x80);
  }
  if (local_38 == '\x01') {
    FUN_100696d54(&local_40);
  }
  return param_1;
}

