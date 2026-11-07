// rea decompile_all
// name: FUN_1003f9a74
// address: 0x1003f9a74
// body: available
// range: 0x1003f9a74-0x1003f9aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f9a74(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_50 = &DAT_100824648;
  puStack_48 = &DAT_100824648;
  local_40 = &DAT_100824648;
  puStack_38 = &DAT_100824648;
  local_30 = &DAT_100824648;
  lVar1 = 0x13f;
  FUN_1000d46d0();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}

