// rea decompile_all
// name: FUN_10031143c
// address: 0x10031143c
// body: available
// range: 0x10031143c-0x1003114cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10031143c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  local_40 = &DAT_1008196e0;
  lVar1 = 0x13f;
  __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_1008196f8;
    lVar1 = 0x13f;
    FUN_100300610();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,4,&local_40);
    }
  }
  return;
}

