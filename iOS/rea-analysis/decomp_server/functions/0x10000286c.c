// rea decompile_all
// name: FUN_10000286c
// address: 0x10000286c
// body: available
// range: 0x10000286c-0x1000028d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000286c(void)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_CGVirtualDisplay;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = &cf_CGVirtualDisplayDescriptor;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = &cf_CGVirtualDisplayMode;
      _NSClassFromString();
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar1 = &cf_CGVirtualDisplaySettings;
        _NSClassFromString();
        if (pcVar1 != (cfstringStruct *)0x0) {
          return 1;
        }
      }
    }
  }
  FUN_100002a48(&cf_VirtualDisplayTrace_shimprivateclassesunavailable);
  return 0;
}

