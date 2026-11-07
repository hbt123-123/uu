// rea decompile_all
// name: FUN_100404888
// address: 0x100404888
// body: available
// range: 0x100404888-0x10040494b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100404888(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  __ss11_StringGutsV4growyySiF(0x32);
  _swift_bridgeObjectRelease(0xe000000000000000);
  bVar3 = (param_2 & 1) == 0;
  uVar1 = 0x6465776f6c6c61;
  if (bVar3) {
    uVar1 = 0x64657463656a6572;
  }
  uVar2 = 0xe700000000000000;
  if (bVar3) {
    uVar2 = 0xe800000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = &DAT_d000000000000030;
  param_1[1] = 0x80000001008b61f0;
  return;
}

