// rea decompile_all
// name: FUN_1000b6ac4
// address: 0x1000b6ac4
// body: available
// range: 0x1000b6ac4-0x1000b6b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b6ac4(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar2 = 0x74726f6873;
    if (param_1 != '\x01') {
      uVar2 = 0xd000000000000012;
    }
    uVar1 = 0xe500000000000000;
    if (param_1 != '\x01') {
      uVar1 = 0x80000001000c9c90;
    }
    auVar3._8_8_ = uVar1;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  auVar4._8_8_ = 0xe400000000000000;
  auVar4._0_8_ = 0x676e6f6c;
  return auVar4;
}

