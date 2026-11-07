// rea decompile_all
// name: FUN_100404cf4
// address: 0x100404cf4
// body: available
// range: 0x100404cf4-0x100404dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100404cf4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  __ss11_StringGutsV4growyySiF(0x27);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0x6e776f6e6b6e75;
  if (param_3 != 0) {
    uVar1 = param_2;
  }
  lVar2 = -0x1900000000000000;
  if (param_3 != 0) {
    lVar2 = param_3;
  }
  _swift_bridgeObjectRetain(param_3);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0xd000000000000025;
  param_1[1] = 0x80000001008b6150;
  return;
}

