// rea decompile_all
// name: FUN_1000d4648
// address: 0x1000d4648
// body: available
// range: 0x1000d4648-0x1000d46cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d4648(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_48 = &DAT_10080c4e8;
  puStack_40 = &DAT_10080c500;
  lVar1 = 0x13f;
  FUN_1000d46d0();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_10080c518;
    local_28 = &DAT_10080c4e8;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
  }
  return;
}

