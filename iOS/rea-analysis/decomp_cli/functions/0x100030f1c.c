// rea decompile_all
// name: thunk_FUN_10002d0ac
// address: 0x100030f1c
// body: available
// range: 0x100030f1c-0x100030f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10002d0ac(undefined8 *param_1)

{
  FUN_10002d0ec(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  FUN_10002d0fc(param_1[3],param_1[4],*(undefined1 *)(param_1 + 5),
                *(undefined1 *)((long)param_1 + 0x29));
  _swift_bridgeObjectRelease(param_1[7]);
  return;
}

