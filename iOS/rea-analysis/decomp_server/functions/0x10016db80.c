// rea decompile_all
// name: FUN_10016db80
// address: 0x10016db80
// body: available
// range: 0x10016db80-0x10016dc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016db80(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_68;
  long local_60;
  long lStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_68 = &DAT_10080f090;
  lVar1 = 0x13f;
  FUN_10016dc28();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBi64_WV_100995738 + 0x40;
    local_50 = &DAT_10080f0a8;
    local_40 = &DAT_10080f0c0;
    local_30 = &DAT_10080f0d8;
    puStack_28 = &DAT_10080f0d8;
    lStack_58 = local_60;
    puStack_38 = puStack_48;
    _swift_updateClassMetadata2(param_1,0x100,9,&local_68,param_1 + 0x50);
  }
  return;
}

