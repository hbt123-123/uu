// rea decompile_all
// name: FUN_10054d91c
// address: 0x10054d91c
// body: available
// range: 0x10054d91c-0x10054da0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10054d91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  __ss11_StringGutsV4growyySiF(0x2c);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(param_1,param_2);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  lVar1 = 0;
  FUN_10054df34();
  _swift_allocObject();
  *(undefined1 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x18) = 0xd000000000000029;
  *(undefined8 *)(lVar1 + 0x20) = 0x80000001008bc740;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x30) = param_4;
  *(undefined8 *)(lVar1 + 0x38) = param_5;
  *(undefined8 *)(lVar1 + 0x40) = param_6;
  *(undefined8 *)(lVar1 + 0x48) = param_7;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  return lVar1;
}

