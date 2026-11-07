// rea decompile_all
// name: FUN_1002380ac
// address: 0x1002380ac
// body: available
// range: 0x1002380ac-0x100238133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002380ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  long local_38;
  long lStack_30;
  undefined *local_28;
  
  local_40 = PTR___sBoWV_100995740 + 0x40;
  lVar1 = 0x13f;
  FUN_100238134();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    local_28 = &DAT_100813d78;
    lStack_30 = local_38;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}

