// rea decompile_all
// name: FUN_1000b374c
// address: 0x1000b374c
// body: available
// range: 0x1000b374c-0x1000b3813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000b374c(code *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x21;
  
  _swift_bridgeObjectRetain();
  __sSS8IteratorV4nextSJSgyF();
  while( true ) {
    if (param_2 == 0) {
      _swift_bridgeObjectRelease(param_4);
      return 0;
    }
    uVar1 = 0;
    (*param_1)();
    _swift_bridgeObjectRelease();
    if ((unaff_x21 != 0) || ((uVar1 & 1) != 0)) break;
    __sSS8IteratorV4nextSJSgyF();
  }
  _swift_bridgeObjectRelease(param_4);
  return 1;
}

