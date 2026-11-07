// rea decompile_all
// name: FUN_10009a308
// address: 0x10009a308
// body: available
// range: 0x10009a308-0x10009a39f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009a308(ulong param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((long)param_1 < 0xf) {
    FUN_1001f8368(param_1);
  }
  else {
    __s10Foundation13__DataStorageCMa();
    _swift_allocObject();
    __s10Foundation13__DataStorageC6lengthACSi_tcfc(param_1);
    if (0x7ffffffe < param_1) {
      lVar1 = 0;
      __s10Foundation4DataV14RangeReferenceCMa();
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(ulong *)(lVar1 + 0x18) = param_1;
    }
  }
  return;
}

