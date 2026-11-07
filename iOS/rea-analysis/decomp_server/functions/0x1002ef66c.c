// rea decompile_all
// name: FUN_1002ef66c
// address: 0x1002ef66c
// body: available
// range: 0x1002ef66c-0x1002ef6ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ef66c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_50 = &DAT_100818e80;
  puStack_48 = &DAT_100818e98;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  __sSqMa();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100818e80;
    local_30 = &DAT_100818eb0;
    puStack_28 = &DAT_100818ec8;
    _swift_initStructMetadata(param_1,0,6,&local_50,param_1 + 0x20);
  }
  return;
}

