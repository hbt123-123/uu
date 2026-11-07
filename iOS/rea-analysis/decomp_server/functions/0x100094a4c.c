// rea decompile_all
// name: FUN_100094a4c
// address: 0x100094a4c
// body: available
// range: 0x100094a4c-0x100094af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100094a4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x70696b73202c,0xe600000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = &DAT_d000000000000028;
  param_1[1] = 0x8000000100880350;
  return;
}

