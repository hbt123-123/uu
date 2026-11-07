// rea decompile_all
// name: FUN_10037a418
// address: 0x10037a418
// body: available
// range: 0x10037a418-0x10037a4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037a418(long param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_30;
  undefined1 uStack_21;
  
  if ((*(long *)(param_3 + 0x20) + (ulong)DAT_100ad13d0 <= *(ulong *)(param_1 + 0x20)) &&
     (IVar1 = objc_stub::retainCount(param_3), IVar1 == 1)) {
    FUN_100386734(1,"libMMKV.mm","+[MMKV tryAutoCleanUpInstances]_block_invoke",0x34e,
                  "adding to cleanup queue mmkv [%@], m_lastAccessTime: %llu");
    local_30 = param_2;
    FUN_10037ba88(&DAT_100ad13b0,&local_30,(long *)(param_3 + 0x20));
    FUN_10037b9e0(DAT_100ad13b0,DAT_100ad13b8,&uStack_21,DAT_100ad13b8 - DAT_100ad13b0 >> 4);
  }
  return;
}

