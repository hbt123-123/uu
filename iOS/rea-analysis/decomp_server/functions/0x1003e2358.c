// rea decompile_all
// name: FUN_1003e2358
// address: 0x1003e2358
// body: available
// range: 0x1003e2358-0x1003e23bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e2358(undefined8 *param_1,undefined1 *param_2)

{
  if (param_2[0x31] == '\x04') {
    *param_1 = *(undefined8 *)(param_2 + 8);
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1003e2410();
    _swift_allocError(&DAT_1009e6258,param_2,0,0);
    *param_2 = 3;
    _swift_willThrow();
  }
  return;
}

