// rea decompile_all
// name: FUN_100103e4c
// address: 0x100103e4c
// body: available
// range: 0x100103e4c-0x100103f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100103e4c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x23);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0x94e7af90e5b2b7e5;
  if ((param_2 & 1) == 0) {
    uVar1 = 0x94e781a6e7b2b7e5;
  }
  __sSS6appendyySSF(uVar1,0xa9000000000000a8);
  _swift_bridgeObjectRelease(0xa9000000000000a8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000021;
  param_1[1] = 0x800000010088a870;
  return;
}

