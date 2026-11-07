// rea decompile_all
// name: FUN_1000168cc
// address: 0x1000168cc
// body: available
// range: 0x1000168cc-0x10001695b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000168cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___sBi64_WV_1000f02d0 + 0x40;
  puStack_30 = &DAT_1000cc7a0;
  puVar2 = &DAT_100101ed0;
  lVar1 = 0x13f;
  FUN_10001799c(0x13f,&DAT_100101ed0,PTR___s10Foundation4DateVMa_1000f07d0);
  if (puVar2 < (undefined *)0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}

