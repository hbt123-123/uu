// rea decompile_all
// name: FUN_1000eb474
// address: 0x1000eb474
// body: available
// range: 0x1000eb474-0x1000eb503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000eb474(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  long lStack_30;
  undefined *local_28;
  
  local_58 = &DAT_10080ceb0;
  puStack_50 = &DAT_10080ceb0;
  puStack_40 = PTR___sBbWV_100995728 + 0x40;
  local_48 = &DAT_10080ceb0;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    local_28 = &DAT_10080cec8;
    lStack_30 = local_38;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
  }
  return;
}

