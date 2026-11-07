// rea decompile_all
// name: FUN_10037ffc4
// address: 0x10037ffc4
// body: available
// range: 0x10037ffc4-0x100380093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037ffc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *local_30;
  long local_28;
  
  FUN_100386734(1,"MMKV.cpp","sync",0x4a5,"MMKV::sync, SyncFlag = %d");
  local_28 = *(long *)(param_1 + 0xb8);
  if (local_28 != 0) {
    FUN_100392994();
  }
  if (((((*(byte *)(param_1 + 0x98) & 1) == 0) &&
       (lVar1 = *(long *)(param_1 + 0x80), -1 < *(int *)(lVar1 + 0x18))) &&
      (*(long *)(lVar1 + 0x28) != 0)) && (*(long *)(lVar1 + 0x20) != 0)) {
    local_30 = *(undefined8 **)(param_1 + 0xd0);
    if ((local_30 != (undefined8 *)0x0) && (*(char *)((long)local_30 + 0xc) == '\x01')) {
      FUN_10037dd20(*local_30,*(undefined4 *)(local_30 + 1));
      lVar1 = *(long *)(param_1 + 0x80);
    }
    FUN_100390384(lVar1,param_2);
    FUN_100390384(*(undefined8 *)(param_1 + 0xa0),param_2);
    FUN_100385fb0(&local_30);
  }
  FUN_100385098(&local_28);
  return;
}

