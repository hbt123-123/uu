// rea decompile_all
// name: FUN_100005dec
// address: 0x100005dec
// body: available
// range: 0x100005dec-0x100005e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100005dec(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = 0xec00000064657463;
  uVar4 = 0xe900000000000064;
  uVar1 = 0x657463656e6e6f63;
  if (param_1 != 2) {
    uVar4 = 0xe600000000000000;
    uVar1 = 0x64656c696166;
  }
  uVar2 = 0x656e6e6f63736964;
  if (param_1 != 0) {
    uVar3 = 0xea0000000000676e;
    uVar2 = 0x697463656e6e6f63;
  }
  if (param_1 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar1;
  return auVar5;
}

