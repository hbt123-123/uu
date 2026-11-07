// rea decompile_all
// name: FUN_10038774c
// address: 0x10038774c
// body: available
// range: 0x10038774c-0x100387957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038774c(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 *local_30;
  undefined8 *local_28;
  
  if (*(char *)(param_1 + 0x98) == '\x01') {
    local_28 = *(undefined8 **)(param_1 + 200);
    if ((local_28 != (undefined8 *)0x0) && (*(char *)((long)local_28 + 0xc) == '\x01')) {
      FUN_10037dd20(*local_28,*(undefined4 *)(local_28 + 1));
    }
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_100386814(param_1);
  }
  else {
    if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0xa0);
    if (*(int *)(lVar1 + 0x18) < 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x28) == 0) {
      return;
    }
    piVar2 = *(int **)(lVar1 + 0x20);
    if (piVar2 == (int *)0x0) {
      return;
    }
    local_28 = *(undefined8 **)(param_1 + 200);
    if ((local_28 != (undefined8 *)0x0) && (*(char *)((long)local_28 + 0xc) == '\x01')) {
      FUN_10037dd20(*local_28,*(undefined4 *)(local_28 + 1));
      piVar2 = *(int **)(*(long *)(param_1 + 0xa0) + 0x20);
    }
    if ((*(int **)(param_1 + 0xa8))[2] == piVar2[2]) {
      if (**(int **)(param_1 + 0xa8) == *piVar2) goto LAB_10038779c;
      local_30 = *(undefined8 **)(param_1 + 200);
      if ((local_30 != (undefined8 *)0x0) && (*(char *)((long)local_30 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_30,*(undefined4 *)(local_30 + 1));
      }
      lVar1 = *(long *)(param_1 + 0x80);
      FUN_10038fd88();
      if (*(long *)(*(long *)(param_1 + 0x80) + 0x28) == lVar1) {
        FUN_10038731c(param_1);
      }
      else {
        FUN_100386734(1,"MMKV_IO.cpp","checkLoadData",0x14f,
                      "file size has changed [%s] from %zu to %zu");
        FUN_10037f730(param_1,0);
        FUN_100386814(param_1);
      }
      FUN_1003800c0(param_1);
    }
    else {
      FUN_100386734(1,"MMKV_IO.cpp","checkLoadData",0x142,"[%s] oldSeq %u, newSeq %u");
      local_30 = *(undefined8 **)(param_1 + 200);
      if ((local_30 != (undefined8 *)0x0) && (*(char *)((long)local_30 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_30,*(undefined4 *)(local_30 + 1));
      }
      FUN_10037f730(param_1,0);
      FUN_100386814(param_1);
      FUN_1003800c0(param_1);
    }
    FUN_100385fb0(&local_30);
  }
LAB_10038779c:
  FUN_100385fb0(&local_28);
  return;
}

