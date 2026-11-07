// rea decompile_all
// name: FUN_1000e20b0
// address: 0x1000e20b0
// body: available
// range: 0x1000e20b0-0x1000e217b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e20b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  __ss11_StringGutsV4growyySiF(0x7f);
  __sSS6appendyySSF(0x1000000000000071,0x8000000100886fd0);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x7461506c6572202c,0xea00000000003d68);
  __sSS6appendyySSF(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

