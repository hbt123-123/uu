// rea decompile_all
// name: FUN_100249a8c
// address: 0x100249a8c
// body: available
// range: 0x100249a8c-0x100249b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100249a8c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  if (DAT_100a7fa78 != -1) {
    _swift_once(&DAT_100a7fa78,FUN_1002490bc);
  }
  _swift_beginAccess(&DAT_100b363f0,auStack_48,0x21,0);
  FUN_10024a4c0(param_1,param_2);
  _swift_endAccess(auStack_48);
  _swift_bridgeObjectRelease(param_2);
  return;
}

