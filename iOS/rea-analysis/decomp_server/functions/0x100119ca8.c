// rea decompile_all
// name: FUN_100119ca8
// address: 0x100119ca8
// body: available
// range: 0x100119ca8-0x100119d4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100119ca8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  __ss11_StringGutsV4growyySiF(0x12);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_1001170ec(param_2,param_3 & 0x1ff);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = &DAT_d000000000000010;
  param_1[1] = 0x800000010088d390;
  return;
}

