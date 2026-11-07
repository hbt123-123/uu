// rea decompile_all
// name: FUN_1000d8138
// address: 0x1000d8138
// body: available
// range: 0x1000d8138-0x1000d81d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d8138(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  long lStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_58 = PTR___sBi32_WV_100995730 + 0x40;
  puStack_50 = &DAT_10080c8a8;
  local_48 = &DAT_10080c8a8;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_100995728 + 0x40;
    local_30 = &DAT_10080c938;
    lStack_38 = local_40;
    _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
  }
  return;
}

