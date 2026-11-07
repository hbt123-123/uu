// rea decompile_all
// name: FUN_10036aba8
// address: 0x10036aba8
// body: available
// range: 0x10036aba8-0x10036ac83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036aba8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100365874();
  if (param_2 < 0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_100365860();
    if (param_2 < 0x40) {
      local_48 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      FUN_10036584c();
      if (param_2 < 0x40) {
        local_40 = *(long *)(lVar1 + -8) + 0x40;
        lVar1 = 0x13f;
        FUN_100365838();
        if (param_2 < 0x40) {
          local_38 = *(long *)(lVar1 + -8) + 0x40;
          lVar1 = 0x13f;
          FUN_100365824();
          if (param_2 < 0x40) {
            local_30 = *(long *)(lVar1 + -8) + 0x40;
            puStack_28 = &DAT_10081ceb8;
            _swift_initEnumMetadataMultiPayload(param_1,0x100,6,&local_50);
          }
        }
      }
    }
  }
  return;
}

