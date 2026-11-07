// rea decompile_all
// name: FUN_10000291c
// address: 0x10000291c
// body: available
// range: 0x10000291c-0x10000298f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10000291c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x726f727265;
  if (param_1 != 2) {
    uVar1 = 0x6d617473656d6974;
  }
  uVar4 = 0xe500000000000000;
  if (param_1 != 2) {
    uVar4 = 0xe900000000000070;
  }
  uVar2 = 0x73736563637573;
  if (param_1 != 0) {
    uVar2 = 0x61746164;
  }
  uVar3 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar3 = 0xe400000000000000;
  }
  if (param_1 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar1;
  return auVar5;
}

