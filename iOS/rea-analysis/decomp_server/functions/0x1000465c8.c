// rea decompile_all
// name: FUN_1000465c8
// address: 0x1000465c8
// body: available
// range: 0x1000465c8-0x10004669f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000465c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(0xd000000000000047,0x800000010087cea0);
  FUN_100045ddc(param_2,FUN_10006d644,FUN_100074214,FUN_100046d5c);
  uVar1 = param_2;
  puVar2 = PTR___sSiN_100995968;
  __sSa11descriptionSSvg();
  _swift_bridgeObjectRelease(param_2);
  __sSS6appendyySSF(uVar1,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

