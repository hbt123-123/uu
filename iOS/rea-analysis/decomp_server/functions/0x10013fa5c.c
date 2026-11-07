// rea decompile_all
// name: FUN_10013fa5c
// address: 0x10013fa5c
// body: available
// range: 0x10013fa5c-0x10013fb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013fa5c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x35);
  __sSS6appendyySSF(0x1000000000000023,0x8000000100891020);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0xe887a0e6ae9be72d,0xae003a84bee5afb7);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

