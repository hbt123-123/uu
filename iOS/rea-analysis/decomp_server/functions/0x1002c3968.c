// rea decompile_all
// name: FUN_1002c3968
// address: 0x1002c3968
// body: available
// range: 0x1002c3968-0x1002c39b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002c3968(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1002c3ae0();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  _swift_retain(param_1);
  return lVar1;
}

